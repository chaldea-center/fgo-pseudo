void CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_StandFigureCollect__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppClass *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__c *v27; // x0
  System_Collections_Generic_HashSet_T__o *v28; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_5974BF9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_2213A60(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_5974BF9 = 1;
  }
  v3 = System_Collections_Generic_List_StandFigureCollect__TypeInfo;
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_E9CF60;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentFigureCollectList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.afterFigureCollectList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = int___TypeInfo;
  this->fields.combineStatusDisp = 1;
  this->fields.costumeOverrideTransformVal = -1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  v19 = sub_2213B20(v18, 1);
  if ( !v19 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v19 + 24) )
    sub_2213CE4(v19);
  *(_DWORD *)(v19 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ChangeCardEffectLvList,
    v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo;
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v28 = (System_Collections_Generic_HashSet_T__o *)sub_2213CCC(v27);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v28,
    (const MethodInfo_42B5FC4 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v28 )
LABEL_7:
    sub_2213CDC(v19, v20);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    1,
    (const MethodInfo_42B7204 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    10,
    (const MethodInfo_42B7204 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    26,
    (const MethodInfo_42B7204 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    19,
    (const MethodInfo_42B7204 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    24,
    (const MethodInfo_42B7204 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.limitUpKinds,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_Component_o *transform; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5974BA0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_5974BA0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v11);
  v12 = UnityEngine_Component__GetComponent_object_(
          transform,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineResStatus,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool CombineResultEffectComponent__CheckCombineLimit(
        CombineResultEffectComponent_o *this,
        int32_t oldLv,
        int32_t currentLv,
        const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v7; // x0
  void *Instance; // x0
  __int64 v9; // x1
  ServantLvDetailMaster_o *v10; // x22
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v13; // w8

  if ( (byte_5974BB5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974BB5 = 1;
  }
  v7 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v7);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v10 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__GetRarity((UserServantEntity_o *)Instance, 1, 0);
  HighestData = ServantLvDetailMaster__GetHighestData(v10, Rarity, oldLv, 0);
  Instance = ServantLvDetailMaster__GetHighestData(v10, Rarity, currentLv, 0);
  if ( !HighestData && Instance )
    goto LABEL_12;
  if ( HighestData )
  {
    if ( Instance )
    {
      if ( HighestData->fields.frameType == *((_DWORD *)Instance + 6) )
        goto LABEL_11;
LABEL_12:
      v13 = *((_DWORD *)Instance + 5);
      LOBYTE(Instance) = 1;
      this->fields.combineLimitLv = v13;
      return (char)Instance;
    }
LABEL_14:
    sub_2213CDC(Instance, v9);
  }
LABEL_11:
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


bool CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_2213CDC(0, method);
  return LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0);
}


void CombineResultEffectComponent__CheckReturnCombineItem(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  int64_t returnQpNum; // x20
  System_Int64_array *returnSvtIds; // x21
  System_Action_o *v6; // x23
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_5974BE8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__CheckReturnCombineItem_b__180_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974BE8 = 1;
  }
  if ( this->fields.returnQpNum >= 1
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.returnSvtIds, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    returnQpNum = this->fields.returnQpNum;
    returnSvtIds = this->fields.returnSvtIds;
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__CheckReturnCombineItem_b__180_0__,
      0);
    if ( !Instance )
      sub_2213CDC(v7, v8);
    CommonUI__OpenReturnCombineItemDialog((CommonUI_o *)Instance, returnQpNum, returnSvtIds, v6, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
bool CombineResultEffectComponent__CheckSaintGraphProfileChange(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_5974BF1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974BF1 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0);
}


void CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0
  AssetData_o *effectAssetData; // x0
  AssetData_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5974BEE & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CombineResultEffectComponent_TypeInfo);
    sub_2213A60(&System_GC_TypeInfo);
    byte_5974BEE = 1;
  }
  this->fields.skillShowIndex = 0;
  this->fields.tdShowIndex = 0;
  CombineResultEffectComponent__DestroySvtFigure(this, method);
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_22;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0);
  if ( !svtResultInfoWindow )
    goto LABEL_22;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_22;
    SvtCombineResultWindowComponent__Close((SvtCombineResultWindowComponent_o *)svtResultInfoWindow, 0);
  }
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_22;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0);
  if ( !svtResultInfoWindow )
    goto LABEL_22;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_22;
    SkillUpResultWindowComponent__Close((SkillUpResultWindowComponent_o *)svtResultInfoWindow, 0);
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( effectAssetData && !AssetData__get_IsEmpty(effectAssetData, 0) )
  {
    v6 = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAsset_47496972(v6, 0);
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      0,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v3);
  System_GC__Collect(0);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !svtResultInfoWindow )
LABEL_22:
    sub_2213CDC(svtResultInfoWindow, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 0, 0);
}


void CombineResultEffectComponent__CloseLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  LimitCountSealDialogComponent_o *limitCountSealDialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_5974BF0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_2213A60(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__188_0__);
    byte_5974BF0 = 1;
  }
  v3 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__188_0__,
    0);
  if ( !limitCountSealDialog )
    sub_2213CDC(v7, v8);
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__CreateAfterFigurePrefab(
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
  Il2CppObject *MasterData_object; // x25
  SvtMultiPortraitMaster_o *v15; // x24
  int32_t v16; // w23
  System_Collections_Generic_List_object__o *v17; // x24
  _BOOL8 v18; // x0
  __int64 v19; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w8
  int32_t v22; // w25
  UnityEngine_GameObject_o *v23; // x0
  int32_t portraitImageId; // w27
  UnityEngine_GameObject_o *v25; // x26
  const MethodInfo *v26; // x1
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  UnityEngine_Component_o *v36; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v38; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x1
  struct System_Int32_array *v42; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v44; // x26
  StandFigureCollect_o *v45; // x27
  __int64 v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v59; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v61; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v63; // x20
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5974BCC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StandFigureCollect_TypeInfo);
    byte_5974BCC = 1;
  }
  memset(&v76, 0, sizeof(v76));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  v13 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v13,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_object )
    goto LABEL_46;
  v15 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                svtId,
                                imageLimitCount,
                                0);
  if ( !v15 )
    goto LABEL_46;
  v16 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v15, svtId, (int32_t)Instance, 2, 0);
  if ( !Instance
    || (v17 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v59);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_47638192(
                                    gameObject,
                                    svtId,
                                    v16,
                                    1,
                                    faceType,
                                    1,
                                    0,
                                    0,
                                    -1,
                                    VoiceEffectPrefab,
                                    0);
      if ( Instance )
      {
        v61 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v63 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v63, 0, v61, 0);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v71 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v63,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
              }
              else
              {
                v73 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v73[4] = (Il2CppClass *)v63;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
              }
              return;
            }
          }
        }
      }
    }
LABEL_46:
    sub_2213CDC(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    v17,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v76 = v75;
  v75.fields._list = 0;
  *(_QWORD *)&v75.fields._index = &v76;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v18 )
      break;
    current = (SvtMultiPortraitEntity_o *)v76.fields._current;
    if ( !v76.fields._current )
      sub_2213CDC(v18, v19);
    klass_high = HIDWORD(v76.fields._current[2].klass);
    if ( klass_high >= 1 )
      v22 = klass_high + 1;
    else
      v22 = 1;
    if ( !StandFigureNode )
      sub_2213CDC(v18, v19);
    v23 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
    portraitImageId = current->fields.portraitImageId;
    v25 = v23;
    original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v26);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v25,
                         portraitImageId,
                         1,
                         faceType,
                         v22,
                         0,
                         0,
                         -1,
                         original,
                         0);
    v36 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_2213CDC(0, v29);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    transform = UnityEngine_Component__get_transform(v36, 0);
    if ( !transform )
      sub_2213CDC(0, v38);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v40 = UnityEngine_Component__get_gameObject(v36, 0);
      v42 = current->fields.commonPosition;
      if ( !v42 )
        sub_2213CDC(v40, v41);
      max_length = v42->max_length;
      if ( max_length == 1 )
        sub_2213CE4(v40);
      if ( !max_length )
        sub_2213CE4(v40);
      GameObjectExtensions__AddLocalPosition_42892452(v40, (float)v42->m_Items[0], (float)v42->m_Items[1], 0);
    }
    v44 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v45 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v45, current, (UIStandFigureR_o *)v36, 0);
    if ( !v44
      || (v54 = v44->fields._items,
          v55 = Method_System_Collections_Generic_List_StandFigureCollect__Add__,
          ++v44->fields._version,
          !v54) )
    {
      sub_2213CDC(v46, v47);
    }
    v56 = v44->fields._size;
    if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v44,
        (Il2CppObject *)v45,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v44->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v45;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v57 + 4), (int32_t)v45, v48, v49, v50, v51, v52, v53);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__CreateBaseFigurePrefab(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        int32_t imageLimitCount,
        int32_t friendshipNum,
        System_String_o *nodeName,
        bool ignoreFormChangeCheck,
        int32_t overwriteType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *StandFigureNode; // x23
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  DataManager_o *v17; // x24
  Il2CppObject *MasterData_object; // x22
  SvtMultiPortraitMaster_o *v19; // x28
  int32_t v20; // w24
  const MethodInfo *v21; // x3
  int32_t v22; // w25
  char v23; // w26
  System_Collections_Generic_List_object__o *v24; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  SvtMultiPortraitEntity_o *current; // x27
  int klass_high; // w8
  int32_t v29; // w28
  UnityEngine_GameObject_o *v30; // x0
  int32_t portraitImageId; // w29
  UnityEngine_GameObject_o *v32; // x22
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  UnityEngine_GameObject_o *v43; // x0
  int32_t v44; // w29
  UnityEngine_GameObject_o *v45; // x22
  const MethodInfo *v46; // x1
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *v48; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v50; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v52; // x0
  __int64 v53; // x1
  struct System_Int32_array *v54; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v56; // x29
  StandFigureCollect_o *v57; // x22
  __int64 v58; // x0
  __int64 v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  struct System_Collections_Generic_List_T__o *list; // x22
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v72; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UnityEngine_GameObject_o *v74; // x22
  const MethodInfo *v75; // x1
  UnityEngine_GameObject_o *v76; // x0
  UIStandFigureR_o *v77; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v79; // x20
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 size; // x10
  Il2CppClass **v89; // x0
  bool v90; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5974BC3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StandFigureCollect_TypeInfo);
    byte_5974BC3 = 1;
  }
  memset(&v93, 0, sizeof(v93));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v17 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v17,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  v19 = (SvtMultiPortraitMaster_o *)Instance;
  v16 = this->fields.kind == 15 ? (unsigned int)this->fields.costumeOverrideTransformVal : 0xFFFFFFFFLL;
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_57;
  Instance = (DataManager_o *)UserServantEntity__GetServantId(this->fields.baseUsrSvtData, v16, 0);
  if ( !MasterData_object )
    goto LABEL_57;
  v20 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                (int32_t)Instance,
                                imageLimitCount,
                                0);
  v22 = (int)Instance;
  v90 = ignoreFormChangeCheck;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v20,
                                  (int32_t)Instance,
                                  v21);
    v23 = (char)Instance;
  }
  else
  {
    v23 = 0;
  }
  if ( !v19 )
    goto LABEL_57;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v19, v20, v22, overwriteType, 0);
  if ( !Instance
    || (v24 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( v90 | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        goto LABEL_57;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v72);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_47638192(
                                    gameObject,
                                    v20,
                                    v22,
                                    1,
                                    0,
                                    1,
                                    0,
                                    v23 & 1,
                                    friendshipNum,
                                    VoiceEffectPrefab,
                                    0);
    }
    else
    {
      if ( !StandFigureNode )
        goto LABEL_57;
      v74 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      v76 = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v75);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_47715000(
                                    v74,
                                    v20,
                                    v22,
                                    formId,
                                    1,
                                    0,
                                    1,
                                    0,
                                    0,
                                    friendshipNum,
                                    v76,
                                    0);
    }
    v77 = (UIStandFigureR_o *)Instance;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      if ( Instance )
      {
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0);
        currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
        v79 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
        StandFigureCollect___ctor(v79, 0, v77, 0);
        if ( currentFigureCollectList )
        {
          items = currentFigureCollectList->fields._items;
          v87 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
          ++currentFigureCollectList->fields._version;
          if ( items )
          {
            size = currentFigureCollectList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                currentFigureCollectList,
                (Il2CppObject *)v79,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
            }
            else
            {
              v89 = &items->obj.klass + size;
              currentFigureCollectList->fields._size = size + 1;
              v89[4] = (Il2CppClass *)v79;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v89 + 4), (int32_t)v79, v80, v81, v82, v83, v84, v85);
            }
            return;
          }
        }
      }
    }
LABEL_57:
    sub_2213CDC(Instance, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v92,
    v24,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v93 = v92;
  v92.fields._list = 0;
  *(_QWORD *)&v92.fields._index = &v93;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v93,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v25 )
      break;
    current = (SvtMultiPortraitEntity_o *)v93.fields._current;
    if ( !v93.fields._current )
      sub_2213CDC(v25, v26);
    klass_high = HIDWORD(v93.fields._current[2].klass);
    if ( klass_high >= 1 )
      v29 = klass_high + 1;
    else
      v29 = 1;
    if ( v90 | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_2213CDC(v25, v26);
      v30 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      portraitImageId = current->fields.portraitImageId;
      v32 = v30;
      original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v33);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v32,
                           portraitImageId,
                           1,
                           0,
                           v29,
                           0,
                           v23 & 1,
                           friendshipNum,
                           original,
                           0);
    }
    else
    {
      if ( !StandFigureNode )
        sub_2213CDC(v25, v26);
      v43 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      v44 = current->fields.portraitImageId;
      v45 = v43;
      v47 = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v46);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(v45, v44, formId, 1, 0, v29, 0, v47, 0);
    }
    v48 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_2213CDC(0, v36);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    transform = UnityEngine_Component__get_transform(v48, 0);
    if ( !transform )
      sub_2213CDC(0, v50);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v52 = UnityEngine_Component__get_gameObject(v48, 0);
      v54 = current->fields.commonPosition;
      if ( !v54 )
        sub_2213CDC(v52, v53);
      max_length = v54->max_length;
      if ( max_length == 1 )
        sub_2213CE4(v52);
      if ( !max_length )
        sub_2213CE4(v52);
      GameObjectExtensions__AddLocalPosition_42892452(v52, (float)v54->m_Items[0], (float)v54->m_Items[1], 0);
    }
    v56 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v57 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v57, current, (UIStandFigureR_o *)v48, 0);
    if ( !v56
      || (v66 = v56->fields._items,
          v67 = Method_System_Collections_Generic_List_StandFigureCollect__Add__,
          ++v56->fields._version,
          !v66) )
    {
      sub_2213CDC(v58, v59);
    }
    v68 = v56->fields._size;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        (Il2CppObject *)v57,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v56->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v57;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 4), (int32_t)v57, v60, v61, v62, v63, v64, v65);
    }
  }
  list = v92.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v92.fields._index,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  if ( list )
    sub_2213CD4(list);
}


void CombineResultEffectComponent__DestroySvtFigure(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x25
  UnityEngine_Object_o *monitor; // x20
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x24
  UnityEngine_Object_o *v20; // x20
  __int64 v21; // x1
  UIStandFigureR_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Component_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x8
  int32_t v28; // w2
  int v29; // w9
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5974BED & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974BED = 1;
  }
  currentFigureCollectList = this->fields.currentFigureCollectList;
  memset(&v31, 0, sizeof(v31));
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)currentFigureCollectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v31 = v30;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v31;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v31,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_2213CDC(v4, v5);
    monitor = (UnityEngine_Object_o *)v31.fields._current[1].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_2213CDC(0, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_2213CDC(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v14 = this->fields.currentFigureCollectList;
  if ( !v14 )
    goto LABEL_40;
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)currentFigureCollectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v31 = v30;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v31;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v17 )
      break;
    v19 = v31.fields._current;
    if ( !v31.fields._current )
      sub_2213CDC(v17, v18);
    v20 = (UnityEngine_Object_o *)v31.fields._current[1].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
    {
      v22 = (UIStandFigureR_o *)v19[1].monitor;
      if ( !v22 )
        sub_2213CDC(0, v21);
      UIStandFigureR__ReleaseCharacter(v22, 0);
      v24 = (UnityEngine_Component_o *)v19[1].monitor;
      if ( !v24 )
        sub_2213CDC(0, v23);
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      UnityEngine_Object__DestroyImmediate_83460132(v26, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_2213CDC(currentFigureCollectList, method);
  v28 = afterFigureCollectList->fields._size;
  v29 = afterFigureCollectList->fields._version + 1;
  afterFigureCollectList->fields._size = 0;
  afterFigureCollectList->fields._version = v29;
  if ( v28 >= 1 )
    System_Array__Clear((System_Array_o *)afterFigureCollectList->fields._items, 0, v28, 0);
}


void CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0) )
  {
    sub_2213CDC(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0);
}


void CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_5974BD7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__EndLoad_b__158_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974BD7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__158_0__, 0);
  if ( !v6 )
    sub_2213CDC(v9, v10);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  ServantVoiceData_o *IsNullOrEmpty; // x0
  const MethodInfo *v4; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  int v6; // w9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *v7; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3

  if ( (byte_5974BE3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_EndPlayProcess__);
    byte_5974BE3 = 1;
  }
  IsNullOrEmpty = (ServantVoiceData_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)this->fields.playVoiceList,
                                          0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    CombineResultEffectComponent__EndPlayProcess(this, v4);
  }
  else
  {
    playVoiceList = this->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_9;
    v6 = this->fields.playCnt - 1;
    if ( (unsigned int)v6 >= LODWORD(playVoiceList->max_length) )
      sub_2213CE4(IsNullOrEmpty);
    IsNullOrEmpty = playVoiceList->m_Items[v6];
    if ( !IsNullOrEmpty )
LABEL_9:
      sub_2213CDC(IsNullOrEmpty, v4);
    v7 = ServantVoiceData__get_AfterPerformance(IsNullOrEmpty, 0);
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndPlayProcess__, 0);
    CombineResultEffectComponent__PlayPerformance(this, v7, v8, v9);
  }
}


void CombineResultEffectComponent__EndPlayProcess(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Request_object; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v20; // x8
  System_Action_o *v21; // x22
  System_Action_o **v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  CombineResultEffectComponent___c_c *v35; // x0
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__172_0; // x22
  Il2CppObject *v38; // x23
  struct CombineResultEffectComponent___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  _DWORD *v48; // x23
  __int64 v49; // x24
  __int64 v50; // x25
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int v57; // w8
  __int64 v58; // x1
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v63; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *v65; // x8
  __int64 v66; // x22
  __int64 v67; // x23
  struct UserServantEntity_o *v68; // x8
  int32_t v69; // w22
  CombineResultEffectComponent_o *v70; // x0
  int v71; // w23
  const MethodInfo *v72; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v73; // x21
  System_Action_o *v74; // x19
  const MethodInfo *v75; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_5974BE4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_EndDisp__);
    sub_2213A60(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
    sub_2213A60(&int_____TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent___c__EndPlayProcess_b__172_0__);
    sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass172_0__EndPlayProcess_b__1__);
    sub_2213A60(&CombineResultEffectComponent___c__DisplayClass172_0_TypeInfo);
    sub_2213A60(&CombineResultEffectComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_11130/*"PlayVoice"*/);
    byte_5974BE4 = 1;
  }
  v3 = sub_2213CCC(CombineResultEffectComponent___c__DisplayClass172_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_61;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  playCnt = this->fields.playCnt;
  if ( (int)playCnt < this->fields.maxPlayCnt )
  {
    playVoiceList = this->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_61;
    if ( (unsigned int)playCnt < LODWORD(playVoiceList->max_length) )
    {
      v20 = playVoiceList->m_Items[playCnt];
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_11130/*"PlayVoice"*/,
          v20->fields.delay,
          0);
        return;
      }
LABEL_61:
      sub_2213CDC(Request_object, v5);
    }
LABEL_62:
    sub_2213CE4(Request_object);
  }
  if ( this->fields.player )
    CombineResultEffectComponent__stopVoice(this, v5);
  this->fields.playCnt = 0;
  this->fields.playVoiceList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList, 0, v12, v13, v14, v15, v16, v17);
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
  *(_QWORD *)(v3 + 24) = v21;
  v22 = (System_Action_o **)(v3 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v21, v23, v24, v25, v26, v27, v28);
  if ( this->fields.skipEndDispAfterVoicePlayed )
  {
    v35 = CombineResultEffectComponent___c_TypeInfo;
    if ( !*(&CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo, v5);
      v35 = CombineResultEffectComponent___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__172_0 = static_fields->__9__172_0;
    if ( !_9__172_0 )
    {
      if ( !*(&v35->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v35, v5);
        static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__172_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__172_0, v38, Method_CombineResultEffectComponent___c__EndPlayProcess_b__172_0__, 0);
      v39 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v39->__9__172_0 = _9__172_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v39->__9__172_0,
        (int32_t)_9__172_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    *v22 = _9__172_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)_9__172_0, v29, v30, v31, v32, v33, v34);
    this->fields.skipEndDispAfterVoicePlayed = 0;
  }
  if ( this->fields.firstPlayedVoiceFlag >= 1 )
  {
    v46 = sub_2213B20(int_____TypeInfo, 1);
    Request_object = sub_2213B20(int___TypeInfo, 2);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_61;
    v48 = (_DWORD *)Request_object;
    v49 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    *(_QWORD *)&v76.fields.currentCryptoKey = v49;
    *(_QWORD *)&v76.fields.fakeValue = v50;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v76, 0);
    if ( !v48 )
      goto LABEL_61;
    v57 = v48[6];
    if ( !v57 )
      goto LABEL_62;
    v48[8] = Request_object;
    if ( v57 == 1 )
      goto LABEL_62;
    v48[9] = this->fields.firstPlayedVoiceFlag;
    if ( !v46 )
      goto LABEL_61;
    if ( !*(_DWORD *)(v46 + 24) )
      goto LABEL_62;
    *(_QWORD *)(v46 + 32) = v48;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 32), (int32_t)v48, v51, v52, v53, v54, v55, v56);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v58);
    Request_object = (__int64)NetworkManager__getRequest_object_(
                                0,
                                (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
    if ( !Request_object )
      goto LABEL_61;
    TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, (System_Int32_array_array *)v46, 0);
    this->fields.firstPlayedVoiceFlag = 0;
    this->fields.unSkippableFlag = 0;
  }
  if ( !this->fields.kind )
  {
    Request_object = (__int64)this->fields.svtResultInfoWindow;
    if ( !Request_object )
      goto LABEL_61;
    SvtCombineResultWindowComponent__SetWaitFlag(
      (SvtCombineResultWindowComponent_o *)Request_object,
      this->fields.unSkippableFlag,
      0,
      0);
    Request_object = (__int64)this->fields.svtResultInfoWindow;
    if ( !Request_object )
      goto LABEL_61;
    SvtCombineResultWindowComponent__VoiceEnd((SvtCombineResultWindowComponent_o *)Request_object, 0);
  }
  Request_object = (__int64)this->fields.limitUpKinds;
  if ( !Request_object )
    goto LABEL_61;
  Request_object = System_Collections_Generic_HashSet_Int32Enum___Contains(
                     (System_Collections_Generic_HashSet_T__o *)Request_object,
                     this->fields.kind,
                     (const MethodInfo_42B66C8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( (Request_object & 1) != 0 )
  {
    if ( this->fields.isLimitUpSuppression )
      goto LABEL_39;
    kind = this->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_39;
    v65 = this->fields.baseUsrSvtData;
    if ( !v65 )
      goto LABEL_61;
    v66 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
    v67 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    *(_QWORD *)&v77.fields.currentCryptoKey = v66;
    *(_QWORD *)&v77.fields.fakeValue = v67;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v77, 0);
    v68 = this->fields.baseUsrSvtData;
    if ( !v68 )
      goto LABEL_61;
    v69 = Request_object;
    v70 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                              v68->fields.limitCount,
                                              0);
    v71 = (int)v70;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v70, v69, (_DWORD)v70 + 1, v72) )
    {
      v73 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_2213CCC(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v73,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0);
      v74 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v74,
        (Il2CppObject *)v3,
        Method_CombineResultEffectComponent___c__DisplayClass172_0__EndPlayProcess_b__1__,
        0);
      ServantCommentMaster__OpenSaintGraphProfileChange(v69, v71 + 1, v73, v74, 0);
    }
    else
    {
LABEL_39:
      Request_object = (__int64)this->fields.limitUpResultCheck;
      if ( !Request_object )
        goto LABEL_61;
      LimitUpResultCheckComponent__DispResultLimitUp((LimitUpResultCheckComponent_o *)Request_object, *v22, 1, 0);
    }
  }
  else if ( this->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(this, v5);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v59) )
    {
      Request_object = (__int64)this->fields.touchInfo;
      if ( !Request_object )
        goto LABEL_61;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Request_object, 1, 0);
      costumeId = this->fields.costumeId;
      v63 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v60);
        v63 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v63->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(this, v60);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v61);
        ++this->fields.skillShowIndex;
      }
    }
    else if ( CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, v5) )
    {
      CombineResultEffectComponent__ShowCostumeChangeMessage(this, v75);
    }
    else
    {
      CombineResultEffectComponent__EndDisp(this, v75);
    }
  }
}


void CombineResultEffectComponent__FadeoutProcess(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_5974BEA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__FadeoutProcess_b__182_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974BEA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
        v6 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
      v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent__FadeoutProcess_b__182_0__, 0);
      if ( !Instance )
        sub_2213CDC(v9, v10);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v8, 0);
    }
  }
  else if ( callbackFunc )
  {
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      callbackFunc->fields.method);
  }
}


UnityEngine_GameObject_o *CombineResultEffectComponent__GetEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  __int64 v6; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x20

  if ( (byte_5974BB9 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&CombineResultEffectComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974BB9 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_14;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              effectAssetData,
                              name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object__59717228(
                                     Object_object__58532980,
                                     parentTr,
                                     1,
                                     (const MethodInfo_38F366C *)Method_UnityEngine_Object_Instantiate_GameObject____91801592);
  if ( !effectAssetData )
    goto LABEL_14;
  v8 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE0 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v9 )
    goto LABEL_14;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v8, 0);
  v10 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE5 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v10 )
