void __fastcall CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
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
  struct System_Int32_array *v13; // x0
  struct System_String_array *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v27; // x20
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_421105A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v4);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v7);
    sub_B0D8A4(&string___TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_16846/*"bit_result02"*/, v9);
    sub_B0D8A4(&StringLiteral_16847/*"bit_result03"*/, v10);
    sub_B0D8A4(&StringLiteral_16848/*"bit_result04"*/, v11);
    sub_B0D8A4(&StringLiteral_16845/*"bit_result01"*/, v12);
    byte_421105A = 1;
  }
  v13 = (struct System_Int32_array *)sub_B0D8BC(string___TypeInfo, 3LL);
  if ( !v13 )
LABEL_24:
    sub_B0D97C(v13);
  v14 = (struct System_String_array *)v13;
  v13 = (struct System_Int32_array *)StringLiteral_16845/*"bit_result01"*/;
  if ( StringLiteral_16845/*"bit_result01"*/ )
  {
    v13 = (struct System_Int32_array *)sub_B0D964(StringLiteral_16845/*"bit_result01"*/, v14->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_25;
    v15 = StringLiteral_16845/*"bit_result01"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v14->max_length )
    goto LABEL_23;
  v14->m_Items[0] = (System_String_o *)v15;
  sub_B0D840(v14->m_Items, v15);
  v13 = (struct System_Int32_array *)StringLiteral_16846/*"bit_result02"*/;
  if ( StringLiteral_16846/*"bit_result02"*/ )
  {
    v13 = (struct System_Int32_array *)sub_B0D964(StringLiteral_16846/*"bit_result02"*/, v14->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_25;
    v16 = StringLiteral_16846/*"bit_result02"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_23;
  v14->m_Items[1] = (System_String_o *)v16;
  sub_B0D840(&v14->m_Items[1], v16);
  v13 = (struct System_Int32_array *)StringLiteral_16847/*"bit_result03"*/;
  if ( !StringLiteral_16847/*"bit_result03"*/ )
  {
    v17 = 0LL;
    goto LABEL_18;
  }
  v13 = (struct System_Int32_array *)sub_B0D964(StringLiteral_16847/*"bit_result03"*/, v14->obj.klass->_1.element_class);
  if ( !v13 )
  {
LABEL_25:
    v29 = sub_B0D99C();
    sub_B0D948(v29, 0LL);
  }
  v17 = StringLiteral_16847/*"bit_result03"*/;
LABEL_18:
  if ( v14->max_length <= 2 )
    goto LABEL_23;
  v14->m_Items[2] = (System_String_o *)v17;
  sub_B0D840(&v14->m_Items[2], v17);
  this->fields.startAniName = v14;
  sub_B0D840(&this->fields.startAniName, v14);
  v18 = StringLiteral_16848/*"bit_result04"*/;
  this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_16848/*"bit_result04"*/;
  sub_B0D840(&this->fields.LimitAnimName, v18);
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_31FFF10;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v21;
  sub_B0D840(&this->fields.currentFigureCollectList, v21);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v24;
  sub_B0D840(&this->fields.afterFigureCollectList, v24);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v13 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v13 )
    goto LABEL_24;
  if ( !v13->max_length )
  {
LABEL_23:
    v28 = sub_B0D9A8(v13);
    sub_B0D948(v28, 0LL);
  }
  v13->m_Items[1] = 100;
  this->fields.ChangeCardEffectLvList = v13;
  sub_B0D840(&this->fields.ChangeCardEffectLvList, v13);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  this->fields.autoFadeout = 1;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  v27 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B0D974(
                                                                                                System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo,
                                                                                                v25,
                                                                                                v26);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v27,
    (const MethodInfo_2C77374 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v27 )
    goto LABEL_24;
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v27,
    1,
    (const MethodInfo_2C78550 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v27,
    10,
    (const MethodInfo_2C78550 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v27,
    26,
    (const MethodInfo_2C78550 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v27,
    19,
    (const MethodInfo_2C78550 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v27,
    24,
    (const MethodInfo_2C78550 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v27;
  sub_B0D840(&this->fields.limitUpKinds, v27);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *v6; // x1

  if ( (byte_421100C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v3);
    byte_421100C = 1;
  }
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = Component_WebViewObject;
  sub_B0D840(&this->fields.fsm, Component_WebViewObject);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  v6 = UnityEngine_Component__GetComponent_WebViewObject_(
         transform,
         (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v6;
  sub_B0D840(&this->fields.combineResStatus, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineResultEffectComponent__CheckCombineLimit(
        CombineResultEffectComponent_o *this,
        int32_t oldLv,
        int32_t currentLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *Instance; // x0
  ServantLvDetailMaster_o *v9; // x22
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v12; // w8

  if ( (byte_4211020 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, *(_QWORD *)&oldLv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4211020 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    sub_B0D97C(Instance);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4211057 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    byte_4211057 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return ServantCommentMaster__IsOpenImageLimitProfile(Master_WarQuestSelectionMaster, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *svtResultInfoWindow; // x0

  if ( (byte_4211054 & 1) == 0 )
  {
    sub_B0D8A4(&System_GC_TypeInfo, method);
    byte_4211054 = 1;
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
  System_GC__Collect_43098652(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_18:
    sub_B0D97C(svtResultInfoWindow);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 0, 0LL);
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
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4211056 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_B0D8A4(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__, v4);
    byte_4211056 = 1;
  }
  v5 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B0D8AC();
  v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_B0D97C(v11);
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v10, 0LL);
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
  DataManager_o *Instance; // x0
  DataManager_o *v21; // x24
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x25
  SvtMultiPortraitMaster_o *v23; // x24
  int32_t v24; // w20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v25; // x24
  _BOOL8 v26; // x0
  SvtMultiPortraitEntity_o *current; // x24
  int klass; // w8
  int32_t v29; // w25
  UnityEngine_GameObject_o *v30; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  UnityEngine_Component_o *v32; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v37; // x0
  struct System_Int32_array *v38; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v40; // x26
  StandFigureCollect_o *v41; // x27
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v46; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  StandFigureCollect_o *v50; // x21
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4211038 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&StandFigureCollect_TypeInfo, v18);
    byte_4211038 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v21 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v21,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  v23 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                imageLimitCount,
                                0LL);
  if ( !v23 )
    goto LABEL_40;
  v24 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v23, svtId, (int32_t)Instance, 0LL);
  if ( !Instance
    || (v25 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_25972252(
                                    gameObject,
                                    svtId,
                                    v24,
                                    1,
                                    faceType,
                                    1,
                                    0LL,
                                    0,
                                    -1,
                                    0LL);
      if ( Instance )
      {
        v46 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = this->fields.afterFigureCollectList;
          v50 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v48, v49);
          StandFigureCollect___ctor(v50, 0LL, v46, 0LL);
          if ( afterFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_40:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    v25,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v53,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v26 )
      break;
    current = (SvtMultiPortraitEntity_o *)v53.fields.current;
    if ( !v53.fields.current )
      sub_B0D97C(v26);
    klass = (int)v53.fields.current[2].klass;
    if ( klass >= 1 )
      v29 = klass + 1;
    else
      v29 = 1;
    if ( !StandFigureNode )
      sub_B0D97C(v26);
    v30 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v30,
                         current->fields.portraitImageId,
                         1,
                         faceType,
                         v29,
                         0LL,
                         0,
                         -1,
                         0LL);
    v32 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B0D97C(0LL);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B0D840(&PrefabForImageId->fields.svtMultiPortraitEntity, current);
    transform = UnityEngine_Component__get_transform(v32, 0LL);
    if ( !transform )
      sub_B0D97C(0LL);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v37 = UnityEngine_Component__get_gameObject(v32, 0LL);
      v38 = current->fields.commonPosition;
      if ( !v38 )
        sub_B0D97C(v37);
      max_length = v38->max_length;
      if ( max_length == 1 )
      {
        v43 = sub_B0D9A8(v37);
        sub_B0D948(v43, 0LL);
      }
      if ( !max_length )
      {
        v44 = sub_B0D9A8(v37);
        sub_B0D948(v44, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_31179660(v37, (float)v38->m_Items[1], (float)v38->m_Items[2], 0LL);
    }
    v40 = this->fields.afterFigureCollectList;
    v41 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v34, v35);
    StandFigureCollect___ctor(v41, current, (UIStandFigureR_o *)v32, 0LL);
    if ( !v40 )
      sub_B0D97C(v42);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v40,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  DataManager_o *Instance; // x0
  DataManager_o *v24; // x22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v27; // x27
  __int64 v28; // x22
  __int64 v29; // x24
  int32_t v30; // w24
  const MethodInfo *v31; // x3
  int32_t v32; // w25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v33; // x22
  unsigned int v34; // w26
  _BOOL8 v35; // x0
  SvtMultiPortraitEntity_o *current; // x27
  int klass; // w8
  int32_t v38; // w28
  UnityEngine_GameObject_o *v39; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Component_o *v42; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v47; // x0
  struct System_Int32_array *v48; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v50; // x22
  StandFigureCollect_o *v51; // x25
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v56; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x19
  __int64 v58; // x1
  __int64 v59; // x2
  StandFigureCollect_o *v60; // x21
  char v61; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_421102F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&formId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&StandFigureCollect_TypeInfo, v21);
    byte_421102F = 1;
  }
  memset(&v64, 0, sizeof(v64));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v24 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v24,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_54;
  v27 = (SvtMultiPortraitMaster_o *)Instance;
  v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v65.fields.currentCryptoKey = v29;
  *(_QWORD *)&v65.fields.fakeValue = v28;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v65, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  v30 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                MasterData_WarQuestSelectionMaster,
                                (int32_t)Instance,
                                imageLimitCount,
                                0LL);
  v32 = (int)Instance;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v30,
                                  (int32_t)Instance,
                                  v31);
    v61 = (char)Instance;
    if ( !v27 )
      goto LABEL_54;
  }
  else
  {
    v61 = 0;
    if ( !v27 )
      goto LABEL_54;
  }
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v27, v30, v32, 0LL);
  if ( !Instance
    || (v33 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_25972252(
                                     gameObject,
                                     v30,
                                     v32,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v61 & 1,
                                     friendshipNum,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_25973172(
                                     gameObject,
                                     v30,
                                     v32,
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
          v60 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v58, v59);
          StandFigureCollect___ctor(v60, 0LL, v56, 0LL);
          if ( currentFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_54:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v63,
    v33,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v34 = ignoreFormChangeCheck | ((unsigned int)formId >> 31);
  v64 = v63;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v64,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v35 )
      break;
    current = (SvtMultiPortraitEntity_o *)v64.fields.current;
    if ( !v64.fields.current )
      sub_B0D97C(v35);
    klass = (int)v64.fields.current[2].klass;
    if ( klass >= 1 )
      v38 = klass + 1;
    else
      v38 = 1;
    if ( v34 )
    {
      if ( !StandFigureNode )
        sub_B0D97C(v35);
      v39 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v39,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v38,
                           0LL,
                           v61 & 1,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_B0D97C(v35);
      v41 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v41,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v38,
                           0LL,
                           0LL);
    }
    v42 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B0D97C(0LL);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B0D840(&PrefabForImageId->fields.svtMultiPortraitEntity, current);
    transform = UnityEngine_Component__get_transform(v42, 0LL);
    if ( !transform )
      sub_B0D97C(0LL);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v47 = UnityEngine_Component__get_gameObject(v42, 0LL);
      v48 = current->fields.commonPosition;
      if ( !v48 )
        sub_B0D97C(v47);
      max_length = v48->max_length;
      if ( max_length == 1 )
      {
        v53 = sub_B0D9A8(v47);
        sub_B0D948(v53, 0LL);
      }
      if ( !max_length )
      {
        v54 = sub_B0D9A8(v47);
        sub_B0D948(v54, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_31179660(v47, (float)v48->m_Items[1], (float)v48->m_Items[2], 0LL);
    }
    v50 = this->fields.currentFigureCollectList;
    v51 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v44, v45);
    StandFigureCollect___ctor(v51, current, (UIStandFigureR_o *)v42, 0LL);
    if ( !v50 )
      sub_B0D97C(v52);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v50,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v64,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  _BOOL8 v9; // x0
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  UIStandFigureR_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Object_o *gameObject; // x20
  _BOOL8 v15; // x0
  Il2CppObject *v16; // x24
  UnityEngine_Object_o *v17; // x20
  UIStandFigureR_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Object_o *v20; // x20
  int v21; // w20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  int v23[2]; // [xsp+20h] [xbp-60h]
  int v24; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4211053 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4211053 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v24 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v25 = v22;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v25,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v25.fields.current;
    if ( !v25.fields.current )
      sub_B0D97C(v9);
    monitor = (UnityEngine_Object_o *)v25.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v12 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v12 )
        sub_B0D97C(0LL);
      UIStandFigureR__ReleaseCharacter(v12, 0LL);
      v13 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v13 )
        sub_B0D97C(0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
    }
  }
  v23[0] = 88;
  v24 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v24 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentFigureCollectList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v25 = v22;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v15 )
      break;
    v16 = v25.fields.current;
    if ( !v25.fields.current )
      sub_B0D97C(v15);
    v17 = (UnityEngine_Object_o *)v25.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      v18 = (UIStandFigureR_o *)v16[1].monitor;
      if ( !v18 )
        sub_B0D97C(0LL);
      UIStandFigureR__ReleaseCharacter(v18, 0LL);
      v19 = (UnityEngine_Component_o *)v16[1].monitor;
      if ( !v19 )
        sub_B0D97C(0LL);
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(v20, 0LL);
    }
  }
  v23[0] = 187;
  v21 = ++v24;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v21 && v23[v21 - 1] == 187 )
    v24 = v21 - 1;
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
LABEL_43:
    sub_B0D97C(currentFigureCollectList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentFigureCollectList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_B0D97C(bgCollider);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4211042 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_CombineResultEffectComponent__EndLoad_b__144_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4211042 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__144_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v13; // x8
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v23; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v26; // x20
  __int64 v27; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v28; // x8
  int32_t v29; // w20
  CombineResultEffectComponent_o *v30; // x0
  int32_t v31; // w21
  const MethodInfo *v32; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_o *v36; // x23
  __int64 v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v2 = this;
  if ( (byte_421104B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    sub_B0D8A4(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v4);
    sub_B0D8A4(&Method_CombineResultEffectComponent__EndPlay_b__154_0__, v5);
    sub_B0D8A4(&Method_CombineResultEffectComponent__EndPlay_b__154_1__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v9);
    this = (CombineResultEffectComponent_o *)sub_B0D8A4(&StringLiteral_21563/*"playVoice"*/, v10);
    byte_421104B = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( (int)playCnt < v2->fields.maxPlayCnt )
  {
    playVoiceList = v2->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
      {
        v37 = sub_B0D9A8(this);
        sub_B0D948(v37, 0LL);
      }
      v13 = playVoiceList->m_Items[playCnt];
      if ( v13 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_21563/*"playVoice"*/,
          v13->fields.delay,
          0LL);
        return;
      }
    }
LABEL_35:
    sub_B0D97C(this);
  }
  if ( v2->fields.player )
    CombineResultEffectComponent__stopVoice(v2, method);
  v2->fields.playCnt = 0;
  v2->fields.playVoiceList = 0LL;
  sub_B0D840(&v2->fields.playVoiceList, 0LL);
  this = (CombineResultEffectComponent_o *)v2->fields.limitUpKinds;
  if ( !this )
    goto LABEL_35;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                             (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this,
                                             v2->fields.kind,
                                             (const MethodInfo_2C779F8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.isLimitUpSuppression )
      goto LABEL_13;
    kind = v2->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_13;
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_35;
    v27 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v27;
    *(_QWORD *)&v38.fields.fakeValue = v26;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                               v38,
                                               0LL);
    v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
    if ( !v28 )
      goto LABEL_35;
    v29 = (int)this;
    v30 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                              v28[6],
                                              0LL);
    v31 = (_DWORD)v30 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v30, v29, (_DWORD)v30 + 1, v32) )
    {
      v33 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_B0D974(
                                                                    ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo,
                                                                    v14,
                                                                    v15);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v33,
        (Il2CppObject *)v2,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v36 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v34, v35);
      System_Action___ctor(v36, (Il2CppObject *)v2, Method_CombineResultEffectComponent__EndPlay_b__154_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v29, v31, v33, v36, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v2->fields.limitUpResultCheck;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)v2, Method_CombineResultEffectComponent__EndPlay_b__154_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_35;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v17, 1, 0LL);
    }
  }
  else if ( v2->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v2, v14);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v2, v18) )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.touchInfo;
      if ( !this )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v2->fields.costumeId;
      v23 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v23 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v23->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v2, v20);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v2, v2->fields.skillShowIndex, v21);
        ++v2->fields.skillShowIndex;
      }
    }
    else
    {
      CombineResultEffectComponent__EndDisp(v2, v19);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4211050 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4211050 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
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
      System_Action___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__,
        0LL);
      if ( !Instance )
        sub_B0D97C(v13);
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v12, 0LL);
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

  if ( (byte_4211037 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4211037 = 1;
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
    sub_B0D97C(v6);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v11 = sub_B0D9A8(v6);
      sub_B0D948(v11, 0LL);
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
  DataManager_o *Instance; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantCostumeMaster_o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  struct UserServantEntity_o *v18; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  __int64 v20; // x20
  __int64 v21; // x21
  ServantEntity_o *v22; // [xsp+0h] [xbp-30h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4211051 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&messageId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4211051 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_23;
    v14 = (ServantCostumeMaster_o *)Instance;
    v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = v16;
    *(_QWORD *)&v24.fields.fakeValue = v15;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v24, 0LL);
    if ( !v14 )
      goto LABEL_23;
    if ( ServantCostumeMaster__TryGetEntity(v14, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_23:
      sub_B0D97C(Instance);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = this->fields.resUsrSvtData;
  if ( !v18 )
    goto LABEL_23;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v21;
  *(_QWORD *)&v25.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v25, 0LL);
  if ( !v19 )
    goto LABEL_23;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v19,
          (WarEntity_o **)&v22,
          (int32_t)Instance,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v22;
  if ( !v22 )
    goto LABEL_23;
  return ServantEntity__getName(v22, -1, -1, 0LL);
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

  if ( (byte_4211032 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, fmsString);
    byte_4211032 = 1;
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
    sub_B0D97C(fsm);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


void __fastcall CombineResultEffectComponent__InitChangeInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Instance; // x0
  __int64 v8; // x23
  int64_t v9; // x20
  unsigned int v10; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v12; // q1
  __int64 v13; // x21
  __int128 v14; // q0
  int64_t v15; // x22
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v17; // x8
  SkillInfo_o *v18; // x9
  int32_t id; // w1
  SkillInfo_o *v20; // x8
  bool v21; // w8
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v26; // [xsp+68h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *v28; // [xsp+78h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_4211045 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4211045 = 1;
  }
  skillInfoList = 0LL;
  tdInfo = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
          if ( Instance )
          {
            v8 = *(_QWORD *)(Instance + 24);
            v9 = Instance;
            if ( (int)v8 >= 1 )
            {
              v10 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_55;
                v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v13 = *(_QWORD *)(v9 + 8LL * (int)v10 + 32);
                *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v25.fields.fakeValue = v12;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v24 = v25;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v24, 0LL);
                if ( !v13 )
                  goto LABEL_55;
                v14 = *(_OWORD *)(v13 + 32);
                v15 = Instance;
                *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
                *(_OWORD *)&v23.fields.fakeValue = v14;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v23, 0LL);
                if ( v15 == Instance )
                  break;
                if ( (int)++v10 >= (int)v8 )
                  goto LABEL_21;
                if ( v10 >= *(_DWORD *)(v9 + 24) )
                {
LABEL_56:
                  v22 = sub_B0D9A8(Instance);
                  sub_B0D948(v22, 0LL);
                }
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v13;
              sub_B0D840(&this->fields.resUsrSvtData, v13);
            }
LABEL_21:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v28, -1, -1, 1, 0, -1, 0LL);
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
                    goto LABEL_55;
                  if ( i >= skillInfoList->max_length )
                    goto LABEL_56;
                  v17 = skillInfoList->m_Items[i];
                  if ( !v17 || !v28 )
                    goto LABEL_55;
                  if ( i >= v28->max_length )
                    goto LABEL_56;
                  v18 = v28->m_Items[i];
                  if ( !v18 )
                    goto LABEL_55;
                  id = v17->fields.id;
                  if ( id != v18->fields.id || v17->fields.lv != v18->fields.lv )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_55;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v17->fields.lv,
                      0LL);
                    if ( !v28 )
                      goto LABEL_55;
                    if ( i >= v28->max_length )
                      goto LABEL_56;
                    v20 = v28->m_Items[i];
                    if ( !v20 )
                      goto LABEL_55;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_55;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v20->fields.id,
                      v20->fields.lv,
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
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v26, -1, -1, 0, 0LL);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
                      if ( (Instance & 1) == 0 )
                      {
                        v21 = 0;
LABEL_53:
                        this->fields.treasureDeviceEnabled = v21;
                        return;
                      }
                      if ( tdInfo && v26 )
                      {
                        v21 = tdInfo->fields.id != v26->fields.id || tdInfo->fields.lv != v26->fields.lv;
                        goto LABEL_53;
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
LABEL_55:
    sub_B0D97C(Instance);
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
  struct UnityEngine_GameObject_o *Value; // x0
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  const MethodInfo *v13; // x1
  int32_t kind; // w8
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x1

  if ( (byte_4211022 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_11512/*"ResultEffect"*/, v6);
    byte_4211022 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_20;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_20;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11512/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_20;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_B0D840(&this->fields.effect, Value);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
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
    sub_B0D97C(fsm);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v13);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  bool v13; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_421104C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421104C = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)costumeSkillInfoManager;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                        v16,
                                                                                        0LL);
  if ( !v10 )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v10,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_B0D97C(costumeSkillInfoManager);
  v13 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)costumeSkillInfoManager, 30, 0LL);
  return v8 >= 1 && !v13 && this->fields.skillShowIndex < v8;
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
    sub_B0D97C(0LL);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4211059 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5493/*"END_ANIMATION"*/, method);
    byte_4211059 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5493/*"END_ANIMATION"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__OpenLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v12; // x8
  int32_t v13; // w20
  int32_t v14; // w21
  System_String_o *LimitCountSealedDialogMessage; // x0
  LimitCountSealDialogComponent_o *v16; // x21
  System_String_o *v17; // x20
  System_String_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  LimitCountSealDialogComponent_CallbackFunc_o *v21; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v2 = (Il2CppObject *)this;
  if ( (byte_4211055 & 1) == 0 )
  {
    sub_B0D8A4(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CombineResultEffectComponent_o *)sub_B0D8A4(&StringLiteral_8409/*"LIMIT_COUNT_SEALED_TITLE"*/, v8);
    byte_4211055 = 1;
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
  *(_QWORD *)&v22.fields.currentCryptoKey = declaringType;
  *(_QWORD *)&v22.fields.fakeValue = parent;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[12].klass;
  if ( !v12 )
    goto LABEL_17;
  v13 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12[6], 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_17;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v13,
                                    v14 + 1,
                                    0LL);
  v16 = (LimitCountSealDialogComponent_o *)v2[9].klass;
  v17 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8409/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v21 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_B0D974(
                                                          LimitCountSealDialogComponent_CallbackFunc_TypeInfo,
                                                          v19,
                                                          v20);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v21,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !v16 )
