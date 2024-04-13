void __fastcall CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
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
  struct System_Int32_array *v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_String_array *v43; // x20
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x20
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v92; // x20
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x0
  __int64 v100; // x0

  if ( (byte_42E9A55 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&string___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17003/*"bit_result02"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17004/*"bit_result03"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_17005/*"bit_result04"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_17002/*"bit_result01"*/, v32, v33, v34);
    byte_42E9A55 = 1;
  }
  v35 = (struct System_Int32_array *)sub_B5D5DC(string___TypeInfo, 3LL);
  if ( !v35 )
LABEL_24:
    sub_B5D69C(v35, v36);
  v43 = (struct System_String_array *)v35;
  v35 = (struct System_Int32_array *)StringLiteral_17002/*"bit_result01"*/;
  if ( StringLiteral_17002/*"bit_result01"*/ )
  {
    v35 = (struct System_Int32_array *)sub_B5D684(StringLiteral_17002/*"bit_result01"*/, v43->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_25;
    v44 = (System_Int32_array **)StringLiteral_17002/*"bit_result01"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( !v43->max_length )
    goto LABEL_23;
  v43->m_Items[0] = (System_String_o *)v44;
  sub_B5D560((BattleServantConfConponent_o *)v43->m_Items, v44, v37, v38, v39, v40, v41, v42);
  v35 = (struct System_Int32_array *)StringLiteral_17003/*"bit_result02"*/;
  if ( StringLiteral_17003/*"bit_result02"*/ )
  {
    v35 = (struct System_Int32_array *)sub_B5D684(StringLiteral_17003/*"bit_result02"*/, v43->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_25;
    v51 = (System_Int32_array **)StringLiteral_17003/*"bit_result02"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( v43->max_length <= 1 )
    goto LABEL_23;
  v43->m_Items[1] = (System_String_o *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v43->m_Items[1], v51, v45, v46, v47, v48, v49, v50);
  v35 = (struct System_Int32_array *)StringLiteral_17004/*"bit_result03"*/;
  if ( !StringLiteral_17004/*"bit_result03"*/ )
  {
    v58 = 0LL;
    goto LABEL_18;
  }
  v35 = (struct System_Int32_array *)sub_B5D684(StringLiteral_17004/*"bit_result03"*/, v43->obj.klass->_1.element_class);
  if ( !v35 )
  {
LABEL_25:
    v100 = sub_B5D6BC(v35);
    sub_B5D668(v100, 0LL);
  }
  v58 = (System_Int32_array **)StringLiteral_17004/*"bit_result03"*/;
LABEL_18:
  if ( v43->max_length <= 2 )
    goto LABEL_23;
  v43->m_Items[2] = (System_String_o *)v58;
  sub_B5D560((BattleServantConfConponent_o *)&v43->m_Items[2], v58, v52, v53, v54, v55, v56, v57);
  this->fields.startAniName = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.startAniName,
    (System_Int32_array **)v43,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = (System_Int32_array **)StringLiteral_17005/*"bit_result04"*/;
  this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_17005/*"bit_result04"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.LimitAnimName, v65, v66, v67, v68, v69, v70, v71);
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_32A42C0;
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v72;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFigureCollectList,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v79;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.afterFigureCollectList,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v35 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v35 )
    goto LABEL_24;
  if ( !v35->max_length )
  {
LABEL_23:
    v99 = sub_B5D6C8(v35);
    sub_B5D668(v99, 0LL);
  }
  v35->m_Items[1] = 100;
  this->fields.ChangeCardEffectLvList = v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ChangeCardEffectLvList,
    (System_Int32_array **)v35,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  this->fields.autoFadeout = 1;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  v92 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B5D694(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v92,
    (const MethodInfo_25017F0 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v92 )
    goto LABEL_24;
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v92,
    1,
    (const MethodInfo_25029CC *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v92,
    10,
    (const MethodInfo_25029CC *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v92,
    26,
    (const MethodInfo_25029CC *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v92,
    19,
    (const MethodInfo_25029CC *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v92,
    24,
    (const MethodInfo_25029CC *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v92;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.limitUpKinds,
    (System_Int32_array **)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v16; // x1
  WebViewObject_o *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E9A07 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v5, v6, v7);
    byte_42E9A07 = 1;
  }
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fsm,
    (System_Int32_array **)Component_WebViewObject,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v16);
  v17 = UnityEngine_Component__GetComponent_WebViewObject_(
          transform,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


bool __fastcall CombineResultEffectComponent__CheckCombineLimit(
        CombineResultEffectComponent_o *this,
        int32_t oldLv,
        int32_t currentLv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  void *Instance; // x0
  __int64 v11; // x1
  ServantLvDetailMaster_o *v12; // x22
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v15; // w8

  if ( (byte_42E9A1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, oldLv, currentLv, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E9A1B = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v12 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
  HighestData = ServantLvDetailMaster__GetHighestData(v12, Rarity, oldLv, 0LL);
  Instance = ServantLvDetailMaster__GetHighestData(v12, Rarity, currentLv, 0LL);
  if ( !HighestData && Instance )
    goto LABEL_12;
  if ( HighestData )
  {
    if ( Instance )
    {
      if ( HighestData->fields.frameType == *((_DWORD *)Instance + 6) )
        goto LABEL_11;
LABEL_12:
      v15 = *((_DWORD *)Instance + 5);
      LOBYTE(Instance) = 1;
      this->fields.combineLimitLv = v15;
      return (char)Instance;
    }
LABEL_14:
    sub_B5D69C(Instance, v11);
  }
LABEL_11:
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


bool __fastcall CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_B5D69C(0LL, method);
  return LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0LL);
}


bool __fastcall CombineResultEffectComponent__CheckSaintGraphProfileChange(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ServantCommentMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1

  if ( (byte_42E9A52 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCommentMaster___, svtId, limitCount, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42E9A52 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v10);
  return ServantCommentMaster__IsOpenImageLimitProfile(Master_WarQuestSelectionMaster, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0

  if ( (byte_42E9A4F & 1) == 0 )
  {
    sub_B5D5C4(&System_GC_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9A4F = 1;
  }
  this->fields.skillShowIndex = 0;
  this->fields.tdShowIndex = 0;
  CombineResultEffectComponent__DestroySvtFigure(this, method);
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0LL) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_18;
    SvtCombineResultWindowComponent__Close((SvtCombineResultWindowComponent_o *)svtResultInfoWindow, 0LL);
  }
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0LL) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_18;
    SkillUpResultWindowComponent__Close((SkillUpResultWindowComponent_o *)svtResultInfoWindow, 0LL);
  }
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43893280(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_18:
    sub_B5D69C(svtResultInfoWindow, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 0, 0LL);
}


void __fastcall CombineResultEffectComponent__CloseLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  LimitCountSealDialogComponent_o *limitCountSealDialog; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E9A51 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__, v8, v9, v10);
    byte_42E9A51 = 1;
  }
  v11 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B5D5CC(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_B5D69C(v15, v16);
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v14, 0LL);
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
  UnityEngine_Component_o *StandFigureNode; // x22
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  DataManager_o *v40; // x24
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x25
  SvtMultiPortraitMaster_o *v42; // x24
  int32_t v43; // w20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v44; // x24
  _BOOL8 v45; // x0
  __int64 v46; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass; // w8
  int32_t v49; // w25
  UnityEngine_GameObject_o *v50; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Component_o *v59; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v61; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v63; // x0
  __int64 v64; // x1
  struct System_Int32_array *v65; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v67; // x26
  StandFigureCollect_o *v68; // x27
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x0
  __int64 v72; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v74; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v76; // x21
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42E9A33 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      svtId,
      imageLimitCount,
      *(_QWORD *)&faceType);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&StandFigureCollect_TypeInfo, v34, v35, v36);
    byte_42E9A33 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v40 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v40,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  v42 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                imageLimitCount,
                                0LL);
  if ( !v42 )
    goto LABEL_40;
  v43 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v42, svtId, (int32_t)Instance, 0LL);
  if ( !Instance
    || (v44 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_26229964(
                                    gameObject,
                                    svtId,
                                    v43,
                                    1,
                                    faceType,
                                    1,
                                    0LL,
                                    0,
                                    -1,
                                    0LL);
      if ( Instance )
      {
        v74 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = this->fields.afterFigureCollectList;
          v76 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v76, 0LL, v74, 0LL);
          if ( afterFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_40:
    sub_B5D69C(Instance, v39);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v78,
    v44,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v79,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v45 )
      break;
    current = (SvtMultiPortraitEntity_o *)v79.fields.current;
    if ( !v79.fields.current )
      sub_B5D69C(v45, v46);
    klass = (int)v79.fields.current[2].klass;
    if ( klass >= 1 )
      v49 = klass + 1;
    else
      v49 = 1;
    if ( !StandFigureNode )
      sub_B5D69C(v45, v46);
    v50 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v50,
                         current->fields.portraitImageId,
                         1,
                         faceType,
                         v49,
                         0LL,
                         0,
                         -1,
                         0LL);
    v59 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B5D69C(0LL, v52);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B5D560(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    transform = UnityEngine_Component__get_transform(v59, 0LL);
    if ( !transform )
      sub_B5D69C(0LL, v61);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v63 = UnityEngine_Component__get_gameObject(v59, 0LL);
      v65 = current->fields.commonPosition;
      if ( !v65 )
        sub_B5D69C(v63, v64);
      max_length = v65->max_length;
      if ( max_length == 1 )
      {
        v71 = sub_B5D6C8(v63);
        sub_B5D668(v71, 0LL);
      }
      if ( !max_length )
      {
        v72 = sub_B5D6C8(v63);
        sub_B5D668(v72, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_32431468(v63, (float)v65->m_Items[1], (float)v65->m_Items[2], 0LL);
    }
    v67 = this->fields.afterFigureCollectList;
    v68 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v68, current, (UIStandFigureR_o *)v59, 0LL);
    if ( !v67 )
      sub_B5D69C(v69, v70);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v67,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v79,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  UnityEngine_Component_o *StandFigureNode; // x23
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  DataManager_o *v45; // x22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v48; // x27
  __int64 v49; // x22
  __int64 v50; // x24
  int32_t v51; // w24
  const MethodInfo *v52; // x3
  int32_t v53; // w25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v54; // x22
  unsigned int v55; // w26
  _BOOL8 v56; // x0
  __int64 v57; // x1
  SvtMultiPortraitEntity_o *current; // x27
  int klass; // w8
  int32_t v60; // w28
  UnityEngine_GameObject_o *v61; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Component_o *v71; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v73; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v75; // x0
  __int64 v76; // x1
  struct System_Int32_array *v77; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v79; // x22
  StandFigureCollect_o *v80; // x25
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x0
  __int64 v84; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v86; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v88; // x21
  char v89; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_42E9A2A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      formId,
      imageLimitCount,
      *(_QWORD *)&friendshipNum);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&StandFigureCollect_TypeInfo, v39, v40, v41);
    byte_42E9A2A = 1;
  }
  memset(&v92, 0, sizeof(v92));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v45 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v45,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_54;
  v48 = (SvtMultiPortraitMaster_o *)Instance;
  v50 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v93.fields.currentCryptoKey = v50;
  *(_QWORD *)&v93.fields.fakeValue = v49;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v93, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  v51 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                MasterData_WarQuestSelectionMaster,
                                (int32_t)Instance,
                                imageLimitCount,
                                0LL);
  v53 = (int)Instance;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v51,
                                  (int32_t)Instance,
                                  v52);
    v89 = (char)Instance;
    if ( !v48 )
      goto LABEL_54;
  }
  else
  {
    v89 = 0;
    if ( !v48 )
      goto LABEL_54;
  }
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v48, v51, v53, 0LL);
  if ( !Instance
    || (v54 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_26229964(
                                     gameObject,
                                     v51,
                                     v53,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v89 & 1,
                                     friendshipNum,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_26230892(
                                     gameObject,
                                     v51,
                                     v53,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     0,
                                     friendshipNum,
                                     0LL));
      v86 = (UIStandFigureR_o *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          currentFigureCollectList = this->fields.currentFigureCollectList;
          v88 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v88, 0LL, v86, 0LL);
          if ( currentFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_54:
    sub_B5D69C(Instance, v44);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v91,
    v54,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v55 = ignoreFormChangeCheck | ((unsigned int)formId >> 31);
  v92 = v91;
  while ( 1 )
  {
    v56 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v92,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v56 )
      break;
    current = (SvtMultiPortraitEntity_o *)v92.fields.current;
    if ( !v92.fields.current )
      sub_B5D69C(v56, v57);
    klass = (int)v92.fields.current[2].klass;
    if ( klass >= 1 )
      v60 = klass + 1;
    else
      v60 = 1;
    if ( v55 )
    {
      if ( !StandFigureNode )
        sub_B5D69C(v56, v57);
      v61 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v61,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v60,
                           0LL,
                           v89 & 1,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_B5D69C(v56, v57);
      v70 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v70,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v60,
                           0LL,
                           0LL);
    }
    v71 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B5D69C(0LL, v63);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B5D560(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    transform = UnityEngine_Component__get_transform(v71, 0LL);
    if ( !transform )
      sub_B5D69C(0LL, v73);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v75 = UnityEngine_Component__get_gameObject(v71, 0LL);
      v77 = current->fields.commonPosition;
      if ( !v77 )
        sub_B5D69C(v75, v76);
      max_length = v77->max_length;
      if ( max_length == 1 )
      {
        v83 = sub_B5D6C8(v75);
        sub_B5D668(v83, 0LL);
      }
      if ( !max_length )
      {
        v84 = sub_B5D6C8(v75);
        sub_B5D668(v84, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_32431468(v75, (float)v77->m_Items[1], (float)v77->m_Items[2], 0LL);
    }
    v79 = this->fields.currentFigureCollectList;
    v80 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v80, current, (UIStandFigureR_o *)v71, 0LL);
    if ( !v79 )
      sub_B5D69C(v81, v82);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v79,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v92,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall CombineResultEffectComponent__DestroySvtFigure(
        CombineResultEffectComponent_o *this,
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
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  __int64 v25; // x1
  UIStandFigureR_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Object_o *gameObject; // x20
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x24
  UnityEngine_Object_o *v33; // x20
  __int64 v34; // x1
  UIStandFigureR_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Component_o *v37; // x0
  UnityEngine_Object_o *v38; // x20
  int v39; // w20
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-78h] BYREF
  int v41[2]; // [xsp+20h] [xbp-60h]
  int v42; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42E9A4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E9A4E = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v42 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v43 = v40;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v21 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B5D69C(v21, v22);
    monitor = (UnityEngine_Object_o *)v43.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v26 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v26 )
        sub_B5D69C(0LL, v25);
      UIStandFigureR__ReleaseCharacter(v26, 0LL);
      v28 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v28 )
        sub_B5D69C(0LL, v27);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
    }
  }
  v41[0] = 88;
  v42 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v42 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentFigureCollectList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v43 = v40;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v30 )
      break;
    v32 = v43.fields.current;
    if ( !v43.fields.current )
      sub_B5D69C(v30, v31);
    v33 = (UnityEngine_Object_o *)v43.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
    {
      v35 = (UIStandFigureR_o *)v32[1].monitor;
      if ( !v35 )
        sub_B5D69C(0LL, v34);
      UIStandFigureR__ReleaseCharacter(v35, 0LL);
      v37 = (UnityEngine_Component_o *)v32[1].monitor;
      if ( !v37 )
        sub_B5D69C(0LL, v36);
      v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v37, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v38, 0LL);
    }
  }
  v41[0] = 187;
  v39 = ++v42;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v39 && v41[v39 - 1] == 187 )
    v42 = v39 - 1;
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
LABEL_43:
    sub_B5D69C(currentFigureCollectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentFigureCollectList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_B5D69C(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
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

  if ( (byte_42E9A3D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CombineResultEffectComponent__EndLoad_b__144_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E9A3D = 1;
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
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__144_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v17, 0LL);
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
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v35; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v42; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v45; // x20
  __int64 v46; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  int32_t v48; // w20
  CombineResultEffectComponent_o *v49; // x0
  int32_t v50; // w21
  const MethodInfo *v51; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v52; // x22
  System_Action_o *v53; // x23
  __int64 v54; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v8 = this;
  if ( (byte_42E9A46 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v12, v13, v14);
    sub_B5D5C4(&Method_CombineResultEffectComponent__EndPlay_b__154_0__, v15, v16, v17);
    sub_B5D5C4(&Method_CombineResultEffectComponent__EndPlay_b__154_1__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v27, v28, v29);
    this = (CombineResultEffectComponent_o *)sub_B5D5C4(&StringLiteral_21782/*"playVoice"*/, v30, v31, v32);
    byte_42E9A46 = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
      {
        v54 = sub_B5D6C8(this);
        sub_B5D668(v54, 0LL);
      }
      v35 = playVoiceList->m_Items[playCnt];
      if ( v35 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_21782/*"playVoice"*/,
          v35->fields.delay,
          0LL);
        return;
      }
    }
LABEL_35:
    sub_B5D69C(this, method);
  }
  if ( v8->fields.player )
    CombineResultEffectComponent__stopVoice(v8, method);
  v8->fields.playCnt = 0;
  v8->fields.playVoiceList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  this = (CombineResultEffectComponent_o *)v8->fields.limitUpKinds;
  if ( !this )
    goto LABEL_35;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                             (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this,
                                             v8->fields.kind,
                                             (const MethodInfo_2501E74 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8->fields.isLimitUpSuppression )
      goto LABEL_13;
    kind = v8->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_13;
    baseUsrSvtData = v8->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_35;
    v46 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v55.fields.currentCryptoKey = v46;
    *(_QWORD *)&v55.fields.fakeValue = v45;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               v55,
                                               0LL);
    v47 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v8->fields.baseUsrSvtData;
    if ( !v47 )
      goto LABEL_35;
    v48 = (int)this;
    v49 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v47[6],
                                              0LL);
    v50 = (_DWORD)v49 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v49, v48, (_DWORD)v49 + 1, v51) )
    {
      v52 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_B5D694(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v52,
        (Il2CppObject *)v8,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v53, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__154_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v48, v50, v52, v53, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v8->fields.limitUpResultCheck;
      v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__154_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_35;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v37, 1, 0LL);
    }
  }
  else if ( v8->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v8, method);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v8, v38) )
    {
      this = (CombineResultEffectComponent_o *)v8->fields.touchInfo;
      if ( !this )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v8->fields.costumeId;
      v42 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v42 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v42->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v8, v39);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v8, v8->fields.skillShowIndex, v40);
        ++v8->fields.skillShowIndex;
      }
    }
    else
    {
      CombineResultEffectComponent__EndDisp(v8, method);
    }
  }
}


void __fastcall CombineResultEffectComponent__FadeoutProcess(
        CombineResultEffectComponent_o *this,
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
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42E9A4B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E9A4B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v16 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
      v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__,
        0LL);
      if ( !Instance )
        sub_B5D69C(v19, v20);
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
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
  __int64 v11; // x0

  if ( (byte_42E9A32 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, limit, method);
    byte_42E9A32 = 1;
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
    sub_B5D69C(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v11 = sub_B5D6C8(v6);
      sub_B5D668(v11, 0LL);
    }
    if ( ServantIdsIgnoreFormChange->m_Items[v9 + 1] == svtId )
      break;
    if ( (int)++v9 >= max_length )
      return 0;
  }
  return limit != 0;
}


System_String_o *__fastcall CombineResultEffectComponent__GetNameFromMessageId(
        CombineResultEffectComponent_o *this,
        int32_t messageId,
        int32_t limitCount,
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
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantCostumeMaster_o *v25; // x20
  __int64 v26; // x21
  __int64 v27; // x22
  struct UserServantEntity_o *v29; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x19
  __int64 v31; // x20
  __int64 v32; // x21
  ServantEntity_o *v33; // [xsp+0h] [xbp-30h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42E9A4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, messageId, limitCount, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E9A4C = 1;
  }
  v33 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_23;
    v25 = (ServantCostumeMaster_o *)Instance;
    v27 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = v27;
    *(_QWORD *)&v35.fields.fakeValue = v26;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v35, 0LL);
    if ( !v25 )
      goto LABEL_23;
    if ( ServantCostumeMaster__TryGetEntity(v25, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_23:
      sub_B5D69C(Instance, v23);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v29 = this->fields.resUsrSvtData;
  if ( !v29 )
    goto LABEL_23;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v32;
  *(_QWORD *)&v36.fields.fakeValue = v31;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL);
  if ( !v30 )
    goto LABEL_23;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v30,
          (WarEntity_o **)&v33,
          (int32_t)Instance,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v33;
  if ( !v33 )
    goto LABEL_23;
  return ServantEntity__getName(v33, -1, -1, 0LL);
}


