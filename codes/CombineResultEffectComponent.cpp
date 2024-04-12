void __fastcall CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x0
  __int64 v68; // x0

  if ( (byte_42B2CAA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_B52984(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_16912/*"bit_result02"*/);
    sub_B52984(&StringLiteral_16913/*"bit_result03"*/);
    sub_B52984(&StringLiteral_16914/*"bit_result04"*/);
    sub_B52984(&StringLiteral_16911/*"bit_result01"*/);
    byte_42B2CAA = 1;
  }
  v3 = (struct System_Int32_array *)sub_B5299C(string___TypeInfo, 3LL);
  if ( !v3 )
LABEL_24:
    sub_B52A5C(v3, v4);
  v11 = (struct System_String_array *)v3;
  v3 = (struct System_Int32_array *)StringLiteral_16911/*"bit_result01"*/;
  if ( StringLiteral_16911/*"bit_result01"*/ )
  {
    v3 = (struct System_Int32_array *)sub_B52A44(StringLiteral_16911/*"bit_result01"*/, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_25;
    v12 = (System_Int32_array **)StringLiteral_16911/*"bit_result01"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v11->max_length )
    goto LABEL_23;
  v11->m_Items[0] = (System_String_o *)v12;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v12, v5, v6, v7, v8, v9, v10);
  v3 = (struct System_Int32_array *)StringLiteral_16912/*"bit_result02"*/;
  if ( StringLiteral_16912/*"bit_result02"*/ )
  {
    v3 = (struct System_Int32_array *)sub_B52A44(StringLiteral_16912/*"bit_result02"*/, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_25;
    v19 = (System_Int32_array **)StringLiteral_16912/*"bit_result02"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_23;
  v11->m_Items[1] = (System_String_o *)v19;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[1], v19, v13, v14, v15, v16, v17, v18);
  v3 = (struct System_Int32_array *)StringLiteral_16913/*"bit_result03"*/;
  if ( !StringLiteral_16913/*"bit_result03"*/ )
  {
    v26 = 0LL;
    goto LABEL_18;
  }
  v3 = (struct System_Int32_array *)sub_B52A44(StringLiteral_16913/*"bit_result03"*/, v11->obj.klass->_1.element_class);
  if ( !v3 )
  {
LABEL_25:
    v68 = sub_B52A7C(v3);
    sub_B52A28(v68, 0LL);
  }
  v26 = (System_Int32_array **)StringLiteral_16913/*"bit_result03"*/;
LABEL_18:
  if ( v11->max_length <= 2 )
    goto LABEL_23;
  v11->m_Items[2] = (System_String_o *)v26;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[2], v26, v20, v21, v22, v23, v24, v25);
  this->fields.startAniName = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.startAniName,
    (System_Int32_array **)v11,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Int32_array **)StringLiteral_16914/*"bit_result04"*/;
  this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_16914/*"bit_result04"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.LimitAnimName, v33, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_328D5E0;
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v40;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.currentFigureCollectList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v47;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.afterFigureCollectList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v3 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_24;
  if ( !v3->max_length )
  {
LABEL_23:
    v67 = sub_B52A88(v3);
    sub_B52A28(v67, 0LL);
  }
  v3->m_Items[1] = 100;
  this->fields.ChangeCardEffectLvList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.ChangeCardEffectLvList,
    (System_Int32_array **)v3,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  this->fields.autoFadeout = 1;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  v60 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B52A54(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v60,
    (const MethodInfo_24DB9C0 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v60 )
    goto LABEL_24;
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v60,
    1,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v60,
    10,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v60,
    26,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v60,
    19,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v60,
    24,
    (const MethodInfo_24DCB9C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v60;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.limitUpKinds,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v11; // x1
  WebViewObject_o *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42B2C5C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_42B2C5C = 1;
  }
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = Component_WebViewObject;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fsm,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B52A5C(0LL, v11);
  v12 = UnityEngine_Component__GetComponent_WebViewObject_(
          transform,
          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool __fastcall CombineResultEffectComponent__CheckCombineLimit(
        CombineResultEffectComponent_o *this,
        int32_t oldLv,
        int32_t currentLv,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  ServantLvDetailMaster_o *v9; // x22
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v12; // w8

  if ( (byte_42B2C70 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C70 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v9 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
  HighestData = ServantLvDetailMaster__GetHighestData(v9, Rarity, oldLv, 0LL);
  Instance = ServantLvDetailMaster__GetHighestData(v9, Rarity, currentLv, 0LL);
  if ( !HighestData && Instance )
    goto LABEL_12;
  if ( HighestData )
  {
    if ( Instance )
    {
      if ( HighestData->fields.frameType == *((_DWORD *)Instance + 6) )
        goto LABEL_11;
LABEL_12:
      v12 = *((_DWORD *)Instance + 5);
      LOBYTE(Instance) = 1;
      this->fields.combineLimitLv = v12;
      return (char)Instance;
    }
LABEL_14:
    sub_B52A5C(Instance, v8);
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
    sub_B52A5C(0LL, method);
  return LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0LL);
}


bool __fastcall CombineResultEffectComponent__CheckSaintGraphProfileChange(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantCommentMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1

  if ( (byte_42B2CA7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B2CA7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v7);
  return ServantCommentMaster__IsOpenImageLimitProfile(Master_WarQuestSelectionMaster, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0

  if ( (byte_42B2CA4 & 1) == 0 )
  {
    sub_B52984(&System_GC_TypeInfo);
    byte_42B2CA4 = 1;
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
  System_GC__Collect_44029184(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_18:
    sub_B52A5C(svtResultInfoWindow, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 0, 0LL);
}


void __fastcall CombineResultEffectComponent__CloseLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  LimitCountSealDialogComponent_o *limitCountSealDialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B2CA6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_B52984(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__);
    byte_42B2CA6 = 1;
  }
  v3 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_B52A5C(v7, v8);
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v6, 0LL);
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
  UnityEngine_Component_o *StandFigureNode; // x22
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x24
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x25
  SvtMultiPortraitMaster_o *v15; // x24
  int32_t v16; // w20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v17; // x24
  _BOOL8 v18; // x0
  __int64 v19; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass; // w8
  int32_t v22; // w25
  UnityEngine_GameObject_o *v23; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Component_o *v32; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  struct System_Int32_array *v38; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v40; // x26
  StandFigureCollect_o *v41; // x27
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x0
  __int64 v45; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v47; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v49; // x21
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42B2C88 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StandFigureCollect_TypeInfo);
    byte_42B2C88 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v13 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v13,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  v15 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                imageLimitCount,
                                0LL);
  if ( !v15 )
    goto LABEL_40;
  v16 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v15, svtId, (int32_t)Instance, 0LL);
  if ( !Instance
    || (v17 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_26220588(
                                    gameObject,
                                    svtId,
                                    v16,
                                    1,
                                    faceType,
                                    1,
                                    0LL,
                                    0,
                                    -1,
                                    0LL);
      if ( Instance )
      {
        v47 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = this->fields.afterFigureCollectList;
          v49 = (StandFigureCollect_o *)sub_B52A54(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v49, 0LL, v47, 0LL);
          if ( afterFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_40:
    sub_B52A5C(Instance, v12);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    v17,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v52 = v51;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v18 )
      break;
    current = (SvtMultiPortraitEntity_o *)v52.fields.current;
    if ( !v52.fields.current )
      sub_B52A5C(v18, v19);
    klass = (int)v52.fields.current[2].klass;
    if ( klass >= 1 )
      v22 = klass + 1;
    else
      v22 = 1;
    if ( !StandFigureNode )
      sub_B52A5C(v18, v19);
    v23 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v23,
                         current->fields.portraitImageId,
                         1,
                         faceType,
                         v22,
                         0LL,
                         0,
                         -1,
                         0LL);
    v32 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B52A5C(0LL, v25);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B52920(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    transform = UnityEngine_Component__get_transform(v32, 0LL);
    if ( !transform )
      sub_B52A5C(0LL, v34);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v36 = UnityEngine_Component__get_gameObject(v32, 0LL);
      v38 = current->fields.commonPosition;
      if ( !v38 )
        sub_B52A5C(v36, v37);
      max_length = v38->max_length;
      if ( max_length == 1 )
      {
        v44 = sub_B52A88(v36);
        sub_B52A28(v44, 0LL);
      }
      if ( !max_length )
      {
        v45 = sub_B52A88(v36);
        sub_B52A28(v45, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_32086032(v36, (float)v38->m_Items[1], (float)v38->m_Items[2], 0LL);
    }
    v40 = this->fields.afterFigureCollectList;
    v41 = (StandFigureCollect_o *)sub_B52A54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v41, current, (UIStandFigureR_o *)v32, 0LL);
    if ( !v40 )
      sub_B52A5C(v42, v43);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v40,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  UnityEngine_Component_o *StandFigureNode; // x23
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v18; // x27
  __int64 v19; // x22
  __int64 v20; // x24
  int32_t v21; // w24
  const MethodInfo *v22; // x3
  int32_t v23; // w25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v24; // x22
  unsigned int v25; // w26
  _BOOL8 v26; // x0
  __int64 v27; // x1
  SvtMultiPortraitEntity_o *current; // x27
  int klass; // w8
  int32_t v30; // w28
  UnityEngine_GameObject_o *v31; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *v41; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v43; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v45; // x0
  __int64 v46; // x1
  struct System_Int32_array *v47; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v49; // x22
  StandFigureCollect_o *v50; // x25
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x0
  __int64 v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v56; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v58; // x21
  char v59; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_42B2C7F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StandFigureCollect_TypeInfo);
    byte_42B2C7F = 1;
  }
  memset(&v62, 0, sizeof(v62));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v15 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v15,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_54;
  v18 = (SvtMultiPortraitMaster_o *)Instance;
  v20 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v20;
  *(_QWORD *)&v63.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v63, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  v21 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                MasterData_WarQuestSelectionMaster,
                                (int32_t)Instance,
                                imageLimitCount,
                                0LL);
  v23 = (int)Instance;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v21,
                                  (int32_t)Instance,
                                  v22);
    v59 = (char)Instance;
    if ( !v18 )
      goto LABEL_54;
  }
  else
  {
    v59 = 0;
    if ( !v18 )
      goto LABEL_54;
  }
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v18, v21, v23, 0LL);
  if ( !Instance
    || (v24 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_26220588(
                                     gameObject,
                                     v21,
                                     v23,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v59 & 1,
                                     friendshipNum,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_26221516(
                                     gameObject,
                                     v21,
                                     v23,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     0,
                                     friendshipNum,
                                     0LL));
      v56 = (UIStandFigureR_o *)Instance;
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
          v58 = (StandFigureCollect_o *)sub_B52A54(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v58, 0LL, v56, 0LL);
          if ( currentFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_54:
    sub_B52A5C(Instance, v14);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    v24,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v25 = ignoreFormChangeCheck | ((unsigned int)formId >> 31);
  v62 = v61;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v62,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v26 )
      break;
    current = (SvtMultiPortraitEntity_o *)v62.fields.current;
    if ( !v62.fields.current )
      sub_B52A5C(v26, v27);
    klass = (int)v62.fields.current[2].klass;
    if ( klass >= 1 )
      v30 = klass + 1;
    else
      v30 = 1;
    if ( v25 )
    {
      if ( !StandFigureNode )
        sub_B52A5C(v26, v27);
      v31 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v31,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v30,
                           0LL,
                           v59 & 1,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_B52A5C(v26, v27);
      v40 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v40,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v30,
                           0LL,
                           0LL);
    }
    v41 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B52A5C(0LL, v33);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B52920(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    transform = UnityEngine_Component__get_transform(v41, 0LL);
    if ( !transform )
      sub_B52A5C(0LL, v43);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v45 = UnityEngine_Component__get_gameObject(v41, 0LL);
      v47 = current->fields.commonPosition;
      if ( !v47 )
        sub_B52A5C(v45, v46);
      max_length = v47->max_length;
      if ( max_length == 1 )
      {
        v53 = sub_B52A88(v45);
        sub_B52A28(v53, 0LL);
      }
      if ( !max_length )
      {
        v54 = sub_B52A88(v45);
        sub_B52A28(v54, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_32086032(v45, (float)v47->m_Items[1], (float)v47->m_Items[2], 0LL);
    }
    v49 = this->fields.currentFigureCollectList;
    v50 = (StandFigureCollect_o *)sub_B52A54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v50, current, (UIStandFigureR_o *)v41, 0LL);
    if ( !v49 )
      sub_B52A5C(v51, v52);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v49,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v62,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall CombineResultEffectComponent__DestroySvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Object_o *gameObject; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x24
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x1
  UIStandFigureR_o *v18; // x0
  __int64 v19; // x1
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Object_o *v21; // x20
  int v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-78h] BYREF
  int v24[2]; // [xsp+20h] [xbp-60h]
  int v25; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42B2CA3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2CA3 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v25 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v26 = v23;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v26,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B52A5C(v4, v5);
    monitor = (UnityEngine_Object_o *)v26.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_B52A5C(0LL, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0LL);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_B52A5C(0LL, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
    }
  }
  v24[0] = 88;
  v25 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v25 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentFigureCollectList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v26 = v23;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v13 )
      break;
    v15 = v26.fields.current;
    if ( !v26.fields.current )
      sub_B52A5C(v13, v14);
    v16 = (UnityEngine_Object_o *)v26.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      v18 = (UIStandFigureR_o *)v15[1].monitor;
      if ( !v18 )
        sub_B52A5C(0LL, v17);
      UIStandFigureR__ReleaseCharacter(v18, 0LL);
      v20 = (UnityEngine_Component_o *)v15[1].monitor;
      if ( !v20 )
        sub_B52A5C(0LL, v19);
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(v21, 0LL);
    }
  }
  v24[0] = 187;
  v22 = ++v25;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v22 && v24[v22 - 1] == 187 )
    v25 = v22 - 1;
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
LABEL_43:
    sub_B52A5C(currentFigureCollectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentFigureCollectList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_B52A5C(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B2C92 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__EndLoad_b__144_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2C92 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__144_0__, 0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v6, 0LL);
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
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v11; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v18; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v21; // x20
  __int64 v22; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x8
  int32_t v24; // w20
  CombineResultEffectComponent_o *v25; // x0
  int32_t v26; // w21
  const MethodInfo *v27; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v28; // x22
  System_Action_o *v29; // x23
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v8 = this;
  if ( (byte_42B2C9B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__);
    sub_B52984(&Method_CombineResultEffectComponent__EndPlay_b__154_0__);
    sub_B52984(&Method_CombineResultEffectComponent__EndPlay_b__154_1__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_B52984(&StringLiteral_21669/*"playVoice"*/);
    byte_42B2C9B = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
      {
        v30 = sub_B52A88(this);
        sub_B52A28(v30, 0LL);
      }
      v11 = playVoiceList->m_Items[playCnt];
      if ( v11 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_21669/*"playVoice"*/,
          v11->fields.delay,
          0LL);
        return;
      }
    }