LABEL_14:
    sub_2213CDC(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool CombineResultEffectComponent__GetIsIgnoreFormChange(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limit,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  struct System_Int32_array *ServantIdsIgnoreFormChange; // x8
  int max_length; // w9
  int v9; // w11

  if ( (byte_5974BCB & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5974BCB = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_2213CDC(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_2213CE4(v6);
    if ( ServantIdsIgnoreFormChange->m_Items[v9] == svtId )
      break;
    if ( (max_length & ~(max_length >> 31)) == ++v9 )
      return 0;
  }
  return limit != 0;
}


System_String_o *CombineResultEffectComponent__GetNameFromMessageId(
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
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x19
  __int64 v16; // x20
  __int64 v17; // x21
  ServantEntity_o *v18; // [xsp+0h] [xbp-40h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_5974BEB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974BEB = 1;
  }
  v18 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( messageId == 2 )
  {
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_22;
    v10 = (ServantCostumeMaster_o *)Instance;
    v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    *(_QWORD *)&v20.fields.currentCryptoKey = v11;
    *(_QWORD *)&v20.fields.fakeValue = v12;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
    if ( !v10 )
      goto LABEL_22;
    if ( ServantCostumeMaster__TryGetEntity(v10, &entity, (int32_t)Instance, limitCount, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0);
LABEL_22:
      sub_2213CDC(Instance, v8);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = this->fields.resUsrSvtData;
  if ( !v14 )
    goto LABEL_22;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v21.fields.currentCryptoKey = v16;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  if ( !v15 )
    goto LABEL_22;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v15,
          (Il2CppObject **)&v18,
          (int32_t)Instance,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v18;
  if ( !v18 )
    goto LABEL_22;
  return ServantEntity__getName(v18, -1, -1, 0, 0, 0);
}


int32_t CombineResultEffectComponent__GetOverrideTransformVal(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.kind == 15 )
    return this->fields.costumeOverrideTransformVal;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
int32_t CombineResultEffectComponent__GetResolveImageLimitCount(
        CombineResultEffectComponent_o *this,
        int32_t imageLimitCount,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v5; // w19
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0

  v5 = imageLimitCount;
  if ( (byte_5974BF8 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5974BF8 = 1;
  }
  if ( !userServantEntity )
    sub_2213CDC(this, *(_QWORD *)&imageLimitCount);
  if ( UserServantEntity__IsUseLevelExceedItemHeroine(userServantEntity, 0) )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
      v7 = BalanceConfig_TypeInfo;
    }
    return v7->static_fields->SpecialLimitCountPLD;
  }
  return v5;
}


ServantOverwriteStatus_o *CombineResultEffectComponent__GetResolveOverwriteStatus(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0

  if ( (byte_5974BF7 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5974BF7 = 1;
  }
  if ( !userServantEntity )
    sub_2213CDC(this, userServantEntity);
  if ( !UserServantEntity__IsUseLevelExceedItemHeroine(userServantEntity, 0) )
    return UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0);
  v5 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
    v5 = BalanceConfig_TypeInfo;
  }
  return UserServantEntity__GetOverwriteStatus_50203912(userServantEntity, v5->static_fields->SpecialLimitCountPLD, 0);
}


UIPanel_o *CombineResultEffectComponent__GetStandFigureNode(
        CombineResultEffectComponent_o *this,
        System_String_o *fmsString,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  UnityEngine_GameObject_o *effect; // x8
  System_String_o *v7; // x19
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5974BC6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_5974BC6 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0)) == 0
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  fmsString,
                                  0)) == 0
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0),
        (effect = this->fields.effect) == 0)
    || (v7 = (System_String_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(effect, 0),
        (fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v7, 1, 0)) == 0) )
  {
    sub_2213CDC(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


System_String_o *CombineResultEffectComponent__GetStartAnimationName(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ServantVoiceEntity_o *svtVoiceEntity; // x8
  System_String_o *v6; // x21
  __int64 v7; // x1
  VoicePlayCondMaster_o *Master_object; // x0
  __int64 v9; // x1
  struct ServantVoiceEntity_o *v10; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v12; // x9
  Il2CppObject *CombineAnimation; // x21
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x22
  __int64 v17; // x1
  UnityEngine_Object_o *Clip; // x22
  int32_t kind; // w8
  Il2CppObject *v20; // x0
  __int64 *v21; // x8
  int32_t v23; // [xsp+Ch] [xbp-44h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5974BF4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11880/*"ResultEffectAnimation"*/);
    sub_2213A60(&StringLiteral_18002/*"bit_result_skinchange{0:D2}"*/);
    sub_2213A60(&StringLiteral_17980/*"bit_result_advent{0:D2}"*/);
    sub_2213A60(&StringLiteral_26607/*"{0}{1:D2}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_18004/*"bit_result{0:D2}"*/);
    byte_5974BF4 = 1;
  }
  svtVoiceEntity = this->fields.svtVoiceEntity;
  condEntity = 0;
  if ( !svtVoiceEntity )
    goto LABEL_26;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0) )
    goto LABEL_26;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v10 = this->fields.svtVoiceEntity;
  if ( !v10 )
    goto LABEL_42;
  playVoiceList = this->fields.playVoiceList;
  if ( !playVoiceList )
    goto LABEL_42;
  if ( !LODWORD(playVoiceList->max_length) )
    sub_2213CE4(Master_object);
  v12 = playVoiceList->m_Items[0];
  if ( !v12 || !Master_object )
    goto LABEL_42;
  if ( VoicePlayCondMaster__isVoicePlay_50302056(
         Master_object,
         v10->fields.id,
         v12->fields.id,
         &condEntity,
         0,
         -1,
         -1,
         0,
         0)
    && condEntity )
  {
    CombineAnimation = (Il2CppObject *)VoicePlayCondEntity__GetCombineAnimation(condEntity, 0, 0);
    v23 = index;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
    v6 = System_String__Format_75697880((System_String_o *)StringLiteral_26607/*"{0}{1:D2}"*/, CombineAnimation, v14, 0);
  }
  Master_object = (VoicePlayCondMaster_o *)this->fields.fsm;
  if ( !Master_object
    || (Master_object = (VoicePlayCondMaster_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Master_object, 0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11880/*"ResultEffectAnimation"*/,
                                                   0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                                   (HutongGames_PlayMaker_FsmGameObject_o *)Master_object,
                                                   0)) == 0 )
  {
LABEL_42:
    sub_2213CDC(Master_object, v9);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  Master_object = (VoicePlayCondMaster_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_26:
    kind = this->fields.kind;
    if ( kind > 6 )
    {
      if ( (unsigned int)kind > 0xF )
      {
        if ( kind != 19 && kind != 26 )
          return (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_38;
      }
      if ( kind != 10 )
      {
        if ( kind == 15 )
        {
          v23 = index;
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
          v21 = &StringLiteral_18002/*"bit_result_skinchange{0:D2}"*/;
          return System_String__Format((System_String_o *)*v21, v20, 0);
        }
        return (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_38:
      v23 = index;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
      v21 = &StringLiteral_17980/*"bit_result_advent{0:D2}"*/;
      return System_String__Format((System_String_o *)*v21, v20, 0);
    }
    if ( kind )
    {
      if ( kind == 1 )
        goto LABEL_38;
      if ( kind != 6 )
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    v23 = index;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
    v21 = &StringLiteral_18004/*"bit_result{0:D2}"*/;
    return System_String__Format((System_String_o *)*v21, v20, 0);
  }
  if ( !Component_object )
    goto LABEL_42;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Component_object, v6, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( !UnityEngine_Object__op_Implicit(Clip, 0) )
    goto LABEL_26;
  return v6;
}


UnityEngine_GameObject_o *CombineResultEffectComponent__GetVoiceEffectPrefab(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Object_object__58532980; // x20
  System_Collections_Generic_IEnumerable_TSource__o *playVoiceList; // x20
  CombineResultEffectComponent___c_c *v6; // x0
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__163_0; // x21
  Il2CppObject *v9; // x22
  struct CombineResultEffectComponent___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  __int64 v18; // x1
  CombineResultEffectComponent___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  struct CombineResultEffectComponent___c_StaticFields *v21; // x9
  System_Func_object__bool__o *_9__163_1; // x21
  Il2CppObject *v23; // x22
  struct CombineResultEffectComponent___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  Il2CppClass *klass; // x8
  AssetData_o *effectAssetData; // x0
  System_String_o *v35; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  VoiceMaster_o *v37; // x21
  __int64 v38; // x22
  __int64 v39; // x23
  struct ServantVoiceData_array *v40; // x8
  ServantVoiceData_o *v41; // x8
  int FlagRequestNumber; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_5974BDC & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&CombineResultEffectComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    sub_2213A60(&System_Func_ServantVoicePerformance__bool__TypeInfo);
    sub_2213A60(&System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__163_0__);
    sub_2213A60(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__163_1__);
    sub_2213A60(&CombineResultEffectComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974BDC = 1;
  }
  Object_object__58532980 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0) )
  {
    playVoiceList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playVoiceList;
    v6 = CombineResultEffectComponent___c_TypeInfo;
    if ( !*(&CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo, v3);
      v6 = CombineResultEffectComponent___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__163_0 = (System_Func_object__object__o *)static_fields->__9__163_0;
    if ( !_9__163_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v3);
        static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__163_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
      System_Func_object__object____ctor(
        _9__163_0,
        v9,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__163_0__,
        0);
      v10 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v10->__9__163_0 = (struct System_Func_ServantVoiceData__ServantVoicePerformance__o *)_9__163_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->__9__163_0,
        (int32_t)_9__163_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = System_Linq_Enumerable__Select_object__object_(
            playVoiceList,
            (System_Func_TSource__TResult__o *)_9__163_0,
            (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    v19 = CombineResultEffectComponent___c_TypeInfo;
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
    if ( !*(&CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo, v18);
      v19 = CombineResultEffectComponent___c_TypeInfo;
    }
    v21 = v19->static_fields;
    _9__163_1 = (System_Func_object__bool__o *)v21->__9__163_1;
    if ( !_9__163_1 )
    {
      if ( !*(&v19->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v19, v18);
        v21 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)v21->__9;
      _9__163_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ServantVoicePerformance__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__163_1,
        v23,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__163_1__,
        0);
      v24 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v24->__9__163_1 = (struct System_Func_ServantVoicePerformance__bool__o *)_9__163_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v24->__9__163_1,
        (int32_t)_9__163_1,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            v20,
            (System_Func_TSource__bool__o *)_9__163_1,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    if ( v31 )
      klass = v31[1].klass;
    else
      klass = 0;
    effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !effectAssetData )
      goto LABEL_41;
    if ( klass )
      v35 = (System_String_o *)klass;
    else
      v35 = (System_String_o *)StringLiteral_1/*""*/;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                effectAssetData,
                                v35,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) && !this->fields.kind )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
    effectAssetData = (AssetData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoiceMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      v37 = (VoiceMaster_o *)effectAssetData;
      v38 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
      *(_QWORD *)&v44.fields.currentCryptoKey = v38;
      *(_QWORD *)&v44.fields.fakeValue = v39;
      effectAssetData = (AssetData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
      v40 = this->fields.playVoiceList;
      if ( v40 )
      {
        if ( !LODWORD(v40->max_length) )
          sub_2213CE4(effectAssetData);
        v41 = v40->m_Items[0];
        if ( v41 )
        {
          if ( v37 )
          {
            FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v37, (int32_t)effectAssetData, v41->fields.id, 0, 0);
            this->fields.firstPlayedVoiceFlag = FlagRequestNumber;
            if ( FlagRequestNumber >= 1 )
              this->fields.unSkippableFlag = 1;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_41:
    sub_2213CDC(effectAssetData, v32);
  }
LABEL_39:
  effectAssetData = (AssetData_o *)this->fields.svtResultInfoWindow;
  if ( !effectAssetData )
    goto LABEL_41;
  SvtCombineResultWindowComponent__SetWaitFlag(
    (SvtCombineResultWindowComponent_o *)effectAssetData,
    this->fields.unSkippableFlag,
    1,
    0);
  return (UnityEngine_GameObject_o *)Object_object__58532980;
}


void CombineResultEffectComponent__InitChangeInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUsrSvtData; // x8
  int64_t Instance; // x0
  __int64 id; // x1
  __int64 v6; // x23
  int64_t v7; // x20
  __int64 v8; // x24
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q0
  __int128 v11; // q1
  __int64 v12; // x21
  int v13; // w8
  __int128 v14; // q1
  int64_t v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x3
  unsigned int v23; // w21
  SkillInfo_o *v24; // x8
  SkillInfo_o *v25; // x9
  const MethodInfo *v26; // x3
  SkillInfo_o *v27; // x8
  bool v28; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-90h]
  TreasureDvcInfo_o *v32; // [xsp+68h] [xbp-68h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-60h] BYREF
  SkillInfo_array *v34; // [xsp+78h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+88h] [xbp-48h] BYREF

  if ( (byte_5974BDD & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974BDD = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  skillInfoList = 0;
  tdInfo = 0;
  v34 = 0;
  v32 = 0;
  if ( baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
          if ( Instance )
          {
            v6 = *(_QWORD *)(Instance + 24);
            v7 = Instance;
            if ( (int)v6 >= 1 )
            {
              v8 = 0;
              while ( 1 )
              {
                if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 24) )
LABEL_53:
                  sub_2213CE4(Instance);
                v9 = this->fields.baseUsrSvtData;
                if ( !v9 )
                  goto LABEL_52;
                v10 = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
                v11 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
                v12 = *(_QWORD *)(v7 + 32 + 8 * v8);
                v13 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v31.fields.currentCryptoKey = v10;
                *(_OWORD *)&v31.fields.fakeValue = v11;
                if ( !v13 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, id);
                v30 = v31;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v30, 0);
                if ( !v12 )
                  goto LABEL_52;
                v14 = *(_OWORD *)(v12 + 32);
                v15 = Instance;
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
                *(_OWORD *)&v29.fields.fakeValue = v14;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v29, 0);
                if ( v15 == Instance )
                  break;
                if ( (_DWORD)v6 == (_DWORD)++v8 )
                  goto LABEL_20;
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v12;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData,
                v12,
                v16,
                v17,
                v18,
                v19,
                v20,
                v21);
            }
LABEL_20:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v34, -1, -1, 1, 0, -1, 0);
                v23 = 0;
                Instance = (int64_t)BalanceConfig_TypeInfo;
                while ( 1 )
                {
                  if ( !*(_DWORD *)(Instance + 228) )
                  {
                    j_il2cpp_runtime_class_init_0(Instance, id);
                    Instance = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)v23 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 40LL) )
                    break;
                  if ( !skillInfoList )
                    goto LABEL_52;
                  if ( v23 >= LODWORD(skillInfoList->max_length) )
                    goto LABEL_53;
                  v24 = skillInfoList->m_Items[v23];
                  if ( !v24 || !v34 )
                    goto LABEL_52;
                  if ( v23 >= LODWORD(v34->max_length) )
                    goto LABEL_53;
                  v25 = v34->m_Items[v23];
                  if ( !v25 )
                    goto LABEL_52;
                  id = (unsigned int)v24->fields.id;
                  if ( *(_QWORD *)&v24->fields.id != *(_QWORD *)&v25->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v24->fields.lv,
                      v22);
                    if ( !v34 )
                      goto LABEL_52;
                    if ( v23 >= LODWORD(v34->max_length) )
                      goto LABEL_53;
                    v27 = v34->m_Items[v23];
                    if ( !v27 )
                      goto LABEL_52;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v27->fields.id,
                      v27->fields.lv,
                      v26);
                    Instance = (int64_t)BalanceConfig_TypeInfo;
                  }
                  ++v23;
                }
                Instance = (int64_t)this->fields.baseUsrSvtData;
                if ( Instance )
                {
                  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0);
                  Instance = (int64_t)this->fields.resUsrSvtData;
                  if ( Instance )
                  {
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v32, -1, -1, 0, 0);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0);
                      if ( (Instance & 1) == 0 )
                      {
                        v28 = 0;
LABEL_50:
                        this->fields.treasureDeviceEnabled = v28;
                        return;
                      }
                      if ( tdInfo && v32 )
                      {
                        v28 = tdInfo->fields.id != v32->fields.id || tdInfo->fields.lv != v32->fields.lv;
                        goto LABEL_50;
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
LABEL_52:
    sub_2213CDC(Instance, id);
  }
}


void CombineResultEffectComponent__InitCombineEffect(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UnityEngine_Transform_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x1

  if ( (byte_5974BB7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__InitCombineEffect_b__124_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    byte_5974BB7 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                            0);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0);
  this->fields.effect = Value;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effect, (int32_t)Value, v5, v6, v7, v8, v9, v10);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0);
  v11 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_5969AE5 )
  {
    fsm = (PlayMakerFSM_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v11 )
    goto LABEL_19;
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  fsm = (PlayMakerFSM_o *)this->fields.bgCollider;
  if ( !fsm )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)fsm, 0, 0);
  fsm = (PlayMakerFSM_o *)this->fields.touchInfo;
  if ( !fsm )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0);
  kind = this->fields.kind;
  if ( kind == 16 || kind == 14 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    v17 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__124_0__,
      0);
    if ( v17 )
    {
      CommonUI__maskFadein(v17, DEFAULT_FADE_TIME, v19, 0);
      return;
    }
LABEL_19:
    sub_2213CDC(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v12);
  CombineResultEffectComponent__SetResultServantVoiceData(this, v20);
}


bool CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t DispLimitCount; // w20
  BalanceConfig_c *v6; // x8
  int32_t v7; // w0
  BalanceConfig_c *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w0
  __int64 v11; // x1
  BalanceConfig_c *v12; // x8
  int32_t v13; // w19

  if ( (byte_5974BF6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5974BF6 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( !AvalonSceneManager__checkNowScene(Instance, 32, 0) )
    return 0;
  Instance = (AvalonSceneManager_o *)this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_21;
  if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0) )
    return 0;
  Instance = (AvalonSceneManager_o *)this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_21;
  DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( DispLimitCount == v6->static_fields->CostumeIdMashu )
    return 1;
  Instance = (AvalonSceneManager_o *)this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_21;
  v7 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v8 = BalanceConfig_TypeInfo;
  v9 = v7;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( v9 == v8->static_fields->HeroineLimitCountOrtinaxRefurbished )
    return 1;
  Instance = (AvalonSceneManager_o *)this->fields.baseUsrSvtData;
  if ( !Instance )
LABEL_21:
    sub_2213CDC(Instance, v4);
  v10 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v12 = BalanceConfig_TypeInfo;
  v13 = v10;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
    v12 = BalanceConfig_TypeInfo;
  }
  return v13 == v12->static_fields->SpecialLimitCountPLD;
}


bool CombineResultEffectComponent__IsShowLimitUpInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_2213CDC(0, method);
  return !LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0);
}


bool CombineResultEffectComponent__IsShowNextNpInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  int v4; // w0

  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    sub_2213CDC(0, method);
  v4 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(npInfoAddManager, 0);
  return v4 >= 1 && this->fields.tdShowIndex < v4;
}


bool CombineResultEffectComponent__IsShowSkillInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x0
  int v4; // w20
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  const MethodInfo *v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_5974BE5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974BE5 = 1;
  }
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  entity = 0;
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  v4 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, method);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_20;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)costumeSkillInfoManager;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                                        v12,
                                                                                        0);
  if ( !v6 )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v6,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_20:
    sub_2213CDC(costumeSkillInfoManager, method);
  return !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)costumeSkillInfoManager, 30, 0)
      && v4 >= 1
      && this->fields.skillShowIndex < v4
      && !CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, v9);
}


bool CombineResultEffectComponent__IsShowTreasureDeviceInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return !CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, method)
      && this->fields.treasureDeviceEnabled;
}


bool CombineResultEffectComponent__IsTransformedNpDispUnavailable(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  int32_t TransformCount; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  TreasureDvcEntity_o *TransformedTreasureDeviceInfoByTransformCount; // x0
  __int64 v10; // x1
  TreasureDvcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5974BA3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974BA3 = 1;
  }
  tdInfo = 0;
  entity = 0;
  if ( !usrSvtData || UserServantEntity__GetTransformCount(usrSvtData, 1, 0) < 2 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
  if ( TransformCount < 2 )
    return 0;
  v7 = TransformCount;
  v8 = 1;
  while ( 1 )
  {
    TransformedTreasureDeviceInfoByTransformCount = (TreasureDvcEntity_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                                             usrSvtData,
                                                                             &tdInfo,
                                                                             v8,
                                                                             -1,
                                                                             -1,
                                                                             0,
                                                                             0);
    if ( !tdInfo )
LABEL_20:
      sub_2213CDC(TransformedTreasureDeviceInfoByTransformCount, v10);
    if ( tdInfo->fields.id >= 1 )
    {
      TransformedTreasureDeviceInfoByTransformCount = (TreasureDvcEntity_o *)UserServantEntity__GetTransformedServantId(
                                                                               usrSvtData,
                                                                               v8,
                                                                               0);
      if ( !tdInfo || !Master_object )
        goto LABEL_20;
      if ( TreasureDvcMaster__TryGetEntityCheckServantOverwrite(
             (TreasureDvcMaster_o *)Master_object,
             &entity,
             (int32_t)TransformedTreasureDeviceInfoByTransformCount,
             tdInfo->fields.id,
             0) )
      {
        TransformedTreasureDeviceInfoByTransformCount = entity;
        if ( !entity )
          goto LABEL_20;
        if ( TreasureDvcEntity__IsDispUnavailable(entity, 0) )
          return 1;
      }
    }
    if ( v7 == ++v8 )
      return 0;
  }
}


void CombineResultEffectComponent__LoadCombineEffect(
        CombineResultEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  CombineRootComponent_c *v14; // x0
  System_String_o *COMBINE_ASSET_PATH; // x21
  AssetLoader_LoadEndDataHandler_o *v16; // x22
  __int64 v17; // x1

  if ( (byte_5974BB8 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CombineResultEffectComponent_TypeInfo);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass125_0__LoadCombineEffect_b__0__);
    sub_2213A60(&CombineResultEffectComponent___c__DisplayClass125_0_TypeInfo);
    byte_5974BB8 = 1;
  }
  v4 = sub_2213CCC(CombineResultEffectComponent___c__DisplayClass125_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  *(_QWORD *)(v4 + 16) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)action, v7, v8, v9, v10, v11, v12);
  if ( CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData )
    goto LABEL_10;
  v14 = CombineRootComponent_TypeInfo;
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v13);
    v14 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v14->static_fields->COMBINE_ASSET_PATH;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v4,
    Method_CombineResultEffectComponent___c__DisplayClass125_0__LoadCombineEffect_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v16, 1, 0, 0) )
LABEL_10:
    ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
}


void CombineResultEffectComponent__NameRevealCrossFade(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UICharaGraphTexture_o *nameRevealCard; // x0

  nameRevealCard = this->fields.nameRevealCard;
  if ( !nameRevealCard )
    sub_2213CDC(0, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0);
}


void CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_5974BF3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5635/*"END_ANIMATION"*/);
    byte_5974BF3 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_2213CDC(0, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5635/*"END_ANIMATION"*/, 0);
  }
}


void CombineResultEffectComponent__OpenLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v6; // x8
  int32_t v7; // w20
  __int64 v8; // x1
  int32_t v9; // w21
  System_String_o *LimitCountSealedDialogMessage; // x0
  __int64 v11; // x1
  LimitCountSealDialogComponent_o *v12; // x21
  System_String_o *v13; // x20
  System_String_o *v14; // x22
  LimitCountSealDialogComponent_CallbackFunc_o *v15; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v2 = (Il2CppObject *)this;
  if ( (byte_5974BEF & 1) == 0 )
  {
    sub_2213A60(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_2213A60(&StringLiteral_8622/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_5974BEF = 1;
  }
  monitor = v2[11].monitor;
  if ( !monitor )
    goto LABEL_14;
  v4 = monitor[10];
  v5 = monitor[11];
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v16.fields.currentCryptoKey = v4;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[11].monitor;
  if ( !v6 )
    goto LABEL_14;
  v7 = (int)this;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v6[6], 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_14;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v7,
                                    v9 + 1,
                                    0);
  v12 = (LimitCountSealDialogComponent_o *)v2[8].monitor;
  v13 = LimitCountSealedDialogMessage;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8622/*"LIMIT_COUNT_SEALED_TITLE"*/, 0);
  v15 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_2213CCC(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v15,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0);
  if ( !v12 )
LABEL_14:
    sub_2213CDC(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v12, v14, v13, v15, 0);
}


bool CombineResultEffectComponent__OpenNotification(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  UserServantEntity_o *v4; // x0
  __int64 costumeOverrideTransformVal; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  bool v12; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w0
  int32_t v19; // w8
  int32_t ServantId; // w0
  int32_t v21; // w1
  int32_t AscensionAfterDialogId; // w0
  __int64 v23; // x1
  int32_t v24; // w21
  int32_t v25; // w22
  int32_t v26; // w23
  const MethodInfo *v27; // x3
  Il2CppObject *NameFromMessageId; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x22
  System_String_o *v33; // x0
  System_String_o *v34; // x21
  System_Action_o *v35; // x23
  int32_t v36; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_5974BEC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass184_0__OpenNotification_b__0__);
    sub_2213A60(&CombineResultEffectComponent___c__DisplayClass184_0_TypeInfo);
    sub_2213A60(&StringLiteral_12091/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974BEC = 1;
  }
  v36 = 0;
  v3 = sub_2213CCC(CombineResultEffectComponent___c__DisplayClass184_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_24;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v12 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v16 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          costumeOverrideTransformVal);
      *(_QWORD *)&v37.fields.currentCryptoKey = v16;
      *(_QWORD *)&v37.fields.fakeValue = v17;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v37, 0);
      v19 = this->fields.kind;
      *(_DWORD *)(v3 + 20) = v18;
      if ( v19 == 15 )
      {
        costumeOverrideTransformVal = (unsigned int)this->fields.costumeOverrideTransformVal;
        *(_DWORD *)(v3 + 20) = this->fields.costumeId;
      }
      else
      {
        costumeOverrideTransformVal = 0xFFFFFFFFLL;
      }
      v4 = this->fields.resUsrSvtData;
      if ( v4 )
      {
        ServantId = UserServantEntity__GetServantId(v4, costumeOverrideTransformVal, 0);
        v21 = *(_DWORD *)(v3 + 20);
        *(_DWORD *)(v3 + 16) = ServantId;
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(ServantId, v21, 0);
        v36 = AscensionAfterDialogId;
        if ( AscensionAfterDialogId == -1 )
          return 0;
        v24 = AscensionAfterDialogId;
        v25 = *(_DWORD *)(v3 + 16);
        v26 = *(_DWORD *)(v3 + 20);
        if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v23);
        if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v25, v26, 0) )
          return 0;
        NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                              this,
                                              v24,
                                              *(_DWORD *)(v3 + 20),
                                              v27);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v30 = System_Int32__ToString((int32_t)&v36, 0);
        v32 = System_String__Concat_75651716((System_String_o *)StringLiteral_12091/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v30, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
        v33 = LocalizationManager__Get(v32, 0);
        v34 = System_String__Format(v33, NameFromMessageId, 0);
        v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v35,
          (Il2CppObject *)v3,
          Method_CombineResultEffectComponent___c__DisplayClass184_0__OpenNotification_b__0__,
          0);
        if ( Instance )
        {
          v12 = 1;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v34,
            v35,
            -1,
            0,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0.0,
            0,
            0);
          return v12;
        }
      }
    }
LABEL_24:
    sub_2213CDC(v4, costumeOverrideTransformVal);
  }
  return v12;
}


void CombineResultEffectComponent__PlayPerformance(
        CombineResultEffectComponent_o *this,
        ServantVoicePerformance_ServantVoicePerformanceDetail_o *performance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  UIStandFigureR_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  System_Action_o *v12; // x2

  if ( (byte_5974BDB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_5974BDB = 1;
  }
  if ( performance )
  {
    IsNullOrEmpty = (UIStandFigureR_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)this->fields.afterFigureCollectList,
                                          0);
    v9 = 176;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      v9 = 168;
    v10 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v9);
    if ( !v10 )
      goto LABEL_17;
    if ( v10->fields._size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        IsNullOrEmpty = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                              v10,
                                              v11,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (UIStandFigureR_o *)IsNullOrEmpty->fields.m_CancellationTokenSource;
        if ( !IsNullOrEmpty )
          break;
        if ( v11 == v10->fields._size - 1 )
          v12 = playEndAction;
        else
          v12 = 0;
        UIStandFigureR__PlayAnimation(IsNullOrEmpty, performance->fields.name, performance->fields.delay, v12, 0);
        if ( ++v11 >= v10->fields._size )
          return;
      }
LABEL_17:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
  }
  else
  {
    ActionExtensions__Call(playEndAction, 0);
  }
}


void CombineResultEffectComponent__PlayVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CombineResultEffectComponent_o *v8; // x19
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v12; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v14; // x8
  __int64 v15; // x9
  int32_t m_CancellationTokenSource_high; // w21
  int32_t friendshipExceedResultWindow; // w20
  float FadeTime; // s0
  System_Collections_Generic_IEnumerable_TSource__o *currentFigureCollectList; // x0
  float v20; // s8
  System_Collections_Generic_IEnumerable_TSource__o **p_afterFigureCollectList; // x24
  int32_t v22; // w2
  ServantVoiceData_array *v23; // x3
  const MethodInfo *v24; // x6
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v28; // x22
  __int64 v29; // x1
  SePlayer_o *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct ServantVoiceData_array *v37; // x8
  __int64 v38; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *StartPerformance; // x0
  const MethodInfo *v40; // x3

  v8 = this;
  if ( (byte_5974BDA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_EndPlay__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    this = (CombineResultEffectComponent_o *)sub_2213A60(&SoundManager_TypeInfo);
    byte_5974BDA = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_25;
    playCnt = v8->fields.playCnt;
    max_length = playVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v12 = playVoiceList->m_Items[playCnt];
      if ( !v12 )
        goto LABEL_25;
      id = v12->fields.id;
      v8->fields.vcName = id;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.vcName, (int32_t)id, v2, v3, v4, v5, v6, v7);
      v14 = v8->fields.playVoiceList;
      if ( !v14 )
        goto LABEL_25;
      v15 = v8->fields.playCnt;
      if ( (unsigned int)v15 < LODWORD(v14->max_length) )
      {
        this = (CombineResultEffectComponent_o *)v14->m_Items[v15];
        if ( !this )
          goto LABEL_25;
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
        friendshipExceedResultWindow = (int32_t)this->fields.friendshipExceedResultWindow;
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
        currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.currentFigureCollectList;
        if ( currentFigureCollectList )
        {
          v20 = FadeTime;
          if ( System_Linq_Enumerable__Any_object_(
                 currentFigureCollectList,
                 (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
          {
            p_afterFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o **)&v8->fields.afterFigureCollectList;
            if ( !System_Linq_Enumerable__Any_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                    (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
              || !System_Linq_Enumerable__Any_object_(
                    *p_afterFigureCollectList,
                    (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              p_afterFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o **)&v8->fields.currentFigureCollectList;
            }
            CombineResultEffectComponent__SetStandFigureFace(
              v8,
              m_CancellationTokenSource_high,
              v20,
              v22,
              v23,
              (System_Collections_Generic_List_StandFigureCollect__o *)*p_afterFigureCollectList,
              friendshipExceedResultWindow,
              v24);
          }
        }
        asstName = v8->fields.asstName;
        vcName = v8->fields.vcName;
        volume = v8->fields.volume;
        v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)v8, Method_CombineResultEffectComponent_EndPlay__, 0);
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v29);
        v30 = SoundManager__playVoice_48511684(asstName, vcName, volume, v28, 0, 0);
        v8->fields.player = v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.player, (int32_t)v30, v31, v32, v33, v34, v35, v36);
        v37 = v8->fields.playVoiceList;
        if ( !v37 )
          goto LABEL_25;
        v38 = v8->fields.playCnt;
        if ( (unsigned int)v38 < LODWORD(v37->max_length) )
        {
          this = (CombineResultEffectComponent_o *)v37->m_Items[v38];
          if ( this )
          {
            StartPerformance = ServantVoiceData__get_StartPerformance((ServantVoiceData_o *)this, 0);
            CombineResultEffectComponent__PlayPerformance(v8, StartPerformance, 0, v40);
            ++v8->fields.playCnt;
            return;
          }
LABEL_25:
          sub_2213CDC(this, method);
        }
      }
    }
    sub_2213CE4(this);
  }
}


void CombineResultEffectComponent__ProfileChangeDecideAction(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v11; // x21
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  Il2CppObject *Master_object; // x24
  CommonUI_o *v28; // x22
  Il2CppObject *v29; // x22
  UserServantCollectionEntity_o *v30; // x20
  ServantStatusDialog_EndDelegate_o *v31; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5974BF2 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass190_0__ProfileChangeDecideAction_b__0__);
    sub_2213A60(&CombineResultEffectComponent___c__DisplayClass190_0_TypeInfo);
    byte_5974BF2 = 1;
  }
  entity = 0;
  v11 = sub_2213CCC(CombineResultEffectComponent___c__DisplayClass190_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)finishCallback, v20, v21, v22, v23, v24, v25);
  if ( isDecide )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
      Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_25;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           (int64_t)Instance->fields.errorDialog->fields.baseCallbackFunc,
           svtId,
           0) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = Instance;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13);
      if ( v28 )
      {
        CommonUI__maskFadein(v28, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          Instance = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( Instance )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 0, 0);
            v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v30 = entity;
            v31 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v31,
              (Il2CppObject *)v11,
              Method_CombineResultEffectComponent___c__DisplayClass190_0__ProfileChangeDecideAction_b__0__,
              0);
            if ( v29 )
            {
              CommonUI__OpenServantStatusDialog_37385140((CommonUI_o *)v29, 33, v30, limitCount, v31, 0);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_2213CDC(Instance, v13);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_37373868(Instance, *(System_Action_o **)(v11 + 24), 0);
}


void CombineResultEffectComponent__ReleaseVoiceData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_5974BE7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5974BE7 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.playVoiceList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList, 0, v2, v3, v4, v5, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v10);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields.asstName, 0);
  }
}


void CombineResultEffectComponent__ResetTransformData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_String_o **v17; // x8
  struct System_String_o *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  *(_WORD *)&this->fields.isTransformServant = 0;
  this->fields.transformedServant = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.transformedServant, 0, v2, v3, v4, v5, v6, v7);
  v9 = *(struct System_String_o ***)(qword_5984390 + 184);
  v10 = *v9;
  this->fields.multiDisplayTitleBefore = *v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.multiDisplayTitleBefore,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = *(struct System_String_o ***)(qword_5984390 + 184);
  v18 = *v17;
  this->fields.multiDisplayTitleAfter = *v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.multiDisplayTitleAfter,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.multiDisplayTitleLabelColor = 0u;
  this->fields.multiDisplayTitleSpriteColor = 0u;
}


void CombineResultEffectComponent__SetAfterLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  UnityEngine_Component_o *StandFigureNode; // x21
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataManager_o *v8; // x22
  Il2CppObject *MasterData_object; // x25
  ServantLimitAddMaster_o *v10; // x24
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v12; // w22
  __int64 v13; // x23
  __int64 v14; // x26
  int32_t v15; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  __int64 v17; // x1
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v19; // w23
  CombineResultEffectComponent_o *ServantId; // x0
  const MethodInfo *v21; // x3
  char v22; // w24
  System_Collections_Generic_List_object__o *v23; // x25
  _BOOL8 v24; // x0
  __int64 v25; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x1
  int32_t portraitImageId; // w27
  UnityEngine_GameObject_o *v30; // x26
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  UnityEngine_Component_o *v40; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v42; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x0
  __int64 v47; // x1
  struct System_Int32_array *v48; // x8
  int max_length; // w9
  int v50; // s11
  int v51; // s12
  UnityEngine_Transform_o *v52; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v55; // x28
  __int64 v56; // x0
  __int64 v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  bool v68; // w20
  UnityEngine_GameObject_o *v69; // x21
  const MethodInfo *v70; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v72; // x23
  System_Collections_Generic_List_object__o *v73; // x21
  StandFigureCollect_o *v74; // x22
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  float v85; // s8
  struct System_Int32_array *multiFace; // x23
  int32_t masterDataBytes; // w20
  int32_t m_CancellationTokenSource_high; // w21
  struct ServantVoiceData_array *playVoiceList; // x8
  float FadeTime; // s0
  struct ServantVoiceData_array *v91; // x8
  ServantVoiceData_o *v92; // x8
  unsigned __int64 v93; // x22
  bool v94; // [xsp+24h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+40h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974BC9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StandFigureCollect_TypeInfo);
    sub_2213A60(&StringLiteral_8796/*"LimitUpResSvtNodeName"*/);
    byte_5974BC9 = 1;
  }
  entity = 0;
  memset(&v96, 0, sizeof(v96));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8796/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v8 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v8,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_83;
  v10 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantEntity__GetServantId(this->fields.resUsrSvtData, -1, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_83;
  v12 = (int)Instance;
  v13 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v99.fields.currentCryptoKey = v13;
  *(_QWORD *)&v99.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v99, 0);
  if ( !v10 )
    goto LABEL_83;
  v15 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v10, &entity, v12, (int32_t)Instance, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_83;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v15 = LimitCountUpResultServantLimitCount;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_83;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v12,
                                 v15,
                                 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v17);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v12, ServantLimitCountSealAfter, 0);
  if ( !this->fields.resUsrSvtData
    || (v19 = (int)Instance,
        v94 = isForceNormalFace,
        ServantId = (CombineResultEffectComponent_o *)UserServantEntity__GetServantId(this->fields.resUsrSvtData, -1, 0),
        Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                      ServantId,
                                      (int32_t)ServantId,
                                      v19,
                                      v21),
        !MasterData_object) )
  {
LABEL_83:
    sub_2213CDC(Instance, v7);
  }
  v22 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v12,
                                v19,
                                2,
                                0);
  if ( Instance
    && (v23 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v95,
      v23,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v96 = v95;
    v95.fields._list = 0;
    *(_QWORD *)&v95.fields._index = &v96;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v96,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v24 )
        break;
      if ( !StandFigureNode )
        sub_2213CDC(v24, v25);
      current = (SvtMultiPortraitEntity_o *)v96.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      if ( !current )
        sub_2213CDC(gameObject, v28);
      portraitImageId = current->fields.portraitImageId;
      v30 = gameObject;
      original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v28);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v30,
                           portraitImageId,
                           1,
                           0,
                           0,
                           0,
                           v22 & 1,
                           -1,
                           original,
                           0);
      v40 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_2213CDC(0, v33);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (int32_t)current,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      transform = UnityEngine_Component__get_transform(v40, 0);
      if ( !transform )
        sub_2213CDC(0, v42);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        v44 = UnityEngine_Component__get_transform(v40, 0);
        if ( !v44 )
          sub_2213CDC(0, v45);
        localPosition = UnityEngine_Transform__get_localPosition(v44, 0);
        v48 = current->fields.commonPosition;
        if ( !v48 )
          sub_2213CDC(v46, v47);
        max_length = v48->max_length;
        if ( !max_length )
          sub_2213CE4(v46);
        if ( max_length == 1 )
          sub_2213CE4(v46);
        v51 = v48->m_Items[0];
        v50 = v48->m_Items[1];
        v52 = UnityEngine_Component__get_transform(v40, 0);
        if ( !v52 )
          sub_2213CDC(0, v53);
        v100.fields.z = localPosition.fields.z;
        v100.fields.x = localPosition.fields.x + (float)v51;
        v100.fields.y = localPosition.fields.y + (float)v50;
        UnityEngine_Transform__set_localPosition(v52, v100, 0);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v40,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v55 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v55, current, (UIStandFigureR_o *)v40, 0);
      if ( !afterFigureCollectList
        || (items = afterFigureCollectList->fields._items,
            v65 = Method_System_Collections_Generic_List_StandFigureCollect__Add__,
            ++afterFigureCollectList->fields._version,
            !items) )
      {
        sub_2213CDC(v56, v57);
      }
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v55,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v55;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 4), (int32_t)v55, v58, v59, v60, v61, v62, v63);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v96,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    v68 = v94;
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_83;
    v69 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
    VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v70);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_47638192(
                                  v69,
                                  v12,
                                  v19,
                                  1,
                                  0,
                                  1,
                                  0,
                                  v22 & 1,
                                  -1,
                                  VoiceEffectPrefab,
                                  0);
    if ( !Instance )
      goto LABEL_83;
    v72 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_83;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0);
    v73 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v74 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v74, 0, v72, 0);
    if ( !v73 )
      goto LABEL_83;
    v81 = v73->fields._items;
    v82 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v73->fields._version;
    if ( !v81 )
      goto LABEL_83;
    v83 = v73->fields._size;
    v68 = isForceNormalFace;
    if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v73,
        (Il2CppObject *)v74,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = &v81->obj.klass + v83;
      v73->fields._size = v83 + 1;
      v84[4] = (Il2CppClass *)v74;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v84 + 4), (int32_t)v74, v75, v76, v77, v78, v79, v80);
    }
  }
  v85 = 0.0;
  if ( v68
    || (Instance = (DataManager_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)this->fields.playVoiceList,
                                      0),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    multiFace = 0;
    masterDataBytes = 0;
    m_CancellationTokenSource_high = 0;
  }
  else
  {
    playVoiceList = this->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_83;
    if ( !LODWORD(playVoiceList->max_length) )
      goto LABEL_84;
    Instance = (DataManager_o *)playVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_83;
    m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
    masterDataBytes = (int32_t)Instance->fields.masterDataBytes;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0);
    v91 = this->fields.playVoiceList;
    if ( !v91 )
      goto LABEL_83;
    if ( !LODWORD(v91->max_length) )