UIPanel_o *__fastcall CombineResultEffectComponent__GetStandFigureNode(
        CombineResultEffectComponent_o *this,
        System_String_o *fmsString,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0
  UnityEngine_GameObject_o *effect; // x8
  System_String_o *v8; // x19
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_42E9A2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)fmsString, (_DWORD)method, v3);
    byte_42E9A2D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  fmsString,
                                  0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                  (HutongGames_PlayMaker_FsmString_o *)fsm,
                                  0LL),
        (effect = this->fields.effect) == 0LL)
    || (v8 = (System_String_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(effect, 0LL),
        (fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v8, 1, 0LL)) == 0LL) )
  {
    sub_B5D69C(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


void __fastcall CombineResultEffectComponent__InitChangeInfoOnCostume(
        CombineResultEffectComponent_o *this,
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
  int64_t Instance; // x0
  __int64 id; // x1
  __int64 v19; // x23
  int64_t v20; // x20
  unsigned int v21; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v23; // q1
  __int64 v24; // x21
  __int128 v25; // q0
  int64_t v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v34; // x8
  SkillInfo_o *v35; // x9
  SkillInfo_o *v36; // x8
  bool v37; // w8
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v42; // [xsp+68h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *v44; // [xsp+78h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_42E9A40 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E9A40 = 1;
  }
  skillInfoList = 0LL;
  tdInfo = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
          if ( Instance )
          {
            v19 = *(_QWORD *)(Instance + 24);
            v20 = Instance;
            if ( (int)v19 >= 1 )
            {
              v21 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_54;
                v23 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v24 = *(_QWORD *)(v20 + 8LL * (int)v21 + 32);
                *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v41.fields.fakeValue = v23;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v40 = v41;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v40, 0LL);
                if ( !v24 )
                  goto LABEL_54;
                v25 = *(_OWORD *)(v24 + 32);
                v26 = Instance;
                *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
                *(_OWORD *)&v39.fields.fakeValue = v25;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v39, 0LL);
                if ( v26 == Instance )
                  break;
                if ( (int)++v21 >= (int)v19 )
                  goto LABEL_21;
                if ( v21 >= *(_DWORD *)(v20 + 24) )
                {
LABEL_55:
                  v38 = sub_B5D6C8(Instance);
                  sub_B5D668(v38, 0LL);
                }
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v24;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
                (System_Int32_array **)v24,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
            }
LABEL_21:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v44, -1, -1, 1, 0, -1, 0LL);
                for ( i = 0; ; ++i )
                {
                  Instance = (int64_t)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    Instance = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
                    break;
                  if ( !skillInfoList )
                    goto LABEL_54;
                  if ( i >= skillInfoList->max_length )
                    goto LABEL_55;
                  v34 = skillInfoList->m_Items[i];
                  if ( !v34 || !v44 )
                    goto LABEL_54;
                  if ( i >= v44->max_length )
                    goto LABEL_55;
                  v35 = v44->m_Items[i];
                  if ( !v35 )
                    goto LABEL_54;
                  id = (unsigned int)v34->fields.id;
                  if ( *(_QWORD *)&v34->fields.id != *(_QWORD *)&v35->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_54;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v34->fields.lv,
                      0LL);
                    if ( !v44 )
                      goto LABEL_54;
                    if ( i >= v44->max_length )
                      goto LABEL_55;
                    v36 = v44->m_Items[i];
                    if ( !v36 )
                      goto LABEL_54;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_54;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v36->fields.id,
                      v36->fields.lv,
                      0LL);
                  }
                }
                Instance = (int64_t)this->fields.baseUsrSvtData;
                if ( Instance )
                {
                  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0LL);
                  Instance = (int64_t)this->fields.resUsrSvtData;
                  if ( Instance )
                  {
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v42, -1, -1, 0, 0LL);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
                      if ( (Instance & 1) == 0 )
                      {
                        v37 = 0;
LABEL_52:
                        this->fields.treasureDeviceEnabled = v37;
                        return;
                      }
                      if ( tdInfo && v42 )
                      {
                        v37 = tdInfo->fields.id != v42->fields.id || tdInfo->fields.lv != v42->fields.lv;
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
    sub_B5D69C(Instance, id);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__InitCombineEffect(
        CombineResultEffectComponent_o *this,
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
  PlayMakerFSM_o *fsm; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Transform_o *transform; // x20
  int v26; // s0
  const MethodInfo *v29; // x1
  int32_t kind; // w8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v32; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x1

  if ( (byte_42E9A1D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11618/*"ResultEffect"*/, v14, v15, v16);
    byte_42E9A1D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_20;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_20;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11618/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_20;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.bgCollider;
  if ( !fsm )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)fsm, 0, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.touchInfo;
  if ( !fsm )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  kind = this->fields.kind;
  if ( kind == 16 || kind == 14 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v32 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v32 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v32->static_fields->DEFAULT_FADE_TIME;
    v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v34, 0LL);
      return;
    }
LABEL_20:
    sub_B5D69C(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v29);
  if ( this->fields.kind == 6 )
    CombineResultEffectComponent__loadBoxGachaEffect(this, v35);
  else
    CombineResultEffectComponent__SetResultServantVoiceData(this, v35);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  v4 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(npInfoAddManager, 0LL);
  return v4 >= 1 && this->fields.tdShowIndex < v4;
}


bool __fastcall CombineResultEffectComponent__IsShowSkillInfoOnCostume(
        CombineResultEffectComponent_o *this,
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
  CombineResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x0
  int v18; // w20
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  bool v23; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42E9A47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E9A47 = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v18 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)costumeSkillInfoManager;
  v22 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v22;
  *(_QWORD *)&v26.fields.fakeValue = v21;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                        v26,
                                                                                        0LL);
  if ( !v20 )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v20,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_B5D69C(costumeSkillInfoManager, method);
  v23 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)costumeSkillInfoManager, 30, 0LL);
  return v18 >= 1 && !v23 && this->fields.skillShowIndex < v18;
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
    sub_B5D69C(0LL, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42E9A54 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5554/*"END_ANIMATION"*/, (_DWORD)method, v2, v3);
    byte_42E9A54 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_B5D69C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5554/*"END_ANIMATION"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__OpenLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
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
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  int32_t v27; // w20
  int32_t v28; // w21
  System_String_o *LimitCountSealedDialogMessage; // x0
  LimitCountSealDialogComponent_o *v30; // x21
  System_String_o *v31; // x20
  System_String_o *v32; // x22
  LimitCountSealDialogComponent_CallbackFunc_o *v33; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v4 = (Il2CppObject *)this;
  if ( (byte_42E9A50 & 1) == 0 )
  {
    sub_B5D5C4(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    this = (CombineResultEffectComponent_o *)sub_B5D5C4(&StringLiteral_8472/*"LIMIT_COUNT_SEALED_TITLE"*/, v20, v21, v22);
    byte_42E9A50 = 1;
  }
  klass = v4[12].klass;
  if ( !klass )
    goto LABEL_17;
  declaringType = klass->_1.declaringType;
  parent = klass->_1.parent;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = declaringType;
  *(_QWORD *)&v34.fields.fakeValue = parent;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v34, 0LL);
  v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4[12].klass;
  if ( !v26 )
    goto LABEL_17;
  v27 = (int)this;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26[6], 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_17;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v27,
                                    v28 + 1,
                                    0LL);
  v30 = (LimitCountSealDialogComponent_o *)v4[9].klass;
  v31 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8472/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v33 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_B5D694(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v33,
    v4,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !v30 )
LABEL_17:
    sub_B5D69C(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v30, v32, v31, v33, 0LL);
}


bool __fastcall CombineResultEffectComponent__OpenNotification(
        CombineResultEffectComponent_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x19
  __int64 AscensionAfterDialogId; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  bool v38; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v42; // x21
  __int64 v43; // x22
  struct UserServantEntity_o *v44; // x8
  __int64 v45; // x21
  __int64 v46; // x22
  int32_t v47; // w0
  struct UserServantEntity_o *v48; // x8
  int32_t v49; // w21
  __int64 v50; // x22
  __int64 v51; // x23
  int32_t v52; // w0
  int32_t v53; // w22
  int32_t v54; // w23
  const MethodInfo *v55; // x3
  Il2CppObject *NameFromMessageId; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v58; // x0
  System_String_o *v59; // x22
  System_String_o *v60; // x0
  System_String_o *v61; // x21
  System_Action_o *v62; // x23
  int v63; // [xsp+3Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_42E9A4D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__, v17, v18, v19);
    sub_B5D5C4(&CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11804/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42E9A4D = 1;
  }
  v63 = 0;
  v29 = sub_B5D694(CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass165_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass165_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_33;
  *(_QWORD *)(v29 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v29 + 16), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v38 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v43 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v42 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v43;
      *(_QWORD *)&v64.fields.fakeValue = v42;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
      *(_DWORD *)(v29 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v29 + 24) = this->fields.costumeId;
      v44 = this->fields.resUsrSvtData;
      if ( v44 )
      {
        v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
        v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v65.fields.currentCryptoKey = v46;
        *(_QWORD *)&v65.fields.fakeValue = v45;
        v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v65, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v47, *(_DWORD *)(v29 + 24), 0LL);
        v63 = AscensionAfterDialogId;
        if ( (_DWORD)AscensionAfterDialogId == -1 )
          return 0;
        v48 = this->fields.resUsrSvtData;
        if ( v48 )
        {
          v49 = AscensionAfterDialogId;
          v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
          v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v66.fields.currentCryptoKey = v51;
          *(_QWORD *)&v66.fields.fakeValue = v50;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
          v53 = *(_DWORD *)(v29 + 24);
          v54 = v52;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          }
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v54, v53, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v49,
                                                *(_DWORD *)(v29 + 24),
                                                v55);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v58 = System_Int32__ToString((int32_t)&v63, 0LL);
          v59 = System_String__Concat_44577788((System_String_o *)StringLiteral_11804/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v58, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v60 = LocalizationManager__Get(v59, 0LL);
          v61 = System_String__Format(v60, NameFromMessageId, 0LL);
          v62 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v62,
            (Il2CppObject *)v29,
            Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v38 = 1;
            CommonUI__OpenNotificationDialog(
              Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v61,
              v62,
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
            return v38;
          }
        }
      }
    }
LABEL_33:
    sub_B5D69C(AscensionAfterDialogId, v31);
  }
  return v38;
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
  __int64 v32; // x21
  CommonUI_o *UserId; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x24
  CommonUI_o *v48; // x22
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *v50; // x20
  CommonUI_o *v51; // x22
  ServantStatusDialog_EndDelegate_o *v52; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9A53 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, svtId, limitCount, isDecide);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(
      &Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo, v29, v30, v31);
    byte_42E9A53 = 1;
  }
  entity = 0LL;
  v32 = sub_B5D694(CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass171_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass171_0_o *)v32,
    0LL);
  if ( !v32 )
    goto LABEL_23;
  *(_QWORD *)(v32 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  *(_QWORD *)(v32 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v32 + 24),
    (System_Int32_array **)finishCallback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = (CommonUI_o *)NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, (int64_t)UserId, svtId, 0LL) )
    {
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v48 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v48 )
      {
        CommonUI__maskFadein(v48, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          UserId = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( UserId )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)UserId, 0, 0LL);
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v50 = entity;
            v51 = (CommonUI_o *)Instance;
            v52 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v52,
              (Il2CppObject *)v32,
              Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v51 )
            {
              CommonUI__OpenServantStatusDialog_18214460(v51, 33, v50, limitCount, v52, 0LL);
              return;
            }
          }
        }
      }
LABEL_23:
      sub_B5D69C(UserId, v34);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_18202348(UserId, *(System_Action_o **)(v32 + 24), 0LL);
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
  __int64 v10; // x1

  if ( (byte_42E9A49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9A49 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v10);
    SoundManager__ReleaseAudioAssetStorage(Instance, this->fields.asstName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetAfterLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
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
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  char v26; // w1
  int v27; // w2
  __int64 v28; // x3
  char v29; // w1
  int v30; // w2
  __int64 v31; // x3
  char v32; // w1
  int v33; // w2
  __int64 v34; // x3
  char v35; // w1
  int v36; // w2
  __int64 v37; // x3
  char v38; // w1
  int v39; // w2
  __int64 v40; // x3
  char v41; // w1
  int v42; // w2
  __int64 v43; // x3
  char v44; // w1
  int v45; // w2
  __int64 v46; // x3
  char v47; // w1
  int v48; // w2
  __int64 v49; // x3
  char v50; // w1
  int v51; // w2
  __int64 v52; // x3
  char v53; // w1
  int v54; // w2
  __int64 v55; // x3
  UnityEngine_Component_o *StandFigureNode; // x21
  DataManager_o *Instance; // x0
  __int64 v58; // x1
  DataManager_o *v59; // x22
  SvtMultiPortraitMaster_o *MasterData_WarQuestSelectionMaster; // x25
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v62; // x24
  __int64 v63; // x22
  __int64 v64; // x23
  struct UserServantEntity_o *v65; // x8
  int32_t v66; // w22
  int32_t v67; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w23
  struct UserServantEntity_o *v70; // x8
  int32_t v71; // w23
  __int64 v72; // x24
  __int64 v73; // x26
  CombineResultEffectComponent_o *v74; // x0
  const MethodInfo *v75; // x3
  char v76; // w24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v77; // x25
  _BOOL8 v78; // x0
  __int64 v79; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v82; // x1
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UnityEngine_Component_o *v91; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v93; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x0
  __int64 v98; // x1
  float v99; // s0
  float v100; // s1
  float v101; // s2
  struct System_Int32_array *v102; // x8
  il2cpp_array_size_t max_length; // w9
  int v104; // s11
  int v105; // s12
  float v106; // s9
  float v107; // s10
  float v108; // s8
  UnityEngine_Transform_o *v109; // x0
  __int64 v110; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v112; // x28
  __int64 v113; // x0
  __int64 v114; // x1
  const MethodInfo *v115; // x2
  __int64 v116; // x0
  __int64 v117; // x0
  UnityEngine_GameObject_o *v118; // x0
  UIStandFigureR_o *v119; // x21
  struct System_Collections_Generic_List_StandFigureCollect__o *v120; // x22
  StandFigureCollect_o *v121; // x23
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  int32_t saveDataMapList; // w21
  float FadeTime; // s8
  int32_t datalist_high; // w22
  __int64 v126; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v127; // x24
  StandFigureCollect_o *v128; // x8
  __int64 v129; // x0
  System_Collections_Generic_List_Enumerator_T__o v131; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v132; // [xsp+40h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9A30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v29, v30, v31);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v41, v42, v43);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&StandFigureCollect_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_8612/*"LimitUpResSvtNodeName"*/, v53, v54, v55);
    byte_42E9A30 = 1;
  }
  entity = 0LL;
  memset(&v132, 0, sizeof(v132));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8612/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  v59 = Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_WarQuestSelectionMaster = (SvtMultiPortraitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     v59,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v59,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_74;
  v62 = (ServantLimitAddMaster_o *)Instance;
  v64 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v134.fields.currentCryptoKey = v64;
  *(_QWORD *)&v134.fields.fakeValue = v63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v134, 0LL);
  v65 = this->fields.resUsrSvtData;
  if ( !v65 )
    goto LABEL_74;
  v66 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v65->fields.limitCount,
                                0LL);
  if ( !v62 )
    goto LABEL_74;
  v67 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v62, &entity, v66, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_74;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v67 = LimitCountUpResultServantLimitCount;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_74;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v66,
                                 v67,
                                 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v66, ServantLimitCountSealAfter, 0LL);
  v70 = this->fields.resUsrSvtData;
  if ( !v70 )
    goto LABEL_74;
  v71 = (int)Instance;
  v73 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v135.fields.currentCryptoKey = v73;
  *(_QWORD *)&v135.fields.fakeValue = v72;
  v74 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v135, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v74, (int32_t)v74, v71, v75);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_74:
    sub_B5D69C(Instance, v58);
  v76 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                MasterData_WarQuestSelectionMaster,
                                v66,
                                v71,
                                0LL);
  if ( Instance
    && (v77 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v131,
      v77,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v132 = v131;
    while ( 1 )
    {
      v78 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v132,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v78 )
        break;
      if ( !StandFigureNode )
        sub_B5D69C(v78, v79);
      current = (SvtMultiPortraitEntity_o *)v132.fields.current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_B5D69C(gameObject, v82);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           gameObject,
                           current->fields.portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v76 & 1,
                           -1,
                           0LL);
      v91 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_B5D69C(0LL, v84);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_B5D560(
        (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (System_Int32_array **)current,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      transform = UnityEngine_Component__get_transform(v91, 0LL);
      if ( !transform )
        sub_B5D69C(0LL, v93);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v95 = UnityEngine_Component__get_transform(v91, 0LL);
        if ( !v95 )
          sub_B5D69C(0LL, v96);
        *(UnityEngine_Vector3_o *)&v99 = UnityEngine_Transform__get_localPosition(v95, 0LL);
        v102 = current->fields.commonPosition;
        if ( !v102 )
          sub_B5D69C(v97, v98);
        max_length = v102->max_length;
        if ( !max_length )
        {
          v117 = sub_B5D6C8(v97);
          sub_B5D668(v117, 0LL);
        }
        if ( max_length == 1 )
        {
          v116 = sub_B5D6C8(v97);
          sub_B5D668(v116, 0LL);
        }
        v105 = v102->m_Items[1];
        v104 = v102->m_Items[2];
        v106 = v99;
        v107 = v100;
        v108 = v101;
        v109 = UnityEngine_Component__get_transform(v91, 0LL);
        if ( !v109 )
          sub_B5D69C(0LL, v110);
        v136.fields.x = v106 + (float)v105;
        v136.fields.y = v107 + (float)v104;
        v136.fields.z = v108;
        UnityEngine_Transform__set_localPosition(v109, v136, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v91,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = this->fields.afterFigureCollectList;
      v112 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v112, current, (UIStandFigureR_o *)v91, 0LL);
      if ( !afterFigureCollectList )
        sub_B5D69C(v113, v114);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v112,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v132,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_74;
    v118 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_26229964(
                                  v118,
                                  v66,
                                  v71,
                                  1,
                                  0,
                                  1,
                                  0LL,
                                  v76 & 1,
                                  -1,
                                  0LL);
    if ( !Instance )
      goto LABEL_74;
    v119 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_74;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v120 = this->fields.afterFigureCollectList;
    v121 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v121, 0LL, v119, 0LL);
    if ( !v120 )
      goto LABEL_74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v120,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v115);
  saveDataMapList = 0;
  FadeTime = 0.0;
  datalist_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      v129 = sub_B5D6C8(LimitUpSvtVoiceList);
      sub_B5D668(v129, 0LL);
    }
    Instance = (DataManager_o *)LimitUpSvtVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_74;
    datalist_high = HIDWORD(Instance->fields.datalist);
    saveDataMapList = (int32_t)Instance->fields.saveDataMapList;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                                (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Instance >= 1 )
  {
    v126 = 0LL;
    while ( 1 )
    {
      v127 = this->fields.afterFigureCollectList;
      if ( !v127 )
        break;
      if ( v127->fields._size <= (unsigned int)v126 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v128 = v127->fields._items->m_Items[v126];
      if ( !v128 )
        break;
      Instance = (DataManager_o *)v128->fields._standFigure_k__BackingField;
      if ( !Instance )
        break;
      UIStandFigureR__SetFace_40975992((UIStandFigureR_o *)Instance, datalist_high, saveDataMapList, 0LL, FadeTime, 0LL);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                                    (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
      if ( (int)++v126 >= (int)Instance )
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CombineRootComponent_c *v34; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  if ( (byte_42E9A19 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)usrSvtData, currentSkillId, *(_QWORD *)&currentSkillLv);
    sub_B5D5C4(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__, v13, v14, v15);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20, v21);
    byte_42E9A19 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    *(System_String_array ***)&currentSkillId,
    *(System_String_array ***)&currentSkillLv,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v34 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v34 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v34->static_fields->COMBINE_ASSET_PATH;
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v36, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t FigureImageLimitCount; // w0
  const MethodInfo *v8; // x6

  if ( (byte_42E9A29 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2787/*"BaseSvtNodeName"*/, formId, (_DWORD)method, v3);
    byte_42E9A29 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_B5D69C(0LL, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_2787/*"BaseSvtNodeName"*/,
    0,
    v8);
}


void __fastcall CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v18; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_42E9A2E & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    this = (CombineResultEffectComponent_o *)sub_B5D5C4(&StringLiteral_8611/*"LimitUpBaseSvtNodeName"*/, v8, v9, v10);
    byte_42E9A2E = 1;
  }
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
  v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseUsrSvtData;
  if ( !v14 )
LABEL_12:
    sub_B5D69C(this, method);
  v15 = (int)this;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v15, v16, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v4,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8611/*"LimitUpBaseSvtNodeName"*/,
    1,
    v18);
}