LABEL_35:
    sub_B52A5C(this, method);
  }
  if ( v8->fields.player )
    CombineResultEffectComponent__stopVoice(v8, method);
  v8->fields.playCnt = 0;
  v8->fields.playVoiceList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v8->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  this = (CombineResultEffectComponent_o *)v8->fields.limitUpKinds;
  if ( !this )
    goto LABEL_35;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                             (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this,
                                             v8->fields.kind,
                                             (const MethodInfo_24DC044 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
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
    v22 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v31.fields.currentCryptoKey = v22;
    *(_QWORD *)&v31.fields.fakeValue = v21;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                               v31,
                                               0LL);
    v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v8->fields.baseUsrSvtData;
    if ( !v23 )
      goto LABEL_35;
    v24 = (int)this;
    v25 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                              v23[6],
                                              0LL);
    v26 = (_DWORD)v25 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v25, v24, (_DWORD)v25 + 1, v27) )
    {
      v28 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_B52A54(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v28,
        (Il2CppObject *)v8,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v29 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__154_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v24, v26, v28, v29, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v8->fields.limitUpResultCheck;
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__154_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_35;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v13, 1, 0LL);
    }
  }
  else if ( v8->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v8, method);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v8, v14) )
    {
      this = (CombineResultEffectComponent_o *)v8->fields.touchInfo;
      if ( !this )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v8->fields.costumeId;
      v18 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v18->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v8, v15);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v8, v8->fields.skillShowIndex, v16);
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
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42B2CA0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2CA0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v5 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
      v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__,
        0LL);
      if ( !Instance )
        sub_B52A5C(v8, v9);
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v7, 0LL);
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

  if ( (byte_42B2C87 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B2C87 = 1;
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
    sub_B52A5C(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v11 = sub_B52A88(v6);
      sub_B52A28(v11, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantCostumeMaster_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  struct UserServantEntity_o *v14; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x19
  __int64 v16; // x20
  __int64 v17; // x21
  ServantEntity_o *v18; // [xsp+0h] [xbp-30h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42B2CA1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2CA1 = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_23;
    v10 = (ServantCostumeMaster_o *)Instance;
    v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v12;
    *(_QWORD *)&v20.fields.fakeValue = v11;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
    if ( !v10 )
      goto LABEL_23;
    if ( ServantCostumeMaster__TryGetEntity(v10, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_23:
      sub_B52A5C(Instance, v8);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = this->fields.resUsrSvtData;
  if ( !v14 )
    goto LABEL_23;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v17 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL);
  if ( !v15 )
    goto LABEL_23;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v15,
          (WarEntity_o **)&v18,
          (int32_t)Instance,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v18;
  if ( !v18 )
    goto LABEL_23;
  return ServantEntity__getName(v18, -1, -1, 0LL);
}


UIPanel_o *__fastcall CombineResultEffectComponent__GetStandFigureNode(
        CombineResultEffectComponent_o *this,
        System_String_o *fmsString,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  UnityEngine_GameObject_o *effect; // x8
  System_String_o *v7; // x19
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_42B2C82 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_42B2C82 = 1;
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
    || (v7 = (System_String_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(effect, 0LL),
        (fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v7, 1, 0LL)) == 0LL) )
  {
    sub_B52A5C(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


void __fastcall CombineResultEffectComponent__InitChangeInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 id; // x1
  __int64 v5; // x23
  int64_t v6; // x20
  unsigned int v7; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  __int64 v10; // x21
  __int128 v11; // q0
  int64_t v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v20; // x8
  SkillInfo_o *v21; // x9
  SkillInfo_o *v22; // x8
  bool v23; // w8
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v28; // [xsp+68h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *v30; // [xsp+78h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_42B2C95 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C95 = 1;
  }
  skillInfoList = 0LL;
  tdInfo = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
          if ( Instance )
          {
            v5 = *(_QWORD *)(Instance + 24);
            v6 = Instance;
            if ( (int)v5 >= 1 )
            {
              v7 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_54;
                v9 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v10 = *(_QWORD *)(v6 + 8LL * (int)v7 + 32);
                *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v27.fields.fakeValue = v9;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v26 = v27;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v26, 0LL);
                if ( !v10 )
                  goto LABEL_54;
                v11 = *(_OWORD *)(v10 + 32);
                v12 = Instance;
                *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
                *(_OWORD *)&v25.fields.fakeValue = v11;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v25, 0LL);
                if ( v12 == Instance )
                  break;
                if ( (int)++v7 >= (int)v5 )
                  goto LABEL_21;
                if ( v7 >= *(_DWORD *)(v6 + 24) )
                {
LABEL_55:
                  v24 = sub_B52A88(Instance);
                  sub_B52A28(v24, 0LL);
                }
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v10;
              sub_B52920(
                (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
                (System_Int32_array **)v10,
                v13,
                v14,
                v15,
                v16,
                v17,
                v18);
            }
LABEL_21:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v30, -1, -1, 1, 0, -1, 0LL);
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
                  v20 = skillInfoList->m_Items[i];
                  if ( !v20 || !v30 )
                    goto LABEL_54;
                  if ( i >= v30->max_length )
                    goto LABEL_55;
                  v21 = v30->m_Items[i];
                  if ( !v21 )
                    goto LABEL_54;
                  id = (unsigned int)v20->fields.id;
                  if ( *(_QWORD *)&v20->fields.id != *(_QWORD *)&v21->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_54;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v20->fields.lv,
                      0LL);
                    if ( !v30 )
                      goto LABEL_54;
                    if ( i >= v30->max_length )
                      goto LABEL_55;
                    v22 = v30->m_Items[i];
                    if ( !v22 )
                      goto LABEL_54;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_54;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v22->fields.id,
                      v22->fields.lv,
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
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v28, -1, -1, 0, 0LL);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
                      if ( (Instance & 1) == 0 )
                      {
                        v23 = 0;
LABEL_52:
                        this->fields.treasureDeviceEnabled = v23;
                        return;
                      }
                      if ( tdInfo && v28 )
                      {
                        v23 = tdInfo->fields.id != v28->fields.id || tdInfo->fields.lv != v28->fields.lv;
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
    sub_B52A5C(Instance, id);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__InitCombineEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Transform_o *transform; // x20
  int v12; // s0
  const MethodInfo *v15; // x1
  int32_t kind; // w8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x1

  if ( (byte_42B2C72 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_11572/*"ResultEffect"*/);
    byte_42B2C72 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_20;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_20;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11572/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_20;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v12, 0LL);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v20, 0LL);
      return;
    }
LABEL_20:
    sub_B52A5C(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v15);
  if ( this->fields.kind == 6 )
    CombineResultEffectComponent__loadBoxGachaEffect(this, v21);
  else
    CombineResultEffectComponent__SetResultServantVoiceData(this, v21);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
  v4 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(npInfoAddManager, 0LL);
  return v4 >= 1 && this->fields.tdShowIndex < v4;
}


bool __fastcall CombineResultEffectComponent__IsShowSkillInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x0
  int v4; // w20
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  bool v9; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42B2C9C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C9C = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v4 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)costumeSkillInfoManager;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                        v12,
                                                                                        0LL);
  if ( !v6 )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v6,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_B52A5C(costumeSkillInfoManager, method);
  v9 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)costumeSkillInfoManager, 30, 0LL);
  return v4 >= 1 && !v9 && this->fields.skillShowIndex < v4;
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
    sub_B52A5C(0LL, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42B2CA9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5519/*"END_ANIMATION"*/);
    byte_42B2CA9 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_B52A5C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5519/*"END_ANIMATION"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__OpenLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v6; // x8
  int32_t v7; // w20
  int32_t v8; // w21
  System_String_o *LimitCountSealedDialogMessage; // x0
  LimitCountSealDialogComponent_o *v10; // x21
  System_String_o *v11; // x20
  System_String_o *v12; // x22
  LimitCountSealDialogComponent_CallbackFunc_o *v13; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v2 = (Il2CppObject *)this;
  if ( (byte_42B2CA5 & 1) == 0 )
  {
    sub_B52984(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_B52984(&StringLiteral_8435/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_42B2CA5 = 1;
  }
  klass = v2[12].klass;
  if ( !klass )
    goto LABEL_17;
  declaringType = klass->_1.declaringType;
  parent = klass->_1.parent;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = declaringType;
  *(_QWORD *)&v14.fields.fakeValue = parent;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[12].klass;
  if ( !v6 )
    goto LABEL_17;
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6[6], 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_17;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v7,
                                    v8 + 1,
                                    0LL);
  v10 = (LimitCountSealDialogComponent_o *)v2[9].klass;
  v11 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8435/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v13 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_B52A54(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v13,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !v10 )
LABEL_17:
    sub_B52A5C(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v10, v12, v11, v13, 0LL);
}


bool __fastcall CombineResultEffectComponent__OpenNotification(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 AscensionAfterDialogId; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool v12; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  struct UserServantEntity_o *v18; // x8
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w0
  struct UserServantEntity_o *v22; // x8
  int32_t v23; // w21
  __int64 v24; // x22
  __int64 v25; // x23
  int32_t v26; // w0
  int32_t v27; // w22
  int32_t v28; // w23
  const MethodInfo *v29; // x3
  Il2CppObject *NameFromMessageId; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v32; // x0
  System_String_o *v33; // x22
  System_String_o *v34; // x0
  System_String_o *v35; // x21
  System_Action_o *v36; // x23
  int v37; // [xsp+3Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_42B2CA2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__);
    sub_B52984(&CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo);
    sub_B52984(&StringLiteral_11751/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2CA2 = 1;
  }
  v37 = 0;
  v3 = sub_B52A54(CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass165_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass165_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v12 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v17 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v16 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v38.fields.currentCryptoKey = v17;
      *(_QWORD *)&v38.fields.fakeValue = v16;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
      *(_DWORD *)(v3 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v3 + 24) = this->fields.costumeId;
      v18 = this->fields.resUsrSvtData;
      if ( v18 )
      {
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v39.fields.currentCryptoKey = v20;
        *(_QWORD *)&v39.fields.fakeValue = v19;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v21, *(_DWORD *)(v3 + 24), 0LL);
        v37 = AscensionAfterDialogId;
        if ( (_DWORD)AscensionAfterDialogId == -1 )
          return 0;
        v22 = this->fields.resUsrSvtData;
        if ( v22 )
        {
          v23 = AscensionAfterDialogId;
          v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
          v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v40.fields.currentCryptoKey = v25;
          *(_QWORD *)&v40.fields.fakeValue = v24;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v40, 0LL);
          v27 = *(_DWORD *)(v3 + 24);
          v28 = v26;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          }
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v28, v27, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v23,
                                                *(_DWORD *)(v3 + 24),
                                                v29);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v32 = System_Int32__ToString((int32_t)&v37, 0LL);
          v33 = System_String__Concat_44568316((System_String_o *)StringLiteral_11751/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v32, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v34 = LocalizationManager__Get(v33, 0LL);
          v35 = System_String__Format(v34, NameFromMessageId, 0LL);
          v36 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v3,
            Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v12 = 1;
            CommonUI__OpenNotificationDialog(
              Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v35,
              v36,
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
            return v12;
          }
        }
      }
    }
LABEL_33:
    sub_B52A5C(AscensionAfterDialogId, v5);
  }
  return v12;
}


void __fastcall CombineResultEffectComponent__ProfileChangeDecideAction(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v11; // x21
  CommonUI_o *UserId; // x0
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
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x24
  CommonUI_o *v27; // x22
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *v29; // x20
  CommonUI_o *v30; // x22
  ServantStatusDialog_EndDelegate_o *v31; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B2CA8 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__);
    sub_B52984(&CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo);
    byte_42B2CA8 = 1;
  }
  entity = 0LL;
  v11 = sub_B52A54(CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass171_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass171_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_23;
  *(_QWORD *)(v11 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)finishCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v27 )
      {
        CommonUI__maskFadein(v27, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          UserId = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( UserId )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)UserId, 0, 0LL);
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v29 = entity;
            v30 = (CommonUI_o *)Instance;
            v31 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v31,
              (Il2CppObject *)v11,
              Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v30 )
            {
              CommonUI__OpenServantStatusDialog_18170524(v30, 33, v29, limitCount, v31, 0LL);
              return;
            }
          }
        }
      }
LABEL_23:
      sub_B52A5C(UserId, v13);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_18158412(UserId, *(System_Action_o **)(v11 + 24), 0LL);
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

  if ( (byte_42B2C9E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_42B2C9E = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v10);
    SoundManager__ReleaseAudioAssetStorage(Instance, this->fields.asstName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetAfterLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  UnityEngine_Component_o *StandFigureNode; // x21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x22
  SvtMultiPortraitMaster_o *MasterData_WarQuestSelectionMaster; // x25
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v10; // x24
  __int64 v11; // x22
  __int64 v12; // x23
  struct UserServantEntity_o *v13; // x8
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w23
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w23
  __int64 v20; // x24
  __int64 v21; // x26
  CombineResultEffectComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  char v24; // w24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v25; // x25
  _BOOL8 v26; // x0
  __int64 v27; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Component_o *v39; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v41; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  float v47; // s0
  float v48; // s1
  float v49; // s2
  struct System_Int32_array *v50; // x8
  il2cpp_array_size_t max_length; // w9
  int v52; // s11
  int v53; // s12
  float v54; // s9
  float v55; // s10
  float v56; // s8
  UnityEngine_Transform_o *v57; // x0
  __int64 v58; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v60; // x28
  __int64 v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  __int64 v64; // x0
  __int64 v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  UIStandFigureR_o *v67; // x21
  struct System_Collections_Generic_List_StandFigureCollect__o *v68; // x22
  StandFigureCollect_o *v69; // x23
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  int32_t saveDataMapList; // w21
  float FadeTime; // s8
  int32_t datalist_high; // w22
  __int64 v74; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v75; // x24
  StandFigureCollect_o *v76; // x8
  __int64 v77; // x0
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+40h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2C85 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StandFigureCollect_TypeInfo);
    sub_B52984(&StringLiteral_8575/*"LimitUpResSvtNodeName"*/);
    byte_42B2C85 = 1;
  }
  entity = 0LL;
  memset(&v80, 0, sizeof(v80));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8575/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  v7 = Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_WarQuestSelectionMaster = (SvtMultiPortraitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     v7,
                                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v7,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_74;
  v10 = (ServantLimitAddMaster_o *)Instance;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v82.fields.currentCryptoKey = v12;
  *(_QWORD *)&v82.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v82, 0LL);
  v13 = this->fields.resUsrSvtData;
  if ( !v13 )
    goto LABEL_74;
  v14 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                v13->fields.limitCount,
                                0LL);
  if ( !v10 )
    goto LABEL_74;
  v15 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v10, &entity, v14, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_74;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v15 = LimitCountUpResultServantLimitCount;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_74;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v14,
                                 v15,
                                 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v14, ServantLimitCountSealAfter, 0LL);
  v18 = this->fields.resUsrSvtData;
  if ( !v18 )
    goto LABEL_74;
  v19 = (int)Instance;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v83.fields.currentCryptoKey = v21;
  *(_QWORD *)&v83.fields.fakeValue = v20;
  v22 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v83, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v22, (int32_t)v22, v19, v23);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_74:
    sub_B52A5C(Instance, v6);
  v24 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                MasterData_WarQuestSelectionMaster,
                                v14,
                                v19,
                                0LL);
  if ( Instance
    && (v25 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v79,
      v25,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v80 = v79;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v80,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v26 )
        break;
      if ( !StandFigureNode )
        sub_B52A5C(v26, v27);
      current = (SvtMultiPortraitEntity_o *)v80.fields.current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_B52A5C(gameObject, v30);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           gameObject,
                           current->fields.portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v24 & 1,
                           -1,
                           0LL);
      v39 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_B52A5C(0LL, v32);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_B52920(
        (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (System_Int32_array **)current,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      transform = UnityEngine_Component__get_transform(v39, 0LL);
      if ( !transform )
        sub_B52A5C(0LL, v41);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v43 = UnityEngine_Component__get_transform(v39, 0LL);
        if ( !v43 )
          sub_B52A5C(0LL, v44);
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localPosition(v43, 0LL);
        v50 = current->fields.commonPosition;
        if ( !v50 )
          sub_B52A5C(v45, v46);
        max_length = v50->max_length;
        if ( !max_length )
        {
          v65 = sub_B52A88(v45);
          sub_B52A28(v65, 0LL);
        }
        if ( max_length == 1 )
        {
          v64 = sub_B52A88(v45);
          sub_B52A28(v64, 0LL);
        }
        v53 = v50->m_Items[1];
        v52 = v50->m_Items[2];
        v54 = v47;
        v55 = v48;
        v56 = v49;
        v57 = UnityEngine_Component__get_transform(v39, 0LL);
        if ( !v57 )
          sub_B52A5C(0LL, v58);
        v84.fields.x = v54 + (float)v53;
        v84.fields.y = v55 + (float)v52;
        v84.fields.z = v56;
        UnityEngine_Transform__set_localPosition(v57, v84, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v39,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = this->fields.afterFigureCollectList;
      v60 = (StandFigureCollect_o *)sub_B52A54(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v60, current, (UIStandFigureR_o *)v39, 0LL);
      if ( !afterFigureCollectList )
        sub_B52A5C(v61, v62);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v80,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_74;
    v66 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_26220588(
                                  v66,
                                  v14,
                                  v19,
                                  1,
                                  0,
                                  1,
                                  0LL,
                                  v24 & 1,
                                  -1,
                                  0LL);
    if ( !Instance )
      goto LABEL_74;
    v67 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_74;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v68 = this->fields.afterFigureCollectList;
    v69 = (StandFigureCollect_o *)sub_B52A54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v69, 0LL, v67, 0LL);
    if ( !v68 )
      goto LABEL_74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v68,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v63);
  saveDataMapList = 0;
  FadeTime = 0.0;
  datalist_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      v77 = sub_B52A88(LimitUpSvtVoiceList);
      sub_B52A28(v77, 0LL);
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
                                (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Instance >= 1 )
  {
    v74 = 0LL;
    while ( 1 )
    {
      v75 = this->fields.afterFigureCollectList;
      if ( !v75 )
        break;
      if ( v75->fields._size <= (unsigned int)v74 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v76 = v75->fields._items->m_Items[v74];
      if ( !v76 )
        break;
      Instance = (DataManager_o *)v76->fields._standFigure_k__BackingField;
      if ( !Instance )
        break;
      UIStandFigureR__SetFace_40871844((UIStandFigureR_o *)Instance, datalist_high, saveDataMapList, 0LL, FadeTime, 0LL);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                                    (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
      if ( (int)++v74 >= (int)Instance )
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  CombineRootComponent_c *v25; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_42B2C6E & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__);
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_42B2C6E = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    *(System_String_array ***)&currentSkillId,
    *(System_String_array ***)&currentSkillLv,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v25 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v25 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v25->static_fields->COMBINE_ASSET_PATH;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v27, 1, 0LL);
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

  if ( (byte_42B2C7E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2765/*"BaseSvtNodeName"*/);
    byte_42B2C7E = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_B52A5C(0LL, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_2765/*"BaseSvtNodeName"*/,
    0,
    v7);
}


void __fastcall CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v6; // x8
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v10; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v2 = this;
  if ( (byte_42B2C83 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_B52984(&StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/);
    byte_42B2C83 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_12:
    sub_B52A5C(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/,
    1,
    v10);
}


void __fastcall CombineResultEffectComponent__SetCardParam(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  void *resUsrSvtData; // x0
  System_String_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  UIExtrusionLabel_o *v8; // x20
  System_String_o *v9; // x20
  UnityEngine_Transform_o *v10; // x0
  UIExtrusionLabel_o *v11; // x20
  struct UserServantEntity_o *v12; // x8
  __int64 v13; // x20
  __int64 v14; // x21
  struct UserServantEntity_o *v15; // x8
  int32_t v16; // w20
  int32_t v17; // w21
  struct UserServantEntity_o *v18; // x8
  struct UserServantEntity_o *v19; // x8
  int32_t v20; // w20
  int32_t v21; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v23; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  float v26; // s8
  _BOOL4 v27; // w20
  __int64 v28; // x23
  int32_t v29; // w20
  int32_t v30; // w21
  int v31; // w22
  _DWORD *v32; // x25
  __int64 *v33; // x24
  __int64 *v34; // x8
  __int64 *v35; // x8
  __int64 *v36; // x8
  System_String_o *v37; // x20
  UnityEngine_Transform_o *v38; // x0
  UIExtrusionLabel_o *v39; // x20
  System_String_o *v40; // x20
  UnityEngine_Transform_o *v41; // x0
  UIExtrusionLabel_o *v42; // x20
  struct UserServantEntity_o *v43; // x8
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  __int64 v48; // x26
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x28
  StandFigureCollect_o *v50; // x8
  int32_t v51; // w1
  System_String_o *v52; // x20
  UnityEngine_Transform_o *v53; // x0
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v58; // x9
  struct System_String_array *startAniName; // x8
  int v60; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v62; // w2
  CombineResultEffectComponent_o *v63; // x0
  System_String_o *v64; // x1
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  bool v68; // w2
  CombineResultEffectComponent_o *v69; // x0
  System_String_o *v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 *v77; // x8
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v78; // x20
  EventDelegate_Callback_o *v79; // x22
  EventDelegate_o *v80; // x21
  const MethodInfo *v81; // x2
  System_String_o *v82; // x20
  UnityEngine_Transform_o *v83; // x0
  UnityEngine_Component_o *v84; // x20
  float Value; // s0
  float v86; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v88; // x20
  System_Int32_array **v89; // x1
  BattleServantConfConponent_o *v90; // x0
  const MethodInfo *v91; // x2
  struct System_String_array *v92; // x8
  int v93; // w9
  System_Int32_array **v94; // x20
  const MethodInfo *v95; // x2
  __int64 v96; // x22
  float FadeTime; // s0
  System_Int32_array **v98; // x20
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  const MethodInfo *v105; // x1
  __int64 v106; // x0
  __int64 v107; // [xsp+8h] [xbp-68h] BYREF
  __int64 v108; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2C76 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__SetCardParam_b__115_0__);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_4360/*"CostumeName"*/);
    sub_B52984(&StringLiteral_2765/*"BaseSvtNodeName"*/);
    sub_B52984(&StringLiteral_16916/*"bit_result_120"*/);
    sub_B52984(&StringLiteral_16923/*"bit_result_extraskill02"*/);
    sub_B52984(&StringLiteral_16932/*"bit_result_nobledeliverance"*/);
    sub_B52984(&StringLiteral_12425/*"START_ANIMATION"*/);
    sub_B52984(&StringLiteral_16920/*"bit_result_command_card_exceed"*/);
    sub_B52984(&StringLiteral_16929/*"bit_result_limitbreak"*/);
    sub_B52984(&StringLiteral_16924/*"bit_result_friendship_exceed"*/);
    sub_B52984(&StringLiteral_11528/*"ResMaxLvExceedNodeName"*/);
    sub_B52984(&StringLiteral_16937/*"bit_result_skillrank"*/);
    sub_B52984(&StringLiteral_16918/*"bit_result_advent02"*/);
    sub_B52984(&StringLiteral_16927/*"bit_result_grail_02"*/);
    sub_B52984(&StringLiteral_16938/*"bit_result_skillup"*/);
    sub_B52984(&StringLiteral_4489/*"CrtMaxLvExceedNodeName"*/);
    sub_B52984(&StringLiteral_16933/*"bit_result_powerup"*/);
    sub_B52984(&StringLiteral_13133/*"StartAnimationName"*/);
    sub_B52984(&StringLiteral_16926/*"bit_result_grail_01"*/);
    sub_B52984(&StringLiteral_16917/*"bit_result_advent01"*/);
    sub_B52984(&StringLiteral_16922/*"bit_result_extraskill01"*/);
    sub_B52984(&StringLiteral_16936/*"bit_result_skilldeliverance"*/);
    sub_B52984(&StringLiteral_16939/*"bit_result_skinchange01"*/);
    sub_B52984(&StringLiteral_4490/*"CrtMaxLvNodeName"*/);
    sub_B52984(&StringLiteral_11529/*"ResMaxLvNodeName"*/);
    sub_B52984(&StringLiteral_13273/*"SvtEqCardScale"*/);
    byte_42B2C76 = 1;
  }
  v108 = 0LL;
  v107 = 0LL;
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
      v58 = this->fields.resUsrSvtData;
      if ( !v58 )
        goto LABEL_179;
      if ( baseUsrSvtData->fields.exp != v58->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_172;
      }
LABEL_98:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_179;
      v60 = this->fields.successInfo - 1;
      if ( v60 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v60];
LABEL_172:
        resUsrSvtData = this->fields.fsm;
        if ( resUsrSvtData )
        {
          v98 = (System_Int32_array **)*p_LimitAnimName;
          resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
          if ( resUsrSvtData )
          {
            resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                              (System_String_o *)StringLiteral_13133/*"StartAnimationName"*/,
                              0LL);
            if ( resUsrSvtData )
            {
              *((_QWORD *)resUsrSvtData + 7) = v98;
              sub_B52920(
                (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56),
                v98,
                v99,
                v100,
                v101,
                v102,
                v103,
                v104);
              CombineResultEffectComponent__SetLevelUpSvtFigure(this, v105);
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
        sub_B52A5C(resUsrSvtData, method);
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
                        (System_String_o *)StringLiteral_4490/*"CrtMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v6 = (System_String_o *)resUsrSvtData;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(transform, v6, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v8 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v108) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v108 + 4, 0LL);
      if ( !v8 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v8, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11529/*"ResMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v9 = (System_String_o *)resUsrSvtData;
      v10 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v10, v9, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v11 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v108) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v108, 0LL);
      if ( !v11 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v11, (System_String_o *)resUsrSvtData, 0LL);
      v12 = this->fields.baseUsrSvtData;
      if ( !v12 )
        goto LABEL_179;
      v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v109.fields.currentCryptoKey = v14;
      *(_QWORD *)&v109.fields.fakeValue = v13;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v109, 0LL);
      v15 = this->fields.baseUsrSvtData;
      if ( !v15 )
        goto LABEL_179;
      v16 = (int)resUsrSvtData;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15->fields.limitCount, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      resUsrSvtData = (void *)ImageLimitCount__GetImageLimitCount(v16, v17, 0LL);
      v18 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)resUsrSvtData;
      if ( !v18 )
        goto LABEL_179;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                v18->fields.svtId,
                                0LL);
      v19 = this->fields.resUsrSvtData;
      if ( !v19 )
        goto LABEL_179;
      v20 = (int)resUsrSvtData;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v19->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v20, v21, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      v26 = 0.0;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v27 = resSvtNameData != 0LL;
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
        CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v23);
        CombineResultEffectComponent__setBaseSvtGraphCard(this, v27, v46);
        CombineResultEffectComponent__setResultSvtGraphCard(this, v27, v47);
        v33 = &StringLiteral_16918/*"bit_result_advent02"*/;
LABEL_154:
        resUsrSvtData = this->fields.fsm;
        if ( !resUsrSvtData )
          goto LABEL_179;
        v94 = (System_Int32_array **)*v33;
        goto LABEL_165;
      }
      if ( this->fields.isLimitUpSuppression || !CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v23) )
      {
LABEL_29:
        v28 = 0LL;
        v29 = 0;
        v30 = 0;
        goto LABEL_30;
      }
      resUsrSvtData = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v95);
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( *((_DWORD *)resUsrSvtData + 6) )
      {
        v96 = *((_QWORD *)resUsrSvtData + 4);
        if ( !v96 )
          goto LABEL_179;
        v30 = *(_DWORD *)(v96 + 28);
        v29 = *(_DWORD *)(v96 + 56);
        FadeTime = ServantVoiceData__GetFadeTime(*((ServantVoiceData_o **)resUsrSvtData + 4), 0LL);
        v28 = *(_QWORD *)(v96 + 32);
        v26 = FadeTime;
LABEL_30:
        resUsrSvtData = (void *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                                  (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        v31 = (int)resUsrSvtData;
        if ( v28 )
        {
          v32 = (_DWORD *)(v28 + 24);
          v33 = &StringLiteral_16917/*"bit_result_advent01"*/;
          if ( (_DWORD)resUsrSvtData != *(_DWORD *)(v28 + 24) || (int)resUsrSvtData <= 0 )
            goto LABEL_154;
        }
        else
        {
          if ( (int)resUsrSvtData < 1 )
          {
            v33 = &StringLiteral_16917/*"bit_result_advent01"*/;
            goto LABEL_154;
          }
          v32 = (_DWORD *)&off_18;
        }
        v33 = &StringLiteral_16917/*"bit_result_advent01"*/;
        v48 = 0LL;
        while ( 1 )
        {
          currentFigureCollectList = this->fields.currentFigureCollectList;
          if ( !currentFigureCollectList )
            goto LABEL_179;
          if ( currentFigureCollectList->fields._size <= (unsigned int)v48 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v50 = currentFigureCollectList->fields._items->m_Items[v48];
          if ( !v50 )
            goto LABEL_179;
          resUsrSvtData = v50->fields._standFigure_k__BackingField;
          if ( v28 )
          {
            if ( (unsigned int)v48 >= *v32 )
              goto LABEL_180;
            if ( !resUsrSvtData )
              goto LABEL_179;
            v51 = *(_DWORD *)(v28 + 32 + 4 * v48);
          }
          else
          {
            if ( !resUsrSvtData )
              goto LABEL_179;
            v51 = v30;
          }
          UIStandFigureR__SetFace_40871844((UIStandFigureR_o *)resUsrSvtData, v51, v29, 0LL, v26, 0LL);
          if ( (int)++v48 >= v31 )
            goto LABEL_154;
        }
      }
      goto LABEL_180;
    case 2:
      v62 = 1;
      v63 = this;
      v64 = (System_String_o *)StringLiteral_16938/*"bit_result_skillup"*/;
      goto LABEL_108;
    case 3:
      v36 = &StringLiteral_16936/*"bit_result_skilldeliverance"*/;
      goto LABEL_107;
    case 4:
      v68 = 1;
      v69 = this;
      v70 = (System_String_o *)StringLiteral_16938/*"bit_result_skillup"*/;
      goto LABEL_125;
    case 5:
      v34 = &StringLiteral_16932/*"bit_result_nobledeliverance"*/;
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
                        (System_String_o *)StringLiteral_2765/*"BaseSvtNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v82 = (System_String_o *)resUsrSvtData;
      v83 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v83, v82, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_179;
      v84 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13273/*"SvtEqCardScale"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)resUsrSvtData, 0LL);
      if ( !v84 )
        goto LABEL_179;
      v86 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v84, 0LL);
      resUsrSvtData = CharaGraphManager__CreateTexturePrefab_24904344(
                        gameObject,
                        this->fields.resUsrSvtData,
                        10,
                        0LL,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v88 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v110.fields.x = -50.0;
      v110.fields.y = 92.0;
      v110.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)resUsrSvtData, v110, 0LL);
      resUsrSvtData = UnityEngine_Component__get_transform(v88, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v111.fields.x = v86;
      v111.fields.y = v86;
      v111.fields.z = v86;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)resUsrSvtData, v111, 0LL);
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
        v35 = (__int64 *)&this->fields.LimitAnimName;
      }
      else
      {
        v92 = this->fields.startAniName;
        if ( !v92 )
          goto LABEL_179;
        v93 = this->fields.successInfo - 1;
        if ( v93 >= v92->max_length )
        {
LABEL_180:
          v106 = sub_B52A88(resUsrSvtData);
          sub_B52A28(v106, 0LL);
        }
        v35 = (__int64 *)&v92->m_Items[v93];
      }
LABEL_163:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
LABEL_164:
      v94 = (System_Int32_array **)*v35;
LABEL_165:
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13133/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      *((_QWORD *)resUsrSvtData + 7) = v94;
      v90 = (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56);
      v89 = v94;
LABEL_168:
      sub_B52920(v90, v89, v71, v72, v73, v74, v75, v76);
LABEL_169:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resUsrSvtData, (System_String_o *)StringLiteral_12425/*"START_ANIMATION"*/, 0LL);
      return;
    case 7:
    case 0x15:
      v36 = &StringLiteral_16937/*"bit_result_skillrank"*/;
LABEL_107:
      v64 = (System_String_o *)*v36;
      v63 = this;
      v62 = 0;
LABEL_108:
      CombineResultEffectComponent__SetCardParam_Skill(v63, v64, v62, v3);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v34 = &StringLiteral_16937/*"bit_result_skillrank"*/;
LABEL_124:
      v70 = (System_String_o *)*v34;
      v69 = this;
      v68 = 0;
LABEL_125:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v69, v70, v68, v3);
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
                        (System_String_o *)StringLiteral_13133/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v77 = &StringLiteral_16938/*"bit_result_skillup"*/;
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
                        (System_String_o *)StringLiteral_13133/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v77 = &StringLiteral_16933/*"bit_result_powerup"*/;
LABEL_147:
      v89 = (System_Int32_array **)*v77;
      *((_QWORD *)resUsrSvtData + 7) = *v77;
      v90 = (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56);
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
                        (System_String_o *)StringLiteral_4489/*"CrtMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v37 = (System_String_o *)resUsrSvtData;
      v38 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v38, v37, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v39 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v107) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v107 + 4, 0LL);
      if ( !v39 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v39, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11528/*"ResMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v40 = (System_String_o *)resUsrSvtData;
      v41 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v41, v40, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v42 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v107) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v107, 0LL);
      if ( !v42 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v42, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( *((_DWORD *)resUsrSvtData + 74) )
        goto LABEL_57;
      v43 = this->fields.resUsrSvtData;
      if ( !v43 )
        goto LABEL_179;
      if ( v43->fields.exceedCount >= 1 )
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
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v44);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v45);
        v35 = &StringLiteral_16929/*"bit_result_limitbreak"*/;
      }
      else if ( this->fields.isChangeCardImg )
      {
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v44);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v91);
        v35 = &StringLiteral_16927/*"bit_result_grail_02"*/;
      }
      else
      {
        v35 = &StringLiteral_16926/*"bit_result_grail_01"*/;
      }
      goto LABEL_163;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v35 = &StringLiteral_16924/*"bit_result_friendship_exceed"*/;
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
                        (System_String_o *)StringLiteral_4360/*"CostumeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v52 = (System_String_o *)resUsrSvtData;
      v53 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v53, v52, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !resUsrSvtData )
        goto LABEL_179;
      UILabel__set_text((UILabel_o *)resUsrSvtData, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v54);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v55);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v56);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v35 = &StringLiteral_16939/*"bit_result_skinchange01"*/;
      goto LABEL_164;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v35 = &StringLiteral_16920/*"bit_result_command_card_exceed"*/;
      goto LABEL_164;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v65);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v66);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v67);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v35 = &StringLiteral_16916/*"bit_result_120"*/;
      goto LABEL_164;
    case 0x19:
      resUsrSvtData = this->fields.effect;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v78 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              (UnityEngine_GameObject_o *)resUsrSvtData,
              (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v79 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v79,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__115_0__,
        0LL);
      v80 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
      EventDelegate___ctor_29649660(v80, v79, 0LL);
      if ( !v78 )
        goto LABEL_179;
      resUsrSvtData = v78->fields.callbackQueue;
      if ( !resUsrSvtData )
        goto LABEL_179;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resUsrSvtData,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v81);
      resUsrSvtData = this->fields.fsm;
      v35 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_16923/*"bit_result_extraskill02"*/ : &StringLiteral_16922/*"bit_result_extraskill01"*/);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *effect; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v8; // x21
  EventDelegate_Callback_o *v9; // x23
  EventDelegate_o *v10; // x22

  if ( (byte_42B2C79 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&StringLiteral_12425/*"START_ANIMATION"*/);
    sub_B52984(&StringLiteral_13133/*"StartAnimationName"*/);
    byte_42B2C79 = 1;
  }
  CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  if ( isSkip )
  {
    effect = this->fields.effect;
    if ( !effect )
      goto LABEL_11;
    effect = UnityEngine_GameObject__get_gameObject(effect, 0LL);
    if ( !effect )
      goto LABEL_11;
    v8 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
           effect,
           (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__,
      0LL);
    v10 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
    EventDelegate___ctor_29649660(v10, v9, 0LL);
    if ( !v8 )
      goto LABEL_11;
    effect = (UnityEngine_GameObject_o *)v8->fields.callbackQueue;
    if ( !effect )
      goto LABEL_11;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effect,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  effect = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( effect )
  {
    effect = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL);
    if ( effect )
      JUMPOUT(0x1CC4694LL);
  }