LABEL_84:
      sub_2213CE4(Instance);
    v92 = v91->m_Items[0];
    if ( !v92 )
      goto LABEL_83;
    v85 = FadeTime;
    multiFace = v92->fields.multiFace;
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v93 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        goto LABEL_83;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v93,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( multiFace )
      {
        if ( !Instance )
          goto LABEL_83;
        if ( v93 >= *(unsigned int *)((char *)off_18 + (_QWORD)multiFace) )
          goto LABEL_84;
        Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
        if ( !Instance )
          goto LABEL_83;
        UIStandFigureR__SetFace((UIStandFigureR_o *)Instance, multiFace->m_Items[v93], 0.0, 0);
      }
      else
      {
        if ( !Instance )
          goto LABEL_83;
        Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
        if ( !Instance )
          goto LABEL_83;
        UIStandFigureR__SetFace_51076984(
          (UIStandFigureR_o *)Instance,
          m_CancellationTokenSource_high,
          masterDataBytes,
          0,
          v85,
          0);
      }
      if ( (__int64)++v93 >= System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                               (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetAppendSkillCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t currentSkillId,
        int32_t currentSkillLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  CombineRootComponent_c *v26; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  __int64 v29; // x1

  if ( (byte_5974BB3 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__120_0__);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_5974BB3 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    *(System_String_o **)&currentSkillId,
    *(System_String_o **)&currentSkillLv,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v13, v14, v15, v16, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v26 = CombineRootComponent_TypeInfo;
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  if ( !*(&v26->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v26, v25);
    v26 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v26->static_fields->COMBINE_ASSET_PATH;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__120_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v28, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v9; // x7

  if ( (byte_5974BC2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3182/*"BaseSvtNodeName"*/);
    byte_5974BC2 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_2213CDC(0, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3182/*"BaseSvtNodeName"*/,
    0,
    overwriteType,
    v9);
}


void CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v6; // x8
  int32_t v7; // w20
  __int64 v8; // x1
  int32_t v9; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v11; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v2 = this;
  if ( (byte_5974BC7 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_2213A60(&StringLiteral_8795/*"LimitUpBaseSvtNodeName"*/);
    byte_5974BC7 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v12.fields.currentCryptoKey = v4;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v12, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_2213CDC(this, method);
  v7 = (int)this;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v6[6], 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v8);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v9, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8795/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v11);
}


void CombineResultEffectComponent__SetCardParam(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t kind; // w8
  SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x0
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
  __int64 v17; // x1
  int32_t v18; // w21
  struct UserServantEntity_o *v19; // x8
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w20
  int32_t v22; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v24; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  int32_t v27; // w20
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x1
  float v36; // s8
  struct System_Int32_array *multiFace; // x23
  int32_t maskSprite; // w20
  int32_t m_CancellationTokenSource_high; // w21
  int32_t v40; // w0
  const MethodInfo *v41; // x2
  __int64 *v42; // x8
  __int64 *v43; // x8
  __int64 *v44; // x8
  System_String_o *v45; // x20
  UnityEngine_Transform_o *v46; // x0
  UIExtrusionLabel_o *v47; // x20
  System_String_o *v48; // x20
  UnityEngine_Transform_o *v49; // x0
  UIExtrusionLabel_o *v50; // x20
  struct UserServantEntity_o *v51; // x20
  struct UserServantEntity_o *v52; // x8
  int32_t Rarity; // w0
  int v54; // w20
  UserServantEntity_o *v55; // x21
  UserServantEntity_o *v56; // x20
  int32_t v57; // w0
  int v58; // w20
  UserServantEntity_o *v59; // x21
  const MethodInfo *v60; // x2
  __int64 *v61; // x20
  struct ServantVoiceData_array *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x2
  unsigned __int64 v73; // x22
  __int64 v74; // x25
  int32_t v75; // w1
  ServantVoiceData_o *v76; // x20
  System_String_o *v77; // x20
  UnityEngine_Transform_o *v78; // x0
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x2
  CombineResultEffectComponent_o *v83; // x0
  int32_t successInfo; // w1
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *resUsrSvtData; // x9
  CombineResultEffectComponent_o *v90; // x0
  bool v91; // w2
  System_String_o *v92; // x1
  Il2CppObject *v93; // x21
  EventDelegate_Callback_o *v94; // x22
  EventDelegate_o *v95; // x20
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  struct System_String_o *m_CachedPtr; // x8
  _QWORD *v103; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v105; // x8
  const MethodInfo *v106; // x3
  CombineResultEffectComponent_o *v107; // x0
  bool v108; // w2
  System_String_o *v109; // x1
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  __int64 *v116; // x8
  System_String_o *v117; // x20
  UnityEngine_Transform_o *v118; // x0
  UnityEngine_Component_o *v119; // x20
  float Value; // s0
  float v121; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v123; // x20
  ServantVoiceData_o *v124; // x20
  __int64 v125; // x1
  MissionNaviTransitionBoardItem_o *p_maskSprite; // x0
  const MethodInfo *v127; // x2
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  struct ServantVoiceData_array *playVoiceList; // x8
  float FadeTime; // s0
  struct ServantVoiceData_array *v136; // x8
  ServantVoiceData_o *v137; // x8
  __int64 v138; // [xsp+0h] [xbp-60h] BYREF
  __int64 v139; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974BBA & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetCardParam_b__127_0__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_4925/*"CostumeName"*/);
    sub_2213A60(&StringLiteral_3182/*"BaseSvtNodeName"*/);
    sub_2213A60(&StringLiteral_17978/*"bit_result_120"*/);
    sub_2213A60(&StringLiteral_17985/*"bit_result_extraskill02"*/);
    sub_2213A60(&StringLiteral_17994/*"bit_result_nobledeliverance"*/);
    sub_2213A60(&StringLiteral_12830/*"START_ANIMATION"*/);
    sub_2213A60(&StringLiteral_17982/*"bit_result_command_card_exceed"*/);
    sub_2213A60(&StringLiteral_17991/*"bit_result_limitbreak"*/);
    sub_2213A60(&StringLiteral_17986/*"bit_result_friendship_exceed"*/);
    sub_2213A60(&StringLiteral_11850/*"ResMaxLvExceedNodeName"*/);
    sub_2213A60(&StringLiteral_17999/*"bit_result_skillrank"*/);
    sub_2213A60(&StringLiteral_17989/*"bit_result_grail_02"*/);
    sub_2213A60(&StringLiteral_18000/*"bit_result_skillup"*/);
    sub_2213A60(&StringLiteral_5070/*"CrtMaxLvExceedNodeName"*/);
    sub_2213A60(&StringLiteral_17995/*"bit_result_powerup"*/);
    sub_2213A60(&StringLiteral_13592/*"StartAnimationName"*/);
    sub_2213A60(&StringLiteral_17988/*"bit_result_grail_01"*/);
    sub_2213A60(&StringLiteral_17984/*"bit_result_extraskill01"*/);
    sub_2213A60(&StringLiteral_17998/*"bit_result_skilldeliverance"*/);
    sub_2213A60(&StringLiteral_5071/*"CrtMaxLvNodeName"*/);
    sub_2213A60(&StringLiteral_11851/*"ResMaxLvNodeName"*/);
    sub_2213A60(&StringLiteral_13745/*"SvtEqCardScale"*/);
    byte_5974BBA = 1;
  }
  kind = this->fields.kind;
  v138 = 0;
  v139 = 0;
  switch ( kind )
  {
    case 0:
      CombineResultEffectComponent__SetLevelUpSvtFigure(this, method);
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      SvtCombineResultWindowComponent__setBefResultState(
        svtResultInfoWindow,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        0);
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)svtResultInfoWindow,
        this->fields.combineStatusDisp,
        0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UserServantEntity__isLevelMax(
                                                                   (UserServantEntity_o *)svtResultInfoWindow,
                                                                   0);
      if ( ((unsigned __int8)svtResultInfoWindow & 1) == 0 )
        goto LABEL_139;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( baseUsrSvtData->fields.exp == resUsrSvtData->fields.exp )
LABEL_139:
        successInfo = this->fields.successInfo;
      else
LABEL_106:
        successInfo = 4;
      v83 = this;
      goto LABEL_141;
    case 1:
    case 10:
    case 19:
    case 26:
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_5071/*"CrtMaxLvNodeName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                   (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                                                   0);
      if ( !this->fields.effect )
        goto LABEL_179;
      v6 = (System_String_o *)svtResultInfoWindow;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                   (UnityEngine_Component_o *)svtResultInfoWindow,
                                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v8 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v139) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)System_Int32__ToString((int32_t)&v139 + 4, 0);
      if ( !v8 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v8, (System_String_o *)svtResultInfoWindow, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_11851/*"ResMaxLvNodeName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                   (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                                                   0);
      if ( !this->fields.effect )
        goto LABEL_179;
      v9 = (System_String_o *)svtResultInfoWindow;
      v10 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)TransformHelper__getNodeFromName(v10, v9, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                   (UnityEngine_Component_o *)svtResultInfoWindow,
                                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v11 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v139) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)System_Int32__ToString((int32_t)&v139, 0);
      if ( !v11 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v11, (System_String_o *)svtResultInfoWindow, 0);
      v12 = this->fields.baseUsrSvtData;
      if ( !v12 )
        goto LABEL_179;
      v13 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v140.fields.currentCryptoKey = v13;
      *(_QWORD *)&v140.fields.fakeValue = v14;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                   v140,
                                                                   0);
      v15 = this->fields.baseUsrSvtData;
      if ( !v15 )
        goto LABEL_179;
      v16 = (int)svtResultInfoWindow;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15->fields.limitCount, 0);
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v17);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)ImageLimitCount__GetImageLimitCount(v16, v18, 0);
      v19 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)svtResultInfoWindow;
      if ( !v19 )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                   v19->fields.svtId,
                                                                   0);
      v20 = this->fields.resUsrSvtData;
      if ( !v20 )
        goto LABEL_179;
      v21 = (int)svtResultInfoWindow;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20->fields.limitCount, 0);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v21, v22, 0);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v27 = resSvtNameData != 0;
      if ( isLimitUpSuppression )
        goto LABEL_27;
      if ( this->fields.oldImgLimitCnt != ImageLimitCount )
        goto LABEL_71;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtResultInfoWindow, 0) )
      {
LABEL_27:
        this->fields.isChangeCardImg = 0;
        LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v24);
        this->fields.playVoiceList = LimitUpSvtVoiceList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList,
          (int32_t)LimitUpSvtVoiceList,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v35);
        v36 = 0.0;
        if ( this->fields.isLimitUpSuppression
          || (svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)BasicHelper__IsNullOrEmpty(
                                                                           (System_Collections_ICollection_o *)this->fields.playVoiceList,
                                                                           0),
              ((unsigned __int8)svtResultInfoWindow & 1) != 0) )
        {
          multiFace = 0;
          maskSprite = 0;
          m_CancellationTokenSource_high = 0;
        }
        else
        {
          playVoiceList = this->fields.playVoiceList;
          if ( !playVoiceList )
            goto LABEL_179;
          if ( !LODWORD(playVoiceList->max_length) )
            goto LABEL_180;
          svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)playVoiceList->m_Items[0];
          if ( !svtResultInfoWindow )
            goto LABEL_179;
          m_CancellationTokenSource_high = HIDWORD(svtResultInfoWindow->fields.m_CancellationTokenSource);
          maskSprite = (int32_t)svtResultInfoWindow->fields.maskSprite;
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)svtResultInfoWindow, 0);
          v136 = this->fields.playVoiceList;
          if ( !v136 )
            goto LABEL_179;
          if ( !LODWORD(v136->max_length) )
LABEL_180:
            sub_2213CE4(svtResultInfoWindow);
          v137 = v136->m_Items[0];
          if ( !v137 )
            goto LABEL_179;
          v36 = FadeTime;
          multiFace = v137->fields.multiFace;
        }
        v40 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( multiFace )
        {
          method = (const MethodInfo *)(&dword_0 + 1);
          if ( v40 != LODWORD(multiFace->max_length) || v40 <= 0 )
            goto LABEL_85;
        }
        else if ( v40 < 1 )
        {
LABEL_84:
          LODWORD(method) = 1;
          goto LABEL_85;
        }
        v73 = 0;
        v74 = (unsigned int)v40;
        while ( 1 )
        {
          svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.currentFigureCollectList;
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                                                                       v73,
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( multiFace )
          {
            if ( !svtResultInfoWindow )
              break;
            if ( v73 >= LODWORD(multiFace->max_length) )
              goto LABEL_180;
            svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)svtResultInfoWindow->fields.m_CancellationTokenSource;
            if ( !svtResultInfoWindow )
              break;
            v75 = multiFace->m_Items[v73];
          }
          else
          {
            if ( !svtResultInfoWindow )
              break;
            svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)svtResultInfoWindow->fields.m_CancellationTokenSource;
            if ( !svtResultInfoWindow )
              break;
            v75 = m_CancellationTokenSource_high;
          }
          UIStandFigureR__SetFace_51076984((UIStandFigureR_o *)svtResultInfoWindow, v75, maskSprite, 0, v36, 0);
          if ( v74 == ++v73 )
            goto LABEL_84;
        }
LABEL_179:
        sub_2213CDC(svtResultInfoWindow, method);
      }
LABEL_71:
      this->fields.isChangeCardImg = 1;
      v62 = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v24);
      this->fields.playVoiceList = v62;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList,
        (int32_t)v62,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v69);
      CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v70);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, v27, v71);
      CombineResultEffectComponent__setResultSvtGraphCard(this, v27, v72);
      LODWORD(method) = 2;
LABEL_85:
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)CombineResultEffectComponent__GetStartAnimationName(
                                                                   this,
                                                                   (int32_t)method,
                                                                   v41);
      if ( !this->fields.fsm )
        goto LABEL_179;
      v76 = (ServantVoiceData_o *)svtResultInfoWindow;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
LABEL_156:
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow->fields.maskSprite = (struct UISprite_o *)v76;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&svtResultInfoWindow->fields.maskSprite,
        (int32_t)v76,
        v128,
        v129,
        v130,
        v131,
        v132,
        v133);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtResultInfoWindow, (System_String_o *)StringLiteral_12830/*"START_ANIMATION"*/, 0);
      return;
    case 2:
      v90 = this;
      v91 = 1;
      v92 = (System_String_o *)StringLiteral_18000/*"bit_result_skillup"*/;
      goto LABEL_117;
    case 3:
      v44 = &StringLiteral_17998/*"bit_result_skilldeliverance"*/;
      goto LABEL_116;
    case 4:
      v107 = this;
      v108 = 1;
      v109 = (System_String_o *)StringLiteral_18000/*"bit_result_skillup"*/;
      goto LABEL_145;
    case 5:
      v42 = &StringLiteral_17994/*"bit_result_nobledeliverance"*/;
      goto LABEL_144;
    case 6:
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_3182/*"BaseSvtNodeName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                   (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                                                   0);
      if ( !this->fields.effect )
        goto LABEL_179;
      v117 = (System_String_o *)svtResultInfoWindow;
      v118 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)TransformHelper__getNodeFromName(v118, v117, 1, 0);
      if ( !this->fields.fsm )
        goto LABEL_179;
      v119 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_13745/*"SvtEqCardScale"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)svtResultInfoWindow, 0);
      if ( !v119 )
        goto LABEL_179;
      v121 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v119, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)CharaGraphManager__CreateTexturePrefab_47624988(
                                                                   gameObject,
                                                                   this->fields.resUsrSvtData,
                                                                   10,
                                                                   0,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      v123 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      v141.fields.z = 0.0;
      v141.fields.x = -50.0;
      v141.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtResultInfoWindow, v141, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__get_transform(v123, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      v142.fields.x = v121;
      v142.fields.y = v121;
      v142.fields.z = v121;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)svtResultInfoWindow, v142, 0);
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 1, 0);
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      SvtCombineResultWindowComponent__setBefSvtEqResultState(
        svtResultInfoWindow,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        this->fields.normalExp,
        this->fields.addTotalExp,
        0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtResultInfoWindow, 0) )
        goto LABEL_139;
      goto LABEL_106;
    case 7:
    case 21:
      v44 = &StringLiteral_17999/*"bit_result_skillrank"*/;
LABEL_116:
      v92 = (System_String_o *)*v44;
      v90 = this;
      v91 = 0;
LABEL_117:
      CombineResultEffectComponent__SetCardParam_Skill(v90, v92, v91, v2);
      return;
    case 8:
    case 18:
    case 27:
      v42 = &StringLiteral_17999/*"bit_result_skillrank"*/;
LABEL_144:
      v109 = (System_String_o *)*v42;
      v107 = this;
      v108 = 0;
LABEL_145:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v107, v109, v108, v2);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      v116 = &StringLiteral_18000/*"bit_result_skillup"*/;
      goto LABEL_150;
    case 11:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      v116 = &StringLiteral_17995/*"bit_result_powerup"*/;
LABEL_150:
      v125 = *v116;
      svtResultInfoWindow->fields.maskSprite = (struct UISprite_o *)*v116;
      p_maskSprite = (MissionNaviTransitionBoardItem_o *)&svtResultInfoWindow->fields.maskSprite;
      goto LABEL_176;
    case 12:
    case 22:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 2, v2);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_5070/*"CrtMaxLvExceedNodeName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                   (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                                                   0);
      if ( !this->fields.effect )
        goto LABEL_179;
      v45 = (System_String_o *)svtResultInfoWindow;
      v46 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)TransformHelper__getNodeFromName(v46, v45, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                   (UnityEngine_Component_o *)svtResultInfoWindow,
                                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v47 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v138) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)System_Int32__ToString((int32_t)&v138 + 4, 0);
      if ( !v47 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v47, (System_String_o *)svtResultInfoWindow, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_11850/*"ResMaxLvExceedNodeName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                   (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                                                   0);
      if ( !this->fields.effect )
        goto LABEL_179;
      v48 = (System_String_o *)svtResultInfoWindow;
      v49 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)TransformHelper__getNodeFromName(v49, v48, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                   (UnityEngine_Component_o *)svtResultInfoWindow,
                                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v50 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v138) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)System_Int32__ToString((int32_t)&v138, 0);
      if ( !v50 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v50, (System_String_o *)svtResultInfoWindow, 0);
      v51 = this->fields.baseUsrSvtData;
      if ( !v51 )
        goto LABEL_179;
      if ( v51->fields.exceedCount )
        goto LABEL_57;
      v52 = this->fields.resUsrSvtData;
      if ( !v52 )
        goto LABEL_179;
      if ( v52->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_57:
      Rarity = UserServantEntity__GetRarity(v51, 0, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UserServantEntity__GetFrameType(v51, Rarity, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v54 = (int)svtResultInfoWindow;
      v55 = this->fields.resUsrSvtData;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UserServantEntity__GetRarity(
                                                                   this->fields.baseUsrSvtData,
                                                                   0,
                                                                   0);
      if ( !v55 )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UserServantEntity__GetFrameType(
                                                                   v55,
                                                                   (int32_t)svtResultInfoWindow,
                                                                   0);
      if ( v54 != (_DWORD)svtResultInfoWindow )
        this->fields.isChangeCardImg = 1;
      v56 = this->fields.baseUsrSvtData;
      if ( !v56 )
        goto LABEL_179;
      v57 = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UserServantEntity__GetRarityIcon(v56, v57, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v58 = (int)svtResultInfoWindow;
      v59 = this->fields.resUsrSvtData;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UserServantEntity__GetRarity(
                                                                   this->fields.baseUsrSvtData,
                                                                   0,
                                                                   0);
      if ( !v59 )
        goto LABEL_179;
      if ( v58 != UserServantEntity__GetRarityIcon(v59, (int32_t)svtResultInfoWindow, 0) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        v61 = &StringLiteral_17991/*"bit_result_limitbreak"*/;
      }
      else
      {
        if ( !this->fields.isChangeCardImg )
        {
          v61 = &StringLiteral_17988/*"bit_result_grail_01"*/;
LABEL_154:
          svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
          if ( svtResultInfoWindow )
          {
            v76 = (ServantVoiceData_o *)*v61;
            goto LABEL_156;
          }
          goto LABEL_179;
        }
        v61 = &StringLiteral_17989/*"bit_result_grail_02"*/;
      }
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v60);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v127);
      goto LABEL_154;
    case 13:
    case 23:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      v43 = &StringLiteral_17986/*"bit_result_friendship_exceed"*/;
      goto LABEL_172;
    case 15:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_4925/*"CostumeName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                   (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                                                   0);
      if ( !this->fields.effect )
        goto LABEL_179;
      v77 = (System_String_o *)svtResultInfoWindow;
      v78 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)TransformHelper__getNodeFromName(v78, v77, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                   (UnityEngine_Component_o *)svtResultInfoWindow,
                                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      UILabel__set_text((UILabel_o *)svtResultInfoWindow, this->fields.costumeName, 0);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v79);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v80);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v81);
      v83 = this;
      successInfo = 1;
LABEL_141:
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)CombineResultEffectComponent__GetStartAnimationName(
                                                                   v83,
                                                                   successInfo,
                                                                   v82);
      if ( !this->fields.fsm )
        goto LABEL_179;
      v124 = (ServantVoiceData_o *)svtResultInfoWindow;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      goto LABEL_173;
    case 20:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      v43 = &StringLiteral_17982/*"bit_result_command_card_exceed"*/;
      goto LABEL_172;
    case 24:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v85);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v86);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v87);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      v43 = (__int64 *)&StringLiteral_17978/*"bit_result_120"*/;
LABEL_172:
      v124 = (ServantVoiceData_o *)*v43;
LABEL_173:
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)PlayMakerFSM__get_FsmVariables(
                                                                   (PlayMakerFSM_o *)svtResultInfoWindow,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                                                   (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                                                   (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                                                                   0);
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      LODWORD(v125) = (_DWORD)v124;
      svtResultInfoWindow->fields.maskSprite = (struct UISprite_o *)v124;
      p_maskSprite = (MissionNaviTransitionBoardItem_o *)&svtResultInfoWindow->fields.maskSprite;
LABEL_176:
      sub_2213A04(p_maskSprite, v125, v110, v111, v112, v113, v114, v115);
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_179;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtResultInfoWindow, (System_String_o *)StringLiteral_12830/*"START_ANIMATION"*/, 0);
      return;
    case 25:
      svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.effect;
      if ( svtResultInfoWindow )
      {
        svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                     (UnityEngine_GameObject_o *)svtResultInfoWindow,
                                                                     0);
        if ( svtResultInfoWindow )
        {
          v93 = UnityEngine_GameObject__AddComponent_object_(
                  (UnityEngine_GameObject_o *)svtResultInfoWindow,
                  (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
          v94 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v94,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_b__127_0__,
            0);
          v95 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
          EventDelegate___ctor_56337280(v95, v94, 0);
          if ( v93 )
          {
            svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)v93[2].klass;
            if ( svtResultInfoWindow )
            {
              m_CachedPtr = (struct System_String_o *)svtResultInfoWindow->fields.m_CachedPtr;
              v103 = Method_System_Collections_Generic_List_EventDelegate__Add__;
              ++HIDWORD(svtResultInfoWindow->fields.m_CancellationTokenSource);
              if ( m_CachedPtr )
              {
                m_CancellationTokenSource_low = SLODWORD(svtResultInfoWindow->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= LODWORD(m_CachedPtr[1].klass) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                    (Il2CppObject *)v95,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
                }
                else
                {
                  v105 = (__int64)m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(svtResultInfoWindow->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v105 + 32) = v95;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v105 + 32),
                    (int32_t)v95,
                    v96,
                    v97,
                    v98,
                    v99,
                    v100,
                    v101);
                }
                CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v106);
                svtResultInfoWindow = (SvtCombineResultWindowComponent_o *)this->fields.fsm;
                v43 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17985/*"bit_result_extraskill02"*/ : &StringLiteral_17984/*"bit_result_extraskill01"*/);
                if ( svtResultInfoWindow )
                  goto LABEL_172;
              }
            }
          }
        }
      }
      goto LABEL_179;
    default:
      return;
  }
}


void CombineResultEffectComponent__SetCardParam_Skill(
        CombineResultEffectComponent_o *this,
        System_String_o *startName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int *effect; // x0
  Il2CppObject *v9; // x22
  EventDelegate_Callback_o *v10; // x23
  EventDelegate_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5974BBD & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__130_0__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&StringLiteral_12830/*"START_ANIMATION"*/);
    sub_2213A60(&StringLiteral_13592/*"StartAnimationName"*/);
    byte_5974BBD = 1;
  }
  CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, method);
  if ( isSkip )
  {
    effect = (int *)this->fields.effect;
    if ( !effect )
      goto LABEL_17;
    effect = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0);
    if ( !effect )
      goto LABEL_17;
    v9 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)effect,
           (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v10 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__130_0__,
      0);
    v11 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
    EventDelegate___ctor_56337280(v11, v10, 0);
    if ( !v9
      || (effect = (int *)v9[2].klass) == 0
      || (v18 = *((_QWORD *)effect + 2),
          v19 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v18) )
    {
LABEL_17:
      sub_2213CDC(effect, v7);
    }
    v20 = effect[6];
    if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v11,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = v18 + 8 * v20;
      effect[6] = v20 + 1;
      *(_QWORD *)(v21 + 32) = v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), (int32_t)v11, v12, v13, v14, v15, v16, v17);
    }
  }
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  effect = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0);
  if ( !effect )
    goto LABEL_17;
  effect = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                    (HutongGames_PlayMaker_FsmVariables_o *)effect,
                    (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                    0);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(effect + 14), (int32_t)startName, v22, v23, v24, v25, v26, v27);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12830/*"START_ANIMATION"*/, 0);
}


void CombineResultEffectComponent__SetCardParam_TreasureDvc(
        CombineResultEffectComponent_o *this,
        System_String_o *startName,
        bool isSkip,
        const MethodInfo *method)
{
  int *effect; // x0
  Il2CppObject *v8; // x22
  EventDelegate_Callback_o *v9; // x23
  EventDelegate_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_5974BBE & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__131_0__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&StringLiteral_12830/*"START_ANIMATION"*/);
    sub_2213A60(&StringLiteral_13592/*"StartAnimationName"*/);
    byte_5974BBE = 1;
  }
  if ( isSkip )
  {
    effect = (int *)this->fields.effect;
    if ( !effect )
      goto LABEL_20;
    effect = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0);
    if ( !effect )
      goto LABEL_20;
    v8 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)effect,
           (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__131_0__,
      0);
    v10 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
    EventDelegate___ctor_56337280(v10, v9, 0);
    if ( !v8 )
      goto LABEL_20;
    effect = (int *)v8[2].klass;
    if ( !effect )
      goto LABEL_20;
    v17 = *((_QWORD *)effect + 2);
    v18 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++effect[7];
    if ( !v17 )
      goto LABEL_20;
    v19 = effect[6];
    if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v10,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = v17 + 8 * v19;
      effect[6] = v19 + 1;
      *(_QWORD *)(v20 + 32) = v10;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), (int32_t)v10, v11, v12, v13, v14, v15, v16);
    }
  }
  if ( this->fields.kind == 18 )
    CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(this, (const MethodInfo *)startName);
  else
    CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, method);
  effect = (int *)this->fields.fsm;
  if ( !effect
    || (effect = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0)) == 0
    || (effect = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)effect,
                          (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                          0)) == 0
    || (*((_QWORD *)effect + 7) = startName,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(effect + 14), (int32_t)startName, v21, v22, v23, v24, v25, v26),
        (effect = (int *)this->fields.fsm) == 0) )
  {
LABEL_20:
    sub_2213CDC(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12830/*"START_ANIMATION"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetCombineLimit(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        bool autoFadeout,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  CombineRootComponent_c *v27; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x1

  if ( (byte_5974BB6 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetCombineLimit_b__123_0__);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974BB6 = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (System_String_o *)callback,
    (System_String_o *)autoFadeout,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(gameObject, v25);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v27 = CombineRootComponent_TypeInfo;
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v26);
    v27 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v27->static_fields->EXCEED_ASSET_PATH;
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__123_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v29, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetCommandCardExceedInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  CombineRootComponent_c *v26; // x0
  AssetData_o *effectAssetData; // x0
  __int64 v28; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *v30; // x20
  UnityEngine_Transform_o *v31; // x21

  if ( (byte_5974BB0 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17982/*"bit_result_command_card_exceed"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    sub_2213A60(&StringLiteral_12837/*"START_COMMAND_CARD_EXCEED_EFFECT"*/);
    byte_5974BB0 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    *(System_String_o **)&cardIndex,
    *(System_String_o **)&exceedCount,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v19, v20, v21, v22, v23, v24);
  v26 = CombineRootComponent_TypeInfo;
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  if ( !*(&v26->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v26, v25);
    v26 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v26->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17982/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__58532980,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v30 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v31 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE5 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v31
    || (UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v30, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_17:
    sub_2213CDC(effectAssetData, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12837/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetCostumeCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t costumeId,
        System_String_o *costumeName,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        int32_t gender,
        const MethodInfo *method)
{
  bool v7; // w7
  struct UserServantEntity_o **p_baseUsrSvtData; // x24
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  UserServantEntity_o *gameObject; // x0
  int32_t CostumeOverrideTransformVal; // w0
  CombineResultEffectComponent_CostumeSkillInfoManager_c *v36; // x8
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v37; // x20
  const MethodInfo *v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Action_o *v45; // x20
  CombineResultEffectComponent_o *v46; // x0
  const MethodInfo *v47; // x2

  if ( (byte_5974BAA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__111_0__);
    sub_2213A60(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    byte_5974BAA = 1;
  }
  this->fields.baseUsrSvtData = userSvtEntity;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.kind = 15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    *(System_String_o **)&costumeId,
    costumeName,
    (int32_t)callback,
    gender,
    (bool)method,
    v7);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.costumeName,
    (int32_t)costumeName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v27, v28, v29, v30, v31, v32);
  this->fields.setResUsrSvtData = 0;
  if ( gender >= 1 )
    this->fields.genderType = gender;
  gameObject = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData )
    goto LABEL_8;
  CostumeOverrideTransformVal = UserServantEntity__GetCostumeOverrideTransformVal(gameObject, costumeId, 0);
  v36 = CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo;
  this->fields.costumeOverrideTransformVal = CostumeOverrideTransformVal;
  v37 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_2213CCC(v36);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v37, v38);
  this->fields.costumeSkillInfoManager = v37;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.costumeSkillInfoManager,
    (int32_t)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  gameObject = (UserServantEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_8:
    sub_2213CDC(gameObject, v33);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__111_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v46, v45, v47);
}