void __fastcall CombineResultEffectComponent__SetCardParam(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
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
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  void *resUsrSvtData; // x0
  System_String_o *v111; // x20
  UnityEngine_Transform_o *transform; // x0
  UIExtrusionLabel_o *v113; // x20
  System_String_o *v114; // x20
  UnityEngine_Transform_o *v115; // x0
  UIExtrusionLabel_o *v116; // x20
  struct UserServantEntity_o *v117; // x8
  __int64 v118; // x20
  __int64 v119; // x21
  struct UserServantEntity_o *v120; // x8
  int32_t v121; // w20
  int32_t v122; // w21
  struct UserServantEntity_o *v123; // x8
  struct UserServantEntity_o *v124; // x8
  int32_t v125; // w20
  int32_t v126; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v128; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  float v131; // s8
  _BOOL4 v132; // w20
  __int64 v133; // x23
  int32_t v134; // w20
  int32_t v135; // w21
  int v136; // w22
  _DWORD *v137; // x25
  __int64 *v138; // x24
  __int64 *v139; // x8
  __int64 *v140; // x8
  __int64 *v141; // x8
  System_String_o *v142; // x20
  UnityEngine_Transform_o *v143; // x0
  UIExtrusionLabel_o *v144; // x20
  System_String_o *v145; // x20
  UnityEngine_Transform_o *v146; // x0
  UIExtrusionLabel_o *v147; // x20
  struct UserServantEntity_o *v148; // x8
  const MethodInfo *v149; // x2
  const MethodInfo *v150; // x2
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x2
  __int64 v153; // x26
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x28
  StandFigureCollect_o *v155; // x8
  int32_t v156; // w1
  System_String_o *v157; // x20
  UnityEngine_Transform_o *v158; // x0
  const MethodInfo *v159; // x1
  const MethodInfo *v160; // x2
  const MethodInfo *v161; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v163; // x9
  struct System_String_array *startAniName; // x8
  int v165; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v167; // w2
  CombineResultEffectComponent_o *v168; // x0
  System_String_o *v169; // x1
  const MethodInfo *v170; // x2
  const MethodInfo *v171; // x2
  const MethodInfo *v172; // x2
  bool v173; // w2
  CombineResultEffectComponent_o *v174; // x0
  System_String_o *v175; // x1
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  __int64 *v182; // x8
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v183; // x20
  EventDelegate_Callback_o *v184; // x22
  EventDelegate_o *v185; // x21
  const MethodInfo *v186; // x2
  System_String_o *v187; // x20
  UnityEngine_Transform_o *v188; // x0
  UnityEngine_Component_o *v189; // x20
  float Value; // s0
  float v191; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v193; // x20
  System_Int32_array **v194; // x1
  BattleServantConfConponent_o *v195; // x0
  const MethodInfo *v196; // x2
  struct System_String_array *v197; // x8
  int v198; // w9
  System_Int32_array **v199; // x20
  const MethodInfo *v200; // x2
  __int64 v201; // x22
  float FadeTime; // s0
  System_Int32_array **v203; // x20
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  const MethodInfo *v210; // x1
  __int64 v211; // x0
  __int64 v212; // [xsp+8h] [xbp-68h] BYREF
  __int64 v213; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  UnityEngine_Vector3_o v215; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v216; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9A21 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent__SetCardParam_b__115_0__, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UILabel___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v14, v15, v16);
    sub_B5D5C4(&EventDelegate_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v20, v21, v22);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_4393/*"CostumeName"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_2787/*"BaseSvtNodeName"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_17007/*"bit_result_120"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_17014/*"bit_result_extraskill02"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_17023/*"bit_result_nobledeliverance"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_12483/*"START_ANIMATION"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_17011/*"bit_result_command_card_exceed"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_17020/*"bit_result_limitbreak"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_17015/*"bit_result_friendship_exceed"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_11574/*"ResMaxLvExceedNodeName"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_17028/*"bit_result_skillrank"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_17009/*"bit_result_advent02"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_17018/*"bit_result_grail_02"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_17029/*"bit_result_skillup"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_4522/*"CrtMaxLvExceedNodeName"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_17024/*"bit_result_powerup"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_13192/*"StartAnimationName"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_17017/*"bit_result_grail_01"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_17008/*"bit_result_advent01"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_17013/*"bit_result_extraskill01"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_17027/*"bit_result_skilldeliverance"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_17030/*"bit_result_skinchange01"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_4523/*"CrtMaxLvNodeName"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_11575/*"ResMaxLvNodeName"*/, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_13332/*"SvtEqCardScale"*/, v107, v108, v109);
    byte_42E9A21 = 1;
  }
  v213 = 0LL;
  v212 = 0LL;
  switch ( this->fields.kind )
  {
    case 0:
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = (void *)UserServantEntity__isLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( ((unsigned __int8)resUsrSvtData & 1) == 0 )
        goto LABEL_98;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_179;
      v163 = this->fields.resUsrSvtData;
      if ( !v163 )
        goto LABEL_179;
      if ( baseUsrSvtData->fields.exp != v163->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_172;
      }
LABEL_98:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_179;
      v165 = this->fields.successInfo - 1;
      if ( v165 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v165];
LABEL_172:
        resUsrSvtData = this->fields.fsm;
        if ( resUsrSvtData )
        {
          v203 = (System_Int32_array **)*p_LimitAnimName;
          resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
          if ( resUsrSvtData )
          {
            resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                              (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
                              0LL);
            if ( resUsrSvtData )
            {
              *((_QWORD *)resUsrSvtData + 7) = v203;
              sub_B5D560(
                (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56),
                v203,
                v204,
                v205,
                v206,
                v207,
                v208,
                v209);
              CombineResultEffectComponent__SetLevelUpSvtFigure(this, v210);
              resUsrSvtData = this->fields.svtResultInfoWindow;
              if ( resUsrSvtData )
              {
                SvtCombineResultWindowComponent__setBefResultState(
                  (SvtCombineResultWindowComponent_o *)resUsrSvtData,
                  this->fields.baseUsrSvtData,
                  0LL);
                resUsrSvtData = this->fields.svtResultInfoWindow;
                if ( resUsrSvtData )
                {
                  resUsrSvtData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resUsrSvtData, 0LL);
                  if ( resUsrSvtData )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)resUsrSvtData,
                      this->fields.combineStatusDisp,
                      0LL);
                    goto LABEL_169;
                  }
                }
              }
            }
          }
        }
LABEL_179:
        sub_B5D69C(resUsrSvtData, method);
      }
      goto LABEL_180;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, method);
      resUsrSvtData = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4523/*"CrtMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v111 = (System_String_o *)resUsrSvtData;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(transform, v111, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v113 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v213) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v213 + 4, 0LL);
      if ( !v113 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v113, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11575/*"ResMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v114 = (System_String_o *)resUsrSvtData;
      v115 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v115, v114, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v116 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v213) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v213, 0LL);
      if ( !v116 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v116, (System_String_o *)resUsrSvtData, 0LL);
      v117 = this->fields.baseUsrSvtData;
      if ( !v117 )
        goto LABEL_179;
      v119 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
      v118 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v214.fields.currentCryptoKey = v119;
      *(_QWORD *)&v214.fields.fakeValue = v118;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v214, 0LL);
      v120 = this->fields.baseUsrSvtData;
      if ( !v120 )
        goto LABEL_179;
      v121 = (int)resUsrSvtData;
      v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v120->fields.limitCount, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      resUsrSvtData = (void *)ImageLimitCount__GetImageLimitCount(v121, v122, 0LL);
      v123 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)resUsrSvtData;
      if ( !v123 )
        goto LABEL_179;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v123->fields.svtId,
                                0LL);
      v124 = this->fields.resUsrSvtData;
      if ( !v124 )
        goto LABEL_179;
      v125 = (int)resUsrSvtData;
      v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v124->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v125, v126, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      v131 = 0.0;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v132 = resSvtNameData != 0LL;
      if ( isLimitUpSuppression )
        goto LABEL_29;
      if ( this->fields.oldImgLimitCnt != ImageLimitCount )
        goto LABEL_69;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)resUsrSvtData, 0LL) )
      {
LABEL_69:
        this->fields.isChangeCardImg = 1;
        CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v128);
        CombineResultEffectComponent__setBaseSvtGraphCard(this, v132, v151);
        CombineResultEffectComponent__setResultSvtGraphCard(this, v132, v152);
        v138 = &StringLiteral_17009/*"bit_result_advent02"*/;
LABEL_154:
        resUsrSvtData = this->fields.fsm;
        if ( !resUsrSvtData )
          goto LABEL_179;
        v199 = (System_Int32_array **)*v138;
        goto LABEL_165;
      }
      if ( this->fields.isLimitUpSuppression || !CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v128) )
      {
LABEL_29:
        v133 = 0LL;
        v134 = 0;
        v135 = 0;
        goto LABEL_30;
      }
      resUsrSvtData = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v200);
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( *((_DWORD *)resUsrSvtData + 6) )
      {
        v201 = *((_QWORD *)resUsrSvtData + 4);
        if ( !v201 )
          goto LABEL_179;
        v135 = *(_DWORD *)(v201 + 28);
        v134 = *(_DWORD *)(v201 + 56);
        FadeTime = ServantVoiceData__GetFadeTime(*((ServantVoiceData_o **)resUsrSvtData + 4), 0LL);
        v133 = *(_QWORD *)(v201 + 32);
        v131 = FadeTime;
LABEL_30:
        resUsrSvtData = (void *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                                  (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        v136 = (int)resUsrSvtData;
        if ( v133 )
        {
          v137 = (_DWORD *)(v133 + 24);
          v138 = &StringLiteral_17008/*"bit_result_advent01"*/;
          if ( (_DWORD)resUsrSvtData != *(_DWORD *)(v133 + 24) || (int)resUsrSvtData <= 0 )
            goto LABEL_154;
        }
        else
        {
          if ( (int)resUsrSvtData < 1 )
          {
            v138 = &StringLiteral_17008/*"bit_result_advent01"*/;
            goto LABEL_154;
          }
          v137 = (_DWORD *)&off_18;
        }
        v138 = &StringLiteral_17008/*"bit_result_advent01"*/;
        v153 = 0LL;
        while ( 1 )
        {
          currentFigureCollectList = this->fields.currentFigureCollectList;
          if ( !currentFigureCollectList )
            goto LABEL_179;
          if ( currentFigureCollectList->fields._size <= (unsigned int)v153 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v155 = currentFigureCollectList->fields._items->m_Items[v153];
          if ( !v155 )
            goto LABEL_179;
          resUsrSvtData = v155->fields._standFigure_k__BackingField;
          if ( v133 )
          {
            if ( (unsigned int)v153 >= *v137 )
              goto LABEL_180;
            if ( !resUsrSvtData )
              goto LABEL_179;
            v156 = *(_DWORD *)(v133 + 32 + 4 * v153);
          }
          else
          {
            if ( !resUsrSvtData )
              goto LABEL_179;
            v156 = v135;
          }
          UIStandFigureR__SetFace_40975992((UIStandFigureR_o *)resUsrSvtData, v156, v134, 0LL, v131, 0LL);
          if ( (int)++v153 >= v136 )
            goto LABEL_154;
        }
      }
      goto LABEL_180;
    case 2:
      v167 = 1;
      v168 = this;
      v169 = (System_String_o *)StringLiteral_17029/*"bit_result_skillup"*/;
      goto LABEL_108;
    case 3:
      v141 = &StringLiteral_17027/*"bit_result_skilldeliverance"*/;
      goto LABEL_107;
    case 4:
      v173 = 1;
      v174 = this;
      v175 = (System_String_o *)StringLiteral_17029/*"bit_result_skillup"*/;
      goto LABEL_125;
    case 5:
      v139 = &StringLiteral_17023/*"bit_result_nobledeliverance"*/;
      goto LABEL_124;
    case 6:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_2787/*"BaseSvtNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v187 = (System_String_o *)resUsrSvtData;
      v188 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v188, v187, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_179;
      v189 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13332/*"SvtEqCardScale"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)resUsrSvtData, 0LL);
      if ( !v189 )
        goto LABEL_179;
      v191 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v189, 0LL);
      resUsrSvtData = CharaGraphManager__CreateTexturePrefab_26715676(
                        gameObject,
                        this->fields.resUsrSvtData,
                        10,
                        0LL,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v193 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v215.fields.x = -50.0;
      v215.fields.y = 92.0;
      v215.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)resUsrSvtData, v215, 0LL);
      resUsrSvtData = UnityEngine_Component__get_transform(v193, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v216.fields.x = v191;
      v216.fields.y = v191;
      v216.fields.z = v191;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)resUsrSvtData, v216, 0LL);
      resUsrSvtData = this->fields.svtResultInfoWindow;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resUsrSvtData, 1, 0LL);
      resUsrSvtData = this->fields.svtResultInfoWindow;
      if ( !resUsrSvtData )
        goto LABEL_179;
      SvtCombineResultWindowComponent__setBefSvtEqResultState(
        (SvtCombineResultWindowComponent_o *)resUsrSvtData,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        this->fields.normalExp,
        this->fields.addTotalExp,
        0LL);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = (void *)UserServantEntity__isLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
      {
        v140 = (__int64 *)&this->fields.LimitAnimName;
      }
      else
      {
        v197 = this->fields.startAniName;
        if ( !v197 )
          goto LABEL_179;
        v198 = this->fields.successInfo - 1;
        if ( v198 >= v197->max_length )
        {
LABEL_180:
          v211 = sub_B5D6C8(resUsrSvtData);
          sub_B5D668(v211, 0LL);
        }
        v140 = (__int64 *)&v197->m_Items[v198];
      }
LABEL_163:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
LABEL_164:
      v199 = (System_Int32_array **)*v140;
LABEL_165:
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      *((_QWORD *)resUsrSvtData + 7) = v199;
      v195 = (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56);
      v194 = v199;
LABEL_168:
      sub_B5D560(v195, v194, v176, v177, v178, v179, v180, v181);
LABEL_169:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resUsrSvtData, (System_String_o *)StringLiteral_12483/*"START_ANIMATION"*/, 0LL);
      return;
    case 7:
    case 0x15:
      v141 = &StringLiteral_17028/*"bit_result_skillrank"*/;
LABEL_107:
      v169 = (System_String_o *)*v141;
      v168 = this;
      v167 = 0;
LABEL_108:
      CombineResultEffectComponent__SetCardParam_Skill(v168, v169, v167, v3);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v139 = &StringLiteral_17028/*"bit_result_skillrank"*/;
LABEL_124:
      v175 = (System_String_o *)*v139;
      v174 = this;
      v173 = 0;
LABEL_125:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v174, v175, v173, v3);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v182 = &StringLiteral_17029/*"bit_result_skillup"*/;
      goto LABEL_147;
    case 0xB:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v182 = &StringLiteral_17024/*"bit_result_powerup"*/;
LABEL_147:
      v194 = (System_Int32_array **)*v182;
      *((_QWORD *)resUsrSvtData + 7) = *v182;
      v195 = (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56);
      goto LABEL_168;
    case 0xC:
    case 0x16:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4522/*"CrtMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v142 = (System_String_o *)resUsrSvtData;
      v143 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v143, v142, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v144 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v212) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v212 + 4, 0LL);
      if ( !v144 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v144, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11574/*"ResMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v145 = (System_String_o *)resUsrSvtData;
      v146 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v146, v145, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v147 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v212) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v212, 0LL);
      if ( !v147 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v147, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( *((_DWORD *)resUsrSvtData + 74) )
        goto LABEL_57;
      v148 = this->fields.resUsrSvtData;
      if ( !v148 )
        goto LABEL_179;
      if ( v148->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_57:
      resUsrSvtData = (void *)UserServantEntity__getFrameType((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      if ( (_DWORD)resUsrSvtData != UserServantEntity__getFrameType(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = (void *)UserServantEntity__getRarityIcon((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      if ( (_DWORD)resUsrSvtData != UserServantEntity__getRarityIcon(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v149);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v150);
        v140 = &StringLiteral_17020/*"bit_result_limitbreak"*/;
      }
      else if ( this->fields.isChangeCardImg )
      {
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v149);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v196);
        v140 = &StringLiteral_17018/*"bit_result_grail_02"*/;
      }
      else
      {
        v140 = &StringLiteral_17017/*"bit_result_grail_01"*/;
      }
      goto LABEL_163;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v140 = &StringLiteral_17015/*"bit_result_friendship_exceed"*/;
      goto LABEL_164;
    case 0xF:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4393/*"CostumeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v157 = (System_String_o *)resUsrSvtData;
      v158 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v158, v157, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !resUsrSvtData )
        goto LABEL_179;
      UILabel__set_text((UILabel_o *)resUsrSvtData, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v159);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v160);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v161);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v140 = &StringLiteral_17030/*"bit_result_skinchange01"*/;
      goto LABEL_164;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v140 = &StringLiteral_17011/*"bit_result_command_card_exceed"*/;
      goto LABEL_164;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v170);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v171);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v172);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v140 = &StringLiteral_17007/*"bit_result_120"*/;
      goto LABEL_164;
    case 0x19:
      resUsrSvtData = this->fields.effect;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v183 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
               (UnityEngine_GameObject_o *)resUsrSvtData,
               (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v184 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v184,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__115_0__,
        0LL);
      v185 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
      EventDelegate___ctor_29822308(v185, v184, 0LL);
      if ( !v183 )
        goto LABEL_179;
      resUsrSvtData = v183->fields.callbackQueue;
      if ( !resUsrSvtData )
        goto LABEL_179;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resUsrSvtData,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v185,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v186);
      resUsrSvtData = this->fields.fsm;
      v140 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17014/*"bit_result_extraskill02"*/ : &StringLiteral_17013/*"bit_result_extraskill01"*/);
      if ( !resUsrSvtData )
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
  __int64 v25; // x1
  char *effect; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v27; // x21
  EventDelegate_Callback_o *v28; // x23
  EventDelegate_o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E9A24 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)startName, isSkip, method);
    sub_B5D5C4(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__, v7, v8, v9);
    sub_B5D5C4(&EventDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12483/*"START_ANIMATION"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_13192/*"StartAnimationName"*/, v22, v23, v24);
    byte_42E9A24 = 1;
  }
  CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  if ( isSkip )
  {
    effect = (char *)this->fields.effect;
    if ( !effect
      || (effect = (char *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL)) == 0LL
      || (v27 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  (UnityEngine_GameObject_o *)effect,
                  (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___),
          v28 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
          EventDelegate_Callback___ctor(
            v28,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__,
            0LL),
          v29 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo),
          EventDelegate___ctor_29822308(v29, v28, 0LL),
          !v27)
      || (effect = (char *)v27->fields.callbackQueue) == 0LL )
    {
LABEL_14:
      sub_B5D69C(effect, v25);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effect,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  effect = (char *)this->fields.fsm;
  if ( !effect )
    goto LABEL_14;
  effect = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL);
  if ( !effect )
    goto LABEL_14;
  effect = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                     (HutongGames_PlayMaker_FsmVariables_o *)effect,
                     (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
                     0LL);
  if ( !effect )
    goto LABEL_14;
  *((_QWORD *)effect + 7) = startName;
  sub_B5D560(
    (BattleServantConfConponent_o *)(effect + 56),
    (System_Int32_array **)startName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  effect = (char *)this->fields.fsm;
  if ( !effect )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12483/*"START_ANIMATION"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCardParam_TreasureDvc(
        CombineResultEffectComponent_o *this,
        System_String_o *startName,
        bool isSkip,
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  char *effect; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v26; // x21
  EventDelegate_Callback_o *v27; // x23
  EventDelegate_o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E9A25 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)startName, isSkip, method);
    sub_B5D5C4(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__, v7, v8, v9);
    sub_B5D5C4(&EventDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12483/*"START_ANIMATION"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_13192/*"StartAnimationName"*/, v22, v23, v24);
    byte_42E9A25 = 1;
  }
  if ( isSkip )
  {
    effect = (char *)this->fields.effect;
    if ( !effect )
      goto LABEL_17;
    effect = (char *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL);
    if ( !effect )
      goto LABEL_17;
    v26 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
            (UnityEngine_GameObject_o *)effect,
            (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v27 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v27,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__,
      0LL);
    v28 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822308(v28, v27, 0LL);
    if ( !v26 )
      goto LABEL_17;
    effect = (char *)v26->fields.callbackQueue;
    if ( !effect )
      goto LABEL_17;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effect,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  if ( this->fields.kind == 18 )
    CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(this, (const MethodInfo *)startName);
  else
    CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  effect = (char *)this->fields.fsm;
  if ( !effect
    || (effect = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL)) == 0LL
    || (effect = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                           (HutongGames_PlayMaker_FsmVariables_o *)effect,
                           (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
                           0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_B5D560(
          (BattleServantConfConponent_o *)(effect + 56),
          (System_Int32_array **)startName,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (effect = (char *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12483/*"START_ANIMATION"*/, 0LL);
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
  __int64 v37; // x1
  CombineRootComponent_c *v38; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v40; // x21

  if ( (byte_42E9A1C & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)baseData, (_DWORD)callback, autoFadeout);
    sub_B5D5C4(&Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__, v12, v13, v14);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    byte_42E9A1C = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    (System_String_array **)callback,
    (System_String_array **)autoFadeout,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(gameObject, v37);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v38 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v38 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v38->static_fields->EXCEED_ASSET_PATH;
  v40 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v40,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v40, 1, 0LL);
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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  CombineRootComponent_c *v44; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v47; // x20
  UnityEngine_Transform_o *transform; // x21
  int v49; // s0

  if ( (byte_42E9A16 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_AssetData_GetObject_GameObject____68807504,
      (_DWORD)userServantEntity,
      cardIndex,
      *(_QWORD *)&exceedCount);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_17011/*"bit_result_command_card_exceed"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11618/*"ResultEffect"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_12488/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v28, v29, v30);
    byte_42E9A16 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  v44 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v44 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v44->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_17011/*"bit_result_command_card_exceed"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v47 = (UnityEngine_GameObject_o *)effectAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0LL);
  *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v49, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11618/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v47,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(effectAssetData, v43);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12488/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
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
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1

  if ( (byte_42E9A10 & 1) == 0 )
  {
    sub_B5D5C4(
      &CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo,
      (_DWORD)userSvtEntity,
      costumeId,
      costumeName);
    sub_B5D5C4(&StringLiteral_12492/*"START_COSTUME_EFFECT"*/, v13, v14, v15);
    byte_42E9A10 = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeName,
    (System_Int32_array **)costumeName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v28, v29, v30, v31, v32, v33);
  this->fields.setResUsrSvtData = 0;
  v34 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B5D694(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v34, 0LL);
  this->fields.costumeSkillInfoManager = v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeSkillInfoManager,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(gameObject, v42);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12492/*"START_COSTUME_EFFECT"*/, 0LL);
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  CombineRootComponent_c *v42; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v45; // x20
  UnityEngine_Transform_o *transform; // x21
  int v47; // s0

  if ( (byte_42E9A14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)userSvtData, (_DWORD)callback, method);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17015/*"bit_result_friendship_exceed"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11618/*"ResultEffect"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12495/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v26, v27, v28);
    byte_42E9A14 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v35, v36, v37, v38, v39, v40);
  this->fields.setResUsrSvtData = 0;
  v42 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v42 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v42->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_17015/*"bit_result_friendship_exceed"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v45 = (UnityEngine_GameObject_o *)effectAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0LL);
  *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v47, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11618/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v45,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(effectAssetData, v41);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12495/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v37; // x1
  CombineRootComponent_c *v38; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v40; // x21

  if ( (byte_42E9A15 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)userSvtData, oldFriendShipRank, callback);
    sub_B5D5C4(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__, v12, v13, v14);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    byte_42E9A15 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v37);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v38 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v38 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v38->static_fields->COMBINE_ASSET_PATH;
  v40 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v40,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v40, 1, 0LL);
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
  __int64 v25; // x1

  if ( (byte_42E9A0A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12494/*"START_FRIENDSHIPUP_EFFECT"*/, (_DWORD)usrSvtData, oldFriendShipRank, callback);
    byte_42E9A0A = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    *(System_String_array ***)&oldFriendShipRank,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12494/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLevelUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent_o *v4; // x19
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v18; // x20
  __int64 v19; // x21
  int32_t v20; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  ServantScriptEntity_o *Entity_29045988; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  BattleServantConfConponent_o *p_playVoiceList; // x0
  const MethodInfo *v35; // x2
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v37; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v39; // x0
  const MethodInfo *v40; // x2
  struct UserServantEntity_o *v41; // x8
  CombineResultEffectComponent_o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x21
  System_String_o *v50; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v52; // x21
  const MethodInfo *v53; // x2
  struct UserServantEntity_o *v54; // x8
  CombineResultEffectComponent_o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x21
  System_String_o *v63; // x0
  ServantVoiceEntity_o *v64; // x20
  UserServantEntity_o *v65; // x21
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x0
  __int64 v74; // x0
  int name; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  v4 = this;
  if ( (byte_42E9A2B & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantScriptMaster___, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    this = (CombineResultEffectComponent_o *)sub_B5D5C4(&string___TypeInfo, v14, v15, v16);
    byte_42E9A2B = 1;
  }
  name = 0;
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_51;
  v19 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v76.fields.currentCryptoKey = v19;
  *(_QWORD *)&v76.fields.fakeValue = v18;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v76, 0LL);
  if ( !v4->fields.baseUsrSvtData )
    goto LABEL_51;
  v20 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v4->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v20, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_51;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_51;
  Entity_29045988 = ServantScriptMaster__GetEntity_29045988((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_29045988 && v4->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_29045988, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v4->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_51;
      combineVoiceId = v4->fields.combineVoiceId;
      method = (const MethodInfo *)v4->fields.baseUsrSvtData;
LABEL_20:
      v26 = ServantVoiceEntity__lotteryLevelUpVoice_31480304(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0LL);
LABEL_21:
      v33 = (System_Int32_array **)v26;
      p_playVoiceList = (BattleServantConfConponent_o *)&v4->fields.playVoiceList;
      v4->fields.playVoiceList = (struct ServantVoiceData_array *)v33;
      goto LABEL_22;
    }
    method = (const MethodInfo *)v4->fields.baseUsrSvtData;
    if ( method )
    {
      name = (int)method[3].name;
      resUsrSvtData = v4->fields.resUsrSvtData;
      if ( resUsrSvtData )
      {
        combineVoiceId = v4->fields.combineVoiceId;
        if ( combineVoiceId )
        {
          this = (CombineResultEffectComponent_o *)v4->fields.svtVoiceEntity;
          if ( !this )
            goto LABEL_51;
          goto LABEL_20;
        }
        if ( System_Int32__Equals_39741700((int32_t)&name, resUsrSvtData->fields.lv, 0LL) )
        {
          v39 = v4;
          form = 0;
LABEL_26:
          CombineResultEffectComponent__SetBaseSvtFigure(v39, form, v35);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_B5D5DC(string___TypeInfo, 1LL);
        v41 = v4->fields.baseUsrSvtData;
        if ( v41 )
        {
          v42 = this;
          *(_QWORD *)&v77.fields.currentCryptoKey = &v41->fields.svtId;
          *(_QWORD *)&v77.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v77, v40);
          if ( v42 )
          {
            v49 = (System_Int32_array **)this;
            if ( this )
            {
              this = (CombineResultEffectComponent_o *)sub_B5D684(this, v42->klass->_1.element_class);
              if ( !this )
                goto LABEL_53;
            }
            if ( !LODWORD(v42->fields.svtResultInfoWindow) )
              goto LABEL_52;
            v42->fields.skillResultInfoWindow = (struct SkillUpResultWindowComponent_o *)v49;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v42->fields.skillResultInfoWindow,
              v49,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            v50 = System_String__Concat_44657912((System_String_array *)v42, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_35647620(v50, 0LL) == 1 )
            {
              svtVoiceEntity = v4->fields.svtVoiceEntity;
              v52 = v4->fields.baseUsrSvtData;
              if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              }
              v26 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v52, 0LL);
              goto LABEL_21;
            }
            this = (CombineResultEffectComponent_o *)sub_B5D5DC(string___TypeInfo, 1LL);
            v54 = v4->fields.baseUsrSvtData;
            if ( v54 )
            {
              v55 = this;
              *(_QWORD *)&v78.fields.currentCryptoKey = &v54->fields.svtId;
              *(_QWORD *)&v78.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v78, v53);
              if ( v55 )
              {
                v62 = (System_Int32_array **)this;
                if ( !this
                  || (this = (CombineResultEffectComponent_o *)sub_B5D684(this, v55->klass->_1.element_class)) != 0LL )
                {
                  if ( !LODWORD(v55->fields.svtResultInfoWindow) )
                    goto LABEL_52;
                  v55->fields.skillResultInfoWindow = (struct SkillUpResultWindowComponent_o *)v62;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v55->fields.skillResultInfoWindow,
                    v62,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60,
                    v61);
                  v63 = System_String__Concat_44657912((System_String_array *)v55, 0LL);
                  UnityEngine_PlayerPrefs__SetInt(v63, 1, 0LL);
                  v64 = v4->fields.svtVoiceEntity;
                  v65 = v4->fields.baseUsrSvtData;
                  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                  }
                  v66 = (System_Int32_array **)CombineResultFormManager__lotteryCombineResultInit(v64, v65, 0LL);
                  v4->fields.playVoiceList = (struct ServantVoiceData_array *)v66;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v4->fields.playVoiceList,
                    v66,
                    v67,
                    v68,
                    v69,
                    v70,
                    v71,
                    v72);
                  playVoiceList = v4->fields.playVoiceList;
                  if ( playVoiceList )
                  {
LABEL_23:
                    if ( playVoiceList->max_length )
                    {
                      v37 = playVoiceList->m_Items[0];
                      if ( !v37 )
                        goto LABEL_51;
                      form = v37->fields.form;
                      v39 = v4;
                      goto LABEL_26;
                    }
LABEL_52:
                    v73 = sub_B5D6C8(this);
                    sub_B5D668(v73, 0LL);
                  }
                  this = (CombineResultEffectComponent_o *)v4->fields.svtVoiceEntity;
                  if ( !this )
                    goto LABEL_51;
                  v33 = (System_Int32_array **)ServantVoiceEntity__lotteryLevelUpVoice_31480304(
                                                 (ServantVoiceEntity_o *)this,
                                                 v4->fields.baseUsrSvtData,
                                                 v4->fields.combineVoiceId,
                                                 0LL);
                  v4->fields.playVoiceList = (struct ServantVoiceData_array *)v33;
                  p_playVoiceList = (BattleServantConfConponent_o *)&v4->fields.playVoiceList;
LABEL_22:
                  sub_B5D560(p_playVoiceList, v33, v27, v28, v29, v30, v31, v32);
                  playVoiceList = v4->fields.playVoiceList;
                  if ( !playVoiceList )
                    goto LABEL_51;
                  goto LABEL_23;
                }
LABEL_53:
                v74 = sub_B5D6BC(this);
                sub_B5D668(v74, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B5D69C(this, method);
  }
}


void __fastcall CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
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
  DataManager_o *LimitUpSvtVoiceList; // x0
  __int64 v19; // x1
  int32_t entries_high; // w20
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v23; // x21
  __int64 v24; // x22
  struct UserServantEntity_o *v25; // x8
  int32_t v26; // w21
  int32_t v27; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v30; // x5
  __int64 v31; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_42E9A31 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace, (_DWORD)method, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_8612/*"LimitUpResSvtNodeName"*/, v15, v16, v17);
    byte_42E9A31 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = (DataManager_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  entries_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.datalist) )
    {
      v31 = sub_B5D6C8(LimitUpSvtVoiceList);
      sub_B5D668(v31, 0LL);
    }
    lookup = LimitUpSvtVoiceList->fields.lookup;
    if ( !lookup )
      goto LABEL_23;
    entries_high = HIDWORD(lookup->fields.entries);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_23;
  v24 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v24;
  *(_QWORD *)&v33.fields.fakeValue = v23;
  LimitUpSvtVoiceList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v33, 0LL);
  v25 = this->fields.resUsrSvtData;
  if ( !v25 )
    goto LABEL_23;
  v26 = (int)LimitUpSvtVoiceList;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_23;
  LimitUpSvtVoiceList = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           LimitUpSvtVoiceList,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_23;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v26, v27, 0LL) )
    goto LABEL_19;
  LimitUpSvtVoiceList = (DataManager_o *)entity;
  if ( !entity )