LABEL_17:
    sub_B0D97C(this);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v16, v18, v17, v21, 0LL);
}


bool __fastcall CombineResultEffectComponent__OpenNotification(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
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
  CombineResultEffectComponent___c__DisplayClass165_0_o *v12; // x19
  __int64 AscensionAfterDialogId; // x0
  bool v14; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  struct UserServantEntity_o *v20; // x8
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w0
  struct UserServantEntity_o *v24; // x8
  int32_t v25; // w21
  __int64 v26; // x22
  __int64 v27; // x23
  int32_t v28; // w0
  int32_t limitCount; // w22
  int32_t v30; // w23
  const MethodInfo *v31; // x3
  Il2CppObject *NameFromMessageId; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v34; // x0
  System_String_o *v35; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x23
  int v41; // [xsp+3Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4211052 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&ServantCharaGraphEXOpenManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__, v8);
    sub_B0D8A4(&CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_11694/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4211052 = 1;
  }
  v41 = 0;
  v12 = (CombineResultEffectComponent___c__DisplayClass165_0_o *)sub_B0D974(
                                                                   CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo,
                                                                   method,
                                                                   v2);
  CombineResultEffectComponent___c__DisplayClass165_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_33;
  v12->fields.__4__this = this;
  sub_B0D840(&v12->fields, this);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v14 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v19 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v18 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v42.fields.currentCryptoKey = v19;
      *(_QWORD *)&v42.fields.fakeValue = v18;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v42, 0LL);
      v12->fields.limitCount = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        v12->fields.limitCount = this->fields.costumeId;
      v20 = this->fields.resUsrSvtData;
      if ( v20 )
      {
        v22 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v43.fields.currentCryptoKey = v22;
        *(_QWORD *)&v43.fields.fakeValue = v21;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v43, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v23, v12->fields.limitCount, 0LL);
        v41 = AscensionAfterDialogId;
        if ( (_DWORD)AscensionAfterDialogId == -1 )
          return 0;
        v24 = this->fields.resUsrSvtData;
        if ( v24 )
        {
          v25 = AscensionAfterDialogId;
          v27 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
          v26 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v44.fields.currentCryptoKey = v27;
          *(_QWORD *)&v44.fields.fakeValue = v26;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v44, 0LL);
          limitCount = v12->fields.limitCount;
          v30 = v28;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          }
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v30, limitCount, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v25,
                                                v12->fields.limitCount,
                                                v31);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v34 = System_Int32__ToString((int32_t)&v41, 0LL);
          v35 = System_String__Concat_43849904((System_String_o *)StringLiteral_11694/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v34, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = LocalizationManager__Get(v35, 0LL);
          v37 = System_String__Format(v36, NameFromMessageId, 0LL);
          v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
          System_Action___ctor(
            v40,
            (Il2CppObject *)v12,
            Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v14 = 1;
            CommonUI__OpenNotificationDialog(
              Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v37,
              v40,
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
            return v14;
          }
        }
      }
    }
LABEL_33:
    sub_B0D97C(AscensionAfterDialogId);
  }
  return v14;
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
  CombineResultEffectComponent___c__DisplayClass171_0_o *v18; // x21
  CommonUI_o *UserId; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x24
  CommonUI_o *v21; // x22
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *v23; // x20
  CommonUI_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  ServantStatusDialog_EndDelegate_o *v27; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4211058 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B0D8A4(&Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__, v16);
    sub_B0D8A4(&CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo, v17);
    byte_4211058 = 1;
  }
  entity = 0LL;
  v18 = (CombineResultEffectComponent___c__DisplayClass171_0_o *)sub_B0D974(
                                                                   CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo,
                                                                   *(_QWORD *)&svtId,
                                                                   *(_QWORD *)&limitCount);
  CombineResultEffectComponent___c__DisplayClass171_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_23;
  v18->fields.__4__this = this;
  sub_B0D840(&v18->fields, this);
  v18->fields.finishCallback = finishCallback;
  sub_B0D840(&v18->fields.finishCallback, finishCallback);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v21 )
      {
        CommonUI__maskFadein(v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          UserId = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( UserId )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)UserId, 0, 0LL);
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v23 = entity;
            v24 = (CommonUI_o *)Instance;
            v27 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v25, v26);
            ServantStatusDialog_EndDelegate___ctor(
              v27,
              (Il2CppObject *)v18,
              Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v24 )
            {
              CommonUI__OpenServantStatusDialog_17029272(v24, 33, v23, limitCount, v27, 0LL);
              return;
            }
          }
        }
      }
LABEL_23:
      sub_B0D97C(UserId);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_17017160(UserId, v18->fields.finishCallback, 0LL);
}


void __fastcall CombineResultEffectComponent__ReleaseVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  SoundManager_o *Instance; // x0

  if ( (byte_421104E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    byte_421104E = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_B0D840(&this->fields.playVoiceList, 0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
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
  DataManager_o *Instance; // x0
  DataManager_o *v23; // x22
  SvtMultiPortraitMaster_o *MasterData_WarQuestSelectionMaster; // x25
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v26; // x24
  __int64 v27; // x22
  __int64 v28; // x23
  struct UserServantEntity_o *v29; // x8
  int32_t v30; // w22
  int32_t v31; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w23
  struct UserServantEntity_o *v34; // x8
  int32_t v35; // w23
  __int64 v36; // x24
  __int64 v37; // x26
  CombineResultEffectComponent_o *v38; // x0
  const MethodInfo *v39; // x3
  char v40; // w24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v41; // x25
  _BOOL8 v42; // x0
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  UnityEngine_Component_o *v46; // x26
  UnityEngine_Transform_o *transform; // x0
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v49; // x0
  __int64 v50; // x0
  float v51; // s0
  float v52; // s1
  float v53; // s2
  struct System_Int32_array *v54; // x8
  il2cpp_array_size_t max_length; // w9
  int v56; // s11
  int v57; // s12
  float v58; // s9
  float v59; // s10
  float v60; // s8
  UnityEngine_Transform_o *v61; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x27
  __int64 v63; // x1
  __int64 v64; // x2
  StandFigureCollect_o *v65; // x28
  __int64 v66; // x0
  const MethodInfo *v67; // x2
  __int64 v68; // x0
  __int64 v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  UIStandFigureR_o *v71; // x21
  struct System_Collections_Generic_List_StandFigureCollect__o *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  StandFigureCollect_o *v75; // x23
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  int32_t saveDataMapList; // w21
  float FadeTime; // s8
  int32_t datalist_high; // w22
  __int64 v80; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v81; // x24
  StandFigureCollect_o *v82; // x8
  __int64 v83; // x0
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+40h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211035 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v12);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&StandFigureCollect_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_8547/*"LimitUpResSvtNodeName"*/, v20);
    byte_4211035 = 1;
  }
  entity = 0LL;
  memset(&v86, 0, sizeof(v86));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8547/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  v23 = Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_WarQuestSelectionMaster = (SvtMultiPortraitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     v23,
                                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v23,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_74;
  v26 = (ServantLimitAddMaster_o *)Instance;
  v28 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v88.fields.currentCryptoKey = v28;
  *(_QWORD *)&v88.fields.fakeValue = v27;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v88, 0LL);
  v29 = this->fields.resUsrSvtData;
  if ( !v29 )
    goto LABEL_74;
  v30 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                v29->fields.limitCount,
                                0LL);
  if ( !v26 )
    goto LABEL_74;
  v31 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v26, &entity, v30, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_74;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v31 = LimitCountUpResultServantLimitCount;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_74;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v30,
                                 v31,
                                 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v30, ServantLimitCountSealAfter, 0LL);
  v34 = this->fields.resUsrSvtData;
  if ( !v34 )
    goto LABEL_74;
  v35 = (int)Instance;
  v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v89.fields.currentCryptoKey = v37;
  *(_QWORD *)&v89.fields.fakeValue = v36;
  v38 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v89, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v38, (int32_t)v38, v35, v39);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_74:
    sub_B0D97C(Instance);
  v40 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                MasterData_WarQuestSelectionMaster,
                                v30,
                                v35,
                                0LL);
  if ( Instance
    && (v41 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v85,
      v41,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v86 = v85;
    while ( 1 )
    {
      v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v86,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v42 )
        break;
      if ( !StandFigureNode )
        sub_B0D97C(v42);
      current = (SvtMultiPortraitEntity_o *)v86.fields.current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_B0D97C(gameObject);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           gameObject,
                           current->fields.portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v40 & 1,
                           -1,
                           0LL);
      v46 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_B0D97C(0LL);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_B0D840(&PrefabForImageId->fields.svtMultiPortraitEntity, current);
      transform = UnityEngine_Component__get_transform(v46, 0LL);
      if ( !transform )
        sub_B0D97C(0LL);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v49 = UnityEngine_Component__get_transform(v46, 0LL);
        if ( !v49 )
          sub_B0D97C(0LL);
        *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_localPosition(v49, 0LL);
        v54 = current->fields.commonPosition;
        if ( !v54 )
          sub_B0D97C(v50);
        max_length = v54->max_length;
        if ( !max_length )
        {
          v69 = sub_B0D9A8(v50);
          sub_B0D948(v69, 0LL);
        }
        if ( max_length == 1 )
        {
          v68 = sub_B0D9A8(v50);
          sub_B0D948(v68, 0LL);
        }
        v57 = v54->m_Items[1];
        v56 = v54->m_Items[2];
        v58 = v51;
        v59 = v52;
        v60 = v53;
        v61 = UnityEngine_Component__get_transform(v46, 0LL);
        if ( !v61 )
          sub_B0D97C(0LL);
        v90.fields.x = v58 + (float)v57;
        v90.fields.y = v59 + (float)v56;
        v90.fields.z = v60;
        UnityEngine_Transform__set_localPosition(v61, v90, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v46,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = this->fields.afterFigureCollectList;
      v65 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v63, v64);
      StandFigureCollect___ctor(v65, current, (UIStandFigureR_o *)v46, 0LL);
      if ( !afterFigureCollectList )
        sub_B0D97C(v66);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v86,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_74;
    v70 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_25972252(
                                  v70,
                                  v30,
                                  v35,
                                  1,
                                  0,
                                  1,
                                  0LL,
                                  v40 & 1,
                                  -1,
                                  0LL);
    if ( !Instance )
      goto LABEL_74;
    v71 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_74;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v72 = this->fields.afterFigureCollectList;
    v75 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v73, v74);
    StandFigureCollect___ctor(v75, 0LL, v71, 0LL);
    if ( !v72 )
      goto LABEL_74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v72,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v67);
  saveDataMapList = 0;
  FadeTime = 0.0;
  datalist_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      v83 = sub_B0D9A8(LimitUpSvtVoiceList);
      sub_B0D948(v83, 0LL);
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
                                (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Instance >= 1 )
  {
    v80 = 0LL;
    while ( 1 )
    {
      v81 = this->fields.afterFigureCollectList;
      if ( !v81 )
        break;
      if ( v81->fields._size <= (unsigned int)v80 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v82 = v81->fields._items->m_Items[v80];
      if ( !v82 )
        break;
      Instance = (DataManager_o *)v82->fields._standFigure_k__BackingField;
      if ( !Instance )
        break;
      UIStandFigureR__SetFace_40555568((UIStandFigureR_o *)Instance, datalist_high, saveDataMapList, 0LL, FadeTime, 0LL);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                                    (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
      if ( (int)++v80 >= (int)Instance )
        return;
    }
    goto LABEL_74;
  }
}


void __fastcall CombineResultEffectComponent__SetAppendSkillCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t currentSkillId,
        int32_t currentSkillLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  CombineRootComponent_c *v16; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_421101E & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, usrSvtData);
    sub_B0D8A4(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__, v11);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v12);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    byte_421101E = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, usrSvtData);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v16 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v16 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v16->static_fields->COMBINE_ASSET_PATH;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v18, 1, 0LL);
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

  if ( (byte_421102E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2744/*"BaseSvtNodeName"*/, *(_QWORD *)&formId);
    byte_421102E = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_B0D97C(0LL);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_2744/*"BaseSvtNodeName"*/,
    0,
    v7);
}