void CombineResultEffectComponent__SetFriendshipCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  CombineRootComponent_c *v24; // x0
  AssetData_o *effectAssetData; // x0
  __int64 v26; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *v28; // x20
  UnityEngine_Transform_o *v29; // x21

  if ( (byte_5974BAE & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17986/*"bit_result_friendship_exceed"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    sub_2213A60(&StringLiteral_12845/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_5974BAE = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v17, v18, v19, v20, v21, v22);
  v24 = CombineRootComponent_TypeInfo;
  this->fields.setResUsrSvtData = 0;
  if ( !*(&v24->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v24, v23);
    v24 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v24->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17986/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__58532980,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v28 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v29 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE5 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v29
    || (UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v28, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_17:
    sub_2213CDC(effectAssetData, v23);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12845/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo_47A29F8 *v24; // x0
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  CombineRootComponent_c *v28; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21
  __int64 v31; // x1

  if ( (byte_5974BAF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__116_0__);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974BAF = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    *(System_String_o **)&oldFriendShipRank,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v18, v19, v20, v21, v22, v23);
  v24 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance(v24);
  if ( !Instance )
    sub_2213CDC(0, v26);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v28 = CombineRootComponent_TypeInfo;
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v27);
    v28 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v28->static_fields->COMBINE_ASSET_PATH;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__116_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v31);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v30, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetFriendshipUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1

  if ( (byte_5974BA4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12844/*"START_FRIENDSHIPUP_EFFECT"*/);
    byte_5974BA4 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    *(System_String_o **)&oldFriendShipRank,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12844/*"START_FRIENDSHIPUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetLevelUpSvtFigure(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t v4; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  ServantScriptEntity_o *Entity_49781656; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  struct ServantVoiceData_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x3
  struct ServantVoiceData_array *v18; // x8
  ServantVoiceData_o *v19; // x8
  const MethodInfo *v20; // x3
  CombineResultEffectComponent_o *v21; // x0
  int32_t form; // w1
  const MethodInfo *v23; // x2
  struct UserServantEntity_o *v24; // x23
  System_String_array *v25; // x20
  System_String_o *v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v30; // x21
  struct ServantVoiceData_array *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  const MethodInfo *v38; // x2
  struct UserServantEntity_o *v39; // x21
  System_String_array *v40; // x20
  System_String_o *v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  ServantVoiceEntity_o *v44; // x20
  UserServantEntity_o *v45; // x21
  struct ServantVoiceData_array *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v54; // x8
  int parameters; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_5974BC4 & 1) == 0 )
  {
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    byte_5974BC4 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  parameters = 0;
  if ( !baseUsrSvtData )
    goto LABEL_46;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__GetServantId(baseUsrSvtData, -1, 0);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_46;
  v4 = (int)baseUsrSvtData;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.baseUsrSvtData, 0, 0, 0);
  Id = ServantScriptMaster__getId(v4, FigureImageLimitCount, 0);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  Entity_49781656 = ServantScriptMaster__GetEntity_49781656((ServantScriptMaster_o *)baseUsrSvtData, Id, 0);
  if ( !this->fields.svtVoiceEntity || !Entity_49781656 )
    return;
  baseUsrSvtData = (UserServantEntity_o *)ServantScriptEntity__isMultipleForm(Entity_49781656, 0);
  if ( ((unsigned __int8)baseUsrSvtData & 1) == 0 )
  {
    baseUsrSvtData = (UserServantEntity_o *)this->fields.svtVoiceEntity;
    if ( !baseUsrSvtData )
      goto LABEL_46;
    combineVoiceId = this->fields.combineVoiceId;
    method = (const MethodInfo *)this->fields.baseUsrSvtData;
    goto LABEL_17;
  }
  method = (const MethodInfo *)this->fields.baseUsrSvtData;
  if ( !method )
    goto LABEL_46;
  resUsrSvtData = this->fields.resUsrSvtData;
  parameters = (int)method[4].parameters;
  if ( !resUsrSvtData )
    goto LABEL_46;
  combineVoiceId = this->fields.combineVoiceId;
  if ( !combineVoiceId )
  {
    if ( System_Int32__Equals_77138484((int32_t)&parameters, resUsrSvtData->fields.lv, 0) )
    {
      v21 = this;
      form = 0;
      goto LABEL_44;
    }
    baseUsrSvtData = (UserServantEntity_o *)sub_2213B20(string___TypeInfo, 1);
    v24 = this->fields.baseUsrSvtData;
    if ( v24 )
    {
      v25 = (System_String_array *)baseUsrSvtData;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v56.fields.currentCryptoKey = &v24->fields.svtId;
      *(_QWORD *)&v56.fields.fakeValue = 0;
      baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v56, v23);
      if ( v25 )
      {
        sub_1FFE2C4(v25, 0, baseUsrSvtData);
        v26 = System_String__Concat_75697120(v25, 0);
        if ( UnityEngine_PlayerPrefs__GetInt_83396820(v26, 0) == 1 )
        {
          svtVoiceEntity = this->fields.svtVoiceEntity;
          v30 = this->fields.baseUsrSvtData;
          if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v27);
          v31 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v30, v28);
          goto LABEL_40;
        }
        baseUsrSvtData = (UserServantEntity_o *)sub_2213B20(string___TypeInfo, 1);
        v39 = this->fields.baseUsrSvtData;
        if ( v39 )
        {
          v40 = (System_String_array *)baseUsrSvtData;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v57.fields.currentCryptoKey = &v39->fields.svtId;
          *(_QWORD *)&v57.fields.fakeValue = 0;
          baseUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v57, v38);
          if ( v40 )
          {
            sub_1FFE2C4(v40, 0, baseUsrSvtData);
            v41 = System_String__Concat_75697120(v40, 0);
            UnityEngine_PlayerPrefs__SetInt(v41, 1, 0);
            v44 = this->fields.svtVoiceEntity;
            v45 = this->fields.baseUsrSvtData;
            if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v42);
            v46 = CombineResultFormManager__lotteryCombineResultInit(v44, v45, v43);
            this->fields.playVoiceList = v46;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList,
              (int32_t)v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52);
            playVoiceList = this->fields.playVoiceList;
            if ( playVoiceList )
            {
LABEL_41:
              if ( !LODWORD(playVoiceList->max_length) )
                goto LABEL_47;
              v54 = playVoiceList->m_Items[0];
              if ( !v54 )
                goto LABEL_46;
              form = v54->fields.form;
              v21 = this;
LABEL_44:
              CombineResultEffectComponent__SetBaseSvtFigure(v21, form, 1, v20);
              return;
            }
            baseUsrSvtData = (UserServantEntity_o *)this->fields.svtVoiceEntity;
            if ( !baseUsrSvtData )
              goto LABEL_46;
            v31 = ServantVoiceEntity__lotteryLevelUpVoice(
                    (ServantVoiceEntity_o *)baseUsrSvtData,
                    this->fields.baseUsrSvtData,
                    this->fields.combineVoiceId,
                    0);
LABEL_40:
            this->fields.playVoiceList = v31;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList,
              (int32_t)v31,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            playVoiceList = this->fields.playVoiceList;
            if ( !playVoiceList )
              goto LABEL_46;
            goto LABEL_41;
          }
        }
      }
    }
LABEL_46:
    sub_2213CDC(baseUsrSvtData, method);
  }
  baseUsrSvtData = (UserServantEntity_o *)this->fields.svtVoiceEntity;
  if ( !baseUsrSvtData )
    goto LABEL_46;
LABEL_17:
  v10 = ServantVoiceEntity__lotteryLevelUpVoice(
          (ServantVoiceEntity_o *)baseUsrSvtData,
          (UserServantEntity_o *)method,
          combineVoiceId,
          0);
  this->fields.playVoiceList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = this->fields.playVoiceList;
  if ( !v18 )
    goto LABEL_46;
  if ( !LODWORD(v18->max_length) )
LABEL_47:
    sub_2213CE4(baseUsrSvtData);
  v19 = v18->m_Items[0];
  if ( !v19 )
    goto LABEL_46;
  CombineResultEffectComponent__SetBaseSvtFigure(this, v19->fields.form, 1, v17);
}


void CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  UserServantEntity_o *LimitUpSvtVoiceList; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  int64_t fakeValue; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v10; // w21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  CombineResultEffectComponent_o *ImageLimitCount; // x0
  const MethodInfo *v16; // x3
  int32_t ResolveImageLimitCount; // w0
  const MethodInfo *v18; // x5
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_5974BCA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_8796/*"LimitUpResSvtNodeName"*/);
    byte_5974BCA = 1;
  }
  entity = 0;
  LimitUpSvtVoiceList = (UserServantEntity_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v7 = 0;
  if ( !isForceNormalFace && LimitUpSvtVoiceList )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.id.fields.hiddenValue) )
      sub_2213CE4(LimitUpSvtVoiceList);
    fakeValue = LimitUpSvtVoiceList->fields.id.fields.fakeValue;
    if ( !fakeValue )
      goto LABEL_21;
    v7 = *(_DWORD *)(fakeValue + 28);
  }
  LimitUpSvtVoiceList = this->fields.resUsrSvtData;
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = (UserServantEntity_o *)UserServantEntity__GetServantId(LimitUpSvtVoiceList, -1, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_21;
  v10 = (int)LimitUpSvtVoiceList;
  v11 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  LimitUpSvtVoiceList = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)LimitUpSvtVoiceList,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v10, v13, 0) )
    goto LABEL_18;
  LimitUpSvtVoiceList = (UserServantEntity_o *)entity;
  if ( !entity )
LABEL_21:
    sub_2213CDC(LimitUpSvtVoiceList, v6);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v13 = LimitCountUpResultServantLimitCount;
LABEL_18:
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v6);
  ImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetImageLimitCount(v10, v13, 0);
  ResolveImageLimitCount = CombineResultEffectComponent__GetResolveImageLimitCount(
                             ImageLimitCount,
                             (int32_t)ImageLimitCount,
                             this->fields.resUsrSvtData,
                             v16);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v10,
    ResolveImageLimitCount,
    v7,
    (System_String_o *)StringLiteral_8796/*"LimitUpResSvtNodeName"*/,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetLimitUpCombineInfo(
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
  bool v18; // w29
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  __int64 v51; // x21
  __int64 v52; // x22
  int32_t v53; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v55; // x8
  ServantLimitImageMaster_o *v56; // x20
  bool IsServantLimitCountSeal; // w0
  System_Action_c *v58; // x8
  System_Action_o *v59; // x20
  CombineResultEffectComponent_o *v60; // x0
  const MethodInfo *v61; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_5974BA8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__108_0__);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974BA8 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (System_String_o *)baseData,
    *(System_String_o **)&baseCollectionLimitCnt,
    (int32_t)callback,
    (int32_t)servantChange,
    autoFadeout,
    displayType);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resSvtNameData,
    (int32_t)servantChange,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.limitUpPlayVoiceLabel,
    (int32_t)playVoiceLabel,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.limitUpRewardGiftDataList,
    (int32_t)rewardGiftDataList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !baseData )
    goto LABEL_12;
  v51 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v52 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
  *(_QWORD *)&v63.fields.currentCryptoKey = v51;
  *(_QWORD *)&v63.fields.fakeValue = v52;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v63, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v55 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v64.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue,
        v56 = (ServantLimitImageMaster_o *)MasterData_object,
        *(_QWORD *)&v64.fields.currentCryptoKey = v55,
        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   v64,
                                                   0),
        !v56) )
  {
LABEL_12:
    sub_2213CDC(gameObject, v50);
  }
  IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(v56, (int32_t)gameObject, v53 + 1, 0);
  v58 = System_Action_TypeInfo;
  this->fields.isLimitUpSuppression = IsServantLimitCountSeal;
  v59 = (System_Action_o *)sub_2213CCC(v58);
  System_Action___ctor(
    v59,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__108_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v60, v59, v61);
}


void CombineResultEffectComponent__SetLvExceedCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 Int_83396820; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x24
  __int64 v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  struct UserServantEntity_o *v37; // x23
  __int64 v38; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x0
  const MethodInfo *v46; // x1
  UserServantEntity_o *v47; // x20
  CombineRootComponent_c *v48; // x0
  __int64 v49; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *v51; // x20
  UnityEngine_Transform_o *v52; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_5974BAC & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_12849/*"START_LVEXCEED_EFFECT"*/);
    sub_2213A60(&StringLiteral_17987/*"bit_result_grail"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    byte_5974BAC = 1;
  }
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.kind = 12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Int_83396820 = sub_2213B20(string___TypeInfo, 1);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_33;
  v28 = Int_83396820;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
  *(_QWORD *)&v53.fields.currentCryptoKey = &baseUsrSvtData->fields.svtId;
  *(_QWORD *)&v53.fields.fakeValue = 0;
  Int_83396820 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v53, v26);
  if ( !v28 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v28 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v28 + 32) = Int_83396820;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 32), Int_83396820, v29, v30, v31, v32, v33, v34);
  v35 = System_String__Concat_75697120((System_String_array *)v28, 0);
  Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v35, 0);
  if ( (_DWORD)Int_83396820 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_83396820 = sub_2213B20(string___TypeInfo, 1);
      v37 = *p_baseUsrSvtData;
      if ( *p_baseUsrSvtData )
      {
        v38 = Int_83396820;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
        *(_QWORD *)&v54.fields.currentCryptoKey = &v37->fields.svtId;
        *(_QWORD *)&v54.fields.fakeValue = 0;
        Int_83396820 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v54, v36);
        if ( v38 )
        {
          if ( *(_DWORD *)(v38 + 24) )
          {
            *(_QWORD *)(v38 + 32) = Int_83396820;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 32), Int_83396820, v39, v40, v41, v42, v43, v44);
            v45 = System_String__Concat_75697120((System_String_array *)v38, 0);
            UnityEngine_PlayerPrefs__SetInt(v45, 0, 0);
            v47 = *p_baseUsrSvtData;
            if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v46);
            CombineResultFormManager__ResetVoiceList(v47, v46);
            goto LABEL_19;
          }
LABEL_34:
          sub_2213CE4(Int_83396820);
        }
      }
LABEL_33:
      sub_2213CDC(Int_83396820, v25);
    }
  }
LABEL_19:
  v48 = CombineRootComponent_TypeInfo;
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v25);
    v48 = CombineRootComponent_TypeInfo;
  }
  Int_83396820 = (__int64)v48->static_fields->effectAssetData;
  if ( !Int_83396820 )
    goto LABEL_33;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)Int_83396820,
                              (System_String_o *)StringLiteral_17987/*"bit_result_grail"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  Int_83396820 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__58532980,
                            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_83396820 )
    goto LABEL_33;
  v51 = (UnityEngine_GameObject_o *)Int_83396820;
  Int_83396820 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_83396820, 0);
  v52 = (UnityEngine_Transform_o *)Int_83396820;
  if ( !byte_5969AE5 )
  {
    Int_83396820 = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v52 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v52, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Int_83396820 = (__int64)this->fields.fsm;
  if ( !Int_83396820 )
    goto LABEL_33;
  Int_83396820 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_83396820, 0);
  if ( !Int_83396820 )
    goto LABEL_33;
  Int_83396820 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_83396820,
                            (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                            0);
  if ( !Int_83396820 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_83396820, v51, 0);
  Int_83396820 = (__int64)this->fields.fsm;
  if ( !Int_83396820 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_83396820, (System_String_o *)StringLiteral_12849/*"START_LVEXCEED_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetLvExceedInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  CombineRootComponent_c *v26; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  __int64 v29; // x1

  if ( (byte_5974BAD & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__114_0__);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974BAD = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v24);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v26 = CombineRootComponent_TypeInfo;
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v25);
    v26 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v26->static_fields->EXCEED_ASSET_PATH;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__114_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v28, 1, 0, 0);
}


void CombineResultEffectComponent__SetNameRevealInfo(
        CombineResultEffectComponent_o *this,
        ServantChangeEntity_o *before,
        ServantChangeEntity_o *after,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  char *gameObject; // x0
  __int64 v26; // x1
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v29; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v31; // x21
  UnityEngine_Transform_o *v32; // x0
  char *v33; // x21
  System_String_o *v34; // x22
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_ParticleSystem_o *v36; // x22
  UnityEngine_ParticleSystem_ShapeModule_o v37; // x0
  int v38; // s0
  float NAME_REVEAL_EMISSION_BASE_SIZE; // s1
  float NAME_REVEAL_EMISSION_BASE_RATE; // s2
  const MethodInfo *v41; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v43; // x4
  struct ServantChangeEntity_o *v44; // x8
  int32_t v45; // w3
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  UnityEngine_ParticleSystem_MinMaxCurve_o v53; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v54; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v55; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974BA9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_11852/*"ResNameNodeName"*/);
    sub_2213A60(&StringLiteral_12850/*"START_NAME_REVEAL_EFFECT"*/);
    sub_2213A60(&StringLiteral_9773/*"NameRevealCrossFade"*/);
    sub_2213A60(&StringLiteral_5072/*"CrtNameNodeName"*/);
    sub_2213A60(&StringLiteral_17992/*"bit_result_name_reveal"*/);
    sub_2213A60(&StringLiteral_13592/*"StartAnimationName"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_9774/*"NameRevealParticleNodeName"*/);
    byte_5974BA9 = 1;
  }
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  v55 = 0;
  m_ParticleSystem = 0;
  this->fields.kind = 14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (System_String_o *)after,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.resSvtNameData = after;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resSvtNameData,
    (int32_t)after,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12850/*"START_NAME_REVEAL_EFFECT"*/, 0);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_40;
    name = ServantEntity__getTrueName((ServantEntity_o *)gameObject, -1, 0);
  }
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_5072/*"CrtNameNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v29 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v29, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !*p_crtSvtNameData )
    goto LABEL_40;
  if ( !gameObject )
    goto LABEL_40;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, (*p_crtSvtNameData)->fields.name, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_11852/*"ResNameNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v31 = (System_String_o *)gameObject;
  v32 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(v32, v31, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v33 = gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9774/*"NameRevealParticleNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v34 = (System_String_o *)gameObject;
  v35 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(v35, v34, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v36 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0).fields.m_ParticleSystem;
  v37.fields.m_ParticleSystem = UnityEngine_ParticleSystem__get_shape(v36, 0).fields.m_ParticleSystem;
  v38 = *((_DWORD *)v33 + 42);
  NAME_REVEAL_EMISSION_BASE_SIZE = this->fields.NAME_REVEAL_EMISSION_BASE_SIZE;
  NAME_REVEAL_EMISSION_BASE_RATE = this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  v55 = v37.fields.m_ParticleSystem;
  memset(&v54, 0, sizeof(v54));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(
    &v54,
    (float)((float)v38 / NAME_REVEAL_EMISSION_BASE_SIZE) * NAME_REVEAL_EMISSION_BASE_RATE,
    0);
  v53 = v54;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(
    (UnityEngine_ParticleSystem_EmissionModule_o)&m_ParticleSystem,
    &v53,
    0);
  v57.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v57.fields.x = (float)((float)*((int *)v33 + 42) / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v57.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale((UnityEngine_ParticleSystem_ShapeModule_o)&v55, v57, 0);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v41);
  v44 = this->fields.crtSvtNameData;
  if ( !v44 )
    goto LABEL_40;
  v45 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v44->fields.svtId, v44->fields.limitCount, v45, v43);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0)) == 0
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                               0)) == 0 )
  {
LABEL_40:
    sub_2213CDC(gameObject, v26);
  }
  v52 = StringLiteral_17992/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17992/*"bit_result_name_reveal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(gameObject + 56), v52, v46, v47, v48, v49, v50, v51);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9773/*"NameRevealCrossFade"*/,
    this->fields.NAME_REVEAL_INVOKE_TIME,
    0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetNobleCombineInfo(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        bool useTreasureDeviceIdForTdAddMaster,
        bool isSkipStartEffect,
        bool autoFadeout,
        const MethodInfo *method)
{
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  ServantTreasureDeviceAddMaster_o *Master_object; // x0
  const MethodInfo *v33; // x1
  ServantTreasureDeviceAddMaster_o *v34; // x25
  __int64 v35; // x20
  __int64 v36; // x26
  int32_t v37; // w26
  int32_t v38; // w4
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x26
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v40; // x20
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x23
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  __int64 v49; // x20
  __int64 v50; // x22
  int32_t v51; // w22
  __int64 v52; // x1
  int32_t v53; // w24
  TerminalPramsManager_c *v54; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntityBeforeClearQuest; // x22
  __int64 v56; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v58; // x8
  __int64 v59; // x8
  CombineResultEffectComponent_o *TransformCount; // x0
  const MethodInfo *v61; // x2
  int32_t v62; // w27
  __int64 v63; // x1
  int32_t TransformedServantId; // w29
  __int64 v65; // x20
  __int64 v66; // x26
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v67; // x28
  TerminalPramsManager_c *v68; // x0
  int32_t id; // w1
  int32_t v70; // w2
  __int64 v71; // x24
  struct System_Int32_array *v72; // x8
  struct System_Int32_array *v73; // x8
  __int64 v74; // x8
  __int64 v75; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  int v78; // [xsp+8h] [xbp-78h]
  TreasureDvcInfo_o *v80; // [xsp+10h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_5974BA2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_12851/*"START_NOBLEUP_EFFECT"*/);
    sub_2213A60(&StringLiteral_14084/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/);
    sub_2213A60(&StringLiteral_14085/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/);
    byte_5974BA2 = 1;
  }
  tdInfo = 0;
  v80 = 0;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (System_String_o *)usrSvtData,
    *(System_String_o **)&targetId,
    targetLv,
    (int32_t)callback,
    targetIdOld,
    targetLvOld);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v19, v20, v21, v22, v23, v24);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_80;
  v34 = Master_object;
  v35 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
  *(_QWORD *)&v82.fields.currentCryptoKey = v35;
  *(_QWORD *)&v82.fields.fakeValue = v36;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v82, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                        usrSvtData->fields.limitCount,
                                                        0);
  if ( !v34 )
    goto LABEL_80;
  if ( useTreasureDeviceIdForTdAddMaster )
    v38 = targetId;
  else
    v38 = 0;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v34, v37, (int32_t)Master_object, 0, v38, 0, 0);
  v40 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_2213CCC(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v40, 0);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.npInfoAddManager,
    (int32_t)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !EnableEntity )
  {
    TransformCount = (CombineResultEffectComponent_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
    v78 = (int)TransformCount;
    if ( (int)TransformCount < 2
      || CombineResultEffectComponent__IsTransformedNpDispUnavailable(TransformCount, usrSvtData, v61) )
    {
      goto LABEL_69;
    }
    v62 = 0;
    while ( 1 )
    {
      UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(usrSvtData, &tdInfo, v62, -1, -1, 0, 0);
      TransformedServantId = UserServantEntity__GetTransformedServantId(usrSvtData, v62, 0);
      v65 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      v66 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v67 = *p_npInfoAddManager;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
      *(_QWORD *)&v84.fields.currentCryptoKey = v65;
      *(_QWORD *)&v84.fields.fakeValue = v66;
      Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                            v84,
                                                            0);
      if ( !tdInfo )
        break;
      Master_object = (ServantTreasureDeviceAddMaster_o *)ServantTreasureDeviceAddMaster__GetEnableEntity(
                                                            v34,
                                                            TransformedServantId,
                                                            (int32_t)Master_object,
                                                            0,
                                                            tdInfo->fields.id,
                                                            0,
                                                            0);
      if ( !v67 )
        break;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
        v67,
        (ServantTreasureDeviceAddEntity_o *)Master_object,
        0);
      if ( kind == 8 )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
        if ( !byte_596A92E )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596A92E = 1;
        }
        v68 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
          v68 = TerminalPramsManager_TypeInfo;
        }
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                              usrSvtData,
                                                              &v80,
                                                              v62,
                                                              v68->static_fields->_QuestId_k__BackingField,
                                                              -1,
                                                              0,
                                                              0);
        if ( !v80 )
          break;
        Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        id = v80->fields.id;
        v70 = targetLv;
      }
      else
      {
        if ( !tdInfo )
          break;
        Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        id = tdInfo->fields.id;
        v70 = targetLvOld;
      }
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        id,
        v70,
        TransformedServantId,
        0);
      if ( !tdInfo )
        break;
      Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
      if ( !*p_npInfoAddManager )
        break;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        tdInfo->fields.id,
        targetLv,
        TransformedServantId,
        0);
      Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
      if ( !*p_npInfoAddManager )
        break;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        0,
        0);
      if ( v78 == ++v62 )
        goto LABEL_68;
    }
LABEL_80:
    sub_2213CDC(Master_object, v33);
  }
  Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
  if ( !*p_npInfoAddManager )
    goto LABEL_80;
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
    (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
    EnableEntity,
    0);
  if ( kind == 8 )
  {
    v49 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
    *(_QWORD *)&v83.fields.currentCryptoKey = v49;
    *(_QWORD *)&v83.fields.fakeValue = v50;
    v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v83, 0);
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(usrSvtData->fields.limitCount, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v52);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v52);
      v54 = TerminalPramsManager_TypeInfo;
    }
    EnableEntityBeforeClearQuest = ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
                                     v34,
                                     v51,
                                     v53,
                                     v54->static_fields->_QuestId_k__BackingField,
                                     0);
    Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                          (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
    if ( (int)Master_object >= 1 )
    {
      if ( EnableEntityBeforeClearQuest )
      {
        v56 = 8;
        while ( 1 )
        {
          treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
          if ( !treasureDeviceIds )
            break;
          if ( v56 - 8 >= (unsigned __int64)LODWORD(treasureDeviceIds->max_length) )
            goto LABEL_81;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&treasureDeviceIds->obj.klass + v56),
            targetLv,
            0,
            0);
          v58 = EnableEntity->fields.treasureDeviceIds;
          if ( !v58 )
            break;
          if ( v56 - 8 >= (unsigned __int64)LODWORD(v58->max_length) )
            goto LABEL_81;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v58->obj.klass + v56),
            targetLv,
            0,
            0);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
          v59 = v56 - 7;
          ++v56;
          if ( v59 >= (int)Master_object )
            goto LABEL_68;
        }
      }
      goto LABEL_80;
    }
    goto LABEL_68;
  }
  Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                        (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)Master_object >= 1 )
  {
    v71 = 8;
    do
    {
      v72 = EnableEntity->fields.treasureDeviceIds;
      if ( !v72 )
        goto LABEL_80;
      if ( v71 - 8 >= (unsigned __int64)LODWORD(v72->max_length) )
        goto LABEL_81;
      Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
      if ( !*p_npInfoAddManager )
        goto LABEL_80;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        *((_DWORD *)&v72->obj.klass + v71),
        targetLvOld,
        0,
        0);
      v73 = EnableEntity->fields.treasureDeviceIds;
      if ( !v73 )
        goto LABEL_80;
      if ( v71 - 8 >= (unsigned __int64)LODWORD(v73->max_length) )
LABEL_81:
        sub_2213CE4(Master_object);
      Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
      if ( !*p_npInfoAddManager )
        goto LABEL_80;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        *((_DWORD *)&v73->obj.klass + v71),
        targetLv,
        0,
        0);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
      v74 = v71 - 7;
      ++v71;
    }
    while ( v74 < (int)Master_object );
  }
LABEL_68:
  ++this->fields.tdShowIndex;