LABEL_23:
    sub_B5D69C(LimitUpSvtVoiceList, v19);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v27 = LimitCountUpResultServantLimitCount;
LABEL_19:
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v26, v27, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v26,
    ImageLimitCount,
    entries_high,
    (System_String_o *)StringLiteral_8612/*"LimitUpResSvtNodeName"*/,
    v30);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
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
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v58; // x1
  __int64 v59; // x21
  __int64 v60; // x22
  int32_t v61; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v63; // x8
  ServantLimitImageMaster_o *v64; // x20
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_42E9A0E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      kind,
      (_DWORD)baseData,
      *(_QWORD *)&baseCollectionLimitCnt);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12498/*"START_LIMITUP_EFFECT"*/, v24, v25, v26);
    byte_42E9A0E = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resSvtNameData,
    (System_Int32_array **)servantChange,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.setResUsrSvtData = 0;
  this->fields.callbackFunc = callback;
  this->fields.displayType = displayType;
  this->fields.autoFadeout = autoFadeout;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.limitUpPlayVoiceLabel,
    (System_Int32_array **)playVoiceLabel,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.limitUpRewardGiftDataList,
    (System_Int32_array **)rewardGiftDataList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_14;
  v60 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v59 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v68.fields.currentCryptoKey = v60;
  *(_QWORD *)&v68.fields.fakeValue = v59;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v68, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v63 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v69.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v64 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_QWORD *)&v69.fields.currentCryptoKey = v63;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
  if ( !v64
    || (gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v64,
                                                   (int32_t)gameObject,
                                                   v61 + 1,
                                                   0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = (unsigned __int8)gameObject & 1,
        !fsm) )
  {
LABEL_14:
    sub_B5D69C(gameObject, v58);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12498/*"START_LIMITUP_EFFECT"*/, 0LL);
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
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 Int_35647620; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  System_String_array *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x22
  System_String_o *v59; // x0
  const MethodInfo *v60; // x2
  __int64 v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x22
  System_String_o *v69; // x0
  UserServantEntity_o *v70; // x20
  CombineRootComponent_c *v71; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v73; // x20
  UnityEngine_Transform_o *transform; // x21
  int v75; // s0
  __int64 v78; // x0
  __int64 v79; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_42E9A12 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)usrSvtData, (_DWORD)callback, method);
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&string___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12499/*"START_LVEXCEED_EFFECT"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_17016/*"bit_result_grail"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_11618/*"ResultEffect"*/, v32, v33, v34);
    byte_42E9A12 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v36, v37, v38, v39, v40, v41);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  Int_35647620 = sub_B5D5DC(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData
    || (v51 = (System_String_array *)Int_35647620,
        *(_QWORD *)&v80.fields.currentCryptoKey = &this->fields.baseUsrSvtData->fields.svtId,
        *(_QWORD *)&v80.fields.fakeValue = 0LL,
        Int_35647620 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v80, v50),
        !v51) )
  {
LABEL_34:
    sub_B5D69C(Int_35647620, v49);
  }
  v58 = (System_Int32_array **)Int_35647620;
  if ( Int_35647620 )
  {
    Int_35647620 = sub_B5D684(Int_35647620, v51->obj.klass->_1.element_class);
    if ( !Int_35647620 )
      goto LABEL_36;
  }
  if ( !v51->max_length )
    goto LABEL_35;
  v51->m_Items[0] = (System_String_o *)v58;
  sub_B5D560((BattleServantConfConponent_o *)v51->m_Items, v58, v52, v53, v54, v55, v56, v57);
  v59 = System_String__Concat_44657912(v51, 0LL);
  Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v59, 0LL);
  if ( (_DWORD)Int_35647620 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_34;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_35647620 = sub_B5D5DC(string___TypeInfo, 1LL);
      if ( !*p_baseUsrSvtData )
        goto LABEL_34;
      v61 = Int_35647620;
      *(_QWORD *)&v81.fields.currentCryptoKey = &(*p_baseUsrSvtData)->fields.svtId;
      *(_QWORD *)&v81.fields.fakeValue = 0LL;
      Int_35647620 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v81, v60);
      if ( !v61 )
        goto LABEL_34;
      v68 = (System_Int32_array **)Int_35647620;
      if ( !Int_35647620 || (Int_35647620 = sub_B5D684(Int_35647620, *(_QWORD *)(*(_QWORD *)v61 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v61 + 24) )
        {
          *(_QWORD *)(v61 + 32) = v68;
          sub_B5D560((BattleServantConfConponent_o *)(v61 + 32), v68, v62, v63, v64, v65, v66, v67);
          v69 = System_String__Concat_44657912((System_String_array *)v61, 0LL);
          UnityEngine_PlayerPrefs__SetInt(v69, 0, 0LL);
          v70 = *p_baseUsrSvtData;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
          }
          CombineResultFormManager__ResetVoiceList(v70, 0LL);
          goto LABEL_20;
        }
LABEL_35:
        v78 = sub_B5D6C8(Int_35647620);
        sub_B5D668(v78, 0LL);
      }
LABEL_36:
      v79 = sub_B5D6BC(Int_35647620);
      sub_B5D668(v79, 0LL);
    }
  }
LABEL_20:
  v71 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v71 = CombineRootComponent_TypeInfo;
  }
  Int_35647620 = (__int64)v71->static_fields->effectAssetData;
  if ( !Int_35647620 )
    goto LABEL_34;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)Int_35647620,
                                                                               (System_String_o *)StringLiteral_17016/*"bit_result_grail"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Int_35647620 = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                            Object_WarBoardWaitTimeSetting,
                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_35647620 )
    goto LABEL_34;
  v73 = (UnityEngine_GameObject_o *)Int_35647620;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_35647620, 0LL);
  *(UnityEngine_Vector3_o *)&v75 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v75, 0LL);
  Int_35647620 = (__int64)this->fields.fsm;
  if ( !Int_35647620 )
    goto LABEL_34;
  Int_35647620 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_35647620, 0LL);
  if ( !Int_35647620 )
    goto LABEL_34;
  Int_35647620 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_35647620,
                            (System_String_o *)StringLiteral_11618/*"ResultEffect"*/,
                            0LL);
  if ( !Int_35647620 )
    goto LABEL_34;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_35647620, v73, 0LL);
  Int_35647620 = (__int64)this->fields.fsm;
  if ( !Int_35647620 )
    goto LABEL_34;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_35647620, (System_String_o *)StringLiteral_12499/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CommonUI_o *Instance; // x0
  __int64 v36; // x1
  CombineRootComponent_c *v37; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v39; // x21

  if ( (byte_42E9A13 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)usrSvtData, (_DWORD)callback, method);
    sub_B5D5C4(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__, v11, v12, v13);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    byte_42E9A13 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v36);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v37 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v37 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v37->static_fields->EXCEED_ASSET_PATH;
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v39, 1, 0LL);
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
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  char *gameObject; // x0
  __int64 v62; // x1
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v65; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v67; // x21
  UnityEngine_Transform_o *v68; // x0
  int *v69; // x21
  System_String_o *v70; // x22
  UnityEngine_Transform_o *v71; // x0
  UnityEngine_ParticleSystem_o *v72; // x22
  float v73; // s0
  const MethodInfo *v74; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v76; // x4
  struct ServantChangeEntity_o *v77; // x8
  int32_t v78; // w3
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

  if ( (byte_42E9A0F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, (_DWORD)before, (_DWORD)after, callback);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11576/*"ResNameNodeName"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12500/*"START_NAME_REVEAL_EFFECT"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_9504/*"NameRevealCrossFade"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_4524/*"CrtNameNodeName"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_17021/*"bit_result_name_reveal"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_13192/*"StartAnimationName"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1/*""*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_9505/*"NameRevealParticleNodeName"*/, v45, v46, v47);
    byte_42E9A0F = 1;
  }
  m_ParticleSystem = 0LL;
  v88 = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.crtSvtNameData,
    (System_Int32_array **)before,
    (System_String_array **)after,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resSvtNameData = after;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resSvtNameData,
    (System_Int32_array **)after,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12500/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_40;
    name = ServantEntity__getTrueName((ServantEntity_o *)gameObject, -1, 0LL);
  }
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_4524/*"CrtNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v65 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v65, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !*p_crtSvtNameData )
    goto LABEL_40;
  if ( !gameObject )
    goto LABEL_40;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, (*p_crtSvtNameData)->fields.name, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_11576/*"ResNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v67 = (System_String_o *)gameObject;
  v68 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v68, v67, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v69 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9505/*"NameRevealParticleNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v70 = (System_String_o *)gameObject;
  v71 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v71, v70, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v72 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v88 = UnityEngine_ParticleSystem__get_shape(v72, 0LL).fields.m_ParticleSystem;
  v73 = (float)((float)v69[40] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v87, 0, sizeof(v87));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v87, v73, 0LL);
  v90.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v86 = v87;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v90, &v86, 0LL);
  v92.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v91.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v88;
  v92.fields.x = (float)((float)v69[40] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
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
    v74);
  v77 = this->fields.crtSvtNameData;
  if ( !v77 )
    goto LABEL_40;
  v78 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v77->fields.svtId, v77->fields.limitCount, v78, v76);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_B5D69C(gameObject, v62);
  }
  v85 = (System_Int32_array **)StringLiteral_17021/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17021/*"bit_result_name_reveal"*/;
  sub_B5D560((BattleServantConfConponent_o *)(gameObject + 56), v85, v79, v80, v81, v82, v83, v84);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9504/*"NameRevealCrossFade"*/,
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
  ServantTreasureDeviceAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v54; // x1
  ServantTreasureDeviceAddMaster_o *v55; // x24
  __int64 v56; // x25
  __int64 v57; // x26
  int32_t v58; // w0
  __int64 v59; // x8
  int32_t v60; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v62; // x25
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x24
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v72; // x8
  __int64 v73; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  __int64 v76; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_42E9A09 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___,
      kind,
      (_DWORD)usrSvtData,
      *(_QWORD *)&targetId);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12501/*"START_NOBLEUP_EFFECT"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_13605/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_13606/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v38, v39, v40);
    byte_42E9A09 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)usrSvtData,
    *(System_String_array ***)&targetId,
    *(System_Boolean_array ***)&targetLv,
    (System_Int32_array **)callback,
    *(System_Int32_array **)&targetIdOld,
    *(System_Int32_array **)&targetLvOld);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v41, v42, v43, v44, v45, v46);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_32;
  v55 = Master_WarQuestSelectionMaster;
  v57 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v77.fields.currentCryptoKey = v57;
  *(_QWORD *)&v77.fields.fakeValue = v56;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v77, 0LL);
  v59 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v78.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
  v60 = v58;
  *(_QWORD *)&v78.fields.currentCryptoKey = v59;
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                         v78,
                                                                         0LL);
  if ( !v55 )
    goto LABEL_32;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   v55,
                   v60,
                   (int32_t)Master_WarQuestSelectionMaster,
                   0,
                   0LL);
  v62 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_B5D694(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v62, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v62;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.npInfoAddManager,
    (System_Int32_array **)v62,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  if ( EnableEntity )
  {
    Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
    if ( !*p_npInfoAddManager )
      goto LABEL_32;
    Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
      (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
      EnableEntity,
      0LL);
    Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                           (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
    if ( (int)Master_WarQuestSelectionMaster >= 1 )
    {
      v70 = 8LL;
      while ( 1 )
      {
        treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
        if ( !treasureDeviceIds )
          break;
        if ( v70 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
          goto LABEL_33;
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
          (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
          *((_DWORD *)&treasureDeviceIds->obj.klass + v70),
          targetLvOld,
          0LL);
        v72 = EnableEntity->fields.treasureDeviceIds;
        if ( !v72 )
          break;
        if ( v70 - 8 >= (unsigned __int64)v72->max_length )
        {
LABEL_33:
          v76 = sub_B5D6C8(Master_WarQuestSelectionMaster);
          sub_B5D668(v76, 0LL);
        }
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
          *((_DWORD *)&v72->obj.klass + v70),
          targetLv,
          0LL);
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                               (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
        v73 = v70 - 7;
        ++v70;
        if ( v73 >= (int)Master_WarQuestSelectionMaster )
          goto LABEL_22;
      }
LABEL_32:
      sub_B5D69C(Master_WarQuestSelectionMaster, v54);
    }
LABEL_22:
    ++this->fields.tdShowIndex;
  }
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)this->fields.unSummon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, kind == 27, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_13605/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                                         0LL);
  if ( !unSummonLabel )
    goto LABEL_32;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_13606/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                                         0LL);
  if ( !unSummonDetail )
    goto LABEL_32;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_12501/*"START_NOBLEUP_EFFECT"*/, 0LL);
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
  __int64 v24; // x1

  if ( (byte_42E9A11 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12504/*"START_POWERUP_EFFECT"*/, (_DWORD)usrSvtData, (_DWORD)callback, method);
    byte_42E9A11 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(gameObject, v24);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12504/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t kind; // w8
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct ServantChangeEntity_o *resSvtNameData; // x8
  int32_t voiceSvtId; // w1
  int32_t LimitCountByImageLimitCostumeIn; // w2
  bool v15; // w3
  CombineResultEffectComponent_o *v16; // x0
  struct ServantChangeEntity_o *v17; // x8
  int32_t CardImageLimitCount; // w0
  int32_t v19; // w20
  const MethodInfo *v20; // x1

  if ( (byte_42E9A23 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E9A23 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    Instance = (CommonUI_o *)this->fields.resUsrSvtData;
    if ( !Instance )
      goto LABEL_33;
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
    if ( CardImageLimitCount < 11 )
    {
      LimitCountByImageLimitCostumeIn = -1;
    }
    else
    {
      v19 = CardImageLimitCount;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v19, 0LL);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 1, 0LL);
        resSvtNameData = this->fields.resSvtNameData;
        if ( resSvtNameData )
          voiceSvtId = resSvtNameData->fields.svtVoiceId;
        else
          voiceSvtId = -1;
        LimitCountByImageLimitCostumeIn = -1;
        v15 = 1;
        v16 = this;
        goto LABEL_32;
      }
LABEL_33:
      sub_B5D69C(Instance, v10);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    v17 = this->fields.resSvtNameData;
    if ( v17 )
      voiceSvtId = v17->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    LimitCountByImageLimitCostumeIn = this->fields.costumeId;
  }
  v16 = this;
  v15 = 0;