void __fastcall CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v12; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4211033 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_B0D8A4(&StringLiteral_8546/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_4211033 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_12:
    sub_B0D97C(this);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v8[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8546/*"LimitUpBaseSvtNodeName"*/,
    1,
    v12);
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
  void *resUsrSvtData; // x0
  System_String_o *v41; // x20
  UnityEngine_Transform_o *transform; // x0
  UIExtrusionLabel_o *v43; // x20
  System_String_o *v44; // x20
  UnityEngine_Transform_o *v45; // x0
  UIExtrusionLabel_o *v46; // x20
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x20
  __int64 v49; // x21
  struct UserServantEntity_o *v50; // x8
  int32_t v51; // w20
  int32_t v52; // w21
  struct UserServantEntity_o *v53; // x8
  struct UserServantEntity_o *v54; // x8
  int32_t v55; // w20
  int32_t v56; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v58; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  float v61; // s8
  _BOOL4 v62; // w20
  __int64 v63; // x23
  int32_t v64; // w20
  int32_t v65; // w21
  int v66; // w22
  _DWORD *v67; // x25
  __int64 *v68; // x24
  __int64 *v69; // x8
  __int64 *v70; // x8
  __int64 *v71; // x8
  System_String_o *v72; // x20
  UnityEngine_Transform_o *v73; // x0
  UIExtrusionLabel_o *v74; // x20
  System_String_o *v75; // x20
  UnityEngine_Transform_o *v76; // x0
  UIExtrusionLabel_o *v77; // x20
  struct UserServantEntity_o *v78; // x8
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x2
  __int64 v83; // x26
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x28
  StandFigureCollect_o *v85; // x8
  int32_t v86; // w1
  System_String_o *v87; // x20
  UnityEngine_Transform_o *v88; // x0
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v93; // x9
  struct System_String_array *startAniName; // x8
  int v95; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v97; // w2
  CombineResultEffectComponent_o *v98; // x0
  System_String_o *v99; // x1
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x2
  bool v103; // w2
  CombineResultEffectComponent_o *v104; // x0
  System_String_o *v105; // x1
  __int64 *v106; // x8
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v107; // x20
  __int64 v108; // x1
  __int64 v109; // x2
  EventDelegate_Callback_o *v110; // x22
  __int64 v111; // x1
  __int64 v112; // x2
  EventDelegate_o *v113; // x21
  const MethodInfo *v114; // x2
  System_String_o *v115; // x20
  UnityEngine_Transform_o *v116; // x0
  UnityEngine_Component_o *v117; // x20
  float Value; // s0
  float v119; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v121; // x20
  __int64 v122; // x1
  char *v123; // x0
  const MethodInfo *v124; // x2
  struct System_String_array *v125; // x8
  int v126; // w9
  __int64 v127; // x20
  const MethodInfo *v128; // x2
  __int64 v129; // x22
  float FadeTime; // s0
  struct System_String_o *v131; // x20
  const MethodInfo *v132; // x1
  __int64 v133; // x0
  __int64 v134; // [xsp+8h] [xbp-68h] BYREF
  __int64 v135; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211026 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent__SetCardParam_b__115_0__, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v6);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UILabel___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v8);
    sub_B0D8A4(&EventDelegate_TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v10);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_4337/*"CostumeName"*/, v15);
    sub_B0D8A4(&StringLiteral_2744/*"BaseSvtNodeName"*/, v16);
    sub_B0D8A4(&StringLiteral_16850/*"bit_result_120"*/, v17);
    sub_B0D8A4(&StringLiteral_16857/*"bit_result_extraskill02"*/, v18);
    sub_B0D8A4(&StringLiteral_16866/*"bit_result_nobledeliverance"*/, v19);
    sub_B0D8A4(&StringLiteral_12374/*"START_ANIMATION"*/, v20);
    sub_B0D8A4(&StringLiteral_16854/*"bit_result_command_card_exceed"*/, v21);
    sub_B0D8A4(&StringLiteral_16863/*"bit_result_limitbreak"*/, v22);
    sub_B0D8A4(&StringLiteral_16858/*"bit_result_friendship_exceed"*/, v23);
    sub_B0D8A4(&StringLiteral_11468/*"ResMaxLvExceedNodeName"*/, v24);
    sub_B0D8A4(&StringLiteral_16871/*"bit_result_skillrank"*/, v25);
    sub_B0D8A4(&StringLiteral_16852/*"bit_result_advent02"*/, v26);
    sub_B0D8A4(&StringLiteral_16861/*"bit_result_grail_02"*/, v27);
    sub_B0D8A4(&StringLiteral_16872/*"bit_result_skillup"*/, v28);
    sub_B0D8A4(&StringLiteral_4466/*"CrtMaxLvExceedNodeName"*/, v29);
    sub_B0D8A4(&StringLiteral_16867/*"bit_result_powerup"*/, v30);
    sub_B0D8A4(&StringLiteral_13080/*"StartAnimationName"*/, v31);
    sub_B0D8A4(&StringLiteral_16860/*"bit_result_grail_01"*/, v32);
    sub_B0D8A4(&StringLiteral_16851/*"bit_result_advent01"*/, v33);
    sub_B0D8A4(&StringLiteral_16856/*"bit_result_extraskill01"*/, v34);
    sub_B0D8A4(&StringLiteral_16870/*"bit_result_skilldeliverance"*/, v35);
    sub_B0D8A4(&StringLiteral_16873/*"bit_result_skinchange01"*/, v36);
    sub_B0D8A4(&StringLiteral_4467/*"CrtMaxLvNodeName"*/, v37);
    sub_B0D8A4(&StringLiteral_11469/*"ResMaxLvNodeName"*/, v38);
    sub_B0D8A4(&StringLiteral_13220/*"SvtEqCardScale"*/, v39);
    byte_4211026 = 1;
  }
  v135 = 0LL;
  v134 = 0LL;
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
      v93 = this->fields.resUsrSvtData;
      if ( !v93 )
        goto LABEL_179;
      if ( baseUsrSvtData->fields.exp != v93->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_172;
      }
LABEL_98:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_179;
      v95 = this->fields.successInfo - 1;
      if ( v95 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v95];
LABEL_172:
        resUsrSvtData = this->fields.fsm;
        if ( resUsrSvtData )
        {
          v131 = *p_LimitAnimName;
          resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
          if ( resUsrSvtData )
          {
            resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                              (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                              0LL);
            if ( resUsrSvtData )
            {
              *((_QWORD *)resUsrSvtData + 7) = v131;
              sub_B0D840((char *)resUsrSvtData + 56, v131);
              CombineResultEffectComponent__SetLevelUpSvtFigure(this, v132);
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
        sub_B0D97C(resUsrSvtData);
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
                        (System_String_o *)StringLiteral_4467/*"CrtMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v41 = (System_String_o *)resUsrSvtData;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(transform, v41, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v43 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v135) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v135 + 4, 0LL);
      if ( !v43 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v43, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11469/*"ResMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v44 = (System_String_o *)resUsrSvtData;
      v45 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v45, v44, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v46 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v135) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v135, 0LL);
      if ( !v46 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v46, (System_String_o *)resUsrSvtData, 0LL);
      v47 = this->fields.baseUsrSvtData;
      if ( !v47 )
        goto LABEL_179;
      v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
      v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v136.fields.currentCryptoKey = v49;
      *(_QWORD *)&v136.fields.fakeValue = v48;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v136, 0LL);
      v50 = this->fields.baseUsrSvtData;
      if ( !v50 )
        goto LABEL_179;
      v51 = (int)resUsrSvtData;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v50->fields.limitCount, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      resUsrSvtData = (void *)ImageLimitCount__GetImageLimitCount(v51, v52, 0LL);
      v53 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)resUsrSvtData;
      if ( !v53 )
        goto LABEL_179;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                v53->fields.svtId,
                                0LL);
      v54 = this->fields.resUsrSvtData;
      if ( !v54 )
        goto LABEL_179;
      v55 = (int)resUsrSvtData;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v55, v56, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      v61 = 0.0;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v62 = resSvtNameData != 0LL;
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
        CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v58);
        CombineResultEffectComponent__setBaseSvtGraphCard(this, v62, v81);
        CombineResultEffectComponent__setResultSvtGraphCard(this, v62, v82);
        v68 = &StringLiteral_16852/*"bit_result_advent02"*/;
LABEL_154:
        resUsrSvtData = this->fields.fsm;
        if ( !resUsrSvtData )
          goto LABEL_179;
        v127 = *v68;
        goto LABEL_165;
      }
      if ( this->fields.isLimitUpSuppression || !CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v58) )
      {
LABEL_29:
        v63 = 0LL;
        v64 = 0;
        v65 = 0;
        goto LABEL_30;
      }
      resUsrSvtData = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v128);
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( *((_DWORD *)resUsrSvtData + 6) )
      {
        v129 = *((_QWORD *)resUsrSvtData + 4);
        if ( !v129 )
          goto LABEL_179;
        v65 = *(_DWORD *)(v129 + 28);
        v64 = *(_DWORD *)(v129 + 56);
        FadeTime = ServantVoiceData__GetFadeTime(*((ServantVoiceData_o **)resUsrSvtData + 4), 0LL);
        v63 = *(_QWORD *)(v129 + 32);
        v61 = FadeTime;
LABEL_30:
        resUsrSvtData = (void *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                                  (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        v66 = (int)resUsrSvtData;
        if ( v63 )
        {
          v67 = (_DWORD *)(v63 + 24);
          v68 = &StringLiteral_16851/*"bit_result_advent01"*/;
          if ( (_DWORD)resUsrSvtData != *(_DWORD *)(v63 + 24) || (int)resUsrSvtData <= 0 )
            goto LABEL_154;
        }
        else
        {
          if ( (int)resUsrSvtData < 1 )
          {
            v68 = &StringLiteral_16851/*"bit_result_advent01"*/;
            goto LABEL_154;
          }
          v67 = (_DWORD *)&off_18;
        }
        v68 = &StringLiteral_16851/*"bit_result_advent01"*/;
        v83 = 0LL;
        while ( 1 )
        {
          currentFigureCollectList = this->fields.currentFigureCollectList;
          if ( !currentFigureCollectList )
            goto LABEL_179;
          if ( currentFigureCollectList->fields._size <= (unsigned int)v83 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v85 = currentFigureCollectList->fields._items->m_Items[v83];
          if ( !v85 )
            goto LABEL_179;
          resUsrSvtData = v85->fields._standFigure_k__BackingField;
          if ( v63 )
          {
            if ( (unsigned int)v83 >= *v67 )
              goto LABEL_180;
            if ( !resUsrSvtData )
              goto LABEL_179;
            v86 = *(_DWORD *)(v63 + 32 + 4 * v83);
          }
          else
          {
            if ( !resUsrSvtData )
              goto LABEL_179;
            v86 = v65;
          }
          UIStandFigureR__SetFace_40555568((UIStandFigureR_o *)resUsrSvtData, v86, v64, 0LL, v61, 0LL);
          if ( (int)++v83 >= v66 )
            goto LABEL_154;
        }
      }
      goto LABEL_180;
    case 2:
      v97 = 1;
      v98 = this;
      v99 = (System_String_o *)StringLiteral_16872/*"bit_result_skillup"*/;
      goto LABEL_108;
    case 3:
      v71 = &StringLiteral_16870/*"bit_result_skilldeliverance"*/;
      goto LABEL_107;
    case 4:
      v103 = 1;
      v104 = this;
      v105 = (System_String_o *)StringLiteral_16872/*"bit_result_skillup"*/;
      goto LABEL_125;
    case 5:
      v69 = &StringLiteral_16866/*"bit_result_nobledeliverance"*/;
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
                        (System_String_o *)StringLiteral_2744/*"BaseSvtNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v115 = (System_String_o *)resUsrSvtData;
      v116 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v116, v115, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_179;
      v117 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13220/*"SvtEqCardScale"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)resUsrSvtData, 0LL);
      if ( !v117 )
        goto LABEL_179;
      v119 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v117, 0LL);
      resUsrSvtData = CharaGraphManager__CreateTexturePrefab_24036388(
                        gameObject,
                        this->fields.resUsrSvtData,
                        10,
                        0LL,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v121 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v137.fields.x = -50.0;
      v137.fields.y = 92.0;
      v137.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)resUsrSvtData, v137, 0LL);
      resUsrSvtData = UnityEngine_Component__get_transform(v121, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v138.fields.x = v119;
      v138.fields.y = v119;
      v138.fields.z = v119;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)resUsrSvtData, v138, 0LL);
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
        v70 = (__int64 *)&this->fields.LimitAnimName;
      }
      else
      {
        v125 = this->fields.startAniName;
        if ( !v125 )
          goto LABEL_179;
        v126 = this->fields.successInfo - 1;
        if ( v126 >= v125->max_length )
        {
LABEL_180:
          v133 = sub_B0D9A8(resUsrSvtData);
          sub_B0D948(v133, 0LL);
        }
        v70 = (__int64 *)&v125->m_Items[v126];
      }
LABEL_163:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
LABEL_164:
      v127 = *v70;
LABEL_165:
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      *((_QWORD *)resUsrSvtData + 7) = v127;
      v123 = (char *)resUsrSvtData + 56;
      v122 = v127;
LABEL_168:
      sub_B0D840(v123, v122);
LABEL_169:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resUsrSvtData, (System_String_o *)StringLiteral_12374/*"START_ANIMATION"*/, 0LL);
      return;
    case 7:
    case 0x15:
      v71 = &StringLiteral_16871/*"bit_result_skillrank"*/;
LABEL_107:
      v99 = (System_String_o *)*v71;
      v98 = this;
      v97 = 0;
LABEL_108:
      CombineResultEffectComponent__SetCardParam_Skill(v98, v99, v97, v3);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v69 = &StringLiteral_16871/*"bit_result_skillrank"*/;
LABEL_124:
      v105 = (System_String_o *)*v69;
      v104 = this;
      v103 = 0;
LABEL_125:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v104, v105, v103, v3);
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
                        (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v106 = &StringLiteral_16872/*"bit_result_skillup"*/;
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
                        (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v106 = &StringLiteral_16867/*"bit_result_powerup"*/;
LABEL_147:
      v122 = *v106;
      *((_QWORD *)resUsrSvtData + 7) = *v106;
      v123 = (char *)resUsrSvtData + 56;
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
                        (System_String_o *)StringLiteral_4466/*"CrtMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v72 = (System_String_o *)resUsrSvtData;
      v73 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v73, v72, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v74 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v134) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v134 + 4, 0LL);
      if ( !v74 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v74, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11468/*"ResMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v75 = (System_String_o *)resUsrSvtData;
      v76 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v76, v75, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v77 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v134) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v134, 0LL);
      if ( !v77 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v77, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( *((_DWORD *)resUsrSvtData + 74) )
        goto LABEL_57;
      v78 = this->fields.resUsrSvtData;
      if ( !v78 )
        goto LABEL_179;
      if ( v78->fields.exceedCount >= 1 )
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
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v79);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v80);
        v70 = &StringLiteral_16863/*"bit_result_limitbreak"*/;
      }
      else if ( this->fields.isChangeCardImg )
      {
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v79);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v124);
        v70 = &StringLiteral_16861/*"bit_result_grail_02"*/;
      }
      else
      {
        v70 = &StringLiteral_16860/*"bit_result_grail_01"*/;
      }
      goto LABEL_163;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v70 = &StringLiteral_16858/*"bit_result_friendship_exceed"*/;
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
                        (System_String_o *)StringLiteral_4337/*"CostumeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v87 = (System_String_o *)resUsrSvtData;
      v88 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v88, v87, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !resUsrSvtData )
        goto LABEL_179;
      UILabel__set_text((UILabel_o *)resUsrSvtData, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v89);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v90);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v91);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v70 = &StringLiteral_16873/*"bit_result_skinchange01"*/;
      goto LABEL_164;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v70 = &StringLiteral_16854/*"bit_result_command_card_exceed"*/;
      goto LABEL_164;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v100);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v101);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v102);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v70 = &StringLiteral_16850/*"bit_result_120"*/;
      goto LABEL_164;
    case 0x19:
      resUsrSvtData = this->fields.effect;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v107 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
               (UnityEngine_GameObject_o *)resUsrSvtData,
               (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v110 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v108, v109);
      EventDelegate_Callback___ctor(
        v110,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__115_0__,
        0LL);
      v113 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v111, v112);
      EventDelegate___ctor_28889248(v113, v110, 0LL);
      if ( !v107 )
        goto LABEL_179;
      resUsrSvtData = v107->fields.callbackQueue;
      if ( !resUsrSvtData )
        goto LABEL_179;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resUsrSvtData,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v114);
      resUsrSvtData = this->fields.fsm;
      v70 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_16857/*"bit_result_extraskill02"*/ : &StringLiteral_16856/*"bit_result_extraskill01"*/);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *effect; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  EventDelegate_Callback_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  EventDelegate_o *v20; // x22

  if ( (byte_4211029 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, startName);
    sub_B0D8A4(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__, v7);
    sub_B0D8A4(&EventDelegate_TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_B0D8A4(&StringLiteral_12374/*"START_ANIMATION"*/, v11);
    sub_B0D8A4(&StringLiteral_13080/*"StartAnimationName"*/, v12);
    byte_4211029 = 1;
  }
  CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  if ( isSkip )
  {
    effect = this->fields.effect;
    if ( !effect
      || (effect = UnityEngine_GameObject__get_gameObject(effect, 0LL)) == 0LL
      || (v14 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  effect,
                  (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___),
          v17 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v15, v16),
          EventDelegate_Callback___ctor(
            v17,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__,
            0LL),
          v20 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v18, v19),
          EventDelegate___ctor_28889248(v20, v17, 0LL),
          !v14)
      || (effect = (UnityEngine_GameObject_o *)v14->fields.callbackQueue) == 0LL )
    {
LABEL_14:
      sub_B0D97C(effect);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effect,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  effect = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !effect )
    goto LABEL_14;
  effect = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL);
  if ( !effect )
    goto LABEL_14;
  effect = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                         (HutongGames_PlayMaker_FsmVariables_o *)effect,
                                         (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                                         0LL);
  if ( !effect )
    goto LABEL_14;
  effect[2].monitor = startName;
  sub_B0D840(&effect[2].monitor, startName);
  effect = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !effect )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12374/*"START_ANIMATION"*/, 0LL);
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
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  EventDelegate_Callback_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  EventDelegate_o *v20; // x22

  if ( (byte_421102A & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, startName);
    sub_B0D8A4(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__, v7);
    sub_B0D8A4(&EventDelegate_TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_B0D8A4(&StringLiteral_12374/*"START_ANIMATION"*/, v11);
    sub_B0D8A4(&StringLiteral_13080/*"StartAnimationName"*/, v12);
    byte_421102A = 1;
  }
  if ( isSkip )
  {
    effect = this->fields.effect;
    if ( !effect )
      goto LABEL_17;
    effect = UnityEngine_GameObject__get_gameObject(effect, 0LL);
    if ( !effect )
      goto LABEL_17;
    v14 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
            effect,
            (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v17 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v15, v16);
    EventDelegate_Callback___ctor(
      v17,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__,
      0LL);
    v20 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v18, v19);
    EventDelegate___ctor_28889248(v20, v17, 0LL);
    if ( !v14 )
      goto LABEL_17;
    effect = (UnityEngine_GameObject_o *)v14->fields.callbackQueue;
    if ( !effect )
      goto LABEL_17;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effect,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  if ( this->fields.kind == 18 )
    CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(this, (const MethodInfo *)startName);
  else
    CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  effect = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !effect
    || (effect = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL)) == 0LL
    || (effect = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                               (HutongGames_PlayMaker_FsmVariables_o *)effect,
                                               (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                                               0LL)) == 0LL
    || (effect[2].monitor = startName,
        sub_B0D840(&effect[2].monitor, startName),
        (effect = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(effect);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12374/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetCombineLimit(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        bool autoFadeout,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  CombineRootComponent_c *v16; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_4211021 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, baseData);
    sub_B0D8A4(&Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__, v9);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v10);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4211021 = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_B0D840(&this->fields.baseUsrSvtData, baseData);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v16 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v16 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v16->static_fields->EXCEED_ASSET_PATH;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v18, 1, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  CombineRootComponent_c *v17; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_Transform_o *transform; // x21
  int v22; // s0

  if ( (byte_421101B & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, userServantEntity);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_16854/*"bit_result_command_card_exceed"*/, v14);
    sub_B0D8A4(&StringLiteral_11512/*"ResultEffect"*/, v15);
    sub_B0D8A4(&StringLiteral_12379/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v16);
    byte_421101B = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_B0D840(&this->fields.baseUsrSvtData, userServantEntity);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  v17 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v17 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v17->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16854/*"bit_result_command_card_exceed"*/,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v20 = (UnityEngine_GameObject_o *)effectAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v22, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11512/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v20,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(effectAssetData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12379/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetCostumeCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t costumeId,
        System_String_o *costumeName,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4211015 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo, userSvtEntity);
    sub_B0D8A4(&StringLiteral_12382/*"START_COSTUME_EFFECT"*/, v11);
    byte_4211015 = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_B0D840(&this->fields.baseUsrSvtData, userSvtEntity);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_B0D840(&this->fields.costumeName, costumeName);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  v14 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B0D974(
                                                                    CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo,
                                                                    v12,
                                                                    v13);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v14, 0LL);
  this->fields.costumeSkillInfoManager = v14;
  sub_B0D840(&this->fields.costumeSkillInfoManager, v14);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12382/*"START_COSTUME_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CombineRootComponent_c *v13; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Transform_o *transform; // x21
  int v18; // s0

  if ( (byte_4211019 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, userSvtData);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16858/*"bit_result_friendship_exceed"*/, v10);
    sub_B0D8A4(&StringLiteral_11512/*"ResultEffect"*/, v11);
    sub_B0D8A4(&StringLiteral_12385/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v12);
    byte_4211019 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, userSvtData);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  v13 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v13 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v13->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16858/*"bit_result_friendship_exceed"*/,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v16 = (UnityEngine_GameObject_o *)effectAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v18, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11512/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v16,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(effectAssetData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12385/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  CombineRootComponent_c *v16; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_421101A & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, userSvtData);
    sub_B0D8A4(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__, v9);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v10);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_421101A = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, userSvtData);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v16 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v16 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v16->static_fields->COMBINE_ASSET_PATH;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v18, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__SetFriendshipUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_421100F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12384/*"START_FRIENDSHIPUP_EFFECT"*/, usrSvtData);
    byte_421100F = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, usrSvtData);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12384/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLevelUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  ServantScriptEntity_o *Entity_28247148; // x0
  UserServantEntity_o *v14; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v17; // x0
  ServantVoiceData_array *v18; // x1
  struct ServantVoiceData_array **p_playVoiceList; // x0
  const MethodInfo *v20; // x2
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v22; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v24; // x0
  const MethodInfo *v25; // x2
  struct UserServantEntity_o *v26; // x8
  CombineResultEffectComponent_o *v27; // x20
  CombineResultEffectComponent_o *v28; // x21
  System_String_o *v29; // x0
  const MethodInfo *v30; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v32; // x21
  const MethodInfo *v33; // x2
  struct UserServantEntity_o *v34; // x8
  System_String_array *v35; // x20
  CombineResultEffectComponent_o *v36; // x21
  System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  ServantVoiceEntity_o *v39; // x20
  UserServantEntity_o *v40; // x21
  ServantVoiceData_array *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  int32_t lv; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v2 = this;
  if ( (byte_4211030 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantScriptMaster___, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (CombineResultEffectComponent_o *)sub_B0D8A4(&string___TypeInfo, v6);
    byte_4211030 = 1;
  }
  lv = 0;
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_51;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v9;
  *(_QWORD *)&v45.fields.fakeValue = v8;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_51;
  v10 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v10, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_51;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_51;
  Entity_28247148 = ServantScriptMaster__GetEntity_28247148((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_28247148 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_28247148, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_51;
      combineVoiceId = v2->fields.combineVoiceId;
      v14 = v2->fields.baseUsrSvtData;
LABEL_20:
      v17 = ServantVoiceEntity__lotteryLevelUpVoice_29949808((ServantVoiceEntity_o *)this, v14, combineVoiceId, 0LL);
LABEL_21:
      v18 = v17;
      p_playVoiceList = &v2->fields.playVoiceList;
      v2->fields.playVoiceList = v18;
      goto LABEL_22;
    }
    v14 = v2->fields.baseUsrSvtData;
    if ( v14 )
    {
      lv = v14->fields.lv;
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
        if ( System_Int32__Equals_38472956((int32_t)&lv, resUsrSvtData->fields.lv, 0LL) )
        {
          v24 = v2;
          form = 0;
LABEL_26:
          CombineResultEffectComponent__SetBaseSvtFigure(v24, form, v20);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_B0D8BC(string___TypeInfo, 1LL);
        v26 = v2->fields.baseUsrSvtData;
        if ( v26 )
        {
          v27 = this;
          *(_QWORD *)&v46.fields.currentCryptoKey = &v26->fields.svtId;
          *(_QWORD *)&v46.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v46, v25);
          if ( v27 )
          {
            v28 = this;
            if ( this )
            {
              this = (CombineResultEffectComponent_o *)sub_B0D964(this, v27->klass->_1.element_class);
              if ( !this )
                goto LABEL_53;
            }
            if ( !LODWORD(v27->fields.svtResultInfoWindow) )
              goto LABEL_52;
            v27->fields.skillResultInfoWindow = (struct SkillUpResultWindowComponent_o *)v28;
            sub_B0D840(&v27->fields.skillResultInfoWindow, v28);
            v29 = System_String__Concat_43930028((System_String_array *)v27, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_34962660(v29, 0LL) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v32 = v2->fields.baseUsrSvtData;
              if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              }
              v17 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v32, v30);
              goto LABEL_21;
            }
            this = (CombineResultEffectComponent_o *)sub_B0D8BC(string___TypeInfo, 1LL);
            v34 = v2->fields.baseUsrSvtData;
            if ( v34 )
            {
              v35 = (System_String_array *)this;
              *(_QWORD *)&v47.fields.currentCryptoKey = &v34->fields.svtId;
              *(_QWORD *)&v47.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v47, v33);
              if ( v35 )
              {
                v36 = this;
                if ( !this
                  || (this = (CombineResultEffectComponent_o *)sub_B0D964(this, v35->obj.klass->_1.element_class)) != 0LL )
                {
                  if ( !v35->max_length )
                    goto LABEL_52;
                  v35->m_Items[0] = (System_String_o *)v36;
                  sub_B0D840(v35->m_Items, v36);
                  v37 = System_String__Concat_43930028(v35, 0LL);
                  UnityEngine_PlayerPrefs__SetInt(v37, 1, 0LL);
                  v39 = v2->fields.svtVoiceEntity;
                  v40 = v2->fields.baseUsrSvtData;
                  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                  }
                  v41 = CombineResultFormManager__lotteryCombineResultInit(v39, v40, v38);
                  v2->fields.playVoiceList = v41;
                  sub_B0D840(&v2->fields.playVoiceList, v41);
                  playVoiceList = v2->fields.playVoiceList;
                  if ( playVoiceList )
                  {
LABEL_23:
                    if ( playVoiceList->max_length )
                    {
                      v22 = playVoiceList->m_Items[0];
                      if ( !v22 )
                        goto LABEL_51;
                      form = v22->fields.form;
                      v24 = v2;
                      goto LABEL_26;
                    }
LABEL_52:
                    v42 = sub_B0D9A8(this);
                    sub_B0D948(v42, 0LL);
                  }
                  this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                  if ( !this )
                    goto LABEL_51;
                  v18 = ServantVoiceEntity__lotteryLevelUpVoice_29949808(
                          (ServantVoiceEntity_o *)this,
                          v2->fields.baseUsrSvtData,
                          v2->fields.combineVoiceId,
                          0LL);
                  v2->fields.playVoiceList = v18;
                  p_playVoiceList = &v2->fields.playVoiceList;
LABEL_22:
                  sub_B0D840(p_playVoiceList, v18);
                  playVoiceList = v2->fields.playVoiceList;
                  if ( !playVoiceList )
                    goto LABEL_51;
                  goto LABEL_23;
                }
LABEL_53:
                v43 = sub_B0D99C();
                sub_B0D948(v43, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B0D97C(this);
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
  DataManager_o *LimitUpSvtVoiceList; // x0
  int32_t entries_high; // w20
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  struct UserServantEntity_o *v15; // x8
  int32_t v16; // w21
  int32_t v17; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v20; // x5
  __int64 v21; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4211036 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_8547/*"LimitUpResSvtNodeName"*/, v8);
    byte_4211036 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = (DataManager_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  entries_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.datalist) )
    {
      v21 = sub_B0D9A8(LimitUpSvtVoiceList);
      sub_B0D948(v21, 0LL);
    }
    lookup = LimitUpSvtVoiceList->fields.lookup;
    if ( !lookup )
      goto LABEL_23;
    entries_high = HIDWORD(lookup->fields.entries);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_23;
  v14 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  LimitUpSvtVoiceList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  v15 = this->fields.resUsrSvtData;
  if ( !v15 )
    goto LABEL_23;
  v16 = (int)LimitUpSvtVoiceList;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_23;
  LimitUpSvtVoiceList = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           LimitUpSvtVoiceList,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_23;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v16, v17, 0LL) )
    goto LABEL_19;
  LimitUpSvtVoiceList = (DataManager_o *)entity;
  if ( !entity )
