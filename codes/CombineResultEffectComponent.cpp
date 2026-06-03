void CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_HashSet_T__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4E7B93E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4E7B93E = 1;
  }
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_D36290;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentFigureCollectList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v10;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.afterFigureCollectList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  this->fields.costumeOverrideTransformVal = -1;
  v17 = sub_1D0F15C(int___TypeInfo, 1);
  if ( !v17 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v17 + 24) )
    sub_1D0F314(v17);
  *(_DWORD *)(v17 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v17;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.ChangeCardEffectLvList, v17, v19, v20, v21, v22, v23, v24);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v25 = (System_Collections_Generic_HashSet_T__o *)sub_1D0F300(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v25,
    (const MethodInfo_38028F4 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v25 )
LABEL_7:
    sub_1D0F30C(v17, v18);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v25,
    1,
    (const MethodInfo_3803AF8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v25,
    10,
    (const MethodInfo_3803AF8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v25,
    26,
    (const MethodInfo_3803AF8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v25,
    19,
    (const MethodInfo_3803AF8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v25,
    24,
    (const MethodInfo_3803AF8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v25;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.limitUpKinds, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4E7B8E5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4E7B8E5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1D0F30C(0, v11);
  v12 = UnityEngine_Component__GetComponent_object_(
          transform,
          (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v12;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.combineResStatus, (int32_t)v12, v13, v14, v15, v16, v17, v18);
}


bool CombineResultEffectComponent__CheckCombineLimit(
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

  if ( (byte_4E7B8F9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7B8F9 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v9 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__GetRarity((UserServantEntity_o *)Instance, 1, 0);
  HighestData = ServantLvDetailMaster__GetHighestData(v9, Rarity, oldLv, 0);
  Instance = ServantLvDetailMaster__GetHighestData(v9, Rarity, currentLv, 0);
  if ( Instance && !HighestData )
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
    sub_1D0F30C(Instance, v8);
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
    sub_1D0F30C(0, method);
  return LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0);
}


void CombineResultEffectComponent__CheckReturnCombineItem(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int64_t returnQpNum; // x20
  System_Int64_array *returnSvtIds; // x21
  CommonUI_o *v6; // x22
  System_Action_o *v7; // x23
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4E7B92D & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__CheckReturnCombineItem_b__179_0__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B92D = 1;
  }
  if ( this->fields.returnQpNum >= 1
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.returnSvtIds, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    returnQpNum = this->fields.returnQpNum;
    returnSvtIds = this->fields.returnSvtIds;
    v6 = (CommonUI_o *)Instance;
    v7 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__CheckReturnCombineItem_b__179_0__,
      0);
    if ( !v6 )
      sub_1D0F30C(v8, v9);
    CommonUI__OpenReturnCombineItemDialog(v6, returnQpNum, returnSvtIds, v7, 0);
  }
}


bool CombineResultEffectComponent__CheckSaintGraphProfileChange(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4E7B936 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E7B936 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v7);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0);
}


void CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0
  AssetData_o *effectAssetData; // x0
  AssetData_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E7B933 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&CombineResultEffectComponent_TypeInfo);
    sub_1D0F0B4(&System_GC_TypeInfo);
    byte_4E7B933 = 1;
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
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41894156(v6, 0);
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = 0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      0,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !svtResultInfoWindow )
LABEL_22:
    sub_1D0F30C(svtResultInfoWindow, v3);
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

  if ( (byte_4E7B935 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__187_0__);
    byte_4E7B935 = 1;
  }
  v3 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v6 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__187_0__,
    0);
  if ( !limitCountSealDialog )
    sub_1D0F30C(v7, v8);
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
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
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
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
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
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4E7B910 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StandFigureCollect_TypeInfo);
    byte_4E7B910 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v13 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v13,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_object )
    goto LABEL_47;
  v15 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                svtId,
                                imageLimitCount,
                                0);
  if ( !v15 )
    goto LABEL_47;
  v16 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v15, svtId, (int32_t)Instance, 2, 0);
  if ( !Instance
    || (v17 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v59);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_42036172(
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
          v63 = (StandFigureCollect_o *)sub_1D0F300(StandFigureCollect_TypeInfo);
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
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
              }
              else
              {
                v73 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v73[4] = (Il2CppClass *)v63;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1D0F30C(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    v17,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v76 = v75;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v18 )
      break;
    current = (SvtMultiPortraitEntity_o *)v76.fields._current;
    if ( !v76.fields._current )
      sub_1D0F30C(v18, v19);
    klass_high = HIDWORD(v76.fields._current[2].klass);
    if ( klass_high >= 1 )
      v22 = klass_high + 1;
    else
      v22 = 1;
    if ( !StandFigureNode )
      sub_1D0F30C(v18, v19);
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
      sub_1D0F30C(0, v29);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    transform = UnityEngine_Component__get_transform(v36, 0);
    if ( !transform )
      sub_1D0F30C(0, v38);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v40 = UnityEngine_Component__get_gameObject(v36, 0);
      v42 = current->fields.commonPosition;
      if ( !v42 )
        sub_1D0F30C(v40, v41);
      max_length = v42->max_length;
      if ( max_length == 1 )
        sub_1D0F314(v40);
      if ( !max_length )
        sub_1D0F314(v40);
      GameObjectExtensions__AddLocalPosition_37344148(v40, (float)v42->m_Items[0], (float)v42->m_Items[1], 0);
    }
    v44 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v45 = (StandFigureCollect_o *)sub_1D0F300(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v45, current, (UIStandFigureR_o *)v36, 0);
    if ( !v44 )
      sub_1D0F30C(v46, v47);
    v54 = v44->fields._items;
    v55 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v44->fields._version;
    if ( !v54 )
      sub_1D0F30C(v46, v47);
    v56 = v44->fields._size;
    if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v44,
        (Il2CppObject *)v45,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v44->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v45;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v57 + 4), (int32_t)v45, v48, v49, v50, v51, v52, v53);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  int32_t v20; // w21
  const MethodInfo *v21; // x3
  int32_t v22; // w22
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
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  UnityEngine_GameObject_o *v43; // x0
  int32_t v44; // w29
  UnityEngine_GameObject_o *v45; // x22
  const MethodInfo *v46; // x1
  UnityEngine_GameObject_o *v47; // x7
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
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v71; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v73; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v75; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  int32_t imageLimitCounta; // [xsp+2Ch] [xbp-A4h]
  bool v87; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4E7B907 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StandFigureCollect_TypeInfo);
    byte_4E7B907 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  v17 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v17,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  v19 = (SvtMultiPortraitMaster_o *)Instance;
  v16 = this->fields.kind == 15 ? (unsigned int)this->fields.costumeOverrideTransformVal : 0xFFFFFFFFLL;
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_62;
  Instance = (DataManager_o *)UserServantEntity__GetServantId(this->fields.baseUsrSvtData, v16, 0);
  if ( !MasterData_object )
    goto LABEL_62;
  v20 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                (int32_t)Instance,
                                imageLimitCount,
                                0);
  v22 = (int)Instance;
  v87 = ignoreFormChangeCheck;
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
    goto LABEL_62;
  imageLimitCounta = v22;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v19, v20, v22, overwriteType, 0);
  if ( !Instance
    || (v24 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v71);
      Instance = (DataManager_o *)(v87 | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_42036172(
                                     gameObject,
                                     v20,
                                     imageLimitCounta,
                                     1,
                                     0,
                                     1,
                                     0,
                                     v23 & 1,
                                     friendshipNum,
                                     VoiceEffectPrefab,
                                     0)
                                 : StandFigureManager__CreateRenderPrefab_42112296(
                                     gameObject,
                                     v20,
                                     imageLimitCounta,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0,
                                     0,
                                     friendshipNum,
                                     VoiceEffectPrefab,
                                     0));
      v73 = (UIStandFigureR_o *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0);
          currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
          v75 = (StandFigureCollect_o *)sub_1D0F300(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v75, 0, v73, 0);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v83 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v75,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
              }
              else
              {
                v85 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v85[4] = (Il2CppClass *)v75;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v75, v76, v77, v78, v79, v80, v81);
              }
              return;
            }
          }
        }
      }
    }
LABEL_62:
    sub_1D0F30C(Instance, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    v24,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v90 = v89;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v25 )
      break;
    current = (SvtMultiPortraitEntity_o *)v90.fields._current;
    if ( !v90.fields._current )
      sub_1D0F30C(v25, v26);
    klass_high = HIDWORD(v90.fields._current[2].klass);
    if ( klass_high >= 1 )
      v29 = klass_high + 1;
    else
      v29 = 1;
    if ( v87 | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1D0F30C(v25, v26);
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
        sub_1D0F30C(v25, v26);
      v43 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      v44 = current->fields.portraitImageId;
      v45 = v43;
      v47 = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v46);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(v45, v44, formId, 1, 0, v29, 0, v47, 0);
    }
    v48 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1D0F30C(0, v36);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    transform = UnityEngine_Component__get_transform(v48, 0);
    if ( !transform )
      sub_1D0F30C(0, v50);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v52 = UnityEngine_Component__get_gameObject(v48, 0);
      v54 = current->fields.commonPosition;
      if ( !v54 )
        sub_1D0F30C(v52, v53);
      max_length = v54->max_length;
      if ( max_length == 1 )
        sub_1D0F314(v52);
      if ( !max_length )
        sub_1D0F314(v52);
      GameObjectExtensions__AddLocalPosition_37344148(v52, (float)v54->m_Items[0], (float)v54->m_Items[1], 0);
    }
    v56 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v57 = (StandFigureCollect_o *)sub_1D0F300(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v57, current, (UIStandFigureR_o *)v48, 0);
    if ( !v56 )
      sub_1D0F30C(v58, v59);
    v66 = v56->fields._items;
    v67 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v56->fields._version;
    if ( !v66 )
      sub_1D0F30C(v58, v59);
    v68 = v56->fields._size;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        (Il2CppObject *)v57,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v56->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v57;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)v57, v60, v61, v62, v63, v64, v65);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x24
  UnityEngine_Object_o *v19; // x20
  __int64 v20; // x1
  UIStandFigureR_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_Component_o *v23; // x0
  UnityEngine_Object_o *v24; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x8
  int32_t v26; // w2
  int v27; // w9
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E7B932 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7B932 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)currentFigureCollectList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1D0F30C(v4, v5);
    monitor = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1D0F30C(0, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_1D0F30C(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_73359672(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v13 = this->fields.currentFigureCollectList;
  if ( !v13 )
    goto LABEL_40;
  size = v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0);
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)currentFigureCollectList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v16 )
      break;
    v18 = v29.fields._current;
    if ( !v29.fields._current )
      sub_1D0F30C(v16, v17);
    v19 = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      v21 = (UIStandFigureR_o *)v18[1].monitor;
      if ( !v21 )
        sub_1D0F30C(0, v20);
      UIStandFigureR__ReleaseCharacter(v21, 0);
      v23 = (UnityEngine_Component_o *)v18[1].monitor;
      if ( !v23 )
        sub_1D0F30C(0, v22);
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_73359672(v24, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1D0F30C(currentFigureCollectList, method);
  v26 = afterFigureCollectList->fields._size;
  v27 = afterFigureCollectList->fields._version + 1;
  afterFigureCollectList->fields._size = 0;
  afterFigureCollectList->fields._version = v27;
  if ( v26 >= 1 )
    System_Array__Clear((System_Array_o *)afterFigureCollectList->fields._items, 0, v26, 0);
}


void CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0) )
  {
    sub_1D0F30C(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0);
}


void CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4E7B91C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__EndLoad_b__157_0__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B91C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__157_0__, 0);
  if ( !v5 )
    sub_1D0F30C(v8, v9);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0);
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

  if ( (byte_4E7B928 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_EndPlayProcess__);
    byte_4E7B928 = 1;
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
      sub_1D0F314(IsNullOrEmpty);
    IsNullOrEmpty = playVoiceList->m_Items[v6];
    if ( !IsNullOrEmpty )
LABEL_9:
      sub_1D0F30C(IsNullOrEmpty, v4);
    v7 = ServantVoiceData__get_AfterPerformance(IsNullOrEmpty, 0);
    v8 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndPlayProcess__, 0);
    CombineResultEffectComponent__PlayPerformance(this, v7, v8, v9);
  }
}


void CombineResultEffectComponent__EndPlayProcess(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Request_object; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v20; // x8
  System_Action_o *v21; // x22
  System_Action_o **v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  CombineResultEffectComponent___c_c *v35; // x0
  System_Action_o *_9__171_0; // x22
  Il2CppObject *v37; // x23
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  _DWORD *v47; // x23
  __int64 v48; // x24
  __int64 v49; // x25
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int v56; // w8
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v61; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *v63; // x8
  __int64 v64; // x22
  __int64 v65; // x23
  struct UserServantEntity_o *v66; // x8
  int32_t v67; // w22
  CombineResultEffectComponent_o *v68; // x0
  int32_t v69; // w23
  const MethodInfo *v70; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v71; // x21
  System_Action_o *v72; // x19
  const MethodInfo *v73; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4E7B929 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
    sub_1D0F0B4(&int_____TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__EndPlayProcess_b__171_0__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass171_0__EndPlayProcess_b__1__);
    sub_1D0F0B4(&CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo);
    sub_1D0F0B4(&CombineResultEffectComponent___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10831/*"PlayVoice"*/);
    byte_4E7B929 = 1;
  }
  v3 = sub_1D0F300(CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass171_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass171_0_o *)v3,
    0);
  if ( !v3 )
    goto LABEL_61;
  *(_QWORD *)(v3 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
          (System_String_o *)StringLiteral_10831/*"PlayVoice"*/,
          v20->fields.delay,
          0);
        return;
      }
LABEL_61:
      sub_1D0F30C(Request_object, v5);
    }
LABEL_62:
    sub_1D0F314(Request_object);
  }
  if ( this->fields.player )
    CombineResultEffectComponent__stopVoice(this, v5);
  this->fields.playCnt = 0;
  this->fields.playVoiceList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceList, 0, v12, v13, v14, v15, v16, v17);
  v21 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
  *(_QWORD *)(v3 + 24) = v21;
  v22 = (System_Action_o **)(v3 + 24);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v21, v23, v24, v25, v26, v27, v28);
  if ( this->fields.skipEndDispAfterVoicePlayed )
  {
    v35 = CombineResultEffectComponent___c_TypeInfo;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v35 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__171_0 = v35->static_fields->__9__171_0;
    if ( !_9__171_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = CombineResultEffectComponent___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v35->static_fields->__9;
      _9__171_0 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(_9__171_0, v37, Method_CombineResultEffectComponent___c__EndPlayProcess_b__171_0__, 0);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__171_0 = _9__171_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__171_0,
        (int32_t)_9__171_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    *v22 = _9__171_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)_9__171_0, v29, v30, v31, v32, v33, v34);
    this->fields.skipEndDispAfterVoicePlayed = 0;
  }
  if ( this->fields.firstPlayedVoiceFlag >= 1 )
  {
    v45 = sub_1D0F15C(int_____TypeInfo, 1);
    Request_object = sub_1D0F15C(int___TypeInfo, 2);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_61;
    v47 = (_DWORD *)Request_object;
    v49 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v48 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v74.fields.currentCryptoKey = v49;
    *(_QWORD *)&v74.fields.fakeValue = v48;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v74, 0);
    if ( !v47 )
      goto LABEL_61;
    v56 = v47[6];
    if ( !v56 )
      goto LABEL_62;
    v47[8] = Request_object;
    if ( v56 == 1 )
      goto LABEL_62;
    v47[9] = this->fields.firstPlayedVoiceFlag;
    if ( !v45 )
      goto LABEL_61;
    if ( !*(_DWORD *)(v45 + 24) )
      goto LABEL_62;
    *(_QWORD *)(v45 + 32) = v47;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v45 + 32), (int32_t)v47, v50, v51, v52, v53, v54, v55);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (__int64)NetworkManager__getRequest_object_(
                                0,
                                (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
    if ( !Request_object )
      goto LABEL_61;
    TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, (System_Int32_array_array *)v45, 0);
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
                     (const MethodInfo_3802FE8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( (Request_object & 1) != 0 )
  {
    if ( this->fields.isLimitUpSuppression )
      goto LABEL_39;
    kind = this->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_39;
    v63 = this->fields.baseUsrSvtData;
    if ( !v63 )
      goto LABEL_61;
    v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
    v64 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v75.fields.currentCryptoKey = v65;
    *(_QWORD *)&v75.fields.fakeValue = v64;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v75, 0);
    v66 = this->fields.baseUsrSvtData;
    if ( !v66 )
      goto LABEL_61;
    v67 = Request_object;
    v68 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                              v66->fields.limitCount,
                                              0);
    v69 = (_DWORD)v68 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v68, v67, (_DWORD)v68 + 1, v70) )
    {
      v71 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1D0F300(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v71,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0);
      v72 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(
        v72,
        (Il2CppObject *)v3,
        Method_CombineResultEffectComponent___c__DisplayClass171_0__EndPlayProcess_b__1__,
        0);
      ServantCommentMaster__OpenSaintGraphProfileChange(v67, v69, v71, v72, 0);
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
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v57) )
    {
      Request_object = (__int64)this->fields.touchInfo;
      if ( !Request_object )
        goto LABEL_61;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Request_object, 1, 0);
      costumeId = this->fields.costumeId;
      v61 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v61 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v61->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(this, v58);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v59);
        ++this->fields.skillShowIndex;
      }
    }
    else if ( CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, v5) )
    {
      CombineResultEffectComponent__ShowCostumeChangeMessage(this, v73);
    }
    else
    {
      CombineResultEffectComponent__EndDisp(this, v73);
    }
  }
}


void CombineResultEffectComponent__FadeoutProcess(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4E7B92F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__FadeoutProcess_b__181_0__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B92F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v5 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
      v7 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__FadeoutProcess_b__181_0__, 0);
      if ( !Instance )
        sub_1D0F30C(v8, v9);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v7, 0);
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
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4E7B8FD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&CombineResultEffectComponent_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject____80459360);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7B8FD = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_14;
  Object_object__52624444 = AssetData__GetObject_object__52624444(
                              effectAssetData,
                              name,
                              (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object__53335148(
                                     Object_object__52624444,
                                     parentTr,
                                     1,
                                     (const MethodInfo_32DD46C *)Method_UnityEngine_Object_Instantiate_GameObject____80459360);
  if ( !effectAssetData )
    goto LABEL_14;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4E70C99 )
  {
    effectAssetData = (AssetData_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4E70C9E )
  {
    effectAssetData = (AssetData_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C9E = 1;
  }
  if ( !v9 )
LABEL_14:
    sub_1D0F30C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
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
  int v9; // w10

  if ( (byte_4E7B90F & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E7B90F = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1D0F30C(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1D0F314(v6);
    if ( ServantIdsIgnoreFormChange->m_Items[v9] == svtId )
      break;
    if ( max_length == ++v9 )
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

  if ( (byte_4E7B930 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7B930 = 1;
  }
  v18 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_21;
    v10 = (ServantCostumeMaster_o *)Instance;
    v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v12;
    *(_QWORD *)&v20.fields.fakeValue = v11;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v20, 0);
    if ( !v10 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v10, &entity, (int32_t)Instance, limitCount, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0);
LABEL_21:
      sub_1D0F30C(Instance, v8);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = this->fields.resUsrSvtData;
  if ( !v14 )
    goto LABEL_21;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v21, 0);
  if ( !v15 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v15,
          (Il2CppObject **)&v18,
          (int32_t)Instance,
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v18;
  if ( !v18 )
    goto LABEL_21;
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
  BalanceConfig_c *v6; // x0

  v5 = imageLimitCount;
  if ( (byte_4E7B93D & 1) == 0 )
  {
    this = (CombineResultEffectComponent_o *)sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E7B93D = 1;
  }
  if ( !userServantEntity )
    sub_1D0F30C(this, *(_QWORD *)&imageLimitCount);
  if ( UserServantEntity__IsUseLevelExceedItemHeroine(userServantEntity, 0) )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    return v6->static_fields->SpecialLimitCountPLD;
  }
  return v5;
}


ServantOverwriteStatus_o *CombineResultEffectComponent__GetResolveOverwriteStatus(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4E7B93C & 1) == 0 )
  {
    this = (CombineResultEffectComponent_o *)sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E7B93C = 1;
  }
  if ( !userServantEntity )
    sub_1D0F30C(this, userServantEntity);
  if ( !UserServantEntity__IsUseLevelExceedItemHeroine(userServantEntity, 0) )
    return UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return UserServantEntity__GetOverwriteStatus_44553664(userServantEntity, v4->static_fields->SpecialLimitCountPLD, 0);
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

  if ( (byte_4E7B90A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4E7B90A = 1;
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
    sub_1D0F30C(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


System_String_o *CombineResultEffectComponent__GetStartAnimationName(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  VoicePlayCondMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct ServantVoiceEntity_o *svtVoiceEntity; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v10; // x9
  bool isVoicePlay_44651468; // w0
  Il2CppObject *CombineAnimation; // x21
  Il2CppObject *v13; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_o *Clip; // x22
  int32_t kind; // w8
  Il2CppObject *v17; // x0
  __int64 *v18; // x8
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E7B939 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11553/*"ResultEffectAnimation"*/);
    sub_1D0F0B4(&StringLiteral_17519/*"bit_result_skinchange{0:D2}"*/);
    sub_1D0F0B4(&StringLiteral_17497/*"bit_result_advent{0:D2}"*/);
    sub_1D0F0B4(&StringLiteral_25731/*"{0}{1:D2}"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_17521/*"bit_result{0:D2}"*/);
    byte_4E7B939 = 1;
  }
  condEntity = 0;
  if ( !this->fields.svtVoiceEntity )
    goto LABEL_26;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0) )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( !svtVoiceEntity )
    goto LABEL_42;
  playVoiceList = this->fields.playVoiceList;
  if ( !playVoiceList )
    goto LABEL_42;
  if ( !LODWORD(playVoiceList->max_length) )
    sub_1D0F314(Master_object);
  v10 = playVoiceList->m_Items[0];
  if ( !v10 || !Master_object )
    goto LABEL_42;
  isVoicePlay_44651468 = VoicePlayCondMaster__isVoicePlay_44651468(
                           Master_object,
                           svtVoiceEntity->fields.id,
                           v10->fields.id,
                           &condEntity,
                           0,
                           -1,
                           -1,
                           0,
                           0);
  if ( condEntity && isVoicePlay_44651468 )
  {
    CombineAnimation = (Il2CppObject *)VoicePlayCondEntity__GetCombineAnimation(condEntity, 0, 0);
    v20 = index;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v5 = System_String__Format_65604080((System_String_o *)StringLiteral_25731/*"{0}{1:D2}"*/, CombineAnimation, v13, 0);
  }
  Master_object = (VoicePlayCondMaster_o *)this->fields.fsm;
  if ( !Master_object
    || (Master_object = (VoicePlayCondMaster_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Master_object, 0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11553/*"ResultEffectAnimation"*/,
                                                   0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                                   (HutongGames_PlayMaker_FsmGameObject_o *)Master_object,
                                                   0)) == 0 )
  {
LABEL_42:
    sub_1D0F30C(Master_object, v7);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      if ( kind > 15 )
      {
        if ( kind != 19 && kind != 26 )
          return (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_38;
      }
      if ( kind != 10 )
      {
        if ( kind == 15 )
        {
          v20 = index;
          v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
          v18 = &StringLiteral_17519/*"bit_result_skinchange{0:D2}"*/;
          return System_String__Format((System_String_o *)*v18, v17, 0);
        }
        return (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_38:
      v20 = index;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v18 = &StringLiteral_17497/*"bit_result_advent{0:D2}"*/;
      return System_String__Format((System_String_o *)*v18, v17, 0);
    }
    if ( kind )
    {
      if ( kind == 1 )
        goto LABEL_38;
      if ( kind != 6 )
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    v20 = index;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v18 = &StringLiteral_17521/*"bit_result{0:D2}"*/;
    return System_String__Format((System_String_o *)*v18, v17, 0);
  }
  if ( !Component_object )
    goto LABEL_42;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Component_object, v5, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(Clip, 0) )
    goto LABEL_26;
  return v5;
}


UnityEngine_GameObject_o *CombineResultEffectComponent__GetVoiceEffectPrefab(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__52624444; // x20
  System_Collections_Generic_IEnumerable_TSource__o *playVoiceList; // x20
  CombineResultEffectComponent___c_c *v5; // x0
  System_Func_object__object__o *_9__162_0; // x21
  Il2CppObject *v7; // x22
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  CombineResultEffectComponent___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__bool__o *_9__162_1; // x21
  Il2CppObject *v19; // x22
  struct CombineResultEffectComponent___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  Il2CppClass *klass; // x8
  AssetData_o *effectAssetData; // x0
  System_String_o *v31; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  VoiceMaster_o *v33; // x21
  __int64 v34; // x22
  __int64 v35; // x23
  struct ServantVoiceData_array *v36; // x8
  ServantVoiceData_o *v37; // x8
  int FlagRequestNumber; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4E7B921 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&CombineResultEffectComponent_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    sub_1D0F0B4(&System_Func_ServantVoicePerformance__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__162_0__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__162_1__);
    sub_1D0F0B4(&CombineResultEffectComponent___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7B921 = 1;
  }
  Object_object__52624444 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0) )
  {
    playVoiceList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playVoiceList;
    v5 = CombineResultEffectComponent___c_TypeInfo;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v5 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__162_0 = (System_Func_object__object__o *)v5->static_fields->__9__162_0;
    if ( !_9__162_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = CombineResultEffectComponent___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__162_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
      System_Func_object__object____ctor(
        _9__162_0,
        v7,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__162_0__,
        0);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__162_0 = (struct System_Func_ServantVoiceData__ServantVoicePerformance__o *)_9__162_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__162_0,
        (int32_t)_9__162_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    v15 = System_Linq_Enumerable__Select_object__object_(
            playVoiceList,
            (System_Func_TSource__TResult__o *)_9__162_0,
            (const MethodInfo_32866A4 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    v16 = CombineResultEffectComponent___c_TypeInfo;
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v16 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__162_1 = (System_Func_object__bool__o *)v16->static_fields->__9__162_1;
    if ( !_9__162_1 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CombineResultEffectComponent___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__162_1 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_ServantVoicePerformance__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__162_1,
        v19,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__162_1__,
        0);
      v20 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v20->__9__162_1 = (struct System_Func_ServantVoicePerformance__bool__o *)_9__162_1;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v20->__9__162_1, (int32_t)_9__162_1, v21, v22, v23, v24, v25, v26);
    }
    v27 = System_Linq_Enumerable__FirstOrDefault_object__52923832(
            v17,
            (System_Func_TSource__bool__o *)_9__162_1,
            (const MethodInfo_3278DB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    if ( v27 )
      klass = v27[1].klass;
    else
      klass = 0;
    effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !effectAssetData )
      goto LABEL_41;
    if ( klass )
      v31 = (System_String_o *)klass;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    Object_object__52624444 = AssetData__GetObject_object__52624444(
                                effectAssetData,
                                v31,
                                (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__52624444, 0, 0) && !this->fields.kind )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    effectAssetData = (AssetData_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_VoiceMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      v33 = (VoiceMaster_o *)effectAssetData;
      v35 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v40.fields.currentCryptoKey = v35;
      *(_QWORD *)&v40.fields.fakeValue = v34;
      effectAssetData = (AssetData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v40, 0);
      v36 = this->fields.playVoiceList;
      if ( v36 )
      {
        if ( !LODWORD(v36->max_length) )
          sub_1D0F314(effectAssetData);
        v37 = v36->m_Items[0];
        if ( v37 )
        {
          if ( v33 )
          {
            FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v33, (int32_t)effectAssetData, v37->fields.id, 0, 0);
            this->fields.firstPlayedVoiceFlag = FlagRequestNumber;
            if ( FlagRequestNumber >= 1 )
              this->fields.unSkippableFlag = 1;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_41:
    sub_1D0F30C(effectAssetData, v28);
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
  return (UnityEngine_GameObject_o *)Object_object__52624444;
}


void CombineResultEffectComponent__InitChangeInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 id; // x1
  __int64 v5; // x8
  int64_t v6; // x20
  int v7; // w23
  int v8; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v10; // q1
  __int64 v11; // x21
  __int128 v12; // q0
  int64_t v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int i; // w20
  SkillInfo_o *v21; // x8
  SkillInfo_o *v22; // x9
  SkillInfo_o *v23; // x8
  bool v24; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v28; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v30; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_4E7B922 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7B922 = 1;
  }
  v30 = 0;
  skillInfoList = 0;
  v28 = 0;
  tdInfo = 0;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
          if ( Instance )
          {
            v5 = *(_QWORD *)(Instance + 24);
            v6 = Instance;
            v7 = v5 - 1;
            if ( (int)v5 >= 1 )
            {
              v8 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_52;
                v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v11 = *(_QWORD *)(v6 + 8LL * v8 + 32);
                *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v27.fields.fakeValue = v10;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v26 = v27;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v26, 0);
                if ( !v11 )
                  goto LABEL_52;
                v12 = *(_OWORD *)(v11 + 32);
                v13 = Instance;
                *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
                *(_OWORD *)&v25.fields.fakeValue = v12;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v25, 0);
                if ( v13 == Instance )
                  break;
                if ( v7 == v8 )
                  goto LABEL_20;
                if ( (unsigned int)++v8 >= *(_DWORD *)(v6 + 24) )
LABEL_18:
                  sub_1D0F314(Instance);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v11;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, v11, v14, v15, v16, v17, v18, v19);
            }
LABEL_20:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v30, -1, -1, 1, 0, -1, 0);
                for ( i = 0; ; ++i )
                {
                  Instance = (int64_t)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    Instance = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 40LL) )
                    break;
                  if ( !skillInfoList )
                    goto LABEL_52;
                  if ( i >= LODWORD(skillInfoList->max_length) )
                    goto LABEL_18;
                  v21 = skillInfoList->m_Items[i];
                  if ( !v21 || !v30 )
                    goto LABEL_52;
                  if ( i >= LODWORD(v30->max_length) )
                    goto LABEL_18;
                  v22 = v30->m_Items[i];
                  if ( !v22 )
                    goto LABEL_52;
                  id = (unsigned int)v21->fields.id;
                  if ( *(_QWORD *)&v21->fields.id != *(_QWORD *)&v22->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v21->fields.lv,
                      0);
                    if ( !v30 )
                      goto LABEL_52;
                    if ( i >= LODWORD(v30->max_length) )
                      goto LABEL_18;
                    v23 = v30->m_Items[i];
                    if ( !v23 )
                      goto LABEL_52;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v23->fields.id,
                      v23->fields.lv,
                      0);
                  }
                }
                Instance = (int64_t)this->fields.baseUsrSvtData;
                if ( Instance )
                {
                  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0);
                  Instance = (int64_t)this->fields.resUsrSvtData;
                  if ( Instance )
                  {
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v28, -1, -1, 0, 0);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0);
                      if ( (Instance & 1) == 0 )
                      {
                        v24 = 0;
LABEL_50:
                        this->fields.treasureDeviceEnabled = v24;
                        return;
                      }
                      if ( tdInfo && v28 )
                      {
                        v24 = tdInfo->fields.id != v28->fields.id || tdInfo->fields.lv != v28->fields.lv;
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
    sub_1D0F30C(Instance, id);
  }
}