LABEL_69:
  Master_object = (ServantTreasureDeviceAddMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !Master_object )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.unSummon;
  if ( !Master_object )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, kind == 27, 0);
  unSummonLabel = this->fields.unSummonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v75);
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_14084/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0);
  if ( !unSummonLabel )
    goto LABEL_80;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_14085/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0);
  if ( !unSummonDetail )
    goto LABEL_80;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0);
  if ( isSkipStartEffect )
  {
    CombineResultEffectComponent__setSkillResultInfo(this, v33);
  }
  else
  {
    Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
    if ( !Master_object )
      goto LABEL_80;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12851/*"START_NOBLEUP_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent__SetPowerUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1

  if ( (byte_5974BAB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12855/*"START_POWERUP_EFFECT"*/);
    byte_5974BAB = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(gameObject, v24);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12855/*"START_POWERUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t kind; // w9
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  struct ServantChangeEntity_o *resSvtNameData; // x8
  int32_t voiceSvtId; // w1
  CombineResultEffectComponent_o *v9; // x0
  int32_t costumeId; // w2
  bool v11; // w3
  struct ServantChangeEntity_o *v12; // x8
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t CardImageLimitCount; // w0
  __int64 v15; // x1
  int32_t v16; // w20
  const MethodInfo *v17; // x1

  if ( (byte_5974BBC & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974BBC = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    CommonUI__SetLoadMode(Instance, 1, 0);
    Instance = (CommonUI_o *)this->fields.resUsrSvtData;
    if ( !Instance )
      goto LABEL_31;
    LimitCountByImageLimitCostumeIn = -1;
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)Instance, 0, 0, -1, 0);
    if ( CardImageLimitCount >= 11 )
    {
      v16 = CardImageLimitCount;
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v15);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v16, 0);
    }
    voiceSvtId = this->fields.voiceSvtId;
    v9 = this;
    costumeId = LimitCountByImageLimitCostumeIn;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 1, 0);
        resSvtNameData = this->fields.resSvtNameData;
        if ( resSvtNameData )
          voiceSvtId = resSvtNameData->fields.svtVoiceId;
        else
          voiceSvtId = -1;
        v9 = this;
        costumeId = -1;
        v11 = 1;
        goto LABEL_30;
      }
LABEL_31:
      sub_2213CDC(Instance, v5);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    CommonUI__SetLoadMode(Instance, 1, 0);
    v12 = this->fields.resSvtNameData;
    if ( v12 )
      voiceSvtId = v12->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    costumeId = this->fields.costumeId;
    v9 = this;
  }
  v11 = 0;
LABEL_30:
  CombineResultEffectComponent__getSvtVoiceData(v9, voiceSvtId, costumeId, v11, v6);
  CombineResultEffectComponent__loadVoiceData(this, v17);
}


void CombineResultEffectComponent__SetResultUserServantData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  _BOOL4 setResUsrSvtData; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v5; // q1
  struct UserServantEntity_o *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int128 v8; // q0
  __int128 v9; // q1
  int v10; // w8
  struct UserServantEntity_o *v11; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int128 v13; // q0
  __int128 v14; // q1
  int v15; // w8
  UserServantEntity_o *v16; // x20
  UserServantEntity_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UserServantEntity_o *v24; // x8
  __int64 v25; // x20
  __int64 v26; // x21
  UserServantEntity_o *resUsrSvtData; // x20
  UserServantEntity_o *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct UserServantEntity_o *v35; // x8
  __int64 v36; // x20
  __int64 v37; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x22
  int32_t v39; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v42; // x8
  ServantLimitImageMaster_o *v43; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  int32_t v45; // w21
  __int64 v46; // x1
  int32_t v47; // w22
  int32_t v48; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // kr10_16
  struct UserServantEntity_o *v50; // x8
  int32_t hp; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v52; // x8
  ServantLimitMaster_o *v53; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  int32_t v55; // w21
  CombineResultEffectComponent_o *v56; // x8
  struct UserServantEntity_o *v57; // x8
  UserServantEntity_o *v58; // x20
  UserServantEntity_o *v59; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_resUsrSvtData; // x19
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x22
  __int64 v68; // x20
  __int64 v69; // x21
  int32_t v70; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // kr20_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x22
  ServantLimitImageMaster_o *v73; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v74; // x8
  int32_t v75; // w19
  __int64 v76; // x1
  int32_t v77; // w21
  int32_t ServantImageLimitSealAfter; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // kr30_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  v2 = this;
  if ( (byte_5974BBB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_2213A60(&UserServantEntity_TypeInfo);
    byte_5974BBB = 1;
  }
  setResUsrSvtData = v2->fields.setResUsrSvtData;
  *(_QWORD *)afterAtk = 0;
  if ( !setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_62;
    v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v83.fields.fakeValue = v5;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    v82 = v83;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v82, 0) < 1 )
    {
      v58 = v2->fields.baseUsrSvtData;
      v59 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_50173628(v59, v58, 0);
      v2->fields.resUsrSvtData = v59;
      p_resUsrSvtData = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p_resUsrSvtData, (int32_t)v59, v61, v62, v63, v64, v65, v66);
      if ( (*((_DWORD *)p_resUsrSvtData - 8) | 0x10) != 0x1A )
        return;
      v67 = *p_resUsrSvtData;
      if ( *p_resUsrSvtData )
      {
        v68 = *(_QWORD *)&v67[6].fields.currentCryptoKey;
        v69 = *(_QWORD *)&v67[6].fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v87.fields.currentCryptoKey = v68;
        *(_QWORD *)&v87.fields.fakeValue = v69;
        v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v87, 0);
        v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v70 + 1, 0);
        v67[6] = v71;
        v72 = *p_resUsrSvtData;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&v71.fields.fakeValue);
        this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( *p_resUsrSvtData )
        {
          v73 = (ServantLimitImageMaster_o *)this;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     (*p_resUsrSvtData)[5],
                                                     0);
          v74 = *p_resUsrSvtData;
          if ( *p_resUsrSvtData )
          {
            v75 = (int)this;
            v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v74[6], 0);
            if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v76);
            this = (CombineResultEffectComponent_o *)ImageLimitCount__GetDispLimitCount(v77, 0);
            if ( v73 )
            {
              ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                             v73,
                                             v75,
                                             (int32_t)this,
                                             0);
              v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ServantImageLimitSealAfter, 0);
              method = *(const MethodInfo **)&v79.fields.fakeValue;
              this = *(CombineResultEffectComponent_o **)&v79.fields.currentCryptoKey;
              if ( v72 )
              {
                v72[8] = v79;
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
        v6 = v2->fields.baseUsrSvtData;
        if ( v6 )
        {
          v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
          v8 = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
          v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
          v10 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v83.fields.currentCryptoKey = v8;
          *(_OWORD *)&v83.fields.fakeValue = v9;
          if ( !v10 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
          v81 = v83;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                     &v81,
                                                     0);
          if ( v7 )
          {
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v7,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v11 = v2->fields.baseUsrSvtData;
              if ( !v11 )
                goto LABEL_62;
              v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
              v13 = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
              v14 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
              v15 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v83.fields.currentCryptoKey = v13;
              *(_OWORD *)&v83.fields.fakeValue = v14;
              if ( !v15 )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
              v80 = v83;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                         &v80,
                                                         0);
              if ( !v12 )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v12,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v16 = v2->fields.baseUsrSvtData;
                v17 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_50173628(v17, v16, 0);
                v2->fields.resUsrSvtData = v17;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v2->fields.resUsrSvtData,
                  (int32_t)v17,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23);
              }
            }
            if ( v2->fields.kind != 19 )
              return;
            v24 = v2->fields.baseUsrSvtData;
            if ( v24 )
            {
              v25 = *(_QWORD *)&v24->fields.limitCount.fields.currentCryptoKey;
              v26 = *(_QWORD *)&v24->fields.limitCount.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
              *(_QWORD *)&v85.fields.currentCryptoKey = v25;
              *(_QWORD *)&v85.fields.fakeValue = v26;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                         v85,
                                                         0);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v28 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_50173628(v28, resUsrSvtData, 0);
                v2->fields.resUsrSvtData = v28;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v2->fields.resUsrSvtData,
                  (int32_t)v28,
                  v29,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34);
                v35 = v2->fields.baseUsrSvtData;
                if ( v35 )
                {
                  v36 = *(_QWORD *)&v35->fields.limitCount.fields.currentCryptoKey;
                  v37 = *(_QWORD *)&v35->fields.limitCount.fields.fakeValue;
                  v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
                  *(_QWORD *)&v86.fields.currentCryptoKey = v36;
                  *(_QWORD *)&v86.fields.fakeValue = v37;
                  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v86, 0);
                  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v39 + 1, 0);
                  method = *(const MethodInfo **)&v40.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v40.fields.currentCryptoKey;
                  if ( v38 )
                  {
                    v38[6] = v40;
                    v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&v40.fields.fakeValue);
                    this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    v42 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                    if ( v42 )
                    {
                      v43 = (ServantLimitImageMaster_o *)this;
                      this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                 v42[5],
                                                                 0);
                      v44 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                      if ( v44 )
                      {
                        v45 = (int)this;
                        v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44[6], 0);
                        if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v46);
                        this = (CombineResultEffectComponent_o *)ImageLimitCount__GetDispLimitCount(v47, 0);
                        if ( v43 )
                        {
                          v48 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v43, v45, (int32_t)this, 0);
                          v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v48, 0);
                          method = *(const MethodInfo **)&v49.fields.fakeValue;
                          this = *(CombineResultEffectComponent_o **)&v49.fields.currentCryptoKey;
                          if ( v41 )
                          {
                            v41[8] = v49;
                            v50 = v2->fields.baseUsrSvtData;
                            if ( v50 )
                            {
                              hp = v50->fields.hp;
                              afterAtk[0] = v50->fields.atk;
                              afterAtk[1] = hp;
                              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( this )
                              {
                                this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)this,
                                                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                v52 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                                if ( v52 )
                                {
                                  v53 = (ServantLimitMaster_o *)this;
                                  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                             v52[5],
                                                                             0);
                                  v54 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                                  if ( v54 )
                                  {
                                    v55 = (int)this;
                                    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                               v54[6],
                                                                               0);
                                    if ( v53 )
                                    {
                                      this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                                 v53,
                                                                                 v55,
                                                                                 (int32_t)this,
                                                                                 0);
                                      if ( this )
                                      {
                                        v56 = this;
                                        this = (CombineResultEffectComponent_o *)v2->fields.combineResStatus;
                                        if ( this )
                                        {
                                          CheckCombineResStatus__getCombineResStatus(
                                            (CheckCombineResStatus_o *)this,
                                            &afterAtk[1],
                                            afterAtk,
                                            v2->fields.resUsrSvtData,
                                            HIDWORD(v56->fields.m_CancellationTokenSource),
                                            0);
                                          v57 = v2->fields.resUsrSvtData;
                                          if ( v57 )
                                          {
                                            *(_QWORD *)&v57->fields.atk = *(_QWORD *)afterAtk;
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
        }
      }
    }
LABEL_62:
    sub_2213CDC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetSecretTreasureDeviceInfoForQuestClear(
        CombineResultEffectComponent_o *this,
        int32_t questId,
        int32_t phase,
        CombineResultEffectComponent_MessageDelegate_o *msgCallBack,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  void *Instance; // x0
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *v21; // x24
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w25
  int v24; // w8
  Il2CppObject *v25; // x26
  int v27; // w8
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__118_0; // x22
  Il2CppObject *v40; // x23
  struct CombineResultEffectComponent___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int v48; // w23
  BalanceConfig_c *v49; // x0
  TerminalSceneComponent_c *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int32_t v63; // w1
  int32_t v64; // w22
  const MethodInfo *v65; // x2
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_5974BB1 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
    sub_2213A60(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__118_0__);
    sub_2213A60(&CombineResultEffectComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_12857/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_2213A60(&StringLiteral_18003/*"bit_result_ultimate_anim"*/);
    sub_2213A60(&StringLiteral_13592/*"StartAnimationName"*/);
    byte_5974BB1 = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    *(System_String_o **)&phase,
    (System_String_o *)msgCallBack,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.messageCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.messageCallback, 0, v13, v14, v15, v16, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_60;
  v21 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 5);
  v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v21 )
    goto LABEL_60;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v21,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v21,
                   v23,
                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        break;
      v24 = *((_DWORD *)Instance + 9);
      v25 = (Il2CppObject *)Instance;
      if ( v24 >= 1 && v24 == questId )
      {
        v27 = *((_DWORD *)Instance + 10);
        if ( v27 < 1 || v27 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v22 )
              break;
            items = v22->fields._items;
            v35 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v22->fields._version;
            if ( !items )
              break;
            size = v22->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                v25,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v22->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v25;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v25, v28, v29, v30, v31, v32, v33);
            }
          }
        }
      }
      if ( ++v23 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v21,
                      (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) )
        goto LABEL_23;
    }
LABEL_60:
    sub_2213CDC(Instance, v20);
  }
LABEL_23:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !*(&CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo, v20);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  static_fields = (struct CombineResultEffectComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__118_0 = (System_Comparison_T__o *)static_fields->__9__118_0;
  if ( !_9__118_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v20);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__118_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__118_0,
      v40,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__118_0__,
      0);
    v41 = CombineResultEffectComponent___c_TypeInfo->static_fields;
    v41->__9__118_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__118_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->__9__118_0, (int32_t)_9__118_0, v42, v43, v44, v45, v46, v47);
  }
  if ( !v22 )
    goto LABEL_60;
  System_Collections_Generic_List_object___Sort_71849708(
    v22,
    _9__118_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v48 = v22->fields._size;
  if ( v48 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v22,
                 0,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_60;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v49 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
    v49 = BalanceConfig_TypeInfo;
  }
  if ( !v49->static_fields->CloseSecretTreasureDeviceQuestClear && v22->fields._size >= 1 )
  {
    v64 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v22,
                   v64,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_60;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v65) )
        break;
      if ( ++v64 >= v22->fields._size )
        goto LABEL_36;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v22,
                 v64,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_60;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_36:
  if ( v48 < 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        callbackFunc->fields.method);
  }
  else
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v50 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
      v50 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v50->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_60;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0);
    this->fields.messageCallback = msgCallBack;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.messageCallback,
      (int32_t)msgCallBack,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_60;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_60;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                 0);
    if ( !Instance )
      goto LABEL_60;
    v63 = StringLiteral_18003/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_18003/*"bit_result_ultimate_anim"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)Instance + 56), v63, v57, v58, v59, v60, v61, v62);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_60;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12857/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent__SetSecretTreasureDeviceInfoForSvtGet(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  BalanceConfig_c *v13; // x0
  __int64 v14; // x1
  char *fsm; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_5974BB2 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_12857/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_2213A60(&StringLiteral_18003/*"bit_result_ultimate_anim"*/);
    sub_2213A60(&StringLiteral_13592/*"StartAnimationName"*/);
    byte_5974BB2 = 1;
  }
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v13 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( v13->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v12) )
  {
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        callbackFunc->fields.method);
  }
  else
  {
    fsm = (char *)this->fields.fsm;
    this->fields.targetSvtId = svtId;
    if ( !fsm
      || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0)) == 0
      || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                          (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                          0)) == 0
      || (v22 = StringLiteral_18003/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_18003/*"bit_result_ultimate_anim"*/,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(fsm + 56), v22, v16, v17, v18, v19, v20, v21),
          (fsm = (char *)this->fields.fsm) == 0) )
    {
      sub_2213CDC(fsm, v14);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12857/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetSkillCombineInfo(
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  struct System_Int32_array *skillIds; // x8
  __int64 v26; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5974BA1 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12862/*"START_SKILLUP_EFFECT"*/);
    sub_2213A60(&StringLiteral_12741/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/);
    sub_2213A60(&StringLiteral_12742/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/);
    byte_5974BA1 = 1;
  }
  svtSkillAddEnt = 0;
  this->fields.baseUsrSvtData = usrSvtData;
  this->fields.kind = kind;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (System_String_o *)usrSvtData,
    *(System_String_o **)&targetId,
    targetLv,
    (int32_t)callback,
    targetIdOld,
    targetLvOld);
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                            baseUsrSvtData,
                                            &svtSkillAddEnt,
                                            targetId,
                                            0);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    if ( !svtSkillAddEnt )
      goto LABEL_16;
    skillIds = svtSkillAddEnt->fields.skillIds;
    if ( !skillIds )
      goto LABEL_16;
    this->fields.displayCount = LODWORD(skillIds->max_length) - 1;
  }
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !baseUsrSvtData )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUsrSvtData, 1, 0);
  baseUsrSvtData = (UserServantEntity_o *)this->fields.unSummon;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUsrSvtData, kind == 21, 0);
  unSummonLabel = this->fields.unSummonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12741/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)baseUsrSvtData, 0),
        unSummonDetail = this->fields.unSummonDetail,
        baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12742/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)baseUsrSvtData, 0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.fsm) == 0) )
  {
LABEL_16:
    sub_2213CDC(baseUsrSvtData, v23);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)baseUsrSvtData, (System_String_o *)StringLiteral_12862/*"START_SKILLUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetStandFigureFace(
        CombineResultEffectComponent_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t playCount,
        ServantVoiceData_array *playVoiceList,
        System_Collections_Generic_List_StandFigureCollect__o *standFigureCollects,
        int32_t formId,
        const MethodInfo *method)
{
  UIStandFigureR_o *Item; // x0
  __int64 v14; // x1
  struct ServantVoiceData_array *v15; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v17; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  unsigned __int64 v20; // x20
  __int64 v21; // x26
  int32_t v22; // w21
  int32_t v23; // w22

  if ( (byte_5974BD8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_5974BD8 = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_51076984(Item, faceType, formId, 0, fadeTime, 0);
          return;
        }
      }
    }
LABEL_23:
    sub_2213CDC(Item, v14);
  }
  v15 = this->fields.playVoiceList;
  if ( !v15 )
    goto LABEL_23;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= LODWORD(v15->max_length) )
LABEL_24:
    sub_2213CE4(Item);
  v17 = v15->m_Items[playCnt];
  if ( !v17 )
    goto LABEL_23;
  multiFace = v17->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v17->fields.multiForm;
    if ( multiForm )
    {
      if ( (_DWORD)Item == LODWORD(multiFace->max_length) && (_DWORD)Item == LODWORD(multiForm->max_length) )
      {
        v20 = 0;
        v21 = (unsigned int)Item;
        while ( v20 < LODWORD(multiFace->max_length) && v20 < LODWORD(multiForm->max_length) )
        {
          if ( !standFigureCollects )
            goto LABEL_23;
          v22 = multiFace->m_Items[v20];
          v23 = multiForm->m_Items[v20];
          Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)standFigureCollects,
                                       v20,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !Item )
            goto LABEL_23;
          Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
          if ( !Item )
            goto LABEL_23;
          UIStandFigureR__SetFace_51076984(Item, v22, v23, 0, fadeTime, 0);
          if ( v21 == ++v20 )
            return;
        }
        goto LABEL_24;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetSvtCombineInfo(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        int32_t infoIdx,
        int64_t returnQpNum,
        System_Int64_array *returnSvtIds,
        UserServantEntity_o *baseData,
        int32_t baseCollectionLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  System_Action_o *v43; // x20
  CombineResultEffectComponent_o *v44; // x0
  const MethodInfo *v45; // x2

  if ( (byte_5974BA5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__105_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974BA5 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    *(System_String_o **)&infoIdx,
    (System_String_o *)returnQpNum,
    (int32_t)returnSvtIds,
    (int32_t)baseData,
    baseCollectionLv,
    (bool)callback);
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v23, v24, v25, v26, v27, v28);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.combineVoiceId, 0, v29, v30, v31, v32, v33, v34);
  this->fields.autoFadeout = 0;
  this->fields.combineStatusDisp = 1;
  this->fields.callbackFunc = callback;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(gameObject, v42);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v43 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__105_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v44, v43, v45);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetSvtCombineInfo_55905704(
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t lv; // w8
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Action_o *v40; // x20
  CombineResultEffectComponent_o *v41; // x0
  const MethodInfo *v42; // x2

  if ( (byte_5974BA6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__106_0__);
    byte_5974BA6 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    *(System_String_o **)&infoIdx,
    (System_String_o *)baseData,
    (int32_t)resData,
    svtId,
    (bool)voiceId,
    statusDisp);
  this->fields.resUsrSvtData = resData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData,
    (int32_t)resData,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_6;
  lv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  this->fields.baseUsrSvtCollictionLv = lv;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineVoiceId,
    (int32_t)voiceId,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_6:
    sub_2213CDC(gameObject, v26);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__106_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v41, v40, v42);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetSvtEqCombineInfo(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        int32_t infoIdx,
        int32_t normalExp,
        int32_t addExp,
        int64_t returnQpNum,
        System_Int64_array *returnSvtIds,
        UserServantEntity_o *baseData,
        int32_t baseCollectionLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  System_Action_o *v39; // x20
  CombineResultEffectComponent_o *v40; // x0
  const MethodInfo *v41; // x2

  if ( (byte_5974BA7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__107_0__);
    byte_5974BA7 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    *(System_String_o **)&infoIdx,
    *(System_String_o **)&normalExp,
    addExp,
    returnQpNum,
    (bool)returnSvtIds,
    (bool)baseData);
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData, 0, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v38);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__107_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v40, v39, v41);
}


void CombineResultEffectComponent__SetTransformData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  __int64 v4; // x1
  ServantTransformMaster_o *Master_object; // x0
  struct UserServantEntity_o *v6; // x8
  ServantTransformMaster_o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  int v10; // w21
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  ServantEntity_TransformInfo_o *v12; // x22
  unsigned int v13; // w8
  int32_t TransformCount; // w0
  struct System_String_o *list; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_o *condLabelTitle; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x21
  System_String_o *CondSpriteColor; // x20
  struct UserServantEntity_o *v38; // x8
  ServantTransformMaster_o *v39; // x20
  __int64 v40; // x21
  __int64 v41; // x22
  struct UserServantEntity_o *v42; // x8
  int32_t v43; // w21
  unsigned int kind; // w8
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  ServantTransformEntity_o *v51; // x8
  struct System_String_o *befTitle; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct System_String_o *aftTitle; // x1
  __int64 v60; // x1
  DataManager_c *v61; // x0
  Il2CppObject *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *CondLabelColor; // x20
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  UnityEngine_Color_o v73; // 0:kr30_16.16
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974BD5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974BD5 = 1;
  }
  entity = 0;
  CombineResultEffectComponent__ResetTransformData(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData )
  {
    if ( !UserServantEntity__get_IsSaveTransformServant(baseUsrSvtData, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
      Master_object = (ServantTransformMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTransformMaster___);
      v38 = this->fields.baseUsrSvtData;
      if ( v38 )
      {
        v39 = Master_object;
        v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
        v41 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
        *(_QWORD *)&v72.fields.currentCryptoKey = v40;
        *(_QWORD *)&v72.fields.fakeValue = v41;
        Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                      v72,
                                                      0);
        v42 = this->fields.baseUsrSvtData;
        if ( v42 )
        {
          v43 = (int)Master_object;
          Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                        v42->fields.dispLimitCount,
                                                        0);
          if ( v39 )
          {
            if ( !ServantTransformMaster__TryGetEntity(v39, &entity, v43, (int32_t)Master_object, 0) )
              return;
            Master_object = (ServantTransformMaster_o *)entity;
            if ( entity )
            {
              if ( !ServantTransformEntity__IsUnlockTransformed(entity, -1, 0) )
                return;
              kind = this->fields.kind;
              if ( kind <= 0x15 && ((1 << kind) & 0x20008C) != 0 )
              {
                Master_object = (ServantTransformMaster_o *)entity;
                if ( !entity )
                  goto LABEL_46;
                if ( ServantTransformEntity__IsNotSkillChange(entity, 0) )
                  return;
              }
              Master_object = (ServantTransformMaster_o *)this->fields.baseUsrSvtData;
              if ( Master_object )
              {
                Master_object = (ServantTransformMaster_o *)UserServantEntity__GetTransformCount(
                                                              (UserServantEntity_o *)Master_object,
                                                              0,
                                                              0);
                v51 = entity;
                this->fields.displayCount = (int)Master_object;
                if ( v51 )
                {
                  befTitle = v51->fields.befTitle;
                  this->fields.multiDisplayTitleBefore = befTitle;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.multiDisplayTitleBefore,
                    (int32_t)befTitle,
                    v45,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50);
                  if ( entity )
                  {
                    aftTitle = entity->fields.aftTitle;
                    this->fields.multiDisplayTitleAfter = aftTitle;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.multiDisplayTitleAfter,
                      (int32_t)aftTitle,
                      v53,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58);
                    v61 = DataManager_TypeInfo;
                    this->fields.isTransformServant = 1;
                    if ( !*(&v61->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(v61, v60);
                    Master_object = (ServantTransformMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
                    if ( entity )
                    {
                      if ( Master_object )
                      {
                        v62 = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                entity->fields.aftSvtId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                        this->fields.transformedServant = (struct ServantEntity_o *)v62;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)&this->fields.transformedServant,
                          (int32_t)v62,
                          v63,
                          v64,
                          v65,
                          v66,
                          v67,
                          v68);
                        Master_object = (ServantTransformMaster_o *)entity;
                        if ( entity )
                        {
                          CondLabelColor = ServantTransformEntity__GetCondLabelColor(entity, 0);
                          DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
                          v73 = ColorHelper__ParseColorCode_51166816(CondLabelColor, DefaultCondTitleLabelColor, 0);
                          Master_object = (ServantTransformMaster_o *)entity;
                          this->fields.multiDisplayTitleLabelColor = v73;
                          if ( Master_object )
                          {
                            CondSpriteColor = ServantTransformEntity__GetCondSpriteColor(
                                                (ServantTransformEntity_o *)Master_object,
                                                0);
                            goto LABEL_44;
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
LABEL_46:
      sub_2213CDC(Master_object, v4);
    }
    Master_object = (ServantTransformMaster_o *)this->fields.baseUsrSvtData;
    *(_WORD *)&this->fields.isTransformServant = 257;
    if ( !Master_object )
      goto LABEL_46;
    Master_object = (ServantTransformMaster_o *)UserServantEntity__GetServantEntity(
                                                  (UserServantEntity_o *)Master_object,
                                                  -1,
                                                  0);
    if ( !Master_object )
      goto LABEL_46;
    Master_object = (ServantTransformMaster_o *)ServantEntity__GetTransformInfo((ServantEntity_o *)Master_object, 0);
    v6 = this->fields.baseUsrSvtData;
    if ( !v6 )
      goto LABEL_46;
    v7 = Master_object;
    v8 = *(_QWORD *)&v6->fields.transformVal.fields.currentCryptoKey;
    v9 = *(_QWORD *)&v6->fields.transformVal.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    *(_QWORD *)&v71.fields.currentCryptoKey = v8;
    *(_QWORD *)&v71.fields.fakeValue = v9;
    Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                  v71,
                                                  0);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_46;
    v10 = (int)Master_object;
    Master_object = (ServantTransformMaster_o *)UserServantEntity__GetServantEntity(
                                                  this->fields.baseUsrSvtData,
                                                  (unsigned int)Master_object ^ 1,
                                                  0);
    if ( !Master_object )
      goto LABEL_46;
    TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)Master_object, 0);
    if ( v7 )
    {
      v12 = TransformInfo;
      if ( TransformInfo )
      {
        v13 = this->fields.kind;
        if ( v13 > 0x15 || ((1 << v13) & 0x20008C) == 0 || LODWORD(v7->fields._lookup) != 1 )
        {
          Master_object = (ServantTransformMaster_o *)this->fields.baseUsrSvtData;
          if ( Master_object )
          {
            TransformCount = UserServantEntity__GetTransformCount((UserServantEntity_o *)Master_object, 0, 0);
            list = (struct System_String_o *)v7->fields.list;
            this->fields.displayCount = TransformCount;
            this->fields.multiDisplayTitleBefore = list;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.multiDisplayTitleBefore,
              (int32_t)list,
              v16,
              v17,
              v18,
              v19,
              v20,
              v21);
            condLabelTitle = v12->fields.condLabelTitle;
            this->fields.multiDisplayTitleAfter = condLabelTitle;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.multiDisplayTitleAfter,
              (int32_t)condLabelTitle,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28);
            Master_object = (ServantTransformMaster_o *)this->fields.baseUsrSvtData;
            if ( Master_object )
            {
              ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)Master_object, v10 ^ 1u, 0);
              this->fields.transformedServant = ServantEntity;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.transformedServant,
                (int32_t)ServantEntity,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35);
              v36 = *(System_String_o **)&v7->fields.revision;
              v74 = TransformHelper__get_DefaultCondTitleLabelColor(0);
              this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_51166816(v36, v74, 0);
              CondSpriteColor = v7->fields._MasterName_k__BackingField;
LABEL_44:
              DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
              this->fields.multiDisplayTitleSpriteColor = ColorHelper__ParseColorCode_51166816(
                                                            CondSpriteColor,
                                                            DefaultCondTitleSpriteColor,
                                                            0);
              return;
            }
          }
          goto LABEL_46;
        }
      }
    }
  }
}


void CombineResultEffectComponent__ShowCostumeChangeMessage(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  System_String_o *costumeName; // x21
  System_Action_o *v6; // x22

  if ( (byte_5974BF5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__193_0__);
    sub_2213A60(&StringLiteral_3979/*"COSTUME_CHANGED_MSG"*/);
    byte_5974BF5 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        costumeName = this->fields.costumeName,
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__193_0__,
          0),
        !skillResultInfoWindow) )
  {
    sub_2213CDC(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenCostumeChangeMessage(
    skillResultInfoWindow,
    costumeName,
    (System_String_o *)StringLiteral_3979/*"COSTUME_CHANGED_MSG"*/,
    v6,
    0);
}


void CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21

  if ( (byte_5974BE1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__168_0__);
    byte_5974BE1 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__168_0__,
          0),
        !limitUpResultCheck) )
  {
    sub_2213CDC(bgCollider, method);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x21
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x24
  int32_t kind; // w26
  UserServantEntity_o *v15; // x23
  System_Action_o *v16; // x25
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v3 = index;
  if ( (byte_5974BDF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__166_0__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974BDF = 1;
  }
  bgCollider = this->fields.bgCollider;
  transformInfo = 0;
  if ( !bgCollider )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  if ( !bgCollider )
    goto LABEL_20;
  bgCollider = (UnityEngine_Collider_o *)UserServantEntity__get_IsSaveTransformServant(
                                           (UserServantEntity_o *)bgCollider,
                                           0);
  if ( ((unsigned __int8)bgCollider & 1) != 0 )
  {
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_20;
    v7 = *(_QWORD *)&baseUsrSvtData->fields.transformVal.fields.currentCryptoKey;
    v8 = *(_QWORD *)&baseUsrSvtData->fields.transformVal.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    *(_QWORD *)&v18.fields.currentCryptoKey = v7;
    *(_QWORD *)&v18.fields.fakeValue = v8;
    v3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0) ^ 1;
  }
  bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  if ( !bgCollider )
    goto LABEL_20;
  bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                           (UserServantEntity_o *)bgCollider,
                                           &transformInfo,
                                           v3,
                                           0);
  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    goto LABEL_16;
  tdAddEntity_k__BackingField = npInfoAddManager->fields._tdAddEntity_k__BackingField;
  if ( !tdAddEntity_k__BackingField )
    goto LABEL_16;
  titles = tdAddEntity_k__BackingField->fields.titles;
  if ( !titles )
    goto LABEL_16;
  if ( (unsigned int)v3 >= LODWORD(titles->max_length) )
    sub_2213CE4(bgCollider);
  titleText = titles->m_Items[v3];
  if ( !titleText )
  {
LABEL_16:
    if ( !transformInfo )
      goto LABEL_20;
    titleText = transformInfo->fields.titleText;
  }
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  kind = this->fields.kind;
  v15 = this->fields.baseUsrSvtData;
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__166_0__, 0);
  if ( !skillResultInfoWindow )
LABEL_20:
    sub_2213CDC(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    v3,
    titleText,
    kind == 8,
    v15,
    v16,
    0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__ShowSkillChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *bgCollider; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  _DWORD *v8; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v10; // w21
  int32_t v11; // w22
  int32_t v12; // w23
  int32_t v13; // w24
  System_String_o *costumeName; // x25
  System_Action_o *v15; // x26

  if ( (byte_5974BE0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__167_0__);
    byte_5974BE0 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0);
  bgCollider = this->fields.costumeSkillInfoManager;
  if ( !bgCollider )
    goto LABEL_10;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
                 (CombineResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
                 index,
                 v6);
  if ( !this->fields.costumeSkillInfoManager )
    goto LABEL_10;
  v8 = bgCollider;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
                 this->fields.costumeSkillInfoManager,
                 index,
                 v7);
  if ( !v8 )
    goto LABEL_10;
  if ( !bgCollider )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v10 = v8[4];
  v11 = v8[5];
  v12 = *((_DWORD *)bgCollider + 4);
  v13 = *((_DWORD *)bgCollider + 5);
  costumeName = this->fields.costumeName;
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__167_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_2213CDC(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v10,
    v11,
    v12,
    v13,
    costumeName,
    v15,
    0);
}


void CombineResultEffectComponent__ShowSkillChangeMessage(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v8; // w21
  System_Action_o *v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_5974BDE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__165_0__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974BDE = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_9;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__165_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_2213CDC(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v8, v9, 0);
}


void CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x21
  __int128 v6; // q1
  Il2CppObject *Entity; // x21
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t id; // w21
  int32_t lv; // w22
  int32_t v11; // w23
  int32_t v12; // w24
  System_Action_o *v13; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v16; // [xsp+40h] [xbp-50h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_5974BE2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__170_0__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974BE2 = 1;
  }
  bgCollider = (int64_t)this->fields.bgCollider;
  v16 = 0;
  tdInfo = 0;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v14 = v15;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
  if ( !v5 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v5,
             bgCollider,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0);
  if ( !Entity )
    goto LABEL_14;
  bgCollider = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v16, -1, -1, 0, 0);
  if ( !tdInfo
    || !v16
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v11 = v16->fields.id,
        v12 = v16->fields.lv,
        v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__170_0__,
          0),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_2213CDC(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v11, v12, v13, 0);
}


void CombineResultEffectComponent__StartPlayVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *playVoiceList; // x0
  VoiceMaster_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  struct ServantVoiceData_array *v6; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v8; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  VoiceMaster_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  struct ServantVoiceData_array *v13; // x8
  __int64 v14; // x9
  ServantVoiceData_o *v15; // x8
  int FlagRequestNumber; // w0
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *v19; // x20
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_5974BD9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_PlayVoice__);
    sub_2213A60(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974BD9 = 1;
  }
  playVoiceList = (System_Collections_ICollection_o *)this->fields.playVoiceList;
  this->fields.unSkippableFlag = 0;
  IsNullOrEmpty = (VoiceMaster_o *)BasicHelper__IsNullOrEmpty(playVoiceList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    v6 = this->fields.playVoiceList;
    if ( !v6 )
      goto LABEL_24;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= LODWORD(v6->max_length) )
      goto LABEL_25;
    v8 = v6->m_Items[playCnt];
    if ( !v8 )
      goto LABEL_24;
    if ( v8->fields.unSkippable )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
      IsNullOrEmpty = (VoiceMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoiceMaster___);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_24;
      v10 = IsNullOrEmpty;
      v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
      *(_QWORD *)&v22.fields.currentCryptoKey = v11;
      *(_QWORD *)&v22.fields.fakeValue = v12;
      IsNullOrEmpty = (VoiceMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
      v13 = this->fields.playVoiceList;
      if ( !v13 )
        goto LABEL_24;
      v14 = this->fields.playCnt;
      if ( (unsigned int)v14 >= LODWORD(v13->max_length) )
LABEL_25:
        sub_2213CE4(IsNullOrEmpty);
      v15 = v13->m_Items[v14];
      if ( !v15 || !v10 )
        goto LABEL_24;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v10, (int32_t)IsNullOrEmpty, v15->fields.id, 1, 0);
      this->fields.firstPlayedVoiceFlag = FlagRequestNumber;
      if ( FlagRequestNumber >= 1 )
        this->fields.unSkippableFlag = 1;
    }
    IsNullOrEmpty = (VoiceMaster_o *)this->fields.svtResultInfoWindow;
    if ( !IsNullOrEmpty )
      goto LABEL_24;
    SvtCombineResultWindowComponent__SetWaitFlag(
      (SvtCombineResultWindowComponent_o *)IsNullOrEmpty,
      this->fields.unSkippableFlag,
      1,
      0);
    v17 = this->fields.playVoiceList;
    if ( !v17 )
      goto LABEL_24;
    v18 = this->fields.playCnt;
    if ( (unsigned int)v18 < LODWORD(v17->max_length) )
    {
      IsNullOrEmpty = (VoiceMaster_o *)v17->m_Items[v18];
      if ( IsNullOrEmpty )
      {
        v19 = ServantVoiceData__get_BeforePerformance((ServantVoiceData_o *)IsNullOrEmpty, 0);
        v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_CombineResultEffectComponent_PlayVoice__, 0);
        CombineResultEffectComponent__PlayPerformance(this, v19, v20, v21);
        return;
      }