LABEL_32:
  CombineResultEffectComponent__getSvtVoiceData(v16, voiceSvtId, LimitCountByImageLimitCostumeIn, v15, v11);
  CombineResultEffectComponent__loadVoiceData(this, v20);
}


void __fastcall CombineResultEffectComponent__SetResultUserServantData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent_o *v4; // x19
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v30; // q1
  struct UserServantEntity_o *v31; // x8
  __int128 v32; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v33; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v34; // x20
  struct UserServantEntity_o *v35; // x8
  __int128 v36; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v37; // x21
  UserServantEntity_o *v38; // x21
  UserServantEntity_o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UserServantEntity_o *v46; // x8
  __int64 v47; // x21
  __int64 v48; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct UserServantEntity_o *v57; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x24
  __int64 v59; // x21
  __int64 v60; // x22
  int32_t v61; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // kr00_16
  struct UserServantEntity_o *v63; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v65; // x21
  int32_t v66; // w22
  CombineResultEffectComponent_o *v67; // x8
  UserServantEntity_o *v68; // x20
  UserServantEntity_o *v69; // x21
  struct UserServantEntity_o **p_resUsrSvtData; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct UserServantEntity_o *v77; // x21
  __int64 v78; // x19
  __int64 v79; // x20
  int32_t v80; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v4 = this;
  if ( (byte_42E9A22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    this = (CombineResultEffectComponent_o *)sub_B5D5C4(&UserServantEntity_TypeInfo, v26, v27, v28);
    byte_42E9A22 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v4->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v4->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_53;
    v30 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v84.fields.fakeValue = v30;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v83 = v84;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v83, 0LL) < 1 )
    {
      v68 = v4->fields.baseUsrSvtData;
      v69 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21827084(v69, v68, 0LL);
      p_resUsrSvtData = &v4->fields.resUsrSvtData;
      v4->fields.resUsrSvtData = v69;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.resUsrSvtData,
        (System_Int32_array **)v69,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      if ( (v4->fields.kind | 0x10) != 26 )
        return;
      v77 = *p_resUsrSvtData;
      if ( *p_resUsrSvtData )
      {
        v79 = *(_QWORD *)&v77->fields.limitCount.fields.currentCryptoKey;
        v78 = *(_QWORD *)&v77->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v88.fields.currentCryptoKey = v79;
        *(_QWORD *)&v88.fields.fakeValue = v78;
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v88, 0LL);
        v77->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v80 + 1, 0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        v31 = v4->fields.baseUsrSvtData;
        if ( v31 )
        {
          v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
          v33 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
          *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v84.fields.fakeValue = v32;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v82 = v84;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                     &v82,
                                                     0LL);
          if ( v33 )
          {
            v34 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v4->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                       v33,
                                                       &v4->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_53;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v35 = v4->fields.baseUsrSvtData;
              if ( !v35 )
                goto LABEL_53;
              v36 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
              v37 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
              *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v84.fields.fakeValue = v36;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v81 = v84;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                         &v81,
                                                         0LL);
              if ( !v37 )
                goto LABEL_53;
              this = (CombineResultEffectComponent_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                         v37,
                                                         &v4->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v38 = v4->fields.baseUsrSvtData;
                v39 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_21827084(v39, v38, 0LL);
                v4->fields.resUsrSvtData = v39;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v4->fields.resUsrSvtData,
                  (System_Int32_array **)v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45);
              }
            }
            if ( v4->fields.kind != 19 )
              return;
            v46 = v4->fields.baseUsrSvtData;
            if ( v46 )
            {
              v48 = *(_QWORD *)&v46->fields.limitCount.fields.currentCryptoKey;
              v47 = *(_QWORD *)&v46->fields.limitCount.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v86.fields.currentCryptoKey = v48;
              *(_QWORD *)&v86.fields.fakeValue = v47;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         v86,
                                                         0LL);
              if ( v4->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v4->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v4->fields.resUsrSvtData;
                v50 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_21827084(v50, resUsrSvtData, 0LL);
                v4->fields.resUsrSvtData = v50;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v4->fields.resUsrSvtData,
                  (System_Int32_array **)v50,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56);
                v57 = v4->fields.baseUsrSvtData;
                if ( v57 )
                {
                  v58 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.resUsrSvtData;
                  v60 = *(_QWORD *)&v57->fields.limitCount.fields.currentCryptoKey;
                  v59 = *(_QWORD *)&v57->fields.limitCount.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v87.fields.currentCryptoKey = v60;
                  *(_QWORD *)&v87.fields.fakeValue = v59;
                  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v87, 0LL);
                  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v61 + 1, 0LL);
                  method = *(const MethodInfo **)&v62.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v62.fields.currentCryptoKey;
                  if ( v58 )
                  {
                    v58[6] = v62;
                    v63 = v4->fields.baseUsrSvtData;
                    if ( v63 )
                    {
                      hp = v63->fields.hp;
                      afterAtk[0] = v63->fields.atk;
                      afterAtk[1] = hp;
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v34 )
                        {
                          v65 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                     (*v34)[5],
                                                                     0LL);
                          if ( *v34 )
                          {
                            v66 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                       (*v34)[6],
                                                                       0LL);
                            if ( v65 )
                            {
                              this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                         v65,
                                                                         v66,
                                                                         (int32_t)this,
                                                                         0LL);
                              if ( this )
                              {
                                v67 = this;
                                this = (CombineResultEffectComponent_o *)v4->fields.combineResStatus;
                                if ( this )
                                {
                                  CheckCombineResStatus__getCombineResStatus(
                                    (CheckCombineResStatus_o *)this,
                                    &afterAtk[1],
                                    afterAtk,
                                    v4->fields.resUsrSvtData,
                                    HIDWORD(v67->fields.svtResultInfoWindow),
                                    0LL);
                                  if ( *v34 )
                                  {
                                    *(_DWORD *)&(*v34)[16].fields.inited = afterAtk[1];
                                    if ( *v34 )
                                    {
                                      (*v34)[16].fields.fakeValue = afterAtk[0];
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
    sub_B5D69C(this, method);
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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  void *Instance; // x0
  __int64 v77; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v78; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x23
  int32_t v80; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v81; // x28
  __int64 v82; // x10
  int v83; // w8
  int v84; // w8
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__105_0; // x24
  Il2CppObject *v87; // x25
  struct CombineResultEffectComponent___c_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  const MethodInfo *v95; // x2
  __int64 v96; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v97; // x8
  int v98; // w24
  TerminalSceneComponent_c *v99; // x0
  struct CombineResultEffectComponent_MessageDelegate_o **p_messageCallback; // x21
  int size; // w8
  __int64 v102; // x20
  __int64 v103; // x8
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x1
  __int64 v117; // x8
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-68h]
  struct CombineResultEffectComponent_MessageDelegate_o *v119; // [xsp+18h] [xbp-58h]

  if ( (byte_42E9A17 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, questId, phase, msgCallBack);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Comparison_ServantTreasureDvcEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v40, v41, v42);
    sub_B5D5C4(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&ServantTreasureDvcEntity_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v52, v53, v54);
    sub_B5D5C4(
      &Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__,
      v55,
      v56,
      v57);
    sub_B5D5C4(&CombineResultEffectComponent___c_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_12505/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_17031/*"bit_result_ultimate_anim"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_13192/*"StartAnimationName"*/, v67, v68, v69);
    byte_42E9A17 = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&phase,
    (System_String_array **)msgCallBack,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.messageCallback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.messageCallback, 0LL, v70, v71, v72, v73, v74, v75);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  p_callbackFunc = &this->fields.callbackFunc;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_67;
  v119 = msgCallBack;
  v78 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v78 )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         v78,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v80 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v78,
                   v80,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v81 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v82 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v82
        || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v82 - 8) != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      v83 = *((_DWORD *)Instance + 9);
      if ( v83 >= 1 && v83 == questId )
      {
        v84 = *((_DWORD *)Instance + 10);
        if ( v84 < 1 || v84 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v79 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v79,
              v81,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
          }
        }
      }
      if ( ++v80 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v78,
                      (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_19;
    }
LABEL_67:
    sub_B5D69C(Instance, v77);
  }