LABEL_11:
  sub_B52A5C(effect, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCardParam_TreasureDvc(
        CombineResultEffectComponent_o *this,
        System_String_o *startName,
        bool isSkip,
        const MethodInfo *method)
{
  char *effect; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v8; // x21
  EventDelegate_Callback_o *v9; // x23
  EventDelegate_o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B2C7A & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&StringLiteral_12425/*"START_ANIMATION"*/);
    sub_B52984(&StringLiteral_13133/*"StartAnimationName"*/);
    byte_42B2C7A = 1;
  }
  if ( isSkip )
  {
    effect = (char *)this->fields.effect;
    if ( !effect )
      goto LABEL_17;
    effect = (char *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL);
    if ( !effect )
      goto LABEL_17;
    v8 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
           (UnityEngine_GameObject_o *)effect,
           (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__,
      0LL);
    v10 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
    EventDelegate___ctor_29649660(v10, v9, 0LL);
    if ( !v8 )
      goto LABEL_17;
    effect = (char *)v8->fields.callbackQueue;
    if ( !effect )
      goto LABEL_17;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effect,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
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
                           (System_String_o *)StringLiteral_13133/*"StartAnimationName"*/,
                           0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_B52920(
          (BattleServantConfConponent_o *)(effect + 56),
          (System_Int32_array **)startName,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (effect = (char *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12425/*"START_ANIMATION"*/, 0LL);
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
  CombineRootComponent_c *v26; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_42B2C71 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__);
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2C71 = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    (System_String_array **)callback,
    (System_String_array **)autoFadeout,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_B52920(
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
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(gameObject, v25);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v26 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v26 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v26->static_fields->EXCEED_ASSET_PATH;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v28, 1, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  CombineRootComponent_c *v26; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_Transform_o *transform; // x21
  int v31; // s0

  if ( (byte_42B2C6B & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16920/*"bit_result_command_card_exceed"*/);
    sub_B52984(&StringLiteral_11572/*"ResultEffect"*/);
    sub_B52984(&StringLiteral_12430/*"START_COMMAND_CARD_EXCEED_EFFECT"*/);
    byte_42B2C6B = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  v26 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v26 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v26->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16920/*"bit_result_command_card_exceed"*/,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v29 = (UnityEngine_GameObject_o *)effectAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0LL);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v31, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11572/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v29,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(effectAssetData, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12430/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
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
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1

  if ( (byte_42B2C65 & 1) == 0 )
  {
    sub_B52984(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    sub_B52984(&StringLiteral_12433/*"START_COSTUME_EFFECT"*/);
    byte_42B2C65 = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.costumeName,
    (System_Int32_array **)costumeName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  v31 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B52A54(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v31, 0LL);
  this->fields.costumeSkillInfoManager = v31;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.costumeSkillInfoManager,
    (System_Int32_array **)v31,
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
    sub_B52A5C(gameObject, v39);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12433/*"START_COSTUME_EFFECT"*/, 0LL);
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
  __int64 v23; // x1
  CombineRootComponent_c *v24; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_Transform_o *transform; // x21
  int v29; // s0

  if ( (byte_42B2C69 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16924/*"bit_result_friendship_exceed"*/);
    sub_B52984(&StringLiteral_11572/*"ResultEffect"*/);
    sub_B52984(&StringLiteral_12436/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_42B2C69 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  v24 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v24 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v24->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16924/*"bit_result_friendship_exceed"*/,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v27 = (UnityEngine_GameObject_o *)effectAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v29, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11572/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v27,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(effectAssetData, v23);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12436/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v25; // x1
  CombineRootComponent_c *v26; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_42B2C6A & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__);
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2C6A = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v25);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v26 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v26 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v26->static_fields->COMBINE_ASSET_PATH;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v28, 1, 0LL);
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

  if ( (byte_42B2C5F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12435/*"START_FRIENDSHIPUP_EFFECT"*/);
    byte_42B2C5F = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    *(System_String_array ***)&oldFriendShipRank,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
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
    sub_B52A5C(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12435/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLevelUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  ServantScriptEntity_o *Entity_28968720; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  BattleServantConfConponent_o *p_playVoiceList; // x0
  const MethodInfo *v21; // x2
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v23; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v25; // x0
  const MethodInfo *v26; // x2
  struct UserServantEntity_o *v27; // x8
  CombineResultEffectComponent_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  System_String_o *v36; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v38; // x21
  const MethodInfo *v39; // x2
  struct UserServantEntity_o *v40; // x8
  CombineResultEffectComponent_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x21
  System_String_o *v49; // x0
  ServantVoiceEntity_o *v50; // x20
  UserServantEntity_o *v51; // x21
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x0
  __int64 v60; // x0
  int name; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v2 = this;
  if ( (byte_42B2C80 & 1) == 0 )
  {
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_B52984(&string___TypeInfo);
    byte_42B2C80 = 1;
  }
  name = 0;
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_51;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v5;
  *(_QWORD *)&v62.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v62, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_51;
  v6 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v6, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_51;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_51;
  Entity_28968720 = ServantScriptMaster__GetEntity_28968720((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_28968720 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_28968720, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_51;
      combineVoiceId = v2->fields.combineVoiceId;
      method = (const MethodInfo *)v2->fields.baseUsrSvtData;
LABEL_20:
      v12 = ServantVoiceEntity__lotteryLevelUpVoice_30980840(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0LL);
LABEL_21:
      v19 = (System_Int32_array **)v12;
      p_playVoiceList = (BattleServantConfConponent_o *)&v2->fields.playVoiceList;
      v2->fields.playVoiceList = (struct ServantVoiceData_array *)v19;
      goto LABEL_22;
    }
    method = (const MethodInfo *)v2->fields.baseUsrSvtData;
    if ( method )
    {
      name = (int)method[3].name;
      resUsrSvtData = v2->fields.resUsrSvtData;
      if ( resUsrSvtData )
      {
        combineVoiceId = v2->fields.combineVoiceId;
        if ( combineVoiceId )
        {
          this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
          if ( !this )
            goto LABEL_51;
          goto LABEL_20;
        }
        if ( System_Int32__Equals_39386936((int32_t)&name, resUsrSvtData->fields.lv, 0LL) )
        {
          v25 = v2;
          form = 0;
LABEL_26:
          CombineResultEffectComponent__SetBaseSvtFigure(v25, form, v21);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_B5299C(string___TypeInfo, 1LL);
        v27 = v2->fields.baseUsrSvtData;
        if ( v27 )
        {
          v28 = this;
          *(_QWORD *)&v63.fields.currentCryptoKey = &v27->fields.svtId;
          *(_QWORD *)&v63.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v63, v26);
          if ( v28 )
          {
            v35 = (System_Int32_array **)this;
            if ( this )
            {
              this = (CombineResultEffectComponent_o *)sub_B52A44(this, v28->klass->_1.element_class);
              if ( !this )
                goto LABEL_53;
            }
            if ( !LODWORD(v28->fields.svtResultInfoWindow) )
              goto LABEL_52;
            v28->fields.skillResultInfoWindow = (struct SkillUpResultWindowComponent_o *)v35;
            sub_B52920(
              (BattleServantConfConponent_o *)&v28->fields.skillResultInfoWindow,
              v35,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            v36 = System_String__Concat_44648440((System_String_array *)v28, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_35644340(v36, 0LL) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v38 = v2->fields.baseUsrSvtData;
              if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              }
              v12 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v38, 0LL);
              goto LABEL_21;
            }
            this = (CombineResultEffectComponent_o *)sub_B5299C(string___TypeInfo, 1LL);
            v40 = v2->fields.baseUsrSvtData;
            if ( v40 )
            {
              v41 = this;
              *(_QWORD *)&v64.fields.currentCryptoKey = &v40->fields.svtId;
              *(_QWORD *)&v64.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v64, v39);
              if ( v41 )
              {
                v48 = (System_Int32_array **)this;
                if ( !this
                  || (this = (CombineResultEffectComponent_o *)sub_B52A44(this, v41->klass->_1.element_class)) != 0LL )
                {
                  if ( !LODWORD(v41->fields.svtResultInfoWindow) )
                    goto LABEL_52;
                  v41->fields.skillResultInfoWindow = (struct SkillUpResultWindowComponent_o *)v48;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&v41->fields.skillResultInfoWindow,
                    v48,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46,
                    v47);
                  v49 = System_String__Concat_44648440((System_String_array *)v41, 0LL);
                  UnityEngine_PlayerPrefs__SetInt(v49, 1, 0LL);
                  v50 = v2->fields.svtVoiceEntity;
                  v51 = v2->fields.baseUsrSvtData;
                  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                  }
                  v52 = (System_Int32_array **)CombineResultFormManager__lotteryCombineResultInit(v50, v51, 0LL);
                  v2->fields.playVoiceList = (struct ServantVoiceData_array *)v52;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&v2->fields.playVoiceList,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58);
                  playVoiceList = v2->fields.playVoiceList;
                  if ( playVoiceList )
                  {
LABEL_23:
                    if ( playVoiceList->max_length )
                    {
                      v23 = playVoiceList->m_Items[0];
                      if ( !v23 )
                        goto LABEL_51;
                      form = v23->fields.form;
                      v25 = v2;
                      goto LABEL_26;
                    }
LABEL_52:
                    v59 = sub_B52A88(this);
                    sub_B52A28(v59, 0LL);
                  }
                  this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                  if ( !this )
                    goto LABEL_51;
                  v19 = (System_Int32_array **)ServantVoiceEntity__lotteryLevelUpVoice_30980840(
                                                 (ServantVoiceEntity_o *)this,
                                                 v2->fields.baseUsrSvtData,
                                                 v2->fields.combineVoiceId,
                                                 0LL);
                  v2->fields.playVoiceList = (struct ServantVoiceData_array *)v19;
                  p_playVoiceList = (BattleServantConfConponent_o *)&v2->fields.playVoiceList;
LABEL_22:
                  sub_B52920(p_playVoiceList, v19, v13, v14, v15, v16, v17, v18);
                  playVoiceList = v2->fields.playVoiceList;
                  if ( !playVoiceList )
                    goto LABEL_51;
                  goto LABEL_23;
                }
LABEL_53:
                v60 = sub_B52A7C(this);
                sub_B52A28(v60, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B52A5C(this, method);
  }
}


void __fastcall CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  DataManager_o *LimitUpSvtVoiceList; // x0
  __int64 v6; // x1
  int32_t entries_high; // w20
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  struct UserServantEntity_o *v12; // x8
  int32_t v13; // w21
  int32_t v14; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v17; // x5
  __int64 v18; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42B2C86 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_8575/*"LimitUpResSvtNodeName"*/);
    byte_42B2C86 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = (DataManager_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  entries_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.datalist) )
    {
      v18 = sub_B52A88(LimitUpSvtVoiceList);
      sub_B52A28(v18, 0LL);
    }
    lookup = LimitUpSvtVoiceList->fields.lookup;
    if ( !lookup )
      goto LABEL_23;
    entries_high = HIDWORD(lookup->fields.entries);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_23;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  LimitUpSvtVoiceList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
  v12 = this->fields.resUsrSvtData;
  if ( !v12 )
    goto LABEL_23;
  v13 = (int)LimitUpSvtVoiceList;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_23;
  LimitUpSvtVoiceList = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           LimitUpSvtVoiceList,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_23;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v13, v14, 0LL) )
    goto LABEL_19;
  LimitUpSvtVoiceList = (DataManager_o *)entity;
  if ( !entity )
LABEL_23:
    sub_B52A5C(LimitUpSvtVoiceList, v6);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v14 = LimitCountUpResultServantLimitCount;
LABEL_19:
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v13, v14, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v13,
    ImageLimitCount,
    entries_high,
    (System_String_o *)StringLiteral_8575/*"LimitUpResSvtNodeName"*/,
    v17);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v49; // x1
  __int64 v50; // x21
  __int64 v51; // x22
  int32_t v52; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v54; // x8
  ServantLimitImageMaster_o *v55; // x20
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_42B2C63 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12439/*"START_LIMITUP_EFFECT"*/);
    byte_42B2C63 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resSvtNameData,
    (System_Int32_array **)servantChange,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.setResUsrSvtData = 0;
  this->fields.callbackFunc = callback;
  this->fields.displayType = displayType;
  this->fields.autoFadeout = autoFadeout;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.limitUpPlayVoiceLabel,
    (System_Int32_array **)playVoiceLabel,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.limitUpRewardGiftDataList,
    (System_Int32_array **)rewardGiftDataList,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_14;
  v51 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v50 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v51;
  *(_QWORD *)&v59.fields.fakeValue = v50;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v59, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v54 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v60.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v55 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_QWORD *)&v60.fields.currentCryptoKey = v54;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v60, 0LL);
  if ( !v55
    || (gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v55,
                                                   (int32_t)gameObject,
                                                   v52 + 1,
                                                   0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = (unsigned __int8)gameObject & 1,
        !fsm) )
  {
LABEL_14:
    sub_B52A5C(gameObject, v49);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12439/*"START_LIMITUP_EFFECT"*/, 0LL);
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
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
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
  __int64 Int_35644340; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_String_array *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x22
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  __int64 v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_o *v45; // x0
  UserServantEntity_o *v46; // x20
  CombineRootComponent_c *v47; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v49; // x20
  UnityEngine_Transform_o *transform; // x21
  int v51; // s0
  __int64 v54; // x0
  __int64 v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_42B2C67 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_12440/*"START_LVEXCEED_EFFECT"*/);
    sub_B52984(&StringLiteral_16925/*"bit_result_grail"*/);
    sub_B52984(&StringLiteral_11572/*"ResultEffect"*/);
    byte_42B2C67 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Int_35644340 = sub_B5299C(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData
    || (v27 = (System_String_array *)Int_35644340,
        *(_QWORD *)&v56.fields.currentCryptoKey = &this->fields.baseUsrSvtData->fields.svtId,
        *(_QWORD *)&v56.fields.fakeValue = 0LL,
        Int_35644340 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v56, v26),
        !v27) )
  {
LABEL_34:
    sub_B52A5C(Int_35644340, v25);
  }
  v34 = (System_Int32_array **)Int_35644340;
  if ( Int_35644340 )
  {
    Int_35644340 = sub_B52A44(Int_35644340, v27->obj.klass->_1.element_class);
    if ( !Int_35644340 )
      goto LABEL_36;
  }
  if ( !v27->max_length )
    goto LABEL_35;
  v27->m_Items[0] = (System_String_o *)v34;
  sub_B52920((BattleServantConfConponent_o *)v27->m_Items, v34, v28, v29, v30, v31, v32, v33);
  v35 = System_String__Concat_44648440(v27, 0LL);
  Int_35644340 = UnityEngine_PlayerPrefs__GetInt_35644340(v35, 0LL);
  if ( (_DWORD)Int_35644340 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_34;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_35644340 = sub_B5299C(string___TypeInfo, 1LL);
      if ( !*p_baseUsrSvtData )
        goto LABEL_34;
      v37 = Int_35644340;
      *(_QWORD *)&v57.fields.currentCryptoKey = &(*p_baseUsrSvtData)->fields.svtId;
      *(_QWORD *)&v57.fields.fakeValue = 0LL;
      Int_35644340 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v57, v36);
      if ( !v37 )
        goto LABEL_34;
      v44 = (System_Int32_array **)Int_35644340;
      if ( !Int_35644340 || (Int_35644340 = sub_B52A44(Int_35644340, *(_QWORD *)(*(_QWORD *)v37 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v37 + 24) )
        {
          *(_QWORD *)(v37 + 32) = v44;
          sub_B52920((BattleServantConfConponent_o *)(v37 + 32), v44, v38, v39, v40, v41, v42, v43);
          v45 = System_String__Concat_44648440((System_String_array *)v37, 0LL);
          UnityEngine_PlayerPrefs__SetInt(v45, 0, 0LL);
          v46 = *p_baseUsrSvtData;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
          }
          CombineResultFormManager__ResetVoiceList(v46, 0LL);
          goto LABEL_20;
        }
LABEL_35:
        v54 = sub_B52A88(Int_35644340);
        sub_B52A28(v54, 0LL);
      }