LABEL_23:
    sub_B0D97C(LimitUpSvtVoiceList);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v17 = LimitCountUpResultServantLimitCount;
LABEL_19:
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v16, v17, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v16,
    ImageLimitCount,
    entries_high,
    (System_String_o *)StringLiteral_8547/*"LimitUpResSvtNodeName"*/,
    v20);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x21
  __int64 v23; // x22
  int32_t v24; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x8
  ServantLimitImageMaster_o *v27; // x20
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4211013 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&StringLiteral_12388/*"START_LIMITUP_EFFECT"*/, v20);
    byte_4211013 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_B0D840(&this->fields.baseUsrSvtData, baseData);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_B0D840(&this->fields.resSvtNameData, servantChange);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.callbackFunc = callback;
  this->fields.displayType = displayType;
  this->fields.autoFadeout = autoFadeout;
  sub_B0D840(&this->fields.callbackFunc, callback);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_B0D840(&this->fields.limitUpPlayVoiceLabel, playVoiceLabel);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_B0D840(&this->fields.limitUpRewardGiftDataList, rewardGiftDataList);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_14;
  v23 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v22 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v23;
  *(_QWORD *)&v31.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v31, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v26 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v32.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v27 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_QWORD *)&v32.fields.currentCryptoKey = v26;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v32, 0LL);
  if ( !v27
    || (gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v27,
                                                   (int32_t)gameObject,
                                                   v24 + 1,
                                                   0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = (unsigned __int8)gameObject & 1,
        !fsm) )
  {
LABEL_14:
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12388/*"START_LIMITUP_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetLvExceedCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
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
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  __int64 Int_34962660; // x0
  const MethodInfo *v17; // x2
  System_String_array *v18; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x0
  const MethodInfo *v21; // x2
  System_String_array *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x0
  const MethodInfo *v25; // x1
  UserServantEntity_o *v26; // x20
  CombineRootComponent_c *v27; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_Transform_o *transform; // x21
  int v31; // s0
  __int64 v34; // x0
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4211017 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, usrSvtData);
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, v7);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&string___TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_12389/*"START_LVEXCEED_EFFECT"*/, v12);
    sub_B0D8A4(&StringLiteral_16859/*"bit_result_grail"*/, v13);
    sub_B0D8A4(&StringLiteral_11512/*"ResultEffect"*/, v14);
    byte_4211017 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, usrSvtData);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  Int_34962660 = sub_B0D8BC(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData
    || (v18 = (System_String_array *)Int_34962660,
        *(_QWORD *)&v36.fields.currentCryptoKey = &this->fields.baseUsrSvtData->fields.svtId,
        *(_QWORD *)&v36.fields.fakeValue = 0LL,
        Int_34962660 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v36, v17),
        !v18) )
  {
LABEL_34:
    sub_B0D97C(Int_34962660);
  }
  v19 = (System_String_o *)Int_34962660;
  if ( Int_34962660 )
  {
    Int_34962660 = sub_B0D964(Int_34962660, v18->obj.klass->_1.element_class);
    if ( !Int_34962660 )
      goto LABEL_36;
  }
  if ( !v18->max_length )
    goto LABEL_35;
  v18->m_Items[0] = v19;
  sub_B0D840(v18->m_Items, v19);
  v20 = System_String__Concat_43930028(v18, 0LL);
  Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v20, 0LL);
  if ( (_DWORD)Int_34962660 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_34;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_34962660 = sub_B0D8BC(string___TypeInfo, 1LL);
      if ( !*p_baseUsrSvtData )
        goto LABEL_34;
      v22 = (System_String_array *)Int_34962660;
      *(_QWORD *)&v37.fields.currentCryptoKey = &(*p_baseUsrSvtData)->fields.svtId;
      *(_QWORD *)&v37.fields.fakeValue = 0LL;
      Int_34962660 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v37, v21);
      if ( !v22 )
        goto LABEL_34;
      v23 = (System_String_o *)Int_34962660;
      if ( !Int_34962660 || (Int_34962660 = sub_B0D964(Int_34962660, v22->obj.klass->_1.element_class)) != 0 )
      {
        if ( v22->max_length )
        {
          v22->m_Items[0] = v23;
          sub_B0D840(v22->m_Items, v23);
          v24 = System_String__Concat_43930028(v22, 0LL);
          UnityEngine_PlayerPrefs__SetInt(v24, 0, 0LL);
          v26 = *p_baseUsrSvtData;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
          }
          CombineResultFormManager__ResetVoiceList(v26, v25);
          goto LABEL_20;
        }
LABEL_35:
        v34 = sub_B0D9A8(Int_34962660);
        sub_B0D948(v34, 0LL);
      }
LABEL_36:
      v35 = sub_B0D99C();
      sub_B0D948(v35, 0LL);
    }
  }