LABEL_19:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( (BYTE3(CombineResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  static_fields = (struct CombineResultEffectComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__105_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    }
    v87 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__105_0,
      v87,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
    v88 = CombineResultEffectComponent___c_TypeInfo->static_fields;
    v88->__9__105_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__105_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v88->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
  }
  if ( !v79 )
    goto LABEL_67;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v79,
    (System_Comparison_T__o *)_9__105_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  if ( v79->fields._size < 1 )
  {
    v98 = 0;
  }
  else
  {
    v97 = v79->fields._items->m_Items[0];
    if ( !v97 )
      goto LABEL_67;
    v98 = 1;
    this->fields.targetSvtId = v97->fields.missionTargetId;
  }
  Instance = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*((_QWORD *)Instance + 23) + 504LL) || (size = v79->fields._size, size < 1) )
  {
LABEL_36:
    if ( !v98 )
    {
LABEL_64:
      if ( *p_callbackFunc )
        CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
      return;
    }
  }
  else
  {
    v102 = 4LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)(v102 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v103 = *((_QWORD *)&v79->fields._items->obj.klass + v102);
      if ( !v103 )
        goto LABEL_67;
      Instance = (void *)CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *(_DWORD *)(v103 + 16), v95);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      size = v79->fields._size;
      if ( (int)++v102 - 4 >= size )
        goto LABEL_36;
    }
    if ( v79->fields._size <= (unsigned int)(v102 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v117 = *((_QWORD *)&v79->fields._items->obj.klass + v102);
    if ( !v117 )
      goto LABEL_67;
    this->fields.targetSvtId = *(_DWORD *)(v117 + 16);
    if ( !v98 )
      goto LABEL_64;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v77, (_DWORD)v95, v96);
    byte_42E4B1E = 1;
  }
  v99 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    p_messageCallback = &this->fields.messageCallback;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v99 = TerminalSceneComponent_TypeInfo;
    }
  }
  else
  {
    p_messageCallback = &this->fields.messageCallback;
  }
  Instance = v99->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_67;
  TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
  this->fields.messageCallback = v119;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_messageCallback,
    (System_Int32_array **)v119,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  Instance = this->fields.fsm;
  if ( !Instance )
    goto LABEL_67;
  Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_67;
  Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               (HutongGames_PlayMaker_FsmVariables_o *)Instance,
               (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
               0LL);
  if ( !Instance )
    goto LABEL_67;
  v116 = (System_Int32_array **)StringLiteral_17031/*"bit_result_ultimate_anim"*/;
  *((_QWORD *)Instance + 7) = StringLiteral_17031/*"bit_result_ultimate_anim"*/;
  sub_B5D560((BattleServantConfConponent_o *)((char *)Instance + 56), v116, v110, v111, v112, v113, v114, v115);
  Instance = this->fields.fsm;
  if ( !Instance )
    goto LABEL_67;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12505/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
}


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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x21
  const MethodInfo *v21; // x2
  BalanceConfig_c *v22; // x0
  __int64 v23; // x1
  char *fsm; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1

  if ( (byte_42E9A18 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, (_DWORD)callback, method);
    sub_B5D5C4(&StringLiteral_12505/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17031/*"bit_result_ultimate_anim"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13192/*"StartAnimationName"*/, v17, v18, v19);
    byte_42E9A18 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v22 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  if ( v22->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v21) )
  {
    if ( *p_callbackFunc )
      CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
  }
  else
  {
    fsm = (char *)this->fields.fsm;
    this->fields.targetSvtId = svtId;
    if ( !fsm
      || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                          (System_String_o *)StringLiteral_13192/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v31 = (System_Int32_array **)StringLiteral_17031/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17031/*"bit_result_ultimate_anim"*/,
          sub_B5D560((BattleServantConfConponent_o *)(fsm + 56), v31, v25, v26, v27, v28, v29, v30),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_B5D69C(fsm, v23);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12505/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_42E9A08 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, kind, (_DWORD)usrSvtData, *(_QWORD *)&targetId);
    sub_B5D5C4(&StringLiteral_12507/*"START_SKILLUP_EFFECT"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12395/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_12396/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v23, v24, v25);
    byte_42E9A08 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.unSummon;
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, kind == 21, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12395/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12396/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(gameObject, v33);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12507/*"START_SKILLUP_EFFECT"*/, 0LL);
}


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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  __int64 v17; // x1
  StandFigureCollect_o *v18; // x8
  struct ServantVoiceData_array *v19; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v21; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  __int64 v24; // x8
  int v25; // w20
  __int64 v26; // x25
  StandFigureCollect_o *v27; // x8
  __int64 v28; // x0

  if ( (byte_42E9A3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, faceType, playCount, playVoiceList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13, v14, v15);
    byte_42E9A3E = 1;
  }
  standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                                                      (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)standFigure_k__BackingField < 2 )
  {
    if ( standFigureCollects )
    {
      if ( !standFigureCollects->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v18 = standFigureCollects->fields._items->m_Items[0];
      if ( v18 )
      {
        standFigure_k__BackingField = v18->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetFace_40975992(standFigure_k__BackingField, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_B5D69C(standFigure_k__BackingField, v17);
  }
  v19 = this->fields.playVoiceList;
  if ( !v19 )
    goto LABEL_29;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v19->max_length )
  {
LABEL_27:
    v28 = sub_B5D6C8(standFigure_k__BackingField);
    sub_B5D668(v28, 0LL);
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
      v25 = (int)standFigure_k__BackingField;
      if ( (_DWORD)standFigure_k__BackingField == (_DWORD)v24
        && (_DWORD)standFigure_k__BackingField == multiForm->max_length )
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
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v27 = standFigureCollects->fields._items->m_Items[v26];
            if ( !v27 )
              goto LABEL_29;
            standFigure_k__BackingField = v27->fields._standFigure_k__BackingField;
            if ( !standFigure_k__BackingField )
              goto LABEL_29;
            UIStandFigureR__SetFace_40975992(
              standFigure_k__BackingField,
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
  __int64 v33; // x1

  if ( (byte_42E9A0B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12509/*"START_SVTCOMBINE_EFFECT"*/, kind, infoIdx, baseData);
    byte_42E9A0B = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.combineVoiceId, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(gameObject, v33);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12509/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_27015220(
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E9A0C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12509/*"START_SVTCOMBINE_EFFECT"*/, kind, infoIdx, baseData);
    byte_42E9A0C = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    *(System_String_array ***)&infoIdx,
    (System_String_array **)baseData,
    (System_Boolean_array **)resData,
    *(System_Int32_array ***)&svtId,
    (System_Int32_array *)voiceId,
    (System_Int32_array *)statusDisp);
  this->fields.resUsrSvtData = resData;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineVoiceId,
    (System_Int32_array **)voiceId,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.combineStatusDisp = statusDisp;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_B5D69C(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12509/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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
  __int64 v30; // x1

  if ( (byte_42E9A0D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12509/*"START_SVTCOMBINE_EFFECT"*/, kind, infoIdx, *(_QWORD *)&normalExp);
    byte_42E9A0D = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(gameObject, v30);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12509/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v10; // x21

  if ( (byte_42E9A44 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__, v5, v6, v7);
    byte_42E9A44 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_B5D69C(bgCollider, method);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v10, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *bgCollider; // x0
  _DWORD *v10; // x22
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x8
  ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t v14; // w22
  int32_t v15; // w23
  System_Action_o *v16; // x25

  if ( (byte_42E9A42 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__, v6, v7, v8);
    byte_42E9A42 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  bgCollider = this->fields.npInfoAddManager;
  if ( !bgCollider )
    goto LABEL_11;
  bgCollider = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(
                 (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
                 index,
                 0LL);
  if ( !this->fields.npInfoAddManager )
    goto LABEL_11;
  v10 = bgCollider;
  bgCollider = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
                 this->fields.npInfoAddManager,
                 index,
                 0LL);
  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager
    || !v10
    || !bgCollider
    || (tdAddEntity_k__BackingField = npInfoAddManager->fields._tdAddEntity_k__BackingField,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v14 = v10[7],
        v15 = *((_DWORD *)bgCollider + 7),
        v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_B5D69C(bgCollider, *(_QWORD *)&index);
  }
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    tdAddEntity_k__BackingField,
    index,
    v14,
    v15,
    v16,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowSkillChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *bgCollider; // x0
  _DWORD *v10; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v12; // w21
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t v15; // w24
  System_String_o *costumeName; // x25
  System_Action_o *v17; // x26

  if ( (byte_42E9A43 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__, v6, v7, v8);
    byte_42E9A43 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  bgCollider = this->fields.costumeSkillInfoManager;
  if ( !bgCollider )
    goto LABEL_10;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
                 (CombineResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
                 index,
                 0LL);
  if ( !this->fields.costumeSkillInfoManager )
    goto LABEL_10;
  v10 = bgCollider;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
                 this->fields.costumeSkillInfoManager,
                 index,
                 0LL);
  if ( !v10 )
    goto LABEL_10;
  if ( !bgCollider )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v12 = v10[4];
  v13 = v10[5];
  v14 = *((_DWORD *)bgCollider + 4);
  v15 = *((_DWORD *)bgCollider + 5);
  costumeName = this->fields.costumeName;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B5D69C(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v12,
    v13,
    v14,
    v15,
    costumeName,
    v17,
    0LL);
}


void __fastcall CombineResultEffectComponent__ShowSkillChangeMessage(
        CombineResultEffectComponent_o *this,
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
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  System_Action_o *v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42E9A41 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    byte_42E9A41 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v15 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B5D69C(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v16, v17, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(
        CombineResultEffectComponent_o *this,
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
  int64_t bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x20
  __int128 v22; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x21
  UserServantEntity_o *Entity; // x21
  int32_t id; // w21
  int32_t lv; // w22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v28; // w23
  int32_t v29; // w24
  System_Action_o *v30; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v33; // [xsp+48h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-38h] BYREF

  if ( (byte_42E9A45 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E9A45 = 1;
  }
  tdInfo = 0LL;
  v33 = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_15;
  bgCollider = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v22 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)bgCollider;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v31 = v32;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v31, 0LL);
  if ( !v23 )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v23,
             bgCollider,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_15;
  bgCollider = UserServantEntity__getTreasureDeviceInfo(Entity, &v33, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v33
    || (id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v28 = v33->fields.id,
        v29 = v33->fields.lv,
        v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_15:
    sub_B5D69C(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v28, v29, v30, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__169_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9A5F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__, v5, v6, v7);
    byte_42E9A5F = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_B5D69C(v10, v11);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v9, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__144_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E9A5D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5561/*"END_LOAD"*/, v5, v6, v7);
    byte_42E9A5D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_B5D69C(Instance, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5561/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__154_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9A5E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent__EndPlay_b__154_2__, v5, v6, v7);
    byte_42E9A5E = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__154_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_B5D69C(v10, v11);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v9, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__163_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B5D69C(0LL, method);
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___InitCombineEffect_b__111_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42E9A5A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5561/*"END_LOAD"*/, (_DWORD)method, v2, v3);
    byte_42E9A5A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5561/*"END_LOAD"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetAppendSkillCombineInfo_b__107_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_Transform_o *transform; // x21
  int v29; // s0

  if ( (byte_42E9A58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12499/*"START_LVEXCEED_EFFECT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17012/*"bit_result_extraskill"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11618/*"ResultEffect"*/, v21, v22, v23);
    byte_42E9A58 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_17012/*"bit_result_extraskill"*/,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v27 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v29, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11618/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v27, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B5D69C(fsm, v26);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12499/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetCombineLimit_b__110_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_array *v27; // x21
  System_String_o *v28; // x0
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  System_String_o *v38; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v40; // x20
  UnityEngine_Transform_o *transform; // x21
  int v42; // s0
  __int64 v45; // x0
  __int64 v46; // x0

  if ( (byte_42E9A59 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&string___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11618/*"ResultEffect"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12487/*"START_COMBINE_LIMIT"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17006/*"bit_result_"*/, v24, v25, v26);
    byte_42E9A59 = 1;
  }
  if ( data )
  {
    v27 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 1LL);
    v28 = System_Int32__ToString((int)this + 320, 0LL);
    fsm = (UnityEngine_GameObject_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_17006/*"bit_result_"*/, v28, 0LL);
    if ( !v27 )
      goto LABEL_20;
    v37 = (System_Int32_array **)fsm;
    if ( fsm )
    {
      fsm = (UnityEngine_GameObject_o *)sub_B5D684(fsm, v27->obj.klass->_1.element_class);
      if ( !fsm )
      {
        v46 = sub_B5D6BC(0LL);
        sub_B5D668(v46, 0LL);
      }
    }
    if ( !v27->max_length )
    {
      v45 = sub_B5D6C8(fsm);
      sub_B5D668(v45, 0LL);
    }
    v27->m_Items[0] = (System_String_o *)v37;
    sub_B5D560((BattleServantConfConponent_o *)v27->m_Items, v37, v31, v32, v33, v34, v35, v36);
    v38 = System_String__Concat_44657912(v27, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 v38,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_20;
    v40 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11618/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v40, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_20:
      sub_B5D69C(fsm, v30);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12487/*"START_COMBINE_LIMIT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__103_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_Transform_o *transform; // x21
  int v29; // s0

  if ( (byte_42E9A57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17015/*"bit_result_friendship_exceed"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11618/*"ResultEffect"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12495/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v21, v22, v23);
    byte_42E9A57 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_17015/*"bit_result_friendship_exceed"*/,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v27 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v29, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11618/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v27, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B5D69C(fsm, v26);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12495/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__101_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_Transform_o *transform; // x21
  int v29; // s0

  if ( (byte_42E9A56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12499/*"START_LVEXCEED_EFFECT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17020/*"bit_result_limitbreak"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11618/*"ResultEffect"*/, v21, v22, v23);
    byte_42E9A56 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_17020/*"bit_result_limitbreak"*/,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v27 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v29, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11618/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v27, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B5D69C(fsm, v26);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12499/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B5D69C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__149_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B5D69C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B5D69C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__148_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B5D69C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B5D69C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__113_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42E9A5B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5561/*"END_LOAD"*/, (_DWORD)method, v2, v3);
    byte_42E9A5B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5561/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_0(
        CombineResultEffectComponent_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_Object_o *effect; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  DataManager_o *Instance; // x0
  __int64 v38; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v41; // x22
  __int64 v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UserServantEntity_o *v49; // x21
  System_Int32_array **callbackFunc; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CommonUI_o *v65; // x22
  CombineResultEffectComponent_ClickDelegate_o *v66; // x25
  CombineResultEffectComponent_ClickDelegate_o *v67; // x0

  if ( (byte_42E9A5C & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__, v20, v21, v22);
    sub_B5D5C4(&CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v26, v27, v28);
    byte_42E9A5C = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35620448(effect, 0LL);
  this->fields.effect = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v30, v31, v32, v33, v34, v35);
  CombineResultEffectComponent__Close(this, v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.targetSvtId,
                       0LL);
  if ( EntityDefinitely )
  {
    v41 = EntityDefinitely;
    v42 = sub_B5D694(CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo);
    CombineResultEffectComponent___c__DisplayClass143_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass143_2_o *)v42,
      0LL);
    if ( v42 )
    {
      *(_QWORD *)(v42 + 24) = this;
      sub_B5D560((BattleServantConfConponent_o *)(v42 + 24), (System_Int32_array **)this, v43, v44, v45, v46, v47, v48);
      v49 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21827392(v49, v41, 0LL);
      callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
      *(_QWORD *)(v42 + 16) = callbackFunc;
      sub_B5D560((BattleServantConfConponent_o *)(v42 + 16), callbackFunc, v51, v52, v53, v54, v55, v56);
      this->fields.callbackFunc = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v57, v58, v59, v60, v61, v62);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v49 )
      {
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v49->fields.treasureDeviceLv1;
        v65 = (CommonUI_o *)Instance;
        v66 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B5D694(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v66,
          (Il2CppObject *)v42,
          Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__,
          0LL);
        if ( v65 )
        {
          CommonUI__OpenNobleCombineResult(
            v65,
            18,
            v49,
            targetId,
            treasureDeviceLv1,
            v66,
            this->fields.targetIdOld,
            v49->fields.treasureDeviceLv1,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B5D69C(Instance, v38);
  }
  v67 = this->fields.callbackFunc;
  if ( v67 )
    CombineResultEffectComponent_ClickDelegate__Invoke(v67, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B5D69C(0LL, method);
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


bool __fastcall CombineResultEffectComponent__checkSecretTreasureDeviceData(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  ServantFlagEntity_o *v14; // x8
  struct System_Int32_array *args; // x9
  struct System_Int32_array *v16; // x8
  int32_t v17; // w8
  bool result; // w0
  __int64 v19; // x0
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9A1A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E9A1A = 1;
  }
  svtFlagEntity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_29327396(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0LL) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
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
    sub_B5D69C(Instance, v13);
  if ( !v16->max_length )
  {
LABEL_18:
    v19 = sub_B5D6C8(Instance);
    sub_B5D668(v19, 0LL);
  }
  v17 = v16->m_Items[1];
  result = 1;
LABEL_16:
  this->fields.targetIdOld = v17;
  return result;
}


void __fastcall CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent_CostumeSkillInfoManager_o *bgCollider; // x0
  const MethodInfo *v6; // x1
  int32_t kind; // w8
  const MethodInfo *v8; // x2
  int32_t v9; // w20
  int32_t v10; // w0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_42E9A4A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9A4A = 1;
  }
  bgCollider = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_44;
  if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)bgCollider, 0LL) )
  {
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v6) )
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v8);
        bgCollider = this->fields.costumeSkillInfoManager;
        v9 = this->fields.skillShowIndex + 1;
        this->fields.skillShowIndex = v9;
        if ( bgCollider )
        {
          v10 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(bgCollider, 0LL);
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
            CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, v6);
            this->fields.treasureDeviceEnabled = 0;
            goto LABEL_32;
          }
          goto LABEL_36;
        }
LABEL_24:
        if ( (unsigned int)kind <= 0x1A && ((1 << kind) & 0x4080402) != 0 )
        {
          if ( CombineResultEffectComponent__IsShowLimitUpInfo(this, v6) )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v13);
            bgCollider = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)this->fields.limitUpResultCheck;
            if ( !bgCollider )
              goto LABEL_44;
            if ( LimitUpResultCheckComponent__CheckFinishedResultLimitUp(
                   (LimitUpResultCheckComponent_o *)bgCollider,
                   0LL) )
            {
              goto LABEL_32;
            }
            return;
          }
          kind = this->fields.kind;
        }
        if ( !kind )
          CombineResultEffectComponent__stopVoice(this, v6);
LABEL_36:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( this->fields.kind != 24 )
          CombineResultEffectComponent__ReleaseVoiceData(this, v14);
        if ( !CombineResultEffectComponent__OpenNotification(this, v14) )
          CombineResultEffectComponent__FadeoutProcess(this, v15);
        return;
      }
    }
    else if ( kind != 4 && kind != 8 )
    {
      goto LABEL_24;
    }
    if ( CombineResultEffectComponent__IsShowNextNpInfo(this, v6) )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v12);
      bgCollider = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)this->fields.npInfoAddManager;
      v9 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v9;
      if ( bgCollider )
      {
        v10 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
                (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
                0LL);
LABEL_21:
        if ( v9 < v10 )
          return;
LABEL_32:
        CombineResultEffectComponent__EndDisp(this, v11);
        return;
      }
LABEL_44:
      sub_B5D69C(bgCollider, method);
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
  BattleServantConfConponent_o *static_fields; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v24; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1

  if ( (byte_42E9A1F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_CombineResultEffectComponent__endloadEffect_b__113_0__, v13, v14, v15);
    sub_B5D5C4(&CombineResultEffectComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20, v21);
    byte_42E9A1F = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)CombineResultEffectComponent_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B5D560(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
    v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__113_0__, 0LL);
    if ( !Instance )
      sub_B5D69C(v27, v28);
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v26, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v28; // x8
  ServantVoiceMaster_o *v29; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42E9A27 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E9A27 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.asstName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.playVoiceList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v15, v16, v17, v18, v19, v20);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v25 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v25;
  *(_QWORD *)&v45.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v26, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v28 = this->fields.resUsrSvtData) == 0LL)
    || (v29 = (ServantVoiceMaster_o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      v28->fields.limitCount,
                                      0LL),
        !v29) )
  {
LABEL_13:
    sub_B5D69C(Instance, v22);
  }
  Entity = ServantVoiceMaster__getEntity(v29, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtVoiceEntity,
    (System_Int32_array **)Entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantVoiceData_array *result; // x0

  if ( (byte_42E9A3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5, v6, v7);
    byte_42E9A3B = 1;
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
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *transform; // x19
  int v19; // s0
  UnityEngine_Transform_o *v22; // x19
  int v23; // s0

  if ( (byte_42E9A20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)parentTr, (_DWORD)method, v3);
    sub_B5D5C4(&CombineResultEffectComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E9A20 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v17 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL),
        v22 = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL),
        !v22) )
  {
LABEL_12:
    sub_B5D69C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  return v17;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceData_array *__fastcall CombineResultEffectComponent__getLimitUpSvtVoiceList(
        CombineResultEffectComponent_o *this,
        bool isPlayVoice,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UserServantEntity_o *resUsrSvtData; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  ServantVoiceData_array *result; // x0
  struct UserServantEntity_o *v15; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42E9A3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    byte_42E9A3A = 1;
  }
  if ( this->fields.isChangeCardImg )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_22;
    resUsrSvtData = (UserServantEntity_o *)UserServantEntity__isLimitCountMax(resUsrSvtData, 0LL);
    svtVoiceEntity = this->fields.svtVoiceEntity;
    if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
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
    v15 = this->fields.resUsrSvtData;
    if ( !v15 )
LABEL_22:
      sub_B5D69C(resUsrSvtData, isPlayVoice);
    v17 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
    v16 = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v17;
    *(_QWORD *)&v19.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
    result = (ServantVoiceData_array *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                         svtVoiceEntity,
                                         v18,
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UserServantEntity_o *Master_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v33; // x21
  __int64 v34; // x24
  int32_t v35; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v37; // x8
  ServantLimitImageMaster_o *v38; // x23
  __int64 v39; // x24
  __int64 v40; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  v9 = costumeId;
  SvtVoiceId = voiceId;
  if ( (byte_42E9A26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, voiceId, costumeId, isLimitUp);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E9A26 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    0LL,
    *(System_String_array ***)&costumeId,
    (System_String_array **)isLimitUp,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.playVoiceList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v24, v25, v26, v27, v28, v29);
  if ( SvtVoiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_29;
    v34 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v57.fields.currentCryptoKey = v34;
    *(_QWORD *)&v57.fields.fakeValue = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v57, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v35, 0LL);
  }
  if ( v9 <= 0 )
  {
    Master_WarQuestSelectionMaster = this->fields.resUsrSvtData;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_29;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_21084824(
                                 Master_WarQuestSelectionMaster->fields.limitCount,
                                 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_WarQuestSelectionMaster, 0, 0LL);
    v9 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v37 = this->fields.resUsrSvtData;
  if ( !v37 )
    goto LABEL_29;
  v38 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v58.fields.currentCryptoKey = v40;
  *(_QWORD *)&v58.fields.fakeValue = v39;
  Master_WarQuestSelectionMaster = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                            v58,
                                                            0LL);
  if ( !v38
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v38,
                                       (int32_t)Master_WarQuestSelectionMaster,
                                       v9,
                                       0LL),
        (Master_WarQuestSelectionMaster = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_WarQuestSelectionMaster = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_29:
    sub_B5D69C(Master_WarQuestSelectionMaster, v31);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_WarQuestSelectionMaster,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtVoiceEntity,
    (System_Int32_array **)Entity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
}


void __fastcall CombineResultEffectComponent__loadBoxGachaEffect(
        CombineResultEffectComponent_o *this,
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
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_42E9A1E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent_endloadEffect__, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5912/*"Effect/Combine"*/, v11, v12, v13);
    byte_42E9A1E = 1;
  }
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5912/*"Effect/Combine"*/, v14, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__loadVoiceData(
        CombineResultEffectComponent_o *this,
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
  WebViewManager_o *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v13; // x21
  System_Action_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E9A28 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent_EndLoad__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8, v9, v10);
    byte_42E9A28 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v13 = (SoundManager_o *)Instance;
    v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v13 )
      sub_B5D69C(v15, v16);
    SoundManager__LoadAudioAssetStorage(v13, asstName, v14, 1, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v21; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v23; // x8
  __int64 v24; // x9
  int32_t svtResultInfoWindow_high; // w21
  int32_t commandCardExceedResultWindow; // w20
  float FadeTime; // s0
  System_Collections_Generic_IEnumerable_TSource__o *currentFigureCollectList; // x0
  float v29; // s8
  int32_t v30; // w2
  ServantVoiceData_array *v31; // x3
  const MethodInfo *v32; // x6
  System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x4
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v37; // x22
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x0

  v8 = this;
  if ( (byte_42E9A3F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_CombineResultEffectComponent_EndPlay__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v12, v13, v14);
    this = (CombineResultEffectComponent_o *)sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    byte_42E9A3F = 1;
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
      v21 = playVoiceList->m_Items[playCnt];
      if ( !v21 )
        goto LABEL_24;
      id = (System_Int32_array **)v21->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      v23 = v8->fields.playVoiceList;
      if ( !v23 )
        goto LABEL_24;
      v24 = v8->fields.playCnt;
      if ( (unsigned int)v24 < v23->max_length )
      {
        this = (CombineResultEffectComponent_o *)v23->m_Items[v24];
        if ( this )
        {
          svtResultInfoWindow_high = HIDWORD(this->fields.svtResultInfoWindow);
          commandCardExceedResultWindow = (int32_t)this->fields.commandCardExceedResultWindow;
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
          currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.currentFigureCollectList;
          if ( currentFigureCollectList )
          {
            v29 = FadeTime;
            if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                   currentFigureCollectList,
                   (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
              {
                afterFigureCollectList = v8->fields.afterFigureCollectList;
              }
              else
              {
                afterFigureCollectList = v8->fields.currentFigureCollectList;
              }
              CombineResultEffectComponent__SetStandFigureFace(
                v8,
                svtResultInfoWindow_high,
                v29,
                v30,
                v31,
                afterFigureCollectList,
                commandCardExceedResultWindow,
                v32);
            }
          }
          asstName = v8->fields.asstName;
          vcName = v8->fields.vcName;
          volume = v8->fields.volume;
          v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v37, (Il2CppObject *)v8, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v38 = (System_Int32_array **)SoundManager__playVoice_23391328(asstName, vcName, volume, v37, 0LL);
          v8->fields.player = (struct SePlayer_o *)v38;
          sub_B5D560((BattleServantConfConponent_o *)&v8->fields.player, v38, v39, v40, v41, v42, v43, v44);
          ++v8->fields.playCnt;
          return;
        }
LABEL_24:
        sub_B5D69C(this, method);
      }
    }
    v45 = sub_B5D6C8(this);
    sub_B5D668(v45, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v18; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_42E9A2C & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    this = (CombineResultEffectComponent_o *)sub_B5D5C4(&StringLiteral_2787/*"BaseSvtNodeName"*/, v8, v9, v10);
    byte_42E9A2C = 1;
  }
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
  v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseUsrSvtData;
  if ( !v14 )
LABEL_12:
    sub_B5D69C(this, method);
  v15 = (int)this;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v15, v16, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v4,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_2787/*"BaseSvtNodeName"*/,
    0,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setBaseSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
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
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v22; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v24; // x21
  float Value; // s0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v27; // x22
  __int64 v28; // x23
  float v29; // s8
  int32_t v30; // w22
  struct UserServantEntity_o *v31; // x8
  ServantLimitImageMaster_o *v32; // x23
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v34; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v36; // x19
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9A36 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, changeNameType, (_DWORD)method, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3955/*"CardScale"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2786/*"BaseSvtCardNodeName"*/, v18, v19, v20);
    byte_42E9A36 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2786/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v22 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v22, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v24 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3955/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v29 = Value;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v28;
  *(_QWORD *)&v41.fields.fakeValue = v27;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v41, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v31 = this->fields.baseUsrSvtData;
  if ( !v31 )
    goto LABEL_25;
  v32 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                            v31->fields.limitCount,
                            0LL);
  if ( !v32 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v32, v30, (int32_t)fsm, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v30, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v24 )
    goto LABEL_25;
  v34 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v24, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_26715804(
                            gameObject,
                            this->fields.baseUsrSvtData,
                            v34,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v36 = (UnityEngine_Component_o *)fsm,
        v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL),
        !v37)
    || (UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v36, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(fsm, *(_QWORD *)&changeNameType);
  }
  v42.fields.x = v29;
  v42.fields.y = v29;
  v42.fields.z = v29;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v42, 0LL);
}


void __fastcall CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantVoiceData_array *CostumeSvtVoiceList; // x0
  __int64 v9; // x1
  ServantVoiceData_o *v10; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v17; // x5
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42E9A34 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8612/*"LimitUpResSvtNodeName"*/, v5, v6, v7);
    byte_42E9A34 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
    {
      v18 = sub_B5D6C8(CostumeSvtVoiceList);
      sub_B5D668(v18, 0LL);
    }
    v10 = CostumeSvtVoiceList->m_Items[0];
    if ( !v10 )
LABEL_14:
      sub_B5D69C(CostumeSvtVoiceList, v9);
    face = v10->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_14;
  v14 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  CostumeSvtVoiceList = (ServantVoiceData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                    v19,
                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_14;
  v15 = (int)CostumeSvtVoiceList;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v15,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8612/*"LimitUpResSvtNodeName"*/,
    v17);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(effect, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__setLimitUpBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v18; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_42E9A2F & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    this = (CombineResultEffectComponent_o *)sub_B5D5C4(&StringLiteral_8611/*"LimitUpBaseSvtNodeName"*/, v8, v9, v10);
    byte_42E9A2F = 1;
  }
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
  v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseUsrSvtData;
  if ( !v14 )