LABEL_24:
      sub_2213CDC(IsNullOrEmpty, v5);
    }
    goto LABEL_25;
  }
}


void CombineResultEffectComponent___CheckReturnCombineItem_b__180_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct System_Int64_array **v14; // x8
  struct System_Int64_array *v15; // x1

  if ( (byte_5974C06 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_long___);
    byte_5974C06 = 1;
  }
  v10 = Method_System_Array_Empty_long___;
  this->fields.returnQpNum = 0;
  v11 = v10[7];
  if ( !v11 )
  {
    sub_224B964(v10);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v8);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  v14 = *(struct System_Int64_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.returnSvtIds = *v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.returnSvtIds, (int32_t)v15, v2, v3, v4, v5, v6, v7);
}


void CombineResultEffectComponent___CloseLimitCountSealDialog_b__188_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5974C07 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__188_1__);
    byte_5974C07 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__188_1__,
    0);
  if ( !limitUpResultCheck )
    sub_2213CDC(v5, v6);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0);
}


void CombineResultEffectComponent___EndLoad_b__158_0(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5974C05 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_5644/*"END_LOAD"*/);
    byte_5974C05 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.fsm) == 0) )
    sub_2213CDC(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5644/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___FadeoutProcess_b__182_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    1,
    callbackFunc->fields.method);
}


void CombineResultEffectComponent___InitCombineEffect_b__124_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_5974C03 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5644/*"END_LOAD"*/);
    byte_5974C03 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5644/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___SetAppendSkillCombineInfo_b__120_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21

  if ( (byte_5974C01 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_12849/*"START_LVEXCEED_EFFECT"*/);
    sub_2213A60(&StringLiteral_17983/*"bit_result_extraskill"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    byte_5974C01 = 1;
  }
  if ( data )
  {
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                data,
                                (System_String_o *)StringLiteral_17983/*"bit_result_extraskill"*/,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__58532980,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v10 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v10 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v9, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_2213CDC(transform, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12849/*"START_LVEXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetCombineLimit_b__123_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x0
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x0
  __int64 v16; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *v19; // x21

  if ( (byte_5974C02 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    sub_2213A60(&StringLiteral_12836/*"START_COMBINE_LIMIT"*/);
    sub_2213A60(&StringLiteral_17977/*"bit_result_"*/);
    byte_5974C02 = 1;
  }
  if ( data )
  {
    v5 = sub_2213B20(string___TypeInfo, 1);
    v6 = System_Int32__ToString((int)this + 336, 0);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                              (System_String_o *)StringLiteral_17977/*"bit_result_"*/,
                                              v6,
                                              0);
    if ( !v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_2213CE4(transform);
    *(_QWORD *)(v5 + 32) = transform;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)transform, v9, v10, v11, v12, v13, v14);
    v15 = System_String__Concat_75697120((System_String_array *)v5, 0);
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                data,
                                v15,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__58532980,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v18 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v19 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v19 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v18, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_19:
      sub_2213CDC(transform, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12836/*"START_COMBINE_LIMIT"*/, 0);
  }
}


void CombineResultEffectComponent___SetCostumeCombineInfo_b__111_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_5974BFE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12841/*"START_COSTUME_EFFECT"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    sub_2213A60(&StringLiteral_18001/*"bit_result_skinchange"*/);
    byte_5974BFE = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_18001/*"bit_result_skinchange"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12841/*"START_COSTUME_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__116_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21

  if ( (byte_5974C00 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_17986/*"bit_result_friendship_exceed"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    sub_2213A60(&StringLiteral_12845/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_5974C00 = 1;
  }
  if ( data )
  {
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                data,
                                (System_String_o *)StringLiteral_17986/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__58532980,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v10 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v10 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v9, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_2213CDC(transform, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12845/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetLimitUpCombineInfo_b__108_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_5974BFD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17979/*"bit_result_advent"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    sub_2213A60(&StringLiteral_12848/*"START_LIMITUP_EFFECT"*/);
    byte_5974BFD = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17979/*"bit_result_advent"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12848/*"START_LIMITUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__114_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21

  if ( (byte_5974BFF & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_12849/*"START_LVEXCEED_EFFECT"*/);
    sub_2213A60(&StringLiteral_17991/*"bit_result_limitbreak"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    byte_5974BFF = 1;
  }
  if ( data )
  {
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                data,
                                (System_String_o *)StringLiteral_17991/*"bit_result_limitbreak"*/,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__58532980,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v10 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v10 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v9, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_2213CDC(transform, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12849/*"START_LVEXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__105_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_5974BFA & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_12866/*"START_SVTCOMBINE_EFFECT"*/);
    sub_2213A60(&StringLiteral_17996/*"bit_result_servant"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    byte_5974BFA = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17996/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)Effect, 0, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12866/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__106_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_5974BFB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12866/*"START_SVTCOMBINE_EFFECT"*/);
    sub_2213A60(&StringLiteral_17996/*"bit_result_servant"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    byte_5974BFB = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17996/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12866/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtEqCombineInfo_b__107_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_5974BFC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12866/*"START_SVTCOMBINE_EFFECT"*/);
    sub_2213A60(&StringLiteral_17996/*"bit_result_servant"*/);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    byte_5974BFC = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17996/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12866/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___ShowCostumeChangeMessage_b__193_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowLimitUpChangeInfo_b__168_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowNpChangeInfo_b__166_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeInfo_b__167_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeMessage_b__165_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__170_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___setSkillResultInfo_b__157_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineResultEffectComponent__EndDisp(this, method);
  CombineResultEffectComponent__CheckReturnCombineItem(this, v3);
}


void CombineResultEffectComponent___setSkillResultInfo_b__157_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effect; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v15; // x22
  __int64 v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UserServantEntity_o *v23; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  CommonUI_o *v37; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v40; // x25
  const MethodInfo *v41; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *v42; // x8

  if ( (byte_5974C04 & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass157_2__setSkillResultInfo_b__7__);
    sub_2213A60(&CombineResultEffectComponent___c__DisplayClass157_2_TypeInfo);
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_5974C04 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__DestroyImmediate_83460132(effect, 0);
  this->fields.effect = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effect, 0, v4, v5, v6, v7, v8, v9);
  CombineResultEffectComponent__Close(this, v10);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       this->fields.targetSvtId,
                       0);
  if ( EntityDefinitely )
  {
    v15 = EntityDefinitely;
    v16 = sub_2213CCC(CombineResultEffectComponent___c__DisplayClass157_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 24) = this;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 24), (int32_t)this, v17, v18, v19, v20, v21, v22);
      v23 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_50174004(v23, v15, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v16 + 16) = callbackFunc;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 16), (int32_t)callbackFunc, v25, v26, v27, v28, v29, v30);
      this->fields.callbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v31, v32, v33, v34, v35, v36);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v23 )
      {
        v37 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v23->fields.treasureDeviceLv1;
        v40 = (CombineResultEffectComponent_ClickDelegate_o *)sub_2213CCC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v40,
          (Il2CppObject *)v16,
          Method_CombineResultEffectComponent___c__DisplayClass157_2__setSkillResultInfo_b__7__,
          v41);
        if ( v37 )
        {
          CommonUI__OpenNobleCombineResult(
            v37,
            18,
            v23,
            targetId,
            treasureDeviceLv1,
            v40,
            this->fields.targetIdOld,
            v23->fields.treasureDeviceLv1,
            0,
            0,
            1,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_2213CDC(Instance, v12);
  }
  v42 = this->fields.callbackFunc;
  if ( v42 )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v42->fields.invoke_impl)(
      v42->fields.method_code,
      1,
      v42->fields.method);
}


void CombineResultEffectComponent___setSkillResultInfo_b__157_2(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    1,
    callbackFunc->fields.method);
}


bool CombineResultEffectComponent__checkSecretTreasureDeviceData(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ServantFlagEntity_o *v7; // x8
  int32_t flagId; // w9
  struct System_Int32_array *args; // x8
  bool result; // w0
  int32_t v11; // w8
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974BB4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974BB4 = 1;
  }
  svtFlagEntity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_49712440(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0) )
  {
LABEL_13:
    v11 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_15:
    sub_2213CDC(Instance, v6);
  }
  Instance = (Il2CppObject *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_13;
  v7 = svtFlagEntity;
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  if ( !v7 )
    goto LABEL_15;
  flagId = v7->fields.flagId;
  args = v7->fields.args;
  this->fields.targetFlagId = flagId;
  if ( !args )
    goto LABEL_15;
  if ( (args->max_length & 0xFFFFFFFE) == 0 )
    sub_2213CE4(Instance);
  result = 1;
  this->fields.targetId = args->m_Items[1];
  v11 = args->m_Items[0];
LABEL_14:
  this->fields.targetIdOld = v11;
  return result;
}


void CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  int32_t kind; // w8
  const MethodInfo *v5; // x2
  int32_t v6; // w20
  int32_t v7; // w0
  const MethodInfo *v8; // x1
  CombineResultEffectComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  struct UserServantEntity_o *v14; // x8
  __int64 v15; // x20
  __int64 v16; // x21
  struct UserServantEntity_o *v17; // x8
  struct UserServantEntity_o *v18; // x8
  __int64 v19; // x20
  __int64 v20; // x21
  int32_t v21; // w22
  int32_t v22; // w20
  ServantEntity_TransformInfo_o *v23; // x0
  System_String_o *v24; // x21
  System_String_o *v25; // x23
  int32_t displayCount; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v28; // x20
  __int64 v29; // x21
  int32_t v30; // w20
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  System_String_o *klass; // x21
  System_String_o *condLabelColor; // x22
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  int32_t v37; // w21
  System_Int32_array *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Int32_array *skillIds; // x9
  struct System_String_array *titles; // x8
  int v47; // w22
  struct System_String_o *v48; // x1
  System_String_o *v49; // x0
  System_String_o *CondSpriteColor; // x0
  il2cpp_array_size_t max_length; // x8
  __int64 v52; // x9
  ServantSkillAddEntity_o *v53; // x8
  __int64 v54; // x10
  unsigned __int64 v55; // x11
  __int64 v56; // x9
  struct System_Int32_array *v57; // x12
  unsigned int v58; // w14
  int32_t v59; // w12
  int32_t targetId; // w1
  int32_t v61; // w2
  long double v62; // q0
  UserServantEntity_o *v63; // x21
  int32_t v64; // w23
  struct ServantEntity_o *v65; // x8
  __int64 v66; // x21
  __int64 v67; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x23
  int32_t v69; // w24
  int32_t targetLv; // w25
  System_Action_c *v71; // x0
  System_Action_o *v72; // x26
  int32_t overrideTransformVal; // w8
  struct ServantEntity_o *transformedServant; // x9
  __int64 v75; // x25
  __int64 v76; // x26
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x21
  UserServantEntity_o *v78; // x22
  int32_t commandCardIndex; // w23
  int32_t commandCardExceedCount; // w24
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  UnityEngine_Color_o v87; // 0:kr00_16.16
  UnityEngine_Color_o v88; // 0:kr50_16.16
  UnityEngine_Color_o v89; // 0:kr90_16.16
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974BE9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_EndDisp__);
    sub_2213A60(&Method_CombineResultEffectComponent_clickNext__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5974BE9 = 1;
  }
  bgCollider = this->fields.bgCollider;
  svtSkillAddEnt = 0;
  if ( !bgCollider )
    goto LABEL_128;
  bgCollider = (UnityEngine_Collider_o *)UnityEngine_Collider__get_enabled(bgCollider, 0);
  if ( ((unsigned __int8)bgCollider & 1) != 0 )
  {
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, method);
      if ( ((unsigned __int8)bgCollider & 1) != 0 )
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v5);
        bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
        v6 = this->fields.skillShowIndex + 1;
        this->fields.skillShowIndex = v6;
        if ( bgCollider )
        {
          v7 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
                 (CombineResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
                 method);
          goto LABEL_19;
        }
        goto LABEL_128;
      }
      kind = this->fields.kind;
      if ( kind == 15 )
      {
        bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(
                                                 this,
                                                 method);
        if ( ((unsigned __int8)bgCollider & 1) == 0 && this->fields.treasureDeviceEnabled )
        {
          CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, method);
          v9 = this;
          this->fields.treasureDeviceEnabled = 0;
LABEL_30:
          CombineResultEffectComponent__EndDisp(v9, v8);
          return;
        }
        kind = this->fields.kind;
      }
    }
    if ( (unsigned int)kind <= 0x1B && ((1 << kind) & 0x8000110) != 0 )
    {
      bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowNextNpInfo(this, method);
      if ( ((unsigned __int8)bgCollider & 1) != 0 )
      {
        CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v10);
        bgCollider = (UnityEngine_Collider_o *)this->fields.npInfoAddManager;
        v6 = this->fields.tdShowIndex + 1;
        this->fields.tdShowIndex = v6;
        if ( bgCollider )
        {
          v7 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
                 (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
                 0);
LABEL_19:
          if ( v6 < v7 )
            return;
          goto LABEL_29;
        }
        goto LABEL_128;
      }
      kind = this->fields.kind;
    }
    if ( (unsigned int)kind <= 0x1A && ((1 << kind) & 0x4080402) != 0 )
    {
      bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowLimitUpInfo(this, method);
      if ( ((unsigned __int8)bgCollider & 1) != 0 )
      {
        v11 = Method_CombineResultEffectComponent_clickNext__;
        if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_2213A78(Method_CombineResultEffectComponent_clickNext__);
        v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
        CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v13);
        bgCollider = (UnityEngine_Collider_o *)this->fields.limitUpResultCheck;
        if ( !bgCollider )
          goto LABEL_128;
        if ( LimitUpResultCheckComponent__CheckFinishedResultLimitUp((LimitUpResultCheckComponent_o *)bgCollider, 0) )
        {
LABEL_29:
          v9 = this;
          goto LABEL_30;
        }
        return;
      }
      kind = this->fields.kind;
    }
    if ( kind > 6 )
    {
      if ( kind == 20 )
      {
        displayCount = this->fields.displayCount;
        if ( displayCount >= 1 )
        {
          if ( this->fields.isSaveTransformServant )
          {
            baseUsrSvtData = this->fields.baseUsrSvtData;
            if ( !baseUsrSvtData )
              goto LABEL_128;
            v28 = *(_QWORD *)&baseUsrSvtData->fields.transformVal.fields.currentCryptoKey;
            v29 = *(_QWORD *)&baseUsrSvtData->fields.transformVal.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
            *(_QWORD *)&v84.fields.currentCryptoKey = v28;
            *(_QWORD *)&v84.fields.fakeValue = v29;
            bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v84,
                                                     0);
            if ( !this->fields.baseUsrSvtData )
              goto LABEL_128;
            v30 = (unsigned int)bgCollider ^ 1;
            bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetServantEntity(
                                                     this->fields.baseUsrSvtData,
                                                     (unsigned int)bgCollider ^ 1,
                                                     0);
            if ( !bgCollider )
              goto LABEL_128;
            TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)bgCollider, 0);
            klass = (System_String_o *)TransformInfo;
            if ( TransformInfo )
              condLabelColor = TransformInfo->fields.condLabelColor;
            else
              condLabelColor = 0;
            DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
            this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_51166816(
                                                         condLabelColor,
                                                         DefaultCondTitleLabelColor,
                                                         0);
            if ( klass )
              klass = (System_String_o *)klass[1].klass;
            DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
            v89 = ColorHelper__ParseColorCode_51166816(klass, DefaultCondTitleSpriteColor, 0);
            displayCount = this->fields.displayCount;
            this->fields.multiDisplayTitleSpriteColor = v89;
          }
          else
          {
            v30 = -1;
          }
          transformedServant = this->fields.transformedServant;
          this->fields.displayCount = displayCount - 1;
          if ( transformedServant )
          {
            v75 = *(_QWORD *)&transformedServant->fields.id.fields.currentCryptoKey;
            v76 = *(_QWORD *)&transformedServant->fields.id.fields.fakeValue;
            commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
            v78 = this->fields.baseUsrSvtData;
            commandCardIndex = this->fields.commandCardIndex;
            commandCardExceedCount = this->fields.commandCardExceedCount;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
            *(_QWORD *)&v86.fields.currentCryptoKey = v75;
            *(_QWORD *)&v86.fields.fakeValue = v76;
            bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v86,
                                                     0);
            if ( commandCardExceedResultWindow )
            {
              CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
                commandCardExceedResultWindow,
                v78,
                commandCardIndex,
                commandCardExceedCount,
                (int32_t)bgCollider,
                this->fields.multiDisplayTitleAfter,
                this->fields.multiDisplayTitleLabelColor,
                this->fields.multiDisplayTitleSpriteColor,
                v30,
                0);
              return;
            }
          }
LABEL_128:
          sub_2213CDC(bgCollider, method);
        }
        goto LABEL_65;
      }
      if ( kind != 7 )
        goto LABEL_65;
    }
    else if ( (unsigned int)(kind - 2) >= 2 )
    {
      if ( !kind )
      {
        bgCollider = (UnityEngine_Collider_o *)this->fields.svtResultInfoWindow;
        if ( !bgCollider )
          goto LABEL_128;
        if ( SvtCombineResultWindowComponent__IsOpenStatusLimitTutorial(
               (SvtCombineResultWindowComponent_o *)bgCollider,
               0)
          || this->fields.returnQpNum >= 1
          && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.returnSvtIds, 0) )
        {
          bgCollider = (UnityEngine_Collider_o *)this->fields.svtResultInfoWindow;
          if ( bgCollider )
          {
            SvtCombineResultWindowComponent__SetWaitFlag(
              (SvtCombineResultWindowComponent_o *)bgCollider,
              this->fields.unSkippableFlag,
              0,
              0);
            bgCollider = (UnityEngine_Collider_o *)this->fields.svtResultInfoWindow;
            if ( bgCollider )
            {
              SvtCombineResultWindowComponent__EndOpen((SvtCombineResultWindowComponent_o *)bgCollider, 0);
              return;
            }
          }
          goto LABEL_128;
        }
        CombineResultEffectComponent__stopVoice(this, method);
      }
      goto LABEL_65;
    }
    if ( this->fields.displayCount >= 1 )
    {
      v14 = this->fields.baseUsrSvtData;
      if ( !v14 )
        goto LABEL_128;
      v15 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v82.fields.currentCryptoKey = v15;
      *(_QWORD *)&v82.fields.fakeValue = v16;
      bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v82, 0);
      v17 = this->fields.baseUsrSvtData;
      if ( this->fields.isTransformServant )
      {
        if ( !v17 )
          goto LABEL_128;
        bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0);
        v18 = this->fields.baseUsrSvtData;
        if ( this->fields.isSaveTransformServant )
        {
          if ( !v18 )
            goto LABEL_128;
          v19 = *(_QWORD *)&v18->fields.transformVal.fields.currentCryptoKey;
          v20 = *(_QWORD *)&v18->fields.transformVal.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v83.fields.currentCryptoKey = v19;
          *(_QWORD *)&v83.fields.fakeValue = v20;
          bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   v83,
                                                   0);
          if ( !this->fields.baseUsrSvtData )
            goto LABEL_128;
          v21 = (unsigned int)bgCollider ^ 1;
          v22 = (int)bgCollider;
          bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetServantEntity(
                                                   this->fields.baseUsrSvtData,
                                                   (unsigned int)bgCollider ^ 1,
                                                   0);
          if ( !bgCollider )
            goto LABEL_128;
          v23 = ServantEntity__GetTransformInfo((ServantEntity_o *)bgCollider, 0);
          v24 = (System_String_o *)v23;
          if ( v23 )
            v25 = v23->fields.condLabelColor;
          else
            v25 = 0;
          v92 = TransformHelper__get_DefaultCondTitleLabelColor(0);
          this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_51166816(v25, v92, 0);
          if ( v24 )
            v24 = (System_String_o *)v24[1].klass;
          v93 = TransformHelper__get_DefaultCondTitleSpriteColor(0);
          v88 = ColorHelper__ParseColorCode_51166816(v24, v93, 0);
          bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
          this->fields.multiDisplayTitleSpriteColor = v88;
          if ( !bgCollider )
            goto LABEL_128;
          targetId = this->fields.targetId;
          v61 = v22;
        }
        else
        {
          if ( !v18 )
            goto LABEL_128;
          targetId = this->fields.targetId;
          v21 = (_DWORD)bgCollider - this->fields.displayCount;
          bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
          v61 = v21 - 1;
        }
        this->fields.targetId = UserServantEntity__GetTransformedSameSlotSkillId(
                                  (UserServantEntity_o *)bgCollider,
                                  targetId,
                                  v61,
                                  v21,
                                  0);
        bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
        if ( !bgCollider )
          goto LABEL_128;
        bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                                 (UserServantEntity_o *)bgCollider,
                                                 v21,
                                                 -1,
                                                 -1,
                                                 1,
                                                 -1,
                                                 1,
                                                 0);
        v38 = (System_Int32_array *)bgCollider;
        if ( this->fields.kind == 7 )
        {
          v63 = this->fields.baseUsrSvtData;
          v64 = this->fields.targetId;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v62 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
          bgCollider = (UnityEngine_Collider_o *)sub_2909608(0, v62);
          if ( !v63 )
            goto LABEL_128;
          bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedOldSkillId(
                                                   v63,
                                                   v64,
                                                   (int32_t)bgCollider,
                                                   v21,
                                                   0);
          this->fields.targetIdOld = (int)bgCollider;
        }
        v65 = this->fields.transformedServant;
        if ( !v65 )
          goto LABEL_128;
        v66 = *(_QWORD *)&v65->fields.id.fields.currentCryptoKey;
        v67 = *(_QWORD *)&v65->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v85.fields.currentCryptoKey = v66;
        *(_QWORD *)&v85.fields.fakeValue = v67;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v85, 0);
        goto LABEL_112;
      }
      if ( !v17 )
        goto LABEL_128;
      v37 = (int)bgCollider;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               this->fields.baseUsrSvtData,
                                               0,
                                               -1,
                                               -1,
                                               1,
                                               -1,
                                               1,
                                               0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_128;
      v38 = (System_Int32_array *)bgCollider;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                               this->fields.baseUsrSvtData,
                                               &svtSkillAddEnt,
                                               this->fields.targetId,
                                               0);
      if ( ((unsigned __int8)bgCollider & 1) != 0 )
      {
        if ( !svtSkillAddEnt )
          goto LABEL_128;
        bgCollider = (UnityEngine_Collider_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)svtSkillAddEnt->fields.skillIds,
                                                 0);
        if ( ((unsigned __int8)bgCollider & 1) == 0 )
        {
          if ( !svtSkillAddEnt )
            goto LABEL_128;
          skillIds = svtSkillAddEnt->fields.skillIds;
          if ( !skillIds )
            goto LABEL_128;
          titles = svtSkillAddEnt->fields.titles;
          if ( !titles )
            goto LABEL_128;
          v47 = LODWORD(skillIds->max_length) - this->fields.displayCount;
          if ( (unsigned int)v47 >= LODWORD(titles->max_length) )
LABEL_129:
            sub_2213CE4(bgCollider);
          v48 = titles->m_Items[v47];
          this->fields.multiDisplayTitleAfter = v48;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.multiDisplayTitleAfter,
            (int32_t)v48,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
          bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
          if ( !svtSkillAddEnt )
            goto LABEL_128;
          v49 = ServantSkillAddEntity__GetCondLabelColor(svtSkillAddEnt, 0);
          v90.fields.r = 0.0;
          v90.fields.g = 0.0;
          v90.fields.b = 0.0;
          v90.fields.a = 0.0;
          v87 = ColorHelper__ParseColorCode_51166816(v49, v90, 0);
          bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
          this->fields.multiDisplayTitleLabelColor = v87;
          if ( !bgCollider )
            goto LABEL_128;
          CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor((ServantSkillAddEntity_o *)bgCollider, 0);
          v91.fields.r = 0.0;
          v91.fields.g = 0.0;
          v91.fields.b = 0.0;
          v91.fields.a = 0.0;
          this->fields.multiDisplayTitleSpriteColor = ColorHelper__ParseColorCode_51166816(CondSpriteColor, v91, 0);
          if ( !v38 )
            goto LABEL_128;
          max_length = v38->max_length;
          if ( (int)max_length >= 1 )
          {
            v52 = (unsigned int)max_length & ~((int)max_length >> 31);
            v53 = svtSkillAddEnt;
            v54 = 4LL * (unsigned int)v38->max_length;
            v55 = 0;
            v56 = 4 * v52;
            while ( v54 != v55 )
            {
              if ( !v53 )
                goto LABEL_128;
              v57 = v53->fields.skillIds;
              if ( !v57 )
                goto LABEL_128;
              v58 = v57->max_length;
              if ( !v58 )
                goto LABEL_129;
              if ( v38->m_Items[v55 / 4] == v57->m_Items[0] )
              {
                if ( v47 >= v58 )
                  goto LABEL_129;
                v59 = v57->m_Items[v47];
                this->fields.targetId = v59;
                v38->m_Items[v55 / 4] = v59;
              }
              v55 += 4LL;
              if ( v56 == v55 )
                goto LABEL_91;
            }
            goto LABEL_129;
          }
        }
      }
LABEL_91:
      v21 = 0;
LABEL_112:
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      v69 = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v71 = System_Action_TypeInfo;
      --this->fields.displayCount;
      v72 = (System_Action_o *)sub_2213CCC(v71);
      System_Action___ctor(v72, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !skillResultInfoWindow )
        goto LABEL_128;
      if ( this->fields.isSaveTransformServant )
        overrideTransformVal = v21;
      else
        overrideTransformVal = -1;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        skillResultInfoWindow,
        v69,
        targetLv,
        v72,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        v37,
        v38,
        this->fields.baseUsrSvtData,
        this->fields.kind == 3,
        1,
        0,
        this->fields.multiDisplayTitleAfter,
        0,
        this->fields.multiDisplayTitleLabelColor,
        this->fields.multiDisplayTitleSpriteColor,
        overrideTransformVal,
        0);
      return;
    }
LABEL_65:
    v34 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_CombineResultEffectComponent_clickNext__);
    OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0, 0);
    if ( this->fields.kind != 24 )
      CombineResultEffectComponent__ReleaseVoiceData(this, v35);
    if ( !CombineResultEffectComponent__OpenNotification(this, v35) )
      CombineResultEffectComponent__FadeoutProcess(this, v36);
  }
}


void CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UserServantEntity_o *resUsrSvtData; // x0
  __int64 costumeOverrideTransformVal; // x1
  int32_t ServantId; // w0
  int32_t SvtVoiceId; // w20
  struct UserServantEntity_o *v19; // x8
  ServantVoiceMaster_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  struct ServantVoiceEntity_o *Entity; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_5974BC0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974BC0 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.asstName, 0, v2, v3, v4, v5, v6, v7);
  this->fields.playVoiceList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList, 0, v9, v10, v11, v12, v13, v14);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( this->fields.kind == 15 )
    costumeOverrideTransformVal = (unsigned int)this->fields.costumeOverrideTransformVal;
  else
    costumeOverrideTransformVal = 0xFFFFFFFFLL;
  if ( !resUsrSvtData )
    goto LABEL_15;
  ServantId = UserServantEntity__GetServantId(resUsrSvtData, costumeOverrideTransformVal, 0);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(ServantId, 0);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_15;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v19 = this->fields.resUsrSvtData;
  if ( !v19 )
    goto LABEL_15;
  v20 = (ServantVoiceMaster_o *)resUsrSvtData;
  v21 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, costumeOverrideTransformVal);
  *(_QWORD *)&v38.fields.currentCryptoKey = v21;
  *(_QWORD *)&v38.fields.fakeValue = v22;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38, 0);
  if ( !v20 )
LABEL_15:
    sub_2213CDC(resUsrSvtData, costumeOverrideTransformVal);
  Entity = ServantVoiceMaster__getEntity(v20, 2, SvtVoiceId, (int32_t)resUsrSvtData, 0);
  this->fields.svtVoiceEntity = Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtVoiceEntity,
    (int32_t)Entity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0);
    this->fields.asstName = VoiceAssetName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
      (int32_t)VoiceAssetName,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
}


ServantVoiceData_array *CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_5974BD4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_5974BD4 = 1;
  }
  if ( this->fields.isChangeCardImg
    && (svtVoiceEntity = this->fields.svtVoiceEntity) != 0
    && (CostumeCombineVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getCostumeCombineVoiceList(
                                                                                 svtVoiceEntity,
                                                                                 this->fields.costumeId,
                                                                                 this->fields.genderType,
                                                                                 0)) != 0
    && CostumeCombineVoiceList->fields._size >= 1 )
  {
    return (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                       CostumeCombineVoiceList,
                                       0,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceData_array *CombineResultEffectComponent__getLimitUpSvtVoiceList(
        CombineResultEffectComponent_o *this,
        bool isPlayVoice,
        const MethodInfo *method)
{
  UserServantEntity_o *resUsrSvtData; // x0
  ServantVoiceEntity_o *v6; // x21
  System_Collections_Generic_List_object__o *LimitCntUpVoiceList; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct UserServantEntity_o *v9; // x8
  __int64 v10; // x20
  __int64 v11; // x22
  int32_t v12; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_5974BD3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974BD3 = 1;
  }
  if ( !this->fields.isChangeCardImg )
  {
    svtVoiceEntity = this->fields.svtVoiceEntity;
    if ( !svtVoiceEntity )
      return 0;
    LimitCntUpVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getLimitCntUpVoiceList(
                                                                         svtVoiceEntity,
                                                                         this->fields.genderType,
                                                                         this->fields.limitUpPlayVoiceLabel,
                                                                         0);
    if ( !LimitCntUpVoiceList || LimitCntUpVoiceList->fields._size < 1 )
      return 0;
    return (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                       LimitCntUpVoiceList,
                                       0,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_21;
  resUsrSvtData = (UserServantEntity_o *)UserServantEntity__isLimitCountMax(resUsrSvtData, 0);
  v6 = this->fields.svtVoiceEntity;
  if ( ((unsigned __int8)resUsrSvtData & 1) == 0 )
  {
    if ( !v6 )
      return 0;
    v9 = this->fields.resUsrSvtData;
    if ( v9 )
    {
      v10 = *(_QWORD *)&v9->fields.limitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&v9->fields.limitCount.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isPlayVoice);
      *(_QWORD *)&v14.fields.currentCryptoKey = v10;
      *(_QWORD *)&v14.fields.fakeValue = v11;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
      LimitCntUpVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                                                           v6,
                                                                           v12,
                                                                           this->fields.limitUpPlayVoiceLabel,
                                                                           this->fields.genderType,
                                                                           0);
      if ( !LimitCntUpVoiceList )
        return 0;
      goto LABEL_18;
    }
LABEL_21:
    sub_2213CDC(resUsrSvtData, isPlayVoice);
  }
  if ( !v6 )
    return 0;
  LimitCntUpVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getCntStopVoiceList(
                                                                       this->fields.svtVoiceEntity,
                                                                       this->fields.displayType,
                                                                       isPlayVoice,
                                                                       this->fields.genderType,
                                                                       this->fields.limitUpPlayVoiceLabel,
                                                                       0);
  if ( !LimitCntUpVoiceList )
    return 0;
LABEL_18:
  if ( LimitCntUpVoiceList->fields._size > 0 )
    return (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                       LimitCntUpVoiceList,
                                       0,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__getSvtVoiceData(
        CombineResultEffectComponent_o *this,
        int32_t voiceId,
        int32_t costumeId,
        bool isLimitUp,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int v9; // w21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 costumeOverrideTransformVal; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t ServantId; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v22; // x8
  ServantLimitImageMaster_o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  int32_t ServantLimitCountSealAfter; // w21
  struct ServantVoiceEntity_o *Entity; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v9 = costumeId;
  if ( (byte_5974BBF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974BBF = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    0,
    *(System_String_o **)&costumeId,
    (System_String_o *)isLimitUp,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.playVoiceList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList, 0, v12, v13, v14, v15, v16, v17);
  if ( voiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( this->fields.kind == 15 )
      costumeOverrideTransformVal = (unsigned int)this->fields.costumeOverrideTransformVal;
    else
      costumeOverrideTransformVal = 0xFFFFFFFFLL;
    if ( !resUsrSvtData )
      goto LABEL_28;
    ServantId = UserServantEntity__GetServantId(resUsrSvtData, costumeOverrideTransformVal, 0);
    voiceId = ServantVoiceMaster__getSvtVoiceId(ServantId, 0);
  }
  if ( v9 <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( isLimitUp )
    {
      if ( !resUsrSvtData )
        goto LABEL_28;
      CombineVoiceLimitCount = BasicHelper__DecryptValue_51160428(resUsrSvtData->fields.limitCount, 0);
    }
    else
    {
      if ( !resUsrSvtData )
        goto LABEL_28;
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(resUsrSvtData, 0, 0);
    }
    v9 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, costumeOverrideTransformVal);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v22 = this->fields.resUsrSvtData;
  if ( !v22 )
    goto LABEL_28;
  v23 = (ServantLimitImageMaster_o *)resUsrSvtData;
  v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, costumeOverrideTransformVal);
  *(_QWORD *)&v42.fields.currentCryptoKey = v24;
  *(_QWORD *)&v42.fields.fakeValue = v25;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v42, 0);
  if ( !v23
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v23,
                                       (int32_t)resUsrSvtData,
                                       v9,
                                       0),
        (resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)resUsrSvtData,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0 )
  {
LABEL_28:
    sub_2213CDC(resUsrSvtData, costumeOverrideTransformVal);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)resUsrSvtData,
             2,
             voiceId,
             ServantLimitCountSealAfter,
             0);
  this->fields.svtVoiceEntity = Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtVoiceEntity,
    (int32_t)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0);
    this->fields.asstName = VoiceAssetName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
      (int32_t)VoiceAssetName,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
}