LABEL_36:
      v55 = sub_B52A7C(Int_35644340);
      sub_B52A28(v55, 0LL);
    }
  }
LABEL_20:
  v47 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v47 = CombineRootComponent_TypeInfo;
  }
  Int_35644340 = (__int64)v47->static_fields->effectAssetData;
  if ( !Int_35644340 )
    goto LABEL_34;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)Int_35644340,
                                                                               (System_String_o *)StringLiteral_16925/*"bit_result_grail"*/,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Int_35644340 = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                            Object_WarBoardWaitTimeSetting,
                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_35644340 )
    goto LABEL_34;
  v49 = (UnityEngine_GameObject_o *)Int_35644340;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_35644340, 0LL);
  *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v51, 0LL);
  Int_35644340 = (__int64)this->fields.fsm;
  if ( !Int_35644340 )
    goto LABEL_34;
  Int_35644340 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_35644340, 0LL);
  if ( !Int_35644340 )
    goto LABEL_34;
  Int_35644340 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_35644340,
                            (System_String_o *)StringLiteral_11572/*"ResultEffect"*/,
                            0LL);
  if ( !Int_35644340 )
    goto LABEL_34;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_35644340, v49, 0LL);
  Int_35644340 = (__int64)this->fields.fsm;
  if ( !Int_35644340 )
    goto LABEL_34;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_35644340, (System_String_o *)StringLiteral_12440/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v24; // x1
  CombineRootComponent_c *v25; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_42B2C68 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__);
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2C68 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v24);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v25 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v25 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v25->static_fields->EXCEED_ASSET_PATH;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v27, 1, 0LL);
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
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  char *gameObject; // x0
  __int64 v26; // x1
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v29; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v31; // x21
  UnityEngine_Transform_o *v32; // x0
  int *v33; // x21
  System_String_o *v34; // x22
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_ParticleSystem_o *v36; // x22
  float v37; // s0
  const MethodInfo *v38; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v40; // x4
  struct ServantChangeEntity_o *v41; // x8
  int32_t v42; // w3
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  UnityEngine_ParticleSystem_MinMaxCurve_o v50; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v51; // [xsp+28h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *v52; // [xsp+48h] [xbp-38h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v54; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v55; // 0:x0.8
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2C64 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_11530/*"ResNameNodeName"*/);
    sub_B52984(&StringLiteral_12441/*"START_NAME_REVEAL_EFFECT"*/);
    sub_B52984(&StringLiteral_9465/*"NameRevealCrossFade"*/);
    sub_B52984(&StringLiteral_4491/*"CrtNameNodeName"*/);
    sub_B52984(&StringLiteral_16930/*"bit_result_name_reveal"*/);
    sub_B52984(&StringLiteral_13133/*"StartAnimationName"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_9466/*"NameRevealParticleNodeName"*/);
    byte_42B2C64 = 1;
  }
  m_ParticleSystem = 0LL;
  v52 = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.crtSvtNameData,
    (System_Int32_array **)before,
    (System_String_array **)after,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resSvtNameData = after;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resSvtNameData,
    (System_Int32_array **)after,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12441/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4491/*"CrtNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v29 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v29, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11530/*"ResNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v31 = (System_String_o *)gameObject;
  v32 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v32, v31, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v33 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9466/*"NameRevealParticleNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v34 = (System_String_o *)gameObject;
  v35 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v35, v34, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v36 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v52 = UnityEngine_ParticleSystem__get_shape(v36, 0LL).fields.m_ParticleSystem;
  v37 = (float)((float)v33[40] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v51, 0, sizeof(v51));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v51, v37, 0LL);
  v54.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v50 = v51;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v54, &v50, 0LL);
  v56.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v55.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v52;
  v56.fields.x = (float)((float)v33[40] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v56.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v55, v56, 0LL);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v38);
  v41 = this->fields.crtSvtNameData;
  if ( !v41 )
    goto LABEL_40;
  v42 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v41->fields.svtId, v41->fields.limitCount, v42, v40);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_13133/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_B52A5C(gameObject, v26);
  }
  v49 = (System_Int32_array **)StringLiteral_16930/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_16930/*"bit_result_name_reveal"*/;
  sub_B52920((BattleServantConfConponent_o *)(gameObject + 56), v49, v43, v44, v45, v46, v47, v48);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9465/*"NameRevealCrossFade"*/,
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
  ServantTreasureDeviceAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v30; // x1
  ServantTreasureDeviceAddMaster_o *v31; // x24
  __int64 v32; // x25
  __int64 v33; // x26
  int32_t v34; // w0
  __int64 v35; // x8
  int32_t v36; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v38; // x25
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v48; // x8
  __int64 v49; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  __int64 v52; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_42B2C5E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_12442/*"START_NOBLEUP_EFFECT"*/);
    sub_B52984(&StringLiteral_13546/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/);
    sub_B52984(&StringLiteral_13547/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/);
    byte_42B2C5E = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)usrSvtData,
    *(System_String_array ***)&targetId,
    *(System_Boolean_array ***)&targetLv,
    (System_Int32_array **)callback,
    *(System_Int32_array **)&targetIdOld,
    *(System_Int32_array **)&targetLvOld);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_32;
  v31 = Master_WarQuestSelectionMaster;
  v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v33;
  *(_QWORD *)&v53.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v53, 0LL);
  v35 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
  v36 = v34;
  *(_QWORD *)&v54.fields.currentCryptoKey = v35;
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                         v54,
                                                                         0LL);
  if ( !v31 )
    goto LABEL_32;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   v31,
                   v36,
                   (int32_t)Master_WarQuestSelectionMaster,
                   0,
                   0LL);
  v38 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_B52A54(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v38, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v38;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.npInfoAddManager,
    (System_Int32_array **)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
                                                                           (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
    if ( (int)Master_WarQuestSelectionMaster >= 1 )
    {
      v46 = 8LL;
      while ( 1 )
      {
        treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
        if ( !treasureDeviceIds )
          break;
        if ( v46 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
          goto LABEL_33;
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
          (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
          *((_DWORD *)&treasureDeviceIds->obj.klass + v46),
          targetLvOld,
          0LL);
        v48 = EnableEntity->fields.treasureDeviceIds;
        if ( !v48 )
          break;
        if ( v46 - 8 >= (unsigned __int64)v48->max_length )
        {
LABEL_33:
          v52 = sub_B52A88(Master_WarQuestSelectionMaster);
          sub_B52A28(v52, 0LL);
        }
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
          *((_DWORD *)&v48->obj.klass + v46),
          targetLv,
          0LL);
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                               (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
        v49 = v46 - 7;
        ++v46;
        if ( v49 >= (int)Master_WarQuestSelectionMaster )
          goto LABEL_22;
      }
LABEL_32:
      sub_B52A5C(Master_WarQuestSelectionMaster, v30);
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
                                                                         (System_String_o *)StringLiteral_13546/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                                         0LL);
  if ( !unSummonLabel )
    goto LABEL_32;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_13547/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                                         0LL);
  if ( !unSummonDetail )
    goto LABEL_32;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_12442/*"START_NOBLEUP_EFFECT"*/, 0LL);
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

  if ( (byte_42B2C66 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12445/*"START_POWERUP_EFFECT"*/);
    byte_42B2C66 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
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
    sub_B52A5C(gameObject, v24);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12445/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t kind; // w8
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  struct ServantChangeEntity_o *resSvtNameData; // x8
  int32_t voiceSvtId; // w1
  int32_t LimitCountByImageLimitCostumeIn; // w2
  bool v10; // w3
  CombineResultEffectComponent_o *v11; // x0
  struct ServantChangeEntity_o *v12; // x8
  int32_t CardImageLimitCount; // w0
  int32_t v14; // w20
  const MethodInfo *v15; // x1

  if ( (byte_42B2C78 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2C78 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v14 = CardImageLimitCount;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v14, 0LL);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 1, 0LL);
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
      sub_B52A5C(Instance, v5);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    v12 = this->fields.resSvtNameData;
    if ( v12 )
      voiceSvtId = v12->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    LimitCountByImageLimitCostumeIn = this->fields.costumeId;
  }
  v11 = this;
  v10 = 0;
LABEL_32:
  CombineResultEffectComponent__getSvtVoiceData(v11, voiceSvtId, LimitCountByImageLimitCostumeIn, v10, v6);
  CombineResultEffectComponent__loadVoiceData(this, v15);
}