LABEL_12:
    sub_B5D69C(this, method);
  v15 = (int)this;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v15, v16, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v4,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8611/*"LimitUpBaseSvtNodeName"*/,
    1,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setNameRevealSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  __int64 v11; // x1
  ServantVoiceData_o *v12; // x8
  int32_t face; // w22
  int32_t ImageLimitCount; // w2
  const MethodInfo *v15; // x5
  __int64 v16; // x0

  if ( (byte_42E9A35 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, svtId, limitCnt, method);
    sub_B5D5C4(&StringLiteral_8611/*"LimitUpBaseSvtNodeName"*/, v7, v8, v9);
    byte_42E9A35 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      v16 = sub_B5D6C8(LimitUpSvtVoiceList);
      sub_B5D668(v16, 0LL);
    }
    v12 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v12 )
      sub_B5D69C(LimitUpSvtVoiceList, v11);
    face = v12->fields.face;
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
    (System_String_o *)StringLiteral_8611/*"LimitUpBaseSvtNodeName"*/,
    v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setNameRevealSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t changeNameType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v13; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v15; // x23
  float Value; // s0
  float v17; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  struct UICharaGraphTexture_o **p_nameRevealCard; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Transform_o *v27; // x19
  int v28; // s0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9A38 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3955/*"CardScale"*/, svtId, limitCnt, *(_QWORD *)&changeNameType);
    sub_B5D5C4(&StringLiteral_2786/*"BaseSvtCardNodeName"*/, v9, v10, v11);
    byte_42E9A38 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2786/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v13 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v13, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v15 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3955/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v15 )
    goto LABEL_16;
  v17 = Value;
  gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
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
  p_nameRevealCard = &this->fields.nameRevealCard;
  this->fields.nameRevealCard = TexturePrefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nameRevealCard,
    (System_Int32_array **)TexturePrefab,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm
    || (v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_zero(0LL),
        !v27)
    || (UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)&v28, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(fsm, *(_QWORD *)&svtId);
  }
  v31.fields.x = v17;
  v31.fields.y = v17;
  v31.fields.z = v17;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v31, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultCostumeSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v10; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v12; // x21
  float Value; // s0
  float v14; // s8
  UserServantEntity_o *resUsrSvtData; // x20
  UnityEngine_GameObject_o *v16; // x21
  int32_t FigureImageLimitCount; // w0
  UnityEngine_Component_o *v18; // x19
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9A39 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3955/*"CardScale"*/, changeNameType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11619/*"ResultSvtCardNodeName"*/, v6, v7, v8);
    byte_42E9A39 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11619/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v10 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v10, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v12 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3955/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v12 )
    goto LABEL_16;
  v14 = Value;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_16;
  v16 = (UnityEngine_GameObject_o *)fsm;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(resUsrSvtData, 0, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_26715804(
                            v16,
                            resUsrSvtData,
                            FigureImageLimitCount,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v18 = (UnityEngine_Component_o *)fsm,
        v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL),
        !v19)
    || (UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v18, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(fsm, *(_QWORD *)&changeNameType);
  }
  v23.fields.x = v14;
  v23.fields.y = v14;
  v23.fields.z = v14;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v23, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v18, 1.89, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
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
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v22; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v24; // x21
  float Value; // s0
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v27; // x22
  __int64 v28; // x23
  float v29; // s8
  int32_t v30; // w22
  struct UserServantEntity_o *v31; // x8
  ServantLimitImageMaster_o *v32; // x23
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v34; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v36; // x19
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9A37 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, changeNameType, (_DWORD)method, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3955/*"CardScale"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11619/*"ResultSvtCardNodeName"*/, v18, v19, v20);
    byte_42E9A37 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11619/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v22 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v22, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v24 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3955/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v28 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v29 = Value;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v28;
  *(_QWORD *)&v41.fields.fakeValue = v27;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v41, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v31 = this->fields.resUsrSvtData;
  if ( !v31 )
    goto LABEL_25;
  v32 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                            v31->fields.limitCount,
                            0LL);
  if ( !v32 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v32, v30, (int32_t)fsm, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v30, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v24 )
    goto LABEL_25;
  v34 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v24, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_26715804(
                            gameObject,
                            this->fields.resUsrSvtData,
                            v34,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v36 = (UnityEngine_Component_o *)fsm,
        v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL),
        !v37)
    || (UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v36, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(fsm, *(_QWORD *)&changeNameType);
  }
  v42.fields.x = v29;
  v42.fields.y = v29;
  v42.fields.z = v29;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v42, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v36, 1.89, 0LL);
}


void __fastcall CombineResultEffectComponent__setSkillResultInfo(
        CombineResultEffectComponent_o *this,
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
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  __int64 v134; // x20
  __int64 Instance; // x0
  const MethodInfo *v136; // x1
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  int32_t kind; // w8
  SkillUpResultWindowComponent_o *v150; // x20
  UserServantEntity_o *v151; // x21
  int32_t v152; // w22
  int32_t v153; // w23
  System_Action_o *v154; // x24
  const MethodInfo *v155; // x2
  struct UserServantEntity_o *v156; // x8
  System_String_array *v157; // x20
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x21
  System_String_o *v165; // x0
  const MethodInfo *v166; // x2
  struct UserServantEntity_o *v167; // x8
  System_String_array *v168; // x20
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x21
  System_String_o *v176; // x0
  UserServantEntity_o *v177; // x20
  MethodInfo *v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  struct ServantVoiceData_array **p_playVoiceList; // x20
  struct ServantVoiceData_array **v185; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v191; // x20
  System_Action_o *v192; // x24
  struct UserServantEntity_o *v193; // x8
  int32_t targetIdOld; // w26
  int32_t targetLvOld; // w25
  __int64 v196; // x27
  __int64 v197; // x28
  int32_t v198; // w6
  bool v199; // w8
  __int64 v200; // x20
  __int64 v201; // x20
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_int__o *v203; // x20
  __int64 v204; // x28
  int32_t v205; // w22
  struct UserServantEntity_o *v206; // x8
  __int64 v207; // x23
  __int64 v208; // x24
  int v209; // w9
  signed int v210; // w10
  __int64 v211; // x8
  __int64 v212; // x23
  struct UserServantEntity_o *v213; // x8
  __int64 v214; // x23
  __int64 v215; // x24
  int32_t v216; // w0
  UserServantEntity_o *v217; // x8
  UserServantCollectionMaster_o *v218; // x23
  struct UserServantEntity_o *v219; // x8
  int64_t v220; // x24
  __int64 v221; // x25
  __int64 v222; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v224; // x23
  struct UserServantEntity_o *v225; // x8
  __int64 v226; // x23
  __int64 v227; // x24
  _BOOL8 v228; // x0
  __int64 v229; // x1
  Il2CppObject *current; // x21
  int64_t UserId; // x0
  __int64 v232; // x1
  struct UserServantEntity_o *v233; // x8
  int64_t v234; // x23
  int32_t v235; // w24
  __int64 v236; // x25
  __int64 v237; // x26
  int32_t v238; // w3
  bool isRelease; // w28
  CommonUI_o *v240; // x20
  AvalonSceneManager_c *v241; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v243; // x0
  __int64 *v244; // x8
  struct ServantVoiceData_array *v245; // x8
  struct UserServantEntity_o *v246; // x8
  __int64 v247; // x20
  __int64 v248; // x21
  struct UserServantEntity_o *v249; // x8
  int v250; // w21
  int v251; // w20
  struct UserServantEntity_o *v252; // x8
  __int64 v253; // x22
  __int64 v254; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v255; // x21
  int32_t v256; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v258; // w8
  SkillUpResultWindowComponent_o *v259; // x20
  UserServantEntity_o *v260; // x21
  System_Action_o *v261; // x22
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  System_String_array **v263; // x2
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  struct UserServantEntity_o *v269; // x8
  __int64 v270; // x27
  __int64 v271; // x28
  SkillUpResultWindowComponent_o *v272; // x20
  UserServantEntity_o *v273; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v275; // x23
  struct UserServantEntity_o **p_baseUsrSvtData; // x22
  struct UserServantEntity_o *v277; // x8
  __int128 v278; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v279; // x20
  struct UserServantEntity_o *v280; // x0
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  struct SvtCombineResultWindowComponent_o *v287; // x20
  struct UserServantEntity_o *v288; // x21
  int32_t v289; // w22
  System_Action_o *v290; // x23
  SvtCombineResultWindowComponent_o *v291; // x0
  UserServantEntity_o *v292; // x1
  int32_t v293; // w2
  System_Action_o *v294; // x3
  System_Action_o *v295; // x4
  CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x20
  int v297; // w2
  __int64 v298; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *v299; // x21
  QuestEntity_o *v300; // x22
  ServantEntity_o *v301; // x21
  BalanceConfig_c *v302; // x8
  System_String_o *v303; // x22
  Il2CppObject *Name; // x0
  System_String_o *v305; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v307; // x21
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v309; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v310; // x21
  struct UserServantEntity_o *v311; // x0
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v319; // w21
  const MethodInfo *v320; // x1
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v328; // x3
  __int64 v329; // x22
  System_String_array **v330; // x2
  System_String_array **v331; // x3
  System_Boolean_array **v332; // x4
  System_Int32_array **v333; // x5
  System_Int32_array *v334; // x6
  System_Int32_array *v335; // x7
  System_Int32_array **callbackFunc; // x1
  System_String_array **v337; // x2
  System_String_array **v338; // x3
  System_Boolean_array **v339; // x4
  System_Int32_array **v340; // x5
  System_Int32_array *v341; // x6
  System_Int32_array *v342; // x7
  System_String_array **v343; // x2
  System_String_array **v344; // x3
  System_Boolean_array **v345; // x4
  System_Int32_array **v346; // x5
  System_Int32_array *v347; // x6
  System_Int32_array *v348; // x7
  __int64 v349; // x23
  System_Action_o *v350; // x24
  System_String_array **v351; // x2
  System_String_array **v352; // x3
  System_Boolean_array **v353; // x4
  System_Int32_array **v354; // x5
  System_Int32_array *v355; // x6
  System_Int32_array *v356; // x7
  Il2CppObject *v357; // x21
  CombineResultEffectComponent_ClickDelegate_o *v358; // x22
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v366; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v368; // x23
  System_Action_o *v369; // x24
  System_String_o *v370; // x23
  Il2CppObject *v371; // x22
  Il2CppObject *v372; // x0
  AvalonSceneManager_c *v373; // x8
  System_Action_o *v374; // x21
  __int64 v375; // x0
  __int64 v376; // x0
  SkillUpResultWindowComponent_o *v377; // x21
  int32_t v378; // w22
  int32_t v379; // w23
  System_Action_o *v380; // x24
  struct UserServantEntity_o *v381; // x8
  int32_t v382; // w25
  int32_t v383; // w19
  __int64 v384; // x26
  __int64 v385; // x27
  int32_t v386; // w26
  char isDispLv; // [xsp+10h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v388; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v389; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v390; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v391; // [xsp+80h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int32_t v393; // [xsp+B8h] [xbp-58h]
  int32_t lv; // [xsp+BCh] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v401; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v403; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v404; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v405; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v406; // 0:x0.16

  if ( (byte_42E9A3C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_CombineResultEffectComponent_EndDisp__, v14, v15, v16);
    sub_B5D5C4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__, v17, v18, v19);
    sub_B5D5C4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__, v20, v21, v22);
    sub_B5D5C4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__, v23, v24, v25);
    sub_B5D5C4(&Method_CombineResultEffectComponent_clickNext__, v26, v27, v28);
    sub_B5D5C4(&CombineResultFormManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v32, v33, v34);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v35, v36, v37);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v38, v39, v40);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v41, v42, v43);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v44, v45, v46);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v47, v48, v49);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v50, v51, v52);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int___, v56, v57, v58);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v71, v72, v73);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v74, v75, v76);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v80, v81, v82);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v83, v84, v85);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v86, v87, v88);
    sub_B5D5C4(&NetworkManager_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v92, v93, v94);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v95, v96, v97);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v98, v99, v100);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v101, v102, v103);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v104, v105, v106);
    sub_B5D5C4(&string___TypeInfo, v107, v108, v109);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v110, v111, v112);
    sub_B5D5C4(&Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__, v113, v114, v115);
    sub_B5D5C4(&CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo, v116, v117, v118);
    sub_B5D5C4(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__, v119, v120, v121);
    sub_B5D5C4(&CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo, v122, v123, v124);
    sub_B5D5C4(&StringLiteral_11018/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v125, v126, v127);
    sub_B5D5C4(&StringLiteral_11019/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v128, v129, v130);
    sub_B5D5C4(&StringLiteral_1/*""*/, v131, v132, v133);
    byte_42E9A3C = 1;
  }
  lv = 0;
  entity = 0LL;
  memset(&v391, 0, sizeof(v391));
  v134 = sub_B5D694(CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass143_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass143_0_o *)v134,
    0LL);
  if ( v134 )
  {
    *(_QWORD *)(v134 + 24) = this;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v134 + 24),
      (System_Int32_array **)this,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
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
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
          p_baseUsrSvtData = &this->fields.baseUsrSvtData;
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            break;
          v309 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v310 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          *(_OWORD *)&v390.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v390.fields.fakeValue = v309;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v389 = v390;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v389, 0LL);
          if ( !v310 )
            break;
          v311 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v310,
                   Instance,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          this->fields.resUsrSvtData = v311;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
            (System_Int32_array **)v311,
            v312,
            v313,
            v314,
            v315,
            v316,
            v317);
        }
        if ( !*p_baseUsrSvtData )
          break;
        lv = (*p_baseUsrSvtData)->fields.lv;
        resUsrSvtData = this->fields.resUsrSvtData;
        if ( !resUsrSvtData )
          break;
        v319 = resUsrSvtData->fields.lv;
        if ( !System_Int32__Equals_39741700((int32_t)&lv, v319, 0LL) )
        {
          if ( this->fields.asstName )
          {
            if ( this->fields.svtVoiceEntity )
            {
              playVoiceList = this->fields.playVoiceList;
              if ( playVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
                CombineResultEffectComponent__playVoice(this, v320);
              }
            }
          }
        }
        *(_QWORD *)(v134 + 16) = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)(v134 + 16), 0LL, v321, v322, v323, v324, v325, v326);
        if ( CombineResultEffectComponent__CheckCombineLimit(this, lv, v319, v328) )
        {
          v329 = sub_B5D694(CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo);
          CombineResultEffectComponent___c__DisplayClass143_1___ctor(
            (CombineResultEffectComponent___c__DisplayClass143_1_o *)v329,
            0LL);
          if ( !v329 )
            break;
          *(_QWORD *)(v329 + 24) = v134;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v329 + 24),
            (System_Int32_array **)v134,
            v330,
            v331,
            v332,
            v333,
            v334,
            v335);
          callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
          *(_QWORD *)(v329 + 16) = callbackFunc;
          sub_B5D560((BattleServantConfConponent_o *)(v329 + 16), callbackFunc, v337, v338, v339, v340, v341, v342);
          this->fields.callbackFunc = 0LL;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            0LL,
            v343,
            v344,
            v345,
            v346,
            v347,
            v348);
          v349 = *(_QWORD *)(v329 + 24);
          v350 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v350,
            (Il2CppObject *)v329,
            Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__,
            0LL);
          if ( !v349 )
            break;
          *(_QWORD *)(v349 + 16) = v350;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v349 + 16),
            (System_Int32_array **)v350,
            v351,
            v352,
            v353,
            v354,
            v355,
            v356);
          v357 = *(Il2CppObject **)(v329 + 24);
          v358 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B5D694(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            v358,
            v357,
            Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__,
            0LL);
          this->fields.callbackFunc = v358;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)v358,
            v359,
            v360,
            v361,
            v362,
            v363,
            v364);
        }
        if ( !this->fields.combineStatusDisp )
        {
LABEL_211:
          CombineResultEffectComponent__EndDisp(this, v136);
          return;
        }
        svtResultInfoWindow = this->fields.svtResultInfoWindow;
        v366 = this->fields.resUsrSvtData;
        baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
        v368 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v368, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v369 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v369, (Il2CppObject *)this, Method_CombineResultEffectComponent_clickNext__, 0LL);
        if ( !svtResultInfoWindow )
          break;
        v291 = svtResultInfoWindow;
        v292 = v366;
        v293 = baseUsrSvtCollictionLv;
        v294 = v368;
        v295 = v369;
LABEL_210:
        SvtCombineResultWindowComponent__setAfterSvtResultState(v291, v292, v293, v294, v295, 0LL);
        return;
      case 1:
      case 10:
      case 19:
      case 26:
        Instance = sub_B5D5DC(string___TypeInfo, 1LL);
        v156 = this->fields.baseUsrSvtData;
        if ( !v156 )
          break;
        v157 = (System_String_array *)Instance;
        *(_QWORD *)&v395.fields.currentCryptoKey = &v156->fields.svtId;
        *(_QWORD *)&v395.fields.fakeValue = 0LL;
        Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v395, v155);
        if ( !v157 )
          break;
        v164 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B5D684(Instance, v157->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_229;
        }
        if ( !v157->max_length )
          goto LABEL_226;
        v157->m_Items[0] = (System_String_o *)v164;
        sub_B5D560((BattleServantConfConponent_o *)v157->m_Items, v164, v158, v159, v160, v161, v162, v163);
        v165 = System_String__Concat_44657912(v157, 0LL);
        if ( UnityEngine_PlayerPrefs__GetInt_35647620(v165, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
          goto LABEL_23;
        Instance = sub_B5D5DC(string___TypeInfo, 1LL);
        v167 = this->fields.baseUsrSvtData;
        if ( !v167 )
          break;
        v168 = (System_String_array *)Instance;
        *(_QWORD *)&v396.fields.currentCryptoKey = &v167->fields.svtId;
        *(_QWORD *)&v396.fields.fakeValue = 0LL;
        Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v396, v166);
        if ( !v168 )
          break;
        v175 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B5D684(Instance, v168->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_229:
            v376 = sub_B5D6BC(Instance);
            sub_B5D668(v376, 0LL);
          }
        }
        if ( !v168->max_length )
          goto LABEL_226;
        v168->m_Items[0] = (System_String_o *)v175;
        sub_B5D560((BattleServantConfConponent_o *)v168->m_Items, v175, v169, v170, v171, v172, v173, v174);
        v176 = System_String__Concat_44657912(v168, 0LL);
        UnityEngine_PlayerPrefs__SetInt(v176, 0, 0LL);
        v177 = this->fields.baseUsrSvtData;
        if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        }
        CombineResultFormManager__ResetVoiceList(v177, 0LL);
LABEL_23:
        Instance = (__int64)this->fields.limitUpResultCheck;
        if ( !Instance )
          break;
        LimitUpResultCheckComponent__checkResultLimitUp(
          (LimitUpResultCheckComponent_o *)Instance,
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
          v185 = &this->fields.playVoiceList;
          LimitUpSvtVoiceList = 0LL;
        }
        else
        {
          LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v178);
          this->fields.playVoiceList = LimitUpSvtVoiceList;
          v185 = &this->fields.playVoiceList;
        }
        sub_B5D560(
          (BattleServantConfConponent_o *)v185,
          (System_Int32_array **)LimitUpSvtVoiceList,
          (System_String_array **)v178,
          v179,
          v180,
          v181,
          v182,
          v183);
        v245 = *p_playVoiceList;
        if ( *p_playVoiceList )
        {
LABEL_130:
          if ( this->fields.asstName )
          {
            this->fields.maxPlayCnt = *(_QWORD *)&v245->max_length;
            CombineResultEffectComponent__playVoice(this, v136);
          }
          return;
        }
        v246 = this->fields.baseUsrSvtData;
        if ( !v246 )
          break;
        v248 = *(_QWORD *)&v246->fields.limitCount.fields.currentCryptoKey;
        v247 = *(_QWORD *)&v246->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v403.fields.currentCryptoKey = v248;
        *(_QWORD *)&v403.fields.fakeValue = v247;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v403, 0LL);
        v249 = this->fields.baseUsrSvtData;
        v250 = Instance == 2;
        if ( !v249 )
          break;
        v251 = Instance;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v249->fields.limitCount, 0LL) != 3 )
          goto LABEL_124;
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        v252 = this->fields.baseUsrSvtData;
        if ( v252 )
        {
          v254 = *(_QWORD *)&v252->fields.svtId.fields.currentCryptoKey;
          v253 = *(_QWORD *)&v252->fields.svtId.fields.fakeValue;
          v255 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1016LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v404.fields.currentCryptoKey = v254;
          *(_QWORD *)&v404.fields.fakeValue = v253;
          v256 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v404, 0LL);
          v250 = (v251 == 2) | System_Linq_Enumerable__Contains_int_(
                                 v255,
                                 v256,
                                 (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_124:
          isLimitUpSuppression = this->fields.isLimitUpSuppression;
          if ( this->fields.isLimitUpSuppression )
          {
            v258 = this->fields.kind;
            isLimitUpSuppression = v258 != 10 && v258 != 26;
          }
          if ( (isLimitUpSuppression & v250) != 0 )
          {
            CombineResultEffectComponent__OpenLimitCountSealDialog(this, v136);
            return;
          }
          limitUpResultCheck = this->fields.limitUpResultCheck;
          v307 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v307,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__,
            0LL);
          if ( limitUpResultCheck )
          {
            LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v307, 1, 0LL);
            return;
          }
        }
        break;
      case 2:
      case 3:
        Instance = (__int64)this->fields.baseUsrSvtData;
        if ( !Instance )
          break;
        SkillIdList = UserServantEntity__getSkillIdList((UserServantEntity_o *)Instance, -1, -1, 1, 0LL);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v191 = SkillIdList;
        v192 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v192, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v193 = this->fields.baseUsrSvtData;
        if ( !v193 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v197 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
        v196 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v397.fields.currentCryptoKey = v197;
        *(_QWORD *)&v397.fields.fakeValue = v196;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v397, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v198 = Instance;
        v199 = this->fields.kind == 3;
        isDispLv = 0;
        goto LABEL_142;
      case 4:
      case 5:
      case 8:
      case 18:
      case 27:
        v150 = this->fields.skillResultInfoWindow;
        v151 = this->fields.baseUsrSvtData;
        v152 = this->fields.targetId;
        v153 = this->fields.targetLv;
        v154 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v154, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v150 )
          break;
        SkillUpResultWindowComponent__OpenNpUpResultInfo_23377000(
          v150,
          v151,
          v152,
          v153,
          v154,
          this->fields.targetIdOld,
          this->fields.targetLvOld,
          this->fields.kind,
          0LL);
        return;
      case 6:
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        v277 = this->fields.baseUsrSvtData;
        if ( !v277 )
          break;
        v278 = *(_OWORD *)&v277->fields.id.fields.fakeValue;
        v279 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
        *(_OWORD *)&v390.fields.currentCryptoKey = *(_OWORD *)&v277->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v390.fields.fakeValue = v278;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v388 = v390;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v388, 0LL);
        if ( !v279 )
          break;
        v280 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 v279,
                 Instance,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.resUsrSvtData = v280;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
          (System_Int32_array **)v280,
          v281,
          v282,
          v283,
          v284,
          v285,
          v286);
        v287 = this->fields.svtResultInfoWindow;
        v288 = this->fields.resUsrSvtData;
        v289 = this->fields.baseUsrSvtCollictionLv;
        v290 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v290, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v287 )
          break;
        v291 = v287;
        v292 = v288;
        v293 = v289;
        v294 = v290;
        v295 = 0LL;
        goto LABEL_210;
      case 7:
      case 21:
        v200 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v200 + 306) & 1) == 0 )
          sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v201 = **(_QWORD **)(v200 + 192);
        if ( (*(_BYTE *)(v201 + 306) & 1) == 0 )
          sub_AF52C4(v201);
        Instance = **(_QWORD **)(v201 + 184);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        v203 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v203,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        v204 = 0LL;
        v205 = 1;