void CombineResultEffectComponent__InitCombineEffect(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Transform_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x1

  if ( (byte_4E7B8FB & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__InitCombineEffect_b__123_0__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    byte_4E7B8FB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                            0);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0);
  this->fields.effect = Value;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.effect, (int32_t)Value, v5, v6, v7, v8, v9, v10);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0);
  v11 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4E70C9E )
  {
    fsm = (PlayMakerFSM_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C9E = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    v16 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__123_0__,
      0);
    if ( v16 )
    {
      CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, v18, 0);
      return;
    }
LABEL_19:
    sub_1D0F30C(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v12);
  CombineResultEffectComponent__SetResultServantVoiceData(this, v19);
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
  BalanceConfig_c *v11; // x8
  int32_t v12; // w19

  if ( (byte_4E7B93B & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4E7B93B = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( v9 == v8->static_fields->HeroineLimitCountOrtinaxRefurbished )
    return 1;
  Instance = (AvalonSceneManager_o *)this->fields.baseUsrSvtData;
  if ( !Instance )
LABEL_21:
    sub_1D0F30C(Instance, v4);
  v10 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v11 = BalanceConfig_TypeInfo;
  v12 = v10;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return v12 == v11->static_fields->SpecialLimitCountPLD;
}


bool CombineResultEffectComponent__IsShowLimitUpInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_1D0F30C(0, method);
  return !LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0);
}


bool CombineResultEffectComponent__IsShowNextNpInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  int v4; // w0

  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    sub_1D0F30C(0, method);
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
  bool v9; // w0
  const MethodInfo *v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4E7B92A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7B92A = 1;
  }
  entity = 0;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  v4 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_20;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)costumeSkillInfoManager;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                        v13,
                                                                                        0);
  if ( !v6 )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v6,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_20:
    sub_1D0F30C(costumeSkillInfoManager, method);
  v9 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)costumeSkillInfoManager, 30, 0);
  return v4 >= 1
      && !v9
      && this->fields.skillShowIndex < v4
      && !CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, v10);
}


bool CombineResultEffectComponent__IsShowTreasureDeviceInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return !CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, method)
      && this->fields.treasureDeviceEnabled;
}


void CombineResultEffectComponent__LoadCombineEffect(
        CombineResultEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  CombineRootComponent_c *v13; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x22

  if ( (byte_4E7B8FC & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&CombineResultEffectComponent_TypeInfo);
    sub_1D0F0B4(&CombineRootComponent_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass124_0__LoadCombineEffect_b__0__);
    sub_1D0F0B4(&CombineResultEffectComponent___c__DisplayClass124_0_TypeInfo);
    byte_4E7B8FC = 1;
  }
  v4 = sub_1D0F300(CombineResultEffectComponent___c__DisplayClass124_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass124_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass124_0_o *)v4,
    0);
  if ( !v4 )
    sub_1D0F30C(v5, v6);
  *(_QWORD *)(v4 + 16) = action;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)action, v7, v8, v9, v10, v11, v12);
  if ( CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData )
    goto LABEL_10;
  v13 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v13 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v13->static_fields->COMBINE_ASSET_PATH;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v4,
    Method_CombineResultEffectComponent___c__DisplayClass124_0__LoadCombineEffect_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v15, 1, 0, 0) )
LABEL_10:
    ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
}


void CombineResultEffectComponent__NameRevealCrossFade(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UICharaGraphTexture_o *nameRevealCard; // x0

  nameRevealCard = this->fields.nameRevealCard;
  if ( !nameRevealCard )
    sub_1D0F30C(0, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0);
}


void CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4E7B938 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_5491/*"END_ANIMATION"*/);
    byte_4E7B938 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1D0F30C(0, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5491/*"END_ANIMATION"*/, 0);
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
  int32_t v8; // w21
  System_String_o *LimitCountSealedDialogMessage; // x0
  LimitCountSealDialogComponent_o *v10; // x21
  System_String_o *v11; // x20
  System_String_o *v12; // x22
  LimitCountSealDialogComponent_CallbackFunc_o *v13; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v2 = (Il2CppObject *)this;
  if ( (byte_4E7B934 & 1) == 0 )
  {
    sub_1D0F0B4(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1D0F0B4(&StringLiteral_8374/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4E7B934 = 1;
  }
  monitor = v2[11].monitor;
  if ( !monitor )
    goto LABEL_14;
  v5 = monitor[10];
  v4 = monitor[11];
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v5;
  *(_QWORD *)&v14.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[11].monitor;
  if ( !v6 )
    goto LABEL_14;
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v6[6], 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_14;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v7,
                                    v8 + 1,
                                    0);
  v10 = (LimitCountSealDialogComponent_o *)v2[8].monitor;
  v11 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8374/*"LIMIT_COUNT_SEALED_TITLE"*/, 0);
  v13 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1D0F300(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v13,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0);
  if ( !v10 )
LABEL_14:
    sub_1D0F30C(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v10, v12, v11, v13, 0);
}


bool CombineResultEffectComponent__OpenNotification(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  UserServantEntity_o *v4; // x0
  __int64 costumeOverrideTransformVal; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  bool v12; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t ServantId; // w0
  int32_t v19; // w1
  int32_t AscensionAfterDialogId; // w0
  int32_t v21; // w21
  int32_t v22; // w22
  int32_t v23; // w23
  const MethodInfo *v24; // x3
  Il2CppObject *NameFromMessageId; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v27; // x0
  System_String_o *v28; // x22
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  System_Action_o *v31; // x23
  int32_t v32; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4E7B931 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass183_0__OpenNotification_b__0__);
    sub_1D0F0B4(&CombineResultEffectComponent___c__DisplayClass183_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11753/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7B931 = 1;
  }
  v3 = sub_1D0F300(CombineResultEffectComponent___c__DisplayClass183_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass183_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass183_0_o *)v3,
    0);
  if ( !v3 )
    goto LABEL_24;
  *(_QWORD *)(v3 + 24) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v33.fields.currentCryptoKey = v17;
      *(_QWORD *)&v33.fields.fakeValue = v16;
      *(_DWORD *)(v3 + 20) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v33, 0);
      if ( this->fields.kind == 15 )
      {
        *(_DWORD *)(v3 + 20) = this->fields.costumeId;
        costumeOverrideTransformVal = (unsigned int)this->fields.costumeOverrideTransformVal;
      }
      else
      {
        costumeOverrideTransformVal = 0xFFFFFFFFLL;
      }
      v4 = this->fields.resUsrSvtData;
      if ( v4 )
      {
        ServantId = UserServantEntity__GetServantId(v4, costumeOverrideTransformVal, 0);
        v19 = *(_DWORD *)(v3 + 20);
        *(_DWORD *)(v3 + 16) = ServantId;
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(ServantId, v19, 0);
        v32 = AscensionAfterDialogId;
        if ( AscensionAfterDialogId == -1 )
          return 0;
        v21 = AscensionAfterDialogId;
        v23 = *(_DWORD *)(v3 + 16);
        v22 = *(_DWORD *)(v3 + 20);
        if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
        if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v23, v22, 0) )
          return 0;
        NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                              this,
                                              v21,
                                              *(_DWORD *)(v3 + 20),
                                              v24);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v27 = System_Int32__ToString((int32_t)&v32, 0);
        v28 = System_String__Concat_65562772((System_String_o *)StringLiteral_11753/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v27, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v29 = LocalizationManager__Get(v28, 0);
        v30 = System_String__Format(v29, NameFromMessageId, 0);
        v31 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(
          v31,
          (Il2CppObject *)v3,
          Method_CombineResultEffectComponent___c__DisplayClass183_0__OpenNotification_b__0__,
          0);
        if ( Instance )
        {
          v12 = 1;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v30,
            v31,
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
    sub_1D0F30C(v4, costumeOverrideTransformVal);
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

  if ( (byte_4E7B920 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4E7B920 = 1;
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
                                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
      sub_1D0F30C(IsNullOrEmpty, v8);
    }
  }
  else
  {
    ActionExtensions__Call(playEndAction, 0);
  }
}


void CombineResultEffectComponent__PlayVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  int32_t v21; // w2
  ServantVoiceData_array *v22; // x3
  const MethodInfo *v23; // x6
  System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x4
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v28; // x22
  SePlayer_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct ServantVoiceData_array *v36; // x8
  __int64 v37; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *StartPerformance; // x0
  const MethodInfo *v39; // x3

  v8 = this;
  if ( (byte_4E7B91F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_EndPlay__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    this = (CombineResultEffectComponent_o *)sub_1D0F0B4(&SoundManager_TypeInfo);
    byte_4E7B91F = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_26;
    playCnt = v8->fields.playCnt;
    max_length = playVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v12 = playVoiceList->m_Items[playCnt];
      if ( !v12 )
        goto LABEL_26;
      id = v12->fields.id;
      v8->fields.vcName = id;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.vcName, (int32_t)id, v2, v3, v4, v5, v6, v7);
      v14 = v8->fields.playVoiceList;
      if ( !v14 )
        goto LABEL_26;
      v15 = v8->fields.playCnt;
      if ( (unsigned int)v15 < LODWORD(v14->max_length) )
      {
        this = (CombineResultEffectComponent_o *)v14->m_Items[v15];
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
        friendshipExceedResultWindow = (int32_t)this->fields.friendshipExceedResultWindow;
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
        currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.currentFigureCollectList;
        if ( currentFigureCollectList )
        {
          v20 = FadeTime;
          if ( System_Linq_Enumerable__Any_object_(
                 currentFigureCollectList,
                 (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
          {
            if ( System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                   (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
              && System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                   (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              afterFigureCollectList = v8->fields.afterFigureCollectList;
            }
            else
            {
              afterFigureCollectList = v8->fields.currentFigureCollectList;
            }
            CombineResultEffectComponent__SetStandFigureFace(
              v8,
              m_CancellationTokenSource_high,
              v20,
              v21,
              v22,
              afterFigureCollectList,
              friendshipExceedResultWindow,
              v23);
          }
        }
        asstName = v8->fields.asstName;
        vcName = v8->fields.vcName;
        volume = v8->fields.volume;
        v28 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)v8, Method_CombineResultEffectComponent_EndPlay__, 0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v29 = SoundManager__playVoice_42894660(asstName, vcName, volume, v28, 0, 0);
        v8->fields.player = v29;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.player, (int32_t)v29, v30, v31, v32, v33, v34, v35);
        v36 = v8->fields.playVoiceList;
        if ( !v36 )
          goto LABEL_26;
        v37 = v8->fields.playCnt;
        if ( (unsigned int)v37 < LODWORD(v36->max_length) )
        {
          this = (CombineResultEffectComponent_o *)v36->m_Items[v37];
          if ( this )
          {
            StartPerformance = ServantVoiceData__get_StartPerformance((ServantVoiceData_o *)this, 0);
            CombineResultEffectComponent__PlayPerformance(v8, StartPerformance, 0, v39);
            ++v8->fields.playCnt;
            return;
          }
LABEL_26:
          sub_1D0F30C(this, method);
        }
      }
    }
    sub_1D0F314(this);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *Master_object; // x24
  CommonUI_o *v27; // x22
  Il2CppObject *v28; // x0
  UserServantCollectionEntity_o *v29; // x20
  CommonUI_o *v30; // x22
  ServantStatusDialog_EndDelegate_o *v31; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4E7B937 & 1) == 0 )
  {
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass189_0__ProfileChangeDecideAction_b__0__);
    sub_1D0F0B4(&CombineResultEffectComponent___c__DisplayClass189_0_TypeInfo);
    byte_4E7B937 = 1;
  }
  entity = 0;
  v11 = sub_1D0F300(CombineResultEffectComponent___c__DisplayClass189_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass189_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass189_0_o *)v11,
    0);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)finishCallback, v20, v21, v22, v23, v24, v25);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4E710BF )
    {
      sub_1D0F0B4(&NetworkManager_TypeInfo);
      byte_4E710BF = 1;
    }
    Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v27 )
      {
        CommonUI__maskFadein(v27, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          Instance = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( Instance )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 0, 0);
            v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v29 = entity;
            v30 = (CommonUI_o *)v28;
            v31 = (ServantStatusDialog_EndDelegate_o *)sub_1D0F300(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v31,
              (Il2CppObject *)v11,
              Method_CombineResultEffectComponent___c__DisplayClass189_0__ProfileChangeDecideAction_b__0__,
              0);
            if ( v30 )
            {
              CommonUI__OpenServantStatusDialog_32098588(v30, 33, v29, limitCount, v31, 0);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_1D0F30C(Instance, v13);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_32087272(Instance, *(System_Action_o **)(v11 + 24), 0);
}


void CombineResultEffectComponent__ReleaseVoiceData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4E7B92C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4E7B92C = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.playVoiceList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceList, 0, v2, v3, v4, v5, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1D0F30C(0, v10);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields.asstName, 0);
  }
}