LABEL_20:
  v27 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v27 = CombineRootComponent_TypeInfo;
  }
  Int_34962660 = (__int64)v27->static_fields->effectAssetData;
  if ( !Int_34962660 )
    goto LABEL_34;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)Int_34962660,
                                                                               (System_String_o *)StringLiteral_16859/*"bit_result_grail"*/,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Int_34962660 = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                            Object_WarBoardWaitTimeSetting,
                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_34962660 )
    goto LABEL_34;
  v29 = (UnityEngine_GameObject_o *)Int_34962660;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_34962660, 0LL);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  Int_34962660 = (__int64)this->fields.fsm;
  if ( !Int_34962660 )
    goto LABEL_34;
  Int_34962660 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_34962660, 0LL);
  if ( !Int_34962660 )
    goto LABEL_34;
  Int_34962660 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_34962660,
                            (System_String_o *)StringLiteral_11512/*"ResultEffect"*/,
                            0LL);
  if ( !Int_34962660 )
    goto LABEL_34;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_34962660, v29, 0LL);
  Int_34962660 = (__int64)this->fields.fsm;
  if ( !Int_34962660 )
    goto LABEL_34;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_34962660, (System_String_o *)StringLiteral_12389/*"START_LVEXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLvExceedInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  CombineRootComponent_c *v14; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_4211018 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, usrSvtData);
    sub_B0D8A4(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__, v7);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v8);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4211018 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, usrSvtData);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v14 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v14 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v14->static_fields->EXCEED_ASSET_PATH;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v16, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__SetNameRevealInfo(
        CombineResultEffectComponent_o *this,
        ServantChangeEntity_o *before,
        ServantChangeEntity_o *after,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
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
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v25; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v27; // x21
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x21
  System_String_o *v30; // x22
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_ParticleSystem_o *v32; // x22
  float v33; // s0
  const MethodInfo *v34; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v36; // x4
  struct ServantChangeEntity_o *v37; // x8
  int32_t v38; // w3
  __int64 v39; // x1
  UnityEngine_ParticleSystem_MinMaxCurve_o v40; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v41; // [xsp+28h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *v42; // [xsp+48h] [xbp-38h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v44; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v45; // 0:x0.8
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211014 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, before);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&StringLiteral_11470/*"ResNameNodeName"*/, v13);
    sub_B0D8A4(&StringLiteral_12390/*"START_NAME_REVEAL_EFFECT"*/, v14);
    sub_B0D8A4(&StringLiteral_9431/*"NameRevealCrossFade"*/, v15);
    sub_B0D8A4(&StringLiteral_4468/*"CrtNameNodeName"*/, v16);
    sub_B0D8A4(&StringLiteral_16864/*"bit_result_name_reveal"*/, v17);
    sub_B0D8A4(&StringLiteral_13080/*"StartAnimationName"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    sub_B0D8A4(&StringLiteral_9432/*"NameRevealParticleNodeName"*/, v20);
    byte_4211014 = 1;
  }
  m_ParticleSystem = 0LL;
  v42 = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_B0D840(&this->fields.crtSvtNameData, before);
  this->fields.resSvtNameData = after;
  sub_B0D840(&this->fields.resSvtNameData, after);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12390/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                               (*p_crtSvtNameData)->fields.svtId,
                                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_40;
    name = ServantEntity__getTrueName((ServantEntity_o *)gameObject, -1, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                             (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                             (System_String_o *)StringLiteral_4468/*"CrtNameNodeName"*/,
                                             0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                             (HutongGames_PlayMaker_FsmString_o *)gameObject,
                                             0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v25 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(transform, v25, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !*p_crtSvtNameData )
    goto LABEL_40;
  if ( !gameObject )
    goto LABEL_40;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, (*p_crtSvtNameData)->fields.name, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                             (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                             (System_String_o *)StringLiteral_11470/*"ResNameNodeName"*/,
                                             0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                             (HutongGames_PlayMaker_FsmString_o *)gameObject,
                                             0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v27 = (System_String_o *)gameObject;
  v28 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(v28, v27, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v29 = gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                             (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                             (System_String_o *)StringLiteral_9432/*"NameRevealParticleNodeName"*/,
                                             0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                             (HutongGames_PlayMaker_FsmString_o *)gameObject,
                                             0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v30 = (System_String_o *)gameObject;
  v31 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(v31, v30, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v32 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v42 = UnityEngine_ParticleSystem__get_shape(v32, 0LL).fields.m_ParticleSystem;
  v33 = (float)((float)v29[6].fields.m_CachedPtr / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v41, 0, sizeof(v41));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v41, v33, 0LL);
  v44.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v40 = v41;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v44, &v40, 0LL);
  v46.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v45.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v42;
  v46.fields.x = (float)((float)v29[6].fields.m_CachedPtr / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v46.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v45, v46, 0LL);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v34);
  v37 = this->fields.crtSvtNameData;
  if ( !v37 )
    goto LABEL_40;
  v38 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v37->fields.svtId, v37->fields.limitCount, v38, v36);
  gameObject = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                                   (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                                                   0LL)) == 0LL )
  {
LABEL_40:
    sub_B0D97C(gameObject);
  }
  v39 = StringLiteral_16864/*"bit_result_name_reveal"*/;
  gameObject[2].monitor = (void *)StringLiteral_16864/*"bit_result_name_reveal"*/;
  sub_B0D840(&gameObject[2].monitor, v39);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9431/*"NameRevealCrossFade"*/,
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
  ServantTreasureDeviceAddMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantTreasureDeviceAddMaster_o *v26; // x24
  __int64 v27; // x25
  __int64 v28; // x26
  int32_t v29; // w0
  __int64 v30; // x8
  int32_t v31; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v35; // x25
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x24
  __int64 v37; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v39; // x8
  __int64 v40; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_421100E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_12391/*"START_NOBLEUP_EFFECT"*/, v22);
    sub_B0D8A4(&StringLiteral_13493/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v23);
    sub_B0D8A4(&StringLiteral_13494/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v24);
    byte_421100E = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, usrSvtData);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_32;
  v26 = Master_WarQuestSelectionMaster;
  v28 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v28;
  *(_QWORD *)&v44.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v44, 0LL);
  v30 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
  v31 = v29;
  *(_QWORD *)&v45.fields.currentCryptoKey = v30;
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                         v45,
                                                                         0LL);
  if ( !v26 )
    goto LABEL_32;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   v26,
                   v31,
                   (int32_t)Master_WarQuestSelectionMaster,
                   0,
                   0LL);
  v35 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_B0D974(
                                                                      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo,
                                                                      v33,
                                                                      v34);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v35, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v35;
  sub_B0D840(&this->fields.npInfoAddManager, v35);
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
                                                                           (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
    if ( (int)Master_WarQuestSelectionMaster >= 1 )
    {
      v37 = 8LL;
      while ( 1 )
      {
        treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
        if ( !treasureDeviceIds )
          break;
        if ( v37 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
          goto LABEL_33;
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
          (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
          *((_DWORD *)&treasureDeviceIds->obj.klass + v37),
          targetLvOld,
          0LL);
        v39 = EnableEntity->fields.treasureDeviceIds;
        if ( !v39 )
          break;
        if ( v37 - 8 >= (unsigned __int64)v39->max_length )
        {
LABEL_33:
          v43 = sub_B0D9A8(Master_WarQuestSelectionMaster);
          sub_B0D948(v43, 0LL);
        }
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
          *((_DWORD *)&v39->obj.klass + v37),
          targetLv,
          0LL);
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                               (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
        v40 = v37 - 7;
        ++v37;
        if ( v40 >= (int)Master_WarQuestSelectionMaster )
          goto LABEL_22;
      }
LABEL_32:
      sub_B0D97C(Master_WarQuestSelectionMaster);
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
                                                                         (System_String_o *)StringLiteral_13493/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                                         0LL);
  if ( !unSummonLabel )
    goto LABEL_32;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_13494/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                                         0LL);
  if ( !unSummonDetail )
    goto LABEL_32;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_12391/*"START_NOBLEUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetPowerUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4211016 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12394/*"START_POWERUP_EFFECT"*/, usrSvtData);
    byte_4211016 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, usrSvtData);
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12394/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t kind; // w8
  CommonUI_o *Instance; // x0
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

  if ( (byte_4211028 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4211028 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_B0D97C(Instance);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v18; // x20
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  UserServantEntity_o *v24; // x21
  UserServantEntity_o *v25; // x22
  struct UserServantEntity_o *v26; // x8
  __int64 v27; // x21
  __int64 v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v32; // x22
  struct UserServantEntity_o *v33; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x24
  __int64 v35; // x21
  __int64 v36; // x22
  int32_t v37; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr00_16
  struct UserServantEntity_o *v39; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v41; // x21
  int32_t v42; // w22
  CombineResultEffectComponent_o *v43; // x8
  UserServantEntity_o *v44; // x20
  UserServantEntity_o *v45; // x21
  struct UserServantEntity_o **p_resUsrSvtData; // x20
  struct UserServantEntity_o *v47; // x21
  __int64 v48; // x19
  __int64 v49; // x20
  int32_t v50; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  v2 = this;
  if ( (byte_4211027 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    this = (CombineResultEffectComponent_o *)sub_B0D8A4(&UserServantEntity_TypeInfo, v10);
    byte_4211027 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_53;
    v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v54.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v53 = v54;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v53, 0LL) < 1 )
    {
      v44 = v2->fields.baseUsrSvtData;
      v45 = (UserServantEntity_o *)sub_B0D974(UserServantEntity_TypeInfo, v13, v14);
      UserServantEntity___ctor_21250620(v45, v44, 0LL);
      p_resUsrSvtData = &v2->fields.resUsrSvtData;
      v2->fields.resUsrSvtData = v45;
      sub_B0D840(&v2->fields.resUsrSvtData, v45);
      if ( (v2->fields.kind | 0x10) != 26 )
        return;
      v47 = *p_resUsrSvtData;
      if ( *p_resUsrSvtData )
      {
        v49 = *(_QWORD *)&v47->fields.limitCount.fields.currentCryptoKey;
        v48 = *(_QWORD *)&v47->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v49;
        *(_QWORD *)&v58.fields.fakeValue = v48;
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v58, 0LL);
        v47->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v50 + 1, 0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v15 = v2->fields.baseUsrSvtData;
        if ( v15 )
        {
          v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
          v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v54.fields.fakeValue = v16;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v52 = v54;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                     &v52,
                                                     0LL);
          if ( v17 )
          {
            v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                       v17,
                                                       &v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_53;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v19 = v2->fields.baseUsrSvtData;
              if ( !v19 )
                goto LABEL_53;
              v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
              v21 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
              *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v54.fields.fakeValue = v20;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v51 = v54;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                         &v51,
                                                         0LL);
              if ( !v21 )
                goto LABEL_53;
              this = (CombineResultEffectComponent_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                         v21,
                                                         &v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v24 = v2->fields.baseUsrSvtData;
                v25 = (UserServantEntity_o *)sub_B0D974(UserServantEntity_TypeInfo, v22, v23);
                UserServantEntity___ctor_21250620(v25, v24, 0LL);
                v2->fields.resUsrSvtData = v25;
                sub_B0D840(&v2->fields.resUsrSvtData, v25);
              }
            }
            if ( v2->fields.kind != 19 )
              return;
            v26 = v2->fields.baseUsrSvtData;
            if ( v26 )
            {
              v28 = *(_QWORD *)&v26->fields.limitCount.fields.currentCryptoKey;
              v27 = *(_QWORD *)&v26->fields.limitCount.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v56.fields.currentCryptoKey = v28;
              *(_QWORD *)&v56.fields.fakeValue = v27;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                         v56,
                                                         0LL);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v32 = (UserServantEntity_o *)sub_B0D974(UserServantEntity_TypeInfo, v29, v30);
                UserServantEntity___ctor_21250620(v32, resUsrSvtData, 0LL);
                v2->fields.resUsrSvtData = v32;
                sub_B0D840(&v2->fields.resUsrSvtData, v32);
                v33 = v2->fields.baseUsrSvtData;
                if ( v33 )
                {
                  v34 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                  v36 = *(_QWORD *)&v33->fields.limitCount.fields.currentCryptoKey;
                  v35 = *(_QWORD *)&v33->fields.limitCount.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v57.fields.currentCryptoKey = v36;
                  *(_QWORD *)&v57.fields.fakeValue = v35;
                  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v57, 0LL);
                  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v37 + 1, 0LL);
                  this = *(CombineResultEffectComponent_o **)&v38.fields.currentCryptoKey;
                  if ( v34 )
                  {
                    v34[6] = v38;
                    v39 = v2->fields.baseUsrSvtData;
                    if ( v39 )
                    {
                      hp = v39->fields.hp;
                      afterAtk[0] = v39->fields.atk;
                      afterAtk[1] = hp;
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v18 )
                        {
                          v41 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                     (*v18)[5],
                                                                     0LL);
                          if ( *v18 )
                          {
                            v42 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                       (*v18)[6],
                                                                       0LL);
                            if ( v41 )
                            {
                              this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                         v41,
                                                                         v42,
                                                                         (int32_t)this,
                                                                         0LL);
                              if ( this )
                              {
                                v43 = this;
                                this = (CombineResultEffectComponent_o *)v2->fields.combineResStatus;
                                if ( this )
                                {
                                  CheckCombineResStatus__getCombineResStatus(
                                    (CheckCombineResStatus_o *)this,
                                    &afterAtk[1],
                                    afterAtk,
                                    v2->fields.resUsrSvtData,
                                    HIDWORD(v43->fields.svtResultInfoWindow),
                                    0LL);
                                  if ( *v18 )
                                  {
                                    *(_DWORD *)&(*v18)[16].fields.inited = afterAtk[1];
                                    if ( *v18 )
                                    {
                                      (*v18)[16].fields.fakeValue = afterAtk[0];
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
    sub_B0D97C(this);
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
  void *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v33; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t v37; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x28
  __int64 v39; // x10
  int v40; // w8
  int v41; // w8
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__105_0; // x24
  Il2CppObject *v44; // x25
  struct CombineResultEffectComponent___c_StaticFields *v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x8
  int v49; // w24
  TerminalSceneComponent_c *v50; // x0
  struct CombineResultEffectComponent_MessageDelegate_o **p_messageCallback; // x21
  int size; // w8
  __int64 v53; // x20
  __int64 v54; // x8
  __int64 v55; // x1
  __int64 v56; // x8
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-68h]
  struct CombineResultEffectComponent_MessageDelegate_o *v58; // [xsp+18h] [xbp-58h]

  if ( (byte_421101C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12);
    sub_B0D8A4(&Method_System_Comparison_ServantTreasureDvcEntity___ctor__, v13);
    sub_B0D8A4(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v21);
    sub_B0D8A4(&ServantTreasureDvcEntity_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v24);
    sub_B0D8A4(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__, v25);
    sub_B0D8A4(&CombineResultEffectComponent___c_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_12395/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v27);
    sub_B0D8A4(&StringLiteral_16874/*"bit_result_ultimate_anim"*/, v28);
    sub_B0D8A4(&StringLiteral_13080/*"StartAnimationName"*/, v29);
    byte_421101C = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  this->fields.messageCallback = 0LL;
  sub_B0D840(&this->fields.messageCallback, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  p_callbackFunc = &this->fields.callbackFunc;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_67;
  v58 = msgCallBack;
  v33 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v33 )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         v33,
         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v33,
                   v37,
                   (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v39 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v39
        || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v39 - 8) != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      v40 = *((_DWORD *)Instance + 9);
      if ( v40 >= 1 && v40 == questId )
      {
        v41 = *((_DWORD *)Instance + 10);
        if ( v41 < 1 || v41 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v34 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v34,
              v38,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
          }
        }
      }
      if ( ++v37 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v33,
                      (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_19;
    }
LABEL_67:
    sub_B0D97C(Instance);
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
    v44 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_ServantTreasureDvcEntity__TypeInfo,
                                                                            v35,
                                                                            v36);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__105_0,
      v44,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
    v45 = CombineResultEffectComponent___c_TypeInfo->static_fields;
    v45->__9__105_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__105_0;
    sub_B0D840(&v45->__9__105_0, _9__105_0);
  }
  if ( !v34 )
    goto LABEL_67;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v34,
    (System_Comparison_T__o *)_9__105_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  if ( v34->fields._size < 1 )
  {
    v49 = 0;
  }
  else
  {
    v48 = v34->fields._items->m_Items[0];
    if ( !v48 )
      goto LABEL_67;
    v49 = 1;
    this->fields.targetSvtId = v48->fields.missionTargetId;
  }
  Instance = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*((_QWORD *)Instance + 23) + 504LL) || (size = v34->fields._size, size < 1) )
  {
LABEL_36:
    if ( !v49 )
    {
LABEL_64:
      if ( *p_callbackFunc )
        CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
      return;
    }
  }
  else
  {
    v53 = 4LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)(v53 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v54 = *((_QWORD *)&v34->fields._items->obj.klass + v53);
      if ( !v54 )
        goto LABEL_67;
      Instance = (void *)CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *(_DWORD *)(v54 + 16), v47);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      size = v34->fields._size;
      if ( (int)++v53 - 4 >= size )
        goto LABEL_36;
    }
    if ( v34->fields._size <= (unsigned int)(v53 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v56 = *((_QWORD *)&v34->fields._items->obj.klass + v53);
    if ( !v56 )
      goto LABEL_67;
    this->fields.targetSvtId = *(_DWORD *)(v56 + 16);
    if ( !v49 )
      goto LABEL_64;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v46);
    byte_421083D = 1;
  }
  v50 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    p_messageCallback = &this->fields.messageCallback;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v50 = TerminalSceneComponent_TypeInfo;
    }
  }
  else
  {
    p_messageCallback = &this->fields.messageCallback;
  }
  Instance = v50->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_67;
  TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
  this->fields.messageCallback = v58;
  sub_B0D840(p_messageCallback, v58);
  Instance = this->fields.fsm;
  if ( !Instance )
    goto LABEL_67;
  Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_67;
  Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               (HutongGames_PlayMaker_FsmVariables_o *)Instance,
               (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
               0LL);
  if ( !Instance )
    goto LABEL_67;
  v55 = StringLiteral_16874/*"bit_result_ultimate_anim"*/;
  *((_QWORD *)Instance + 7) = StringLiteral_16874/*"bit_result_ultimate_anim"*/;
  sub_B0D840((char *)Instance + 56, v55);
  Instance = this->fields.fsm;
  if ( !Instance )
    goto LABEL_67;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12395/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSecretTreasureDeviceInfoForSvtGet(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x21
  const MethodInfo *v11; // x2
  BalanceConfig_c *v12; // x0
  PlayMakerFSM_o *fsm; // x0
  __int64 v14; // x1

  if ( (byte_421101D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&StringLiteral_12395/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v7);
    sub_B0D8A4(&StringLiteral_16874/*"bit_result_ultimate_anim"*/, v8);
    sub_B0D8A4(&StringLiteral_13080/*"StartAnimationName"*/, v9);
    byte_421101D = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v12->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v11) )
  {
    if ( *p_callbackFunc )
      CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
  }
  else
  {
    fsm = this->fields.fsm;
    this->fields.targetSvtId = svtId;
    if ( !fsm
      || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
      || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                    (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                    (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                                    0LL)) == 0LL
      || (v14 = StringLiteral_16874/*"bit_result_ultimate_anim"*/,
          fsm[1].klass = (PlayMakerFSM_c *)StringLiteral_16874/*"bit_result_ultimate_anim"*/,
          sub_B0D840(&fsm[1], v14),
          (fsm = this->fields.fsm) == 0LL) )
    {
      sub_B0D97C(fsm);
    }
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12395/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_421100D & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&StringLiteral_12397/*"START_SKILLUP_EFFECT"*/, v17);
    sub_B0D8A4(&StringLiteral_12286/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v18);
    sub_B0D8A4(&StringLiteral_12287/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v19);
    byte_421100D = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B0D840(&this->fields.baseUsrSvtData, usrSvtData);
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12286/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12287/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12397/*"START_SKILLUP_EFFECT"*/, 0LL);
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
  UIStandFigureR_o *standFigure_k__BackingField; // x0
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

  if ( (byte_4211043 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    byte_4211043 = 1;
  }
  standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                                                      (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)standFigure_k__BackingField < 2 )
  {
    if ( standFigureCollects )
    {
      if ( !standFigureCollects->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = standFigureCollects->fields._items->m_Items[0];
      if ( v15 )
      {
        standFigure_k__BackingField = v15->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetFace_40555568(standFigure_k__BackingField, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_B0D97C(standFigure_k__BackingField);
  }
  v16 = this->fields.playVoiceList;
  if ( !v16 )
    goto LABEL_29;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
  {
LABEL_27:
    v25 = sub_B0D9A8(standFigure_k__BackingField);
    sub_B0D948(v25, 0LL);
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
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v24 = standFigureCollects->fields._items->m_Items[v23];
            if ( !v24 )
              goto LABEL_29;
            standFigure_k__BackingField = v24->fields._standFigure_k__BackingField;
            if ( !standFigure_k__BackingField )
              goto LABEL_29;
            UIStandFigureR__SetFace_40555568(
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4211010 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12399/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_4211010 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B0D840(&this->fields.baseUsrSvtData, baseData);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_B0D840(&this->fields.combineVoiceId, 0LL);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12399/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_17926044(
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4211011 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12399/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_4211011 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B0D840(&this->fields.baseUsrSvtData, baseData);
  this->fields.resUsrSvtData = resData;
  sub_B0D840(&this->fields.resUsrSvtData, resData);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_7;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_B0D840(&this->fields.combineVoiceId, voiceId);
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.combineStatusDisp = statusDisp;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12399/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4211012 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12399/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_4211012 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_B0D840(&this->fields.baseUsrSvtData, baseData);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_B0D840(&this->fields.resUsrSvtData, 0LL);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12399/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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
  System_Action_o *v8; // x21

  if ( (byte_4211049 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__, v3);
    byte_4211049 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_B0D97C(bgCollider);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v8, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *bgCollider; // x0
  _DWORD *v7; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x8
  ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t v13; // w22
  int32_t v14; // w23
  System_Action_o *v15; // x25

  if ( (byte_4211047 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__, v5);
    byte_4211047 = 1;
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
  v7 = bgCollider;
  bgCollider = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
                 this->fields.npInfoAddManager,
                 index,
                 0LL);
  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager
    || !v7
    || !bgCollider
    || (tdAddEntity_k__BackingField = npInfoAddManager->fields._tdAddEntity_k__BackingField,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v13 = v7[7],
        v14 = *((_DWORD *)bgCollider + 7),
        v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9),
        System_Action___ctor(
          v15,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_B0D97C(bgCollider);
  }
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    tdAddEntity_k__BackingField,
    index,
    v13,
    v14,
    v15,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowSkillChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *bgCollider; // x0
  _DWORD *v7; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v11; // w21
  int32_t v12; // w22
  int32_t v13; // w23
  int32_t v14; // w24
  System_String_o *costumeName; // x25
  System_Action_o *v16; // x26

  if ( (byte_4211048 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__, v5);
    byte_4211048 = 1;
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
  v7 = bgCollider;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
                 this->fields.costumeSkillInfoManager,
                 index,
                 0LL);
  if ( !v7 )
    goto LABEL_10;
  if ( !bgCollider )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v11 = v7[4];
  v12 = v7[5];
  v13 = *((_DWORD *)bgCollider + 4);
  v14 = *((_DWORD *)bgCollider + 5);
  costumeName = this->fields.costumeName;
  v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B0D97C(bgCollider);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v11,
    v12,
    v13,
    v14,
    costumeName,
    v16,
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
  System_Action_o *v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4211046 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4211046 = 1;
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
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B0D97C(bgCollider);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v10, v13, 0LL);
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
  int64_t bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x20
  __int128 v10; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v11; // x21
  UserServantEntity_o *Entity; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t id; // w21
  int32_t lv; // w22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v18; // w23
  int32_t v19; // w24
  System_Action_o *v20; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v23; // [xsp+48h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-38h] BYREF

  if ( (byte_421104A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421104A = 1;
  }
  tdInfo = 0LL;
  v23 = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_15;
  bgCollider = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)bgCollider;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v21 = v22;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v21, 0LL);
  if ( !v11 )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v11,
             bgCollider,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_15;
  bgCollider = UserServantEntity__getTreasureDeviceInfo(Entity, &v23, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v23
    || (id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v18 = v23->fields.id,
        v19 = v23->fields.lv,
        v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_15:
    sub_B0D97C(bgCollider);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v18, v19, v20, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__169_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4211064 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__, v4);
    byte_4211064 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_B0D97C(v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v6, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__144_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_4211062 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B0D8A4(&StringLiteral_5500/*"END_LOAD"*/, v3);
    byte_4211062 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_B0D97C(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5500/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__154_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4211063 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent__EndPlay_b__154_2__, v4);
    byte_4211063 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__154_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_B0D97C(v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v6, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__163_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B0D97C(0LL);
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___InitCombineEffect_b__111_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_421105F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5500/*"END_LOAD"*/, method);
    byte_421105F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5500/*"END_LOAD"*/, 0LL);
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
  UnityEngine_GameObject_o *fsm; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  int v15; // s0

  if ( (byte_421105D & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_12389/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_B0D8A4(&StringLiteral_16855/*"bit_result_extraskill"*/, v9);
    sub_B0D8A4(&StringLiteral_11512/*"ResultEffect"*/, v10);
    byte_421105D = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16855/*"bit_result_extraskill"*/,
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v13 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11512/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v13, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B0D97C(fsm);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12389/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  UnityEngine_GameObject_o *fsm; // x0
  System_String_o *v15; // x22
  System_String_o *v16; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *transform; // x21
  int v20; // s0
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_421105E & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&string___TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_11512/*"ResultEffect"*/, v9);
    sub_B0D8A4(&StringLiteral_12378/*"START_COMBINE_LIMIT"*/, v10);
    sub_B0D8A4(&StringLiteral_16849/*"bit_result_"*/, v11);
    byte_421105E = 1;
  }
  if ( data )
  {
    v12 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 1LL);
    v13 = System_Int32__ToString((int)this + 320, 0LL);
    fsm = (UnityEngine_GameObject_o *)System_String__Concat_43849904((System_String_o *)StringLiteral_16849/*"bit_result_"*/, v13, 0LL);
    if ( !v12 )
      goto LABEL_20;
    v15 = (System_String_o *)fsm;
    if ( fsm )
    {
      fsm = (UnityEngine_GameObject_o *)sub_B0D964(fsm, v12->obj.klass->_1.element_class);
      if ( !fsm )
      {
        v24 = sub_B0D99C();
        sub_B0D948(v24, 0LL);
      }
    }
    if ( !v12->max_length )
    {
      v23 = sub_B0D9A8(fsm);
      sub_B0D948(v23, 0LL);
    }
    v12->m_Items[0] = v15;
    sub_B0D840(v12->m_Items, v15);
    v16 = System_String__Concat_43930028(v12, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 v16,
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_20;
    v18 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11512/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v18, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_20:
      sub_B0D97C(fsm);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12378/*"START_COMBINE_LIMIT"*/, 0LL);
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
  UnityEngine_GameObject_o *fsm; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  int v15; // s0

  if ( (byte_421105C & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_16858/*"bit_result_friendship_exceed"*/, v8);
    sub_B0D8A4(&StringLiteral_11512/*"ResultEffect"*/, v9);
    sub_B0D8A4(&StringLiteral_12385/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v10);
    byte_421105C = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16858/*"bit_result_friendship_exceed"*/,
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v13 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11512/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v13, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B0D97C(fsm);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12385/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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
  UnityEngine_GameObject_o *fsm; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  int v15; // s0

  if ( (byte_421105B & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_12389/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_B0D8A4(&StringLiteral_16863/*"bit_result_limitbreak"*/, v9);
    sub_B0D8A4(&StringLiteral_11512/*"ResultEffect"*/, v10);
    byte_421105B = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16863/*"bit_result_limitbreak"*/,
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v13 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11512/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v13, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B0D97C(fsm);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12389/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B0D97C(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__149_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B0D97C(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B0D97C(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__148_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B0D97C(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B0D97C(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__113_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4211060 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5500/*"END_LOAD"*/, method);
    byte_4211060 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5500/*"END_LOAD"*/, 0LL);
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
  const MethodInfo *v12; // x1
  DataManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UserServantCollectionEntity_o *v18; // x22
  CombineResultEffectComponent___c__DisplayClass143_2_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  UserServantEntity_o *v22; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CommonUI_o *v28; // x22
  CombineResultEffectComponent_ClickDelegate_o *v29; // x25
  CombineResultEffectComponent_ClickDelegate_o *v30; // x0

  if ( (byte_4211061 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__, v8);
    sub_B0D8A4(&CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo, v9);
    sub_B0D8A4(&UserServantEntity_TypeInfo, v10);
    byte_4211061 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34935488(effect, 0LL);
  this->fields.effect = 0LL;
  sub_B0D840(&this->fields.effect, 0LL);
  CombineResultEffectComponent__Close(this, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v18 = EntityDefinitely;
    v19 = (CombineResultEffectComponent___c__DisplayClass143_2_o *)sub_B0D974(
                                                                     CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo,
                                                                     v16,
                                                                     v17);
    CombineResultEffectComponent___c__DisplayClass143_2___ctor(v19, 0LL);
    if ( v19 )
    {
      v19->fields.__4__this = this;
      sub_B0D840(&v19->fields.__4__this, this);
      v22 = (UserServantEntity_o *)sub_B0D974(UserServantEntity_TypeInfo, v20, v21);
      UserServantEntity___ctor_21250928(v22, v18, 0LL);
      callbackFunc = this->fields.callbackFunc;
      v19->fields.callback = callbackFunc;
      sub_B0D840(&v19->fields, callbackFunc);
      this->fields.callbackFunc = 0LL;
      sub_B0D840(&this->fields.callbackFunc, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v22 )
      {
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v22->fields.treasureDeviceLv1;
        v28 = (CommonUI_o *)Instance;
        v29 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B0D974(
                                                                CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                v24,
                                                                v25);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v29,
          (Il2CppObject *)v19,
          Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__,
          0LL);
        if ( v28 )
        {
          CommonUI__OpenNobleCombineResult(
            v28,
            18,
            v22,
            targetId,
            treasureDeviceLv1,
            v29,
            this->fields.targetIdOld,
            v22->fields.treasureDeviceLv1,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B0D97C(Instance);
  }
  v30 = this->fields.callbackFunc;
  if ( v30 )
    CombineResultEffectComponent_ClickDelegate__Invoke(v30, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B0D97C(0LL);
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
  DataManager_o *Instance; // x0
  ServantFlagEntity_o *v8; // x8
  struct System_Int32_array *args; // x9
  struct System_Int32_array *v10; // x8
  int32_t v11; // w8
  bool result; // w0
  __int64 v13; // x0
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421101F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_421101F = 1;
  }
  svtFlagEntity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_28121116(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0LL) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_15:
    v11 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_16;
  }
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v8 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_17;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v8->fields.args;
  if ( !args )
    goto LABEL_17;
  if ( args->max_length <= 1 )
    goto LABEL_18;
  this->fields.targetId = args->m_Items[2];
  v10 = v8->fields.args;
  if ( !v10 )
LABEL_17:
    sub_B0D97C(Instance);
  if ( !v10->max_length )
  {
LABEL_18:
    v13 = sub_B0D9A8(Instance);
    sub_B0D948(v13, 0LL);
  }
  v11 = v10->m_Items[1];
  result = 1;
LABEL_16:
  this->fields.targetIdOld = v11;
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

  if ( (byte_421104F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421104F = 1;
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
      sub_B0D97C(bgCollider);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CombineResultEffectComponent_StaticFields *static_fields; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21
  __int64 v16; // x0

  if ( (byte_4211024 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_CombineResultEffectComponent__endloadEffect_b__113_0__, v6);
    sub_B0D8A4(&CombineResultEffectComponent_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4211024 = 1;
  }
  if ( data )
  {
    static_fields = CombineResultEffectComponent_TypeInfo->static_fields;
    static_fields->effectAssetData = data;
    sub_B0D840(static_fields, data);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__113_0__, 0LL);
    if ( !Instance )
      sub_B0D97C(v16);
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v15, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v11; // x8
  ServantVoiceMaster_o *v12; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_421102C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421102C = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B0D840(&this->fields.asstName, 0LL);
  this->fields.playVoiceList = 0LL;
  sub_B0D840(&this->fields.playVoiceList, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v8 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v11 = this->fields.resUsrSvtData) == 0LL)
    || (v12 = (ServantVoiceMaster_o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                      v11->fields.limitCount,
                                      0LL),
        !v12) )
  {
LABEL_13:
    sub_B0D97C(Instance);
  }
  Entity = ServantVoiceMaster__getEntity(v12, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B0D840(&this->fields.svtVoiceEntity, Entity);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B0D840(&this->fields.asstName, VoiceAssetName);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceData_array *result; // x0

  if ( (byte_4211040 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    byte_4211040 = 1;
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
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x19
  int v12; // s0
  UnityEngine_Transform_o *v15; // x19
  int v16; // s0

  if ( (byte_4211025 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, parentTr);
    sub_B0D8A4(&CombineResultEffectComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4211025 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_12:
    sub_B0D97C(effectAssetData);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  return v10;
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
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  ServantVoiceData_array *result; // x0
  struct UserServantEntity_o *v10; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_421103F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_421103F = 1;
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
    v10 = this->fields.resUsrSvtData;
    if ( !v10 )
LABEL_22:
      sub_B0D97C(resUsrSvtData);
    v12 = *(_QWORD *)&v10->fields.limitCount.fields.currentCryptoKey;
    v11 = *(_QWORD *)&v10->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v12;
    *(_QWORD *)&v14.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
    result = (ServantVoiceData_array *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                         svtVoiceEntity,
                                         v13,
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
  int SvtVoiceId; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserServantEntity_o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v15; // x21
  __int64 v16; // x24
  int32_t v17; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v19; // x8
  ServantLimitImageMaster_o *v20; // x23
  __int64 v21; // x24
  __int64 v22; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  SvtVoiceId = voiceId;
  if ( (byte_421102B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&voiceId);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_421102B = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B0D840(&this->fields.asstName, 0LL);
  this->fields.playVoiceList = 0LL;
  sub_B0D840(&this->fields.playVoiceList, 0LL);
  if ( SvtVoiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_29;
    v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v16;
    *(_QWORD *)&v27.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v17, 0LL);
  }
  if ( costumeId <= 0 )
  {
    Master_WarQuestSelectionMaster = this->fields.resUsrSvtData;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_29;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_18713680(
                                 Master_WarQuestSelectionMaster->fields.limitCount,
                                 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_WarQuestSelectionMaster, 0, 0LL);
    costumeId = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v19 = this->fields.resUsrSvtData;
  if ( !v19 )
    goto LABEL_29;
  v20 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v22;
  *(_QWORD *)&v28.fields.fakeValue = v21;
  Master_WarQuestSelectionMaster = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                            v28,
                                                            0LL);
  if ( !v20
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v20,
                                       (int32_t)Master_WarQuestSelectionMaster,
                                       costumeId,
                                       0LL),
        (Master_WarQuestSelectionMaster = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_WarQuestSelectionMaster = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_29:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_WarQuestSelectionMaster,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B0D840(&this->fields.svtVoiceEntity, Entity);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B0D840(&this->fields.asstName, VoiceAssetName);
  }
}


void __fastcall CombineResultEffectComponent__loadBoxGachaEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetLoader_LoadEndDataHandler_o *v7; // x20

  if ( (byte_4211023 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent_endloadEffect__, v4);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_5850/*"Effect/Combine"*/, v6);
    byte_4211023 = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5850/*"Effect/Combine"*/, v7, 1, 0LL);
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
  System_Action_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_421102D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent_EndLoad__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_421102D = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v7 = (SoundManager_o *)Instance;
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v7 )
      sub_B0D97C(v11);
    SoundManager__LoadAudioAssetStorage(v7, asstName, v10, 1, 0LL);
  }
  else
  {
    CombineResultEffectComponent__EndLoad(this, method);
  }
}


void __fastcall CombineResultEffectComponent__playVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v9; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v11; // x8
  __int64 v12; // x9
  int32_t svtResultInfoWindow_high; // w21
  int32_t commandCardExceedResultWindow; // w20
  __int64 v15; // x1
  __int64 v16; // x2
  float FadeTime; // s0
  System_Collections_Generic_IEnumerable_TSource__o *currentFigureCollectList; // x0
  float v19; // s8
  int32_t v20; // w2
  ServantVoiceData_array *v21; // x3
  const MethodInfo *v22; // x6
  System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x4
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v27; // x22
  SePlayer_o *v28; // x0
  __int64 v29; // x0

  v2 = this;
  if ( (byte_4211044 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CombineResultEffectComponent_EndPlay__, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v4);
    this = (CombineResultEffectComponent_o *)sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4211044 = 1;
  }
  if ( v2->fields.asstName && v2->fields.maxPlayCnt )
  {
    playVoiceList = v2->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_24;
    playCnt = v2->fields.playCnt;
    max_length = playVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v9 = playVoiceList->m_Items[playCnt];
      if ( !v9 )
        goto LABEL_24;
      id = v9->fields.id;
      v2->fields.vcName = id;
      sub_B0D840(&v2->fields.vcName, id);
      v11 = v2->fields.playVoiceList;
      if ( !v11 )
        goto LABEL_24;
      v12 = v2->fields.playCnt;
      if ( (unsigned int)v12 < v11->max_length )
      {
        this = (CombineResultEffectComponent_o *)v11->m_Items[v12];
        if ( this )
        {
          svtResultInfoWindow_high = HIDWORD(this->fields.svtResultInfoWindow);
          commandCardExceedResultWindow = (int32_t)this->fields.commandCardExceedResultWindow;
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
          currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.currentFigureCollectList;
          if ( currentFigureCollectList )
          {
            v19 = FadeTime;
            if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                   currentFigureCollectList,
                   (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.afterFigureCollectList,
                     (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.afterFigureCollectList,
                     (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
              {
                afterFigureCollectList = v2->fields.afterFigureCollectList;
              }
              else
              {
                afterFigureCollectList = v2->fields.currentFigureCollectList;
              }
              CombineResultEffectComponent__SetStandFigureFace(
                v2,
                svtResultInfoWindow_high,
                v19,
                v20,
                v21,
                afterFigureCollectList,
                commandCardExceedResultWindow,
                v22);
            }
          }
          asstName = v2->fields.asstName;
          vcName = v2->fields.vcName;
          volume = v2->fields.volume;
          v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
          System_Action___ctor(v27, (Il2CppObject *)v2, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v28 = SoundManager__playVoice_24977528(asstName, vcName, volume, v27, 0LL);
          v2->fields.player = v28;
          sub_B0D840(&v2->fields.player, v28);
          ++v2->fields.playCnt;
          return;
        }
LABEL_24:
        sub_B0D97C(this);
      }
    }
    v29 = sub_B0D9A8(this);
    sub_B0D948(v29, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v12; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4211031 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_B0D8A4(&StringLiteral_2744/*"BaseSvtNodeName"*/, v4);
    byte_4211031 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_12:
    sub_B0D97C(this);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v8[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_2744/*"BaseSvtNodeName"*/,
    0,
    v12);
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
  System_String_o *v11; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v13; // x21
  float Value; // s0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v16; // x22
  __int64 v17; // x23
  float v18; // s8
  int32_t v19; // w22
  struct UserServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x23
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v23; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v25; // x19
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421103B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_3902/*"CardScale"*/, v8);
    sub_B0D8A4(&StringLiteral_2743/*"BaseSvtCardNodeName"*/, v9);
    byte_421103B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2743/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3902/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  v17 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v18 = Value;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v17;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                            v20->fields.limitCount,
                            0LL);
  if ( !v21 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v19, (int32_t)fsm, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v13 )
    goto LABEL_25;
  v23 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24036516(
                            gameObject,
                            this->fields.baseUsrSvtData,
                            v23,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v25 = (UnityEngine_Component_o *)fsm,
        v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL),
        !v26)
    || (UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v25, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(fsm);
  }
  v31.fields.x = v18;
  v31.fields.y = v18;
  v31.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v31, 0LL);
}


void __fastcall CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceData_array *CostumeSvtVoiceList; // x0
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

  if ( (byte_4211039 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_8547/*"LimitUpResSvtNodeName"*/, v3);
    byte_4211039 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
    {
      v13 = sub_B0D9A8(CostumeSvtVoiceList);
      sub_B0D948(v13, 0LL);
    }
    v5 = CostumeSvtVoiceList->m_Items[0];
    if ( !v5 )
LABEL_14:
      sub_B0D97C(CostumeSvtVoiceList);
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
  CostumeSvtVoiceList = (ServantVoiceData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
    (System_String_o *)StringLiteral_8547/*"LimitUpResSvtNodeName"*/,
    v12);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(effect, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__setLimitUpBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v12; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4211034 & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_B0D8A4(&StringLiteral_8546/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_4211034 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_12:
    sub_B0D97C(this);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v8[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8546/*"LimitUpBaseSvtNodeName"*/,
    1,
    v12);
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
  ServantVoiceData_o *v9; // x8
  int32_t face; // w22
  int32_t ImageLimitCount; // w2
  const MethodInfo *v12; // x5
  __int64 v13; // x0

  if ( (byte_421103A & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&StringLiteral_8546/*"LimitUpBaseSvtNodeName"*/, v7);
    byte_421103A = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      v13 = sub_B0D9A8(LimitUpSvtVoiceList);
      sub_B0D948(v13, 0LL);
    }
    v9 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v9 )
      sub_B0D97C(LimitUpSvtVoiceList);
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
    (System_String_o *)StringLiteral_8546/*"LimitUpBaseSvtNodeName"*/,
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
  __int64 v9; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v11; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v13; // x23
  float Value; // s0
  float v15; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  struct UICharaGraphTexture_o **p_nameRevealCard; // x20
  UnityEngine_Transform_o *v19; // x19
  int v20; // s0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421103D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3902/*"CardScale"*/, *(_QWORD *)&svtId);
    sub_B0D8A4(&StringLiteral_2743/*"BaseSvtCardNodeName"*/, v9);
    byte_421103D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2743/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3902/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v15 = Value;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
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
  sub_B0D840(&this->fields.nameRevealCard, TexturePrefab);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm
    || (v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL),
        !v19)
    || (UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B0D97C(fsm);
  }
  v23.fields.x = v15;
  v23.fields.y = v15;
  v23.fields.z = v15;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultCostumeSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v7; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v9; // x21
  float Value; // s0
  float v11; // s8
  UserServantEntity_o *resUsrSvtData; // x20
  UnityEngine_GameObject_o *v13; // x21
  int32_t FigureImageLimitCount; // w0
  UnityEngine_Component_o *v15; // x19
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421103E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3902/*"CardScale"*/, *(_QWORD *)&changeNameType);
    sub_B0D8A4(&StringLiteral_11513/*"ResultSvtCardNodeName"*/, v5);
    byte_421103E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11513/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v7 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v7, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v9 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3902/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v9 )
    goto LABEL_16;
  v11 = Value;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_16;
  v13 = (UnityEngine_GameObject_o *)fsm;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(resUsrSvtData, 0, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24036516(
                            v13,
                            resUsrSvtData,
                            FigureImageLimitCount,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v15 = (UnityEngine_Component_o *)fsm,
        v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL),
        !v16)
    || (UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(fsm);
  }
  v20.fields.x = v11;
  v20.fields.y = v11;
  v20.fields.z = v11;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v20, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v15, 1.89, 0LL);
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
  System_String_o *v11; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v13; // x21
  float Value; // s0
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v16; // x22
  __int64 v17; // x23
  float v18; // s8
  int32_t v19; // w22
  struct UserServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x23
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v23; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v25; // x19
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421103C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_3902/*"CardScale"*/, v8);
    sub_B0D8A4(&StringLiteral_11513/*"ResultSvtCardNodeName"*/, v9);
    byte_421103C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11513/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3902/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v18 = Value;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v17;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.resUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                            v20->fields.limitCount,
                            0LL);
  if ( !v21 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v19, (int32_t)fsm, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v13 )
    goto LABEL_25;
  v23 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24036516(
                            gameObject,
                            this->fields.resUsrSvtData,
                            v23,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v25 = (UnityEngine_Component_o *)fsm,
        v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL),
        !v26)
    || (UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v25, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(fsm);
  }
  v31.fields.x = v18;
  v31.fields.y = v18;
  v31.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v31, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v25, 1.89, 0LL);
}


void __fastcall CombineResultEffectComponent__setSkillResultInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
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
  CombineResultEffectComponent___c__DisplayClass143_0_o *v47; // x20
  __int64 Instance; // x0
  const MethodInfo *v49; // x1
  __int64 v50; // x2
  int32_t kind; // w8
  SkillUpResultWindowComponent_o *v52; // x20
  UserServantEntity_o *v53; // x21
  int32_t v54; // w22
  int32_t v55; // w23
  System_Action_o *v56; // x24
  const MethodInfo *v57; // x2
  struct UserServantEntity_o *v58; // x8
  System_String_array *v59; // x20
  System_String_o *v60; // x21
  System_String_o *v61; // x0
  const MethodInfo *v62; // x2
  struct UserServantEntity_o *v63; // x8
  System_String_array *v64; // x20
  System_String_o *v65; // x21
  System_String_o *v66; // x0
  const MethodInfo *v67; // x1
  UserServantEntity_o *v68; // x20
  const MethodInfo *v69; // x2
  struct ServantVoiceData_array **p_playVoiceList; // x20
  struct ServantVoiceData_array **v71; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v77; // x20
  __int64 v78; // x1
  __int64 v79; // x2
  System_Action_o *v80; // x24
  struct UserServantEntity_o *v81; // x8
  int32_t targetIdOld; // w26
  int32_t targetLvOld; // w25
  __int64 v84; // x27
  __int64 v85; // x28
  int32_t v86; // w6
  bool v87; // w8
  __int64 v88; // x20
  __int64 v89; // x20
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v91; // x1
  __int64 v92; // x2
  System_Collections_Generic_List_int__o *v93; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x28
  int32_t v97; // w22
  struct UserServantEntity_o *v98; // x8
  __int64 v99; // x23
  __int64 v100; // x24
  int v101; // w9
  signed int v102; // w10
  __int64 v103; // x8
  __int64 v104; // x23
  struct UserServantEntity_o *v105; // x8
  __int64 v106; // x23
  __int64 v107; // x24
  int32_t v108; // w0
  UserServantEntity_o *v109; // x8
  UserServantCollectionMaster_o *v110; // x23
  struct UserServantEntity_o *v111; // x8
  int64_t v112; // x24
  __int64 v113; // x25
  __int64 v114; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v116; // x23
  struct UserServantEntity_o *v117; // x8
  __int64 v118; // x23
  __int64 v119; // x24
  _BOOL8 v120; // x0
  Il2CppObject *current; // x21
  int64_t UserId; // x0
  struct UserServantEntity_o *v123; // x8
  int64_t v124; // x23
  int32_t v125; // w24
  __int64 v126; // x25
  __int64 v127; // x26
  int32_t v128; // w3
  bool isRelease; // w28
  __int64 v130; // x1
  __int64 v131; // x2
  CommonUI_o *v132; // x20
  AvalonSceneManager_c *v133; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v135; // x0
  __int64 *v136; // x8
  struct ServantVoiceData_array *v137; // x8
  struct UserServantEntity_o *v138; // x8
  __int64 v139; // x20
  __int64 v140; // x21
  struct UserServantEntity_o *v141; // x8
  int v142; // w21
  int v143; // w20
  const MethodInfo *v144; // x1
  __int64 v145; // x2
  struct UserServantEntity_o *v146; // x8
  __int64 v147; // x22
  __int64 v148; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x21
  int32_t v150; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v152; // w8
  SkillUpResultWindowComponent_o *v153; // x20
  UserServantEntity_o *v154; // x21
  System_Action_o *v155; // x22
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  __int64 v157; // x1
  __int64 v158; // x2
  struct UserServantEntity_o *v159; // x8
  __int64 v160; // x27
  __int64 v161; // x28
  SkillUpResultWindowComponent_o *v162; // x20
  UserServantEntity_o *v163; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v165; // x23
  struct UserServantEntity_o **p_baseUsrSvtData; // x22
  struct UserServantEntity_o *v167; // x8
  __int128 v168; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v169; // x20
  struct UserServantEntity_o *v170; // x0
  struct SvtCombineResultWindowComponent_o *v171; // x20
  struct UserServantEntity_o *v172; // x21
  int32_t v173; // w22
  __int64 v174; // x1
  __int64 v175; // x2
  System_Action_o *v176; // x23
  SvtCombineResultWindowComponent_o *v177; // x0
  UserServantEntity_o *v178; // x1
  int32_t v179; // w2
  System_Action_o *v180; // x3
  System_Action_o *v181; // x4
  CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x20
  __int64 v183; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v184; // x21
  QuestEntity_o *v185; // x22
  ServantEntity_o *v186; // x21
  BalanceConfig_c *v187; // x8
  System_String_o *v188; // x22
  Il2CppObject *Name; // x0
  System_String_o *v190; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v192; // x21
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v194; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v195; // x21
  struct UserServantEntity_o *v196; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v198; // w21
  const MethodInfo *v199; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v201; // x3
  __int64 v202; // x2
  CombineResultEffectComponent___c__DisplayClass143_1_o *v203; // x22
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *CS___8__locals1; // x23
  __int64 v206; // x1
  __int64 v207; // x2
  System_Action_o *v208; // x24
  Il2CppObject *v209; // x21
  __int64 v210; // x1
  __int64 v211; // x2
  CombineResultEffectComponent_ClickDelegate_o *v212; // x22
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v214; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v216; // x23
  __int64 v217; // x1
  __int64 v218; // x2
  System_Action_o *v219; // x24
  System_String_o *v220; // x23
  Il2CppObject *v221; // x22
  Il2CppObject *v222; // x0
  __int64 v223; // x1
  __int64 v224; // x2
  AvalonSceneManager_c *v225; // x8
  System_Action_o *v226; // x21
  __int64 v227; // x0
  __int64 v228; // x0
  SkillUpResultWindowComponent_o *v229; // x21
  int32_t v230; // w22
  int32_t v231; // w23
  System_Action_o *v232; // x24
  struct UserServantEntity_o *v233; // x8
  int32_t v234; // w25
  int32_t v235; // w19
  __int64 v236; // x26
  __int64 v237; // x27
  int32_t v238; // w26
  char isDispLv; // [xsp+10h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v240; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v241; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v242; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v243; // [xsp+80h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int32_t v245; // [xsp+B8h] [xbp-58h]
  int32_t lv; // [xsp+BCh] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v247; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v248; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v249; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v250; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v251; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v252; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v253; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v254; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v255; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v256; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v257; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v258; // 0:x0.16

  if ( (byte_4211041 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v5);
    sub_B0D8A4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v6);
    sub_B0D8A4(&Method_CombineResultEffectComponent_EndDisp__, v7);
    sub_B0D8A4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__, v8);
    sub_B0D8A4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__, v9);
    sub_B0D8A4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__, v10);
    sub_B0D8A4(&Method_CombineResultEffectComponent_clickNext__, v11);
    sub_B0D8A4(&CombineResultFormManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v20);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int___, v21);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v29);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v31);
    sub_B0D8A4(&NetworkManager_TypeInfo, v32);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v35);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v37);
    sub_B0D8A4(&string___TypeInfo, v38);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
    sub_B0D8A4(&Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__, v40);
    sub_B0D8A4(&CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo, v41);
    sub_B0D8A4(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__, v42);
    sub_B0D8A4(&CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo, v43);
    sub_B0D8A4(&StringLiteral_10914/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v44);
    sub_B0D8A4(&StringLiteral_10915/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v45);
    sub_B0D8A4(&StringLiteral_1/*""*/, v46);
    byte_4211041 = 1;
  }
  lv = 0;
  entity = 0LL;
  memset(&v243, 0, sizeof(v243));
  v47 = (CombineResultEffectComponent___c__DisplayClass143_0_o *)sub_B0D974(
                                                                   CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo,
                                                                   method,
                                                                   v2);
  CombineResultEffectComponent___c__DisplayClass143_0___ctor(v47, 0LL);
  if ( v47 )
  {
    v47->fields.__4__this = this;
    sub_B0D840(&v47->fields.__4__this, this);
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
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
          p_baseUsrSvtData = &this->fields.baseUsrSvtData;
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            break;
          v194 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v195 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          *(_OWORD *)&v242.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v242.fields.fakeValue = v194;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v241 = v242;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v241, 0LL);
          if ( !v195 )
            break;
          v196 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v195,
                   Instance,
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          this->fields.resUsrSvtData = v196;
          sub_B0D840(&this->fields.resUsrSvtData, v196);
        }
        if ( !*p_baseUsrSvtData )
          break;
        lv = (*p_baseUsrSvtData)->fields.lv;
        resUsrSvtData = this->fields.resUsrSvtData;
        if ( !resUsrSvtData )
          break;
        v198 = resUsrSvtData->fields.lv;
        if ( !System_Int32__Equals_38472956((int32_t)&lv, v198, 0LL) )
        {
          if ( this->fields.asstName )
          {
            if ( this->fields.svtVoiceEntity )
            {
              playVoiceList = this->fields.playVoiceList;
              if ( playVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
                CombineResultEffectComponent__playVoice(this, v199);
              }
            }
          }
        }
        v47->fields.action = 0LL;
        sub_B0D840(&v47->fields, 0LL);
        if ( CombineResultEffectComponent__CheckCombineLimit(this, lv, v198, v201) )
        {
          v203 = (CombineResultEffectComponent___c__DisplayClass143_1_o *)sub_B0D974(
                                                                            CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo,
                                                                            v49,
                                                                            v202);
          CombineResultEffectComponent___c__DisplayClass143_1___ctor(v203, 0LL);
          if ( !v203 )
            break;
          v203->fields.CS___8__locals1 = v47;
          sub_B0D840(&v203->fields.CS___8__locals1, v47);
          callbackFunc = this->fields.callbackFunc;
          v203->fields.callback = callbackFunc;
          sub_B0D840(&v203->fields, callbackFunc);
          this->fields.callbackFunc = 0LL;
          sub_B0D840(&this->fields.callbackFunc, 0LL);
          CS___8__locals1 = v203->fields.CS___8__locals1;
          v208 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v206, v207);
          System_Action___ctor(
            v208,
            (Il2CppObject *)v203,
            Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__,
            0LL);
          if ( !CS___8__locals1 )
            break;
          CS___8__locals1->fields.action = v208;
          sub_B0D840(&CS___8__locals1->fields, v208);
          v209 = (Il2CppObject *)v203->fields.CS___8__locals1;
          v212 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B0D974(
                                                                   CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                   v210,
                                                                   v211);
          CombineResultEffectComponent_ClickDelegate___ctor(
            v212,
            v209,
            Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__,
            0LL);
          this->fields.callbackFunc = v212;
          sub_B0D840(&this->fields.callbackFunc, v212);
        }
        if ( !this->fields.combineStatusDisp )
        {
LABEL_211:
          CombineResultEffectComponent__EndDisp(this, v49);
          return;
        }
        svtResultInfoWindow = this->fields.svtResultInfoWindow;
        v214 = this->fields.resUsrSvtData;
        baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
        v216 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v202);
        System_Action___ctor(v216, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v219 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v217, v218);
        System_Action___ctor(v219, (Il2CppObject *)this, Method_CombineResultEffectComponent_clickNext__, 0LL);
        if ( !svtResultInfoWindow )
          break;
        v177 = svtResultInfoWindow;
        v178 = v214;
        v179 = baseUsrSvtCollictionLv;
        v180 = v216;
        v181 = v219;