void CombineResultEffectComponent__loadVoiceData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *asstName; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  struct UserServantEntity_o *v12; // x9
  __int64 v13; // x22
  __int64 v14; // x23
  int64_t monitor; // x21
  char v16; // w22
  struct UserServantEntity_o *v17; // x8
  __int64 v18; // x20
  __int64 v19; // x21
  __int64 v20; // x1
  int32_t v21; // w20
  __int64 v22; // x1
  System_String_o *v23; // x20
  struct UserServantEntity_o *v24; // x8
  __int64 v25; // x20
  __int64 v26; // x21
  int32_t v27; // w0
  Il2CppObject *Instance; // x0
  System_String_o *v29; // x20
  SoundManager_o *v30; // x21
  System_Action_o *v31; // x22
  UserServantCollectionEntity_o *v32; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_5974BC1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_EndLoad__);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5974BC1 = 1;
  }
  asstName = this->fields.asstName;
  entity = 0;
  v32 = 0;
  if ( !asstName )
  {
    CombineResultEffectComponent__EndLoad(this, method);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_44;
  v7 = Master_object;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v34.fields.currentCryptoKey = v8;
  *(_QWORD *)&v34.fields.fakeValue = v9;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v34,
                                                                  0);
  if ( !v7 )
    goto LABEL_44;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v7,
         &entity,
         (int32_t)Master_object,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_44;
    if ( ServantEntity__IsVoiceEffect((ServantEntity_o *)entity, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
      v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
      }
      v12 = this->fields.baseUsrSvtData;
      if ( !v12 )
        goto LABEL_44;
      v13 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
      monitor = (int64_t)Master_object[2].fields.list[1].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
      *(_QWORD *)&v35.fields.currentCryptoKey = v13;
      *(_QWORD *)&v35.fields.fakeValue = v14;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                      v35,
                                                                      0);
      if ( !v11 )
        goto LABEL_44;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantCollectionMaster__TryGetEntity(
                                                                      (UserServantCollectionMaster_o *)v11,
                                                                      &v32,
                                                                      monitor,
                                                                      (int32_t)Master_object,
                                                                      0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_44;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantCollectionEntity__CheckSvtCommonFlag(
                                                                        v32->fields.svtCommonFlag,
                                                                        8,
                                                                        0);
        v16 = (unsigned __int8)Master_object ^ 1;
      }
      else
      {
        v16 = 1;
      }
      v17 = this->fields.baseUsrSvtData;
      if ( !v17 )
        goto LABEL_44;
      v18 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
      *(_QWORD *)&v36.fields.currentCryptoKey = v18;
      *(_QWORD *)&v36.fields.fakeValue = v19;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v20);
      if ( (v16 & 1) != SoundManager__IsEfVoiceServantCpk(v21, 0) )
      {
        v23 = this->fields.asstName;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v22);
        SoundManager__releaseAudioAssetStorage(v23, 0);
        v24 = this->fields.baseUsrSvtData;
        if ( v24 )
        {
          v25 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
          v26 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
          *(_QWORD *)&v37.fields.currentCryptoKey = v25;
          *(_QWORD *)&v37.fields.fakeValue = v26;
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v37, 0);
          SoundManager__SetUseEfVoiceCpk(v27, v16 & 1, 0);
          goto LABEL_42;
        }
LABEL_44:
        sub_2213CDC(Master_object, v5);
      }
    }
  }
LABEL_42:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v29 = this->fields.asstName;
  v30 = (SoundManager_o *)Instance;
  v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0);
  if ( !v30 )
    goto LABEL_44;
  SoundManager__LoadAudioAssetStorage(v30, v29, v31, 1, 0);
}


void CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v6; // x8
  int32_t v7; // w20
  __int64 v8; // x1
  int32_t v9; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v11; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v2 = this;
  if ( (byte_5974BC5 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_2213A60(&StringLiteral_3182/*"BaseSvtNodeName"*/);
    byte_5974BC5 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v12.fields.currentCryptoKey = v4;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v12, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_2213CDC(this, method);
  v7 = (int)this;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v6[6], 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v8);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v9, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3182/*"BaseSvtNodeName"*/,
    0,
    1,
    v11);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__setBaseSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 fsm; // x0
  System_String_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v8; // x21
  float Value; // s8
  int32_t overrideTransformVal; // w22
  int32_t ServantId; // w23
  struct UserServantEntity_o *baseUsrSvtData; // x8
  ServantLimitImageMaster_o *v13; // x24
  __int64 v14; // x25
  __int64 v15; // x26
  __int64 v16; // x1
  int32_t ServantLimitCountSealAfter; // w24
  CombineResultEffectComponent_o *CardImageLimitCount; // x0
  const MethodInfo *v19; // x3
  int32_t v20; // w23
  CombineResultEffectComponent_o *gameObject; // x0
  UserServantEntity_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x21
  const MethodInfo *v24; // x2
  ServantOverwriteStatus_o *ResolveOverwriteStatus; // x0
  UnityEngine_Component_o *v26; // x19
  UnityEngine_Transform_o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974BCF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_4504/*"CardScale"*/);
    sub_2213A60(&StringLiteral_3181/*"BaseSvtCardNodeName"*/);
    byte_5974BCF = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_28;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_28;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3181/*"BaseSvtCardNodeName"*/,
                   0);
  if ( !fsm )
    goto LABEL_28;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_28;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_28;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_28;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4504/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_28;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  overrideTransformVal = this->fields.kind == 15 ? this->fields.costumeOverrideTransformVal : -1;
  fsm = (__int64)this->fields.baseUsrSvtData;
  if ( !fsm )
    goto LABEL_28;
  ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)fsm, overrideTransformVal, 0);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_28;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_28;
  v13 = (ServantLimitImageMaster_o *)fsm;
  v14 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&changeNameType);
  *(_QWORD *)&v28.fields.currentCryptoKey = v14;
  *(_QWORD *)&v28.fields.fakeValue = v15;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
  if ( !v13 )
    goto LABEL_28;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v13, ServantId, fsm, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16);
  CardImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetCardImageLimitCount(
                                                            ServantId,
                                                            ServantLimitCountSealAfter,
                                                            1,
                                                            0,
                                                            0);
  fsm = CombineResultEffectComponent__GetResolveImageLimitCount(
          CardImageLimitCount,
          (int32_t)CardImageLimitCount,
          this->fields.baseUsrSvtData,
          v19);
  if ( !v8 )
    goto LABEL_28;
  v20 = fsm;
  gameObject = (CombineResultEffectComponent_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v22 = this->fields.baseUsrSvtData;
  v23 = (UnityEngine_GameObject_o *)gameObject;
  ResolveOverwriteStatus = CombineResultEffectComponent__GetResolveOverwriteStatus(gameObject, v22, v24);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_47625456(
                   v23,
                   v22,
                   v20,
                   10,
                   0,
                   changeNameType,
                   ResolveOverwriteStatus,
                   0,
                   0,
                   overrideTransformVal,
                   0);
  if ( !fsm )
    goto LABEL_28;
  v26 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_5969AE0 )
  {
    fsm = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v26, 0)) == 0) )
  {
LABEL_28:
    sub_2213CDC(fsm, *(_QWORD *)&changeNameType);
  }
  v29.fields.x = Value;
  v29.fields.y = Value;
  v29.fields.z = Value;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v29, 0);
}


void CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UserServantEntity_o *resUsrSvtData; // x0
  __int64 v11; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v13; // x8
  int32_t face; // w20
  int32_t costumeOverrideTransformVal; // w21
  int32_t v16; // w22
  int32_t FigureImage; // w2
  const MethodInfo *v18; // x5

  if ( (byte_5974BCD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8796/*"LimitUpResSvtNodeName"*/);
    byte_5974BCD = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  this->fields.playVoiceList = CostumeSvtVoiceList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceList,
    (int32_t)CostumeSvtVoiceList,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  playVoiceList = this->fields.playVoiceList;
  if ( playVoiceList )
  {
    if ( !LODWORD(playVoiceList->max_length) )
      sub_2213CE4(resUsrSvtData);
    v13 = playVoiceList->m_Items[0];
    if ( !v13 )
LABEL_14:
      sub_2213CDC(resUsrSvtData, v11);
    face = v13->fields.face;
  }
  else
  {
    face = 0;
  }
  if ( this->fields.kind == 15 )
    costumeOverrideTransformVal = this->fields.costumeOverrideTransformVal;
  else
    costumeOverrideTransformVal = -1;
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_14;
  resUsrSvtData = (UserServantEntity_o *)UserServantEntity__GetServantId(resUsrSvtData, costumeOverrideTransformVal, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_14;
  v16 = (int)resUsrSvtData;
  FigureImage = UserServantEntity__GetFigureImage(this->fields.resUsrSvtData, 0, costumeOverrideTransformVal, 0);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v16,
    FigureImage,
    face,
    (System_String_o *)StringLiteral_8796/*"LimitUpResSvtNodeName"*/,
    v18);
}


void CombineResultEffectComponent__setEffectEnable(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(effect, 1, 0);
}


void CombineResultEffectComponent__setLimitUpBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  __int64 costumeOverrideTransformVal; // x1
  struct UserServantEntity_o *v5; // x8
  int32_t v6; // w20
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x1
  int32_t v10; // w21
  CombineResultEffectComponent_o *ImageLimitCount; // x0
  const MethodInfo *v12; // x3
  int32_t ResolveImageLimitCount; // w2
  const MethodInfo *v14; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5974BC8 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_8795/*"LimitUpBaseSvtNodeName"*/);
    byte_5974BC8 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( this->fields.kind == 15 )
    costumeOverrideTransformVal = (unsigned int)this->fields.costumeOverrideTransformVal;
  else
    costumeOverrideTransformVal = 0xFFFFFFFFLL;
  if ( !baseUsrSvtData
    || (baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__GetServantId(
                                                  baseUsrSvtData,
                                                  costumeOverrideTransformVal,
                                                  0),
        (v5 = this->fields.baseUsrSvtData) == 0) )
  {
    sub_2213CDC(baseUsrSvtData, costumeOverrideTransformVal);
  }
  v6 = (int)baseUsrSvtData;
  v7 = *(_QWORD *)&v5->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v5->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, costumeOverrideTransformVal);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v9);
  ImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetImageLimitCount(v6, v10, 0);
  ResolveImageLimitCount = CombineResultEffectComponent__GetResolveImageLimitCount(
                             ImageLimitCount,
                             (int32_t)ImageLimitCount,
                             this->fields.baseUsrSvtData,
                             v12);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    0,
    ResolveImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8795/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__setNameRevealSvtFigure(
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

  if ( (byte_5974BCE & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&StringLiteral_8795/*"LimitUpBaseSvtNodeName"*/);
    byte_5974BCE = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->max_length) )
      sub_2213CE4(LimitUpSvtVoiceList);
    v9 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v9 )
      sub_2213CDC(LimitUpSvtVoiceList, v8);
    face = v9->fields.face;
  }
  else
  {
    face = 0;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v8);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCnt, 0);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    svtId,
    ImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8795/*"LimitUpBaseSvtNodeName"*/,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__setNameRevealSvtGraphCard(
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Transform_o *v23; // x20
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974BD1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4504/*"CardScale"*/);
    sub_2213A60(&StringLiteral_3181/*"BaseSvtCardNodeName"*/);
    byte_5974BD1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3181/*"BaseSvtCardNodeName"*/,
                            0);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_18;
  v10 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v10, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_18;
  v12 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4504/*"CardScale"*/,
                            0);
  if ( !fsm )
    goto LABEL_18;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  if ( !v12 )
    goto LABEL_18;
  v14 = Value;
  gameObject = UnityEngine_Component__get_gameObject(v12, 0);
  TexturePrefab = CharaGraphManager__CreateTexturePrefab(gameObject, svtId, limitCnt, 0, 0, 10, 0, changeNameType, 0);
  this->fields.nameRevealCard = TexturePrefab;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nameRevealCard,
    (int32_t)TexturePrefab,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v23 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_5969AE0 )
  {
    fsm = (PlayMakerFSM_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v23
    || (UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard) == 0)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0)) == 0 )
  {
LABEL_18:
    sub_2213CDC(fsm, *(_QWORD *)&svtId);
  }
  v24.fields.x = v14;
  v24.fields.y = v14;
  v24.fields.z = v14;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v24, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__setResultCostumeSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 fsm; // x0
  System_String_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v8; // x21
  float Value; // s8
  int32_t v10; // w22
  UserServantEntity_o *resUsrSvtData; // x21
  UnityEngine_GameObject_o *v12; // x23
  ServantOverwriteStatus_o *OverwriteStatus; // x6
  int32_t overrideTransformVal; // w8
  UnityEngine_Component_o *v15; // x19
  UnityEngine_Transform_o *v16; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v3 = changeNameType;
  if ( (byte_5974BD2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4504/*"CardScale"*/);
    sub_2213A60(&StringLiteral_11881/*"ResultSvtCardNodeName"*/);
    byte_5974BD2 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11881/*"ResultSvtCardNodeName"*/,
                   0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_25;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4504/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  fsm = (__int64)this->fields.resUsrSvtData;
  *(_QWORD *)&changeNameType = this->fields.kind == 15
                             ? (unsigned int)this->fields.costumeOverrideTransformVal
                             : 0xFFFFFFFFLL;
  if ( !fsm )
    goto LABEL_25;
  fsm = UserServantEntity__GetCardImageLimitCountStage((UserServantEntity_o *)fsm, changeNameType, 0, 0, 0);
  if ( !v8 )
    goto LABEL_25;
  v10 = fsm;
  fsm = (__int64)UnityEngine_Component__get_gameObject(v8, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v12 = (UnityEngine_GameObject_o *)fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(this->fields.resUsrSvtData, 0, 0);
  overrideTransformVal = this->fields.kind == 15 ? this->fields.costumeOverrideTransformVal : -1;
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_47625456(
                   v12,
                   resUsrSvtData,
                   v10,
                   10,
                   0,
                   v3,
                   OverwriteStatus,
                   0,
                   0,
                   overrideTransformVal,
                   0);
  if ( !fsm )
    goto LABEL_25;
  v15 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v16 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_5969AE0 )
  {
    fsm = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v15, 0)) == 0) )
  {
LABEL_25:
    sub_2213CDC(fsm, *(_QWORD *)&changeNameType);
  }
  v17.fields.x = Value;
  v17.fields.y = Value;
  v17.fields.z = Value;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v17, 0);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v15, 1.89, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__setResultSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 fsm; // x0
  System_String_o *v6; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v8; // x21
  float Value; // s0
  float v10; // s8
  int32_t ServantId; // w22
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitImageMaster_o *v13; // x23
  __int64 v14; // x24
  __int64 v15; // x25
  __int64 v16; // x1
  int32_t ServantLimitCountSealAfter; // w23
  CombineResultEffectComponent_o *CardImageLimitCount; // x0
  const MethodInfo *v19; // x3
  int32_t v20; // w22
  CombineResultEffectComponent_o *gameObject; // x0
  UserServantEntity_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x21
  const MethodInfo *v24; // x2
  ServantOverwriteStatus_o *ResolveOverwriteStatus; // x0
  UnityEngine_Component_o *v26; // x19
  UnityEngine_Transform_o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974BD0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_4504/*"CardScale"*/);
    sub_2213A60(&StringLiteral_11881/*"ResultSvtCardNodeName"*/);
    byte_5974BD0 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11881/*"ResultSvtCardNodeName"*/,
                   0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_25;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4504/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  fsm = (__int64)this->fields.resUsrSvtData;
  if ( !fsm )
    goto LABEL_25;
  v10 = Value;
  ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)fsm, -1, 0);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v13 = (ServantLimitImageMaster_o *)fsm;
  v14 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v15 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&changeNameType);
  *(_QWORD *)&v28.fields.currentCryptoKey = v14;
  *(_QWORD *)&v28.fields.fakeValue = v15;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
  if ( !v13 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v13, ServantId, fsm, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16);
  CardImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetCardImageLimitCount(
                                                            ServantId,
                                                            ServantLimitCountSealAfter,
                                                            1,
                                                            0,
                                                            0);
  fsm = CombineResultEffectComponent__GetResolveImageLimitCount(
          CardImageLimitCount,
          (int32_t)CardImageLimitCount,
          this->fields.resUsrSvtData,
          v19);
  if ( !v8 )
    goto LABEL_25;
  v20 = fsm;
  gameObject = (CombineResultEffectComponent_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v22 = this->fields.resUsrSvtData;
  v23 = (UnityEngine_GameObject_o *)gameObject;
  ResolveOverwriteStatus = CombineResultEffectComponent__GetResolveOverwriteStatus(gameObject, v22, v24);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_47625456(
                   v23,
                   v22,
                   v20,
                   10,
                   0,
                   changeNameType,
                   ResolveOverwriteStatus,
                   0,
                   0,
                   -1,
                   0);
  if ( !fsm )
    goto LABEL_25;
  v26 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_5969AE0 )
  {
    fsm = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v26, 0)) == 0) )
  {
LABEL_25:
    sub_2213CDC(fsm, *(_QWORD *)&changeNameType);
  }
  v29.fields.x = v10;
  v29.fields.y = v10;
  v29.fields.z = v10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v29, 0);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v26, 1.89, 0);
}


void CombineResultEffectComponent__setSkillResultInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Instance; // x0
  unsigned __int64 lv; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  MethodInfo *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  long double v18; // q0
  SkillUpResultWindowComponent_o *v19; // x20
  UserServantEntity_o *v20; // x21
  int32_t v21; // w22
  int32_t v22; // w23
  System_Action_o *v23; // x24
  const MethodInfo *v24; // x2
  struct UserServantEntity_o *v25; // x23
  __int64 v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x0
  const MethodInfo *v34; // x2
  struct UserServantEntity_o *v35; // x21
  System_String_array *v36; // x20
  System_String_o *v37; // x0
  const MethodInfo *v38; // x1
  UserServantEntity_o *v39; // x20
  struct ServantVoiceData_array *v40; // x8
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x20
  __int64 v43; // x21
  struct UserServantEntity_o *v44; // x8
  bool v45; // w21
  int v46; // w20
  struct UserServantEntity_o *v47; // x9
  __int64 v48; // x22
  __int64 v49; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x21
  int32_t v51; // w0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v53; // x21
  __int64 v54; // x0
  __int64 v55; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v57; // x20
  __int64 v58; // x27
  int32_t v59; // w22
  struct UserServantEntity_o *v60; // x8
  __int64 v61; // x23
  __int64 v62; // x24
  int v63; // w8
  int v64; // w10
  __int64 v65; // x23
  struct UserServantEntity_o *v66; // x8
  __int64 v67; // x23
  __int64 v68; // x24
  int32_t v69; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  System_Int32_array *v73; // x20
  struct UserServantEntity_o *v74; // x8
  ServantSkillAddEntity_o *v75; // x21
  __int64 v76; // x22
  UserServantEntity_o *v77; // x8
  __int64 v78; // x1
  Il2CppObject *v79; // x23
  long double v80; // q0
  struct UserServantEntity_o *v81; // x8
  int64_t v82; // x24
  __int64 v83; // x25
  __int64 v84; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v86; // x23
  struct UserServantEntity_o *v87; // x8
  __int64 v88; // x23
  __int64 v89; // x24
  _BOOL8 v90; // x0
  __int64 v91; // x1
  Il2CppObject *current; // x23
  __int64 v93; // x1
  NetworkManager_c *v94; // x0
  struct UserServantEntity_o *v95; // x8
  int32_t v96; // w25
  __int64 v97; // x26
  __int64 v98; // x27
  int64_t userIdNumber; // x24
  int32_t v100; // w0
  bool isForceRelease; // w29
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  __int64 v103; // x1
  Il2CppObject *v104; // x20
  long double v105; // q0
  Il2CppObject *v106; // x21
  __int64 v107; // x1
  Il2CppObject *v108; // x20
  BalanceConfig_c *v109; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w9
  int v111; // w8
  System_String_o *v112; // x21
  Il2CppObject *Name; // x0
  System_String_o *v114; // x0
  SkillUpResultWindowComponent_o *v115; // x20
  UserServantEntity_o *v116; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v118; // x23
  struct SkillUpResultWindowComponent_o *v119; // x21
  int32_t v120; // w22
  int32_t v121; // w23
  System_Action_o *v122; // x24
  struct UserServantEntity_o *v123; // x8
  __int64 v124; // x27
  __int64 v125; // x28
  int32_t v126; // w25
  int32_t v127; // w26
  UserServantEntity_o *v134; // x10
  int32_t v135; // w6
  SkillUpResultWindowComponent_o *v136; // x0
  int32_t v137; // w1
  int32_t v138; // w2
  System_Action_o *v139; // x3
  int32_t v140; // w4
  int32_t v141; // w5
  struct UserServantEntity_o *v142; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v143; // x20
  __int128 v144; // q1
  Il2CppObject *v145; // x0
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  struct SvtCombineResultWindowComponent_o *v152; // x20
  struct UserServantEntity_o *v153; // x21
  int32_t v154; // w22
  System_Action_o *v155; // x23
  SvtCombineResultWindowComponent_o *v156; // x0
  UserServantEntity_o *v157; // x1
  int32_t v158; // w2
  System_Action_o *v159; // x3
  System_Action_o *v160; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v162; // x21
  __int128 v163; // q1
  Il2CppObject *v164; // x0
  System_String_o *v165; // x2
  System_String_o *v166; // x3
  int32_t v167; // w4
  int32_t v168; // w5
  bool v169; // w6
  bool v170; // w7
  struct UserServantEntity_o *v171; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v173; // w21
  _BOOL4 v174; // w22
  const MethodInfo *v175; // x1
  System_String_o *v176; // x2
  System_String_o *v177; // x3
  int32_t v178; // w4
  int32_t v179; // w5
  bool v180; // w6
  bool v181; // w7
  struct ServantVoiceData_array *playVoiceList; // x8
  SkillUpResultWindowComponent_o *v183; // x20
  UserServantEntity_o *v184; // x21
  System_Action_o *v185; // x22
  __int64 v186; // x1
  Il2CppObject *v187; // x20
  AvalonSceneManager_c *v188; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v190; // x0
  intptr_t *v191; // x8
  const MethodInfo *v192; // x1
  __int64 v193; // x22
  System_String_o *v194; // x2
  System_String_o *v195; // x3
  int32_t v196; // w4
  int32_t v197; // w5
  bool v198; // w6
  bool v199; // w7
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  System_String_o *v201; // x2
  System_String_o *v202; // x3
  int32_t v203; // w4
  int32_t v204; // w5
  bool v205; // w6
  bool v206; // w7
  System_String_o *v207; // x2
  System_String_o *v208; // x3
  int32_t v209; // w4
  int32_t v210; // w5
  bool v211; // w6
  bool v212; // w7
  __int64 v213; // x20
  System_Action_o *v214; // x23
  System_String_o *v215; // x2
  System_String_o *v216; // x3
  int32_t v217; // w4
  int32_t v218; // w5
  bool v219; // w6
  bool v220; // w7
  Il2CppObject *v221; // x20
  CombineResultEffectComponent_ClickDelegate_o *v222; // x21
  const MethodInfo *v223; // x3
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v231; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v233; // x23
  System_Action_o *v234; // x24
  struct SkillUpResultWindowComponent_o *skillResultInfoWindow; // x22
  int32_t v236; // w23
  int32_t targetLv; // w24
  System_Action_o *v238; // x25
  int32_t targetIdOld; // w26
  int32_t targetLvOld; // w27
  int v241; // w8
  struct UserServantEntity_o *v242; // x8
  ServantSkillAddMaster_o *v243; // x21
  __int64 v244; // x22
  __int64 v245; // x23
  struct UserServantEntity_o *v246; // x8
  int32_t v247; // w22
  int32_t v248; // w23
  int32_t targetId; // w24
  ServantSkillAddEntity_o *EnableEntity; // x0
  System_String_o *v251; // x2
  System_String_o *v252; // x3
  int32_t v253; // w4
  int32_t v254; // w5
  bool v255; // w6
  bool v256; // w7
  struct System_String_array *titles; // x8
  struct System_String_o *v258; // x1
  System_String_o *CondLabelColor; // x0
  System_String_o *CondSpriteColor; // x0
  SkillUpResultWindowComponent_o *v261; // x21
  int32_t v262; // w22
  int32_t v263; // w23
  System_Action_o *v264; // x24
  struct UserServantEntity_o *v265; // x8
  __int64 v266; // x27
  __int64 v267; // x28
  int32_t v268; // w25
  int32_t v269; // w26
  int32_t v270; // w27
  System_String_o *v271; // x22
  Il2CppObject *v272; // x21
  Il2CppObject *v273; // x0
  __int64 v274; // x1
  AvalonSceneManager_c *v275; // x8
  System_Action_o *v276; // x21
  bool methoda; // [xsp+8h] [xbp-138h]
  char isDispLv; // [xsp+18h] [xbp-128h]
  System_String_o *multiSkillDisplayTitle; // [xsp+20h] [xbp-120h]
  int32_t overrideTransformVal; // [xsp+30h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v281; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v282; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v283; // [xsp+90h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v284; // [xsp+B0h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+C8h] [xbp-78h] BYREF
  int32_t dispLimitCount; // [xsp+D8h] [xbp-68h]
  int v287; // [xsp+DCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v288; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v289; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v290; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v291; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v292; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v293; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v294; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v295; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v296; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v297; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v298; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v299; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v300; // 0:x0.16
  UnityEngine_Color_o multiDisplayTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v302; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v303; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o multiDisplayTitleSpriteColor; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_5974BD6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent_CheckReturnCombineItem__);
    sub_2213A60(&Method_CombineResultEffectComponent_EndDisp__);
    sub_2213A60(&Method_CombineResultEffectComponent__setSkillResultInfo_b__157_0__);
    sub_2213A60(&Method_CombineResultEffectComponent__setSkillResultInfo_b__157_1__);
    sub_2213A60(&Method_CombineResultEffectComponent__setSkillResultInfo_b__157_2__);
    sub_2213A60(&Method_CombineResultEffectComponent__setSkillResultInfo_b__157_6__);
    sub_2213A60(&CombineResultFormManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass157_0__setSkillResultInfo_b__4__);
    sub_2213A60(&CombineResultEffectComponent___c__DisplayClass157_0_TypeInfo);
    sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass157_1__setSkillResultInfo_b__3__);
    sub_2213A60(&CombineResultEffectComponent___c__DisplayClass157_1_TypeInfo);
    sub_2213A60(&StringLiteral_11294/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/);
    sub_2213A60(&StringLiteral_11295/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974BD6 = 1;
  }
  v287 = 0;
  entity = 0;
  memset(&v284, 0, sizeof(v284));
  this->fields.skipEndDispAfterVoicePlayed = 0;
  CombineResultEffectComponent__SetTransformData(this, method);
  v3 = sub_2213CCC(CombineResultEffectComponent___c__DisplayClass157_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_236;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_162;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_236;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_236;
      v162 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v163 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      *(_OWORD *)&v283.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v283.fields.fakeValue = v163;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, lv);
      v282 = v283;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v282, 0);
      if ( !v162 )
        goto LABEL_236;
      v164 = DataMasterBase_object__object__long___GetEntity(
               v162,
               Instance,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v164;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData,
        (int32_t)v164,
        v165,
        v166,
        v167,
        v168,
        v169,
        v170);
LABEL_162:
      v171 = this->fields.baseUsrSvtData;
      if ( !v171 )
        goto LABEL_236;
      lv = (unsigned int)v171->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      v287 = lv;
      if ( !resUsrSvtData )
        goto LABEL_236;
      v173 = resUsrSvtData->fields.lv;
      v174 = CombineResultEffectComponent__CheckCombineLimit(this, lv, v173, v13);
      if ( !System_Int32__Equals_77138484((int32_t)&v287, v173, 0)
        && this->fields.asstName
        && this->fields.svtVoiceEntity
        && (playVoiceList = this->fields.playVoiceList) != 0 )
      {
        this->fields.skipEndDispAfterVoicePlayed = v174;
        this->fields.maxPlayCnt = playVoiceList->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, v175);
      }
      else
      {
        this->fields.firstPlayedVoiceFlag = 0;
      }
      *(_QWORD *)(v3 + 16) = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), 0, v176, v177, v178, v179, v180, v181);
      if ( !v174 )
        goto LABEL_186;
      v193 = sub_2213CCC(CombineResultEffectComponent___c__DisplayClass157_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v193, 0);
      if ( !v193 )
        goto LABEL_236;
      *(_QWORD *)(v193 + 24) = v3;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v193 + 24), v3, v194, v195, v196, v197, v198, v199);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v193 + 16) = callbackFunc;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v193 + 16),
        (int32_t)callbackFunc,
        v201,
        v202,
        v203,
        v204,
        v205,
        v206);
      this->fields.callbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v207, v208, v209, v210, v211, v212);
      v213 = *(_QWORD *)(v193 + 24);
      v214 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v214,
        (Il2CppObject *)v193,
        Method_CombineResultEffectComponent___c__DisplayClass157_1__setSkillResultInfo_b__3__,
        0);
      if ( !v213 )
        goto LABEL_236;
      *(_QWORD *)(v213 + 16) = v214;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v213 + 16), (int32_t)v214, v215, v216, v217, v218, v219, v220);
      v221 = *(Il2CppObject **)(v193 + 24);
      v222 = (CombineResultEffectComponent_ClickDelegate_o *)sub_2213CCC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v222,
        v221,
        Method_CombineResultEffectComponent___c__DisplayClass157_0__setSkillResultInfo_b__4__,
        v223);
      this->fields.callbackFunc = v222;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)v222,
        v224,
        v225,
        v226,
        v227,
        v228,
        v229);