void CombineResultEffectComponent__ResetTransformData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_String_StaticFields *v17; // x8
  struct System_String_o *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4E7B919 & 1) == 0 )
  {
    sub_1D0F0B4(&string_TypeInfo);
    byte_4E7B919 = 1;
  }
  *(_WORD *)&this->fields.isTransformServant = 0;
  this->fields.transformedServant = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.transformedServant, 0, v2, v3, v4, v5, v6, v7);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.multiDisplayTitleBefore = static_fields->Empty;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.multiDisplayTitleBefore,
    (int32_t)Empty,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = string_TypeInfo->static_fields;
  v18 = v17->Empty;
  this->fields.multiDisplayTitleAfter = v17->Empty;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.multiDisplayTitleAfter,
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
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v18; // w23
  CombineResultEffectComponent_o *ServantId; // x0
  const MethodInfo *v20; // x3
  char v21; // w24
  System_Collections_Generic_List_object__o *v22; // x25
  _BOOL8 v23; // x0
  __int64 v24; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v27; // x1
  int32_t portraitImageId; // w27
  UnityEngine_GameObject_o *v29; // x26
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Component_o *v39; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v41; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  struct System_Int32_array *v47; // x8
  int max_length; // w9
  int v49; // s11
  int v50; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  UnityEngine_Transform_o *v54; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v57; // x28
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  bool v70; // w20
  UnityEngine_GameObject_o *v71; // x21
  const MethodInfo *v72; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v74; // x23
  System_Collections_Generic_List_object__o *v75; // x21
  StandFigureCollect_o *v76; // x22
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  float v87; // s8
  struct System_Int32_array *multiFace; // x23
  int32_t masterDataBytes; // w20
  int32_t m_CancellationTokenSource_high; // w21
  struct ServantVoiceData_array *playVoiceList; // x8
  float FadeTime; // s0
  struct ServantVoiceData_array *v93; // x8
  ServantVoiceData_o *v94; // x8
  unsigned __int64 v95; // x22
  bool v96; // [xsp+24h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+40h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7B90D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StandFigureCollect_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8535/*"LimitUpResSvtNodeName"*/);
    byte_4E7B90D = 1;
  }
  entity = 0;
  memset(&v98, 0, sizeof(v98));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8535/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v8 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v8,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_83;
  v10 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)UserServantEntity__GetServantId(this->fields.resUsrSvtData, -1, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_83;
  v12 = (int)Instance;
  v14 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v13 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v100.fields.currentCryptoKey = v14;
  *(_QWORD *)&v100.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v100, 0);
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_83;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v12,
                                 v15,
                                 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v12, ServantLimitCountSealAfter, 0);
  if ( !this->fields.resUsrSvtData
    || (v18 = (int)Instance,
        v96 = isForceNormalFace,
        ServantId = (CombineResultEffectComponent_o *)UserServantEntity__GetServantId(this->fields.resUsrSvtData, -1, 0),
        Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                      ServantId,
                                      (int32_t)ServantId,
                                      v18,
                                      v20),
        !MasterData_object) )
  {
LABEL_83:
    sub_1D0F30C(Instance, v7);
  }
  v21 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v12,
                                v18,
                                2,
                                0);
  if ( Instance
    && (v22 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v97,
      v22,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v98 = v97;
    while ( 1 )
    {
      v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v98,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v23 )
        break;
      if ( !StandFigureNode )
        sub_1D0F30C(v23, v24);
      current = (SvtMultiPortraitEntity_o *)v98.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      if ( !current )
        sub_1D0F30C(gameObject, v27);
      portraitImageId = current->fields.portraitImageId;
      v29 = gameObject;
      original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v27);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v29,
                           portraitImageId,
                           1,
                           0,
                           0,
                           0,
                           v21 & 1,
                           -1,
                           original,
                           0);
      v39 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1D0F30C(0, v32);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (int32_t)current,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      transform = UnityEngine_Component__get_transform(v39, 0);
      if ( !transform )
        sub_1D0F30C(0, v41);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        v43 = UnityEngine_Component__get_transform(v39, 0);
        if ( !v43 )
          sub_1D0F30C(0, v44);
        localPosition = UnityEngine_Transform__get_localPosition(v43, 0);
        v47 = current->fields.commonPosition;
        if ( !v47 )
          sub_1D0F30C(v45, v46);
        max_length = v47->max_length;
        if ( !max_length )
          sub_1D0F314(v45);
        if ( max_length == 1 )
          sub_1D0F314(v45);
        v50 = v47->m_Items[0];
        v49 = v47->m_Items[1];
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        v54 = UnityEngine_Component__get_transform(v39, 0);
        if ( !v54 )
          sub_1D0F30C(0, v55);
        v102.fields.x = x + (float)v50;
        v102.fields.y = y + (float)v49;
        v102.fields.z = z;
        UnityEngine_Transform__set_localPosition(v54, v102, 0);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v39,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v57 = (StandFigureCollect_o *)sub_1D0F300(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v57, current, (UIStandFigureR_o *)v39, 0);
      if ( !afterFigureCollectList )
        sub_1D0F30C(v58, v59);
      items = afterFigureCollectList->fields._items;
      v67 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1D0F30C(v58, v59);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v57,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v69[4] = (Il2CppClass *)v57;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)v57, v60, v61, v62, v63, v64, v65);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v98,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    v70 = v96;
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_83;
    v71 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
    VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v72);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_42036172(
                                  v71,
                                  v12,
                                  v18,
                                  1,
                                  0,
                                  1,
                                  0,
                                  v21 & 1,
                                  -1,
                                  VoiceEffectPrefab,
                                  0);
    if ( !Instance )
      goto LABEL_83;
    v74 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_83;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0);
    v75 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v76 = (StandFigureCollect_o *)sub_1D0F300(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v76, 0, v74, 0);
    if ( !v75 )
      goto LABEL_83;
    v83 = v75->fields._items;
    v84 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v75->fields._version;
    if ( !v83 )
      goto LABEL_83;
    v85 = v75->fields._size;
    v70 = isForceNormalFace;
    if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v75,
        (Il2CppObject *)v76,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = &v83->obj.klass + v85;
      v75->fields._size = v85 + 1;
      v86[4] = (Il2CppClass *)v76;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v86 + 4), (int32_t)v76, v77, v78, v79, v80, v81, v82);
    }
  }
  v87 = 0.0;
  if ( v70
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
    v93 = this->fields.playVoiceList;
    if ( !v93 )
      goto LABEL_83;
    if ( !LODWORD(v93->max_length) )
LABEL_84:
      sub_1D0F314(Instance);
    v94 = v93->m_Items[0];
    if ( !v94 )
      goto LABEL_83;
    multiFace = v94->fields.multiFace;
    v87 = FadeTime;
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_326FA04 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v95 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        goto LABEL_83;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v95,
                                    (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        goto LABEL_83;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( multiFace )
      {
        if ( v95 >= LODWORD(multiFace->max_length) )
          goto LABEL_84;
        if ( !Instance )
          goto LABEL_83;
        UIStandFigureR__SetFace((UIStandFigureR_o *)Instance, multiFace->m_Items[v95], 0.0, 0);
      }
      else
      {
        if ( !Instance )
          goto LABEL_83;
        UIStandFigureR__SetFace_45417412(
          (UIStandFigureR_o *)Instance,
          m_CancellationTokenSource_high,
          masterDataBytes,
          0,
          v87,
          0);
      }
      if ( (__int64)++v95 >= System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                               (const MethodInfo_326FA04 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
        return;
    }
  }
}


void CombineResultEffectComponent__SetAppendSkillCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t currentSkillId,
        int32_t currentSkillLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  CombineRootComponent_c *v25; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4E7B8F7 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__119_0__);
    sub_1D0F0B4(&CombineRootComponent_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4E7B8F7 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    currentSkillId,
    currentSkillLv,
    (System_String_o *)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v13, v14, v15, v16, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
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
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v25 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v25->static_fields->COMBINE_ASSET_PATH;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__119_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v27, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t FigureImageLimitCount; // w0
  const MethodInfo *v9; // x7

  if ( (byte_4E7B906 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_3084/*"BaseSvtNodeName"*/);
    byte_4E7B906 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1D0F30C(0, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3084/*"BaseSvtNodeName"*/,
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
  int32_t v8; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v10; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v2 = this;
  if ( (byte_4E7B90B & 1) == 0 )
  {
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1D0F0B4(&StringLiteral_8534/*"LimitUpBaseSvtNodeName"*/);
    byte_4E7B90B = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1D0F30C(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8534/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v10);
}


void CombineResultEffectComponent__SetCardParam(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 svtResultInfoWindow; // x0
  System_String_o *v5; // x20
  UnityEngine_Transform_o *transform; // x0
  UIExtrusionLabel_o *v7; // x20
  System_String_o *v8; // x20
  UnityEngine_Transform_o *v9; // x0
  UIExtrusionLabel_o *v10; // x20
  struct UserServantEntity_o *v11; // x8
  __int64 v12; // x20
  __int64 v13; // x21
  struct UserServantEntity_o *v14; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  struct UserServantEntity_o *v17; // x8
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v22; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  int32_t v25; // w20
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  System_Collections_ICollection_o **p_playVoiceList; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x1
  float v35; // s8
  _DWORD *data; // x23
  int32_t v37; // w20
  unsigned int v38; // w22
  int32_t v39; // w0
  const MethodInfo *v40; // x2
  __int64 *v41; // x8
  __int64 *v42; // x8
  System_String_o *v43; // x20
  UnityEngine_Transform_o *v44; // x0
  UIExtrusionLabel_o *v45; // x20
  System_String_o *v46; // x20
  UnityEngine_Transform_o *v47; // x0
  UIExtrusionLabel_o *v48; // x20
  struct UserServantEntity_o *v49; // x20
  struct UserServantEntity_o *v50; // x8
  int32_t Rarity; // w0
  UserServantEntity_o *v52; // x21
  int v53; // w20
  UserServantEntity_o *v54; // x20
  int32_t v55; // w0
  UserServantEntity_o *v56; // x21
  int v57; // w20
  const MethodInfo *v58; // x2
  __int64 *v59; // x20
  __int64 *v60; // x8
  struct ServantVoiceData_array *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  unsigned __int64 v72; // x21
  __int64 v73; // x25
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *resUsrSvtData; // x9
  bool v76; // w2
  CombineResultEffectComponent_o *v77; // x0
  System_String_o *v78; // x1
  bool v79; // w2
  CombineResultEffectComponent_o *v80; // x0
  System_String_o *v81; // x1
  System_String_o *v82; // x20
  UnityEngine_Transform_o *v83; // x0
  UnityEngine_Component_o *v84; // x20
  float Value; // s0
  float v86; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v88; // x20
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 *v95; // x8
  __int64 v96; // x1
  GrandQuestFolderBoardItem_o *v97; // x0
  System_String_o *v98; // x20
  UnityEngine_Transform_o *v99; // x0
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x2
  __int64 v103; // x20
  const MethodInfo *v104; // x2
  const MethodInfo *v105; // x2
  const MethodInfo *v106; // x2
  Il2CppObject *v107; // x21
  EventDelegate_Callback_o *v108; // x22
  EventDelegate_o *v109; // x20
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  __int64 v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  __int64 v119; // x8
  const MethodInfo *v120; // x3
  const MethodInfo *v121; // x2
  System_Collections_ICollection_o *v122; // x8
  float FadeTime; // s0
  System_Collections_ICollection_o *v124; // x8
  System_Collections_ICollection_c *klass; // x8
  __int64 v126; // [xsp+0h] [xbp-60h] BYREF
  __int64 v127; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7B8FE & 1) == 0 )
  {
    sub_1D0F0B4(&EventDelegate_Callback_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetCardParam_b__126_0__);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1D0F0B4(&EventDelegate_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&StringLiteral_4792/*"CostumeName"*/);
    sub_1D0F0B4(&StringLiteral_3084/*"BaseSvtNodeName"*/);
    sub_1D0F0B4(&StringLiteral_17495/*"bit_result_120"*/);
    sub_1D0F0B4(&StringLiteral_17502/*"bit_result_extraskill02"*/);
    sub_1D0F0B4(&StringLiteral_17511/*"bit_result_nobledeliverance"*/);
    sub_1D0F0B4(&StringLiteral_12485/*"START_ANIMATION"*/);
    sub_1D0F0B4(&StringLiteral_17499/*"bit_result_command_card_exceed"*/);
    sub_1D0F0B4(&StringLiteral_17508/*"bit_result_limitbreak"*/);
    sub_1D0F0B4(&StringLiteral_17503/*"bit_result_friendship_exceed"*/);
    sub_1D0F0B4(&StringLiteral_11523/*"ResMaxLvExceedNodeName"*/);
    sub_1D0F0B4(&StringLiteral_17516/*"bit_result_skillrank"*/);
    sub_1D0F0B4(&StringLiteral_17506/*"bit_result_grail_02"*/);
    sub_1D0F0B4(&StringLiteral_17517/*"bit_result_skillup"*/);
    sub_1D0F0B4(&StringLiteral_4934/*"CrtMaxLvExceedNodeName"*/);
    sub_1D0F0B4(&StringLiteral_17512/*"bit_result_powerup"*/);
    sub_1D0F0B4(&StringLiteral_13230/*"StartAnimationName"*/);
    sub_1D0F0B4(&StringLiteral_17505/*"bit_result_grail_01"*/);
    sub_1D0F0B4(&StringLiteral_17501/*"bit_result_extraskill01"*/);
    sub_1D0F0B4(&StringLiteral_17515/*"bit_result_skilldeliverance"*/);
    sub_1D0F0B4(&StringLiteral_4935/*"CrtMaxLvNodeName"*/);
    sub_1D0F0B4(&StringLiteral_11524/*"ResMaxLvNodeName"*/);
    sub_1D0F0B4(&StringLiteral_13376/*"SvtEqCardScale"*/);
    byte_4E7B8FE = 1;
  }
  v126 = 0;
  v127 = 0;
  switch ( this->fields.kind )
  {
    case 0:
      CombineResultEffectComponent__SetLevelUpSvtFigure(this, method);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      SvtCombineResultWindowComponent__setBefResultState(
        (SvtCombineResultWindowComponent_o *)svtResultInfoWindow,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        0);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)svtResultInfoWindow,
        this->fields.combineStatusDisp,
        0);
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = UserServantEntity__isLevelMax((UserServantEntity_o *)svtResultInfoWindow, 0);
      if ( (svtResultInfoWindow & 1) == 0 )
        goto LABEL_118;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_173;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_173;
      if ( baseUsrSvtData->fields.exp == resUsrSvtData->fields.exp )
LABEL_118:
        LODWORD(method) = this->fields.successInfo;
      else
LABEL_93:
        LODWORD(method) = 4;
      goto LABEL_136;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_4935/*"CrtMaxLvNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v5 = (System_String_o *)svtResultInfoWindow;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(transform, v5, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v7 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v127) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v127 + 4, 0);
      if ( !v7 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v7, (System_String_o *)svtResultInfoWindow, 0);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_11524/*"ResMaxLvNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v8 = (System_String_o *)svtResultInfoWindow;
      v9 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v9, v8, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v10 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v127) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v127, 0);
      if ( !v10 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v10, (System_String_o *)svtResultInfoWindow, 0);
      v11 = this->fields.baseUsrSvtData;
      if ( !v11 )
        goto LABEL_173;
      v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v128.fields.currentCryptoKey = v13;
      *(_QWORD *)&v128.fields.fakeValue = v12;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v128, 0);
      v14 = this->fields.baseUsrSvtData;
      if ( !v14 )
        goto LABEL_173;
      v15 = svtResultInfoWindow;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14->fields.limitCount, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      svtResultInfoWindow = ImageLimitCount__GetImageLimitCount(v15, v16, 0);
      v17 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = svtResultInfoWindow;
      if ( !v17 )
        goto LABEL_173;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v17->fields.svtId, 0);
      v18 = this->fields.resUsrSvtData;
      if ( !v18 )
        goto LABEL_173;
      v19 = svtResultInfoWindow;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v18->fields.limitCount, 0);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v19, v20, 0);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v25 = resSvtNameData != 0;
      if ( isLimitUpSuppression )
        goto LABEL_27;
      if ( this->fields.oldImgLimitCnt != ImageLimitCount )
        goto LABEL_71;
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtResultInfoWindow, 0) )
      {
LABEL_27:
        this->fields.isChangeCardImg = 0;
        LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v22);
        p_playVoiceList = (System_Collections_ICollection_o **)&this->fields.playVoiceList;
        this->fields.playVoiceList = LimitUpSvtVoiceList;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&this->fields.playVoiceList,
          (int32_t)LimitUpSvtVoiceList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v34);
        v35 = 0.0;
        if ( this->fields.isLimitUpSuppression
          || (svtResultInfoWindow = BasicHelper__IsNullOrEmpty(*p_playVoiceList, 0), (svtResultInfoWindow & 1) != 0) )
        {
          data = 0;
          v37 = 0;
          v38 = 0;
        }
        else
        {
          v122 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v122[1].monitor) )
            goto LABEL_174;
          svtResultInfoWindow = (__int64)v122[2].klass;
          if ( !svtResultInfoWindow )
            goto LABEL_173;
          v38 = *(_DWORD *)(svtResultInfoWindow + 28);
          v37 = *(_DWORD *)(svtResultInfoWindow + 56);
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)svtResultInfoWindow, 0);
          v124 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v124[1].monitor) )
LABEL_174:
            sub_1D0F314(svtResultInfoWindow);
          klass = v124[2].klass;
          if ( !klass )
            goto LABEL_173;
          data = klass->_1.byval_arg.data;
          v35 = FadeTime;
        }
        v39 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_326FA04 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( data )
        {
          method = (const MethodInfo *)(&dword_0 + 1);
          if ( v39 != *(_DWORD *)((char *)&off_18 + (_QWORD)data) || v39 <= 0 )
            goto LABEL_136;
        }
        else if ( v39 < 1 )
        {
LABEL_135:
          LODWORD(method) = 1;
          goto LABEL_136;
        }
        v72 = 0;
        if ( v39 <= 1 )
          v73 = 1;
        else
          v73 = (unsigned int)v39;
        while ( 1 )
        {
          svtResultInfoWindow = (__int64)this->fields.currentFigureCollectList;
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = (__int64)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                                           v72,
                                           (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = *(_QWORD *)(svtResultInfoWindow + 24);
          if ( data )
          {
            if ( v72 >= *(unsigned int *)((char *)&off_18 + (_QWORD)data) )
              goto LABEL_174;
            if ( !svtResultInfoWindow )
              break;
            LODWORD(method) = data[v72 + 8];
          }
          else
          {
            method = (const MethodInfo *)v38;
            if ( !svtResultInfoWindow )
              break;
          }
          UIStandFigureR__SetFace_45417412((UIStandFigureR_o *)svtResultInfoWindow, (int32_t)method, v37, 0, v35, 0);
          if ( v73 == ++v72 )
            goto LABEL_135;
        }
LABEL_173:
        sub_1D0F30C(svtResultInfoWindow, method);
      }
LABEL_71:
      this->fields.isChangeCardImg = 1;
      v61 = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v22);
      this->fields.playVoiceList = v61;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&this->fields.playVoiceList,
        (int32_t)v61,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v68);
      CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v69);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, v25, v70);
      CombineResultEffectComponent__setResultSvtGraphCard(this, v25, v71);
      LODWORD(method) = 2;
LABEL_136:
      svtResultInfoWindow = (__int64)CombineResultEffectComponent__GetStartAnimationName(this, (int32_t)method, v40);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v103 = svtResultInfoWindow;
      svtResultInfoWindow = (__int64)this->fields.fsm;
LABEL_167:
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13230/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      *(_QWORD *)(svtResultInfoWindow + 56) = v103;
      v97 = (GrandQuestFolderBoardItem_o *)(svtResultInfoWindow + 56);
      LODWORD(v96) = v103;
LABEL_170:
      sub_1D0F058(v97, v96, v89, v90, v91, v92, v93, v94);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtResultInfoWindow, (System_String_o *)StringLiteral_12485/*"START_ANIMATION"*/, 0);
      return;
    case 2:
      v76 = 1;
      v77 = this;
      v78 = (System_String_o *)StringLiteral_17517/*"bit_result_skillup"*/;
      goto LABEL_97;
    case 3:
      v42 = &StringLiteral_17515/*"bit_result_skilldeliverance"*/;
      goto LABEL_96;
    case 4:
      v79 = 1;
      v80 = this;
      v81 = (System_String_o *)StringLiteral_17517/*"bit_result_skillup"*/;
      goto LABEL_101;
    case 5:
      v41 = &StringLiteral_17511/*"bit_result_nobledeliverance"*/;
      goto LABEL_100;
    case 6:
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_3084/*"BaseSvtNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v82 = (System_String_o *)svtResultInfoWindow;
      v83 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v83, v82, 1, 0);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v84 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13376/*"SvtEqCardScale"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)svtResultInfoWindow, 0);
      if ( !v84 )
        goto LABEL_173;
      v86 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v84, 0);
      svtResultInfoWindow = (__int64)CharaGraphManager__CreateTexturePrefab_42022848(
                                       gameObject,
                                       this->fields.resUsrSvtData,
                                       10,
                                       0,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v88 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v129.fields.z = 0.0;
      v129.fields.x = -50.0;
      v129.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtResultInfoWindow, v129, 0);
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(v88, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v130.fields.x = v86;
      v130.fields.y = v86;
      v130.fields.z = v86;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)svtResultInfoWindow, v130, 0);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 1, 0);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      SvtCombineResultWindowComponent__setBefSvtEqResultState(
        (SvtCombineResultWindowComponent_o *)svtResultInfoWindow,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        this->fields.normalExp,
        this->fields.addTotalExp,
        0);
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtResultInfoWindow, 0) )
        goto LABEL_118;
      goto LABEL_93;
    case 7:
    case 0x15:
      v42 = &StringLiteral_17516/*"bit_result_skillrank"*/;
LABEL_96:
      v78 = (System_String_o *)*v42;
      v77 = this;
      v76 = 0;
LABEL_97:
      CombineResultEffectComponent__SetCardParam_Skill(v77, v78, v76, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v41 = &StringLiteral_17516/*"bit_result_skillrank"*/;
LABEL_100:
      v81 = (System_String_o *)*v41;
      v80 = this;
      v79 = 0;
LABEL_101:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v80, v81, v79, v2);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13230/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v95 = &StringLiteral_17517/*"bit_result_skillup"*/;
      goto LABEL_127;
    case 0xB:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13230/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v95 = &StringLiteral_17512/*"bit_result_powerup"*/;
LABEL_127:
      v96 = *v95;
      *(_QWORD *)(svtResultInfoWindow + 56) = *v95;
      v97 = (GrandQuestFolderBoardItem_o *)(svtResultInfoWindow + 56);
      goto LABEL_170;
    case 0xC:
    case 0x16:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 2, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_4934/*"CrtMaxLvExceedNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v43 = (System_String_o *)svtResultInfoWindow;
      v44 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v44, v43, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v45 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v126) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v126 + 4, 0);
      if ( !v45 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v45, (System_String_o *)svtResultInfoWindow, 0);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_11523/*"ResMaxLvExceedNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v46 = (System_String_o *)svtResultInfoWindow;
      v47 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v47, v46, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v48 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v126) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v126, 0);
      if ( !v48 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v48, (System_String_o *)svtResultInfoWindow, 0);
      v49 = this->fields.baseUsrSvtData;
      if ( !v49 )
        goto LABEL_173;
      if ( v49->fields.exceedCount )
        goto LABEL_55;
      v50 = this->fields.resUsrSvtData;
      if ( !v50 )
        goto LABEL_173;
      if ( v50->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_55:
      Rarity = UserServantEntity__GetRarity(v49, 0, 0);
      svtResultInfoWindow = UserServantEntity__GetFrameType(v49, Rarity, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v52 = this->fields.resUsrSvtData;
      v53 = svtResultInfoWindow;
      svtResultInfoWindow = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      if ( !v52 )
        goto LABEL_173;
      svtResultInfoWindow = UserServantEntity__GetFrameType(v52, svtResultInfoWindow, 0);
      if ( v53 != (_DWORD)svtResultInfoWindow )
        this->fields.isChangeCardImg = 1;
      v54 = this->fields.baseUsrSvtData;
      if ( !v54 )
        goto LABEL_173;
      v55 = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      svtResultInfoWindow = UserServantEntity__GetRarityIcon(v54, v55, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v56 = this->fields.resUsrSvtData;
      v57 = svtResultInfoWindow;
      svtResultInfoWindow = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      if ( !v56 )
        goto LABEL_173;
      if ( v57 != UserServantEntity__GetRarityIcon(v56, svtResultInfoWindow, 0) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        v59 = &StringLiteral_17508/*"bit_result_limitbreak"*/;
      }
      else
      {
        if ( !this->fields.isChangeCardImg )
        {
          v59 = &StringLiteral_17505/*"bit_result_grail_01"*/;
LABEL_152:
          svtResultInfoWindow = (__int64)this->fields.fsm;
          if ( svtResultInfoWindow )
          {
            v103 = *v59;
            goto LABEL_167;
          }
          goto LABEL_173;
        }
        v59 = &StringLiteral_17506/*"bit_result_grail_02"*/;
      }
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v58);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v121);
      goto LABEL_152;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v60 = &StringLiteral_17503/*"bit_result_friendship_exceed"*/;
      goto LABEL_166;
    case 0xF:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_4792/*"CostumeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v98 = (System_String_o *)svtResultInfoWindow;
      v99 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v99, v98, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UILabel__set_text((UILabel_o *)svtResultInfoWindow, this->fields.costumeName, 0);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v100);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v101);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v102);
      goto LABEL_135;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v60 = &StringLiteral_17499/*"bit_result_command_card_exceed"*/;
      goto LABEL_166;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v104);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v105);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v106);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v60 = (__int64 *)&StringLiteral_17495/*"bit_result_120"*/;
LABEL_166:
      v103 = *v60;
      goto LABEL_167;
    case 0x19:
      svtResultInfoWindow = (__int64)this->fields.effect;
      if ( svtResultInfoWindow )
      {
        svtResultInfoWindow = (__int64)UnityEngine_GameObject__get_gameObject(
                                         (UnityEngine_GameObject_o *)svtResultInfoWindow,
                                         0);
        if ( svtResultInfoWindow )
        {
          v107 = UnityEngine_GameObject__AddComponent_object_(
                   (UnityEngine_GameObject_o *)svtResultInfoWindow,
                   (const MethodInfo_32A835C *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
          v108 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v108,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_b__126_0__,
            0);
          v109 = (EventDelegate_o *)sub_1D0F300(EventDelegate_TypeInfo);
          EventDelegate___ctor_50674352(v109, v108, 0);
          if ( v107 )
          {
            svtResultInfoWindow = (__int64)v107[2].klass;
            if ( svtResultInfoWindow )
            {
              v116 = *(_QWORD *)(svtResultInfoWindow + 16);
              v117 = Method_System_Collections_Generic_List_EventDelegate__Add__;
              ++*(_DWORD *)(svtResultInfoWindow + 28);
              if ( v116 )
              {
                v118 = *(int *)(svtResultInfoWindow + 24);
                if ( (unsigned int)v118 >= *(_DWORD *)(v116 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                    (Il2CppObject *)v109,
                    *(const MethodInfo_395C410 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
                }
                else
                {
                  v119 = v116 + 8 * v118;
                  *(_DWORD *)(svtResultInfoWindow + 24) = v118 + 1;
                  *(_QWORD *)(v119 + 32) = v109;
                  sub_1D0F058(
                    (GrandQuestFolderBoardItem_o *)(v119 + 32),
                    (int32_t)v109,
                    v110,
                    v111,
                    v112,
                    v113,
                    v114,
                    v115);
                }
                CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v120);
                svtResultInfoWindow = (__int64)this->fields.fsm;
                v60 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17502/*"bit_result_extraskill02"*/ : &StringLiteral_17501/*"bit_result_extraskill01"*/);
                if ( svtResultInfoWindow )
                  goto LABEL_166;
              }
            }
          }
        }
      }
      goto LABEL_173;
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4E7B901 & 1) == 0 )
  {
    sub_1D0F0B4(&EventDelegate_Callback_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__129_0__);
    sub_1D0F0B4(&EventDelegate_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1D0F0B4(&StringLiteral_12485/*"START_ANIMATION"*/);
    sub_1D0F0B4(&StringLiteral_13230/*"StartAnimationName"*/);
    byte_4E7B901 = 1;
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
           (const MethodInfo_32A835C *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v10 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__129_0__,
      0);
    v11 = (EventDelegate_o *)sub_1D0F300(EventDelegate_TypeInfo);
    EventDelegate___ctor_50674352(v11, v10, 0);
    if ( !v9
      || (effect = (int *)v9[2].klass) == 0
      || (v18 = *((_QWORD *)effect + 2),
          v19 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v18) )
    {
LABEL_17:
      sub_1D0F30C(effect, v7);
    }
    v20 = effect[6];
    if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v11,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = v18 + 8 * v20;
      effect[6] = v20 + 1;
      *(_QWORD *)(v21 + 32) = v11;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 32), (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
                    (System_String_o *)StringLiteral_13230/*"StartAnimationName"*/,
                    0);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(effect + 14), (int32_t)startName, v22, v23, v24, v25, v26, v27);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12485/*"START_ANIMATION"*/, 0);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4E7B902 & 1) == 0 )
  {
    sub_1D0F0B4(&EventDelegate_Callback_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__130_0__);
    sub_1D0F0B4(&EventDelegate_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1D0F0B4(&StringLiteral_12485/*"START_ANIMATION"*/);
    sub_1D0F0B4(&StringLiteral_13230/*"StartAnimationName"*/);
    byte_4E7B902 = 1;
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
           (const MethodInfo_32A835C *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__130_0__,
      0);
    v10 = (EventDelegate_o *)sub_1D0F300(EventDelegate_TypeInfo);
    EventDelegate___ctor_50674352(v10, v9, 0);
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
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = v17 + 8 * v19;
      effect[6] = v19 + 1;
      *(_QWORD *)(v20 + 32) = v10;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
                          (System_String_o *)StringLiteral_13230/*"StartAnimationName"*/,
                          0)) == 0
    || (*((_QWORD *)effect + 7) = startName,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(effect + 14), (int32_t)startName, v21, v22, v23, v24, v25, v26),
        (effect = (int *)this->fields.fsm) == 0) )
  {
LABEL_20:
    sub_1D0F30C(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12485/*"START_ANIMATION"*/, 0);
}


void CombineResultEffectComponent__SetCombineLimit(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        bool autoFadeout,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  char v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  char v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  CombineRootComponent_c *v26; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_4E7B8FA & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetCombineLimit_b__122_0__);
    sub_1D0F0B4(&CombineRootComponent_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B8FA = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)callback,
    autoFadeout,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
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
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1D0F30C(gameObject, v25);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v26 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v26 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v26->static_fields->EXCEED_ASSET_PATH;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__122_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v28, 1, 0, 0);
}