LABEL_210:
        SvtCombineResultWindowComponent__setAfterSvtResultState(v177, v178, v179, v180, v181, 0LL);
        return;
      case 1:
      case 10:
      case 19:
      case 26:
        Instance = sub_B0D8BC(string___TypeInfo, 1LL);
        v58 = this->fields.baseUsrSvtData;
        if ( !v58 )
          break;
        v59 = (System_String_array *)Instance;
        *(_QWORD *)&v247.fields.currentCryptoKey = &v58->fields.svtId;
        *(_QWORD *)&v247.fields.fakeValue = 0LL;
        Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v247, v57);
        if ( !v59 )
          break;
        v60 = (System_String_o *)Instance;
        if ( Instance )
        {
          Instance = sub_B0D964(Instance, v59->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_229;
        }
        if ( !v59->max_length )
          goto LABEL_226;
        v59->m_Items[0] = v60;
        sub_B0D840(v59->m_Items, v60);
        v61 = System_String__Concat_43930028(v59, 0LL);
        if ( UnityEngine_PlayerPrefs__GetInt_34962660(v61, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
          goto LABEL_23;
        Instance = sub_B0D8BC(string___TypeInfo, 1LL);
        v63 = this->fields.baseUsrSvtData;
        if ( !v63 )
          break;
        v64 = (System_String_array *)Instance;
        *(_QWORD *)&v248.fields.currentCryptoKey = &v63->fields.svtId;
        *(_QWORD *)&v248.fields.fakeValue = 0LL;
        Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v248, v62);
        if ( !v64 )
          break;
        v65 = (System_String_o *)Instance;
        if ( Instance )
        {
          Instance = sub_B0D964(Instance, v64->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_229:
            v228 = sub_B0D99C();
            sub_B0D948(v228, 0LL);
          }
        }
        if ( !v64->max_length )
          goto LABEL_226;
        v64->m_Items[0] = v65;
        sub_B0D840(v64->m_Items, v65);
        v66 = System_String__Concat_43930028(v64, 0LL);
        UnityEngine_PlayerPrefs__SetInt(v66, 0, 0LL);
        v68 = this->fields.baseUsrSvtData;
        if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        }
        CombineResultFormManager__ResetVoiceList(v68, v67);
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
          v71 = &this->fields.playVoiceList;
          LimitUpSvtVoiceList = 0LL;
        }
        else
        {
          LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v69);
          this->fields.playVoiceList = LimitUpSvtVoiceList;
          v71 = &this->fields.playVoiceList;
        }
        sub_B0D840(v71, LimitUpSvtVoiceList);
        v137 = *p_playVoiceList;
        if ( *p_playVoiceList )
        {
LABEL_130:
          if ( this->fields.asstName )
          {
            this->fields.maxPlayCnt = *(_QWORD *)&v137->max_length;
            CombineResultEffectComponent__playVoice(this, v49);
          }
          return;
        }
        v138 = this->fields.baseUsrSvtData;
        if ( !v138 )
          break;
        v140 = *(_QWORD *)&v138->fields.limitCount.fields.currentCryptoKey;
        v139 = *(_QWORD *)&v138->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v255.fields.currentCryptoKey = v140;
        *(_QWORD *)&v255.fields.fakeValue = v139;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v255, 0LL);
        v141 = this->fields.baseUsrSvtData;
        v142 = Instance == 2;
        if ( !v141 )
          break;
        v143 = Instance;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v141->fields.limitCount, 0LL) != 3 )
          goto LABEL_124;
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        v146 = this->fields.baseUsrSvtData;
        if ( v146 )
        {
          v148 = *(_QWORD *)&v146->fields.svtId.fields.currentCryptoKey;
          v147 = *(_QWORD *)&v146->fields.svtId.fields.fakeValue;
          v149 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1016LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v256.fields.currentCryptoKey = v148;
          *(_QWORD *)&v256.fields.fakeValue = v147;
          v150 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v256, 0LL);
          v142 = (v143 == 2) | System_Linq_Enumerable__Contains_int_(
                                 v149,
                                 v150,
                                 (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_124:
          isLimitUpSuppression = this->fields.isLimitUpSuppression;
          if ( this->fields.isLimitUpSuppression )
          {
            v152 = this->fields.kind;
            isLimitUpSuppression = v152 != 10 && v152 != 26;
          }
          if ( (isLimitUpSuppression & v142) != 0 )
          {
            CombineResultEffectComponent__OpenLimitCountSealDialog(this, v144);
            return;
          }
          limitUpResultCheck = this->fields.limitUpResultCheck;
          v192 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v144, v145);
          System_Action___ctor(
            v192,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__,
            0LL);
          if ( limitUpResultCheck )
          {
            LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v192, 1, 0LL);
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
        v77 = SkillIdList;
        v80 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v78, v79);
        System_Action___ctor(v80, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v81 = this->fields.baseUsrSvtData;
        if ( !v81 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v85 = *(_QWORD *)&v81->fields.svtId.fields.currentCryptoKey;
        v84 = *(_QWORD *)&v81->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v249.fields.currentCryptoKey = v85;
        *(_QWORD *)&v249.fields.fakeValue = v84;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v249, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v86 = Instance;
        v87 = this->fields.kind == 3;
        isDispLv = 0;
        goto LABEL_142;
      case 4:
      case 5:
      case 8:
      case 18:
      case 27:
        v52 = this->fields.skillResultInfoWindow;
        v53 = this->fields.baseUsrSvtData;
        v54 = this->fields.targetId;
        v55 = this->fields.targetLv;
        v56 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
        System_Action___ctor(v56, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v52 )
          break;
        SkillUpResultWindowComponent__OpenNpUpResultInfo_24963200(
          v52,
          v53,
          v54,
          v55,
          v56,
          this->fields.targetIdOld,
          this->fields.targetLvOld,
          this->fields.kind,
          0LL);
        return;
      case 6:
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v167 = this->fields.baseUsrSvtData;
        if ( !v167 )
          break;
        v168 = *(_OWORD *)&v167->fields.id.fields.fakeValue;
        v169 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
        *(_OWORD *)&v242.fields.currentCryptoKey = *(_OWORD *)&v167->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v242.fields.fakeValue = v168;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v240 = v242;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v240, 0LL);
        if ( !v169 )
          break;
        v170 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 v169,
                 Instance,
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.resUsrSvtData = v170;
        sub_B0D840(&this->fields.resUsrSvtData, v170);
        v171 = this->fields.svtResultInfoWindow;
        v172 = this->fields.resUsrSvtData;
        v173 = this->fields.baseUsrSvtCollictionLv;
        v176 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v174, v175);
        System_Action___ctor(v176, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v171 )
          break;
        v177 = v171;
        v178 = v172;
        v179 = v173;
        v180 = v176;
        v181 = 0LL;
        goto LABEL_210;
      case 7:
      case 21:
        v88 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
          sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v89 = **(_QWORD **)(v88 + 192);
        if ( (*(_BYTE *)(v89 + 306) & 1) == 0 )
          sub_AA65A4(v89);
        Instance = **(_QWORD **)(v89 + 184);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        v93 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v91,
                                                          v92);
        System_Collections_Generic_List_int____ctor(
          v93,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
        v96 = 0LL;
        v97 = 1;
LABEL_59:
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v97 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v98 = this->fields.baseUsrSvtData;
          if ( v98 )
          {
            v100 = *(_QWORD *)&v98->fields.svtId.fields.currentCryptoKey;
            v99 = *(_QWORD *)&v98->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v250.fields.currentCryptoKey = v100;
            *(_QWORD *)&v250.fields.fakeValue = v99;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v250, 0LL);
            if ( MasterData_WarQuestSelectionMaster )
            {
              Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                    MasterData_WarQuestSelectionMaster,
                                    Instance,
                                    v97,
                                    0LL);
              if ( Instance )
              {
                v101 = *(_DWORD *)(Instance + 24);
                if ( v101 < 1 )
                {
LABEL_51:
                  v105 = this->fields.baseUsrSvtData;
                  if ( !v105 )
                    break;
                  v107 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
                  v106 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v251.fields.currentCryptoKey = v107;
                  *(_QWORD *)&v251.fields.fakeValue = v106;
                  v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v251, 0LL);
                  Instance = (__int64)ServantSkillMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v108,
                                        v97,
                                        1,
                                        0LL);
                  v103 = Instance;
                  v104 = v96;
                  if ( Instance )
                  {
LABEL_56:
                    if ( !v93 )
                      break;
                    System_Collections_Generic_List_int___Add(
                      v93,
                      *(_DWORD *)(v103 + 28),
                      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                    v96 = v104;
                  }
                  ++v97;
                  goto LABEL_59;
                }
                v102 = 0;
                while ( 1 )
                {
                  if ( v102 >= (unsigned int)v101 )
                  {
LABEL_226:
                    v227 = sub_B0D9A8(Instance);
                    sub_B0D948(v227, 0LL);
                  }
                  v103 = *(_QWORD *)(Instance + 8LL * v102 + 32);
                  if ( !v103 )
                    break;
                  v104 = *(_QWORD *)(Instance + 8LL * v102 + 32);
                  if ( *(_DWORD *)(v103 + 28) == this->fields.targetId )
                    goto LABEL_56;
                  if ( ++v102 >= v101 )
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
            v109 = this->fields.baseUsrSvtData;
            v245 = Instance;
            if ( !v109 )
              break;
            Instance = UserServantEntity__IsHeroine(v109, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              v110 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              v111 = this->fields.baseUsrSvtData;
              if ( !v111 )
                break;
              v112 = Instance;
              v114 = *(_QWORD *)&v111->fields.svtId.fields.currentCryptoKey;
              v113 = *(_QWORD *)&v111->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v252.fields.currentCryptoKey = v114;
              *(_QWORD *)&v252.fields.fakeValue = v113;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v252, 0LL);
              if ( !v110 )
                break;
              Instance = UserServantCollectionMaster__TryGetEntity(v110, &entity, v112, Instance, 0LL);
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
                  v116 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v116,
                               (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v116, 0LL);
                    v245 = Instance;
                  }
                }
              }
            }
            v117 = this->fields.baseUsrSvtData;
            if ( !v117 )
              break;
            v119 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
            v118 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v253.fields.currentCryptoKey = v119;
            *(_QWORD *)&v253.fields.fakeValue = v118;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v253, 0LL);
            if ( !v96 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  *(_DWORD *)(v96 + 20),
                                  this->fields.targetIdOld,
                                  0LL);
            if ( !Instance )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v242,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            v243.fields.current = (Il2CppObject *)v242.fields.fakeValue;
            *(_OWORD *)&v243.fields.list = *(_OWORD *)&v242.fields.currentCryptoKey;
            while ( 1 )
            {
              v120 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v243,
                       (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v120 )
                break;
              current = v243.fields.current;
              if ( !v243.fields.current )
                sub_B0D97C(v120);
              if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v243.fields.current, 0, 0LL) )
              {
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                UserId = NetworkManager__get_UserId(0LL);
                v123 = this->fields.baseUsrSvtData;
                if ( !v123 )
                  sub_B0D97C(UserId);
                v124 = UserId;
                v125 = v123->fields.lv;
                v127 = *(_QWORD *)&v123->fields.limitCount.fields.currentCryptoKey;
                v126 = *(_QWORD *)&v123->fields.limitCount.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v254.fields.currentCryptoKey = v127;
                *(_QWORD *)&v254.fields.fakeValue = v126;
                v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v254, 0LL);
                if ( ServantSkillEntity__isUse(
                       (ServantSkillEntity_o *)current,
                       v124,
                       v125,
                       v128,
                       v245,
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
              &v243,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
          }
          else
          {
            isRelease = 0;
          }
          v229 = this->fields.skillResultInfoWindow;
          v230 = this->fields.targetId;
          v231 = this->fields.targetLv;
          v232 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v94, v95);
          System_Action___ctor(v232, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
          v233 = this->fields.baseUsrSvtData;
          if ( v233 )
          {
            v234 = this->fields.targetIdOld;
            v235 = this->fields.targetLvOld;
            v237 = *(_QWORD *)&v233->fields.svtId.fields.currentCryptoKey;
            v236 = *(_QWORD *)&v233->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v258.fields.currentCryptoKey = v237;
            *(_QWORD *)&v258.fields.fakeValue = v236;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v258, 0LL);
            if ( v93 )
            {
              v238 = Instance;
              Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                                    v93,
                                    (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v229 )
              {
                SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                  v229,
                  v230,
                  v231,
                  v232,
                  v234,
                  v235,
                  v238,
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
        v162 = this->fields.skillResultInfoWindow;
        v163 = this->fields.baseUsrSvtData;
        oldFriendShipRank = this->fields.oldFriendShipRank;
        v165 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
        System_Action___ctor(v165, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v162 )
          break;
        SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v162, v163, oldFriendShipRank, v165, 0LL);
        return;
      case 11:
        v153 = this->fields.skillResultInfoWindow;
        v154 = this->fields.baseUsrSvtData;
        v155 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
        System_Action___ctor(v155, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v153 )
          break;
        SkillUpResultWindowComponent__OpenPowerUpResultInfo(v153, v154, v155, 0LL);
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
        CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v49);
        this->fields.playVoiceList = CostumeSvtVoiceList;
        sub_B0D840(&this->fields.playVoiceList, CostumeSvtVoiceList);
        v137 = this->fields.playVoiceList;
        if ( v137 )
          goto LABEL_130;
        goto LABEL_211;
      case 16:
      case 17:
        if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        {
          v132 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v133 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v133 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v133->static_fields->DEFAULT_FADE_TIME;
          v135 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v130, v131);
          v136 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__;
        }
        else
        {
          if ( kind == 16 )
          {
            messageCallback = this->fields.messageCallback;
            if ( messageCallback )
            {
              this->fields.messageCallback = 0LL;
              sub_B0D840(&this->fields.messageCallback, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              v184 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4210852 )
              {
                sub_B0D8A4(&TerminalPramsManager_TypeInfo, v183);
                byte_4210852 = 1;
              }
              Instance = (__int64)TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (__int64)TerminalPramsManager_TypeInfo;
              }
              if ( !v184 )
                break;
              v185 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v184,
                                        *(_DWORD *)(*(_QWORD *)(Instance + 184) + 16LL),
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !Instance )
                break;
              v186 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.targetSvtId,
                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v187 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v187 = BalanceConfig_TypeInfo;
              }
              if ( v187->static_fields->CloseSecretTreasureDeviceQuestClear )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10915/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
                if ( !v186 )
                  break;
                v188 = (System_String_o *)Instance;
                Name = (Il2CppObject *)ServantEntity__getName(v186, -1, -1, 0LL);
                v190 = System_String__Format(v188, Name, 0LL);
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10914/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
                if ( !v185 )
                  break;
                v220 = (System_String_o *)Instance;
                Instance = (__int64)QuestEntity__getQuestName(v185, 0LL);
                if ( !v186 )
                  break;
                v221 = (Il2CppObject *)Instance;
                v222 = (Il2CppObject *)ServantEntity__getName(v186, -1, -1, 0LL);
                v190 = System_String__Format_43845440(v220, v221, v222, 0LL);
              }
              CombineResultEffectComponent_MessageDelegate__Invoke(messageCallback, v190, 0LL);
            }
          }
          if ( !this->fields.callbackFunc )
            return;
          v132 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v225 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v225 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v225->static_fields->DEFAULT_FADE_TIME;
          v135 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v223, v224);
          v136 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__;
        }
        v226 = v135;
        System_Action___ctor(v135, (Il2CppObject *)this, *v136, 0LL);
        if ( v132 )
        {
          CommonUI__maskFadeout(v132, 1, DEFAULT_FADE_TIME, v226, 0LL);
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
        FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_29203688(
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
        v77 = *(System_Int32_array **)(Instance + 16);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v80 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v157, v158);
        System_Action___ctor(v80, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v159 = this->fields.baseUsrSvtData;
        if ( !v159 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v161 = *(_QWORD *)&v159->fields.svtId.fields.currentCryptoKey;
        v160 = *(_QWORD *)&v159->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v257.fields.currentCryptoKey = v161;
        *(_QWORD *)&v257.fields.fakeValue = v160;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v257, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v86 = Instance;
        v87 = this->fields.targetLvOld == 0;
        isDispLv = 1;
LABEL_142:
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          targetId,
          targetLv,
          v80,
          targetIdOld,
          targetLvOld,
          v86,
          v77,
          v87,
          1,
          isDispLv,
          0LL);
        return;
      default:
        return;
    }
  }
  sub_B0D97C(Instance);
}