LABEL_186:
      if ( !this->fields.combineStatusDisp )
      {
        CombineResultEffectComponent__EndDisp(this, v192);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v231 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v233 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v233, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v234 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v234, (Il2CppObject *)this, Method_CombineResultEffectComponent_CheckReturnCombineItem__, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_236;
      v156 = svtResultInfoWindow;
      v157 = v231;
      v158 = baseUsrSvtCollictionLv;
      v159 = v233;
      v160 = v234;
LABEL_189:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v156, v157, v158, v159, v160, 0);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_2213B20(string___TypeInfo, 1);
      v25 = this->fields.baseUsrSvtData;
      if ( !v25 )
        goto LABEL_236;
      v26 = Instance;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
      *(_QWORD *)&v288.fields.currentCryptoKey = &v25->fields.svtId;
      *(_QWORD *)&v288.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v288, v24);
      if ( !v26 )
        goto LABEL_236;
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_237;
      *(_QWORD *)(v26 + 32) = Instance;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), Instance, v27, v28, v29, v30, v31, v32);
      v33 = System_String__Concat_75697120((System_String_array *)v26, 0);
      if ( UnityEngine_PlayerPrefs__GetInt_83396820(v33, 0) != 1 || (this->fields.kind | 0x10) == 0x1A )
        goto LABEL_21;
      Instance = sub_2213B20(string___TypeInfo, 1);
      v35 = this->fields.baseUsrSvtData;
      if ( !v35 )
        goto LABEL_236;
      v36 = (System_String_array *)Instance;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
      *(_QWORD *)&v289.fields.currentCryptoKey = &v35->fields.svtId;
      *(_QWORD *)&v289.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v289, v34);
      if ( !v36 )
        goto LABEL_236;
      sub_1FFE2C4(v36, 0, Instance);
      v37 = System_String__Concat_75697120(v36, 0);
      UnityEngine_PlayerPrefs__SetInt(v37, 0, 0);
      v39 = this->fields.baseUsrSvtData;
      if ( !*(&CombineResultFormManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v38);
      CombineResultFormManager__ResetVoiceList(v39, v38);
LABEL_21:
      Instance = (__int64)this->fields.limitUpResultCheck;
      if ( !Instance )
        goto LABEL_236;
      LimitUpResultCheckComponent__checkResultLimitUp(
        (LimitUpResultCheckComponent_o *)Instance,
        this->fields.kind,
        this->fields.baseUsrSvtData,
        this->fields.resUsrSvtData,
        this->fields.baseUsrSvtCollectionLimitCnt,
        this->fields.limitUpRewardGiftDataList,
        0);
      v40 = this->fields.playVoiceList;
      if ( v40 )
      {
LABEL_122:
        if ( this->fields.asstName )
        {
          this->fields.maxPlayCnt = v40->max_length;
          CombineResultEffectComponent__StartPlayVoice(this, (const MethodInfo *)lv);
        }
      }
      else
      {
        v41 = this->fields.baseUsrSvtData;
        if ( !v41 )
          goto LABEL_236;
        v42 = *(_QWORD *)&v41->fields.limitCount.fields.currentCryptoKey;
        v43 = *(_QWORD *)&v41->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
        *(_QWORD *)&v290.fields.currentCryptoKey = v42;
        *(_QWORD *)&v290.fields.fakeValue = v43;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v290, 0);
        v44 = this->fields.baseUsrSvtData;
        v45 = (_DWORD)Instance == 2;
        if ( !v44 )
          goto LABEL_236;
        v46 = Instance;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44->fields.limitCount, 0) == 3 )
        {
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, lv);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          v47 = this->fields.baseUsrSvtData;
          if ( !v47 )
            goto LABEL_236;
          v48 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
          v50 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1112LL);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
          *(_QWORD *)&v291.fields.currentCryptoKey = v48;
          *(_QWORD *)&v291.fields.fakeValue = v49;
          v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v291, 0);
          v45 = System_Linq_Enumerable__Contains_int_(
                  v50,
                  v51,
                  (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___)
             || v46 == 2;
        }
        if ( !this->fields.isLimitUpSuppression || !v45 || (this->fields.kind | 0x10) == 0x1A )
        {
          limitUpResultCheck = this->fields.limitUpResultCheck;
          v53 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v53,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__setSkillResultInfo_b__157_6__,
            0);
          if ( limitUpResultCheck )
          {
            LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v53, 1, 0);
            return;
          }
LABEL_236:
          sub_2213CDC(Instance, lv);
        }
        CombineResultEffectComponent__OpenLimitCountSealDialog(this, (const MethodInfo *)lv);
      }
      return;
    case 2:
    case 3:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_236;
      Instance = (__int64)UserServantEntity__getSkillIdList((UserServantEntity_o *)Instance, -1, -1, 1, -1, 0);
      v73 = (System_Int32_array *)Instance;
      if ( this->fields.isSaveTransformServant )
      {
        v74 = this->fields.baseUsrSvtData;
        if ( !v74 )
          goto LABEL_236;
        v75 = *(ServantSkillAddEntity_o **)&v74->fields.transformVal.fields.currentCryptoKey;
        v76 = *(_QWORD *)&v74->fields.transformVal.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
        *(_QWORD *)&v294.fields.currentCryptoKey = v75;
        *(_QWORD *)&v294.fields.fakeValue = v76;
        LODWORD(v75) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v294, 0);
        if ( (_DWORD)v75 == 1 )
        {
          Instance = (__int64)this->fields.baseUsrSvtData;
          if ( !Instance )
            goto LABEL_236;
          Instance = (__int64)UserServantEntity__GetTransformedSkillIdList(
                                (UserServantEntity_o *)Instance,
                                1,
                                -1,
                                -1,
                                1,
                                -1,
                                1,
                                0);
          if ( !this->fields.baseUsrSvtData )
            goto LABEL_236;
          v73 = (System_Int32_array *)Instance;
          LODWORD(v75) = 1;
          this->fields.targetId = UserServantEntity__GetTransformedSameSlotSkillId(
                                    this->fields.baseUsrSvtData,
                                    this->fields.targetId,
                                    0,
                                    1,
                                    0);
        }
        goto LABEL_192;
      }
      if ( this->fields.isTransformServant )
        goto LABEL_191;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, lv);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
      v242 = this->fields.baseUsrSvtData;
      if ( !v242 )
        goto LABEL_236;
      v243 = (ServantSkillAddMaster_o *)Instance;
      v244 = *(_QWORD *)&v242->fields.svtId.fields.currentCryptoKey;
      v245 = *(_QWORD *)&v242->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
      *(_QWORD *)&v299.fields.currentCryptoKey = v244;
      *(_QWORD *)&v299.fields.fakeValue = v245;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v299, 0);
      v246 = this->fields.baseUsrSvtData;
      if ( !v246 )
        goto LABEL_236;
      v247 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v246->fields.limitCount, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_236;
      v248 = Instance;
      targetId = this->fields.targetId;
      Instance = UserServantEntity__getDispLimitCount(this->fields.baseUsrSvtData, 1, 0);
      if ( !v243 )
        goto LABEL_236;
      EnableEntity = ServantSkillAddMaster__GetEnableEntity(v243, v247, v248, targetId, 0, Instance, 1, 0);
      v75 = EnableEntity;
      if ( !EnableEntity )
        goto LABEL_192;
      Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntity->fields.titles, 0);
      if ( (Instance & 1) != 0 )
      {
LABEL_191:
        LODWORD(v75) = 0;
        goto LABEL_192;
      }
      titles = v75->fields.titles;
      if ( !titles )
        goto LABEL_236;
      if ( LODWORD(titles->max_length) )
      {
        v258 = titles->m_Items[0];
        this->fields.multiDisplayTitleBefore = v258;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.multiDisplayTitleBefore,
          (int32_t)v258,
          v251,
          v252,
          v253,
          v254,
          v255,
          v256);
        CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v75, 0);
        v302.fields.r = 0.0;
        v302.fields.g = 0.0;
        v302.fields.b = 0.0;
        v302.fields.a = 0.0;
        this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_51166816(CondLabelColor, v302, 0);
        CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v75, 0);
        v303.fields.r = 0.0;
        v303.fields.g = 0.0;
        v303.fields.b = 0.0;
        v303.fields.a = 0.0;
        LODWORD(v75) = 0;
        this->fields.multiDisplayTitleSpriteColor = ColorHelper__ParseColorCode_51166816(CondSpriteColor, v303, 0);
LABEL_192:
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        v236 = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v238 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v238, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
        Instance = (__int64)this->fields.baseUsrSvtData;
        if ( !Instance )
          goto LABEL_236;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        Instance = UserServantEntity__GetServantId((UserServantEntity_o *)Instance, -1, 0);
        if ( !skillResultInfoWindow )
          goto LABEL_236;
        v135 = Instance;
        multiDisplayTitleSpriteColor = this->fields.multiDisplayTitleSpriteColor;
        v136 = skillResultInfoWindow;
        if ( this->fields.isSaveTransformServant )
          v241 = (int)v75;
        else
          v241 = -1;
        multiDisplayTitleLabelColor = this->fields.multiDisplayTitleLabelColor;
        v134 = this->fields.baseUsrSvtData;
        overrideTransformVal = v241;
        v137 = v236;
        v138 = targetLv;
        v139 = v238;
        v140 = targetIdOld;
        v141 = targetLvOld;
        multiSkillDisplayTitle = this->fields.multiDisplayTitleBefore;
        isDispLv = 0;
        methoda = this->fields.kind == 3;
LABEL_198:
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          v136,
          v137,
          v138,
          v139,
          v140,
          v141,
          v135,
          v73,
          v134,
          methoda,
          1,
          isDispLv,
          multiSkillDisplayTitle,
          0,
          multiDisplayTitleLabelColor,
          multiDisplayTitleSpriteColor,
          overrideTransformVal,
          0);
        return;
      }
      goto LABEL_237;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v19 = this->fields.skillResultInfoWindow;
      v20 = this->fields.baseUsrSvtData;
      v21 = this->fields.targetId;
      v22 = this->fields.targetLv;
      v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v19 )
        goto LABEL_236;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_37614792(
        v19,
        v20,
        v21,
        v22,
        v23,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        this->fields.npInfoAddManager,
        this->fields.kind,
        0);
      return;
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_236;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      v142 = this->fields.baseUsrSvtData;
      if ( !v142 )
        goto LABEL_236;
      v143 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v144 = *(_OWORD *)&v142->fields.id.fields.fakeValue;
      *(_OWORD *)&v283.fields.currentCryptoKey = *(_OWORD *)&v142->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v283.fields.fakeValue = v144;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, lv);
      v281 = v283;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v281, 0);
      if ( !v143 )
        goto LABEL_236;
      v145 = DataMasterBase_object__object__long___GetEntity(
               v143,
               Instance,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v145;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData,
        (int32_t)v145,
        v146,
        v147,
        v148,
        v149,
        v150,
        v151);
      v152 = this->fields.svtResultInfoWindow;
      v153 = this->fields.resUsrSvtData;
      v154 = this->fields.baseUsrSvtCollictionLv;
      v155 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v155,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__setSkillResultInfo_b__157_0__,
        0);
      if ( !v152 )
        goto LABEL_236;
      v156 = v152;
      v157 = v153;
      v158 = v154;
      v159 = v155;
      v160 = 0;
      goto LABEL_189;
    case 7:
    case 0x15:
      v54 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_WORD *)(v54 + 309) & 1) == 0 )
        v54 = sub_224B908(v18);
      v55 = *(_QWORD *)(*(_QWORD *)(v54 + 192) + 16LL);
      if ( (*(_WORD *)(v55 + 309) & 1) == 0 )
        v55 = sub_224B908(v18);
      Instance = **(_QWORD **)(v55 + 184);
      if ( !Instance )
        goto LABEL_236;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v57 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v57,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      v58 = 0;
      v59 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, lv);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v59 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 40LL) )
        {
          v60 = this->fields.baseUsrSvtData;
          if ( !v60 )
            goto LABEL_236;
          v61 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
          v62 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
          *(_QWORD *)&v292.fields.currentCryptoKey = v61;
          *(_QWORD *)&v292.fields.fakeValue = v62;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v292, 0);
          if ( !MasterData_object )
            goto LABEL_236;
          Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                (ServantSkillMaster_o *)MasterData_object,
                                Instance,
                                v59,
                                0);
          if ( !Instance )
            goto LABEL_236;
          v63 = *(_DWORD *)(Instance + 24);
          if ( v63 < 1 )
          {
LABEL_59:
            v66 = this->fields.baseUsrSvtData;
            if ( !v66 )
              goto LABEL_236;
            v67 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
            v68 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
            *(_QWORD *)&v293.fields.currentCryptoKey = v67;
            *(_QWORD *)&v293.fields.fakeValue = v68;
            v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v293, 0);
            Instance = (__int64)ServantSkillMaster__GetEntity((ServantSkillMaster_o *)MasterData_object, v69, v59, 1, 0);
            if ( Instance )
            {
              lv = *(unsigned int *)(Instance + 28);
              v65 = v58;
LABEL_64:
              if ( !v57 )
                goto LABEL_236;
              items = v57->fields._items;
              v71 = Method_System_Collections_Generic_List_int__Add__;
              ++v57->fields._version;
              if ( !items )
                goto LABEL_236;
              size = v57->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v57,
                  lv,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
              }
              else
              {
                v57->fields._size = size + 1;
                items->m_Items[size] = lv;
              }
            }
            else
            {
              v65 = v58;
            }
            ++v59;
            v58 = v65;
            continue;
          }
          v64 = 0;
          while ( v63 != v64 )
          {
            v65 = *(_QWORD *)(Instance + 8LL * v64 + 32);
            if ( !v65 )
              goto LABEL_236;
            lv = *(unsigned int *)(v65 + 28);
            if ( (_DWORD)lv == this->fields.targetId )
              goto LABEL_64;
            if ( (v63 & ~(v63 >> 31)) == ++v64 )
              goto LABEL_59;
          }
LABEL_237:
          sub_2213CE4(Instance);
        }
        break;
      }
      if ( this->fields.kind == 7 )
      {
        Instance = (__int64)this->fields.baseUsrSvtData;
        if ( !Instance )
          goto LABEL_236;
        Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
        v77 = this->fields.baseUsrSvtData;
        dispLimitCount = Instance;
        if ( !v77 )
          goto LABEL_236;
        Instance = UserServantEntity__IsHeroine(v77, 0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_236;
          v79 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v80 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v78);
          Instance = sub_2417958(0, v80);
          v81 = this->fields.baseUsrSvtData;
          if ( !v81 )
            goto LABEL_236;
          v82 = Instance;
          v83 = *(_QWORD *)&v81->fields.svtId.fields.currentCryptoKey;
          v84 = *(_QWORD *)&v81->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
          *(_QWORD *)&v295.fields.currentCryptoKey = v83;
          *(_QWORD *)&v295.fields.fakeValue = v84;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v295, 0);
          if ( !v79 )
            goto LABEL_236;
          Instance = UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)v79,
                       &entity,
                       v82,
                       Instance,
                       0);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)entity;
            if ( !entity )
              goto LABEL_236;
            costumeIds = entity->fields.costumeIds;
            if ( !costumeIds )
              goto LABEL_236;
            if ( costumeIds->max_length )
            {
              v86 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0);
              Instance = System_Linq_Enumerable__Any_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v86,
                           (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___);
              if ( (Instance & 1) != 0 )
              {
                Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v86, 0);
                dispLimitCount = Instance;
              }
            }
          }
        }
        v87 = this->fields.baseUsrSvtData;
        if ( !v87 )
          goto LABEL_236;
        v88 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
        v89 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
        *(_QWORD *)&v296.fields.currentCryptoKey = v88;
        *(_QWORD *)&v296.fields.fakeValue = v89;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v296, 0);
        if ( !v58 )
          goto LABEL_236;
        if ( !MasterData_object )
          goto LABEL_236;
        Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              *(_DWORD *)(v58 + 20),
                              this->fields.targetIdOld,
                              0);
        if ( !Instance )
          goto LABEL_236;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v283,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
        v284 = *(System_Collections_Generic_List_Enumerator_object__o *)&v283.fields.currentCryptoKey;
        v283.fields.currentCryptoKey = 0;
        v283.fields.hiddenValue = (int64_t)&v284;
        while ( 1 )
        {
          v90 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v284,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
          if ( !v90 )
          {
            isForceRelease = 0;
            dispLimitCount = 0;
            goto LABEL_215;
          }
          current = v284.fields._current;
          if ( !v284.fields._current )
            sub_2213CDC(v90, v91);
          if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v284.fields._current, 0, 0) )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v93);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            v94 = NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v93);
              v94 = NetworkManager_TypeInfo;
            }
            v95 = this->fields.baseUsrSvtData;
            if ( !v95 )
              sub_2213CDC(v94, v93);
            v96 = v95->fields.lv;
            v97 = *(_QWORD *)&v95->fields.limitCount.fields.currentCryptoKey;
            v98 = *(_QWORD *)&v95->fields.limitCount.fields.fakeValue;
            userIdNumber = v94->static_fields->userIdNumber;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
            *(_QWORD *)&v297.fields.currentCryptoKey = v97;
            *(_QWORD *)&v297.fields.fakeValue = v98;
            v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v297, 0);
            if ( ServantSkillEntity__isUse(
                   (ServantSkillEntity_o *)current,
                   userIdNumber,
                   v96,
                   v100,
                   dispLimitCount,
                   -1,
                   -1,
                   -1,
                   0) )
            {
              break;
            }
          }
          if ( ServantSkillEntity__IsForceReleaseSkillRankUp((ServantSkillEntity_o *)current, 0) )
          {
            dispLimitCount = 0;
            isForceRelease = 1;
            goto LABEL_215;
          }
        }
        isForceRelease = 0;
        dispLimitCount = 1;
LABEL_215:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v284,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
      }
      else
      {
        isForceRelease = 0;
        dispLimitCount = 0;
      }
      v261 = this->fields.skillResultInfoWindow;
      v262 = this->fields.targetId;
      v263 = this->fields.targetLv;
      v264 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v264, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v265 = this->fields.baseUsrSvtData;
      if ( !v265 )
        goto LABEL_236;
      v266 = *(_QWORD *)&v265->fields.svtId.fields.currentCryptoKey;
      v267 = *(_QWORD *)&v265->fields.svtId.fields.fakeValue;
      v268 = this->fields.targetIdOld;
      v269 = this->fields.targetLvOld;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
      *(_QWORD *)&v300.fields.currentCryptoKey = v266;
      *(_QWORD *)&v300.fields.fakeValue = v267;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v300, 0);
      if ( !v57 )
        goto LABEL_236;
      v270 = Instance;
      Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                            v57,
                            (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v261 )
        goto LABEL_236;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v261,
        v262,
        v263,
        v264,
        v268,
        v269,
        v270,
        (System_Int32_array *)Instance,
        this->fields.baseUsrSvtData,
        0,
        dispLimitCount,
        0,
        this->fields.multiDisplayTitleBefore,
        isForceRelease,
        this->fields.multiDisplayTitleLabelColor,
        this->fields.multiDisplayTitleSpriteColor,
        -1,
        0);
      return;
    case 9:
      v115 = this->fields.skillResultInfoWindow;
      v116 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v118 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v118, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v115 )
        goto LABEL_236;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v115, v116, oldFriendShipRank, v118, 0);
      return;
    case 0xB:
      v183 = this->fields.skillResultInfoWindow;
      v184 = this->fields.baseUsrSvtData;
      v185 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v185, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v183 )
        goto LABEL_236;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v183, v184, v185, 0);
      return;
    case 0xC:
    case 0xE:
    case 0x16:
    case 0x18:
      goto LABEL_179;
    case 0xD:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_236;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        0);
      goto LABEL_179;
    case 0xF:
      v40 = this->fields.playVoiceList;
      if ( v40 )
        goto LABEL_122;
      goto LABEL_179;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_174;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_230;
      this->fields.messageCallback = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.messageCallback,
        0,
        v12,
        (System_String_o *)v13,
        v14,
        v15,
        v16,
        v17);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_236;
      v104 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v105 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v103);
      Instance = sub_2909608(0, v105);
      if ( !v104 )
        goto LABEL_236;
      v106 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v104,
               Instance,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_236;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_236;
      v108 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v109 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v107);
        v109 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v109->static_fields->CloseSecretTreasureDeviceQuestClear;
      v111 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        if ( !v111 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v107);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11295/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0);
        if ( !v108 )
          goto LABEL_236;
        v112 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v108, -1, -1, 0, 0, 0);
        v114 = System_String__Format(v112, Name, 0);
      }
      else
      {
        if ( !v111 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v107);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11294/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0);
        if ( !v106 )
          goto LABEL_236;
        v271 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v106, 0);
        if ( !v108 )
          goto LABEL_236;
        v272 = (Il2CppObject *)Instance;
        v273 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v108, -1, -1, 0, 0, 0);
        v114 = System_String__Format_75697880(v271, v272, v273, 0);
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))messageCallback->fields.invoke_impl)(
        messageCallback->fields.method_code,
        v114,
        messageCallback->fields.method);
LABEL_230:
      if ( !this->fields.callbackFunc )
        return;
      v187 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v275 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v274);
        v275 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v275->static_fields->DEFAULT_FADE_TIME;
      v190 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v191 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__157_2__;
LABEL_234:
      v276 = v190;
      System_Action___ctor(v190, (Il2CppObject *)this, *v191, 0);
      if ( !v187 )
        goto LABEL_236;
      CommonUI__maskFadeout((CommonUI_o *)v187, 1, DEFAULT_FADE_TIME, v276, 0);
      return;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_230;
LABEL_174:
      v187 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v188 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v186);
        v188 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v188->static_fields->DEFAULT_FADE_TIME;
      v190 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v191 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__157_1__;
      goto LABEL_234;
    case 0x14:
      Instance = (__int64)this->fields.commandCardExceedResultWindow;
      if ( !Instance )
        goto LABEL_236;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        (CommandCardExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        this->fields.commandCardIndex,
        this->fields.commandCardExceedCount,
        0,
        this->fields.multiDisplayTitleBefore,
        this->fields.multiDisplayTitleLabelColor,
        this->fields.multiDisplayTitleSpriteColor,
        -1,
        0);
      goto LABEL_179;
    case 0x17:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_236;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_55828756(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        this->fields.oldFriendShipRank,
        0);
LABEL_179:
      CombineResultEffectComponent__EndDisp(this, (const MethodInfo *)lv);
      return;
    case 0x19:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_236;
      Instance = (__int64)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_236;
      v73 = *(System_Int32_array **)(Instance + 16);
      v119 = this->fields.skillResultInfoWindow;
      v120 = this->fields.targetId;
      v121 = this->fields.targetLv;
      v122 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v122, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v123 = this->fields.baseUsrSvtData;
      if ( !v123 )
        goto LABEL_236;
      v124 = *(_QWORD *)&v123->fields.svtId.fields.currentCryptoKey;
      v125 = *(_QWORD *)&v123->fields.svtId.fields.fakeValue;
      v126 = this->fields.targetIdOld;
      v127 = this->fields.targetLvOld;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, lv);
      *(_QWORD *)&v298.fields.currentCryptoKey = v124;
      *(_QWORD *)&v298.fields.fakeValue = v125;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v298, 0);
      if ( !v119 )
        goto LABEL_236;
      multiDisplayTitleLabelColor.fields.r = 0.0;
      multiDisplayTitleLabelColor.fields.g = 0.0;
      multiDisplayTitleLabelColor.fields.b = 0.0;
      multiDisplayTitleLabelColor.fields.a = 0.0;
      multiDisplayTitleSpriteColor.fields.r = 0.0;
      multiDisplayTitleSpriteColor.fields.g = 0.0;
      multiDisplayTitleSpriteColor.fields.b = 0.0;
      multiDisplayTitleSpriteColor.fields.a = 0.0;
      v134 = this->fields.baseUsrSvtData;
      v135 = Instance;
      overrideTransformVal = -1;
      v136 = v119;
      v137 = v120;
      v138 = v121;
      v139 = v122;
      v140 = v126;
      v141 = v127;
      multiSkillDisplayTitle = (System_String_o *)StringLiteral_1/*""*/;
      isDispLv = 1;
      methoda = this->fields.targetLvOld == 0;
      goto LABEL_198;
    default:
      return;
  }
}


void CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5974BE6 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5974BE6 = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0);
    this->fields.player = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.player, 0, v5, v6, v7, v8, v9, v10);
  }
}


void CombineResultEffectComponent_ClickDelegate___ctor(
        CombineResultEffectComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2014CBC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2014C74;
}


System_IAsyncResult_o *CombineResultEffectComponent_ClickDelegate__BeginInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void CombineResultEffectComponent_ClickDelegate__Invoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void CombineResultEffectComponent_CostumeSkillInfo___ctor(
        CombineResultEffectComponent_CostumeSkillInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent_CostumeSkillInfoManager___ctor(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974C08 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
    byte_5974C08 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.afterSkillList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *afterSkillList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0

  if ( (byte_5974C0A & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_5974C0A = 1;
  }
  v7 = sub_2213CCC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList,
        *(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        !afterSkillList)
    || (items = afterSkillList->fields._items,
        v18 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_2213CDC(v8, v9);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), v7, v10, v11, v12, v13, v14, v15);
  }
}


void CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *beforeSkillList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0

  if ( (byte_5974C09 & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_5974C09 = 1;
  }
  v7 = sub_2213CCC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList,
        *(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        !beforeSkillList)
    || (items = beforeSkillList->fields._items,
        v18 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_2213CDC(v8, v9);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), v7, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_5974C0C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_5974C0C = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_2213CDC(0, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_5974C0D & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__);
    byte_5974C0D = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_2213CDC(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_5974C0B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_5974C0B = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_2213CDC(0, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


void CombineResultEffectComponent_MessageDelegate___ctor(
        CombineResultEffectComponent_MessageDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2014D3C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2014D20;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2014CD8;
}


System_IAsyncResult_o *CombineResultEffectComponent_MessageDelegate__BeginInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = message;
  return sub_2213A14(this, &v6, callback, object);
}


void CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void CombineResultEffectComponent_MessageDelegate__Invoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    message,
    this->fields.method);
}


void CombineResultEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974C0E & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent___c_TypeInfo);
    byte_5974C0E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CombineResultEffectComponent___c___ctor(CombineResultEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c___EndPlayProcess_b__172_0(
        CombineResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


ServantVoicePerformance_o *CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__163_0(
        CombineResultEffectComponent___c_o *this,
        ServantVoiceData_o *voiceData,
        const MethodInfo *method)
{
  if ( !voiceData )
    sub_2213CDC(this, 0);
  return voiceData->fields.additionalPerformances;
}


bool CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__163_1(
        CombineResultEffectComponent___c_o *this,
        ServantVoicePerformance_o *performanceData,
        const MethodInfo *method)
{
  if ( !performanceData )
    sub_2213CDC(this, 0);
  return !System_String__IsNullOrEmpty(performanceData->fields.assetName, 0);
}


int32_t CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__118_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return System_Int32__CompareTo_77138392((_DWORD)a + 24, b->fields.priority, 0);
}


void CombineResultEffectComponent___c__DisplayClass125_0___ctor(
        CombineResultEffectComponent___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass125_0___LoadCombineEffect_b__0(
        CombineResultEffectComponent___c__DisplayClass125_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974C0F & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent_TypeInfo);
    byte_5974C0F = 1;
  }
  if ( assetData )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = assetData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int32_t)assetData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  ActionExtensions__Call(this->fields.action, 0);
}


void CombineResultEffectComponent___c__DisplayClass157_0___ctor(
        CombineResultEffectComponent___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass157_0___setSkillResultInfo_b__4(
        CombineResultEffectComponent___c__DisplayClass157_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0);
}


void CombineResultEffectComponent___c__DisplayClass157_1___ctor(
        CombineResultEffectComponent___c__DisplayClass157_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass157_1___setSkillResultInfo_b__3(
        CombineResultEffectComponent___c__DisplayClass157_1_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass157_1_o *v2; // x19
  struct CombineResultEffectComponent___c__DisplayClass157_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct CombineResultEffectComponent___c__DisplayClass157_0_o *v12; // x8
  struct CombineResultEffectComponent___c__DisplayClass157_0_o *v13; // x8
  struct CombineResultEffectComponent___c__DisplayClass157_0_o *v14; // x8
  struct CombineResultEffectComponent___c__DisplayClass157_0_o *v15; // x8
  struct CombineResultEffectComponent_o *v16; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CommonUI_o *v18; // x20
  CombineResultEffectComponent_ClickDelegate_o *_9__5; // x22
  const MethodInfo *v20; // x3
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_5974C10 & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CombineResultEffectComponent___c__DisplayClass157_1_o *)sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass157_1__setSkillResultInfo_b__5__);
    byte_5974C10 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_24;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  effect = (UnityEngine_Object_o *)_4__this->fields.effect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__DestroyImmediate_83460132(effect, 0);
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass157_1_o *)v12->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  *((_QWORD *)this + 19) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)this + 152), 0, v6, v7, v8, v9, v10, v11);
  v13 = v2->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass157_1_o *)v13->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, method);
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass157_1_o *)v14->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( *((_QWORD *)this + 23) )
  {
    this = (CombineResultEffectComponent___c__DisplayClass157_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = v2->fields.CS___8__locals1;
    if ( v15 )
    {
      v16 = v15->fields.__4__this;
      if ( v16 )
      {
        baseUsrSvtData = v16->fields.baseUsrSvtData;
        v18 = (CommonUI_o *)this;
        _9__5 = v2->fields.__9__5;
        if ( !_9__5 )
        {
          _9__5 = (CombineResultEffectComponent_ClickDelegate_o *)sub_2213CCC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__5,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass157_1__setSkillResultInfo_b__5__,
            v20);
          v2->fields.__9__5 = _9__5;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v2->fields.__9__5,
            (int32_t)_9__5,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        }
        if ( v18 )
        {
          CommonUI__OpenCombineLimit(v18, baseUsrSvtData, _9__5, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_2213CDC(this, method);
  }
  if ( *((_QWORD *)this + 47) )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, method);
    callback = v2->fields.callback;
    if ( !callback )
      goto LABEL_24;
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent___c__DisplayClass157_1___setSkillResultInfo_b__5(
        CombineResultEffectComponent___c__DisplayClass157_1_o *this,
        bool decide,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent___c__DisplayClass157_0_o *CS___8__locals1; // x8
  CombineResultEffectComponent___c__DisplayClass157_1_o *v4; // x19
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this,
        (this = (CombineResultEffectComponent___c__DisplayClass157_1_o *)CS___8__locals1->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, decide);
  }
  *((_DWORD *)this + 84) = 0;
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, (const MethodInfo *)decide);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
}


void CombineResultEffectComponent___c__DisplayClass157_2___ctor(
        CombineResultEffectComponent___c__DisplayClass157_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent___c__DisplayClass157_2___setSkillResultInfo_b__7(
        CombineResultEffectComponent___c__DisplayClass157_2_o *this,
        bool decide,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass157_2_o *v3; // x19
  struct CombineResultEffectComponent_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__8; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct CombineResultEffectComponent_o *v12; // x8

  v3 = this;
  if ( (byte_5974C11 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardServantFlagRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass157_2_o *)sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass157_2__setSkillResultInfo_b__8__);
    byte_5974C11 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _9__8 = v3->fields.__9__8;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  if ( !_9__8 )
  {
    _9__8 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__8,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass157_2__setSkillResultInfo_b__8__,
      0);
    v3->fields.__9__8 = _9__8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__8, (int32_t)_9__8, v6, v7, v8, v9, v10, v11);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, decide);
  this = (CombineResultEffectComponent___c__DisplayClass157_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__8,
                                                                    (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v12 = v3->fields.__4__this;
  if ( !v12 || !this )
LABEL_11:
    sub_2213CDC(this, decide);
  CardServantFlagRequest__beginRequest(
    (CardServantFlagRequest_o *)this,
    v12->fields.targetSvtId,
    v12->fields.targetFlagId,
    0);
}


void CombineResultEffectComponent___c__DisplayClass157_2___setSkillResultInfo_b__8(
        CombineResultEffectComponent___c__DisplayClass157_2_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
}


void CombineResultEffectComponent___c__DisplayClass172_0___ctor(
        CombineResultEffectComponent___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass172_0___EndPlayProcess_b__1(
        CombineResultEffectComponent___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_o *_4__this; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (limitUpResultCheck = _4__this->fields.limitUpResultCheck) == 0 )
    sub_2213CDC(this, method);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, this->fields.endDispAction, 1, 0);
}


void CombineResultEffectComponent___c__DisplayClass184_0___ctor(
        CombineResultEffectComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass184_0___OpenNotification_b__0(
        CombineResultEffectComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  int32_t svtId; // w20
  int32_t limitCount; // w21
  const MethodInfo *v5; // x1
  CombineResultEffectComponent_o *_4__this; // x0

  if ( (byte_5974C12 & 1) == 0 )
  {
    sub_2213A60(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_5974C12 = 1;
  }
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, method);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(svtId, limitCount, 0);
  ServantCharaGraphEXOpenManager__WriteData(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, v5);
  CombineResultEffectComponent__FadeoutProcess(_4__this, v5);
}


void CombineResultEffectComponent___c__DisplayClass190_0___ctor(
        CombineResultEffectComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass190_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass190_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x21
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5974C13 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CombineResultEffectComponent___c__DisplayClass190_0__ProfileChangeDecideAction_b__1__);
    byte_5974C13 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  _9__1 = this->fields.__9__1;
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass190_0__ProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
    sub_2213CDC(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void CombineResultEffectComponent___c__DisplayClass190_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v6; // x20

  if ( (byte_5974C14 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974C14 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  Instance = (Il2CppObject *)_4__this->fields.limitUpResultCheck;
  if ( !Instance )
    goto LABEL_10;
  LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
  if ( !v6 )
LABEL_10:
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}