void CombineResultEffectComponent__SetCommandCardExceedInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x1
  CombineRootComponent_c *v26; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_Transform_o *v30; // x21

  if ( (byte_4E7B8F4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&CombineRootComponent_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17499/*"bit_result_command_card_exceed"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    sub_1D0F0B4(&StringLiteral_12492/*"START_COMMAND_CARD_EXCEED_EFFECT"*/);
    byte_4E7B8F4 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    cardIndex,
    exceedCount,
    (System_String_o *)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v19, v20, v21, v22, v23, v24);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  v26 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v26 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v26->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__52624444 = AssetData__GetObject_object__52624444(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17499/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__52624444,
                                     (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v29 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v30 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4E70C9E )
  {
    effectAssetData = (AssetData_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C9E = 1;
  }
  if ( !v30
    || (UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v29, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_17:
    sub_1D0F30C(effectAssetData, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12492/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetCostumeCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t costumeId,
        System_String_o *costumeName,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        int32_t gender,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  struct UserServantEntity_o **p_baseUsrSvtData; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x1
  UserServantEntity_o *gameObject; // x0
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Action_o *v42; // x20
  CombineResultEffectComponent_o *v43; // x0
  const MethodInfo *v44; // x2

  if ( (byte_4E7B8EE & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__110_0__);
    sub_1D0F0B4(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    byte_4E7B8EE = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    costumeId,
    (int32_t)costumeName,
    (System_String_o *)callback,
    gender,
    (int64_t)method,
    v7);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.costumeName,
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v27, v28, v29, v30, v31, v32);
  this->fields.setResUsrSvtData = 0;
  if ( gender >= 1 )
    this->fields.genderType = gender;
  gameObject = *p_baseUsrSvtData;
  if ( !*p_baseUsrSvtData
    || (this->fields.costumeOverrideTransformVal = UserServantEntity__GetCostumeOverrideTransformVal(
                                                     gameObject,
                                                     costumeId,
                                                     0),
        v35 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1D0F300(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo),
        CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v35, 0),
        this->fields.costumeSkillInfoManager = v35,
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&this->fields.costumeSkillInfoManager,
          (int32_t)v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41),
        (gameObject = (UserServantEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1D0F30C(gameObject, v33);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v42 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__110_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v43, v42, v44);
}


void CombineResultEffectComponent__SetFriendshipCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x1
  CombineRootComponent_c *v24; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_Transform_o *v28; // x21

  if ( (byte_4E7B8F2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&CombineRootComponent_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17503/*"bit_result_friendship_exceed"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    sub_1D0F0B4(&StringLiteral_12500/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4E7B8F2 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  v24 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v24 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v24->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__52624444 = AssetData__GetObject_object__52624444(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17503/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__52624444,
                                     (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v27 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v28 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4E70C9E )
  {
    effectAssetData = (AssetData_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C9E = 1;
  }
  if ( !v28
    || (UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v27, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_17:
    sub_1D0F30C(effectAssetData, v23);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12500/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  CombineRootComponent_c *v26; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_4E7B8F3 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__115_0__);
    sub_1D0F0B4(&CombineRootComponent_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B8F3 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    oldFriendShipRank,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v18, v19, v20, v21, v22, v23);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v25);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v26 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v26 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v26->static_fields->COMBINE_ASSET_PATH;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__115_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v28, 1, 0, 0);
}


void CombineResultEffectComponent__SetFriendshipUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1

  if ( (byte_4E7B8E8 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12499/*"START_FRIENDSHIPUP_EFFECT"*/);
    byte_4E7B8E8 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    oldFriendShipRank,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
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
    sub_1D0F30C(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12499/*"START_FRIENDSHIPUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetLevelUpSvtFigure(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int64_t baseUsrSvtData; // x0
  int32_t v4; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  ServantScriptEntity_o *Entity_44136088; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct ServantVoiceData_array *v17; // x1
  struct ServantVoiceData_array **p_playVoiceList; // x0
  const MethodInfo *v19; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v21; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  struct UserServantEntity_o *v25; // x8
  UserServantEntity_o *v26; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_String_o *v34; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v36; // x21
  const MethodInfo *v37; // x2
  struct UserServantEntity_o *v38; // x8
  UserServantEntity_o *v39; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_String_o *v47; // x0
  ServantVoiceEntity_o *v48; // x20
  UserServantEntity_o *v49; // x21
  struct ServantVoiceData_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct ServantVoiceData_array *v57; // x0
  int parameters; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4E7B908 & 1) == 0 )
  {
    sub_1D0F0B4(&CombineResultFormManager_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    byte_4E7B908 = 1;
  }
  baseUsrSvtData = (int64_t)this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_46;
  baseUsrSvtData = UserServantEntity__GetServantId((UserServantEntity_o *)baseUsrSvtData, -1, 0);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_46;
  v4 = baseUsrSvtData;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.baseUsrSvtData, 0, 0, 0);
  Id = ServantScriptMaster__getId(v4, FigureImageLimitCount, 0);
  baseUsrSvtData = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  baseUsrSvtData = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)baseUsrSvtData,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_46;
  Entity_44136088 = ServantScriptMaster__GetEntity_44136088((ServantScriptMaster_o *)baseUsrSvtData, Id, 0);
  if ( Entity_44136088 && this->fields.svtVoiceEntity )
  {
    baseUsrSvtData = ServantScriptEntity__isMultipleForm(Entity_44136088, 0);
    if ( (baseUsrSvtData & 1) == 0 )
    {
      baseUsrSvtData = (int64_t)this->fields.svtVoiceEntity;
      if ( !baseUsrSvtData )
        goto LABEL_46;
      combineVoiceId = this->fields.combineVoiceId;
      method = (const MethodInfo *)this->fields.baseUsrSvtData;
LABEL_17:
      v10 = ServantVoiceEntity__lotteryLevelUpVoice(
              (ServantVoiceEntity_o *)baseUsrSvtData,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0);
LABEL_18:
      v17 = v10;
      p_playVoiceList = &this->fields.playVoiceList;
      this->fields.playVoiceList = v17;
      goto LABEL_19;
    }
    method = (const MethodInfo *)this->fields.baseUsrSvtData;
    if ( method )
    {
      parameters = (int)method[4].parameters;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( resUsrSvtData )
      {
        combineVoiceId = this->fields.combineVoiceId;
        if ( combineVoiceId )
        {
          baseUsrSvtData = (int64_t)this->fields.svtVoiceEntity;
          if ( !baseUsrSvtData )
            goto LABEL_46;
          goto LABEL_17;
        }
        if ( System_Int32__Equals_67071248((int32_t)&parameters, resUsrSvtData->fields.lv, 0) )
        {
          v23 = this;
          form = 0;
LABEL_23:
          CombineResultEffectComponent__SetBaseSvtFigure(v23, form, 1, v19);
          return;
        }
        baseUsrSvtData = sub_1D0F15C(string___TypeInfo, 1);
        v25 = this->fields.baseUsrSvtData;
        if ( v25 )
        {
          v26 = (UserServantEntity_o *)baseUsrSvtData;
          p_svtId = &v25->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v59.fields.fakeValue = 0;
          baseUsrSvtData = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v59, v24);
          if ( v26 )
          {
            if ( !LODWORD(v26->fields.id.fields.hiddenValue) )
              goto LABEL_47;
            v26->fields.id.fields.fakeValue = baseUsrSvtData;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&v26->fields.id.fields.fakeValue,
              baseUsrSvtData,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            v34 = System_String__Concat_65603304((System_String_array *)v26, 0);
            if ( UnityEngine_PlayerPrefs__GetInt_73317220(v34, 0) == 1 )
            {
              svtVoiceEntity = this->fields.svtVoiceEntity;
              v36 = this->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v10 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v36, 0);
              goto LABEL_18;
            }
            baseUsrSvtData = sub_1D0F15C(string___TypeInfo, 1);
            v38 = this->fields.baseUsrSvtData;
            if ( v38 )
            {
              v39 = (UserServantEntity_o *)baseUsrSvtData;
              v40 = &v38->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v60.fields.currentCryptoKey = v40;
              *(_QWORD *)&v60.fields.fakeValue = 0;
              baseUsrSvtData = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v60, v37);
              if ( v39 )
              {
                if ( !LODWORD(v39->fields.id.fields.hiddenValue) )
                  goto LABEL_47;
                v39->fields.id.fields.fakeValue = baseUsrSvtData;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)&v39->fields.id.fields.fakeValue,
                  baseUsrSvtData,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46);
                v47 = System_String__Concat_65603304((System_String_array *)v39, 0);
                UnityEngine_PlayerPrefs__SetInt(v47, 1, 0);
                v48 = this->fields.svtVoiceEntity;
                v49 = this->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v50 = CombineResultFormManager__lotteryCombineResultInit(v48, v49, 0);
                this->fields.playVoiceList = v50;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)&this->fields.playVoiceList,
                  (int32_t)v50,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56);
                playVoiceList = this->fields.playVoiceList;
                if ( playVoiceList )
                {
LABEL_20:
                  if ( LODWORD(playVoiceList->max_length) )
                  {
                    v21 = playVoiceList->m_Items[0];
                    if ( !v21 )
                      goto LABEL_46;
                    form = v21->fields.form;
                    v23 = this;
                    goto LABEL_23;
                  }
LABEL_47:
                  sub_1D0F314(baseUsrSvtData);
                }
                baseUsrSvtData = (int64_t)this->fields.svtVoiceEntity;
                if ( !baseUsrSvtData )
                  goto LABEL_46;
                v57 = ServantVoiceEntity__lotteryLevelUpVoice(
                        (ServantVoiceEntity_o *)baseUsrSvtData,
                        this->fields.baseUsrSvtData,
                        this->fields.combineVoiceId,
                        0);
                LODWORD(v17) = (_DWORD)v57;
                this->fields.playVoiceList = v57;
                p_playVoiceList = &this->fields.playVoiceList;
LABEL_19:
                sub_1D0F058((GrandQuestFolderBoardItem_o *)p_playVoiceList, (int32_t)v17, v11, v12, v13, v14, v15, v16);
                playVoiceList = this->fields.playVoiceList;
                if ( !playVoiceList )
                  goto LABEL_46;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1D0F30C(baseUsrSvtData, method);
  }
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

  if ( (byte_4E7B90E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_8535/*"LimitUpResSvtNodeName"*/);
    byte_4E7B90E = 1;
  }
  entity = 0;
  LimitUpSvtVoiceList = (UserServantEntity_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v7 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.id.fields.hiddenValue) )
      sub_1D0F314(LimitUpSvtVoiceList);
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
  v12 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v20, 0);
  LimitUpSvtVoiceList = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)LimitUpSvtVoiceList,
                                                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v10, v13, 0) )
    goto LABEL_18;
  LimitUpSvtVoiceList = (UserServantEntity_o *)entity;
  if ( !entity )
LABEL_21:
    sub_1D0F30C(LimitUpSvtVoiceList, v6);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v13 = LimitCountUpResultServantLimitCount;
LABEL_18:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
    (System_String_o *)StringLiteral_8535/*"LimitUpResSvtNodeName"*/,
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  __int64 v51; // x21
  __int64 v52; // x22
  int32_t v53; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v55; // x8
  ServantLimitImageMaster_o *v56; // x20
  System_Action_o *v57; // x20
  CombineResultEffectComponent_o *v58; // x0
  const MethodInfo *v59; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_4E7B8EC & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__107_0__);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7B8EC = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    baseCollectionLimitCnt,
    (System_String_o *)callback,
    (int32_t)servantChange,
    autoFadeout,
    *(System_String_o **)&displayType);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.resSvtNameData,
    (int32_t)servantChange,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.limitUpPlayVoiceLabel,
    (int32_t)playVoiceLabel,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.limitUpRewardGiftDataList,
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
  v52 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v51 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v52;
  *(_QWORD *)&v61.fields.fakeValue = v51;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v61, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v55 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v62.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue,
        v56 = (ServantLimitImageMaster_o *)MasterData_object,
        *(_QWORD *)&v62.fields.currentCryptoKey = v55,
        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                   v62,
                                                   0),
        !v56) )
  {
LABEL_12:
    sub_1D0F30C(gameObject, v50);
  }
  this->fields.isLimitUpSuppression = ServantLimitImageMaster__IsServantLimitCountSeal(
                                        v56,
                                        (int32_t)gameObject,
                                        v53 + 1,
                                        0);
  v57 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__107_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v58, v57, v59);
}


void CombineResultEffectComponent__SetLvExceedCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 Int_73317220; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  __int64 v27; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  __int64 v37; // x21
  __int64 v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_String_o *v45; // x0
  UserServantEntity_o *v46; // x20
  CombineRootComponent_c *v47; // x0
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *v49; // x20
  UnityEngine_Transform_o *v50; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4E7B8F0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&CombineResultFormManager_TypeInfo);
    sub_1D0F0B4(&CombineRootComponent_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_12504/*"START_LVEXCEED_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_17504/*"bit_result_grail"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    byte_4E7B8F0 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Int_73317220 = sub_1D0F15C(string___TypeInfo, 1);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v27 = Int_73317220;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v51.fields.fakeValue = 0;
  Int_73317220 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v51, v26);
  if ( !v27 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v27 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v27 + 32) = Int_73317220;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v27 + 32), Int_73317220, v29, v30, v31, v32, v33, v34);
  v35 = System_String__Concat_65603304((System_String_array *)v27, 0);
  Int_73317220 = UnityEngine_PlayerPrefs__GetInt_73317220(v35, 0);
  if ( (_DWORD)Int_73317220 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_73317220 = sub_1D0F15C(string___TypeInfo, 1);
      if ( *p_baseUsrSvtData )
      {
        v37 = Int_73317220;
        v38 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v38;
        *(_QWORD *)&v52.fields.fakeValue = 0;
        Int_73317220 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v52, v36);
        if ( v37 )
        {
          if ( *(_DWORD *)(v37 + 24) )
          {
            *(_QWORD *)(v37 + 32) = Int_73317220;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v37 + 32), Int_73317220, v39, v40, v41, v42, v43, v44);
            v45 = System_String__Concat_65603304((System_String_array *)v37, 0);
            UnityEngine_PlayerPrefs__SetInt(v45, 0, 0);
            v46 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v46, 0);
            goto LABEL_19;
          }
LABEL_34:
          sub_1D0F314(Int_73317220);
        }
      }
LABEL_33:
      sub_1D0F30C(Int_73317220, v25);
    }
  }
LABEL_19:
  v47 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v47 = CombineRootComponent_TypeInfo;
  }
  Int_73317220 = (__int64)v47->static_fields->effectAssetData;
  if ( !Int_73317220 )
    goto LABEL_33;
  Object_object__52624444 = AssetData__GetObject_object__52624444(
                              (AssetData_o *)Int_73317220,
                              (System_String_o *)StringLiteral_17504/*"bit_result_grail"*/,
                              (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_73317220 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__52624444,
                            (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_73317220 )
    goto LABEL_33;
  v49 = (UnityEngine_GameObject_o *)Int_73317220;
  Int_73317220 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_73317220, 0);
  v50 = (UnityEngine_Transform_o *)Int_73317220;
  if ( !byte_4E70C9E )
  {
    Int_73317220 = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C9E = 1;
  }
  if ( !v50 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v50, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Int_73317220 = (__int64)this->fields.fsm;
  if ( !Int_73317220 )
    goto LABEL_33;
  Int_73317220 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_73317220, 0);
  if ( !Int_73317220 )
    goto LABEL_33;
  Int_73317220 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_73317220,
                            (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                            0);
  if ( !Int_73317220 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_73317220, v49, 0);
  Int_73317220 = (__int64)this->fields.fsm;
  if ( !Int_73317220 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_73317220, (System_String_o *)StringLiteral_12504/*"START_LVEXCEED_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetLvExceedInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  CombineRootComponent_c *v25; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4E7B8F1 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__113_0__);
    sub_1D0F0B4(&CombineRootComponent_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B8F1 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v24);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v25 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v25 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v25->static_fields->EXCEED_ASSET_PATH;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__113_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v27, 1, 0, 0);
}


void CombineResultEffectComponent__SetNameRevealInfo(
        CombineResultEffectComponent_o *this,
        ServantChangeEntity_o *before,
        ServantChangeEntity_o *after,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
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
  UnityEngine_ParticleSystem_EmissionModule_o v38; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v39; // x0
  const MethodInfo *v40; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v42; // x4
  struct ServantChangeEntity_o *v43; // x8
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w1
  UnityEngine_ParticleSystem_MinMaxCurve_o v52; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v53; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v54; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7B8ED & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_11525/*"ResNameNodeName"*/);
    sub_1D0F0B4(&StringLiteral_12505/*"START_NAME_REVEAL_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_9500/*"NameRevealCrossFade"*/);
    sub_1D0F0B4(&StringLiteral_4936/*"CrtNameNodeName"*/);
    sub_1D0F0B4(&StringLiteral_17509/*"bit_result_name_reveal"*/);
    sub_1D0F0B4(&StringLiteral_13230/*"StartAnimationName"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_9501/*"NameRevealParticleNodeName"*/);
    byte_4E7B8ED = 1;
  }
  v54 = 0;
  m_ParticleSystem = 0;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (int32_t)after,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resSvtNameData = after;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resSvtNameData, (int32_t)after, v13, v14, v15, v16, v17, v18);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12505/*"START_NAME_REVEAL_EFFECT"*/, 0);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4936/*"CrtNameNodeName"*/,
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
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11525/*"ResNameNodeName"*/,
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
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v33 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9501/*"NameRevealParticleNodeName"*/,
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
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v36 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0).fields.m_ParticleSystem;
  v54 = UnityEngine_ParticleSystem__get_shape(v36, 0).fields.m_ParticleSystem;
  v37 = (float)((float)v33[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v53, 0, sizeof(v53));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v53, v37, 0);
  v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v52 = v53;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v38, &v52, 0);
  v56.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v54;
  v56.fields.x = (float)((float)v33[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v56.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v39, v56, 0);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v40);
  v43 = this->fields.crtSvtNameData;
  if ( !v43 )
    goto LABEL_40;
  v44 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v43->fields.svtId, v43->fields.limitCount, v44, v42);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0)) == 0
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_13230/*"StartAnimationName"*/,
                               0)) == 0 )
  {
LABEL_40:
    sub_1D0F30C(gameObject, v26);
  }
  v51 = StringLiteral_17509/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17509/*"bit_result_name_reveal"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(gameObject + 56), v51, v45, v46, v47, v48, v49, v50);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9500/*"NameRevealCrossFade"*/,
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  ServantTreasureDeviceAddMaster_o *Master_object; // x0
  const MethodInfo *v30; // x1
  ServantTreasureDeviceAddMaster_o *v31; // x25
  __int64 v32; // x19
  __int64 v33; // x20
  UnityEngine_Component_o *v34; // x27
  int32_t v35; // w20
  int32_t v36; // w4
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x26
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v38; // x19
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x23
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  __int64 v46; // x19
  __int64 v47; // x20
  int32_t v48; // w22
  int32_t v49; // w24
  TerminalPramsManager_c *v50; // x0
  ServantTreasureDeviceAddEntity_o *EnableEntityBeforeClearQuest; // x22
  __int64 v52; // x20
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v54; // x8
  __int64 v55; // x8
  int32_t TransformCount; // w0
  int32_t v57; // w26
  int32_t v58; // w27
  int32_t TransformedServantId; // w0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v60; // x20
  __int64 v61; // x19
  __int64 v62; // x28
  int32_t v63; // w29
  TerminalPramsManager_c *v64; // x0
  int32_t id; // w1
  int32_t v66; // w2
  __int64 v67; // x20
  struct System_Int32_array *v68; // x8
  struct System_Int32_array *v69; // x8
  __int64 v70; // x8
  UILabel_o *monitor; // x20
  UILabel_o *m_CachedPtr; // x20
  TreasureDvcInfo_o *v76; // [xsp+10h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4E7B8E7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12506/*"START_NOBLEUP_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_13716/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/);
    sub_1D0F0B4(&StringLiteral_13717/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/);
    byte_4E7B8E7 = 1;
  }
  v76 = 0;
  tdInfo = 0;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    targetId,
    *(System_String_o **)&targetLv,
    (int32_t)callback,
    *(int64_t *)&targetIdOld,
    *(System_String_o **)&targetLvOld);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_79;
  v31 = Master_object;
  v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v34 = (UnityEngine_Component_o *)this;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v78.fields.currentCryptoKey = v33;
  *(_QWORD *)&v78.fields.fakeValue = v32;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v78, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                        usrSvtData->fields.limitCount,
                                                        0);
  if ( !v31 )
    goto LABEL_79;
  if ( useTreasureDeviceIdForTdAddMaster )
    v36 = targetId;
  else
    v36 = 0;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v31, v35, (int32_t)Master_object, 0, v36, 0, 0);
  v38 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1D0F300(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v38, 0);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v38;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.npInfoAddManager, (int32_t)v38, v40, v41, v42, v43, v44, v45);
  if ( !EnableEntity )
  {
    TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
    if ( TransformCount < 2 )
      goto LABEL_68;
    v57 = TransformCount;
    v58 = 0;
    while ( 1 )
    {
      UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(usrSvtData, &tdInfo, v58, -1, -1, 0, 0);
      TransformedServantId = UserServantEntity__GetTransformedServantId(usrSvtData, v58, 0);
      v60 = *p_npInfoAddManager;
      v62 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      v61 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v63 = TransformedServantId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v80.fields.currentCryptoKey = v62;
      *(_QWORD *)&v80.fields.fakeValue = v61;
      Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                            v80,
                                                            0);
      if ( !tdInfo )
        break;
      Master_object = (ServantTreasureDeviceAddMaster_o *)ServantTreasureDeviceAddMaster__GetEnableEntity(
                                                            v31,
                                                            v63,
                                                            (int32_t)Master_object,
                                                            0,
                                                            tdInfo->fields.id,
                                                            0,
                                                            0);
      if ( !v60 )
        break;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
        v60,
        (ServantTreasureDeviceAddEntity_o *)Master_object,
        0);
      if ( kind == 8 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4E7132C )
        {
          sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
          byte_4E7132C = 1;
        }
        v64 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v64 = TerminalPramsManager_TypeInfo;
        }
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                              usrSvtData,
                                                              &v76,
                                                              v58,
                                                              v64->static_fields->_QuestId_k__BackingField,
                                                              -1,
                                                              0,
                                                              0);
        if ( !v76 )
          break;
        Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        id = v76->fields.id;
        v66 = targetLv;
      }
      else
      {
        if ( !tdInfo )
          break;
        Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        id = tdInfo->fields.id;
        v66 = targetLvOld;
      }
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        id,
        v66,
        v63,
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
        v63,
        0);
      Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
      if ( !*p_npInfoAddManager )
        break;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        0,
        0);
      if ( v57 == ++v58 )
        goto LABEL_67;
    }
LABEL_79:
    sub_1D0F30C(Master_object, v30);
  }
  Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
  if ( !*p_npInfoAddManager )
    goto LABEL_79;
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
    (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
    EnableEntity,
    0);
  if ( kind == 8 )
  {
    v47 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v46 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v79.fields.currentCryptoKey = v47;
    *(_QWORD *)&v79.fields.fakeValue = v46;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v79, 0);
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(usrSvtData->fields.limitCount, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E7132C )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E7132C = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    EnableEntityBeforeClearQuest = ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
                                     v31,
                                     v48,
                                     v49,
                                     v50->static_fields->_QuestId_k__BackingField,
                                     0);
    Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                          (const MethodInfo_326F26C *)Method_System_Linq_Enumerable_Count_int___);
    if ( (int)Master_object >= 1 )
    {
      if ( EnableEntityBeforeClearQuest )
      {
        v52 = 8;
        while ( 1 )
        {
          treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
          if ( !treasureDeviceIds )
            break;
          if ( v52 - 8 >= (unsigned __int64)LODWORD(treasureDeviceIds->max_length) )
            goto LABEL_80;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&treasureDeviceIds->obj.klass + v52),
            targetLv,
            0,
            0);
          v54 = EnableEntity->fields.treasureDeviceIds;
          if ( !v54 )
            break;
          if ( v52 - 8 >= (unsigned __int64)LODWORD(v54->max_length) )
            goto LABEL_80;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v54->obj.klass + v52),
            targetLv,
            0,
            0);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_326F26C *)Method_System_Linq_Enumerable_Count_int___);
          v55 = v52 - 7;
          ++v52;
          if ( v55 >= (int)Master_object )
            goto LABEL_67;
        }
      }
      goto LABEL_79;
    }
    goto LABEL_67;
  }
  Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                        (const MethodInfo_326F26C *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)Master_object >= 1 )
  {
    v67 = 8;
    do
    {
      v68 = EnableEntity->fields.treasureDeviceIds;
      if ( !v68 )
        goto LABEL_79;
      if ( v67 - 8 >= (unsigned __int64)LODWORD(v68->max_length) )
        goto LABEL_80;
      Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
      if ( !*p_npInfoAddManager )
        goto LABEL_79;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        *((_DWORD *)&v68->obj.klass + v67),
        targetLvOld,
        0,
        0);
      v69 = EnableEntity->fields.treasureDeviceIds;
      if ( !v69 )
        goto LABEL_79;
      if ( v67 - 8 >= (unsigned __int64)LODWORD(v69->max_length) )
LABEL_80:
        sub_1D0F314(Master_object);
      Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
      if ( !*p_npInfoAddManager )
        goto LABEL_79;
      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
        (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
        *((_DWORD *)&v69->obj.klass + v67),
        targetLv,
        0,
        0);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_326F26C *)Method_System_Linq_Enumerable_Count_int___);
      v70 = v67 - 7;
      ++v67;
    }
    while ( v70 < (int)Master_object );
  }
LABEL_67:
  v34 = (UnityEngine_Component_o *)this;
  ++this->fields.tdShowIndex;
LABEL_68:
  Master_object = (ServantTreasureDeviceAddMaster_o *)UnityEngine_Component__get_gameObject(v34, 0);
  if ( !Master_object )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)v34[3].klass;
  if ( !Master_object )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, kind == 27, 0);
  monitor = (UILabel_o *)v34[3].monitor;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13716/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0);
  if ( !monitor )
    goto LABEL_79;
  UILabel__set_text(monitor, (System_String_o *)Master_object, 0);
  m_CachedPtr = (UILabel_o *)v34[3].fields.m_CachedPtr;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13717/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0);
  if ( !m_CachedPtr )
    goto LABEL_79;
  UILabel__set_text(m_CachedPtr, (System_String_o *)Master_object, 0);
  if ( isSkipStartEffect )
  {
    CombineResultEffectComponent__setSkillResultInfo((CombineResultEffectComponent_o *)v34, v30);
  }
  else
  {
    Master_object = (ServantTreasureDeviceAddMaster_o *)v34[6].klass;
    if ( !Master_object )
      goto LABEL_79;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12506/*"START_NOBLEUP_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent__SetPowerUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1

  if ( (byte_4E7B8EF & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12510/*"START_POWERUP_EFFECT"*/);
    byte_4E7B8EF = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
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
    sub_1D0F30C(gameObject, v24);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12510/*"START_POWERUP_EFFECT"*/, 0);
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
  int32_t costumeId; // w2
  bool v10; // w3
  CombineResultEffectComponent_o *v11; // x0
  struct ServantChangeEntity_o *v12; // x8
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t CardImageLimitCount; // w0
  int32_t v15; // w20
  const MethodInfo *v16; // x1

  if ( (byte_4E7B900 & 1) == 0 )
  {
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B900 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v15 = CardImageLimitCount;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v15, 0);
    }
    voiceSvtId = this->fields.voiceSvtId;
    v11 = this;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 1, 0);
        resSvtNameData = this->fields.resSvtNameData;
        if ( resSvtNameData )
          voiceSvtId = resSvtNameData->fields.svtVoiceId;
        else
          voiceSvtId = -1;
        costumeId = -1;
        v10 = 1;
        v11 = this;
        goto LABEL_30;
      }
LABEL_31:
      sub_1D0F30C(Instance, v5);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    CommonUI__SetLoadMode(Instance, 1, 0);
    v12 = this->fields.resSvtNameData;
    if ( v12 )
      voiceSvtId = v12->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    costumeId = this->fields.costumeId;
    v11 = this;
  }
  v10 = 0;
LABEL_30:
  CombineResultEffectComponent__getSvtVoiceData(v11, voiceSvtId, costumeId, v10, v6);
  CombineResultEffectComponent__loadVoiceData(this, v16);
}