void __fastcall CombineResultEffectComponent__SetResultUserServantData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v4; // q1
  struct UserServantEntity_o *v5; // x8
  __int128 v6; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v8; // x20
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v11; // x21
  UserServantEntity_o *v12; // x21
  UserServantEntity_o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UserServantEntity_o *v20; // x8
  __int64 v21; // x21
  __int64 v22; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserServantEntity_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x24
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // kr00_16
  struct UserServantEntity_o *v37; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v39; // x21
  int32_t v40; // w22
  CombineResultEffectComponent_o *v41; // x8
  UserServantEntity_o *v42; // x20
  UserServantEntity_o *v43; // x21
  struct UserServantEntity_o **p_resUsrSvtData; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct UserServantEntity_o *v51; // x21
  __int64 v52; // x19
  __int64 v53; // x20
  int32_t v54; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v2 = this;
  if ( (byte_42B2C77 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B2C77 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_53;
    v4 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v58.fields.fakeValue = v4;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v57 = v58;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v57, 0LL) < 1 )
    {
      v42 = v2->fields.baseUsrSvtData;
      v43 = (UserServantEntity_o *)sub_B52A54(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21495500(v43, v42, 0LL);
      p_resUsrSvtData = &v2->fields.resUsrSvtData;
      v2->fields.resUsrSvtData = v43;
      sub_B52920(
        (BattleServantConfConponent_o *)&v2->fields.resUsrSvtData,
        (System_Int32_array **)v43,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      if ( (v2->fields.kind | 0x10) != 26 )
        return;
      v51 = *p_resUsrSvtData;
      if ( *p_resUsrSvtData )
      {
        v53 = *(_QWORD *)&v51->fields.limitCount.fields.currentCryptoKey;
        v52 = *(_QWORD *)&v51->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v62.fields.currentCryptoKey = v53;
        *(_QWORD *)&v62.fields.fakeValue = v52;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v62, 0LL);
        v51->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v54 + 1, 0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v5 = v2->fields.baseUsrSvtData;
        if ( v5 )
        {
          v6 = *(_OWORD *)&v5->fields.id.fields.fakeValue;
          v7 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
          *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v5->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v58.fields.fakeValue = v6;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v58;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                     &v56,
                                                     0LL);
          if ( v7 )
          {
            v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                       v7,
                                                       &v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_53;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v9 = v2->fields.baseUsrSvtData;
              if ( !v9 )
                goto LABEL_53;
              v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
              v11 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
              *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v58.fields.fakeValue = v10;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v55 = v58;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                         &v55,
                                                         0LL);
              if ( !v11 )
                goto LABEL_53;
              this = (CombineResultEffectComponent_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                         v11,
                                                         &v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v12 = v2->fields.baseUsrSvtData;
                v13 = (UserServantEntity_o *)sub_B52A54(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_21495500(v13, v12, 0LL);
                v2->fields.resUsrSvtData = v13;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v2->fields.resUsrSvtData,
                  (System_Int32_array **)v13,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19);
              }
            }
            if ( v2->fields.kind != 19 )
              return;
            v20 = v2->fields.baseUsrSvtData;
            if ( v20 )
            {
              v22 = *(_QWORD *)&v20->fields.limitCount.fields.currentCryptoKey;
              v21 = *(_QWORD *)&v20->fields.limitCount.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v60.fields.currentCryptoKey = v22;
              *(_QWORD *)&v60.fields.fakeValue = v21;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                         v60,
                                                         0LL);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v24 = (UserServantEntity_o *)sub_B52A54(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_21495500(v24, resUsrSvtData, 0LL);
                v2->fields.resUsrSvtData = v24;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v2->fields.resUsrSvtData,
                  (System_Int32_array **)v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  v29,
                  v30);
                v31 = v2->fields.baseUsrSvtData;
                if ( v31 )
                {
                  v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                  v34 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
                  v33 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v61.fields.currentCryptoKey = v34;
                  *(_QWORD *)&v61.fields.fakeValue = v33;
                  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v61, 0LL);
                  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v35 + 1, 0LL);
                  method = *(const MethodInfo **)&v36.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v36.fields.currentCryptoKey;
                  if ( v32 )
                  {
                    v32[6] = v36;
                    v37 = v2->fields.baseUsrSvtData;
                    if ( v37 )
                    {
                      hp = v37->fields.hp;
                      afterAtk[0] = v37->fields.atk;
                      afterAtk[1] = hp;
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v8 )
                        {
                          v39 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                     (*v8)[5],
                                                                     0LL);
                          if ( *v8 )
                          {
                            v40 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                       (*v8)[6],
                                                                       0LL);
                            if ( v39 )
                            {
                              this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                         v39,
                                                                         v40,
                                                                         (int32_t)this,
                                                                         0LL);
                              if ( this )
                              {
                                v41 = this;
                                this = (CombineResultEffectComponent_o *)v2->fields.combineResStatus;
                                if ( this )
                                {
                                  CheckCombineResStatus__getCombineResStatus(
                                    (CheckCombineResStatus_o *)this,
                                    &afterAtk[1],
                                    afterAtk,
                                    v2->fields.resUsrSvtData,
                                    HIDWORD(v41->fields.svtResultInfoWindow),
                                    0LL);
                                  if ( *v8 )
                                  {
                                    *(_DWORD *)&(*v8)[16].fields.inited = afterAtk[1];
                                    if ( *v8 )
                                    {
                                      (*v8)[16].fields.fakeValue = afterAtk[0];
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
    sub_B52A5C(this, method);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  void *Instance; // x0
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x23
  int32_t v23; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x28
  __int64 v25; // x10
  int v26; // w8
  int v27; // w8
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__105_0; // x24
  Il2CppObject *v30; // x25
  struct CombineResultEffectComponent___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x8
  int v40; // w24
  TerminalSceneComponent_c *v41; // x0
  struct CombineResultEffectComponent_MessageDelegate_o **p_messageCallback; // x21
  int size; // w8
  __int64 v44; // x20
  __int64 v45; // x8
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  __int64 v59; // x8
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-68h]
  struct CombineResultEffectComponent_MessageDelegate_o *v61; // [xsp+18h] [xbp-58h]

  if ( (byte_42B2C6C & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
    sub_B52984(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_B52984(&ServantTreasureDvcEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__);
    sub_B52984(&CombineResultEffectComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_12446/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_B52984(&StringLiteral_16940/*"bit_result_ultimate_anim"*/);
    sub_B52984(&StringLiteral_13133/*"StartAnimationName"*/);
    byte_42B2C6C = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&phase,
    (System_String_array **)msgCallBack,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.messageCallback = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.messageCallback, 0LL, v13, v14, v15, v16, v17, v18);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  p_callbackFunc = &this->fields.callbackFunc;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_67;
  v61 = msgCallBack;
  v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v21 )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         v21,
         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v21,
                   v23,
                   (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v25 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v25
        || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v25 - 8) != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      v26 = *((_DWORD *)Instance + 9);
      if ( v26 >= 1 && v26 == questId )
      {
        v27 = *((_DWORD *)Instance + 10);
        if ( v27 < 1 || v27 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v22 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v22,
              v24,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
          }
        }
      }
      if ( ++v23 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v21,
                      (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_19;
    }
LABEL_67:
    sub_B52A5C(Instance, v20);
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
    v30 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__105_0,
      v30,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
    v31 = CombineResultEffectComponent___c_TypeInfo->static_fields;
    v31->__9__105_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__105_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v31->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v22 )
    goto LABEL_67;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__105_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  if ( v22->fields._size < 1 )
  {
    v40 = 0;
  }
  else
  {
    v39 = v22->fields._items->m_Items[0];
    if ( !v39 )
      goto LABEL_67;
    v40 = 1;
    this->fields.targetSvtId = v39->fields.missionTargetId;
  }
  Instance = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*((_QWORD *)Instance + 23) + 504LL) || (size = v22->fields._size, size < 1) )
  {
LABEL_36:
    if ( !v40 )
    {
LABEL_64:
      if ( *p_callbackFunc )
        CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
      return;
    }
  }
  else
  {
    v44 = 4LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)(v44 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v45 = *((_QWORD *)&v22->fields._items->obj.klass + v44);
      if ( !v45 )
        goto LABEL_67;
      Instance = (void *)CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *(_DWORD *)(v45 + 16), v38);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      size = v22->fields._size;
      if ( (int)++v44 - 4 >= size )
        goto LABEL_36;
    }
    if ( v22->fields._size <= (unsigned int)(v44 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v59 = *((_QWORD *)&v22->fields._items->obj.klass + v44);
    if ( !v59 )
      goto LABEL_67;
    this->fields.targetSvtId = *(_DWORD *)(v59 + 16);
    if ( !v40 )
      goto LABEL_64;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  v41 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    p_messageCallback = &this->fields.messageCallback;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v41 = TerminalSceneComponent_TypeInfo;
    }
  }
  else
  {
    p_messageCallback = &this->fields.messageCallback;
  }
  Instance = v41->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_67;
  TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
  this->fields.messageCallback = v61;
  sub_B52920(
    (BattleServantConfConponent_o *)p_messageCallback,
    (System_Int32_array **)v61,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Instance = this->fields.fsm;
  if ( !Instance )
    goto LABEL_67;
  Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_67;
  Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               (HutongGames_PlayMaker_FsmVariables_o *)Instance,
               (System_String_o *)StringLiteral_13133/*"StartAnimationName"*/,
               0LL);
  if ( !Instance )
    goto LABEL_67;
  v58 = (System_Int32_array **)StringLiteral_16940/*"bit_result_ultimate_anim"*/;
  *((_QWORD *)Instance + 7) = StringLiteral_16940/*"bit_result_ultimate_anim"*/;
  sub_B52920((BattleServantConfConponent_o *)((char *)Instance + 56), v58, v52, v53, v54, v55, v56, v57);
  Instance = this->fields.fsm;
  if ( !Instance )
    goto LABEL_67;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12446/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x21
  const MethodInfo *v12; // x2
  BalanceConfig_c *v13; // x0
  __int64 v14; // x1
  char *fsm; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1

  if ( (byte_42B2C6D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&StringLiteral_12446/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_B52984(&StringLiteral_16940/*"bit_result_ultimate_anim"*/);
    sub_B52984(&StringLiteral_13133/*"StartAnimationName"*/);
    byte_42B2C6D = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( v13->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v12) )
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
                          (System_String_o *)StringLiteral_13133/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v22 = (System_Int32_array **)StringLiteral_16940/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_16940/*"bit_result_ultimate_anim"*/,
          sub_B52920((BattleServantConfConponent_o *)(fsm + 56), v22, v16, v17, v18, v19, v20, v21),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_B52A5C(fsm, v14);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12446/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_42B2C5D & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12448/*"START_SKILLUP_EFFECT"*/);
    sub_B52984(&StringLiteral_12337/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/);
    sub_B52984(&StringLiteral_12338/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/);
    byte_42B2C5D = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12338/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(gameObject, v24);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12448/*"START_SKILLUP_EFFECT"*/, 0LL);
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
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  __int64 v14; // x1
  StandFigureCollect_o *v15; // x8
  struct ServantVoiceData_array *v16; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v18; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  __int64 v21; // x8
  int v22; // w20
  __int64 v23; // x25
  StandFigureCollect_o *v24; // x8
  __int64 v25; // x0

  if ( (byte_42B2C93 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_B52984(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_42B2C93 = 1;
  }
  standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                                                      (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)standFigure_k__BackingField < 2 )
  {
    if ( standFigureCollects )
    {
      if ( !standFigureCollects->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v15 = standFigureCollects->fields._items->m_Items[0];
      if ( v15 )
      {
        standFigure_k__BackingField = v15->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetFace_40871844(standFigure_k__BackingField, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_B52A5C(standFigure_k__BackingField, v14);
  }
  v16 = this->fields.playVoiceList;
  if ( !v16 )
    goto LABEL_29;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
  {
LABEL_27:
    v25 = sub_B52A88(standFigure_k__BackingField);
    sub_B52A28(v25, 0LL);
  }
  v18 = v16->m_Items[playCnt];
  if ( !v18 )
    goto LABEL_29;
  multiFace = v18->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v18->fields.multiForm;
    if ( multiForm )
    {
      v21 = *(_QWORD *)&multiFace->max_length;
      v22 = (int)standFigure_k__BackingField;
      if ( (_DWORD)standFigure_k__BackingField == (_DWORD)v21
        && (_DWORD)standFigure_k__BackingField == multiForm->max_length )
      {
        if ( (_DWORD)v21 )
        {
          v23 = 0LL;
          do
          {
            if ( (unsigned int)v23 >= multiForm->max_length )
              break;
            if ( !standFigureCollects )
              goto LABEL_29;
            if ( standFigureCollects->fields._size <= (unsigned int)v23 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            v24 = standFigureCollects->fields._items->m_Items[v23];
            if ( !v24 )
              goto LABEL_29;
            standFigure_k__BackingField = v24->fields._standFigure_k__BackingField;
            if ( !standFigure_k__BackingField )
              goto LABEL_29;
            UIStandFigureR__SetFace_40871844(
              standFigure_k__BackingField,
              multiFace->m_Items[v23 + 1],
              multiForm->m_Items[v23 + 1],
              0LL,
              fadeTime,
              0LL);
            if ( (int)v23 + 1 >= v22 )
              return;
            ++v23;
          }
          while ( (unsigned int)v23 < multiFace->max_length );
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

  if ( (byte_42B2C60 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12450/*"START_SVTCOMBINE_EFFECT"*/);
    byte_42B2C60 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.combineVoiceId, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
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
    sub_B52A5C(gameObject, v33);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12450/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_30117196(
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

  if ( (byte_42B2C61 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12450/*"START_SVTCOMBINE_EFFECT"*/);
    byte_42B2C61 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    *(System_String_array ***)&infoIdx,
    (System_String_array **)baseData,
    (System_Boolean_array **)resData,
    *(System_Int32_array ***)&svtId,
    (System_Int32_array *)voiceId,
    (System_Int32_array *)statusDisp);
  this->fields.resUsrSvtData = resData;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
    sub_B52A5C(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12450/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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

  if ( (byte_42B2C62 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12450/*"START_SVTCOMBINE_EFFECT"*/);
    byte_42B2C62 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B52920(
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
    sub_B52A5C(gameObject, v30);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12450/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21

  if ( (byte_42B2C99 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__);
    byte_42B2C99 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_B52A5C(bgCollider, method);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *bgCollider; // x0
  _DWORD *v6; // x22
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x8
  ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t v10; // w22
  int32_t v11; // w23
  System_Action_o *v12; // x25

  if ( (byte_42B2C97 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__);
    byte_42B2C97 = 1;
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
  v6 = bgCollider;
  bgCollider = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
                 this->fields.npInfoAddManager,
                 index,
                 0LL);
  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager
    || !v6
    || !bgCollider
    || (tdAddEntity_k__BackingField = npInfoAddManager->fields._tdAddEntity_k__BackingField,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v10 = v6[7],
        v11 = *((_DWORD *)bgCollider + 7),
        v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_B52A5C(bgCollider, *(_QWORD *)&index);
  }
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    tdAddEntity_k__BackingField,
    index,
    v10,
    v11,
    v12,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowSkillChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *bgCollider; // x0
  _DWORD *v6; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w24
  System_String_o *costumeName; // x25
  System_Action_o *v13; // x26

  if ( (byte_42B2C98 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__);
    byte_42B2C98 = 1;
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
  v6 = bgCollider;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
                 this->fields.costumeSkillInfoManager,
                 index,
                 0LL);
  if ( !v6 )
    goto LABEL_10;
  if ( !bgCollider )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v8 = v6[4];
  v9 = v6[5];
  v10 = *((_DWORD *)bgCollider + 4);
  v11 = *((_DWORD *)bgCollider + 5);
  costumeName = this->fields.costumeName;
  v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B52A5C(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v8,
    v9,
    v10,
    v11,
    costumeName,
    v13,
    0LL);
}


void __fastcall CombineResultEffectComponent__ShowSkillChangeMessage(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  System_Action_o *v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42B2C96 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2C96 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B52A5C(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v8, v9, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x20
  __int128 v5; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v6; // x21
  UserServantEntity_o *Entity; // x21
  int32_t id; // w21
  int32_t lv; // w22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v11; // w23
  int32_t v12; // w24
  System_Action_o *v13; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v16; // [xsp+48h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-38h] BYREF

  if ( (byte_42B2C9A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C9A = 1;
  }
  tdInfo = 0LL;
  v16 = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_15;
  bgCollider = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v6 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)bgCollider;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v14, 0LL);
  if ( !v6 )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v6,
             bgCollider,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_15;
  bgCollider = UserServantEntity__getTreasureDeviceInfo(Entity, &v16, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v16
    || (id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v11 = v16->fields.id,
        v12 = v16->fields.lv,
        v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_15:
    sub_B52A5C(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v11, v12, v13, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__169_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42B2CB4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__);
    byte_42B2CB4 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_B52A5C(v5, v6);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__169_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent__EndDisp(this, method);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__144_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B2CB2 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_5526/*"END_LOAD"*/);
    byte_42B2CB2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_B52A5C(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5526/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__154_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42B2CB3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__EndPlay_b__154_2__);
    byte_42B2CB3 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__154_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_B52A5C(v5, v6);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__163_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B52A5C(0LL, method);
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___InitCombineEffect_b__111_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42B2CAF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5526/*"END_LOAD"*/);
    byte_42B2CAF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5526/*"END_LOAD"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetAppendSkillCombineInfo_b__107_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x21
  int v10; // s0

  if ( (byte_42B2CAD & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_12440/*"START_LVEXCEED_EFFECT"*/);
    sub_B52984(&StringLiteral_16921/*"bit_result_extraskill"*/);
    sub_B52984(&StringLiteral_11572/*"ResultEffect"*/);
    byte_42B2CAD = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16921/*"bit_result_extraskill"*/,
                                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v8 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11572/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v8, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B52A5C(fsm, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12440/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetCombineLimit_b__110_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array *v5; // x21
  System_String_o *v6; // x0
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x22
  System_String_o *v16; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_Transform_o *transform; // x21
  int v19; // s0
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_42B2CAE & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_11572/*"ResultEffect"*/);
    sub_B52984(&StringLiteral_12429/*"START_COMBINE_LIMIT"*/);
    sub_B52984(&StringLiteral_16915/*"bit_result_"*/);
    byte_42B2CAE = 1;
  }
  if ( data )
  {
    v5 = (System_String_array *)sub_B5299C(string___TypeInfo, 1LL);
    v6 = System_Int32__ToString((int)this + 320, 0LL);
    fsm = (UnityEngine_GameObject_o *)System_String__Concat_44568316((System_String_o *)StringLiteral_16915/*"bit_result_"*/, v6, 0LL);
    if ( v5 )
    {
      v15 = (System_Int32_array **)fsm;
      if ( fsm )
      {
        fsm = (UnityEngine_GameObject_o *)sub_B52A44(fsm, v5->obj.klass->_1.element_class);
        if ( !fsm )
        {
          v23 = sub_B52A7C(0LL);
          sub_B52A28(v23, 0LL);
        }
      }
      if ( !v5->max_length )
      {
        v22 = sub_B52A88(fsm);
        sub_B52A28(v22, 0LL);
      }
      v5->m_Items[0] = (System_String_o *)v15;
      sub_B52920((BattleServantConfConponent_o *)v5->m_Items, v15, v9, v10, v11, v12, v13, v14);
      v16 = System_String__Concat_44648440(v5, 0LL);
      Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                   data,
                                                                                   v16,
                                                                                   (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          Object_WarBoardWaitTimeSetting,
                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( fsm )
      {
        transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
          fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
          if ( fsm )
          {
            fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
            if ( fsm )
              JUMPOUT(0x1CC469CLL);
          }
        }
      }
    }
    sub_B52A5C(fsm, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__103_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x21
  int v10; // s0

  if ( (byte_42B2CAC & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_16924/*"bit_result_friendship_exceed"*/);
    sub_B52984(&StringLiteral_11572/*"ResultEffect"*/);
    sub_B52984(&StringLiteral_12436/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_42B2CAC = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16924/*"bit_result_friendship_exceed"*/,
                                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v8 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11572/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v8, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B52A5C(fsm, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12436/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__101_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x21
  int v10; // s0

  if ( (byte_42B2CAB & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_12440/*"START_LVEXCEED_EFFECT"*/);
    sub_B52984(&StringLiteral_16929/*"bit_result_limitbreak"*/);
    sub_B52984(&StringLiteral_11572/*"ResultEffect"*/);
    byte_42B2CAB = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16929/*"bit_result_limitbreak"*/,
                                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v8 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11572/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v8, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B52A5C(fsm, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12440/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B52A5C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__149_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B52A5C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B52A5C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__148_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B52A5C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B52A5C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__113_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42B2CB0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5526/*"END_LOAD"*/);
    byte_42B2CB0 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5526/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effect; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v15; // x22
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UserServantEntity_o *v23; // x21
  System_Int32_array **callbackFunc; // x1
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
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CommonUI_o *v39; // x22
  CombineResultEffectComponent_ClickDelegate_o *v40; // x25
  CombineResultEffectComponent_ClickDelegate_o *v41; // x0

  if ( (byte_42B2CB1 & 1) == 0 )
  {
    sub_B52984(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__);
    sub_B52984(&CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B2CB1 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35617168(effect, 0LL);
  this->fields.effect = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v4, v5, v6, v7, v8, v9);
  CombineResultEffectComponent__Close(this, v10);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v15 = EntityDefinitely;
    v16 = sub_B52A54(CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo);
    CombineResultEffectComponent___c__DisplayClass143_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass143_2_o *)v16,
      0LL);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 24) = this;
      sub_B52920((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
      v23 = (UserServantEntity_o *)sub_B52A54(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21495808(v23, v15, 0LL);
      callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
      *(_QWORD *)(v16 + 16) = callbackFunc;
      sub_B52920((BattleServantConfConponent_o *)(v16 + 16), callbackFunc, v25, v26, v27, v28, v29, v30);
      this->fields.callbackFunc = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v31, v32, v33, v34, v35, v36);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v23 )
      {
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v23->fields.treasureDeviceLv1;
        v39 = (CommonUI_o *)Instance;
        v40 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B52A54(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v40,
          (Il2CppObject *)v16,
          Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__,
          0LL);
        if ( v39 )
        {
          CommonUI__OpenNobleCombineResult(
            v39,
            18,
            v23,
            targetId,
            treasureDeviceLv1,
            v40,
            this->fields.targetIdOld,
            v23->fields.treasureDeviceLv1,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B52A5C(Instance, v12);
  }
  v41 = this->fields.callbackFunc;
  if ( v41 )
    CombineResultEffectComponent_ClickDelegate__Invoke(v41, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B52A5C(0LL, method);
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


bool __fastcall CombineResultEffectComponent__checkSecretTreasureDeviceData(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ServantFlagEntity_o *v7; // x8
  struct System_Int32_array *args; // x9
  struct System_Int32_array *v9; // x8
  int32_t v10; // w8
  bool result; // w0
  __int64 v12; // x0
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2C6F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C6F = 1;
  }
  svtFlagEntity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_29254660(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0LL) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_15:
    v10 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_16;
  }
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v7 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_17;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v7->fields.args;
  if ( !args )
    goto LABEL_17;
  if ( args->max_length <= 1 )
    goto LABEL_18;
  this->fields.targetId = args->m_Items[2];
  v9 = v7->fields.args;
  if ( !v9 )
LABEL_17:
    sub_B52A5C(Instance, v6);
  if ( !v9->max_length )
  {
LABEL_18:
    v12 = sub_B52A88(Instance);
    sub_B52A28(v12, 0LL);
  }
  v10 = v9->m_Items[1];
  result = 1;
LABEL_16:
  this->fields.targetIdOld = v10;
  return result;
}


void __fastcall CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *bgCollider; // x0
  const MethodInfo *v4; // x1
  int32_t kind; // w8
  const MethodInfo *v6; // x2
  int32_t v7; // w20
  int32_t v8; // w0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_42B2C9F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2C9F = 1;
  }
  bgCollider = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_44;
  if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)bgCollider, 0LL) )
  {
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v4) )
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v6);
        bgCollider = this->fields.costumeSkillInfoManager;
        v7 = this->fields.skillShowIndex + 1;
        this->fields.skillShowIndex = v7;
        if ( bgCollider )
        {
          v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(bgCollider, 0LL);
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
            CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v11);
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
          CombineResultEffectComponent__stopVoice(this, v4);
LABEL_36:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( this->fields.kind != 24 )
          CombineResultEffectComponent__ReleaseVoiceData(this, v12);
        if ( !CombineResultEffectComponent__OpenNotification(this, v12) )
          CombineResultEffectComponent__FadeoutProcess(this, v13);
        return;
      }
    }
    else if ( kind != 4 && kind != 8 )
    {
      goto LABEL_24;
    }
    if ( CombineResultEffectComponent__IsShowNextNpInfo(this, v4) )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v10);
      bgCollider = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)this->fields.npInfoAddManager;
      v7 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v7;
      if ( bgCollider )
      {
        v8 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
               (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
               0LL);
LABEL_21:
        if ( v7 < v8 )
          return;
LABEL_32:
        CombineResultEffectComponent__EndDisp(this, v9);
        return;
      }
LABEL_44:
      sub_B52A5C(bgCollider, method);
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
  BattleServantConfConponent_o *static_fields; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42B2C74 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent__endloadEffect_b__113_0__);
    sub_B52984(&CombineResultEffectComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2C74 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)CombineResultEffectComponent_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B52920(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__113_0__, 0LL);
    if ( !Instance )
      sub_B52A5C(v15, v16);
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v14, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v22; // x8
  ServantVoiceMaster_o *v23; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42B2C7C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C7C = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.asstName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.playVoiceList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v9, v10, v11, v12, v13, v14);
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
  *(_QWORD *)&v39.fields.currentCryptoKey = v19;
  *(_QWORD *)&v39.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v20, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v22 = this->fields.resUsrSvtData) == 0LL)
    || (v23 = (ServantVoiceMaster_o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                      v22->fields.limitCount,
                                      0LL),
        !v23) )
  {
LABEL_13:
    sub_B52A5C(Instance, v16);
  }
  Entity = ServantVoiceMaster__getEntity(v23, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.svtVoiceEntity,
    (System_Int32_array **)Entity,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ServantVoiceData_array *result; // x0

  if ( (byte_42B2C90 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_42B2C90 = 1;
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
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *transform; // x19
  int v9; // s0
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  if ( (byte_42B2C75 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&CombineResultEffectComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2C75 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL),
        v12 = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL),
        !v12) )
  {
LABEL_12:
    sub_B52A5C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceData_array *__fastcall CombineResultEffectComponent__getLimitUpSvtVoiceList(
        CombineResultEffectComponent_o *this,
        bool isPlayVoice,
        const MethodInfo *method)
{
  UserServantEntity_o *resUsrSvtData; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  ServantVoiceData_array *result; // x0
  struct UserServantEntity_o *v8; // x8
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42B2C8F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2C8F = 1;
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
    v8 = this->fields.resUsrSvtData;
    if ( !v8 )
LABEL_22:
      sub_B52A5C(resUsrSvtData, isPlayVoice);
    v10 = *(_QWORD *)&v8->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&v8->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v12.fields.currentCryptoKey = v10;
    *(_QWORD *)&v12.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
    result = (ServantVoiceData_array *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                         svtVoiceEntity,
                                         v11,
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UserServantEntity_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v21; // x21
  __int64 v22; // x24
  int32_t v23; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v25; // x8
  ServantLimitImageMaster_o *v26; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  int32_t ServantLimitCountSealAfter; // w22
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v9 = costumeId;
  if ( (byte_42B2C7B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C7B = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    0LL,
    *(System_String_array ***)&costumeId,
    (System_String_array **)isLimitUp,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.playVoiceList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v12, v13, v14, v15, v16, v17);
  if ( voiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_29;
    v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v45.fields.currentCryptoKey = v22;
    *(_QWORD *)&v45.fields.fakeValue = v21;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
    voiceId = ServantVoiceMaster__getSvtVoiceId(v23, 0LL);
  }
  if ( v9 <= 0 )
  {
    Master_WarQuestSelectionMaster = this->fields.resUsrSvtData;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_29;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_19348088(
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
  Master_WarQuestSelectionMaster = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v25 = this->fields.resUsrSvtData;
  if ( !v25 )
    goto LABEL_29;
  v26 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v28;
  *(_QWORD *)&v46.fields.fakeValue = v27;
  Master_WarQuestSelectionMaster = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                            v46,
                                                            0LL);
  if ( !v26
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v26,
                                       (int32_t)Master_WarQuestSelectionMaster,
                                       v9,
                                       0LL),
        (Master_WarQuestSelectionMaster = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_WarQuestSelectionMaster = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_29:
    sub_B52A5C(Master_WarQuestSelectionMaster, v19);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_WarQuestSelectionMaster,
             2,
             voiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B52920(
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
    sub_B52920(
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


void __fastcall CombineResultEffectComponent__loadBoxGachaEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_42B2C73 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent_endloadEffect__);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&StringLiteral_5876/*"Effect/Combine"*/);
    byte_42B2C73 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5876/*"Effect/Combine"*/, v3, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__loadVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B2C7D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent_EndLoad__);
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_42B2C7D = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v5 = (SoundManager_o *)Instance;
    v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v5 )
      sub_B52A5C(v7, v8);
    SoundManager__LoadAudioAssetStorage(v5, asstName, v6, 1, 0LL);
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
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v12; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v14; // x8
  __int64 v15; // x9
  int32_t svtResultInfoWindow_high; // w21
  int32_t commandCardExceedResultWindow; // w20
  float FadeTime; // s0
  System_Collections_Generic_IEnumerable_TSource__o *currentFigureCollectList; // x0
  float v20; // s8
  int32_t v21; // w2
  ServantVoiceData_array *v22; // x3
  const MethodInfo *v23; // x6
  System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x4
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v28; // x22
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0

  v8 = this;
  if ( (byte_42B2C94 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent_EndPlay__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    this = (CombineResultEffectComponent_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B2C94 = 1;
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
      v12 = playVoiceList->m_Items[playCnt];
      if ( !v12 )
        goto LABEL_24;
      id = (System_Int32_array **)v12->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      v14 = v8->fields.playVoiceList;
      if ( !v14 )
        goto LABEL_24;
      v15 = v8->fields.playCnt;
      if ( (unsigned int)v15 < v14->max_length )
      {
        this = (CombineResultEffectComponent_o *)v14->m_Items[v15];
        if ( this )
        {
          svtResultInfoWindow_high = HIDWORD(this->fields.svtResultInfoWindow);
          commandCardExceedResultWindow = (int32_t)this->fields.commandCardExceedResultWindow;
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
          currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.currentFigureCollectList;
          if ( currentFigureCollectList )
          {
            v20 = FadeTime;
            if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                   currentFigureCollectList,
                   (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
                v20,
                v21,
                v22,
                afterFigureCollectList,
                commandCardExceedResultWindow,
                v23);
            }
          }
          asstName = v8->fields.asstName;
          vcName = v8->fields.vcName;
          volume = v8->fields.volume;
          v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v28, (Il2CppObject *)v8, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v29 = (System_Int32_array **)SoundManager__playVoice_23788136(asstName, vcName, volume, v28, 0LL);
          v8->fields.player = (struct SePlayer_o *)v29;
          sub_B52920((BattleServantConfConponent_o *)&v8->fields.player, v29, v30, v31, v32, v33, v34, v35);
          ++v8->fields.playCnt;
          return;
        }
LABEL_24:
        sub_B52A5C(this, method);
      }
    }
    v36 = sub_B52A88(this);
    sub_B52A28(v36, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v6; // x8
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v10; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v2 = this;
  if ( (byte_42B2C81 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_B52984(&StringLiteral_2765/*"BaseSvtNodeName"*/);
    byte_42B2C81 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_12:
    sub_B52A5C(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_2765/*"BaseSvtNodeName"*/,
    0,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setBaseSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v8; // x21
  float Value; // s0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  float v13; // s8
  int32_t v14; // w22
  struct UserServantEntity_o *v15; // x8
  ServantLimitImageMaster_o *v16; // x23
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v18; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v20; // x19
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2C8B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3922/*"CardScale"*/);
    sub_B52984(&StringLiteral_2764/*"BaseSvtCardNodeName"*/);
    byte_42B2C8B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2764/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3922/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v13 = Value;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v12;
  *(_QWORD *)&v25.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v25, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                            v15->fields.limitCount,
                            0LL);
  if ( !v16 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, (int32_t)fsm, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v14, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v8 )
    goto LABEL_25;
  v18 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24904472(
                            gameObject,
                            this->fields.baseUsrSvtData,
                            v18,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v20 = (UnityEngine_Component_o *)fsm,
        v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL),
        !v21)
    || (UnityEngine_Transform__set_localPosition(v21, *(UnityEngine_Vector3_o *)&v22, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v20, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B52A5C(fsm, *(_QWORD *)&changeNameType);
  }
  v26.fields.x = v13;
  v26.fields.y = v13;
  v26.fields.z = v13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v26, 0LL);
}


void __fastcall CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ServantVoiceData_array *CostumeSvtVoiceList; // x0
  __int64 v4; // x1
  ServantVoiceData_o *v5; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v12; // x5
  __int64 v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42B2C89 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_8575/*"LimitUpResSvtNodeName"*/);
    byte_42B2C89 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
    {
      v13 = sub_B52A88(CostumeSvtVoiceList);
      sub_B52A28(v13, 0LL);
    }
    v5 = CostumeSvtVoiceList->m_Items[0];
    if ( !v5 )
LABEL_14:
      sub_B52A5C(CostumeSvtVoiceList, v4);
    face = v5->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_14;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  CostumeSvtVoiceList = (ServantVoiceData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                    v14,
                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_14;
  v10 = (int)CostumeSvtVoiceList;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v10,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8575/*"LimitUpResSvtNodeName"*/,
    v12);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_B52A5C(0LL, method);
  UnityEngine_GameObject__SetActive(effect, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__setLimitUpBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v6; // x8
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v10; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v2 = this;
  if ( (byte_42B2C84 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_B52984(&StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/);
    byte_42B2C84 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_12:
    sub_B52A5C(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/,
    1,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setNameRevealSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  __int64 v8; // x1
  ServantVoiceData_o *v9; // x8
  int32_t face; // w22
  int32_t ImageLimitCount; // w2
  const MethodInfo *v12; // x5
  __int64 v13; // x0

  if ( (byte_42B2C8A & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/);
    byte_42B2C8A = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      v13 = sub_B52A88(LimitUpSvtVoiceList);
      sub_B52A28(v13, 0LL);
    }
    v9 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v9 )
      sub_B52A5C(LimitUpSvtVoiceList, v8);
    face = v9->fields.face;
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
    (System_String_o *)StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setNameRevealSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t changeNameType,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v10; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v12; // x23
  float Value; // s0
  float v14; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  struct UICharaGraphTexture_o **p_nameRevealCard; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Transform_o *v24; // x19
  int v25; // s0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2C8D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3922/*"CardScale"*/);
    sub_B52984(&StringLiteral_2764/*"BaseSvtCardNodeName"*/);
    byte_42B2C8D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2764/*"BaseSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_3922/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v12 )
    goto LABEL_16;
  v14 = Value;
  gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.nameRevealCard,
    (System_Int32_array **)TexturePrefab,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm
    || (v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL),
        !v24)
    || (UnityEngine_Transform__set_localPosition(v24, *(UnityEngine_Vector3_o *)&v25, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B52A5C(fsm, *(_QWORD *)&svtId);
  }
  v28.fields.x = v14;
  v28.fields.y = v14;
  v28.fields.z = v14;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultCostumeSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v8; // x21
  float Value; // s0
  float v10; // s8
  UserServantEntity_o *resUsrSvtData; // x20
  UnityEngine_GameObject_o *v12; // x21
  int32_t FigureImageLimitCount; // w0
  UnityEngine_Component_o *v14; // x19
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2C8E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3922/*"CardScale"*/);
    sub_B52984(&StringLiteral_11573/*"ResultSvtCardNodeName"*/);
    byte_42B2C8E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11573/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3922/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v8 )
    goto LABEL_16;
  v10 = Value;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_16;
  v12 = (UnityEngine_GameObject_o *)fsm;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(resUsrSvtData, 0, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24904472(
                            v12,
                            resUsrSvtData,
                            FigureImageLimitCount,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v14 = (UnityEngine_Component_o *)fsm,
        v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL),
        !v15)
    || (UnityEngine_Transform__set_localPosition(v15, *(UnityEngine_Vector3_o *)&v16, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v14, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(fsm, *(_QWORD *)&changeNameType);
  }
  v19.fields.x = v10;
  v19.fields.y = v10;
  v19.fields.z = v10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v19, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v14, 1.89, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v8; // x21
  float Value; // s0
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  float v13; // s8
  int32_t v14; // w22
  struct UserServantEntity_o *v15; // x8
  ServantLimitImageMaster_o *v16; // x23
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v18; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v20; // x19
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2C8C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3922/*"CardScale"*/);
    sub_B52984(&StringLiteral_11573/*"ResultSvtCardNodeName"*/);
    byte_42B2C8C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11573/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3922/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v13 = Value;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v12;
  *(_QWORD *)&v25.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v25, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.resUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                            v15->fields.limitCount,
                            0LL);
  if ( !v16 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, (int32_t)fsm, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v14, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v8 )
    goto LABEL_25;
  v18 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24904472(
                            gameObject,
                            this->fields.resUsrSvtData,
                            v18,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v20 = (UnityEngine_Component_o *)fsm,
        v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL),
        !v21)
    || (UnityEngine_Transform__set_localPosition(v21, *(UnityEngine_Vector3_o *)&v22, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v20, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B52A5C(fsm, *(_QWORD *)&changeNameType);
  }
  v26.fields.x = v13;
  v26.fields.y = v13;
  v26.fields.z = v13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v26, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v20, 1.89, 0LL);
}


void __fastcall CombineResultEffectComponent__setSkillResultInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Instance; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t kind; // w8
  SkillUpResultWindowComponent_o *v19; // x20
  UserServantEntity_o *v20; // x21
  int32_t v21; // w22
  int32_t v22; // w23
  System_Action_o *v23; // x24
  const MethodInfo *v24; // x2
  struct UserServantEntity_o *v25; // x8
  System_String_array *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_o *v34; // x0
  const MethodInfo *v35; // x2
  struct UserServantEntity_o *v36; // x8
  System_String_array *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_o *v45; // x0
  UserServantEntity_o *v46; // x20
  MethodInfo *v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct ServantVoiceData_array **p_playVoiceList; // x20
  struct ServantVoiceData_array **v54; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v60; // x20
  System_Action_o *v61; // x24
  struct UserServantEntity_o *v62; // x8
  int32_t targetIdOld; // w26
  int32_t targetLvOld; // w25
  __int64 v65; // x27
  __int64 v66; // x28
  int32_t v67; // w6
  bool v68; // w8
  __int64 v69; // x20
  __int64 v70; // x20
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_int__o *v72; // x20
  __int64 v73; // x28
  int32_t v74; // w22
  struct UserServantEntity_o *v75; // x8
  __int64 v76; // x23
  __int64 v77; // x24
  int v78; // w9
  signed int v79; // w10
  __int64 v80; // x8
  __int64 v81; // x23
  struct UserServantEntity_o *v82; // x8
  __int64 v83; // x23
  __int64 v84; // x24
  int32_t v85; // w0
  UserServantEntity_o *v86; // x8
  UserServantCollectionMaster_o *v87; // x23
  struct UserServantEntity_o *v88; // x8
  int64_t v89; // x24
  __int64 v90; // x25
  __int64 v91; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v93; // x23
  struct UserServantEntity_o *v94; // x8
  __int64 v95; // x23
  __int64 v96; // x24
  _BOOL8 v97; // x0
  __int64 v98; // x1
  Il2CppObject *current; // x21
  int64_t UserId; // x0
  __int64 v101; // x1
  struct UserServantEntity_o *v102; // x8
  int64_t v103; // x23
  int32_t v104; // w24
  __int64 v105; // x25
  __int64 v106; // x26
  int32_t v107; // w3
  bool isRelease; // w28
  CommonUI_o *v109; // x20
  AvalonSceneManager_c *v110; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v112; // x0
  __int64 *v113; // x8
  struct ServantVoiceData_array *v114; // x8
  struct UserServantEntity_o *v115; // x8
  __int64 v116; // x20
  __int64 v117; // x21
  struct UserServantEntity_o *v118; // x8
  int v119; // w21
  int v120; // w20
  struct UserServantEntity_o *v121; // x8
  __int64 v122; // x22
  __int64 v123; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x21
  int32_t v125; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v127; // w8
  SkillUpResultWindowComponent_o *v128; // x20
  UserServantEntity_o *v129; // x21
  System_Action_o *v130; // x22
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct UserServantEntity_o *v138; // x8
  __int64 v139; // x27
  __int64 v140; // x28
  SkillUpResultWindowComponent_o *v141; // x20
  UserServantEntity_o *v142; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v144; // x23
  struct UserServantEntity_o **p_baseUsrSvtData; // x22
  struct UserServantEntity_o *v146; // x8
  __int128 v147; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v148; // x20
  struct UserServantEntity_o *v149; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  struct SvtCombineResultWindowComponent_o *v156; // x20
  struct UserServantEntity_o *v157; // x21
  int32_t v158; // w22
  System_Action_o *v159; // x23
  SvtCombineResultWindowComponent_o *v160; // x0
  UserServantEntity_o *v161; // x1
  int32_t v162; // w2
  System_Action_o *v163; // x3
  System_Action_o *v164; // x4
  CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v166; // x21
  QuestEntity_o *v167; // x22
  ServantEntity_o *v168; // x21
  BalanceConfig_c *v169; // x8
  System_String_o *v170; // x22
  Il2CppObject *Name; // x0
  System_String_o *v172; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v174; // x21
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v176; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v177; // x21
  struct UserServantEntity_o *v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v186; // w21
  const MethodInfo *v187; // x1
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v195; // x3
  __int64 v196; // x22
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **callbackFunc; // x1
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  __int64 v216; // x23
  System_Action_o *v217; // x24
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  Il2CppObject *v224; // x21
  CombineResultEffectComponent_ClickDelegate_o *v225; // x22
  System_String_array **v226; // x2
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v233; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v235; // x23
  System_Action_o *v236; // x24
  System_String_o *v237; // x23
  Il2CppObject *v238; // x22
  Il2CppObject *v239; // x0
  AvalonSceneManager_c *v240; // x8
  System_Action_o *v241; // x21
  __int64 v242; // x0
  __int64 v243; // x0
  SkillUpResultWindowComponent_o *v244; // x21
  int32_t v245; // w22
  int32_t v246; // w23
  System_Action_o *v247; // x24
  struct UserServantEntity_o *v248; // x8
  int32_t v249; // w25
  int32_t v250; // w19
  __int64 v251; // x26
  __int64 v252; // x27
  int32_t v253; // w26
  char isDispLv; // [xsp+10h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v255; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v256; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v257; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v258; // [xsp+80h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int32_t v260; // [xsp+B8h] [xbp-58h]
  int32_t lv; // [xsp+BCh] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v262; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v265; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v266; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v267; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v268; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v269; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v270; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v271; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v272; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v273; // 0:x0.16

  if ( (byte_42B2C91 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent_EndDisp__);
    sub_B52984(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__);
    sub_B52984(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__);
    sub_B52984(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__);
    sub_B52984(&Method_CombineResultEffectComponent_clickNext__);
    sub_B52984(&CombineResultFormManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__);
    sub_B52984(&CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo);
    sub_B52984(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__);
    sub_B52984(&CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo);
    sub_B52984(&StringLiteral_10972/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/);
    sub_B52984(&StringLiteral_10973/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2C91 = 1;
  }
  lv = 0;
  entity = 0LL;
  memset(&v258, 0, sizeof(v258));
  v3 = sub_B52A54(CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass143_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass143_0_o *)v3,
    0LL);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 24) = this;
    sub_B52920((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
          p_baseUsrSvtData = &this->fields.baseUsrSvtData;
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            break;
          v176 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v177 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          *(_OWORD *)&v257.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v257.fields.fakeValue = v176;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v256 = v257;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v256, 0LL);
          if ( !v177 )
            break;
          v178 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v177,
                   Instance,
                   (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          this->fields.resUsrSvtData = v178;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
            (System_Int32_array **)v178,
            v179,
            v180,
            v181,
            v182,
            v183,
            v184);
        }
        if ( !*p_baseUsrSvtData )
          break;
        lv = (*p_baseUsrSvtData)->fields.lv;
        resUsrSvtData = this->fields.resUsrSvtData;
        if ( !resUsrSvtData )
          break;
        v186 = resUsrSvtData->fields.lv;
        if ( !System_Int32__Equals_39386936((int32_t)&lv, v186, 0LL) )
        {
          if ( this->fields.asstName )
          {
            if ( this->fields.svtVoiceEntity )
            {
              playVoiceList = this->fields.playVoiceList;
              if ( playVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
                CombineResultEffectComponent__playVoice(this, v187);
              }
            }
          }
        }
        *(_QWORD *)(v3 + 16) = 0LL;
        sub_B52920((BattleServantConfConponent_o *)(v3 + 16), 0LL, v188, v189, v190, v191, v192, v193);
        if ( CombineResultEffectComponent__CheckCombineLimit(this, lv, v186, v195) )
        {
          v196 = sub_B52A54(CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo);
          CombineResultEffectComponent___c__DisplayClass143_1___ctor(
            (CombineResultEffectComponent___c__DisplayClass143_1_o *)v196,
            0LL);
          if ( !v196 )
            break;
          *(_QWORD *)(v196 + 24) = v3;
          sub_B52920(
            (BattleServantConfConponent_o *)(v196 + 24),
            (System_Int32_array **)v3,
            v197,
            v198,
            v199,
            v200,
            v201,
            v202);
          callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
          *(_QWORD *)(v196 + 16) = callbackFunc;
          sub_B52920((BattleServantConfConponent_o *)(v196 + 16), callbackFunc, v204, v205, v206, v207, v208, v209);
          this->fields.callbackFunc = 0LL;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            0LL,
            v210,
            v211,
            v212,
            v213,
            v214,
            v215);
          v216 = *(_QWORD *)(v196 + 24);
          v217 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v217,
            (Il2CppObject *)v196,
            Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__,
            0LL);
          if ( !v216 )
            break;
          *(_QWORD *)(v216 + 16) = v217;
          sub_B52920(
            (BattleServantConfConponent_o *)(v216 + 16),
            (System_Int32_array **)v217,
            v218,
            v219,
            v220,
            v221,
            v222,
            v223);
          v224 = *(Il2CppObject **)(v196 + 24);
          v225 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B52A54(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            v225,
            v224,
            Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__,
            0LL);
          this->fields.callbackFunc = v225;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)v225,
            v226,
            v227,
            v228,
            v229,
            v230,
            v231);
        }
        if ( !this->fields.combineStatusDisp )
        {
LABEL_211:
          CombineResultEffectComponent__EndDisp(this, v5);
          return;
        }
        svtResultInfoWindow = this->fields.svtResultInfoWindow;
        v233 = this->fields.resUsrSvtData;
        baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
        v235 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v235, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v236 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v236, (Il2CppObject *)this, Method_CombineResultEffectComponent_clickNext__, 0LL);
        if ( !svtResultInfoWindow )
          break;
        v160 = svtResultInfoWindow;
        v161 = v233;
        v162 = baseUsrSvtCollictionLv;
        v163 = v235;
        v164 = v236;
LABEL_210:
        SvtCombineResultWindowComponent__setAfterSvtResultState(v160, v161, v162, v163, v164, 0LL);
        return;
      case 1:
      case 10:
      case 19:
      case 26:
        Instance = sub_B5299C(string___TypeInfo, 1LL);
        v25 = this->fields.baseUsrSvtData;
        if ( !v25 )
          break;
        v26 = (System_String_array *)Instance;
        *(_QWORD *)&v262.fields.currentCryptoKey = &v25->fields.svtId;
        *(_QWORD *)&v262.fields.fakeValue = 0LL;
        Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v262, v24);
        if ( !v26 )
          break;
        v33 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B52A44(Instance, v26->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_229;
        }
        if ( !v26->max_length )
          goto LABEL_226;
        v26->m_Items[0] = (System_String_o *)v33;
        sub_B52920((BattleServantConfConponent_o *)v26->m_Items, v33, v27, v28, v29, v30, v31, v32);
        v34 = System_String__Concat_44648440(v26, 0LL);
        if ( UnityEngine_PlayerPrefs__GetInt_35644340(v34, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
          goto LABEL_23;
        Instance = sub_B5299C(string___TypeInfo, 1LL);
        v36 = this->fields.baseUsrSvtData;
        if ( !v36 )
          break;
        v37 = (System_String_array *)Instance;
        *(_QWORD *)&v263.fields.currentCryptoKey = &v36->fields.svtId;
        *(_QWORD *)&v263.fields.fakeValue = 0LL;
        Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v263, v35);
        if ( !v37 )
          break;
        v44 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B52A44(Instance, v37->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_229:
            v243 = sub_B52A7C(Instance);
            sub_B52A28(v243, 0LL);
          }
        }
        if ( !v37->max_length )
          goto LABEL_226;
        v37->m_Items[0] = (System_String_o *)v44;
        sub_B52920((BattleServantConfConponent_o *)v37->m_Items, v44, v38, v39, v40, v41, v42, v43);
        v45 = System_String__Concat_44648440(v37, 0LL);
        UnityEngine_PlayerPrefs__SetInt(v45, 0, 0LL);
        v46 = this->fields.baseUsrSvtData;
        if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        }
        CombineResultFormManager__ResetVoiceList(v46, 0LL);
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
          v54 = &this->fields.playVoiceList;
          LimitUpSvtVoiceList = 0LL;
        }
        else
        {
          LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v47);
          this->fields.playVoiceList = LimitUpSvtVoiceList;
          v54 = &this->fields.playVoiceList;
        }
        sub_B52920(
          (BattleServantConfConponent_o *)v54,
          (System_Int32_array **)LimitUpSvtVoiceList,
          (System_String_array **)v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        v114 = *p_playVoiceList;
        if ( *p_playVoiceList )
        {
LABEL_130:
          if ( this->fields.asstName )
          {
            this->fields.maxPlayCnt = *(_QWORD *)&v114->max_length;
            CombineResultEffectComponent__playVoice(this, v5);
          }
          return;
        }
        v115 = this->fields.baseUsrSvtData;
        if ( !v115 )
          break;
        v117 = *(_QWORD *)&v115->fields.limitCount.fields.currentCryptoKey;
        v116 = *(_QWORD *)&v115->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v270.fields.currentCryptoKey = v117;
        *(_QWORD *)&v270.fields.fakeValue = v116;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v270, 0LL);
        v118 = this->fields.baseUsrSvtData;
        v119 = Instance == 2;
        if ( !v118 )
          break;
        v120 = Instance;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v118->fields.limitCount, 0LL) != 3 )
          goto LABEL_124;
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        v121 = this->fields.baseUsrSvtData;
        if ( v121 )
        {
          v123 = *(_QWORD *)&v121->fields.svtId.fields.currentCryptoKey;
          v122 = *(_QWORD *)&v121->fields.svtId.fields.fakeValue;
          v124 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1016LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v271.fields.currentCryptoKey = v123;
          *(_QWORD *)&v271.fields.fakeValue = v122;
          v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v271, 0LL);
          v119 = (v120 == 2) | System_Linq_Enumerable__Contains_int_(
                                 v124,
                                 v125,
                                 (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_124:
          isLimitUpSuppression = this->fields.isLimitUpSuppression;
          if ( this->fields.isLimitUpSuppression )
          {
            v127 = this->fields.kind;
            isLimitUpSuppression = v127 != 10 && v127 != 26;
          }
          if ( (isLimitUpSuppression & v119) != 0 )
          {
            CombineResultEffectComponent__OpenLimitCountSealDialog(this, v5);
            return;
          }
          limitUpResultCheck = this->fields.limitUpResultCheck;
          v174 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v174,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__,
            0LL);
          if ( limitUpResultCheck )
          {
            LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v174, 1, 0LL);
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
        v60 = SkillIdList;
        v61 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v61, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v62 = this->fields.baseUsrSvtData;
        if ( !v62 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v66 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
        v65 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v264.fields.currentCryptoKey = v66;
        *(_QWORD *)&v264.fields.fakeValue = v65;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v264, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v67 = Instance;
        v68 = this->fields.kind == 3;
        isDispLv = 0;
        goto LABEL_142;
      case 4:
      case 5:
      case 8:
      case 18:
      case 27:
        v19 = this->fields.skillResultInfoWindow;
        v20 = this->fields.baseUsrSvtData;
        v21 = this->fields.targetId;
        v22 = this->fields.targetLv;
        v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v23, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v19 )
          break;
        SkillUpResultWindowComponent__OpenNpUpResultInfo_23773808(
          v19,
          v20,
          v21,
          v22,
          v23,
          this->fields.targetIdOld,
          this->fields.targetLvOld,
          this->fields.kind,
          0LL);
        return;
      case 6:
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v146 = this->fields.baseUsrSvtData;
        if ( !v146 )
          break;
        v147 = *(_OWORD *)&v146->fields.id.fields.fakeValue;
        v148 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
        *(_OWORD *)&v257.fields.currentCryptoKey = *(_OWORD *)&v146->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v257.fields.fakeValue = v147;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v255 = v257;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v255, 0LL);
        if ( !v148 )
          break;
        v149 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 v148,
                 Instance,
                 (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.resUsrSvtData = v149;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
          (System_Int32_array **)v149,
          v150,
          v151,
          v152,
          v153,
          v154,
          v155);
        v156 = this->fields.svtResultInfoWindow;
        v157 = this->fields.resUsrSvtData;
        v158 = this->fields.baseUsrSvtCollictionLv;
        v159 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v159, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v156 )
          break;
        v160 = v156;
        v161 = v157;
        v162 = v158;
        v163 = v159;
        v164 = 0LL;
        goto LABEL_210;
      case 7:
      case 21:
        v69 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v69 + 306) & 1) == 0 )
          sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v70 = **(_QWORD **)(v69 + 192);
        if ( (*(_BYTE *)(v70 + 306) & 1) == 0 )
          sub_AEB684(v70);
        Instance = **(_QWORD **)(v70 + 184);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        v72 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v72,
          (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
        v73 = 0LL;
        v74 = 1;
LABEL_59:
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v74 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v75 = this->fields.baseUsrSvtData;
          if ( v75 )
          {
            v77 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
            v76 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v265.fields.currentCryptoKey = v77;
            *(_QWORD *)&v265.fields.fakeValue = v76;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v265, 0LL);
            if ( MasterData_WarQuestSelectionMaster )
            {
              Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                    MasterData_WarQuestSelectionMaster,
                                    Instance,
                                    v74,
                                    0LL);
              if ( Instance )
              {
                v78 = *(_DWORD *)(Instance + 24);
                if ( v78 < 1 )
                {
LABEL_51:
                  v82 = this->fields.baseUsrSvtData;
                  if ( !v82 )
                    break;
                  v84 = *(_QWORD *)&v82->fields.svtId.fields.currentCryptoKey;
                  v83 = *(_QWORD *)&v82->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v266.fields.currentCryptoKey = v84;
                  *(_QWORD *)&v266.fields.fakeValue = v83;
                  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v266, 0LL);
                  Instance = (__int64)ServantSkillMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v85,
                                        v74,
                                        1,
                                        0LL);
                  v80 = Instance;
                  v81 = v73;
                  if ( Instance )
                  {
LABEL_56:
                    if ( !v72 )
                      break;
                    System_Collections_Generic_List_int___Add(
                      v72,
                      *(_DWORD *)(v80 + 28),
                      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                    v73 = v81;
                  }
                  ++v74;
                  goto LABEL_59;
                }
                v79 = 0;
                while ( 1 )
                {
                  if ( v79 >= (unsigned int)v78 )
                  {
LABEL_226:
                    v242 = sub_B52A88(Instance);
                    sub_B52A28(v242, 0LL);
                  }
                  v80 = *(_QWORD *)(Instance + 8LL * v79 + 32);
                  if ( !v80 )
                    break;
                  v81 = *(_QWORD *)(Instance + 8LL * v79 + 32);
                  if ( *(_DWORD *)(v80 + 28) == this->fields.targetId )
                    goto LABEL_56;
                  if ( ++v79 >= v78 )
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
            v86 = this->fields.baseUsrSvtData;
            v260 = Instance;
            if ( !v86 )
              break;
            Instance = UserServantEntity__IsHeroine(v86, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              v87 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              v88 = this->fields.baseUsrSvtData;
              if ( !v88 )
                break;
              v89 = Instance;
              v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
              v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v267.fields.currentCryptoKey = v91;
              *(_QWORD *)&v267.fields.fakeValue = v90;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v267, 0LL);
              if ( !v87 )
                break;
              Instance = UserServantCollectionMaster__TryGetEntity(v87, &entity, v89, Instance, 0LL);
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
                  v93 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v93,
                               (const MethodInfo_1B50578 *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v93, 0LL);
                    v260 = Instance;
                  }
                }
              }
            }
            v94 = this->fields.baseUsrSvtData;
            if ( !v94 )
              break;
            v96 = *(_QWORD *)&v94->fields.svtId.fields.currentCryptoKey;
            v95 = *(_QWORD *)&v94->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v268.fields.currentCryptoKey = v96;
            *(_QWORD *)&v268.fields.fakeValue = v95;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v268, 0LL);
            if ( !v73 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  *(_DWORD *)(v73 + 20),
                                  this->fields.targetIdOld,
                                  0LL);
            if ( !Instance )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v257,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            v258.fields.current = (Il2CppObject *)v257.fields.fakeValue;
            *(_OWORD *)&v258.fields.list = *(_OWORD *)&v257.fields.currentCryptoKey;
            while ( 1 )
            {
              v97 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v258,
                      (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v97 )
                break;
              current = v258.fields.current;
              if ( !v258.fields.current )
                sub_B52A5C(v97, v98);
              if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v258.fields.current, 0, 0LL) )
              {
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                UserId = NetworkManager__get_UserId(0LL);
                v102 = this->fields.baseUsrSvtData;
                if ( !v102 )
                  sub_B52A5C(UserId, v101);
                v103 = UserId;
                v104 = v102->fields.lv;
                v106 = *(_QWORD *)&v102->fields.limitCount.fields.currentCryptoKey;
                v105 = *(_QWORD *)&v102->fields.limitCount.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v269.fields.currentCryptoKey = v106;
                *(_QWORD *)&v269.fields.fakeValue = v105;
                v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v269, 0LL);
                if ( ServantSkillEntity__isUse(
                       (ServantSkillEntity_o *)current,
                       v103,
                       v104,
                       v107,
                       v260,
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
              &v258,
              (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
          }
          else
          {
            isRelease = 0;
          }
          v244 = this->fields.skillResultInfoWindow;
          v245 = this->fields.targetId;
          v246 = this->fields.targetLv;
          v247 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v247, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
          v248 = this->fields.baseUsrSvtData;
          if ( v248 )
          {
            v249 = this->fields.targetIdOld;
            v250 = this->fields.targetLvOld;
            v252 = *(_QWORD *)&v248->fields.svtId.fields.currentCryptoKey;
            v251 = *(_QWORD *)&v248->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v273.fields.currentCryptoKey = v252;
            *(_QWORD *)&v273.fields.fakeValue = v251;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v273, 0LL);
            if ( v72 )
            {
              v253 = Instance;
              Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                                    v72,
                                    (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v244 )
              {
                SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                  v244,
                  v245,
                  v246,
                  v247,
                  v249,
                  v250,
                  v253,
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
        v141 = this->fields.skillResultInfoWindow;
        v142 = this->fields.baseUsrSvtData;
        oldFriendShipRank = this->fields.oldFriendShipRank;
        v144 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v144, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v141 )
          break;
        SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v141, v142, oldFriendShipRank, v144, 0LL);
        return;
      case 11:
        v128 = this->fields.skillResultInfoWindow;
        v129 = this->fields.baseUsrSvtData;
        v130 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v130, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v128 )
          break;
        SkillUpResultWindowComponent__OpenPowerUpResultInfo(v128, v129, v130, 0LL);
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
        CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v5);
        this->fields.playVoiceList = CostumeSvtVoiceList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.playVoiceList,
          (System_Int32_array **)CostumeSvtVoiceList,
          v132,
          v133,
          v134,
          v135,
          v136,
          v137);
        v114 = this->fields.playVoiceList;
        if ( v114 )
          goto LABEL_130;
        goto LABEL_211;
      case 16:
      case 17:
        if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        {
          v109 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v110 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v110 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v110->static_fields->DEFAULT_FADE_TIME;
          v112 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          v113 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__;
        }
        else
        {
          if ( kind == 16 )
          {
            messageCallback = this->fields.messageCallback;
            if ( messageCallback )
            {
              this->fields.messageCallback = 0LL;
              sub_B52920(
                (BattleServantConfConponent_o *)&this->fields.messageCallback,
                0LL,
                v12,
                v13,
                v14,
                v15,
                v16,
                v17);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              v166 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_42AC2B5 )
              {
                sub_B52984(&TerminalPramsManager_TypeInfo);
                byte_42AC2B5 = 1;
              }
              Instance = (__int64)TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (__int64)TerminalPramsManager_TypeInfo;
              }
              if ( !v166 )
                break;
              v167 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v166,
                                        *(_DWORD *)(*(_QWORD *)(Instance + 184) + 16LL),
                                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !Instance )
                break;
              v168 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.targetSvtId,
                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v169 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v169 = BalanceConfig_TypeInfo;
              }
              if ( v169->static_fields->CloseSecretTreasureDeviceQuestClear )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10973/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
                if ( !v168 )
                  break;
                v170 = (System_String_o *)Instance;
                Name = (Il2CppObject *)ServantEntity__getName(v168, -1, -1, 0LL);
                v172 = System_String__Format(v170, Name, 0LL);
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
                if ( !v167 )
                  break;
                v237 = (System_String_o *)Instance;
                Instance = (__int64)QuestEntity__getQuestName(v167, 0LL);
                if ( !v168 )
                  break;
                v238 = (Il2CppObject *)Instance;
                v239 = (Il2CppObject *)ServantEntity__getName(v168, -1, -1, 0LL);
                v172 = System_String__Format_44563852(v237, v238, v239, 0LL);
              }
              CombineResultEffectComponent_MessageDelegate__Invoke(messageCallback, v172, 0LL);
            }
          }
          if ( !this->fields.callbackFunc )
            return;
          v109 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v240 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v240 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v240->static_fields->DEFAULT_FADE_TIME;
          v112 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          v113 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__;
        }
        v241 = v112;
        System_Action___ctor(v112, (Il2CppObject *)this, *v113, 0LL);
        if ( v109 )
        {
          CommonUI__maskFadeout(v109, 1, DEFAULT_FADE_TIME, v241, 0LL);
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
        FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_30050968(
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
        v60 = *(System_Int32_array **)(Instance + 16);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v61 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v61, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v138 = this->fields.baseUsrSvtData;
        if ( !v138 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v140 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
        v139 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v272.fields.currentCryptoKey = v140;
        *(_QWORD *)&v272.fields.fakeValue = v139;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v272, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v67 = Instance;
        v68 = this->fields.targetLvOld == 0;
        isDispLv = 1;
LABEL_142:
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          targetId,
          targetLv,
          v61,
          targetIdOld,
          targetLvOld,
          v67,
          v60,
          v68,
          1,
          isDispLv,
          0LL);
        return;
      default:
        return;
    }
  }
  sub_B52A5C(Instance, v5);
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

  if ( (byte_42B2C9D & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2C9D = 1;
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
    sub_B52920(p_player, 0LL, v6, v7, v8, v9, v10, v11);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD700 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD700 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_ClickDelegate__Invoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CombineResultEffectComponent_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CombineResultEffectComponent_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CombineResultEffectComponent_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CombineResultEffectComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_42AD701 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
    byte_42AD701 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v3;
  sub_B52920(&this->fields);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v4;
  sub_B52920(&this->fields.afterSkillList);
}


void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x0
  __int64 v9; // x1

  if ( (byte_42AD703 & 1) == 0 )
  {
    sub_B52984(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_42AD703 = 1;
  }
  v7 = sub_B52A54(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id, *(_DWORD *)(v7 + 20) = lv, (afterSkillList = this->fields.afterSkillList) == 0LL) )
  {
    sub_B52A5C(afterSkillList, v9);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x0
  __int64 v9; // x1

  if ( (byte_42AD702 & 1) == 0 )
  {
    sub_B52984(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_42AD702 = 1;
  }
  v7 = sub_B52A54(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id, *(_DWORD *)(v7 + 20) = lv, (beforeSkillList = this->fields.beforeSkillList) == 0LL) )
  {
    sub_B52A5C(beforeSkillList, v9);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v4; // x20
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x20

  v4 = this;
  if ( (byte_42AD705 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B52984(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_42AD705 = 1;
  }
  afterSkillList = v4->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B52A5C(this, *(_QWORD *)&index);
  if ( afterSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  return afterSkillList->fields._items->m_Items[index];
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_42AD706 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B52984(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__);
    byte_42AD706 = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B52A5C(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v4; // x20
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x20

  v4 = this;
  if ( (byte_42AD704 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B52984(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_42AD704 = 1;
  }
  beforeSkillList = v4->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_B52A5C(this, *(_QWORD *)&index);
  if ( beforeSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
  sub_B52920(p_method);
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
  return (System_IAsyncResult_o *)sub_B52928(this, v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__Invoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CombineResultEffectComponent_MessageDelegate_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  CombineResultEffectComponent_MessageDelegate_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  CombineResultEffectComponent_MessageDelegate_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CombineResultEffectComponent_MessageDelegate_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v30->fields.extra_arg, message, method, v3);
      v34 = sub_B529B4(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B529AC(v31);
            v45 = sub_B52DB0(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = message->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AEB880(message, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B52A34(v17, v31);
              (*v27)(message, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = message->klass;
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AEB880(message, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(message, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(message, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B529AC(v31);
          v37 = sub_B52DB0(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AEB880(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B52A34(v25, v31);
            (*v29)(v32, message, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AEB880(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, message, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                message,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, message, v31);
    }
  }
}


void __fastcall CombineResultEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD6FA & 1) == 0 )
  {
    sub_B52984(&CombineResultEffectComponent___c_TypeInfo);
    byte_42AD6FA = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return System_Int32__CompareTo_39386776((_DWORD)a + 24, b->fields.priority, 0LL);
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
  CombineResultEffectComponent___c__DisplayClass143_1_o *v2; // x19
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v6; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v7; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v8; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v9; // x8
  struct CombineResultEffectComponent_o *v10; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  __int64 _9__4; // x22
  CommonUI_o *v13; // x20
  __int64 v14; // x9
  const MethodInfo *v15; // x2

  v2 = this;
  if ( (byte_42AD6FB & 1) == 0 )
  {
    sub_B52984(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)sub_B52984(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__);
    byte_42AD6FB = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
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
  UnityEngine_Object__DestroyImmediate_35617168(effect, 0LL);
  v6 = v2->fields.CS___8__locals1;
  if ( !v6 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  this[4].klass = 0LL;
  sub_B52920(&this[4]);
  v7 = v2->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v7->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0LL);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  if ( this[4].fields.__9__4 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = v2->fields.CS___8__locals1;
    if ( v9 )
    {
      v10 = v9->fields.__4__this;
      if ( v10 )
      {
        baseUsrSvtData = v10->fields.baseUsrSvtData;
        _9__4 = (__int64)v2->fields.__9__4;
        v13 = (CommonUI_o *)this;
        if ( !_9__4 )
        {
          _9__4 = sub_B52A54(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          v14 = *(_QWORD *)Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)(_9__4 + 40) = Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)(_9__4 + 16) = v14;
          *(_QWORD *)(_9__4 + 32) = v2;
          sub_B52920(_9__4 + 32);
          v2->fields.__9__4 = (struct CombineResultEffectComponent_ClickDelegate_o *)_9__4;
          sub_B52920(&v2->fields.__9__4);
        }
        if ( v13 )
        {
          CommonUI__OpenCombineLimit(v13, baseUsrSvtData, (CombineResultEffectComponent_ClickDelegate_o *)_9__4, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B52A5C(this, method);
  }
  if ( this[9].klass )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v2->fields.callback;
    if ( !this )
      goto LABEL_25;
    CombineResultEffectComponent_ClickDelegate__Invoke((CombineResultEffectComponent_ClickDelegate_o *)this, 1, v15);
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
    sub_B52A5C(this, decide);
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
  Il2CppObject *v3; // x19
  _BYTE *monitor; // x8
  NetworkManager_ResultCallbackFunc_o *klass; // x20
  _DWORD *v6; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_42AD6FC & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_CardServantFlagRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)sub_B52984(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__);
    byte_42AD6FC = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_12;
  monitor[316] = 0;
  klass = (NetworkManager_ResultCallbackFunc_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      klass,
      v3,
      Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    sub_B52920(&v3[2]);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    klass,
                                                                    (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v6 = v3[1].monitor;
  if ( !v6 || !this )
LABEL_12:
    sub_B52A5C(this, decide);
  CardServantFlagRequest__beginRequest((CardServantFlagRequest_o *)this, v6[77], v6[78], 0LL);
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
  CombineResultEffectComponent___c__DisplayClass165_0_o *v2; // x19
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  int32_t limitCount; // w20
  int32_t v9; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v2 = this;
  if ( (byte_42AD6FD & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass165_0_o *)sub_B52984(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_42AD6FD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  resUsrSvtData = _4__this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v6 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  limitCount = v2->fields.limitCount;
  v9 = v7;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v9, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass165_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_B52A5C(this, method);
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
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_42AD6FE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__);
    byte_42AD6FE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v5);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v6; // x20

  if ( (byte_42AD6FF & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD6FF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
LABEL_11:
    sub_B52A5C(Instance, v4);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}