LABEL_59:
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v205 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v206 = this->fields.baseUsrSvtData;
          if ( v206 )
          {
            v208 = *(_QWORD *)&v206->fields.svtId.fields.currentCryptoKey;
            v207 = *(_QWORD *)&v206->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v398.fields.currentCryptoKey = v208;
            *(_QWORD *)&v398.fields.fakeValue = v207;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v398, 0LL);
            if ( MasterData_WarQuestSelectionMaster )
            {
              Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                    MasterData_WarQuestSelectionMaster,
                                    Instance,
                                    v205,
                                    0LL);
              if ( Instance )
              {
                v209 = *(_DWORD *)(Instance + 24);
                if ( v209 < 1 )
                {
LABEL_51:
                  v213 = this->fields.baseUsrSvtData;
                  if ( !v213 )
                    break;
                  v215 = *(_QWORD *)&v213->fields.svtId.fields.currentCryptoKey;
                  v214 = *(_QWORD *)&v213->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v399.fields.currentCryptoKey = v215;
                  *(_QWORD *)&v399.fields.fakeValue = v214;
                  v216 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v399, 0LL);
                  Instance = (__int64)ServantSkillMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v216,
                                        v205,
                                        1,
                                        0LL);
                  v211 = Instance;
                  v212 = v204;
                  if ( Instance )
                  {
LABEL_56:
                    if ( !v203 )
                      break;
                    System_Collections_Generic_List_int___Add(
                      v203,
                      *(_DWORD *)(v211 + 28),
                      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                    v204 = v212;
                  }
                  ++v205;
                  goto LABEL_59;
                }
                v210 = 0;
                while ( 1 )
                {
                  if ( v210 >= (unsigned int)v209 )
                  {
LABEL_226:
                    v375 = sub_B5D6C8(Instance);
                    sub_B5D668(v375, 0LL);
                  }
                  v211 = *(_QWORD *)(Instance + 8LL * v210 + 32);
                  if ( !v211 )
                    break;
                  v212 = *(_QWORD *)(Instance + 8LL * v210 + 32);
                  if ( *(_DWORD *)(v211 + 28) == this->fields.targetId )
                    goto LABEL_56;
                  if ( ++v210 >= v209 )
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
            Instance = (__int64)this->fields.baseUsrSvtData;
            if ( !Instance )
              break;
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            v217 = this->fields.baseUsrSvtData;
            v393 = Instance;
            if ( !v217 )
              break;
            Instance = UserServantEntity__IsHeroine(v217, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              v218 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              v219 = this->fields.baseUsrSvtData;
              if ( !v219 )
                break;
              v220 = Instance;
              v222 = *(_QWORD *)&v219->fields.svtId.fields.currentCryptoKey;
              v221 = *(_QWORD *)&v219->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v400.fields.currentCryptoKey = v222;
              *(_QWORD *)&v400.fields.fakeValue = v221;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v400, 0LL);
              if ( !v218 )
                break;
              Instance = UserServantCollectionMaster__TryGetEntity(v218, &entity, v220, Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)entity;
                if ( !entity )
                  break;
                costumeIds = entity->fields.costumeIds;
                if ( !costumeIds )
                  break;
                if ( *(_QWORD *)&costumeIds->max_length )
                {
                  v224 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v224,
                               (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v224, 0LL);
                    v393 = Instance;
                  }
                }
              }
            }
            v225 = this->fields.baseUsrSvtData;
            if ( !v225 )
              break;
            v227 = *(_QWORD *)&v225->fields.svtId.fields.currentCryptoKey;
            v226 = *(_QWORD *)&v225->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v401.fields.currentCryptoKey = v227;
            *(_QWORD *)&v401.fields.fakeValue = v226;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v401, 0LL);
            if ( !v204 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  *(_DWORD *)(v204 + 20),
                                  this->fields.targetIdOld,
                                  0LL);
            if ( !Instance )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v390,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            v391.fields.current = (Il2CppObject *)v390.fields.fakeValue;
            *(_OWORD *)&v391.fields.list = *(_OWORD *)&v390.fields.currentCryptoKey;
            while ( 1 )
            {
              v228 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v391,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v228 )
                break;
              current = v391.fields.current;
              if ( !v391.fields.current )
                sub_B5D69C(v228, v229);
              if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v391.fields.current, 0, 0LL) )
              {
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                UserId = NetworkManager__get_UserId(0LL);
                v233 = this->fields.baseUsrSvtData;
                if ( !v233 )
                  sub_B5D69C(UserId, v232);
                v234 = UserId;
                v235 = v233->fields.lv;
                v237 = *(_QWORD *)&v233->fields.limitCount.fields.currentCryptoKey;
                v236 = *(_QWORD *)&v233->fields.limitCount.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v402.fields.currentCryptoKey = v237;
                *(_QWORD *)&v402.fields.fakeValue = v236;
                v238 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v402, 0LL);
                if ( ServantSkillEntity__isUse(
                       (ServantSkillEntity_o *)current,
                       v234,
                       v235,
                       v238,
                       v393,
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
              &v391,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
          }
          else
          {
            isRelease = 0;
          }
          v377 = this->fields.skillResultInfoWindow;
          v378 = this->fields.targetId;
          v379 = this->fields.targetLv;
          v380 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v380, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
          v381 = this->fields.baseUsrSvtData;
          if ( v381 )
          {
            v382 = this->fields.targetIdOld;
            v383 = this->fields.targetLvOld;
            v385 = *(_QWORD *)&v381->fields.svtId.fields.currentCryptoKey;
            v384 = *(_QWORD *)&v381->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v406.fields.currentCryptoKey = v385;
            *(_QWORD *)&v406.fields.fakeValue = v384;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v406, 0LL);
            if ( v203 )
            {
              v386 = Instance;
              Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                                    v203,
                                    (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v377 )
              {
                SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                  v377,
                  v378,
                  v379,
                  v380,
                  v382,
                  v383,
                  v386,
                  (System_Int32_array *)Instance,
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
        v272 = this->fields.skillResultInfoWindow;
        v273 = this->fields.baseUsrSvtData;
        oldFriendShipRank = this->fields.oldFriendShipRank;
        v275 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v275, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v272 )
          break;
        SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v272, v273, oldFriendShipRank, v275, 0LL);
        return;
      case 11:
        v259 = this->fields.skillResultInfoWindow;
        v260 = this->fields.baseUsrSvtData;
        v261 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v261, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v259 )
          break;
        SkillUpResultWindowComponent__OpenPowerUpResultInfo(v259, v260, v261, 0LL);
        return;
      case 12:
      case 14:
      case 22:
      case 24:
        goto LABEL_211;
      case 13:
        Instance = (__int64)this->fields.friendshipExceedResultWindow;
        if ( !Instance )
          break;
        FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
          (FriendshipExceedResultWindowComponent_o *)Instance,
          this->fields.baseUsrSvtData,
          0LL);
        goto LABEL_211;
      case 15:
        CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v136);
        this->fields.playVoiceList = CostumeSvtVoiceList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.playVoiceList,
          (System_Int32_array **)CostumeSvtVoiceList,
          v263,
          v264,
          v265,
          v266,
          v267,
          v268);
        v245 = this->fields.playVoiceList;
        if ( v245 )
          goto LABEL_130;
        goto LABEL_211;
      case 16:
      case 17:
        if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        {
          v240 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v241 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v241 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v241->static_fields->DEFAULT_FADE_TIME;
          v243 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          v244 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__;
        }
        else
        {
          if ( kind == 16 )
          {
            messageCallback = this->fields.messageCallback;
            if ( messageCallback )
            {
              this->fields.messageCallback = 0LL;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.messageCallback,
                0LL,
                v143,
                v144,
                v145,
                v146,
                v147,
                v148);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              v299 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_42E4B33 )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v136, v297, v298);
                byte_42E4B33 = 1;
              }
              Instance = (__int64)TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (__int64)TerminalPramsManager_TypeInfo;
              }
              if ( !v299 )
                break;
              v300 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v299,
                                        *(_DWORD *)(*(_QWORD *)(Instance + 184) + 16LL),
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !Instance )
                break;
              v301 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.targetSvtId,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v302 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v302 = BalanceConfig_TypeInfo;
              }
              if ( v302->static_fields->CloseSecretTreasureDeviceQuestClear )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11019/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
                if ( !v301 )
                  break;
                v303 = (System_String_o *)Instance;
                Name = (Il2CppObject *)ServantEntity__getName(v301, -1, -1, 0LL);
                v305 = System_String__Format(v303, Name, 0LL);
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11018/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
                if ( !v300 )
                  break;
                v370 = (System_String_o *)Instance;
                Instance = (__int64)QuestEntity__getQuestName(v300, 0LL);
                if ( !v301 )
                  break;
                v371 = (Il2CppObject *)Instance;
                v372 = (Il2CppObject *)ServantEntity__getName(v301, -1, -1, 0LL);
                v305 = System_String__Format_44573324(v370, v371, v372, 0LL);
              }
              CombineResultEffectComponent_MessageDelegate__Invoke(messageCallback, v305, 0LL);
            }
          }
          if ( !this->fields.callbackFunc )
            return;
          v240 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v373 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v373 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v373->static_fields->DEFAULT_FADE_TIME;
          v243 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          v244 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__;
        }
        v374 = v243;
        System_Action___ctor(v243, (Il2CppObject *)this, *v244, 0LL);
        if ( v240 )
        {
          CommonUI__maskFadeout(v240, 1, DEFAULT_FADE_TIME, v374, 0LL);
          return;
        }
        break;
      case 20:
        Instance = (__int64)this->fields.commandCardExceedResultWindow;
        if ( !Instance )
          break;
        CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
          (CommandCardExceedResultWindowComponent_o *)Instance,
          this->fields.baseUsrSvtData,
          this->fields.commandCardIndex,
          this->fields.commandCardExceedCount,
          0LL);
        goto LABEL_211;
      case 23:
        Instance = (__int64)this->fields.friendshipExceedResultWindow;
        if ( !Instance )
          break;
        FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_30327888(
          (FriendshipExceedResultWindowComponent_o *)Instance,
          this->fields.baseUsrSvtData,
          this->fields.oldFriendShipRank,
          0LL);
        goto LABEL_211;
      case 25:
        Instance = (__int64)this->fields.baseUsrSvtData;
        if ( !Instance )
          break;
        Instance = (__int64)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Instance, 0LL);
        if ( !Instance )
          break;
        v191 = *(System_Int32_array **)(Instance + 16);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v192 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v192, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v269 = this->fields.baseUsrSvtData;
        if ( !v269 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v271 = *(_QWORD *)&v269->fields.svtId.fields.currentCryptoKey;
        v270 = *(_QWORD *)&v269->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v405.fields.currentCryptoKey = v271;
        *(_QWORD *)&v405.fields.fakeValue = v270;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v405, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v198 = Instance;
        v199 = this->fields.targetLvOld == 0;
        isDispLv = 1;
LABEL_142:
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          targetId,
          targetLv,
          v192,
          targetIdOld,
          targetLvOld,
          v198,
          v191,
          v199,
          1,
          isDispLv,
          0LL);
        return;
      default:
        return;
    }
  }
  sub_B5D69C(Instance, v136);
}


void __fastcall CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  BattleServantConfConponent_o *p_player; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9A48 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9A48 = 1;
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
    sub_B5D560(p_player, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_ClickDelegate___ctor(
        CombineResultEffectComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5EB7 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5EB7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CombineResultEffectComponent_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CombineResultEffectComponent_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20

  if ( (byte_42E5EB8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v5, v6, v7);
    byte_42E5EB8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v8;
  sub_B5D560(&this->fields);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v9;
  sub_B5D560(&this->fields.afterSkillList);
}


void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x0
  __int64 v12; // x1

  if ( (byte_42E5EBA & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, id, lv, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7, v8, v9);
    byte_42E5EBA = 1;
  }
  v10 = sub_B5D694(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = id, *(_DWORD *)(v10 + 20) = lv, (afterSkillList = this->fields.afterSkillList) == 0LL) )
  {
    sub_B5D69C(afterSkillList, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x0
  __int64 v12; // x1

  if ( (byte_42E5EB9 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, id, lv, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7, v8, v9);
    byte_42E5EB9 = 1;
  }
  v10 = sub_B5D694(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = id, *(_DWORD *)(v10 + 20) = lv, (beforeSkillList = this->fields.beforeSkillList) == 0LL) )
  {
    sub_B5D69C(beforeSkillList, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v5; // x20
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x20

  v5 = this;
  if ( (byte_42E5EBC & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B5D5C4(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
                                                                       index,
                                                                       (_DWORD)method,
                                                                       v3);
    byte_42E5EBC = 1;
  }
  afterSkillList = v5->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B5D69C(this, *(_QWORD *)&index);
  if ( afterSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return afterSkillList->fields._items->m_Items[index];
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v4; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v4 = this;
  if ( (byte_42E5EBD & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B5D5C4(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
                                                                       (_DWORD)method,
                                                                       v2,
                                                                       v3);
    byte_42E5EBD = 1;
  }
  afterSkillList = v4->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B5D69C(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v5; // x20
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x20

  v5 = this;
  if ( (byte_42E5EBB & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B5D5C4(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
                                                                       index,
                                                                       (_DWORD)method,
                                                                       v3);
    byte_42E5EBB = 1;
  }
  beforeSkillList = v5->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_B5D69C(this, *(_QWORD *)&index);
  if ( beforeSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return beforeSkillList->fields._items->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_MessageDelegate___ctor(
        CombineResultEffectComponent_MessageDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_String_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_String_o *, _QWORD); // x0
  CombineResultEffectComponent_MessageDelegate_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_String_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_String_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  CombineResultEffectComponent_MessageDelegate_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_String_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, message, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = message->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(message, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(message, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = message->klass;
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(message, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(message, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(message, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, message, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v23)(v31, message, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v31
                                                                           + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                           + 312))(
                v31,
                message,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v32)(v31, message, v30);
    }
  }
}


void __fastcall CombineResultEffectComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EB1 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5EB1 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return System_Int32__CompareTo_39741540((_DWORD)a + 24, b->fields.priority, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent___c__DisplayClass143_1_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v17; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v18; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v19; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v20; // x8
  struct CombineResultEffectComponent_o *v21; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  __int64 _9__4; // x22
  CommonUI_o *v24; // x20
  __int64 v25; // x9
  const MethodInfo *v26; // x2

  v4 = this;
  if ( (byte_42E5EB2 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)sub_B5D5C4(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__,
                                                                      v11,
                                                                      v12,
                                                                      v13);
    byte_42E5EB2 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
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
  UnityEngine_Object__DestroyImmediate_35620448(effect, 0LL);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v17->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  this[4].klass = 0LL;
  sub_B5D560(&this[4]);
  v18 = v4->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v18->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0LL);
  v19 = v4->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v19->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  if ( this[4].fields.__9__4 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = v4->fields.CS___8__locals1;
    if ( v20 )
    {
      v21 = v20->fields.__4__this;
      if ( v21 )
      {
        baseUsrSvtData = v21->fields.baseUsrSvtData;
        _9__4 = (__int64)v4->fields.__9__4;
        v24 = (CommonUI_o *)this;
        if ( !_9__4 )
        {
          _9__4 = sub_B5D694(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          v25 = *(_QWORD *)Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)(_9__4 + 40) = Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)(_9__4 + 16) = v25;
          *(_QWORD *)(_9__4 + 32) = v4;
          sub_B5D560(_9__4 + 32);
          v4->fields.__9__4 = (struct CombineResultEffectComponent_ClickDelegate_o *)_9__4;
          sub_B5D560(&v4->fields.__9__4);
        }
        if ( v24 )
        {
          CommonUI__OpenCombineLimit(v24, baseUsrSvtData, (CombineResultEffectComponent_ClickDelegate_o *)_9__4, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B5D69C(this, method);
  }
  if ( this[9].klass )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v4->fields.callback;
    if ( !this )
      goto LABEL_25;
    CombineResultEffectComponent_ClickDelegate__Invoke((CombineResultEffectComponent_ClickDelegate_o *)this, 1, v26);
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
  CombineResultEffectComponent___c__DisplayClass143_1_o *v6; // x19
  const MethodInfo *v7; // x2
  CombineResultEffectComponent_ClickDelegate_o *callback; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (_4__this->fields.combineLimitLv = 0, v5 = this->fields.CS___8__locals1, v6 = this, !v5)
    || (this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v5->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, decide);
  }
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
  callback = v6->fields.callback;
  if ( callback )
    CombineResultEffectComponent_ClickDelegate__Invoke(callback, 1, v7);
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
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _BYTE *monitor; // x8
  NetworkManager_ResultCallbackFunc_o *klass; // x20
  _DWORD *v16; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5EB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)sub_B5D5C4(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
                                                                      v11,
                                                                      v12,
                                                                      v13);
    byte_42E5EB3 = 1;
  }
  monitor = v4[1].monitor;
  if ( !monitor )
    goto LABEL_12;
  monitor[316] = 0;
  klass = (NetworkManager_ResultCallbackFunc_o *)v4[2].klass;
  if ( !klass )
  {
    klass = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      klass,
      v4,
      Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
      0LL);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[2]);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    klass,
                                                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v16 = v4[1].monitor;
  if ( !v16 || !this )
LABEL_12:
    sub_B5D69C(this, decide);
  CardServantFlagRequest__beginRequest((CardServantFlagRequest_o *)this, v16[77], v16[78], 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CombineResultEffectComponent___c__DisplayClass165_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w0
  int32_t limitCount; // w20
  int32_t v14; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_42E5EB4 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    this = (CombineResultEffectComponent___c__DisplayClass165_0_o *)sub_B5D5C4(
                                                                      &ServantCharaGraphEXOpenManager_TypeInfo,
                                                                      v5,
                                                                      v6,
                                                                      v7);
    byte_42E5EB4 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  resUsrSvtData = _4__this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
  limitCount = v4->fields.limitCount;
  v14 = v12;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v14, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass165_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_B5D69C(this, method);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ctor(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        bool isDcd,
        const MethodInfo *method)
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
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_42E5EB5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDcd, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(
      &Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__,
      v11,
      v12,
      v13);
    byte_42E5EB5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v16 )
    sub_B5D69C(Instance, v15);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v11; // x20

  if ( (byte_42E5EB6 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E5EB6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  Instance = (CommonUI_o *)_4__this->fields.limitUpResultCheck;
  if ( !Instance )
    goto LABEL_11;
  LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v11 )
LABEL_11:
    sub_B5D69C(Instance, v9);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}