void CombineResultEffectComponent__SetResultUserServantData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v4; // q1
  struct UserServantEntity_o *v5; // x8
  __int128 v6; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v8; // x20
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  UserServantEntity_o *v12; // x21
  UserServantEntity_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UserServantEntity_o *v20; // x8
  __int64 v21; // x21
  __int64 v22; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UserServantEntity_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x23
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x25
  ServantLimitImageMaster_o *v38; // x21
  int32_t v39; // w22
  int32_t v40; // w23
  int32_t v41; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // kr10_16
  struct UserServantEntity_o *v43; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v45; // x21
  int32_t v46; // w22
  CombineResultEffectComponent_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  UserServantEntity_o *v49; // x20
  UserServantEntity_o *v50; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_resUsrSvtData; // x19
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x22
  __int64 v59; // x20
  __int64 v60; // x21
  int32_t v61; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x22
  ServantLimitImageMaster_o *v63; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  int32_t v65; // w19
  int32_t v66; // w21
  int32_t ServantImageLimitSealAfter; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // kr30_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-70h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  v2 = this;
  if ( (byte_4E7B8FF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1D0F0B4(&UserServantEntity_TypeInfo);
    byte_4E7B8FF = 1;
  }
  *(_QWORD *)afterAtk = 0;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_62;
    v4 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v72.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v71 = v72;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v71, 0) < 1 )
    {
      v49 = v2->fields.baseUsrSvtData;
      v50 = (UserServantEntity_o *)sub_1D0F300(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_44524940(v50, v49, 0);
      v2->fields.resUsrSvtData = v50;
      p_resUsrSvtData = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)p_resUsrSvtData, (int32_t)v50, v52, v53, v54, v55, v56, v57);
      if ( (*((_DWORD *)p_resUsrSvtData - 8) | 0x10) != 0x1A )
        return;
      v58 = *p_resUsrSvtData;
      if ( *p_resUsrSvtData )
      {
        v60 = *(_QWORD *)&v58[6].fields.currentCryptoKey;
        v59 = *(_QWORD *)&v58[6].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v76.fields.currentCryptoKey = v60;
        *(_QWORD *)&v76.fields.fakeValue = v59;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v76, 0);
        v58[6] = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v61 + 1, 0);
        v62 = *p_resUsrSvtData;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( *p_resUsrSvtData )
        {
          v63 = (ServantLimitImageMaster_o *)this;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                     (*p_resUsrSvtData)[5],
                                                     0);
          v64 = *p_resUsrSvtData;
          if ( *p_resUsrSvtData )
          {
            v65 = (int)this;
            v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v64[6], 0);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            this = (CombineResultEffectComponent_o *)ImageLimitCount__GetDispLimitCount(v66, 0);
            if ( v63 )
            {
              ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                             v63,
                                             v65,
                                             (int32_t)this,
                                             0);
              v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ServantImageLimitSealAfter, 0);
              method = *(const MethodInfo **)&v68.fields.fakeValue;
              this = *(CombineResultEffectComponent_o **)&v68.fields.currentCryptoKey;
              if ( v62 )
              {
                v62[8] = v68;
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v5 = v2->fields.baseUsrSvtData;
        if ( v5 )
        {
          v6 = *(_OWORD *)&v5->fields.id.fields.fakeValue;
          v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
          *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v5->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v72.fields.fakeValue = v6;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v70 = v72;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(
                                                     &v70,
                                                     0);
          if ( v7 )
          {
            v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v7,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v9 = v2->fields.baseUsrSvtData;
              if ( !v9 )
                goto LABEL_62;
              v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
              v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
              *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v72.fields.fakeValue = v10;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v69 = v72;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(
                                                         &v69,
                                                         0);
              if ( !v11 )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v11,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v12 = v2->fields.baseUsrSvtData;
                v13 = (UserServantEntity_o *)sub_1D0F300(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_44524940(v13, v12, 0);
                v2->fields.resUsrSvtData = v13;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)&v2->fields.resUsrSvtData,
                  (int32_t)v13,
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
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v74.fields.currentCryptoKey = v22;
              *(_QWORD *)&v74.fields.fakeValue = v21;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                         v74,
                                                         0);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v24 = (UserServantEntity_o *)sub_1D0F300(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_44524940(v24, resUsrSvtData, 0);
                v2->fields.resUsrSvtData = v24;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)&v2->fields.resUsrSvtData,
                  (int32_t)v24,
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
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v75.fields.currentCryptoKey = v34;
                  *(_QWORD *)&v75.fields.fakeValue = v33;
                  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v75, 0);
                  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v35 + 1, 0);
                  method = *(const MethodInfo **)&v36.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v36.fields.currentCryptoKey;
                  if ( v32 )
                  {
                    v32[6] = v36;
                    v37 = *v8;
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    if ( *v8 )
                    {
                      v38 = (ServantLimitImageMaster_o *)this;
                      this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                 (*v8)[5],
                                                                 0);
                      if ( *v8 )
                      {
                        v39 = (int)this;
                        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200((*v8)[6], 0);
                        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                        this = (CombineResultEffectComponent_o *)ImageLimitCount__GetDispLimitCount(v40, 0);
                        if ( v38 )
                        {
                          v41 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v38, v39, (int32_t)this, 0);
                          v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v41, 0);
                          method = *(const MethodInfo **)&v42.fields.fakeValue;
                          this = *(CombineResultEffectComponent_o **)&v42.fields.currentCryptoKey;
                          if ( v37 )
                          {
                            v37[8] = v42;
                            v43 = v2->fields.baseUsrSvtData;
                            if ( v43 )
                            {
                              hp = v43->fields.hp;
                              afterAtk[0] = v43->fields.atk;
                              afterAtk[1] = hp;
                              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( this )
                              {
                                this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)this,
                                                                           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                if ( *v8 )
                                {
                                  v45 = (ServantLimitMaster_o *)this;
                                  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                             (*v8)[5],
                                                                             0);
                                  if ( *v8 )
                                  {
                                    v46 = (int)this;
                                    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                               (*v8)[6],
                                                                               0);
                                    if ( v45 )
                                    {
                                      this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                                 v45,
                                                                                 v46,
                                                                                 (int32_t)this,
                                                                                 0);
                                      if ( this )
                                      {
                                        v47 = this;
                                        this = (CombineResultEffectComponent_o *)v2->fields.combineResStatus;
                                        if ( this )
                                        {
                                          CheckCombineResStatus__getCombineResStatus(
                                            (CheckCombineResStatus_o *)this,
                                            &afterAtk[1],
                                            afterAtk,
                                            v2->fields.resUsrSvtData,
                                            HIDWORD(v47->fields.m_CancellationTokenSource),
                                            0);
                                          v48 = *v8;
                                          if ( *v8 )
                                          {
                                            *(_DWORD *)&v48[25].fields.inited = afterAtk[1];
                                            v48[25].fields.fakeValue = afterAtk[0];
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
    sub_1D0F30C(this, method);
  }
}


void CombineResultEffectComponent__SetSecretTreasureDeviceInfoForQuestClear(
        CombineResultEffectComponent_o *this,
        int32_t questId,
        int32_t phase,
        CombineResultEffectComponent_MessageDelegate_o *msgCallBack,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  void *Instance; // x0
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *v21; // x26
  System_Collections_Generic_List_object__o *v22; // x23
  int32_t v23; // w27
  int v24; // w8
  Il2CppObject *v25; // x28
  int v26; // w8
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Comparison_T__o *v37; // x24
  Il2CppObject *v38; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int v46; // w20
  BalanceConfig_c *v47; // x0
  TerminalSceneComponent_c *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w1
  int32_t v62; // w24
  const MethodInfo *v63; // x2

  if ( (byte_4E7B8F5 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
    sub_1D0F0B4(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__getEntityList__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__117_0__);
    sub_1D0F0B4(&CombineResultEffectComponent___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12512/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_17520/*"bit_result_ultimate_anim"*/);
    sub_1D0F0B4(&StringLiteral_13230/*"StartAnimationName"*/);
    byte_4E7B8F5 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    phase,
    (int32_t)msgCallBack,
    (System_String_o *)callback,
    (int32_t)method,
    v6,
    v7);
  this->fields.messageCallback = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.messageCallback, 0, v13, v14, v15, v16, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  v21 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 5);
  v22 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v21 )
    goto LABEL_57;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v21,
         (const MethodInfo_34CCE40 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v21,
                   v23,
                   (const MethodInfo_34CCED0 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        break;
      v24 = *((_DWORD *)Instance + 9);
      v25 = (Il2CppObject *)Instance;
      if ( v24 >= 1 && v24 == questId )
      {
        v26 = *((_DWORD *)Instance + 10);
        if ( v26 < 1 || v26 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v22 )
              break;
            items = v22->fields._items;
            v34 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v22->fields._version;
            if ( !items )
              break;
            size = v22->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                v25,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v22->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v25;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v25, v27, v28, v29, v30, v31, v32);
            }
          }
        }
      }
      if ( ++v23 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v21,
                      (const MethodInfo_34CCE40 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) )
        goto LABEL_20;
    }
LABEL_57:
    sub_1D0F30C(Instance, v20);
  }
LABEL_20:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v37 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v37 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v38 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v37 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      v37,
      v38,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__117_0__,
      0);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__117_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v37;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__117_0, (int32_t)v37, v40, v41, v42, v43, v44, v45);
  }
  if ( !v22 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_60153556(
    v22,
    v37,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v46 = v22->fields._size;
  if ( v46 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v22,
                 0,
                 (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v47 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  if ( !v47->static_fields->CloseSecretTreasureDeviceQuestClear && v22->fields._size >= 1 )
  {
    v62 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v22,
                   v62,
                   (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_57;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v63) )
        break;
      if ( ++v62 >= v22->fields._size )
        goto LABEL_33;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v22,
                 v62,
                 (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_33:
  if ( v46 < 1 )
  {
    if ( *p_callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))(*p_callbackFunc)->fields.invoke_impl)(
        (*p_callbackFunc)->fields.method_code,
        1,
        (*p_callbackFunc)->fields.method);
  }
  else
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4E7125B )
    {
      sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
      byte_4E7125B = 1;
    }
    v48 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v48 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v48->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_57;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0);
    this->fields.messageCallback = msgCallBack;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.messageCallback,
      (int32_t)msgCallBack,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_57;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_13230/*"StartAnimationName"*/,
                 0);
    if ( !Instance )
      goto LABEL_57;
    v61 = StringLiteral_17520/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17520/*"bit_result_ultimate_anim"*/;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)((char *)Instance + 56), v61, v55, v56, v57, v58, v59, v60);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12512/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent__SetSecretTreasureDeviceInfoForSvtGet(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  const MethodInfo *v12; // x2
  BalanceConfig_c *v13; // x0
  __int64 v14; // x1
  char *fsm; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w1

  if ( (byte_4E7B8F6 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12512/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_17520/*"bit_result_ultimate_anim"*/);
    sub_1D0F0B4(&StringLiteral_13230/*"StartAnimationName"*/);
    byte_4E7B8F6 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( v13->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v12) )
  {
    if ( *p_callbackFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))(*p_callbackFunc)->fields.invoke_impl)(
        (*p_callbackFunc)->fields.method_code,
        1,
        (*p_callbackFunc)->fields.method);
  }
  else
  {
    fsm = (char *)this->fields.fsm;
    this->fields.targetSvtId = svtId;
    if ( !fsm
      || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0)) == 0
      || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                          (System_String_o *)StringLiteral_13230/*"StartAnimationName"*/,
                          0)) == 0
      || (v22 = StringLiteral_17520/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17520/*"bit_result_ultimate_anim"*/,
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(fsm + 56), v22, v16, v17, v18, v19, v20, v21),
          (fsm = (char *)this->fields.fsm) == 0) )
    {
      sub_1D0F30C(fsm, v14);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12512/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  struct System_Int32_array *skillIds; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4E7B8E6 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12517/*"START_SKILLUP_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_12396/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/);
    sub_1D0F0B4(&StringLiteral_12397/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/);
    byte_4E7B8E6 = 1;
  }
  svtSkillAddEnt = 0;
  this->fields.baseUsrSvtData = usrSvtData;
  this->fields.kind = kind;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    targetId,
    *(System_String_o **)&targetLv,
    (int32_t)callback,
    *(int64_t *)&targetIdOld,
    *(System_String_o **)&targetLvOld);
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12396/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)baseUsrSvtData, 0),
        unSummonDetail = this->fields.unSummonDetail,
        baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12397/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)baseUsrSvtData, 0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.fsm) == 0) )
  {
LABEL_16:
    sub_1D0F30C(baseUsrSvtData, v23);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)baseUsrSvtData, (System_String_o *)StringLiteral_12517/*"START_SKILLUP_EFFECT"*/, 0);
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
  __int64 v21; // x27
  int32_t v22; // w21
  int32_t v23; // w22

  if ( (byte_4E7B91D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4E7B91D = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_326FA04 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_45417412(Item, faceType, formId, 0, fadeTime, 0);
          return;
        }
      }
    }
LABEL_25:
    sub_1D0F30C(Item, v14);
  }
  v15 = this->fields.playVoiceList;
  if ( !v15 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= LODWORD(v15->max_length) )
LABEL_23:
    sub_1D0F314(Item);
  v17 = v15->m_Items[playCnt];
  if ( !v17 )
    goto LABEL_25;
  multiFace = v17->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v17->fields.multiForm;
    if ( multiForm )
    {
      if ( (_DWORD)Item == (unsigned int)multiFace->max_length && (_DWORD)Item == LODWORD(multiForm->max_length) )
      {
        if ( (unsigned int)multiFace->max_length )
        {
          v20 = 0;
          v21 = (unsigned int)Item - 1LL;
          do
          {
            if ( v20 >= LODWORD(multiForm->max_length) )
              break;
            if ( !standFigureCollects )
              goto LABEL_25;
            v22 = multiFace->m_Items[v20];
            v23 = multiForm->m_Items[v20];
            Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)standFigureCollects,
                                         v20,
                                         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_45417412(Item, v22, v23, 0, fadeTime, 0);
            if ( v21 == v20 )
              return;
            ++v20;
          }
          while ( v20 < LODWORD(multiFace->max_length) );
        }
        goto LABEL_23;
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  System_Action_o *v43; // x20
  CombineResultEffectComponent_o *v44; // x0
  const MethodInfo *v45; // x2

  if ( (byte_4E7B8E9 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__104_0__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B8E9 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    infoIdx,
    returnQpNum,
    (System_String_o *)returnSvtIds,
    (int32_t)baseData,
    *(int64_t *)&baseCollectionLv,
    (System_String_o *)callback);
  this->fields.baseUsrSvtData = baseData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v23, v24, v25, v26, v27, v28);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.combineVoiceId, 0, v29, v30, v31, v32, v33, v34);
  this->fields.autoFadeout = 0;
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
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
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1D0F30C(gameObject, v42);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v43 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__104_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v44, v43, v45);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetSvtCombineInfo_50176656(
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Action_o *v39; // x20
  CombineResultEffectComponent_o *v40; // x0
  const MethodInfo *v41; // x2

  if ( (byte_4E7B8EA & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__105_0__);
    byte_4E7B8EA = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (int32_t)baseData,
    (System_String_o *)resData,
    svtId,
    (int64_t)voiceId,
    (System_String_o *)statusDisp);
  this->fields.resUsrSvtData = resData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData,
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
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.combineVoiceId,
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_6:
    sub_1D0F30C(gameObject, v26);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v39 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__105_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v40, v39, v41);
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  System_Action_o *v39; // x20
  CombineResultEffectComponent_o *v40; // x0
  const MethodInfo *v41; // x2

  if ( (byte_4E7B8EB & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__106_0__);
    byte_4E7B8EB = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    infoIdx,
    normalExp,
    *(System_String_o **)&addExp,
    returnQpNum,
    (int64_t)returnSvtIds,
    (System_String_o *)baseData);
  this->fields.baseUsrSvtData = baseData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData, 0, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1D0F30C(0, v38);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v39 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__106_0__,
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
  int32_t v10; // w21
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  ServantEntity_TransformInfo_o *v12; // x22
  unsigned int v13; // w8
  struct System_String_o *list; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_o *condLabelTitle; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_String_o *v35; // x21
  System_String_o *CondSpriteColor; // x20
  struct UserServantEntity_o *v37; // x8
  ServantTransformMaster_o *v38; // x20
  __int64 v39; // x21
  __int64 v40; // x22
  struct UserServantEntity_o *v41; // x8
  int32_t v42; // w21
  unsigned int kind; // w8
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_String_o *befTitle; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct System_String_o *aftTitle; // x1
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_String_o *CondLabelColor; // x20
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E7B91A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7B91A = 1;
  }
  entity = 0;
  CombineResultEffectComponent__ResetTransformData(this, method);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData )
  {
    if ( !UserServantEntity__get_IsSaveTransformServant(baseUsrSvtData, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ServantTransformMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantTransformMaster___);
      v37 = this->fields.baseUsrSvtData;
      if ( v37 )
      {
        v38 = Master_object;
        v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = v40;
        *(_QWORD *)&v68.fields.fakeValue = v39;
        Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                      v68,
                                                      0);
        v41 = this->fields.baseUsrSvtData;
        if ( v41 )
        {
          v42 = (int)Master_object;
          Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                        v41->fields.dispLimitCount,
                                                        0);
          if ( v38 )
          {
            if ( !ServantTransformMaster__TryGetEntity(v38, &entity, v42, (int32_t)Master_object, 0) )
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
                this->fields.displayCount = (int)Master_object;
                if ( entity )
                {
                  befTitle = entity->fields.befTitle;
                  this->fields.multiDisplayTitleBefore = befTitle;
                  sub_1D0F058(
                    (GrandQuestFolderBoardItem_o *)&this->fields.multiDisplayTitleBefore,
                    (int32_t)befTitle,
                    v44,
                    v45,
                    v46,
                    v47,
                    v48,
                    v49);
                  if ( entity )
                  {
                    aftTitle = entity->fields.aftTitle;
                    this->fields.multiDisplayTitleAfter = aftTitle;
                    sub_1D0F058(
                      (GrandQuestFolderBoardItem_o *)&this->fields.multiDisplayTitleAfter,
                      (int32_t)aftTitle,
                      v51,
                      v52,
                      v53,
                      v54,
                      v55,
                      v56);
                    this->fields.isTransformServant = 1;
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    Master_object = (ServantTransformMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
                    if ( entity )
                    {
                      if ( Master_object )
                      {
                        v58 = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                entity->fields.aftSvtId,
                                (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                        this->fields.transformedServant = (struct ServantEntity_o *)v58;
                        sub_1D0F058(
                          (GrandQuestFolderBoardItem_o *)&this->fields.transformedServant,
                          (int32_t)v58,
                          v59,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64);
                        Master_object = (ServantTransformMaster_o *)entity;
                        if ( entity )
                        {
                          CondLabelColor = ServantTransformEntity__GetCondLabelColor(entity, 0);
                          DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
                          this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_45504796(
                                                                       CondLabelColor,
                                                                       DefaultCondTitleLabelColor,
                                                                       0);
                          Master_object = (ServantTransformMaster_o *)entity;
                          if ( entity )
                          {
                            CondSpriteColor = ServantTransformEntity__GetCondSpriteColor(entity, 0);
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
      sub_1D0F30C(Master_object, v4);
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
    v9 = *(_QWORD *)&v6->fields.transformVal.fields.currentCryptoKey;
    v8 = *(_QWORD *)&v6->fields.transformVal.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v67.fields.currentCryptoKey = v9;
    *(_QWORD *)&v67.fields.fakeValue = v8;
    Master_object = (ServantTransformMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                  v67,
                                                  0);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_46;
    v10 = (unsigned int)Master_object ^ 1;
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
            this->fields.displayCount = UserServantEntity__GetTransformCount((UserServantEntity_o *)Master_object, 0, 0);
            list = (struct System_String_o *)v7->fields.list;
            this->fields.multiDisplayTitleBefore = list;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&this->fields.multiDisplayTitleBefore,
              (int32_t)list,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
            condLabelTitle = v12->fields.condLabelTitle;
            this->fields.multiDisplayTitleAfter = condLabelTitle;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&this->fields.multiDisplayTitleAfter,
              (int32_t)condLabelTitle,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            Master_object = (ServantTransformMaster_o *)this->fields.baseUsrSvtData;
            if ( Master_object )
            {
              ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)Master_object, v10, 0);
              this->fields.transformedServant = ServantEntity;
              sub_1D0F058(
                (GrandQuestFolderBoardItem_o *)&this->fields.transformedServant,
                (int32_t)ServantEntity,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              v35 = *(System_String_o **)&v7->fields.revision;
              v69 = TransformHelper__get_DefaultCondTitleLabelColor(0);
              this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_45504796(v35, v69, 0);
              CondSpriteColor = v7->fields._MasterName_k__BackingField;
LABEL_44:
              DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
              this->fields.multiDisplayTitleSpriteColor = ColorHelper__ParseColorCode_45504796(
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

  if ( (byte_4E7B93A & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__192_0__);
    sub_1D0F0B4(&StringLiteral_3874/*"COSTUME_CHANGED_MSG"*/);
    byte_4E7B93A = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        costumeName = this->fields.costumeName,
        v6 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__192_0__,
          0),
        !skillResultInfoWindow) )
  {
    sub_1D0F30C(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenCostumeChangeMessage(
    skillResultInfoWindow,
    costumeName,
    (System_String_o *)StringLiteral_3874/*"COSTUME_CHANGED_MSG"*/,
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

  if ( (byte_4E7B926 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__167_0__);
    byte_4E7B926 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v5 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__167_0__,
          0),
        !limitUpResultCheck) )
  {
    sub_1D0F30C(bgCollider, method);
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
  if ( (byte_4E7B924 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__165_0__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7B924 = 1;
  }
  transformInfo = 0;
  bgCollider = this->fields.bgCollider;
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
    v8 = *(_QWORD *)&baseUsrSvtData->fields.transformVal.fields.currentCryptoKey;
    v7 = *(_QWORD *)&baseUsrSvtData->fields.transformVal.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v8;
    *(_QWORD *)&v18.fields.fakeValue = v7;
    v3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v18, 0) ^ 1;
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
    sub_1D0F314(bgCollider);
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
  v16 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__165_0__, 0);
  if ( !skillResultInfoWindow )
LABEL_20:
    sub_1D0F30C(bgCollider, *(_QWORD *)&index);
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
  _DWORD *v6; // x22
  int32_t v7; // w23
  int32_t v8; // w24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v10; // w21
  int32_t v11; // w22
  System_String_o *costumeName; // x25
  System_Action_o *v13; // x26

  if ( (byte_4E7B925 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__166_0__);
    byte_4E7B925 = 1;
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
                 0);
  if ( !this->fields.costumeSkillInfoManager )
    goto LABEL_10;
  v6 = bgCollider;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
                 this->fields.costumeSkillInfoManager,
                 index,
                 0);
  if ( !v6 )
    goto LABEL_10;
  if ( !bgCollider )
    goto LABEL_10;
  v7 = *((_DWORD *)bgCollider + 4);
  v8 = *((_DWORD *)bgCollider + 5);
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v10 = v6[4];
  v11 = v6[5];
  costumeName = this->fields.costumeName;
  v13 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__166_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1D0F30C(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(skillResultInfoWindow, v10, v11, v7, v8, costumeName, v13, 0);
}


void CombineResultEffectComponent__ShowSkillChangeMessage(
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

  if ( (byte_4E7B923 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__164_0__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7B923 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_9;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
  v9 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__164_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1D0F30C(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v8, v9, 0);
}


void CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x20
  __int128 v5; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
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

  if ( (byte_4E7B927 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__169_0__);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7B927 = 1;
  }
  v16 = 0;
  tdInfo = 0;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v14, 0);
  if ( !v6 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v6,
             bgCollider,
             (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
        v13 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__169_0__,
          0),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1D0F30C(bgCollider, method);
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

  if ( (byte_4E7B91E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_PlayVoice__);
    sub_1D0F0B4(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7B91E = 1;
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
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsNullOrEmpty = (VoiceMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_VoiceMaster___);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_24;
      v10 = IsNullOrEmpty;
      v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = v12;
      *(_QWORD *)&v22.fields.fakeValue = v11;
      IsNullOrEmpty = (VoiceMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v22, 0);
      v13 = this->fields.playVoiceList;
      if ( !v13 )
        goto LABEL_24;
      v14 = this->fields.playCnt;
      if ( (unsigned int)v14 >= LODWORD(v13->max_length) )
LABEL_25:
        sub_1D0F314(IsNullOrEmpty);
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
        v20 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_CombineResultEffectComponent_PlayVoice__, 0);
        CombineResultEffectComponent__PlayPerformance(this, v19, v20, v21);
        return;
      }
LABEL_24:
      sub_1D0F30C(IsNullOrEmpty, v5);
    }
    goto LABEL_25;
  }
}


void CombineResultEffectComponent___CheckReturnCombineItem_b__179_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct System_Int64_array **v14; // x8
  struct System_Int64_array *v15; // x1

  if ( (byte_4E7B94B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_long___);
    byte_4E7B94B = 1;
  }
  this->fields.returnQpNum = 0;
  v10 = Method_System_Array_Empty_long___;
  v11 = *((_QWORD *)Method_System_Array_Empty_long___ + 7);
  if ( !v11 )
  {
    sub_1CE5198(Method_System_Array_Empty_long___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1CE513C(inited);
  v14 = *(struct System_Int64_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.returnSvtIds = *v14;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.returnSvtIds, (int32_t)v15, v2, v3, v4, v5, v6, v7);
}


void CombineResultEffectComponent___CloseLimitCountSealDialog_b__187_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E7B94C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__187_1__);
    byte_4E7B94C = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__187_1__,
    0);
  if ( !limitUpResultCheck )
    sub_1D0F30C(v5, v6);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0);
}


void CombineResultEffectComponent___EndLoad_b__157_0(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E7B94A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_5500/*"END_LOAD"*/);
    byte_4E7B94A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.fsm) == 0) )
    sub_1D0F30C(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5500/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___FadeoutProcess_b__181_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1D0F30C(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    1,
    callbackFunc->fields.method);
}


void CombineResultEffectComponent___InitCombineEffect_b__123_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4E7B948 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_5500/*"END_LOAD"*/);
    byte_4E7B948 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1D0F30C(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5500/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___SetAppendSkillCombineInfo_b__119_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4E7B946 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_12504/*"START_LVEXCEED_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_17500/*"bit_result_extraskill"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    byte_4E7B946 = 1;
  }
  if ( data )
  {
    Object_object__52624444 = AssetData__GetObject_object__52624444(
                                data,
                                (System_String_o *)StringLiteral_17500/*"bit_result_extraskill"*/,
                                (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__52624444,
                                              (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4E70C9E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C9E = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1D0F30C(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12504/*"START_LVEXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetCombineLimit_b__122_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x0
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *v15; // x0
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *v18; // x21

  if ( (byte_4E7B947 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    sub_1D0F0B4(&StringLiteral_12491/*"START_COMBINE_LIMIT"*/);
    sub_1D0F0B4(&StringLiteral_17494/*"bit_result_"*/);
    byte_4E7B947 = 1;
  }
  if ( data )
  {
    v5 = sub_1D0F15C(string___TypeInfo, 1);
    v6 = System_Int32__ToString((int)this + 336, 0);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_65562772(
                                              (System_String_o *)StringLiteral_17494/*"bit_result_"*/,
                                              v6,
                                              0);
    if ( !v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1D0F314(transform);
    *(_QWORD *)(v5 + 32) = transform;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)transform, v9, v10, v11, v12, v13, v14);
    v15 = System_String__Concat_65603304((System_String_array *)v5, 0);
    Object_object__52624444 = AssetData__GetObject_object__52624444(
                                data,
                                v15,
                                (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__52624444,
                                              (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v17 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v18 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4E70C9E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C9E = 1;
    }
    if ( !v18 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v17, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_19:
      sub_1D0F30C(transform, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12491/*"START_COMBINE_LIMIT"*/, 0);
  }
}


void CombineResultEffectComponent___SetCostumeCombineInfo_b__110_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4E7B943 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12496/*"START_COSTUME_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    sub_1D0F0B4(&StringLiteral_17518/*"bit_result_skinchange"*/);
    byte_4E7B943 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17518/*"bit_result_skinchange"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1D0F30C(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12496/*"START_COSTUME_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__115_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4E7B945 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_17503/*"bit_result_friendship_exceed"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    sub_1D0F0B4(&StringLiteral_12500/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4E7B945 = 1;
  }
  if ( data )
  {
    Object_object__52624444 = AssetData__GetObject_object__52624444(
                                data,
                                (System_String_o *)StringLiteral_17503/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__52624444,
                                              (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4E70C9E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C9E = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1D0F30C(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12500/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetLimitUpCombineInfo_b__107_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4E7B942 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17496/*"bit_result_advent"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    sub_1D0F0B4(&StringLiteral_12503/*"START_LIMITUP_EFFECT"*/);
    byte_4E7B942 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17496/*"bit_result_advent"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1D0F30C(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12503/*"START_LIMITUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__113_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__52624444; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4E7B944 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_12504/*"START_LVEXCEED_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_17508/*"bit_result_limitbreak"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    byte_4E7B944 = 1;
  }
  if ( data )
  {
    Object_object__52624444 = AssetData__GetObject_object__52624444(
                                data,
                                (System_String_o *)StringLiteral_17508/*"bit_result_limitbreak"*/,
                                (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__52624444,
                                              (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4E70C9E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C9E = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1D0F30C(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12504/*"START_LVEXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__104_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4E7B93F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_12521/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_17513/*"bit_result_servant"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    byte_4E7B93F = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17513/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)Effect, 0, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1D0F30C(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12521/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__105_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4E7B940 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12521/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_17513/*"bit_result_servant"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    byte_4E7B940 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17513/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1D0F30C(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12521/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtEqCombineInfo_b__106_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4E7B941 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12521/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1D0F0B4(&StringLiteral_17513/*"bit_result_servant"*/);
    sub_1D0F0B4(&StringLiteral_11552/*"ResultEffect"*/);
    byte_4E7B941 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17513/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11552/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1D0F30C(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12521/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___ShowCostumeChangeMessage_b__192_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1D0F30C(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowLimitUpChangeInfo_b__167_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1D0F30C(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowNpChangeInfo_b__165_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1D0F30C(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeInfo_b__166_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1D0F30C(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeMessage_b__164_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1D0F30C(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__169_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1D0F30C(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___setSkillResultInfo_b__156_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineResultEffectComponent__EndDisp(this, method);
  CombineResultEffectComponent__CheckReturnCombineItem(this, v3);
}


void CombineResultEffectComponent___setSkillResultInfo_b__156_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effect; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v15; // x22
  __int64 v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UserServantEntity_o *v23; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  CommonUI_o *v37; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v40; // x25
  struct CombineResultEffectComponent_ClickDelegate_o *v41; // x8

  if ( (byte_4E7B949 & 1) == 0 )
  {
    sub_1D0F0B4(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass156_2__setSkillResultInfo_b__7__);
    sub_1D0F0B4(&CombineResultEffectComponent___c__DisplayClass156_2_TypeInfo);
    sub_1D0F0B4(&UserServantEntity_TypeInfo);
    byte_4E7B949 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_73359672(effect, 0);
  this->fields.effect = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.effect, 0, v4, v5, v6, v7, v8, v9);
  CombineResultEffectComponent__Close(this, v10);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    v16 = sub_1D0F300(CombineResultEffectComponent___c__DisplayClass156_2_TypeInfo);
    CombineResultEffectComponent___c__DisplayClass156_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass156_2_o *)v16,
      0);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 24) = this;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v16 + 24), (int32_t)this, v17, v18, v19, v20, v21, v22);
      v23 = (UserServantEntity_o *)sub_1D0F300(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_44525316(v23, v15, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v16 + 16) = callbackFunc;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v16 + 16), (int32_t)callbackFunc, v25, v26, v27, v28, v29, v30);
      this->fields.callbackFunc = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v31, v32, v33, v34, v35, v36);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v23 )
      {
        v37 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v23->fields.treasureDeviceLv1;
        v40 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1D0F300(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v40,
          (Il2CppObject *)v16,
          Method_CombineResultEffectComponent___c__DisplayClass156_2__setSkillResultInfo_b__7__,
          0);
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
    sub_1D0F30C(Instance, v12);
  }
  v41 = this->fields.callbackFunc;
  if ( v41 )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v41->fields.invoke_impl)(
      v41->fields.method_code,
      1,
      v41->fields.method);
}


void CombineResultEffectComponent___setSkillResultInfo_b__156_2(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1D0F30C(this, method);
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
  struct System_Int32_array *args; // x8
  bool result; // w0
  int32_t v10; // w8
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E7B8F8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7B8F8 = 1;
  }
  svtFlagEntity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_44066700(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0) )
  {
LABEL_13:
    v10 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_15:
    sub_1D0F30C(Instance, v6);
  }
  Instance = (Il2CppObject *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_13;
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v7 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_15;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v7->fields.args;
  if ( !args )
    goto LABEL_15;
  if ( LODWORD(args->max_length) <= 1 )
    sub_1D0F314(Instance);
  result = 1;
  this->fields.targetId = args->m_Items[1];
  v10 = args->m_Items[0];
LABEL_14:
  this->fields.targetIdOld = v10;
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
  const MethodInfo *v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x20
  __int64 v15; // x21
  struct UserServantEntity_o *v16; // x8
  __int64 v17; // x20
  __int64 v18; // x21
  int32_t v19; // w22
  int32_t v20; // w20
  ServantEntity_TransformInfo_o *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x23
  int32_t displayCount; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v26; // x20
  __int64 v27; // x21
  int32_t v28; // w20
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  System_String_o *klass; // x21
  System_String_o *condLabelColor; // x22
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  int32_t v36; // w21
  System_Int32_array *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Int32_array *skillIds; // x9
  struct System_String_array *titles; // x8
  int v46; // w23
  struct System_String_o *v47; // x1
  System_String_o *v48; // x0
  System_String_o *CondSpriteColor; // x0
  ServantSkillAddEntity_o *v50; // x9
  unsigned __int64 v51; // x8
  __int64 v52; // x10
  struct System_Int32_array *v53; // x11
  unsigned int max_length; // w13
  int32_t v55; // w11
  int32_t targetId; // w1
  int32_t v57; // w2
  int32_t TransformedSameSlotSkillId; // w8
  UserServantEntity_o *v59; // x21
  int32_t v60; // w23
  struct ServantEntity_o *v61; // x8
  __int64 v62; // x21
  __int64 v63; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x23
  int32_t v65; // w24
  int32_t targetLv; // w25
  System_Action_o *v67; // x26
  int32_t overrideTransformVal; // w8
  struct ServantEntity_o *transformedServant; // x9
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x21
  UserServantEntity_o *v71; // x22
  int32_t commandCardIndex; // w23
  int32_t commandCardExceedCount; // w24
  __int64 v74; // x25
  __int64 v75; // x26
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E7B92E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_clickNext__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7B92E = 1;
  }
  svtSkillAddEnt = 0;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_132;
  bgCollider = (UnityEngine_Collider_o *)UnityEngine_Collider__get_enabled(bgCollider, 0);
  if ( ((unsigned __int8)bgCollider & 1) == 0 )
    return;
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
               0);
        goto LABEL_19;
      }
      goto LABEL_132;
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
        this->fields.treasureDeviceEnabled = 0;