void __fastcall CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  struct SePlayer_o **p_player; // x19

  if ( (byte_421104D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421104D = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = &this->fields.player;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    *p_player = 0LL;
    sub_B0D840(p_player, 0LL);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4211E5E & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isDecide);
    byte_4211E5E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  CombineResultEffectComponent_ClickDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20

  if ( (byte_4211E5F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v3);
    byte_4211E5F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo,
                                                                                                 v4,
                                                                                                 v5);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v6;
  sub_B0D840(&this->fields, v6);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo,
                                                                                                 v7,
                                                                                                 v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v9;
  sub_B0D840(&this->fields.afterSkillList, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x0

  if ( (byte_4211E61 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4211E61 = 1;
  }
  v8 = sub_B0D974(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id, *(_DWORD *)(v8 + 20) = lv, (afterSkillList = this->fields.afterSkillList) == 0LL) )
  {
    sub_B0D97C(afterSkillList);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x0

  if ( (byte_4211E60 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4211E60 = 1;
  }
  v8 = sub_B0D974(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id, *(_DWORD *)(v8 + 20) = lv, (beforeSkillList = this->fields.beforeSkillList) == 0LL) )
  {
    sub_B0D97C(beforeSkillList);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
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
  if ( (byte_4211E63 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B0D8A4(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
                                                                       *(_QWORD *)&index);
    byte_4211E63 = 1;
  }
  afterSkillList = v4->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B0D97C(this);
  if ( afterSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return afterSkillList->fields._items->m_Items[index];
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4211E64 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B0D8A4(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
                                                                       method);
    byte_4211E64 = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B0D97C(this);
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
  if ( (byte_4211E62 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B0D8A4(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
                                                                       *(_QWORD *)&index);
    byte_4211E62 = 1;
  }
  beforeSkillList = v4->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_B0D97C(this);
  if ( beforeSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  sub_B0D840(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  CombineResultEffectComponent_MessageDelegate_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  CombineResultEffectComponent_MessageDelegate_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
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
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, message, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = message->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(message, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(message, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(message, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(message, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(message, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, message, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, message, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                message,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, message, v29);
    }
  }
}


void __fastcall CombineResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211E58 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultEffectComponent___c_TypeInfo, v1);
    byte_4211E58 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CombineResultEffectComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return System_Int32__CompareTo_38472796((_DWORD)a + 24, b->fields.priority, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v9; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v10; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v11; // x8
  __int64 v12; // x1
  __int64 v13; // x2
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v14; // x8
  struct CombineResultEffectComponent_o *v15; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  __int64 _9__4; // x22
  CommonUI_o *v18; // x20
  __int64 v19; // x9
  const MethodInfo *v20; // x2

  v2 = this;
  if ( (byte_4211E59 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)sub_B0D8A4(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__,
                                                                      v5);
    byte_4211E59 = 1;
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
  UnityEngine_Object__DestroyImmediate_34935488(effect, 0LL);
  v9 = v2->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  this[4].klass = 0LL;
  sub_B0D840(&this[4], 0LL);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v10->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0LL);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v11->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  if ( this[4].fields.__9__4 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = v2->fields.CS___8__locals1;
    if ( v14 )
    {
      v15 = v14->fields.__4__this;
      if ( v15 )
      {
        baseUsrSvtData = v15->fields.baseUsrSvtData;
        _9__4 = (__int64)v2->fields.__9__4;
        v18 = (CommonUI_o *)this;
        if ( !_9__4 )
        {
          _9__4 = sub_B0D974(CombineResultEffectComponent_ClickDelegate_TypeInfo, v12, v13);
          v19 = *(_QWORD *)Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)(_9__4 + 40) = Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)(_9__4 + 16) = v19;
          *(_QWORD *)(_9__4 + 32) = v2;
          sub_B0D840(_9__4 + 32, v2);
          v2->fields.__9__4 = (struct CombineResultEffectComponent_ClickDelegate_o *)_9__4;
          sub_B0D840(&v2->fields.__9__4, _9__4);
        }
        if ( v18 )
        {
          CommonUI__OpenCombineLimit(v18, baseUsrSvtData, (CombineResultEffectComponent_ClickDelegate_o *)_9__4, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B0D97C(this);
  }
  if ( this[9].klass )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v2->fields.callback;
    if ( !this )
      goto LABEL_25;
    CombineResultEffectComponent_ClickDelegate__Invoke((CombineResultEffectComponent_ClickDelegate_o *)this, 1, v20);
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
    sub_B0D97C(this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _BYTE *monitor; // x8
  NetworkManager_ResultCallbackFunc_o *klass; // x20
  _DWORD *v9; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_4211E5A & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)sub_B0D8A4(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
                                                                      v6);
    byte_4211E5A = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_12;
  monitor[316] = 0;
  klass = (NetworkManager_ResultCallbackFunc_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     decide,
                                                     method);
    NetworkManager_ResultCallbackFunc___ctor(
      klass,
      v3,
      Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    sub_B0D840(&v3[2], klass);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    klass,
                                                                    (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v9 = v3[1].monitor;
  if ( !v9 || !this )
LABEL_12:
    sub_B0D97C(this);
  CardServantFlagRequest__beginRequest((CardServantFlagRequest_o *)this, v9[77], v9[78], 0LL);
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
  __int64 v3; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  int32_t limitCount; // w20
  int32_t v10; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v2 = this;
  if ( (byte_4211E5B & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineResultEffectComponent___c__DisplayClass165_0_o *)sub_B0D8A4(
                                                                      &ServantCharaGraphEXOpenManager_TypeInfo,
                                                                      v3);
    byte_4211E5B = 1;
  }
  _4__this = v2->fields.__4__this;
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
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v11, 0LL);
  limitCount = v2->fields.limitCount;
  v10 = v8;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v10, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass165_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_B0D97C(this);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_4211E5C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDcd);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__, v6);
    byte_4211E5C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v10 )
    sub_B0D97C(Instance);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v6; // x20

  if ( (byte_4211E5D & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4211E5D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
LABEL_11:
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}