LABEL_29:
        CombineResultEffectComponent__EndDisp(this, v8);
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
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v9);
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
      goto LABEL_132;
    }
    kind = this->fields.kind;
  }
  if ( (unsigned int)kind <= 0x1A && ((1 << kind) & 0x4080402) != 0 )
  {
    bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowLimitUpInfo(this, method);
    if ( ((unsigned __int8)bgCollider & 1) != 0 )
    {
      v10 = Method_CombineResultEffectComponent_clickNext__;
      if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1D0F0CC(Method_CombineResultEffectComponent_clickNext__);
      v11 = (System_Reflection_MethodBase_o *)sub_1D0F098(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v12);
      bgCollider = (UnityEngine_Collider_o *)this->fields.limitUpResultCheck;
      if ( bgCollider )
      {
        if ( !LimitUpResultCheckComponent__CheckFinishedResultLimitUp((LimitUpResultCheckComponent_o *)bgCollider, 0) )
          return;
        goto LABEL_29;
      }
      goto LABEL_132;
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
            goto LABEL_132;
          v27 = *(_QWORD *)&baseUsrSvtData->fields.transformVal.fields.currentCryptoKey;
          v26 = *(_QWORD *)&baseUsrSvtData->fields.transformVal.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = v27;
          *(_QWORD *)&v79.fields.fakeValue = v26;
          bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                   v79,
                                                   0);
          if ( !this->fields.baseUsrSvtData )
            goto LABEL_132;
          v28 = (unsigned int)bgCollider ^ 1;
          bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetServantEntity(
                                                   this->fields.baseUsrSvtData,
                                                   (unsigned int)bgCollider ^ 1,
                                                   0);
          if ( !bgCollider )
            goto LABEL_132;
          TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)bgCollider, 0);
          klass = (System_String_o *)TransformInfo;
          if ( TransformInfo )
            condLabelColor = TransformInfo->fields.condLabelColor;
          else
            condLabelColor = 0;
          DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
          this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_45504796(
                                                       condLabelColor,
                                                       DefaultCondTitleLabelColor,
                                                       0);
          if ( klass )
            klass = (System_String_o *)klass[1].klass;
          DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
          v89 = ColorHelper__ParseColorCode_45504796(klass, DefaultCondTitleSpriteColor, 0);
          displayCount = this->fields.displayCount;
          this->fields.multiDisplayTitleSpriteColor = v89;
        }
        else
        {
          v28 = -1;
        }
        transformedServant = this->fields.transformedServant;
        this->fields.displayCount = displayCount - 1;
        if ( transformedServant )
        {
          commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
          v71 = this->fields.baseUsrSvtData;
          commandCardIndex = this->fields.commandCardIndex;
          commandCardExceedCount = this->fields.commandCardExceedCount;
          v75 = *(_QWORD *)&transformedServant->fields.id.fields.currentCryptoKey;
          v74 = *(_QWORD *)&transformedServant->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v81.fields.currentCryptoKey = v75;
          *(_QWORD *)&v81.fields.fakeValue = v74;
          bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                   v81,
                                                   0);
          if ( commandCardExceedResultWindow )
          {
            CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
              commandCardExceedResultWindow,
              v71,
              commandCardIndex,
              commandCardExceedCount,
              (int32_t)bgCollider,
              this->fields.multiDisplayTitleAfter,
              this->fields.multiDisplayTitleLabelColor,
              this->fields.multiDisplayTitleSpriteColor,
              v28,
              0);
            return;
          }
        }
LABEL_132:
        sub_1D0F30C(bgCollider, method);
      }
      goto LABEL_65;
    }
    if ( kind != 7 )
    {
LABEL_65:
      v32 = Method_CombineResultEffectComponent_clickNext__;
      if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1D0F0CC(Method_CombineResultEffectComponent_clickNext__);
      v33 = (System_Reflection_MethodBase_o *)sub_1D0F098(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
      if ( this->fields.kind != 24 )
        CombineResultEffectComponent__ReleaseVoiceData(this, v34);
      if ( !CombineResultEffectComponent__OpenNotification(this, v34) )
        CombineResultEffectComponent__FadeoutProcess(this, v35);
      return;
    }
  }
  else if ( (unsigned int)(kind - 2) >= 2 )
  {
    if ( !kind )
    {
      bgCollider = (UnityEngine_Collider_o *)this->fields.svtResultInfoWindow;
      if ( !bgCollider )
        goto LABEL_132;
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
        goto LABEL_132;
      }
      CombineResultEffectComponent__stopVoice(this, method);
    }
    goto LABEL_65;
  }
  if ( this->fields.displayCount < 1 )
    goto LABEL_65;
  v13 = this->fields.baseUsrSvtData;
  if ( !v13 )
    goto LABEL_132;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v77.fields.currentCryptoKey = v15;
  *(_QWORD *)&v77.fields.fakeValue = v14;
  bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v77, 0);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_132;
  if ( this->fields.isTransformServant )
  {
    bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0);
    v16 = this->fields.baseUsrSvtData;
    if ( this->fields.isSaveTransformServant )
    {
      if ( !v16 )
        goto LABEL_132;
      v18 = *(_QWORD *)&v16->fields.transformVal.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v16->fields.transformVal.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v78.fields.currentCryptoKey = v18;
      *(_QWORD *)&v78.fields.fakeValue = v17;
      bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v78, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_132;
      v19 = (unsigned int)bgCollider ^ 1;
      v20 = (int)bgCollider;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetServantEntity(
                                               this->fields.baseUsrSvtData,
                                               (unsigned int)bgCollider ^ 1,
                                               0);
      if ( !bgCollider )
        goto LABEL_132;
      v21 = ServantEntity__GetTransformInfo((ServantEntity_o *)bgCollider, 0);
      v22 = (System_String_o *)v21;
      if ( v21 )
        v23 = v21->fields.condLabelColor;
      else
        v23 = 0;
      v84 = TransformHelper__get_DefaultCondTitleLabelColor(0);
      this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_45504796(v23, v84, 0);
      if ( v22 )
        v22 = (System_String_o *)v22[1].klass;
      v85 = TransformHelper__get_DefaultCondTitleSpriteColor(0);
      v86 = ColorHelper__ParseColorCode_45504796(v22, v85, 0);
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.multiDisplayTitleSpriteColor = v86;
      if ( !bgCollider )
        goto LABEL_132;
      targetId = this->fields.targetId;
      v57 = v20;
    }
    else
    {
      if ( !v16 )
        goto LABEL_132;
      targetId = this->fields.targetId;
      v19 = (_DWORD)bgCollider - this->fields.displayCount;
      v57 = v19 - 1;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    }
    TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                   (UserServantEntity_o *)bgCollider,
                                   targetId,
                                   v57,
                                   v19,
                                   0);
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    this->fields.targetId = TransformedSameSlotSkillId;
    if ( !bgCollider )
      goto LABEL_132;
    bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                             (UserServantEntity_o *)bgCollider,
                                             v19,
                                             -1,
                                             -1,
                                             1,
                                             -1,
                                             1,
                                             0);
    v37 = (System_Int32_array *)bgCollider;
    if ( this->fields.kind == 7 )
    {
      v59 = this->fields.baseUsrSvtData;
      v60 = this->fields.targetId;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E7132C )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E7132C = 1;
      }
      bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v59 )
        goto LABEL_132;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedOldSkillId(
                                               v59,
                                               v60,
                                               *(_DWORD *)(bgCollider[7].fields.m_CachedPtr + 20),
                                               v19,
                                               0);
      this->fields.targetIdOld = (int)bgCollider;
    }
    v61 = this->fields.transformedServant;
    if ( !v61 )
      goto LABEL_132;
    v63 = *(_QWORD *)&v61->fields.id.fields.currentCryptoKey;
    v62 = *(_QWORD *)&v61->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v80.fields.currentCryptoKey = v63;
    *(_QWORD *)&v80.fields.fakeValue = v62;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v80, 0);
    goto LABEL_117;
  }
  v36 = (int)bgCollider;
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
    goto LABEL_132;
  v37 = (System_Int32_array *)bgCollider;
  bgCollider = (UnityEngine_Collider_o *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                           this->fields.baseUsrSvtData,
                                           &svtSkillAddEnt,
                                           this->fields.targetId,
                                           0);
  if ( ((unsigned __int8)bgCollider & 1) == 0 )
    goto LABEL_92;
  if ( !svtSkillAddEnt )
    goto LABEL_132;
  bgCollider = (UnityEngine_Collider_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)svtSkillAddEnt->fields.skillIds,
                                           0);
  if ( ((unsigned __int8)bgCollider & 1) != 0 )
  {
LABEL_92:
    v19 = 0;
  }
  else
  {
    if ( !svtSkillAddEnt )
      goto LABEL_132;
    skillIds = svtSkillAddEnt->fields.skillIds;
    if ( !skillIds )
      goto LABEL_132;
    titles = svtSkillAddEnt->fields.titles;
    if ( !titles )
      goto LABEL_132;
    v46 = LODWORD(skillIds->max_length) - this->fields.displayCount;
    if ( (unsigned int)v46 >= LODWORD(titles->max_length) )
LABEL_133:
      sub_1D0F314(bgCollider);
    v47 = titles->m_Items[v46];
    this->fields.multiDisplayTitleAfter = v47;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.multiDisplayTitleAfter,
      (int32_t)v47,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
    if ( !svtSkillAddEnt )
      goto LABEL_132;
    v48 = ServantSkillAddEntity__GetCondLabelColor(svtSkillAddEnt, 0);
    v82.fields.r = 0.0;
    v82.fields.g = 0.0;
    v82.fields.b = 0.0;
    v82.fields.a = 0.0;
    this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_45504796(v48, v82, 0);
    bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
    if ( !svtSkillAddEnt )
      goto LABEL_132;
    CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(svtSkillAddEnt, 0);
    v83.fields.r = 0.0;
    v83.fields.g = 0.0;
    v83.fields.b = 0.0;
    v83.fields.a = 0.0;
    this->fields.multiDisplayTitleSpriteColor = ColorHelper__ParseColorCode_45504796(CondSpriteColor, v83, 0);
    if ( !v37 )
      goto LABEL_132;
    v19 = 0;
    if ( (int)v37->max_length > 0 )
    {
      v50 = svtSkillAddEnt;
      v51 = 0;
      v52 = 4LL * (unsigned int)v37->max_length;
      while ( v52 != v51 )
      {
        if ( !v50 )
          goto LABEL_132;
        v53 = v50->fields.skillIds;
        if ( !v53 )
          goto LABEL_132;
        max_length = v53->max_length;
        if ( !max_length )
          goto LABEL_133;
        if ( v37->m_Items[v51 / 4] == v53->m_Items[0] )
        {
          if ( v46 >= max_length )
            goto LABEL_133;
          v55 = v53->m_Items[v46];
          this->fields.targetId = v55;
          v37->m_Items[v51 / 4] = v55;
        }
        v51 += 4LL;
        if ( v52 == v51 )
          goto LABEL_92;
      }
      goto LABEL_133;
    }
  }
LABEL_117:
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v65 = this->fields.targetId;
  targetLv = this->fields.targetLv;
  --this->fields.displayCount;
  v67 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
  if ( !skillResultInfoWindow )
    goto LABEL_132;
  if ( this->fields.isSaveTransformServant )
    overrideTransformVal = v19;
  else
    overrideTransformVal = -1;
  SkillUpResultWindowComponent__OpenSkillUpResultInfo(
    skillResultInfoWindow,
    v65,
    targetLv,
    v67,
    this->fields.targetIdOld,
    this->fields.targetLvOld,
    v36,
    v37,
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
}


void CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UserServantEntity_o *resUsrSvtData; // x0
  __int64 costumeOverrideTransformVal; // x1
  int32_t ServantId; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v19; // x8
  ServantVoiceMaster_o *v20; // x22
  __int64 v21; // x23
  __int64 v22; // x24
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4E7B904 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7B904 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.asstName, 0, v2, v3, v4, v5, v6, v7);
  this->fields.playVoiceList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceList, 0, v9, v10, v11, v12, v13, v14);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( this->fields.kind == 15 )
    costumeOverrideTransformVal = (unsigned int)this->fields.costumeOverrideTransformVal;
  else
    costumeOverrideTransformVal = 0xFFFFFFFFLL;
  if ( !resUsrSvtData )
    goto LABEL_15;
  ServantId = UserServantEntity__GetServantId(resUsrSvtData, costumeOverrideTransformVal, 0);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(ServantId, 0);
  resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !resUsrSvtData )
    goto LABEL_15;
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)resUsrSvtData,
                                           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v19 = this->fields.resUsrSvtData;
  if ( !v19 )
    goto LABEL_15;
  v20 = (ServantVoiceMaster_o *)resUsrSvtData;
  v22 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v22;
  *(_QWORD *)&v38.fields.fakeValue = v21;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v38, 0);
  if ( !v20 )
LABEL_15:
    sub_1D0F30C(resUsrSvtData, costumeOverrideTransformVal);
  Entity = ServantVoiceMaster__getEntity(v20, 2, SvtVoiceId, (int32_t)resUsrSvtData, 0);
  this->fields.svtVoiceEntity = Entity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtVoiceEntity,
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
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.asstName,
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

  if ( (byte_4E7B918 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4E7B918 = 1;
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
                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  ServantVoiceEntity_o *svtVoiceEntity; // x21
  System_Collections_Generic_List_object__o *CntStopVoiceList; // x0
  ServantVoiceEntity_o *v8; // x0
  struct UserServantEntity_o *v9; // x8
  __int64 v10; // x20
  __int64 v11; // x22
  int32_t v12; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4E7B917 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7B917 = 1;
  }
  if ( this->fields.isChangeCardImg )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_20;
    resUsrSvtData = (UserServantEntity_o *)UserServantEntity__isLimitCountMax(resUsrSvtData, 0);
    svtVoiceEntity = this->fields.svtVoiceEntity;
    if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
    {
      if ( !svtVoiceEntity )
        return 0;
      CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getCntStopVoiceList(
                                                                        this->fields.svtVoiceEntity,
                                                                        this->fields.displayType,
                                                                        isPlayVoice,
                                                                        this->fields.genderType,
                                                                        this->fields.limitUpPlayVoiceLabel,
                                                                        0);
      if ( !CntStopVoiceList )
        return 0;
      goto LABEL_17;
    }
    if ( !svtVoiceEntity )
      return 0;
    v9 = this->fields.resUsrSvtData;
    if ( !v9 )
LABEL_20:
      sub_1D0F30C(resUsrSvtData, isPlayVoice);
    v11 = *(_QWORD *)&v9->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v9->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
    CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                                                      svtVoiceEntity,
                                                                      v12,
                                                                      this->fields.limitUpPlayVoiceLabel,
                                                                      this->fields.genderType,
                                                                      0);
    if ( !CntStopVoiceList )
      return 0;
  }
  else
  {
    v8 = this->fields.svtVoiceEntity;
    if ( !v8 )
      return 0;
    CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getLimitCntUpVoiceList(
                                                                      v8,
                                                                      this->fields.genderType,
                                                                      this->fields.limitUpPlayVoiceLabel,
                                                                      0);
    if ( !CntStopVoiceList )
      return 0;
  }
LABEL_17:
  if ( CntStopVoiceList->fields._size >= 1 )
    return (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                       CntStopVoiceList,
                                       0,
                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return 0;
}


void CombineResultEffectComponent__getSvtVoiceData(
        CombineResultEffectComponent_o *this,
        int32_t voiceId,
        int32_t costumeId,
        bool isLimitUp,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int v9; // w22
  int32_t v12; // w2
  char v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 costumeOverrideTransformVal; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t ServantId; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v22; // x8
  ServantLimitImageMaster_o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v28; // w2
  char v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v36; // w2
  char v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v9 = costumeId;
  if ( (byte_4E7B903 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7B903 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.asstName,
    0,
    costumeId,
    isLimitUp,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.playVoiceList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.playVoiceList, 0, v12, v13, v14, v15, v16, v17);
  if ( voiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( this->fields.kind == 15 )
      costumeOverrideTransformVal = (unsigned int)this->fields.costumeOverrideTransformVal;
    else
      costumeOverrideTransformVal = 0xFFFFFFFFLL;
    if ( !resUsrSvtData )
      goto LABEL_27;
    ServantId = UserServantEntity__GetServantId(resUsrSvtData, costumeOverrideTransformVal, 0);
    voiceId = ServantVoiceMaster__getSvtVoiceId(ServantId, 0);
  }
  if ( v9 <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_27;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_45498924(resUsrSvtData->fields.limitCount, 0);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(resUsrSvtData, 0, 0);
    v9 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  resUsrSvtData = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v22 = this->fields.resUsrSvtData;
  if ( !v22 )
    goto LABEL_27;
  v23 = (ServantLimitImageMaster_o *)resUsrSvtData;
  v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v25;
  *(_QWORD *)&v42.fields.fakeValue = v24;
  resUsrSvtData = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v42, 0);
  if ( !v23
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v23,
                                       (int32_t)resUsrSvtData,
                                       v9,
                                       0),
        (resUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (resUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)resUsrSvtData,
                                                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0 )
  {
LABEL_27:
    sub_1D0F30C(resUsrSvtData, costumeOverrideTransformVal);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)resUsrSvtData,
             2,
             voiceId,
             ServantLimitCountSealAfter,
             0);
  this->fields.svtVoiceEntity = Entity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtVoiceEntity,
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
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.asstName,
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
  Il2CppObject *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4E7B905 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_EndLoad__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4E7B905 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v5 = (SoundManager_o *)Instance;
    v6 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0);
    if ( !v5 )
      sub_1D0F30C(v7, v8);
    SoundManager__LoadAudioAssetStorage(v5, asstName, v6, 1, 0);
  }
  else
  {
    CombineResultEffectComponent__EndLoad(this, method);
  }
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
  int32_t v8; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v10; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v2 = this;
  if ( (byte_4E7B909 & 1) == 0 )
  {
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1D0F0B4(&StringLiteral_3084/*"BaseSvtNodeName"*/);
    byte_4E7B909 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v5;
  *(_QWORD *)&v11.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1D0F30C(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3084/*"BaseSvtNodeName"*/,
    0,
    1,
    v10);
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
  int32_t ServantLimitCountSealAfter; // w24
  CombineResultEffectComponent_o *CardImageLimitCount; // x0
  const MethodInfo *v18; // x3
  int32_t v19; // w23
  CombineResultEffectComponent_o *gameObject; // x0
  UserServantEntity_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x21
  const MethodInfo *v23; // x2
  ServantOverwriteStatus_o *ResolveOverwriteStatus; // x0
  UnityEngine_Component_o *v25; // x19
  UnityEngine_Transform_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7B913 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_4378/*"CardScale"*/);
    sub_1D0F0B4(&StringLiteral_3083/*"BaseSvtCardNodeName"*/);
    byte_4E7B913 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_28;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_28;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3083/*"BaseSvtCardNodeName"*/,
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
                   (System_String_o *)StringLiteral_4378/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_28;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  overrideTransformVal = this->fields.kind == 15 ? this->fields.costumeOverrideTransformVal : -1;
  fsm = (__int64)this->fields.baseUsrSvtData;
  if ( !fsm )
    goto LABEL_28;
  ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)fsm, overrideTransformVal, 0);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_28;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_28;
  v13 = (ServantLimitImageMaster_o *)fsm;
  v15 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v27, 0);
  if ( !v13 )
    goto LABEL_28;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v13, ServantId, fsm, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
          v18);
  if ( !v8 )
    goto LABEL_28;
  v19 = fsm;
  gameObject = (CombineResultEffectComponent_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v21 = this->fields.baseUsrSvtData;
  v22 = (UnityEngine_GameObject_o *)gameObject;
  ResolveOverwriteStatus = CombineResultEffectComponent__GetResolveOverwriteStatus(gameObject, v21, v23);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_42023316(
                   v22,
                   v21,
                   v19,
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
  v25 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v26 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4E70C99 )
  {
    fsm = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v25, 0)) == 0) )
  {
LABEL_28:
    sub_1D0F30C(fsm, *(_QWORD *)&changeNameType);
  }
  v28.fields.x = Value;
  v28.fields.y = Value;
  v28.fields.z = Value;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v28, 0);
}


void CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UserServantEntity_o *resUsrSvtData; // x0
  __int64 v11; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v13; // x8
  int32_t face; // w20
  int32_t costumeOverrideTransformVal; // w21
  int32_t v16; // w22
  int32_t FigureImage; // w2
  const MethodInfo *v18; // x5

  if ( (byte_4E7B911 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8535/*"LimitUpResSvtNodeName"*/);
    byte_4E7B911 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  this->fields.playVoiceList = CostumeSvtVoiceList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.playVoiceList,
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
      sub_1D0F314(resUsrSvtData);
    v13 = playVoiceList->m_Items[0];
    if ( !v13 )
LABEL_14:
      sub_1D0F30C(resUsrSvtData, v11);
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
    (System_String_o *)StringLiteral_8535/*"LimitUpResSvtNodeName"*/,
    v18);
}


void CombineResultEffectComponent__setEffectEnable(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1D0F30C(0, method);
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
  int32_t v9; // w21
  CombineResultEffectComponent_o *ImageLimitCount; // x0
  const MethodInfo *v11; // x3
  int32_t ResolveImageLimitCount; // w2
  const MethodInfo *v13; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4E7B90C & 1) == 0 )
  {
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8534/*"LimitUpBaseSvtNodeName"*/);
    byte_4E7B90C = 1;
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
    sub_1D0F30C(baseUsrSvtData, costumeOverrideTransformVal);
  }
  v6 = (int)baseUsrSvtData;
  v8 = *(_QWORD *)&v5->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&v5->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v14, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetImageLimitCount(v6, v9, 0);
  ResolveImageLimitCount = CombineResultEffectComponent__GetResolveImageLimitCount(
                             ImageLimitCount,
                             (int32_t)ImageLimitCount,
                             this->fields.baseUsrSvtData,
                             v11);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    0,
    ResolveImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8534/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v13);
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

  if ( (byte_4E7B912 & 1) == 0 )
  {
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8534/*"LimitUpBaseSvtNodeName"*/);
    byte_4E7B912 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->max_length) )
      sub_1D0F314(LimitUpSvtVoiceList);
    v9 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v9 )
      sub_1D0F30C(LimitUpSvtVoiceList, v8);
    face = v9->fields.face;
  }
  else
  {
    face = 0;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCnt, 0);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    svtId,
    ImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8534/*"LimitUpBaseSvtNodeName"*/,
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
  struct UICharaGraphTexture_o **p_nameRevealCard; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Transform_o *v24; // x19
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7B915 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_4378/*"CardScale"*/);
    sub_1D0F0B4(&StringLiteral_3083/*"BaseSvtCardNodeName"*/);
    byte_4E7B915 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3083/*"BaseSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_4378/*"CardScale"*/,
                            0);
  if ( !fsm )
    goto LABEL_18;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  if ( !v12 )
    goto LABEL_18;
  v14 = Value;
  gameObject = UnityEngine_Component__get_gameObject(v12, 0);
  TexturePrefab = CharaGraphManager__CreateTexturePrefab(gameObject, svtId, limitCnt, 0, 0, 10, 0, changeNameType, 0);
  p_nameRevealCard = &this->fields.nameRevealCard;
  this->fields.nameRevealCard = TexturePrefab;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.nameRevealCard,
    (int32_t)TexturePrefab,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v24 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4E70C99 )
  {
    fsm = (PlayMakerFSM_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  if ( !v24
    || (UnityEngine_Transform__set_localPosition(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0)) == 0 )
  {
LABEL_18:
    sub_1D0F30C(fsm, *(_QWORD *)&svtId);
  }
  v25.fields.x = v14;
  v25.fields.y = v14;
  v25.fields.z = v14;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v25, 0);
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
  float Value; // s0
  float v10; // s8
  int32_t v11; // w22
  UserServantEntity_o *resUsrSvtData; // x21
  UnityEngine_GameObject_o *v13; // x23
  ServantOverwriteStatus_o *OverwriteStatus; // x6
  int32_t overrideTransformVal; // w8
  UnityEngine_Component_o *v16; // x19
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v3 = changeNameType;
  if ( (byte_4E7B916 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_4378/*"CardScale"*/);
    sub_1D0F0B4(&StringLiteral_11554/*"ResultSvtCardNodeName"*/);
    byte_4E7B916 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11554/*"ResultSvtCardNodeName"*/,
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
                   (System_String_o *)StringLiteral_4378/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  fsm = (__int64)this->fields.resUsrSvtData;
  v10 = Value;
  *(_QWORD *)&changeNameType = this->fields.kind == 15
                             ? (unsigned int)this->fields.costumeOverrideTransformVal
                             : 0xFFFFFFFFLL;
  if ( !fsm )
    goto LABEL_25;
  fsm = UserServantEntity__GetCardImageLimitCountStage((UserServantEntity_o *)fsm, changeNameType, 0, 0, 0);
  if ( !v8 )
    goto LABEL_25;
  v11 = fsm;
  fsm = (__int64)UnityEngine_Component__get_gameObject(v8, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v13 = (UnityEngine_GameObject_o *)fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(this->fields.resUsrSvtData, 0, 0);
  overrideTransformVal = this->fields.kind == 15 ? this->fields.costumeOverrideTransformVal : -1;
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_42023316(
                   v13,
                   resUsrSvtData,
                   v11,
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
  v16 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v17 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4E70C99 )
  {
    fsm = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  if ( !v17
    || (UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v16, 0)) == 0) )
  {
LABEL_25:
    sub_1D0F30C(fsm, *(_QWORD *)&changeNameType);
  }
  v18.fields.x = v10;
  v18.fields.y = v10;
  v18.fields.z = v10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v18, 0);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v16, 1.89, 0);
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
  int32_t ServantLimitCountSealAfter; // w23
  CombineResultEffectComponent_o *CardImageLimitCount; // x0
  const MethodInfo *v18; // x3
  int32_t v19; // w22
  CombineResultEffectComponent_o *gameObject; // x0
  UserServantEntity_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x21
  const MethodInfo *v23; // x2
  ServantOverwriteStatus_o *ResolveOverwriteStatus; // x0
  UnityEngine_Component_o *v25; // x19
  UnityEngine_Transform_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7B914 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_4378/*"CardScale"*/);
    sub_1D0F0B4(&StringLiteral_11554/*"ResultSvtCardNodeName"*/);
    byte_4E7B914 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11554/*"ResultSvtCardNodeName"*/,
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
                   (System_String_o *)StringLiteral_4378/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  fsm = (__int64)this->fields.resUsrSvtData;
  if ( !fsm )
    goto LABEL_25;
  v10 = Value;
  ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)fsm, -1, 0);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v13 = (ServantLimitImageMaster_o *)fsm;
  v15 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v15;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v27, 0);
  if ( !v13 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v13, ServantId, fsm, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
          v18);
  if ( !v8 )
    goto LABEL_25;
  v19 = fsm;
  gameObject = (CombineResultEffectComponent_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v21 = this->fields.resUsrSvtData;
  v22 = (UnityEngine_GameObject_o *)gameObject;
  ResolveOverwriteStatus = CombineResultEffectComponent__GetResolveOverwriteStatus(gameObject, v21, v23);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_42023316(
                   v22,
                   v21,
                   v19,
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
  v25 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v26 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4E70C99 )
  {
    fsm = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v25, 0)) == 0) )
  {
LABEL_25:
    sub_1D0F30C(fsm, *(_QWORD *)&changeNameType);
  }
  v28.fields.x = v10;
  v28.fields.y = v10;
  v28.fields.z = v10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v28, 0);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v25, 1.89, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__setSkillResultInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Instance; // x0
  unsigned __int64 lv; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  long double v18; // q0
  SkillUpResultWindowComponent_o *v19; // x20
  UserServantEntity_o *v20; // x21
  int32_t v21; // w22
  int32_t v22; // w23
  System_Action_o *v23; // x24
  const MethodInfo *v24; // x2
  struct UserServantEntity_o *v25; // x8
  __int64 v26; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_String_o *v34; // x0
  const MethodInfo *v35; // x2
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_String_o *v45; // x0
  UserServantEntity_o *v46; // x20
  struct ServantVoiceData_array *v47; // x8
  struct UserServantEntity_o *v48; // x8
  __int64 v49; // x20
  __int64 v50; // x21
  struct UserServantEntity_o *v51; // x8
  int v52; // w21
  int v53; // w20
  struct UserServantEntity_o *v54; // x8
  __int64 v55; // x22
  __int64 v56; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x21
  int32_t v58; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v60; // w8
  System_Int32_array *v61; // x20
  struct UserServantEntity_o *v62; // x8
  ServantSkillAddEntity_o *v63; // x21
  __int64 v64; // x22
  __int64 v65; // x0
  __int64 v66; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v68; // x20
  __int64 v69; // x27
  int32_t v70; // w22
  struct UserServantEntity_o *v71; // x8
  __int64 v72; // x23
  __int64 v73; // x24
  int v74; // w8
  int v75; // w9
  __int64 v76; // x23
  struct UserServantEntity_o *v77; // x8
  __int64 v78; // x23
  __int64 v79; // x24
  int32_t v80; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  UserServantEntity_o *v84; // x8
  Il2CppObject *v85; // x23
  struct UserServantEntity_o *v86; // x8
  __int64 v87; // x25
  __int64 v88; // x26
  int64_t v89; // x24
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v91; // x23
  struct UserServantEntity_o *v92; // x8
  __int64 v93; // x23
  __int64 v94; // x24
  bool IsForceReleaseSkillRankUp; // w29
  int v96; // w22
  _BOOL8 v97; // x0
  __int64 v98; // x1
  Il2CppObject *current; // x23
  __int64 v100; // x1
  NetworkManager_c *v101; // x0
  struct UserServantEntity_o *v102; // x8
  int32_t v103; // w24
  __int64 v104; // x26
  __int64 v105; // x27
  int64_t userIdNumber; // x25
  int32_t v107; // w3
  bool isForceRelease; // w29
  bool isRelease; // w22
  SkillUpResultWindowComponent_o *v110; // x20
  UserServantEntity_o *v111; // x21
  System_Action_o *v112; // x22
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  Il2CppObject *v114; // x20
  Il2CppObject *v115; // x21
  Il2CppObject *v116; // x20
  BalanceConfig_c *v117; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v119; // x21
  Il2CppObject *Name; // x0
  System_String_o *v121; // x0
  struct SkillUpResultWindowComponent_o *v122; // x21
  int32_t v123; // w22
  int32_t v124; // w23
  System_Action_o *v125; // x24
  struct UserServantEntity_o *v126; // x8
  int32_t v127; // w26
  int32_t v128; // w25
  __int64 v129; // x27
  __int64 v130; // x28
  int32_t v131; // w6
  float v132; // s0 OVERLAPPED
  float v133; // s1
  float v134; // s2
  float v135; // s3
  float r; // s4 OVERLAPPED
  float g; // s5
  float b; // s6
  float a; // s7
  SkillUpResultWindowComponent_o *v140; // x0
  int32_t v141; // w1
  int32_t v142; // w2
  System_Action_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  SkillUpResultWindowComponent_o *v146; // x20
  UserServantEntity_o *v147; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v149; // x23
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v151; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v152; // x21
  Il2CppObject *v153; // x0
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  struct UserServantEntity_o *v160; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v162; // w21
  _BOOL4 v163; // w22
  const MethodInfo *v164; // x1
  int32_t v165; // w2
  int32_t v166; // w3
  System_String_o *v167; // x4
  int32_t v168; // w5
  int64_t v169; // x6
  System_String_o *v170; // x7
  struct ServantVoiceData_array *playVoiceList; // x8
  struct UserServantEntity_o *v172; // x8
  __int128 v173; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v174; // x20
  Il2CppObject *v175; // x0
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  struct SvtCombineResultWindowComponent_o *v182; // x20
  struct UserServantEntity_o *v183; // x21
  int32_t v184; // w22
  System_Action_o *v185; // x23
  SvtCombineResultWindowComponent_o *v186; // x0
  UserServantEntity_o *v187; // x1
  int32_t v188; // w2
  System_Action_o *v189; // x3
  System_Action_o *v190; // x4
  Il2CppObject *v191; // x20
  AvalonSceneManager_c *v192; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v194; // x0
  intptr_t *v195; // x8
  SkillUpResultWindowComponent_o *v196; // x21
  int32_t v197; // w23
  System_Action_o *v198; // x24
  struct UserServantEntity_o *v199; // x8
  int32_t v200; // w26
  int32_t v201; // w25
  __int64 v202; // x27
  __int64 v203; // x28
  int32_t v204; // w27
  __int64 v205; // x22
  int32_t v206; // w2
  int32_t v207; // w3
  System_String_o *v208; // x4
  int32_t v209; // w5
  int64_t v210; // x6
  System_String_o *v211; // x7
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v213; // w2
  int32_t v214; // w3
  System_String_o *v215; // x4
  int32_t v216; // w5
  int64_t v217; // x6
  System_String_o *v218; // x7
  int32_t v219; // w2
  int32_t v220; // w3
  System_String_o *v221; // x4
  int32_t v222; // w5
  int64_t v223; // x6
  System_String_o *v224; // x7
  __int64 v225; // x23
  System_Action_o *v226; // x24
  int32_t v227; // w2
  int32_t v228; // w3
  System_String_o *v229; // x4
  int32_t v230; // w5
  int64_t v231; // x6
  System_String_o *v232; // x7
  Il2CppObject *v233; // x21
  CombineResultEffectComponent_ClickDelegate_o *v234; // x22
  int32_t v235; // w2
  int32_t v236; // w3
  System_String_o *v237; // x4
  int32_t v238; // w5
  int64_t v239; // x6
  System_String_o *v240; // x7
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v242; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v244; // x23
  System_Action_o *v245; // x24
  struct SkillUpResultWindowComponent_o *skillResultInfoWindow; // x22
  int32_t v247; // w23
  int32_t targetLv; // w24
  System_Action_o *v249; // x25
  int32_t targetIdOld; // w26
  int32_t targetLvOld; // w27
  int v252; // w11
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v254; // x21
  struct UserServantEntity_o *v255; // x8
  ServantSkillAddMaster_o *v256; // x21
  __int64 v257; // x22
  __int64 v258; // x23
  struct UserServantEntity_o *v259; // x8
  int32_t v260; // w22
  int32_t targetId; // w24
  int32_t v262; // w23
  ServantSkillAddEntity_o *EnableEntity; // x0
  int32_t v264; // w2
  int32_t v265; // w3
  System_String_o *v266; // x4
  int32_t v267; // w5
  int64_t v268; // x6
  System_String_o *v269; // x7
  struct System_String_array *titles; // x8
  struct System_String_o *v271; // x1
  System_String_o *CondLabelColor; // x0
  System_String_o *CondSpriteColor; // x0
  System_String_o *v274; // x22
  Il2CppObject *v275; // x21
  Il2CppObject *v276; // x0
  AvalonSceneManager_c *v277; // x8
  System_Action_o *v278; // x21
  UserServantEntity_o *kind; // [xsp+0h] [xbp-140h]
  bool methoda; // [xsp+8h] [xbp-138h]
  char isDispLv; // [xsp+18h] [xbp-128h]
  System_String_o *multiSkillDisplayTitle; // [xsp+20h] [xbp-120h]
  int32_t overrideTransformVal; // [xsp+30h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v284; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v285; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v286; // [xsp+90h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v287; // [xsp+B0h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+C8h] [xbp-78h] BYREF
  int32_t dispLimitCount; // [xsp+D8h] [xbp-68h]
  int32_t v290; // [xsp+DCh] [xbp-64h] BYREF
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v301; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v302; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v303; // 0:x0.16
  UnityEngine_Color_o v304; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v305; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E7B91B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_CheckReturnCombineItem__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__156_0__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__156_1__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__156_2__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__156_6__);
    sub_1D0F0B4(&CombineResultFormManager_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass156_0__setSkillResultInfo_b__4__);
    sub_1D0F0B4(&CombineResultEffectComponent___c__DisplayClass156_0_TypeInfo);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass156_1__setSkillResultInfo_b__3__);
    sub_1D0F0B4(&CombineResultEffectComponent___c__DisplayClass156_1_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10979/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/);
    sub_1D0F0B4(&StringLiteral_10980/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7B91B = 1;
  }
  v290 = 0;
  entity = 0;
  memset(&v287, 0, sizeof(v287));
  this->fields.skipEndDispAfterVoicePlayed = 0;
  CombineResultEffectComponent__SetTransformData(this, method);
  v3 = sub_1D0F300(CombineResultEffectComponent___c__DisplayClass156_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass156_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass156_0_o *)v3,
    0);
  if ( !v3 )
    goto LABEL_243;
  *(_QWORD *)(v3 + 24) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_166;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_243;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_243;
      v151 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v152 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v286.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v286.fields.fakeValue = v151;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v285 = v286;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v285, 0);
      if ( !v152 )
        goto LABEL_243;
      v153 = DataMasterBase_object__object__long___GetEntity(
               v152,
               Instance,
               (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v153;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData,
        (int32_t)v153,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
LABEL_166:
      v160 = this->fields.baseUsrSvtData;
      if ( !v160 )
        goto LABEL_243;
      lv = (unsigned int)v160->fields.lv;
      v290 = v160->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_243;
      v162 = resUsrSvtData->fields.lv;
      v163 = CombineResultEffectComponent__CheckCombineLimit(this, lv, v162, v13);
      if ( !System_Int32__Equals_67071248((int32_t)&v290, v162, 0)
        && this->fields.asstName
        && this->fields.svtVoiceEntity
        && (playVoiceList = this->fields.playVoiceList) != 0 )
      {
        this->fields.skipEndDispAfterVoicePlayed = v163;
        this->fields.maxPlayCnt = playVoiceList->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, v164);
      }
      else
      {
        this->fields.firstPlayedVoiceFlag = 0;
      }
      *(_QWORD *)(v3 + 16) = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), 0, v165, v166, v167, v168, v169, v170);
      if ( !v163 )
        goto LABEL_200;
      v205 = sub_1D0F300(CombineResultEffectComponent___c__DisplayClass156_1_TypeInfo);
      CombineResultEffectComponent___c__DisplayClass156_1___ctor(
        (CombineResultEffectComponent___c__DisplayClass156_1_o *)v205,
        0);
      if ( !v205 )
        goto LABEL_243;
      *(_QWORD *)(v205 + 24) = v3;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v205 + 24), v3, v206, v207, v208, v209, v210, v211);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v205 + 16) = callbackFunc;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v205 + 16), (int32_t)callbackFunc, v213, v214, v215, v216, v217, v218);
      this->fields.callbackFunc = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v219, v220, v221, v222, v223, v224);
      v225 = *(_QWORD *)(v205 + 24);
      v226 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(
        v226,
        (Il2CppObject *)v205,
        Method_CombineResultEffectComponent___c__DisplayClass156_1__setSkillResultInfo_b__3__,
        0);
      if ( !v225 )
        goto LABEL_243;
      *(_QWORD *)(v225 + 16) = v226;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v225 + 16), (int32_t)v226, v227, v228, v229, v230, v231, v232);
      v233 = *(Il2CppObject **)(v205 + 24);
      v234 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1D0F300(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v234,
        v233,
        Method_CombineResultEffectComponent___c__DisplayClass156_0__setSkillResultInfo_b__4__,
        0);
      this->fields.callbackFunc = v234;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)v234,
        v235,
        v236,
        v237,
        v238,
        v239,
        v240);
LABEL_200:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_204:
        CombineResultEffectComponent__EndDisp(this, (const MethodInfo *)lv);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v242 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v244 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v244, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v245 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v245, (Il2CppObject *)this, Method_CombineResultEffectComponent_CheckReturnCombineItem__, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_243;
      v186 = svtResultInfoWindow;
      v187 = v242;
      v188 = baseUsrSvtCollictionLv;
      v189 = v244;
      v190 = v245;
LABEL_203:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v186, v187, v188, v189, v190, 0);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1D0F15C(string___TypeInfo, 1);
      v25 = this->fields.baseUsrSvtData;
      if ( !v25 )
        goto LABEL_243;
      v26 = Instance;
      p_svtId = &v25->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v291.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v291.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v291, v24);
      if ( !v26 )
        goto LABEL_243;
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_244;
      *(_QWORD *)(v26 + 32) = Instance;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v26 + 32), Instance, v28, v29, v30, v31, v32, v33);
      v34 = System_String__Concat_65603304((System_String_array *)v26, 0);
      if ( UnityEngine_PlayerPrefs__GetInt_73317220(v34, 0) != 1 || (this->fields.kind | 0x10) == 0x1A )
        goto LABEL_22;
      Instance = sub_1D0F15C(string___TypeInfo, 1);
      v36 = this->fields.baseUsrSvtData;
      if ( !v36 )
        goto LABEL_243;
      v37 = Instance;
      v38 = &v36->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v292.fields.currentCryptoKey = v38;
      *(_QWORD *)&v292.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v292, v35);
      if ( !v37 )
        goto LABEL_243;
      if ( !*(_DWORD *)(v37 + 24) )
        goto LABEL_244;
      *(_QWORD *)(v37 + 32) = Instance;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v37 + 32), Instance, v39, v40, v41, v42, v43, v44);
      v45 = System_String__Concat_65603304((System_String_array *)v37, 0);
      UnityEngine_PlayerPrefs__SetInt(v45, 0, 0);
      v46 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      CombineResultFormManager__ResetVoiceList(v46, 0);
LABEL_22:
      Instance = (__int64)this->fields.limitUpResultCheck;
      if ( !Instance )
        goto LABEL_243;
      LimitUpResultCheckComponent__checkResultLimitUp(
        (LimitUpResultCheckComponent_o *)Instance,
        this->fields.kind,
        this->fields.baseUsrSvtData,
        this->fields.resUsrSvtData,
        this->fields.baseUsrSvtCollectionLimitCnt,
        this->fields.limitUpRewardGiftDataList,
        0);
      v47 = this->fields.playVoiceList;
      if ( !v47 )
      {
        v48 = this->fields.baseUsrSvtData;
        if ( v48 )
        {
          v50 = *(_QWORD *)&v48->fields.limitCount.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v48->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v293.fields.currentCryptoKey = v50;
          *(_QWORD *)&v293.fields.fakeValue = v49;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v293, 0);
          v51 = this->fields.baseUsrSvtData;
          v52 = Instance == 2;
          if ( v51 )
          {
            v53 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v51->fields.limitCount, 0) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v54 = this->fields.baseUsrSvtData;
              if ( !v54 )
                goto LABEL_243;
              v56 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
              v55 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
              v57 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1104LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v294.fields.currentCryptoKey = v56;
              *(_QWORD *)&v294.fields.fakeValue = v55;
              v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v294, 0);
              v52 = (v53 == 2)
                  | System_Linq_Enumerable__Contains_int_(
                      v57,
                      v58,
                      (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              v60 = this->fields.kind;
              isLimitUpSuppression = v60 != 10 && v60 != 26;
            }
            if ( (v52 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, (const MethodInfo *)lv);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v254 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(
              v254,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__156_6__,
              0);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v254, 1, 0);
              return;
            }
          }
        }
        goto LABEL_243;
      }
LABEL_129:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = v47->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, (const MethodInfo *)lv);
      }
      return;
    case 2:
    case 3:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_243;
      Instance = (__int64)UserServantEntity__getSkillIdList((UserServantEntity_o *)Instance, -1, -1, 1, -1, 0);
      v61 = (System_Int32_array *)Instance;
      if ( this->fields.isSaveTransformServant )
      {
        v62 = this->fields.baseUsrSvtData;
        if ( !v62 )
          goto LABEL_243;
        v64 = *(_QWORD *)&v62->fields.transformVal.fields.currentCryptoKey;
        v63 = *(ServantSkillAddEntity_o **)&v62->fields.transformVal.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v295.fields.currentCryptoKey = v64;
        *(_QWORD *)&v295.fields.fakeValue = v63;
        LODWORD(v63) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v295, 0);
        if ( (_DWORD)v63 == 1 )
        {
          Instance = (__int64)this->fields.baseUsrSvtData;
          if ( !Instance )
            goto LABEL_243;
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
            goto LABEL_243;
          v61 = (System_Int32_array *)Instance;
          LODWORD(v63) = 1;
          this->fields.targetId = UserServantEntity__GetTransformedSameSlotSkillId(
                                    this->fields.baseUsrSvtData,
                                    this->fields.targetId,
                                    0,
                                    1,
                                    0);
        }
      }
      else
      {
        if ( this->fields.isTransformServant )
          goto LABEL_206;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
        v255 = this->fields.baseUsrSvtData;
        if ( !v255 )
          goto LABEL_243;
        v256 = (ServantSkillAddMaster_o *)Instance;
        v258 = *(_QWORD *)&v255->fields.svtId.fields.currentCryptoKey;
        v257 = *(_QWORD *)&v255->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v303.fields.currentCryptoKey = v258;
        *(_QWORD *)&v303.fields.fakeValue = v257;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v303, 0);
        v259 = this->fields.baseUsrSvtData;
        if ( !v259 )
          goto LABEL_243;
        v260 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v259->fields.limitCount, 0);
        if ( !this->fields.baseUsrSvtData )
          goto LABEL_243;
        targetId = this->fields.targetId;
        v262 = Instance;
        Instance = UserServantEntity__getDispLimitCount(this->fields.baseUsrSvtData, 1, 0);
        if ( !v256 )
          goto LABEL_243;
        EnableEntity = ServantSkillAddMaster__GetEnableEntity(v256, v260, v262, targetId, 0, Instance, 1, 0);
        v63 = EnableEntity;
        if ( !EnableEntity )
          goto LABEL_207;
        Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntity->fields.titles, 0);
        if ( (Instance & 1) != 0 )
        {
LABEL_206:
          LODWORD(v63) = 0;
          goto LABEL_207;
        }
        titles = v63->fields.titles;
        if ( !titles )
          goto LABEL_243;
        if ( !LODWORD(titles->max_length) )
LABEL_244:
          sub_1D0F314(Instance);
        v271 = titles->m_Items[0];
        this->fields.multiDisplayTitleBefore = v271;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&this->fields.multiDisplayTitleBefore,
          (int32_t)v271,
          v264,
          v265,
          v266,
          v267,
          v268,
          v269);
        CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v63, 0);
        v304.fields.r = 0.0;
        v304.fields.g = 0.0;
        v304.fields.b = 0.0;
        v304.fields.a = 0.0;
        this->fields.multiDisplayTitleLabelColor = ColorHelper__ParseColorCode_45504796(CondLabelColor, v304, 0);
        CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v63, 0);
        v305.fields.r = 0.0;
        v305.fields.g = 0.0;
        v305.fields.b = 0.0;
        v305.fields.a = 0.0;
        LODWORD(v63) = 0;
        this->fields.multiDisplayTitleSpriteColor = ColorHelper__ParseColorCode_45504796(CondSpriteColor, v305, 0);
      }
LABEL_207:
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      v247 = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v249 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v249, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_243;
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = UserServantEntity__GetServantId((UserServantEntity_o *)Instance, -1, 0);
      if ( !skillResultInfoWindow )
        goto LABEL_243;
      a = this->fields.multiDisplayTitleSpriteColor.fields.a;
      b = this->fields.multiDisplayTitleSpriteColor.fields.b;
      g = this->fields.multiDisplayTitleSpriteColor.fields.g;
      r = this->fields.multiDisplayTitleSpriteColor.fields.r;
      v135 = this->fields.multiDisplayTitleLabelColor.fields.a;
      v134 = this->fields.multiDisplayTitleLabelColor.fields.b;
      v133 = this->fields.multiDisplayTitleLabelColor.fields.g;
      v132 = this->fields.multiDisplayTitleLabelColor.fields.r;
      if ( this->fields.isSaveTransformServant )
        v252 = (int)v63;
      else
        v252 = -1;
      multiSkillDisplayTitle = this->fields.multiDisplayTitleBefore;
      v131 = Instance;
      overrideTransformVal = v252;
      isDispLv = 0;
      methoda = this->fields.kind == 3;
      kind = this->fields.baseUsrSvtData;
      v140 = skillResultInfoWindow;
      v141 = v247;
      v142 = targetLv;
      v143 = v249;
      v144 = targetIdOld;
      v145 = targetLvOld;
LABEL_213:
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v140,
        v141,
        v142,
        v143,
        v144,
        v145,
        v131,
        v61,
        kind,
        methoda,
        1,
        isDispLv,
        multiSkillDisplayTitle,
        0,
        *(UnityEngine_Color_o *)&v132,
        *(UnityEngine_Color_o *)&r,
        overrideTransformVal,
        0);
      return;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v19 = this->fields.skillResultInfoWindow;
      v20 = this->fields.baseUsrSvtData;
      v21 = this->fields.targetId;
      v22 = this->fields.targetLv;
      v23 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v19 )
        goto LABEL_243;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_50278792(
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_243;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v172 = this->fields.baseUsrSvtData;
      if ( !v172 )
        goto LABEL_243;
      v173 = *(_OWORD *)&v172->fields.id.fields.fakeValue;
      v174 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v286.fields.currentCryptoKey = *(_OWORD *)&v172->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v286.fields.fakeValue = v173;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v284 = v286;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v284, 0);
      if ( !v174 )
        goto LABEL_243;
      v175 = DataMasterBase_object__object__long___GetEntity(
               v174,
               Instance,
               (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v175;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&this->fields.resUsrSvtData,
        (int32_t)v175,
        v176,
        v177,
        v178,
        v179,
        v180,
        v181);
      v182 = this->fields.svtResultInfoWindow;
      v183 = this->fields.resUsrSvtData;
      v184 = this->fields.baseUsrSvtCollictionLv;
      v185 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(
        v185,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__setSkillResultInfo_b__156_0__,
        0);
      if ( !v182 )
        goto LABEL_243;
      v186 = v182;
      v187 = v183;
      v188 = v184;
      v189 = v185;
      v190 = 0;
      goto LABEL_203;
    case 7:
    case 0x15:
      v65 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
        v65 = sub_1CE513C(v18);
      v66 = *(_QWORD *)(*(_QWORD *)(v65 + 192) + 16LL);
      if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
        v66 = sub_1CE513C(v18);
      Instance = **(_QWORD **)(v66 + 184);
      if ( !Instance )
        goto LABEL_243;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v68 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v68,
        (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
      v69 = 0;
      v70 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v70 > *(_DWORD *)(*(_QWORD *)(Instance + 184) + 40LL) )
        {
          if ( this->fields.kind == 7 )
          {
            Instance = (__int64)this->fields.baseUsrSvtData;
            if ( !Instance )
              goto LABEL_243;
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
            v84 = this->fields.baseUsrSvtData;
            dispLimitCount = Instance;
            if ( !v84 )
              goto LABEL_243;
            Instance = UserServantEntity__IsHeroine(v84, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_243;
              v85 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4E710BF )
              {
                sub_1D0F0B4(&NetworkManager_TypeInfo);
                byte_4E710BF = 1;
              }
              Instance = (__int64)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (__int64)NetworkManager_TypeInfo;
              }
              v86 = this->fields.baseUsrSvtData;
              if ( !v86 )
                goto LABEL_243;
              v88 = *(_QWORD *)&v86->fields.svtId.fields.currentCryptoKey;
              v87 = *(_QWORD *)&v86->fields.svtId.fields.fakeValue;
              v89 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v298.fields.currentCryptoKey = v88;
              *(_QWORD *)&v298.fields.fakeValue = v87;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v298, 0);
              if ( !v85 )
                goto LABEL_243;
              Instance = UserServantCollectionMaster__TryGetEntity(
                           (UserServantCollectionMaster_o *)v85,
                           &entity,
                           v89,
                           Instance,
                           0);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)entity;
                if ( !entity )
                  goto LABEL_243;
                costumeIds = entity->fields.costumeIds;
                if ( !costumeIds )
                  goto LABEL_243;
                if ( costumeIds->max_length )
                {
                  v91 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v91,
                               (const MethodInfo_325CB7C *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v91, 0);
                    dispLimitCount = Instance;
                  }
                }
              }
            }
            v92 = this->fields.baseUsrSvtData;
            if ( !v92 )
              goto LABEL_243;
            v94 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
            v93 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v299.fields.currentCryptoKey = v94;
            *(_QWORD *)&v299.fields.fakeValue = v93;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v299, 0);
            if ( !v69 )
              goto LABEL_243;
            if ( !MasterData_object )
              goto LABEL_243;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  Instance,
                                  *(_DWORD *)(v69 + 20),
                                  this->fields.targetIdOld,
                                  0);
            if ( !Instance )
              goto LABEL_243;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v286,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            IsForceReleaseSkillRankUp = 0;
            LOBYTE(v96) = 0;
            *(_OWORD *)&v287.fields._list = *(_OWORD *)&v286.fields.currentCryptoKey;
            v287.fields._current = (Il2CppObject *)v286.fields.fakeValue;
            do
            {
              v97 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v287,
                      (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v97 )
                break;
              current = v287.fields._current;
              if ( !v287.fields._current )
                sub_1D0F30C(v97, v98);
              if ( !ServantSkillEntity__isEnable((ServantSkillEntity_o *)v287.fields._current, 0, 0) )
                goto LABEL_121;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4E710BF )
              {
                sub_1D0F0B4(&NetworkManager_TypeInfo);
                byte_4E710BF = 1;
              }
              v101 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v101 = NetworkManager_TypeInfo;
              }
              v102 = this->fields.baseUsrSvtData;
              if ( !v102 )
                sub_1D0F30C(v101, v100);
              v103 = v102->fields.lv;
              v105 = *(_QWORD *)&v102->fields.limitCount.fields.currentCryptoKey;
              v104 = *(_QWORD *)&v102->fields.limitCount.fields.fakeValue;
              userIdNumber = v101->static_fields->userIdNumber;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v300.fields.currentCryptoKey = v105;
              *(_QWORD *)&v300.fields.fakeValue = v104;
              v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v300, 0);
              if ( ServantSkillEntity__isUse(
                     (ServantSkillEntity_o *)current,
                     userIdNumber,
                     v103,
                     v107,
                     dispLimitCount,
                     -1,
                     -1,
                     -1,
                     0) )
              {
                v96 = 1;
              }
              else
              {
LABEL_121:
                v96 = 0;
                IsForceReleaseSkillRankUp = ServantSkillEntity__IsForceReleaseSkillRankUp(
                                              (ServantSkillEntity_o *)current,
                                              0);
              }
            }
            while ( !(v96 | IsForceReleaseSkillRankUp) );
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v287,
              (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
            isForceRelease = IsForceReleaseSkillRankUp;
            isRelease = (unsigned __int8)v96 != 0;
          }
          else
          {
            isForceRelease = 0;
            isRelease = 0;
          }
          v196 = this->fields.skillResultInfoWindow;
          v197 = this->fields.targetLv;
          dispLimitCount = this->fields.targetId;
          v198 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
          System_Action___ctor(v198, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
          v199 = this->fields.baseUsrSvtData;
          if ( v199 )
          {
            v200 = this->fields.targetIdOld;
            v201 = this->fields.targetLvOld;
            v203 = *(_QWORD *)&v199->fields.svtId.fields.currentCryptoKey;
            v202 = *(_QWORD *)&v199->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v302.fields.currentCryptoKey = v203;
            *(_QWORD *)&v302.fields.fakeValue = v202;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v302, 0);
            if ( v68 )
            {
              v204 = Instance;
              Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                                    v68,
                                    (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v196 )
              {
                SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                  v196,
                  dispLimitCount,
                  v197,
                  v198,
                  v200,
                  v201,
                  v204,
                  (System_Int32_array *)Instance,
                  this->fields.baseUsrSvtData,
                  0,
                  isRelease,
                  0,
                  this->fields.multiDisplayTitleBefore,
                  isForceRelease,
                  this->fields.multiDisplayTitleLabelColor,
                  this->fields.multiDisplayTitleSpriteColor,
                  -1,
                  0);
                return;
              }
            }
          }
LABEL_243:
          sub_1D0F30C(Instance, lv);
        }
        v71 = this->fields.baseUsrSvtData;
        if ( !v71 )
          goto LABEL_243;
        v73 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
        v72 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v296.fields.currentCryptoKey = v73;
        *(_QWORD *)&v296.fields.fakeValue = v72;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v296, 0);
        if ( !MasterData_object )
          goto LABEL_243;
        Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              v70,
                              0);
        if ( !Instance )
          goto LABEL_243;
        v74 = *(_DWORD *)(Instance + 24);
        if ( v74 < 1 )
        {
LABEL_67:
          v77 = this->fields.baseUsrSvtData;
          if ( !v77 )
            goto LABEL_243;
          v79 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
          v78 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v297.fields.currentCryptoKey = v79;
          *(_QWORD *)&v297.fields.fakeValue = v78;
          v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v297, 0);
          Instance = (__int64)ServantSkillMaster__GetEntity((ServantSkillMaster_o *)MasterData_object, v80, v70, 1, 0);
          if ( Instance )
          {
            lv = *(unsigned int *)(Instance + 28);
            v76 = v69;
LABEL_72:
            if ( !v68 )
              goto LABEL_243;
            items = v68->fields._items;
            v82 = Method_System_Collections_Generic_List_int__Add__;
            ++v68->fields._version;
            if ( !items )
              goto LABEL_243;
            size = v68->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v68,
                lv,
                *(const MethodInfo_393F3EC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
            }
            else
            {
              v68->fields._size = size + 1;
              items->m_Items[size] = lv;
            }
          }
          else
          {
            v76 = v69;
          }
          ++v70;
          v69 = v76;
          continue;
        }
        break;
      }
      v75 = 0;
      while ( v74 != v75 )
      {
        v76 = *(_QWORD *)(Instance + 8LL * v75 + 32);
        if ( !v76 )
          goto LABEL_243;
        lv = *(unsigned int *)(v76 + 28);
        if ( (_DWORD)lv == this->fields.targetId )
          goto LABEL_72;
        if ( v74 == ++v75 )
          goto LABEL_67;
      }
      goto LABEL_244;
    case 9:
      v146 = this->fields.skillResultInfoWindow;
      v147 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v149 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v149, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v146 )
        goto LABEL_243;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v146, v147, oldFriendShipRank, v149, 0);
      return;
    case 0xB:
      v110 = this->fields.skillResultInfoWindow;
      v111 = this->fields.baseUsrSvtData;
      v112 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v112, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v110 )
        goto LABEL_243;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v110, v111, v112, 0);
      return;
    case 0xC:
    case 0xE:
    case 0x16:
    case 0x18:
      goto LABEL_204;
    case 0xD:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_243;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        0);
      goto LABEL_204;
    case 0xF:
      v47 = this->fields.playVoiceList;
      if ( v47 )
        goto LABEL_129;
      goto LABEL_204;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_183;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_236;
      this->fields.messageCallback = 0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&this->fields.messageCallback,
        0,
        v12,
        (int32_t)v13,
        v14,
        v15,
        v16,
        v17);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_243;
      v114 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E7132C )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E7132C = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v114 )
        goto LABEL_243;
      v115 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v114,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
               (const MethodInfo_3535B7C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_243;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_243;
      v116 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v117 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v117 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v117->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0);
        if ( !v116 )
          goto LABEL_243;
        v119 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v116, -1, -1, 0, 0, 0);
        v121 = System_String__Format(v119, Name, 0);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0);
        if ( !v115 )
          goto LABEL_243;
        v274 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v115, 0);
        if ( !v116 )
          goto LABEL_243;
        v275 = (Il2CppObject *)Instance;
        v276 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v116, -1, -1, 0, 0, 0);
        v121 = System_String__Format_65604080(v274, v275, v276, 0);
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))messageCallback->fields.invoke_impl)(
        messageCallback->fields.method_code,
        v121,
        messageCallback->fields.method);
LABEL_236:
      if ( !this->fields.callbackFunc )
        return;
      v191 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v277 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v277 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v277->static_fields->DEFAULT_FADE_TIME;
      v194 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      v195 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__156_2__;
LABEL_240:
      v278 = v194;
      System_Action___ctor(v194, (Il2CppObject *)this, *v195, 0);
      if ( !v191 )
        goto LABEL_243;
      CommonUI__maskFadeout((CommonUI_o *)v191, 1, DEFAULT_FADE_TIME, v278, 0);
      return;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_236;
LABEL_183:
      v191 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v192 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v192 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v192->static_fields->DEFAULT_FADE_TIME;
      v194 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      v195 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__156_1__;
      goto LABEL_240;
    case 0x14:
      Instance = (__int64)this->fields.commandCardExceedResultWindow;
      if ( !Instance )
        goto LABEL_243;
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
      goto LABEL_204;
    case 0x17:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_243;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_50099524(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        this->fields.oldFriendShipRank,
        0);
      goto LABEL_204;
    case 0x19:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_243;
      Instance = (__int64)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_243;
      v61 = *(System_Int32_array **)(Instance + 16);
      v122 = this->fields.skillResultInfoWindow;
      v123 = this->fields.targetId;
      v124 = this->fields.targetLv;
      v125 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v125, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v126 = this->fields.baseUsrSvtData;
      if ( !v126 )
        goto LABEL_243;
      v127 = this->fields.targetIdOld;
      v128 = this->fields.targetLvOld;
      v130 = *(_QWORD *)&v126->fields.svtId.fields.currentCryptoKey;
      v129 = *(_QWORD *)&v126->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v301.fields.currentCryptoKey = v130;
      *(_QWORD *)&v301.fields.fakeValue = v129;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v301, 0);
      if ( !v122 )
        goto LABEL_243;
      v131 = Instance;
      v132 = 0.0;
      v133 = 0.0;
      multiSkillDisplayTitle = (System_String_o *)StringLiteral_1/*""*/;
      v134 = 0.0;
      v135 = 0.0;
      r = 0.0;
      g = 0.0;
      b = 0.0;
      a = 0.0;
      v140 = v122;
      v141 = v123;
      v142 = v124;
      v143 = v125;
      v144 = v127;
      v145 = v128;
      methoda = this->fields.targetLvOld == 0;
      overrideTransformVal = -1;
      isDispLv = 1;
      kind = this->fields.baseUsrSvtData;
      goto LABEL_213;
    default:
      return;
  }
}


void CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  GrandQuestFolderBoardItem_o *p_player; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4E7B92B & 1) == 0 )
  {
    sub_1D0F0B4(&SoundManager_TypeInfo);
    byte_4E7B92B = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = (GrandQuestFolderBoardItem_o *)&this->fields.player;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0);
    p_player->klass = 0;
    sub_1D0F058(p_player, 0, v6, v7, v8, v9, v10, v11);
  }
}


void CombineResultEffectComponent_ClickDelegate___ctor(
        CombineResultEffectComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B425DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B42594;
}


System_IAsyncResult_o *CombineResultEffectComponent_ClickDelegate__BeginInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4E7B94D & 1) == 0 )
  {
    sub_1D0F0B4(&bool_TypeInfo);
    byte_4E7B94D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v9, callback, object);
}


void CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4E7B94E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
    byte_4E7B94E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.afterSkillList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


void CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *afterSkillList; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4E7B950 & 1) == 0 )
  {
    sub_1D0F0B4(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4E7B950 = 1;
  }
  v7 = sub_1D0F300(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList) == 0)
    || (items = afterSkillList->fields._items,
        v17 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_1D0F30C(afterSkillList, v9);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v7;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v19 + 4), v7, v10, v11, v12, v13, v14, v15);
  }
}


void CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *beforeSkillList; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4E7B94F & 1) == 0 )
  {
    sub_1D0F0B4(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4E7B94F = 1;
  }
  v7 = sub_1D0F300(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList) == 0)
    || (items = beforeSkillList->fields._items,
        v17 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_1D0F30C(beforeSkillList, v9);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v7;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v19 + 4), v7, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4E7B952 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4E7B952 = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1D0F30C(0, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4E7B953 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__);
    byte_4E7B953 = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1D0F30C(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4E7B951 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4E7B951 = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1D0F30C(0, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


void CombineResultEffectComponent_MessageDelegate___ctor(
        CombineResultEffectComponent_MessageDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1B42660;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1B42640;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1B425F8;
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
  return (System_IAsyncResult_o *)sub_1D0F068(this, &v6, callback, object);
}


void CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7B954 & 1) == 0 )
  {
    sub_1D0F0B4(&CombineResultEffectComponent___c_TypeInfo);
    byte_4E7B954 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields,
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


void CombineResultEffectComponent___c___EndPlayProcess_b__171_0(
        CombineResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


ServantVoicePerformance_o *CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__162_0(
        CombineResultEffectComponent___c_o *this,
        ServantVoiceData_o *voiceData,
        const MethodInfo *method)
{
  if ( !voiceData )
    sub_1D0F30C(this, 0);
  return voiceData->fields.additionalPerformances;
}


bool CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__162_1(
        CombineResultEffectComponent___c_o *this,
        ServantVoicePerformance_o *performanceData,
        const MethodInfo *method)
{
  if ( !performanceData )
    sub_1D0F30C(this, 0);
  return !System_String__IsNullOrEmpty(performanceData->fields.assetName, 0);
}


int32_t CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__117_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1D0F30C(this, a);
  return System_Int32__CompareTo_67071100((_DWORD)a + 24, b->fields.priority, 0);
}


void CombineResultEffectComponent___c__DisplayClass124_0___ctor(
        CombineResultEffectComponent___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass124_0___LoadCombineEffect_b__0(
        CombineResultEffectComponent___c__DisplayClass124_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7B955 & 1) == 0 )
  {
    sub_1D0F0B4(&CombineResultEffectComponent_TypeInfo);
    byte_4E7B955 = 1;
  }
  if ( assetData )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = assetData;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int32_t)assetData,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  ActionExtensions__Call(this->fields.action, 0);
}


void CombineResultEffectComponent___c__DisplayClass156_0___ctor(
        CombineResultEffectComponent___c__DisplayClass156_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass156_0___setSkillResultInfo_b__4(
        CombineResultEffectComponent___c__DisplayClass156_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0);
}


void CombineResultEffectComponent___c__DisplayClass156_1___ctor(
        CombineResultEffectComponent___c__DisplayClass156_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass156_1___setSkillResultInfo_b__3(
        CombineResultEffectComponent___c__DisplayClass156_1_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass156_1_o *v2; // x19
  struct CombineResultEffectComponent___c__DisplayClass156_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct CombineResultEffectComponent___c__DisplayClass156_0_o *v12; // x8
  struct CombineResultEffectComponent___c__DisplayClass156_0_o *v13; // x8
  struct CombineResultEffectComponent___c__DisplayClass156_0_o *v14; // x8
  struct CombineResultEffectComponent___c__DisplayClass156_0_o *v15; // x8
  struct CombineResultEffectComponent_o *v16; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__5; // x22
  CommonUI_o *v19; // x20
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_4E7B956 & 1) == 0 )
  {
    sub_1D0F0B4(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CombineResultEffectComponent___c__DisplayClass156_1_o *)sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass156_1__setSkillResultInfo_b__5__);
    byte_4E7B956 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_24;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  effect = (UnityEngine_Object_o *)_4__this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_73359672(effect, 0);
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass156_1_o *)v12->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[3].fields.__9__5 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this[3].fields.__9__5, 0, v6, v7, v8, v9, v10, v11);
  v13 = v2->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass156_1_o *)v13->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0);
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass156_1_o *)v14->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[4].fields.CS___8__locals1 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass156_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = v2->fields.CS___8__locals1;
    if ( v15 )
    {
      v16 = v15->fields.__4__this;
      if ( v16 )
      {
        baseUsrSvtData = v16->fields.baseUsrSvtData;
        _9__5 = v2->fields.__9__5;
        v19 = (CommonUI_o *)this;
        if ( !_9__5 )
        {
          _9__5 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1D0F300(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__5,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass156_1__setSkillResultInfo_b__5__,
            v20);
          v2->fields.__9__5 = _9__5;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v21, v22, v23, v24, v25, v26);
        }
        if ( v19 )
        {
          CommonUI__OpenCombineLimit(v19, baseUsrSvtData, _9__5, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_1D0F30C(this, method);
  }
  if ( this[9].fields.callback )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0);
    callback = v2->fields.callback;
    if ( !callback )
      goto LABEL_24;
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
  }
}


void CombineResultEffectComponent___c__DisplayClass156_1___setSkillResultInfo_b__5(
        CombineResultEffectComponent___c__DisplayClass156_1_o *this,
        bool decide,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent___c__DisplayClass156_0_o *CS___8__locals1; // x8
  CombineResultEffectComponent___c__DisplayClass156_1_o *v4; // x19
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this,
        (this = (CombineResultEffectComponent___c__DisplayClass156_1_o *)CS___8__locals1->fields.__4__this) == 0) )
  {
    sub_1D0F30C(this, decide);
  }
  LODWORD(this[8].fields.callback) = 0;
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
}


void CombineResultEffectComponent___c__DisplayClass156_2___ctor(
        CombineResultEffectComponent___c__DisplayClass156_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent___c__DisplayClass156_2___setSkillResultInfo_b__7(
        CombineResultEffectComponent___c__DisplayClass156_2_o *this,
        bool decide,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass156_2_o *v3; // x19
  struct CombineResultEffectComponent_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__8; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct CombineResultEffectComponent_o *v12; // x8

  v3 = this;
  if ( (byte_4E7B957 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_NetworkManager_getRequest_CardServantFlagRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass156_2_o *)sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass156_2__setSkillResultInfo_b__8__);
    byte_4E7B957 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__8 = v3->fields.__9__8;
  if ( !_9__8 )
  {
    _9__8 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__8,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass156_2__setSkillResultInfo_b__8__,
      0);
    v3->fields.__9__8 = _9__8;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v3->fields.__9__8, (int32_t)_9__8, v6, v7, v8, v9, v10, v11);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass156_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__8,
                                                                    (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v12 = v3->fields.__4__this;
  if ( !v12 || !this )
LABEL_11:
    sub_1D0F30C(this, decide);
  CardServantFlagRequest__beginRequest(
    (CardServantFlagRequest_o *)this,
    v12->fields.targetSvtId,
    v12->fields.targetFlagId,
    0);
}


void CombineResultEffectComponent___c__DisplayClass156_2___setSkillResultInfo_b__8(
        CombineResultEffectComponent___c__DisplayClass156_2_o *this,
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


void CombineResultEffectComponent___c__DisplayClass171_0___ctor(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass171_0___EndPlayProcess_b__1(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct CombineResultEffectComponent_o *_4__this; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (limitUpResultCheck = _4__this->fields.limitUpResultCheck) == 0 )
    sub_1D0F30C(this, method);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, this->fields.endDispAction, 1, v2);
}


void CombineResultEffectComponent___c__DisplayClass183_0___ctor(
        CombineResultEffectComponent___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass183_0___OpenNotification_b__0(
        CombineResultEffectComponent___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  int32_t limitCount; // w20
  int32_t svtId; // w21
  __int64 v5; // x1
  CombineResultEffectComponent_o *_4__this; // x0

  if ( (byte_4E7B958 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4E7B958 = 1;
  }
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(svtId, limitCount, 0);
  ServantCharaGraphEXOpenManager__WriteData(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, v5);
  CombineResultEffectComponent__FadeoutProcess(_4__this, 0);
}


void CombineResultEffectComponent___c__DisplayClass189_0___ctor(
        CombineResultEffectComponent___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass189_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass189_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4E7B959 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_CombineResultEffectComponent___c__DisplayClass189_0__ProfileChangeDecideAction_b__1__);
    byte_4E7B959 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass189_0__ProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
    sub_1D0F30C(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void CombineResultEffectComponent___c__DisplayClass189_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v7; // x20

  if ( (byte_4E7B95A & 1) == 0 )
  {
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7B95A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  Instance = (Il2CppObject *)_4__this->fields.limitUpResultCheck;
  if ( !Instance )
    goto LABEL_10;
  LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 1, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_10:
    sub_1D0F30C(Instance, v4);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}