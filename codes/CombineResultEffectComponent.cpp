void CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  System_Collections_Generic_HashSet_T__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C2B2D9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4C2B2D9 = 1;
  }
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_C0A3B0;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentFigureCollectList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.afterFigureCollectList, (int32_t)v6, v7, v8);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  v9 = sub_1C2D538(int___TypeInfo, 1);
  if ( !v9 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C2D6F4(v9, v9, v11);
  *(_DWORD *)(v9 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ChangeCardEffectLvList, v9, v11, v12);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v13 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v13,
    (const MethodInfo_363C904 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v13 )
LABEL_7:
    sub_1C2D6EC(v9, v10);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    1,
    (const MethodInfo_363DB08 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    10,
    (const MethodInfo_363DB08 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    26,
    (const MethodInfo_363DB08 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    19,
    (const MethodInfo_363DB08 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    24,
    (const MethodInfo_363DB08 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.limitUpKinds, (int32_t)v13, v14, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2B284 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4C2B284 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)Component_object, v4, v5);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C2D6EC(0, v7);
  v8 = UnityEngine_Component__GetComponent_object_(
         transform,
         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)v8, v9, v10);
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

  if ( (byte_4C2B298 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B298 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    sub_1C2D6EC(Instance, v8);
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
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C2B2CA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__CheckReturnCombineItem_b__170_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B2CA = 1;
  }
  if ( this->fields.returnQpNum >= 1
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.returnSvtIds, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    returnQpNum = this->fields.returnQpNum;
    returnSvtIds = this->fields.returnSvtIds;
    v6 = (CommonUI_o *)Instance;
    v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__CheckReturnCombineItem_b__170_0__,
      0);
    if ( !v6 )
      sub_1C2D6EC(v8, v9);
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

  if ( (byte_4C2B2D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2B2D3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v7);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0);
}


void CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0
  AssetData_o *effectAssetData; // x0
  AssetData_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2B2D0 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CombineResultEffectComponent_TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    byte_4C2B2D0 = 1;
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
    AssetManager__releaseAsset_40313100(v6, 0);
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = 0;
    sub_1C2D434((CGThumbnailListItem_o *)CombineResultEffectComponent_TypeInfo->static_fields, 0, v7, v8);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !svtResultInfoWindow )
LABEL_22:
    sub_1C2D6EC(svtResultInfoWindow, v3);
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

  if ( (byte_4C2B2D2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1C2D490(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_0__);
    byte_4C2B2D2 = 1;
  }
  v3 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_0__,
    0);
  if ( !limitCountSealDialog )
    sub_1C2D6EC(v7, v8);
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
  const MethodInfo *v31; // x3
  UnityEngine_Component_o *v32; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  struct System_Int32_array *v39; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v41; // x26
  StandFigureCollect_o *v42; // x27
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v52; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v54; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C2B2AF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StandFigureCollect_TypeInfo);
    byte_4C2B2AF = 1;
  }
  memset(&v65, 0, sizeof(v65));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v13 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v13,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
                                      (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v52);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40454792(
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
        v54 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v56 = (StandFigureCollect_o *)sub_1C2D6DC(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v56, 0, v54, 0);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v60 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v56,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                v62 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v62[4] = (Il2CppClass *)v56;
                sub_1C2D434((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1C2D6EC(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    v17,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v18 )
      break;
    current = (SvtMultiPortraitEntity_o *)v65.fields._current;
    if ( !v65.fields._current )
      sub_1C2D6EC(v18, v19);
    klass_high = HIDWORD(v65.fields._current[2].klass);
    if ( klass_high >= 1 )
      v22 = klass_high + 1;
    else
      v22 = 1;
    if ( !StandFigureNode )
      sub_1C2D6EC(v18, v19);
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
    v32 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C2D6EC(0, v29);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C2D434((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v30, v31);
    transform = UnityEngine_Component__get_transform(v32, 0);
    if ( !transform )
      sub_1C2D6EC(0, v34);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v36 = UnityEngine_Component__get_gameObject(v32, 0);
      v39 = current->fields.commonPosition;
      if ( !v39 )
        sub_1C2D6EC(v36, v37);
      max_length = v39->max_length;
      if ( max_length == 1 )
        sub_1C2D6F4(v36, v37, v38);
      if ( !max_length )
        sub_1C2D6F4(v36, v37, v38);
      GameObjectExtensions__AddLocalPosition_35919432(v36, (float)v39->m_Items[0], (float)v39->m_Items[1], 0);
    }
    v41 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v42 = (StandFigureCollect_o *)sub_1C2D6DC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v42, current, (UIStandFigureR_o *)v32, 0);
    if ( !v41 )
      sub_1C2D6EC(v43, v44);
    v47 = v41->fields._items;
    v48 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v41->fields._version;
    if ( !v47 )
      sub_1C2D6EC(v43, v44);
    v49 = v41->fields._size;
    if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v41,
        (Il2CppObject *)v42,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &v47->obj.klass + v49;
      v41->fields._size = v49 + 1;
      v50[4] = (Il2CppClass *)v42;
      sub_1C2D434((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v42, v45, v46);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  __int64 v15; // x1
  DataManager_o *v16; // x24
  Il2CppObject *MasterData_object; // x22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v19; // x28
  __int64 v20; // x24
  __int64 v21; // x26
  int32_t v22; // w26
  const MethodInfo *v23; // x3
  int32_t v24; // w25
  char v25; // w26
  System_Collections_Generic_List_object__o *v26; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  SvtMultiPortraitEntity_o *current; // x27
  int klass_high; // w8
  int32_t v31; // w28
  UnityEngine_GameObject_o *v32; // x0
  int32_t portraitImageId; // w29
  UnityEngine_GameObject_o *v34; // x22
  const MethodInfo *v35; // x1
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UnityEngine_GameObject_o *v41; // x0
  int32_t v42; // w29
  UnityEngine_GameObject_o *v43; // x22
  const MethodInfo *v44; // x1
  UnityEngine_GameObject_o *v45; // x7
  UnityEngine_Component_o *v46; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v48; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  struct System_Int32_array *v53; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v55; // x29
  StandFigureCollect_o *v56; // x22
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v66; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v68; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v70; // x20
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  int32_t svtId; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+50h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_4C2B2A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StandFigureCollect_TypeInfo);
    byte_4C2B2A6 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v16 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v16,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v19 = (SvtMultiPortraitMaster_o *)Instance;
  v21 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v82.fields.currentCryptoKey = v21;
  *(_QWORD *)&v82.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v82, 0);
  if ( !MasterData_object )
    goto LABEL_61;
  v22 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                (int32_t)Instance,
                                imageLimitCount,
                                0);
  v24 = (int)Instance;
  svtId = v22;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v22,
                                  (int32_t)Instance,
                                  v23);
    v25 = (char)Instance;
  }
  else
  {
    v25 = 0;
  }
  if ( !v19 )
    goto LABEL_61;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v19, svtId, v24, overwriteType, 0);
  if ( !Instance
    || (v26 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v66);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_40454792(
                                     gameObject,
                                     svtId,
                                     v24,
                                     1,
                                     0,
                                     1,
                                     0,
                                     v25 & 1,
                                     friendshipNum,
                                     VoiceEffectPrefab,
                                     0)
                                 : StandFigureManager__CreateRenderPrefab_40527740(
                                     gameObject,
                                     svtId,
                                     v24,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0,
                                     0,
                                     friendshipNum,
                                     VoiceEffectPrefab,
                                     0));
      v68 = (UIStandFigureR_o *)Instance;
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
          v70 = (StandFigureCollect_o *)sub_1C2D6DC(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v70, 0, v68, 0);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v74 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v70,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
              }
              else
              {
                v76 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v76[4] = (Il2CppClass *)v70;
                sub_1C2D434((CGThumbnailListItem_o *)(v76 + 4), (int32_t)v70, v71, v72);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1C2D6EC(Instance, v15);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    v26,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v81 = v80;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v27 )
      break;
    current = (SvtMultiPortraitEntity_o *)v81.fields._current;
    if ( !v81.fields._current )
      sub_1C2D6EC(v27, v28);
    klass_high = HIDWORD(v81.fields._current[2].klass);
    if ( klass_high >= 1 )
      v31 = klass_high + 1;
    else
      v31 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1C2D6EC(v27, v28);
      v32 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      portraitImageId = current->fields.portraitImageId;
      v34 = v32;
      original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v35);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v34,
                           portraitImageId,
                           1,
                           0,
                           v31,
                           0,
                           v25 & 1,
                           friendshipNum,
                           original,
                           0);
    }
    else
    {
      if ( !StandFigureNode )
        sub_1C2D6EC(v27, v28);
      v41 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      v42 = current->fields.portraitImageId;
      v43 = v41;
      v45 = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v44);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(v43, v42, formId, 1, 0, v31, 0, v45, 0);
    }
    v46 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C2D6EC(0, v38);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C2D434((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v39, v40);
    transform = UnityEngine_Component__get_transform(v46, 0);
    if ( !transform )
      sub_1C2D6EC(0, v48);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v50 = UnityEngine_Component__get_gameObject(v46, 0);
      v53 = current->fields.commonPosition;
      if ( !v53 )
        sub_1C2D6EC(v50, v51);
      max_length = v53->max_length;
      if ( max_length == 1 )
        sub_1C2D6F4(v50, v51, v52);
      if ( !max_length )
        sub_1C2D6F4(v50, v51, v52);
      GameObjectExtensions__AddLocalPosition_35919432(v50, (float)v53->m_Items[0], (float)v53->m_Items[1], 0);
    }
    v55 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v56 = (StandFigureCollect_o *)sub_1C2D6DC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v56, current, (UIStandFigureR_o *)v46, 0);
    if ( !v55 )
      sub_1C2D6EC(v57, v58);
    v61 = v55->fields._items;
    v62 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v55->fields._version;
    if ( !v61 )
      sub_1C2D6EC(v57, v58);
    v63 = v55->fields._size;
    if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v55,
        (Il2CppObject *)v56,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = &v61->obj.klass + v63;
      v55->fields._size = v63 + 1;
      v64[4] = (Il2CppClass *)v56;
      sub_1C2D434((CGThumbnailListItem_o *)(v64 + 4), (int32_t)v56, v59, v60);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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

  if ( (byte_4C2B2CF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B2CF = 1;
  }
  memset(&v29, 0, sizeof(v29));
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)currentFigureCollectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C2D6EC(v4, v5);
    monitor = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1C2D6EC(0, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_1C2D6EC(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71163892(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v16 )
      break;
    v18 = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C2D6EC(v16, v17);
    v19 = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      v21 = (UIStandFigureR_o *)v18[1].monitor;
      if ( !v21 )
        sub_1C2D6EC(0, v20);
      UIStandFigureR__ReleaseCharacter(v21, 0);
      v23 = (UnityEngine_Component_o *)v18[1].monitor;
      if ( !v23 )
        sub_1C2D6EC(0, v22);
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71163892(v24, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1C2D6EC(currentFigureCollectList, method);
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
    sub_1C2D6EC(bgCollider, method);
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

  if ( (byte_4C2B2B9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__EndLoad_b__148_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B2B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__148_0__, 0);
  if ( !v5 )
    sub_1C2D6EC(v8, v9);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0);
}


void CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  ServantVoiceData_o *IsNullOrEmpty; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  struct ServantVoiceData_array *playVoiceList; // x8
  int v7; // w9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3

  if ( (byte_4C2B2C5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_EndPlayProcess__);
    byte_4C2B2C5 = 1;
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
    v7 = this->fields.playCnt - 1;
    if ( (unsigned int)v7 >= LODWORD(playVoiceList->max_length) )
      sub_1C2D6F4(IsNullOrEmpty, v4, v5);
    IsNullOrEmpty = playVoiceList->m_Items[v7];
    if ( !IsNullOrEmpty )
LABEL_9:
      sub_1C2D6EC(IsNullOrEmpty, v4);
    v8 = ServantVoiceData__get_AfterPerformance(IsNullOrEmpty, 0);
    v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndPlayProcess__, 0);
    CombineResultEffectComponent__PlayPerformance(this, v8, v9, v10);
  }
}


void CombineResultEffectComponent__EndPlayProcess(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Request_object; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v12; // x8
  System_Action_o *v13; // x22
  System_Action_o **v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CombineResultEffectComponent___c_c *v19; // x0
  System_Action_o *_9__162_0; // x22
  Il2CppObject *v21; // x23
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  _DWORD *v27; // x23
  __int64 v28; // x24
  __int64 v29; // x25
  const MethodInfo *v30; // x3
  int v31; // w8
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v36; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *v38; // x8
  __int64 v39; // x22
  __int64 v40; // x23
  struct UserServantEntity_o *v41; // x8
  int32_t v42; // w22
  CombineResultEffectComponent_o *v43; // x0
  int32_t v44; // w23
  const MethodInfo *v45; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v46; // x21
  System_Action_o *v47; // x19
  const MethodInfo *v48; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C2B2C6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C2D490(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
    sub_1C2D490(&int_____TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__EndPlayProcess_b__162_0__);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass162_0__EndPlayProcess_b__1__);
    sub_1C2D490(&CombineResultEffectComponent___c__DisplayClass162_0_TypeInfo);
    sub_1C2D490(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_10669/*"PlayVoice"*/);
    byte_4C2B2C6 = 1;
  }
  v3 = sub_1C2D6DC(CombineResultEffectComponent___c__DisplayClass162_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass162_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass162_0_o *)v3,
    0);
  if ( !v3 )
    goto LABEL_61;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  playCnt = this->fields.playCnt;
  if ( (int)playCnt < this->fields.maxPlayCnt )
  {
    playVoiceList = this->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_61;
    if ( (unsigned int)playCnt < LODWORD(playVoiceList->max_length) )
    {
      v12 = playVoiceList->m_Items[playCnt];
      if ( v12 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10669/*"PlayVoice"*/,
          v12->fields.delay,
          0);
        return;
      }
LABEL_61:
      sub_1C2D6EC(Request_object, v5);
    }
LABEL_62:
    sub_1C2D6F4(Request_object, v5, v8);
  }
  if ( this->fields.player )
    CombineResultEffectComponent__stopVoice(this, v5);
  this->fields.playCnt = 0;
  this->fields.playVoiceList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v8, v9);
  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
  *(_QWORD *)(v3 + 24) = v13;
  v14 = (System_Action_o **)(v3 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v13, v15, v16);
  if ( this->fields.skipEndDispAfterVoicePlayed )
  {
    v19 = CombineResultEffectComponent___c_TypeInfo;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v19 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__162_0 = v19->static_fields->__9__162_0;
    if ( !_9__162_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = CombineResultEffectComponent___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__162_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(_9__162_0, v21, Method_CombineResultEffectComponent___c__EndPlayProcess_b__162_0__, 0);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__162_0 = _9__162_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__162_0, (int32_t)_9__162_0, v23, v24);
    }
    *v14 = _9__162_0;
    sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)_9__162_0, v17, v18);
    this->fields.skipEndDispAfterVoicePlayed = 0;
  }
  if ( this->fields.firstPlayedVoiceFlag >= 1 )
  {
    v25 = sub_1C2D538(int_____TypeInfo, 1);
    Request_object = sub_1C2D538(int___TypeInfo, 2);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_61;
    v27 = (_DWORD *)Request_object;
    v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v29;
    *(_QWORD *)&v49.fields.fakeValue = v28;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v49, 0);
    if ( !v27 )
      goto LABEL_61;
    v31 = v27[6];
    if ( !v31 )
      goto LABEL_62;
    v27[8] = Request_object;
    if ( v31 == 1 )
      goto LABEL_62;
    v27[9] = this->fields.firstPlayedVoiceFlag;
    if ( !v25 )
      goto LABEL_61;
    if ( !*(_DWORD *)(v25 + 24) )
      goto LABEL_62;
    *(_QWORD *)(v25 + 32) = v27;
    sub_1C2D434((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v27, v8, v30);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (__int64)NetworkManager__getRequest_object_(
                                0,
                                (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
    if ( !Request_object )
      goto LABEL_61;
    TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, (System_Int32_array_array *)v25, 0);
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
                     (const MethodInfo_363CFF8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( (Request_object & 1) != 0 )
  {
    if ( this->fields.isLimitUpSuppression )
      goto LABEL_39;
    kind = this->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_39;
    v38 = this->fields.baseUsrSvtData;
    if ( !v38 )
      goto LABEL_61;
    v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v40;
    *(_QWORD *)&v50.fields.fakeValue = v39;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
    v41 = this->fields.baseUsrSvtData;
    if ( !v41 )
      goto LABEL_61;
    v42 = Request_object;
    v43 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                              v41->fields.limitCount,
                                              0);
    v44 = (_DWORD)v43 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v43, v42, (_DWORD)v43 + 1, v45) )
    {
      v46 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1C2D6DC(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v46,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0);
      v47 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v47,
        (Il2CppObject *)v3,
        Method_CombineResultEffectComponent___c__DisplayClass162_0__EndPlayProcess_b__1__,
        0);
      ServantCommentMaster__OpenSaintGraphProfileChange(v42, v44, v46, v47, 0);
    }
    else
    {
LABEL_39:
      Request_object = (__int64)this->fields.limitUpResultCheck;
      if ( !Request_object )
        goto LABEL_61;
      LimitUpResultCheckComponent__DispResultLimitUp((LimitUpResultCheckComponent_o *)Request_object, *v14, 1, 0);
    }
  }
  else if ( this->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(this, v5);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v32) )
    {
      Request_object = (__int64)this->fields.touchInfo;
      if ( !Request_object )
        goto LABEL_61;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Request_object, 1, 0);
      costumeId = this->fields.costumeId;
      v36 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v36 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v36->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(this, v33);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v34);
        ++this->fields.skillShowIndex;
      }
    }
    else if ( CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, v5) )
    {
      CombineResultEffectComponent__ShowCostumeChangeMessage(this, v48);
    }
    else
    {
      CombineResultEffectComponent__EndDisp(this, v48);
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

  if ( (byte_4C2B2CC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__FadeoutProcess_b__172_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B2CC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v5 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
      v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__FadeoutProcess_b__172_0__, 0);
      if ( !Instance )
        sub_1C2D6EC(v8, v9);
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
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4C2B29C & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&CombineResultEffectComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081712);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B29C = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_14;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              effectAssetData,
                              name,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object__51752532(
                                     Object_object__51051712,
                                     parentTr,
                                     1,
                                     (const MethodInfo_315AE54 *)Method_UnityEngine_Object_Instantiate_GameObject____78081712);
  if ( !effectAssetData )
    goto LABEL_14;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C20DA1 )
  {
    effectAssetData = (AssetData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C20DA6 )
  {
    effectAssetData = (AssetData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v9 )
LABEL_14:
    sub_1C2D6EC(effectAssetData, parentTr);
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

  if ( (byte_4C2B2AE & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2B2AE = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1C2D6EC(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1C2D6F4(v6, *(_QWORD *)&svtId, *(_QWORD *)&limit);
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

  if ( (byte_4C2B2CD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B2CD = 1;
  }
  v18 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v20, 0);
    if ( !v10 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v10, &entity, (int32_t)Instance, limitCount, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0);
LABEL_21:
      sub_1C2D6EC(Instance, v8);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
  if ( !v15 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v15,
          (Il2CppObject **)&v18,
          (int32_t)Instance,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v18;
  if ( !v18 )
    goto LABEL_21;
  return ServantEntity__getName(v18, -1, -1, 0, 0);
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

  if ( (byte_4C2B2A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C2B2A9 = 1;
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
    sub_1C2D6EC(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


System_String_o *CombineResultEffectComponent__GetStartAnimationName(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  System_String_o *v7; // x21
  VoicePlayCondMaster_o *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct ServantVoiceEntity_o *svtVoiceEntity; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v13; // x9
  bool isVoicePlay_43051484; // w0
  Il2CppObject *CombineAnimation; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_o *Clip; // x22
  int32_t kind; // w8
  Il2CppObject *v23; // x0
  __int64 *v24; // x8
  int32_t v26; // [xsp+1Ch] [xbp-44h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C2B2D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11379/*"ResultEffectAnimation"*/);
    sub_1C2D490(&StringLiteral_17257/*"bit_result_skinchange{0:D2}"*/);
    sub_1C2D490(&StringLiteral_17235/*"bit_result_advent{0:D2}"*/);
    sub_1C2D490(&StringLiteral_25184/*"{0}{1:D2}"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_17259/*"bit_result{0:D2}"*/);
    byte_4C2B2D6 = 1;
  }
  condEntity = 0;
  if ( !this->fields.svtVoiceEntity )
    goto LABEL_26;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0) )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( !svtVoiceEntity )
    goto LABEL_42;
  playVoiceList = this->fields.playVoiceList;
  if ( !playVoiceList )
    goto LABEL_42;
  if ( !LODWORD(playVoiceList->max_length) )
    sub_1C2D6F4(Master_object, v9, v10);
  v13 = playVoiceList->m_Items[0];
  if ( !v13 || !Master_object )
    goto LABEL_42;
  isVoicePlay_43051484 = VoicePlayCondMaster__isVoicePlay_43051484(
                           Master_object,
                           svtVoiceEntity->fields.id,
                           v13->fields.id,
                           &condEntity,
                           0,
                           -1,
                           -1,
                           0,
                           0,
                           0,
                           0);
  if ( condEntity && isVoicePlay_43051484 )
  {
    CombineAnimation = (Il2CppObject *)VoicePlayCondEntity__GetCombineAnimation(condEntity, 0, 0);
    v26 = index;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v16, v17, v18);
    v7 = System_String__Format_63499156((System_String_o *)StringLiteral_25184/*"{0}{1:D2}"*/, CombineAnimation, v19, 0);
  }
  Master_object = (VoicePlayCondMaster_o *)this->fields.fsm;
  if ( !Master_object
    || (Master_object = (VoicePlayCondMaster_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Master_object, 0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11379/*"ResultEffectAnimation"*/,
                                                   0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                                   (HutongGames_PlayMaker_FsmGameObject_o *)Master_object,
                                                   0)) == 0 )
  {
LABEL_42:
    sub_1C2D6EC(Master_object, v9);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
          v26 = index;
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, method, v3, v4);
          v24 = &StringLiteral_17257/*"bit_result_skinchange{0:D2}"*/;
          return System_String__Format((System_String_o *)*v24, v23, 0);
        }
        return (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_38:
      v26 = index;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, method, v3, v4);
      v24 = &StringLiteral_17235/*"bit_result_advent{0:D2}"*/;
      return System_String__Format((System_String_o *)*v24, v23, 0);
    }
    if ( kind )
    {
      if ( kind == 1 )
        goto LABEL_38;
      if ( kind != 6 )
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    v26 = index;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, method, v3, v4);
    v24 = &StringLiteral_17259/*"bit_result{0:D2}"*/;
    return System_String__Format((System_String_o *)*v24, v23, 0);
  }
  if ( !Component_object )
    goto LABEL_42;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Component_object, v7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(Clip, 0) )
    goto LABEL_26;
  return v7;
}


TransformServantInfo_o *CombineResultEffectComponent__GetTransformedServantInfo(
        CombineResultEffectComponent_o *this,
        int32_t transformCount,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-8h] BYREF

  transformInfo = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1C2D6EC(0, transformCount);
  UserServantEntity__GetTransformedServantInfo(baseUsrSvtData, &transformInfo, transformCount, 0);
  return transformInfo;
}


UnityEngine_GameObject_o *CombineResultEffectComponent__GetVoiceEffectPrefab(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51051712; // x20
  System_Collections_Generic_IEnumerable_TSource__o *playVoiceList; // x20
  CombineResultEffectComponent___c_c *v5; // x0
  System_Func_object__object__o *_9__153_0; // x21
  Il2CppObject *v7; // x22
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v11; // x0
  CombineResultEffectComponent___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__bool__o *_9__153_1; // x21
  Il2CppObject *v15; // x22
  struct CombineResultEffectComponent___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  Il2CppClass *klass; // x8
  AssetData_o *effectAssetData; // x0
  System_String_o *v23; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  VoiceMaster_o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  __int64 v28; // x2
  struct ServantVoiceData_array *v29; // x8
  ServantVoiceData_o *v30; // x8
  int FlagRequestNumber; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4C2B2BE & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&CombineResultEffectComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    sub_1C2D490(&System_Func_ServantVoicePerformance__bool__TypeInfo);
    sub_1C2D490(&System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_0__);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_1__);
    sub_1C2D490(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B2BE = 1;
  }
  Object_object__51051712 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0) )
  {
    playVoiceList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playVoiceList;
    v5 = CombineResultEffectComponent___c_TypeInfo;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v5 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__153_0 = (System_Func_object__object__o *)v5->static_fields->__9__153_0;
    if ( !_9__153_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = CombineResultEffectComponent___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__153_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
      System_Func_object__object____ctor(
        _9__153_0,
        v7,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_0__,
        0);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__153_0 = (struct System_Func_ServantVoiceData__ServantVoicePerformance__o *)_9__153_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__153_0, (int32_t)_9__153_0, v9, v10);
    }
    v11 = System_Linq_Enumerable__Select_object__object_(
            playVoiceList,
            (System_Func_TSource__TResult__o *)_9__153_0,
            (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    v12 = CombineResultEffectComponent___c_TypeInfo;
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v11;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v12 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__153_1 = (System_Func_object__bool__o *)v12->static_fields->__9__153_1;
    if ( !_9__153_1 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = CombineResultEffectComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__153_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ServantVoicePerformance__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__153_1,
        v15,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_1__,
        0);
      v16 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v16->__9__153_1 = (struct System_Func_ServantVoicePerformance__bool__o *)_9__153_1;
      sub_1C2D434((CGThumbnailListItem_o *)&v16->__9__153_1, (int32_t)_9__153_1, v17, v18);
    }
    v19 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
            v13,
            (System_Func_TSource__bool__o *)_9__153_1,
            (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    if ( v19 )
      klass = v19[1].klass;
    else
      klass = 0;
    effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !effectAssetData )
      goto LABEL_41;
    if ( klass )
      v23 = (System_String_o *)klass;
    else
      v23 = (System_String_o *)StringLiteral_1/*""*/;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                effectAssetData,
                                v23,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) && !this->fields.kind )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    effectAssetData = (AssetData_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_VoiceMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      v25 = (VoiceMaster_o *)effectAssetData;
      v27 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v33.fields.currentCryptoKey = v27;
      *(_QWORD *)&v33.fields.fakeValue = v26;
      effectAssetData = (AssetData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v33, 0);
      v29 = this->fields.playVoiceList;
      if ( v29 )
      {
        if ( !LODWORD(v29->max_length) )
          sub_1C2D6F4(effectAssetData, v20, v28);
        v30 = v29->m_Items[0];
        if ( v30 )
        {
          if ( v25 )
          {
            FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v25, (int32_t)effectAssetData, v30->fields.id, 0, 0);
            this->fields.firstPlayedVoiceFlag = FlagRequestNumber;
            if ( FlagRequestNumber >= 1 )
              this->fields.unSkippableFlag = 1;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_41:
    sub_1C2D6EC(effectAssetData, v20);
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
  return (UnityEngine_GameObject_o *)Object_object__51051712;
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
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  unsigned int i; // w20
  SkillInfo_o *v17; // x8
  SkillInfo_o *v18; // x9
  SkillInfo_o *v19; // x8
  bool v20; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v24; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v26; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_4C2B2BF & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B2BF = 1;
  }
  v26 = 0;
  skillInfoList = 0;
  v24 = 0;
  tdInfo = 0;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
                *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v23.fields.fakeValue = v10;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v22 = v23;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v22, 0);
                if ( !v11 )
                  goto LABEL_52;
                v12 = *(_OWORD *)(v11 + 32);
                v13 = Instance;
                *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
                *(_OWORD *)&v21.fields.fakeValue = v12;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
                if ( v13 == Instance )
                  break;
                if ( v7 == v8 )
                  goto LABEL_20;
                if ( (unsigned int)++v8 >= *(_DWORD *)(v6 + 24) )
LABEL_18:
                  sub_1C2D6F4(Instance, id, v14);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v11;
              sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, v11, v14, v15);
            }
LABEL_20:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v26, -1, -1, 1, 0, -1, 0);
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
                  v17 = skillInfoList->m_Items[i];
                  if ( !v17 || !v26 )
                    goto LABEL_52;
                  if ( i >= LODWORD(v26->max_length) )
                    goto LABEL_18;
                  v18 = v26->m_Items[i];
                  if ( !v18 )
                    goto LABEL_52;
                  id = (unsigned int)v17->fields.id;
                  if ( *(_QWORD *)&v17->fields.id != *(_QWORD *)&v18->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v17->fields.lv,
                      0);
                    if ( !v26 )
                      goto LABEL_52;
                    if ( i >= LODWORD(v26->max_length) )
                      goto LABEL_18;
                    v19 = v26->m_Items[i];
                    if ( !v19 )
                      goto LABEL_52;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v19->fields.id,
                      v19->fields.lv,
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
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v24, -1, -1, 0, 0);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0);
                      if ( (Instance & 1) == 0 )
                      {
                        v20 = 0;
LABEL_50:
                        this->fields.treasureDeviceEnabled = v20;
                        return;
                      }
                      if ( tdInfo && v24 )
                      {
                        v20 = tdInfo->fields.id != v24->fields.id || tdInfo->fields.lv != v24->fields.lv;
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
    sub_1C2D6EC(Instance, id);
  }
}


void CombineResultEffectComponent__InitCombineEffect(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Transform_o *v7; // x20
  const MethodInfo *v8; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_4C2B29A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__InitCombineEffect_b__115_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    byte_4C2B29A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                            0);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0);
  this->fields.effect = Value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Value, v5, v6);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0);
  v7 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C20DA6 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v7 )
    goto LABEL_19;
  UnityEngine_Transform__set_localScale(v7, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__115_0__,
      0);
    if ( v12 )
    {
      CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, v14, 0);
      return;
    }
LABEL_19:
    sub_1C2D6EC(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v8);
  CombineResultEffectComponent__SetResultServantVoiceData(this, v15);
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

  if ( (byte_4C2B2D8 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2B2D8 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C2D6EC(Instance, v4);
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
    sub_1C2D6EC(0, method);
  return !LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0);
}


bool CombineResultEffectComponent__IsShowNextNpInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  int v4; // w0

  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C2B2C7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B2C7 = 1;
  }
  entity = 0;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  v4 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                                        v13,
                                                                                        0);
  if ( !v6 )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v6,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_20:
    sub_1C2D6EC(costumeSkillInfoManager, method);
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
  const MethodInfo *v8; // x3
  CombineRootComponent_c *v9; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x22

  if ( (byte_4C2B29B & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CombineResultEffectComponent_TypeInfo);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass116_0__LoadCombineEffect_b__0__);
    sub_1C2D490(&CombineResultEffectComponent___c__DisplayClass116_0_TypeInfo);
    byte_4C2B29B = 1;
  }
  v4 = sub_1C2D6DC(CombineResultEffectComponent___c__DisplayClass116_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass116_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass116_0_o *)v4,
    0);
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)(v4 + 16) = action;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)action, v7, v8);
  if ( CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData )
    goto LABEL_10;
  v9 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v9 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v9->static_fields->COMBINE_ASSET_PATH;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)v4,
    Method_CombineResultEffectComponent___c__DisplayClass116_0__LoadCombineEffect_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v11, 1, 0) )
LABEL_10:
    ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
}


void CombineResultEffectComponent__NameRevealCrossFade(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UICharaGraphTexture_o *nameRevealCard; // x0

  nameRevealCard = this->fields.nameRevealCard;
  if ( !nameRevealCard )
    sub_1C2D6EC(0, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0);
}


void CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C2B2D5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5425/*"END_ANIMATION"*/);
    byte_4C2B2D5 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1C2D6EC(0, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5425/*"END_ANIMATION"*/, 0);
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
  if ( (byte_4C2B2D1 & 1) == 0 )
  {
    sub_1C2D490(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C2D490(&StringLiteral_8267/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4C2B2D1 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[11].monitor;
  if ( !v6 )
    goto LABEL_14;
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v6[6], 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8267/*"LIMIT_COUNT_SEALED_TITLE"*/, 0);
  v13 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1C2D6DC(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v13,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0);
  if ( !v10 )
LABEL_14:
    sub_1C2D6EC(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v10, v12, v11, v13, 0);
}


bool CombineResultEffectComponent__OpenNotification(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 AscensionAfterDialogId; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  bool v8; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  struct UserServantEntity_o *v14; // x8
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w0
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w0
  int32_t v23; // w22
  int32_t v24; // w23
  const MethodInfo *v25; // x3
  Il2CppObject *NameFromMessageId; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v28; // x0
  System_String_o *v29; // x22
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  System_Action_o *v32; // x23
  int v33; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4C2B2CE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass174_0__OpenNotification_b__0__);
    sub_1C2D490(&CombineResultEffectComponent___c__DisplayClass174_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11576/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B2CE = 1;
  }
  v3 = sub_1C2D6DC(CombineResultEffectComponent___c__DisplayClass174_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass174_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass174_0_o *)v3,
    0);
  if ( !v3 )
    goto LABEL_28;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v8 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v13 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v12 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v13;
      *(_QWORD *)&v34.fields.fakeValue = v12;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v34, 0);
      *(_DWORD *)(v3 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v3 + 24) = this->fields.costumeId;
      v14 = this->fields.resUsrSvtData;
      if ( v14 )
      {
        v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v16;
        *(_QWORD *)&v35.fields.fakeValue = v15;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v35, 0);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v17, *(_DWORD *)(v3 + 24), 0);
        v33 = AscensionAfterDialogId;
        if ( (_DWORD)AscensionAfterDialogId == -1 )
          return 0;
        v18 = this->fields.resUsrSvtData;
        if ( v18 )
        {
          v19 = AscensionAfterDialogId;
          v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
          v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v36.fields.currentCryptoKey = v21;
          *(_QWORD *)&v36.fields.fakeValue = v20;
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0);
          v23 = *(_DWORD *)(v3 + 24);
          v24 = v22;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v24, v23, 0) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v19,
                                                *(_DWORD *)(v3 + 24),
                                                v25);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = System_Int32__ToString((int32_t)&v33, 0);
          v29 = System_String__Concat_63457864((System_String_o *)StringLiteral_11576/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v28, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v30 = LocalizationManager__Get(v29, 0);
          v31 = System_String__Format(v30, NameFromMessageId, 0);
          v32 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v32,
            (Il2CppObject *)v3,
            Method_CombineResultEffectComponent___c__DisplayClass174_0__OpenNotification_b__0__,
            0);
          if ( Instance )
          {
            v8 = 1;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v31,
              v32,
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
            return v8;
          }
        }
      }
    }
LABEL_28:
    sub_1C2D6EC(AscensionAfterDialogId, v5);
  }
  return v8;
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

  if ( (byte_4C2B2BD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C2B2BD = 1;
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
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
      sub_1C2D6EC(IsNullOrEmpty, v8);
    }
  }
  else
  {
    ActionExtensions__Call(playEndAction, 0);
  }
}


void CombineResultEffectComponent__PlayVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  CombineResultEffectComponent_o *v4; // x19
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v8; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v10; // x8
  __int64 v11; // x9
  int32_t m_CancellationTokenSource_high; // w21
  int32_t friendshipExceedResultWindow; // w20
  float FadeTime; // s0
  System_Collections_Generic_IEnumerable_TSource__o *currentFigureCollectList; // x0
  float v16; // s8
  int32_t v17; // w2
  ServantVoiceData_array *v18; // x3
  const MethodInfo *v19; // x6
  System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x4
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v24; // x22
  SePlayer_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct ServantVoiceData_array *v28; // x8
  __int64 v29; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *StartPerformance; // x0
  const MethodInfo *v31; // x3

  v4 = this;
  if ( (byte_4C2B2BC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_EndPlay__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    this = (CombineResultEffectComponent_o *)sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C2B2BC = 1;
  }
  if ( v4->fields.asstName && v4->fields.maxPlayCnt )
  {
    playVoiceList = v4->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_26;
    playCnt = v4->fields.playCnt;
    max_length = playVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v8 = playVoiceList->m_Items[playCnt];
      if ( !v8 )
        goto LABEL_26;
      id = v8->fields.id;
      v4->fields.vcName = id;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
      v10 = v4->fields.playVoiceList;
      if ( !v10 )
        goto LABEL_26;
      v11 = v4->fields.playCnt;
      if ( (unsigned int)v11 < LODWORD(v10->max_length) )
      {
        this = (CombineResultEffectComponent_o *)v10->m_Items[v11];
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
        friendshipExceedResultWindow = (int32_t)this->fields.friendshipExceedResultWindow;
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
        currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.currentFigureCollectList;
        if ( currentFigureCollectList )
        {
          v16 = FadeTime;
          if ( System_Linq_Enumerable__Any_object_(
                 currentFigureCollectList,
                 (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
          {
            if ( System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                   (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
              && System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                   (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              afterFigureCollectList = v4->fields.afterFigureCollectList;
            }
            else
            {
              afterFigureCollectList = v4->fields.currentFigureCollectList;
            }
            CombineResultEffectComponent__SetStandFigureFace(
              v4,
              m_CancellationTokenSource_high,
              v16,
              v17,
              v18,
              afterFigureCollectList,
              friendshipExceedResultWindow,
              v19);
          }
        }
        asstName = v4->fields.asstName;
        vcName = v4->fields.vcName;
        volume = v4->fields.volume;
        v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)v4, Method_CombineResultEffectComponent_EndPlay__, 0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v25 = SoundManager__playVoice_41296680(asstName, vcName, volume, v24, 0, 0);
        v4->fields.player = v25;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.player, (int32_t)v25, v26, v27);
        v28 = v4->fields.playVoiceList;
        if ( !v28 )
          goto LABEL_26;
        v29 = v4->fields.playCnt;
        if ( (unsigned int)v29 < LODWORD(v28->max_length) )
        {
          this = (CombineResultEffectComponent_o *)v28->m_Items[v29];
          if ( this )
          {
            StartPerformance = ServantVoiceData__get_StartPerformance((ServantVoiceData_o *)this, 0);
            CombineResultEffectComponent__PlayPerformance(v4, StartPerformance, 0, v31);
            ++v4->fields.playCnt;
            return;
          }
LABEL_26:
          sub_1C2D6EC(this, method);
        }
      }
    }
    sub_1C2D6F4(this, method, v2);
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
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *Master_object; // x24
  CommonUI_o *v19; // x22
  Il2CppObject *v20; // x0
  UserServantCollectionEntity_o *v21; // x20
  CommonUI_o *v22; // x22
  ServantStatusDialog_EndDelegate_o *v23; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2B2D4 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__0__);
    sub_1C2D490(&CombineResultEffectComponent___c__DisplayClass180_0_TypeInfo);
    byte_4C2B2D4 = 1;
  }
  entity = 0;
  v11 = sub_1C2D6DC(CombineResultEffectComponent___c__DisplayClass180_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass180_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass180_0_o *)v11,
    0);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
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
           (int64_t)Instance->fields.connectMark->fields.tipsBase,
           svtId,
           0) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v19 )
      {
        CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          Instance = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( Instance )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 0, 0);
            v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v21 = entity;
            v22 = (CommonUI_o *)v20;
            v23 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v23,
              (Il2CppObject *)v11,
              Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__0__,
              0);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_31179572(v22, 33, v21, limitCount, v23, 0);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_1C2D6EC(Instance, v13);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_31167972(Instance, *(System_Action_o **)(v11 + 24), 0);
}


void CombineResultEffectComponent__ReleaseVoiceData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C2B2C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C2B2C9 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.playVoiceList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v2, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v6);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields.asstName, 0);
  }
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
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v11; // x24
  __int64 v12; // x22
  __int64 v13; // x23
  struct UserServantEntity_o *v14; // x8
  int32_t v15; // w22
  int32_t v16; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w23
  struct UserServantEntity_o *v19; // x8
  int32_t v20; // w23
  __int64 v21; // x24
  __int64 v22; // x26
  CombineResultEffectComponent_o *v23; // x0
  const MethodInfo *v24; // x3
  char v25; // w24
  System_Collections_Generic_List_object__o *v26; // x25
  _BOOL8 v27; // x0
  __int64 v28; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v31; // x1
  int32_t portraitImageId; // w27
  UnityEngine_GameObject_o *v33; // x26
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_Component_o *v39; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v41; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  struct System_Int32_array *v48; // x8
  int max_length; // w9
  int v50; // s11
  int v51; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  UnityEngine_Transform_o *v55; // x0
  __int64 v56; // x1
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v58; // x28
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  bool v67; // w20
  UnityEngine_GameObject_o *v68; // x21
  const MethodInfo *v69; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v71; // x23
  System_Collections_Generic_List_object__o *v72; // x21
  StandFigureCollect_o *v73; // x22
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  float v80; // s8
  __int64 v81; // x2
  struct System_Int32_array *multiFace; // x23
  int32_t masterDataBytes; // w20
  int32_t m_CancellationTokenSource_high; // w21
  struct ServantVoiceData_array *playVoiceList; // x8
  float FadeTime; // s0
  struct ServantVoiceData_array *v87; // x8
  ServantVoiceData_o *v88; // x8
  unsigned __int64 v89; // x22
  bool v90; // [xsp+24h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+40h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B2AC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StandFigureCollect_TypeInfo);
    sub_1C2D490(&StringLiteral_8427/*"LimitUpResSvtNodeName"*/);
    byte_4C2B2AC = 1;
  }
  entity = 0;
  memset(&v92, 0, sizeof(v92));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8427/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v8 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v8,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_85;
  v11 = (ServantLimitAddMaster_o *)Instance;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v94.fields.currentCryptoKey = v13;
  *(_QWORD *)&v94.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v94, 0);
  v14 = this->fields.resUsrSvtData;
  if ( !v14 )
    goto LABEL_85;
  v15 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                v14->fields.limitCount,
                                0);
  if ( !v11 )
    goto LABEL_85;
  v16 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v11, &entity, v15, (int32_t)Instance, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_85;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v16 = LimitCountUpResultServantLimitCount;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_85;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v15,
                                 v16,
                                 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v15, ServantLimitCountSealAfter, 0);
  v19 = this->fields.resUsrSvtData;
  if ( !v19 )
    goto LABEL_85;
  v20 = (int)Instance;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v95.fields.currentCryptoKey = v22;
  *(_QWORD *)&v95.fields.fakeValue = v21;
  v90 = isForceNormalFace;
  v23 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v95, 0);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v23, (int32_t)v23, v20, v24);
  if ( !MasterData_object )
LABEL_85:
    sub_1C2D6EC(Instance, v7);
  v25 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v15,
                                v20,
                                2,
                                0);
  if ( Instance
    && (v26 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v91,
      v26,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v92 = v91;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v92,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v27 )
        break;
      if ( !StandFigureNode )
        sub_1C2D6EC(v27, v28);
      current = (SvtMultiPortraitEntity_o *)v92.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      if ( !current )
        sub_1C2D6EC(gameObject, v31);
      portraitImageId = current->fields.portraitImageId;
      v33 = gameObject;
      original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v31);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v33,
                           portraitImageId,
                           1,
                           0,
                           0,
                           0,
                           v25 & 1,
                           -1,
                           original,
                           0);
      v39 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1C2D6EC(0, v36);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1C2D434((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v37, v38);
      transform = UnityEngine_Component__get_transform(v39, 0);
      if ( !transform )
        sub_1C2D6EC(0, v41);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        v43 = UnityEngine_Component__get_transform(v39, 0);
        if ( !v43 )
          sub_1C2D6EC(0, v44);
        localPosition = UnityEngine_Transform__get_localPosition(v43, 0);
        v48 = current->fields.commonPosition;
        if ( !v48 )
          sub_1C2D6EC(v45, v46);
        max_length = v48->max_length;
        if ( !max_length )
          sub_1C2D6F4(v45, v46, v47);
        if ( max_length == 1 )
          sub_1C2D6F4(v45, v46, v47);
        v51 = v48->m_Items[0];
        v50 = v48->m_Items[1];
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        v55 = UnityEngine_Component__get_transform(v39, 0);
        if ( !v55 )
          sub_1C2D6EC(0, v56);
        v97.fields.x = x + (float)v51;
        v97.fields.y = y + (float)v50;
        v97.fields.z = z;
        UnityEngine_Transform__set_localPosition(v55, v97, 0);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v39,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v58 = (StandFigureCollect_o *)sub_1C2D6DC(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v58, current, (UIStandFigureR_o *)v39, 0);
      if ( !afterFigureCollectList )
        sub_1C2D6EC(v59, v60);
      items = afterFigureCollectList->fields._items;
      v64 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1C2D6EC(v59, v60);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v58,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v66[4] = (Il2CppClass *)v58;
        sub_1C2D434((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v58, v61, v62);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v92,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    v67 = v90;
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_85;
    v68 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
    VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v69);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40454792(
                                  v68,
                                  v15,
                                  v20,
                                  1,
                                  0,
                                  1,
                                  0,
                                  v25 & 1,
                                  -1,
                                  VoiceEffectPrefab,
                                  0);
    if ( !Instance )
      goto LABEL_85;
    v71 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_85;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0);
    v72 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v73 = (StandFigureCollect_o *)sub_1C2D6DC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v73, 0, v71, 0);
    if ( !v72 )
      goto LABEL_85;
    v76 = v72->fields._items;
    v77 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v72->fields._version;
    if ( !v76 )
      goto LABEL_85;
    v78 = v72->fields._size;
    v67 = isForceNormalFace;
    if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v72,
        (Il2CppObject *)v73,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v79 = &v76->obj.klass + v78;
      v72->fields._size = v78 + 1;
      v79[4] = (Il2CppClass *)v73;
      sub_1C2D434((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
    }
  }
  v80 = 0.0;
  if ( v67
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
      goto LABEL_85;
    if ( !LODWORD(playVoiceList->max_length) )
      goto LABEL_86;
    Instance = (DataManager_o *)playVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_85;
    m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
    masterDataBytes = (int32_t)Instance->fields.masterDataBytes;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0);
    v87 = this->fields.playVoiceList;
    if ( !v87 )
      goto LABEL_85;
    if ( !LODWORD(v87->max_length) )
LABEL_86:
      sub_1C2D6F4(Instance, v7, v81);
    v88 = v87->m_Items[0];
    if ( !v88 )
      goto LABEL_85;
    multiFace = v88->fields.multiFace;
    v80 = FadeTime;
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v89 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v89,
                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( multiFace )
      {
        if ( v89 >= LODWORD(multiFace->max_length) )
          goto LABEL_86;
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace((UIStandFigureR_o *)Instance, multiFace->m_Items[v89], 0.0, 0);
      }
      else
      {
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace_43824080(
          (UIStandFigureR_o *)Instance,
          m_CancellationTokenSource_high,
          masterDataBytes,
          0,
          v80,
          0);
      }
      if ( (__int64)++v89 >= System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                               (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CombineRootComponent_c *v15; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4C2B296 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__111_0__);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C2B296 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    currentSkillId,
    *(const MethodInfo **)&currentSkillLv);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v15 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v15 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v15->static_fields->COMBINE_ASSET_PATH;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__111_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v17, 1, 0);
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

  if ( (byte_4C2B2A5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3056/*"BaseSvtNodeName"*/);
    byte_4C2B2A5 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1C2D6EC(0, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3056/*"BaseSvtNodeName"*/,
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
  if ( (byte_4C2B2AA & 1) == 0 )
  {
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C2D490(&StringLiteral_8426/*"LimitUpBaseSvtNodeName"*/);
    byte_4C2B2AA = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C2D6EC(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8426/*"LimitUpBaseSvtNodeName"*/,
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
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  float v31; // s8
  __int64 v32; // x2
  _DWORD *data; // x23
  int32_t v34; // w20
  unsigned int v35; // w22
  int32_t v36; // w0
  const MethodInfo *v37; // x2
  __int64 *v38; // x8
  __int64 *v39; // x8
  System_String_o *v40; // x20
  UnityEngine_Transform_o *v41; // x0
  UIExtrusionLabel_o *v42; // x20
  System_String_o *v43; // x20
  UnityEngine_Transform_o *v44; // x0
  UIExtrusionLabel_o *v45; // x20
  struct UserServantEntity_o *v46; // x20
  struct UserServantEntity_o *v47; // x8
  int32_t Rarity; // w0
  UserServantEntity_o *v49; // x21
  int v50; // w20
  UserServantEntity_o *v51; // x20
  int32_t v52; // w0
  UserServantEntity_o *v53; // x21
  int v54; // w20
  const MethodInfo *v55; // x2
  __int64 *v56; // x20
  __int64 *v57; // x8
  struct ServantVoiceData_array *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2
  unsigned __int64 v65; // x21
  __int64 v66; // x25
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *resUsrSvtData; // x9
  bool v69; // w2
  CombineResultEffectComponent_o *v70; // x0
  System_String_o *v71; // x1
  bool v72; // w2
  CombineResultEffectComponent_o *v73; // x0
  System_String_o *v74; // x1
  System_String_o *v75; // x20
  UnityEngine_Transform_o *v76; // x0
  UnityEngine_Component_o *v77; // x20
  float Value; // s0
  float v79; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v81; // x20
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 *v84; // x8
  __int64 v85; // x1
  CGThumbnailListItem_o *v86; // x0
  System_String_o *v87; // x20
  UnityEngine_Transform_o *v88; // x0
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x2
  __int64 v92; // x20
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x2
  Il2CppObject *v96; // x21
  EventDelegate_Callback_o *v97; // x22
  EventDelegate_o *v98; // x20
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  __int64 v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x8
  const MethodInfo *v105; // x3
  const MethodInfo *v106; // x2
  System_Collections_ICollection_o *v107; // x8
  float FadeTime; // s0
  System_Collections_ICollection_o *v109; // x8
  System_Collections_ICollection_c *klass; // x8
  __int64 v111; // [xsp+0h] [xbp-60h] BYREF
  __int64 v112; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B29D & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetCardParam_b__118_0__);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_4738/*"CostumeName"*/);
    sub_1C2D490(&StringLiteral_3056/*"BaseSvtNodeName"*/);
    sub_1C2D490(&StringLiteral_17233/*"bit_result_120"*/);
    sub_1C2D490(&StringLiteral_17240/*"bit_result_extraskill02"*/);
    sub_1C2D490(&StringLiteral_17249/*"bit_result_nobledeliverance"*/);
    sub_1C2D490(&StringLiteral_12305/*"START_ANIMATION"*/);
    sub_1C2D490(&StringLiteral_17237/*"bit_result_command_card_exceed"*/);
    sub_1C2D490(&StringLiteral_17246/*"bit_result_limitbreak"*/);
    sub_1C2D490(&StringLiteral_17241/*"bit_result_friendship_exceed"*/);
    sub_1C2D490(&StringLiteral_11349/*"ResMaxLvExceedNodeName"*/);
    sub_1C2D490(&StringLiteral_17254/*"bit_result_skillrank"*/);
    sub_1C2D490(&StringLiteral_17244/*"bit_result_grail_02"*/);
    sub_1C2D490(&StringLiteral_17255/*"bit_result_skillup"*/);
    sub_1C2D490(&StringLiteral_4879/*"CrtMaxLvExceedNodeName"*/);
    sub_1C2D490(&StringLiteral_17250/*"bit_result_powerup"*/);
    sub_1C2D490(&StringLiteral_13042/*"StartAnimationName"*/);
    sub_1C2D490(&StringLiteral_17243/*"bit_result_grail_01"*/);
    sub_1C2D490(&StringLiteral_17239/*"bit_result_extraskill01"*/);
    sub_1C2D490(&StringLiteral_17253/*"bit_result_skilldeliverance"*/);
    sub_1C2D490(&StringLiteral_4880/*"CrtMaxLvNodeName"*/);
    sub_1C2D490(&StringLiteral_11350/*"ResMaxLvNodeName"*/);
    sub_1C2D490(&StringLiteral_13187/*"SvtEqCardScale"*/);
    byte_4C2B29D = 1;
  }
  v111 = 0;
  v112 = 0;
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
                                       (System_String_o *)StringLiteral_4880/*"CrtMaxLvNodeName"*/,
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
                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v7 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v112) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v112 + 4, 0);
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
                                       (System_String_o *)StringLiteral_11350/*"ResMaxLvNodeName"*/,
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
                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v10 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v112) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v112, 0);
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
      *(_QWORD *)&v113.fields.currentCryptoKey = v13;
      *(_QWORD *)&v113.fields.fakeValue = v12;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v113, 0);
      v14 = this->fields.baseUsrSvtData;
      if ( !v14 )
        goto LABEL_173;
      v15 = svtResultInfoWindow;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14->fields.limitCount, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      svtResultInfoWindow = ImageLimitCount__GetImageLimitCount(v15, v16, 0);
      v17 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = svtResultInfoWindow;
      if ( !v17 )
        goto LABEL_173;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v17->fields.svtId, 0);
      v18 = this->fields.resUsrSvtData;
      if ( !v18 )
        goto LABEL_173;
      v19 = svtResultInfoWindow;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v18->fields.limitCount, 0);
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
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)LimitUpSvtVoiceList, v28, v29);
        CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v30);
        v31 = 0.0;
        if ( this->fields.isLimitUpSuppression
          || (svtResultInfoWindow = BasicHelper__IsNullOrEmpty(*p_playVoiceList, 0), (svtResultInfoWindow & 1) != 0) )
        {
          data = 0;
          v34 = 0;
          v35 = 0;
        }
        else
        {
          v107 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v107[1].monitor) )
            goto LABEL_174;
          svtResultInfoWindow = (__int64)v107[2].klass;
          if ( !svtResultInfoWindow )
            goto LABEL_173;
          v35 = *(_DWORD *)(svtResultInfoWindow + 28);
          v34 = *(_DWORD *)(svtResultInfoWindow + 56);
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)svtResultInfoWindow, 0);
          v109 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v109[1].monitor) )
LABEL_174:
            sub_1C2D6F4(svtResultInfoWindow, method, v32);
          klass = v109[2].klass;
          if ( !klass )
            goto LABEL_173;
          data = klass->_1.byval_arg.data;
          v31 = FadeTime;
        }
        v36 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( data )
        {
          method = (const MethodInfo *)(&dword_0 + 1);
          if ( v36 != *(_DWORD *)((char *)&off_18 + (_QWORD)data) || v36 <= 0 )
            goto LABEL_136;
        }
        else if ( v36 < 1 )
        {
LABEL_135:
          LODWORD(method) = 1;
          goto LABEL_136;
        }
        v65 = 0;
        if ( v36 <= 1 )
          v66 = 1;
        else
          v66 = (unsigned int)v36;
        while ( 1 )
        {
          svtResultInfoWindow = (__int64)this->fields.currentFigureCollectList;
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = (__int64)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                                           v65,
                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = *(_QWORD *)(svtResultInfoWindow + 24);
          if ( data )
          {
            if ( v65 >= *(unsigned int *)((char *)&off_18 + (_QWORD)data) )
              goto LABEL_174;
            if ( !svtResultInfoWindow )
              break;
            LODWORD(method) = data[v65 + 8];
          }
          else
          {
            method = (const MethodInfo *)v35;
            if ( !svtResultInfoWindow )
              break;
          }
          UIStandFigureR__SetFace_43824080((UIStandFigureR_o *)svtResultInfoWindow, (int32_t)method, v34, 0, v31, 0);
          if ( v66 == ++v65 )
            goto LABEL_135;
        }
LABEL_173:
        sub_1C2D6EC(svtResultInfoWindow, method);
      }
LABEL_71:
      this->fields.isChangeCardImg = 1;
      v58 = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v22);
      this->fields.playVoiceList = v58;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)v58, v59, v60);
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v61);
      CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v62);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, v25, v63);
      CombineResultEffectComponent__setResultSvtGraphCard(this, v25, v64);
      LODWORD(method) = 2;
LABEL_136:
      svtResultInfoWindow = (__int64)CombineResultEffectComponent__GetStartAnimationName(this, (int32_t)method, v37);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v92 = svtResultInfoWindow;
      svtResultInfoWindow = (__int64)this->fields.fsm;
LABEL_167:
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13042/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      *(_QWORD *)(svtResultInfoWindow + 56) = v92;
      v86 = (CGThumbnailListItem_o *)(svtResultInfoWindow + 56);
      LODWORD(v85) = v92;
LABEL_170:
      sub_1C2D434(v86, v85, v82, v83);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtResultInfoWindow, (System_String_o *)StringLiteral_12305/*"START_ANIMATION"*/, 0);
      return;
    case 2:
      v69 = 1;
      v70 = this;
      v71 = (System_String_o *)StringLiteral_17255/*"bit_result_skillup"*/;
      goto LABEL_97;
    case 3:
      v39 = &StringLiteral_17253/*"bit_result_skilldeliverance"*/;
      goto LABEL_96;
    case 4:
      v72 = 1;
      v73 = this;
      v74 = (System_String_o *)StringLiteral_17255/*"bit_result_skillup"*/;
      goto LABEL_101;
    case 5:
      v38 = &StringLiteral_17249/*"bit_result_nobledeliverance"*/;
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
                                       (System_String_o *)StringLiteral_3056/*"BaseSvtNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v75 = (System_String_o *)svtResultInfoWindow;
      v76 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v76, v75, 1, 0);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v77 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13187/*"SvtEqCardScale"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)svtResultInfoWindow, 0);
      if ( !v77 )
        goto LABEL_173;
      v79 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v77, 0);
      svtResultInfoWindow = (__int64)CharaGraphManager__CreateTexturePrefab_40438132(
                                       gameObject,
                                       this->fields.resUsrSvtData,
                                       10,
                                       0,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v81 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v114.fields.z = 0.0;
      v114.fields.x = -50.0;
      v114.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtResultInfoWindow, v114, 0);
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(v81, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v115.fields.x = v79;
      v115.fields.y = v79;
      v115.fields.z = v79;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)svtResultInfoWindow, v115, 0);
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
      v39 = &StringLiteral_17254/*"bit_result_skillrank"*/;
LABEL_96:
      v71 = (System_String_o *)*v39;
      v70 = this;
      v69 = 0;
LABEL_97:
      CombineResultEffectComponent__SetCardParam_Skill(v70, v71, v69, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v38 = &StringLiteral_17254/*"bit_result_skillrank"*/;
LABEL_100:
      v74 = (System_String_o *)*v38;
      v73 = this;
      v72 = 0;
LABEL_101:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v73, v74, v72, v2);
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
                                       (System_String_o *)StringLiteral_13042/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v84 = &StringLiteral_17255/*"bit_result_skillup"*/;
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
                                       (System_String_o *)StringLiteral_13042/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v84 = &StringLiteral_17250/*"bit_result_powerup"*/;
LABEL_127:
      v85 = *v84;
      *(_QWORD *)(svtResultInfoWindow + 56) = *v84;
      v86 = (CGThumbnailListItem_o *)(svtResultInfoWindow + 56);
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
                                       (System_String_o *)StringLiteral_4879/*"CrtMaxLvExceedNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v40 = (System_String_o *)svtResultInfoWindow;
      v41 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v41, v40, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v42 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v111) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v111 + 4, 0);
      if ( !v42 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v42, (System_String_o *)svtResultInfoWindow, 0);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_11349/*"ResMaxLvExceedNodeName"*/,
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
                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v45 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v111) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v111, 0);
      if ( !v45 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v45, (System_String_o *)svtResultInfoWindow, 0);
      v46 = this->fields.baseUsrSvtData;
      if ( !v46 )
        goto LABEL_173;
      if ( v46->fields.exceedCount )
        goto LABEL_55;
      v47 = this->fields.resUsrSvtData;
      if ( !v47 )
        goto LABEL_173;
      if ( v47->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_55:
      Rarity = UserServantEntity__GetRarity(v46, 0, 0);
      svtResultInfoWindow = UserServantEntity__GetFrameType(v46, Rarity, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v49 = this->fields.resUsrSvtData;
      v50 = svtResultInfoWindow;
      svtResultInfoWindow = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      if ( !v49 )
        goto LABEL_173;
      svtResultInfoWindow = UserServantEntity__GetFrameType(v49, svtResultInfoWindow, 0);
      if ( v50 != (_DWORD)svtResultInfoWindow )
        this->fields.isChangeCardImg = 1;
      v51 = this->fields.baseUsrSvtData;
      if ( !v51 )
        goto LABEL_173;
      v52 = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      svtResultInfoWindow = UserServantEntity__GetRarityIcon(v51, v52, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v53 = this->fields.resUsrSvtData;
      v54 = svtResultInfoWindow;
      svtResultInfoWindow = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      if ( !v53 )
        goto LABEL_173;
      if ( v54 != UserServantEntity__GetRarityIcon(v53, svtResultInfoWindow, 0) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        v56 = &StringLiteral_17246/*"bit_result_limitbreak"*/;
      }
      else
      {
        if ( !this->fields.isChangeCardImg )
        {
          v56 = &StringLiteral_17243/*"bit_result_grail_01"*/;
LABEL_152:
          svtResultInfoWindow = (__int64)this->fields.fsm;
          if ( svtResultInfoWindow )
          {
            v92 = *v56;
            goto LABEL_167;
          }
          goto LABEL_173;
        }
        v56 = &StringLiteral_17244/*"bit_result_grail_02"*/;
      }
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v55);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v106);
      goto LABEL_152;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v57 = &StringLiteral_17241/*"bit_result_friendship_exceed"*/;
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
                                       (System_String_o *)StringLiteral_4738/*"CostumeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v87 = (System_String_o *)svtResultInfoWindow;
      v88 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v88, v87, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UILabel__set_text((UILabel_o *)svtResultInfoWindow, this->fields.costumeName, 0);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v89);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v90);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v91);
      goto LABEL_135;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v57 = &StringLiteral_17237/*"bit_result_command_card_exceed"*/;
      goto LABEL_166;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v93);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v94);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v95);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v57 = (__int64 *)&StringLiteral_17233/*"bit_result_120"*/;
LABEL_166:
      v92 = *v57;
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
          v96 = UnityEngine_GameObject__AddComponent_object_(
                  (UnityEngine_GameObject_o *)svtResultInfoWindow,
                  (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
          v97 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v97,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_b__118_0__,
            0);
          v98 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
          EventDelegate___ctor_49170772(v98, v97, 0);
          if ( v96 )
          {
            svtResultInfoWindow = (__int64)v96[2].klass;
            if ( svtResultInfoWindow )
            {
              v101 = *(_QWORD *)(svtResultInfoWindow + 16);
              v102 = Method_System_Collections_Generic_List_EventDelegate__Add__;
              ++*(_DWORD *)(svtResultInfoWindow + 28);
              if ( v101 )
              {
                v103 = *(int *)(svtResultInfoWindow + 24);
                if ( (unsigned int)v103 >= *(_DWORD *)(v101 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                    (Il2CppObject *)v98,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
                }
                else
                {
                  v104 = v101 + 8 * v103;
                  *(_DWORD *)(svtResultInfoWindow + 24) = v103 + 1;
                  *(_QWORD *)(v104 + 32) = v98;
                  sub_1C2D434((CGThumbnailListItem_o *)(v104 + 32), (int32_t)v98, v99, v100);
                }
                CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v105);
                svtResultInfoWindow = (__int64)this->fields.fsm;
                v57 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17240/*"bit_result_extraskill02"*/ : &StringLiteral_17239/*"bit_result_extraskill01"*/);
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
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  __int64 v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C2B2A0 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__121_0__);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&StringLiteral_12305/*"START_ANIMATION"*/);
    sub_1C2D490(&StringLiteral_13042/*"StartAnimationName"*/);
    byte_4C2B2A0 = 1;
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
           (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v10 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__121_0__,
      0);
    v11 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
    EventDelegate___ctor_49170772(v11, v10, 0);
    if ( !v9
      || (effect = (int *)v9[2].klass) == 0
      || (v14 = *((_QWORD *)effect + 2),
          v15 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v14) )
    {
LABEL_17:
      sub_1C2D6EC(effect, v7);
    }
    v16 = effect[6];
    if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v11,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = v14 + 8 * v16;
      effect[6] = v16 + 1;
      *(_QWORD *)(v17 + 32) = v11;
      sub_1C2D434((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v11, v12, v13);
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
                    (System_String_o *)StringLiteral_13042/*"StartAnimationName"*/,
                    0);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1C2D434((CGThumbnailListItem_o *)(effect + 14), (int32_t)startName, v18, v19);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12305/*"START_ANIMATION"*/, 0);
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
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C2B2A1 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__122_0__);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&StringLiteral_12305/*"START_ANIMATION"*/);
    sub_1C2D490(&StringLiteral_13042/*"StartAnimationName"*/);
    byte_4C2B2A1 = 1;
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
           (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__122_0__,
      0);
    v10 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
    EventDelegate___ctor_49170772(v10, v9, 0);
    if ( !v8 )
      goto LABEL_20;
    effect = (int *)v8[2].klass;
    if ( !effect )
      goto LABEL_20;
    v13 = *((_QWORD *)effect + 2);
    v14 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++effect[7];
    if ( !v13 )
      goto LABEL_20;
    v15 = effect[6];
    if ( (unsigned int)v15 >= *(_DWORD *)(v13 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v10,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = v13 + 8 * v15;
      effect[6] = v15 + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C2D434((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
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
                          (System_String_o *)StringLiteral_13042/*"StartAnimationName"*/,
                          0)) == 0
    || (*((_QWORD *)effect + 7) = startName,
        sub_1C2D434((CGThumbnailListItem_o *)(effect + 14), (int32_t)startName, v17, v18),
        (effect = (int *)this->fields.fsm) == 0) )
  {
LABEL_20:
    sub_1C2D6EC(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12305/*"START_ANIMATION"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__SetCombineLimit(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        bool autoFadeout,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  CombineRootComponent_c *v15; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4C2B299 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetCombineLimit_b__114_0__);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B299 = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)callback,
    (const MethodInfo *)autoFadeout);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(gameObject, v14);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v15 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v15 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v15->static_fields->EXCEED_ASSET_PATH;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__114_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v17, 1, 0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AssetData_o *effectAssetData; // x0
  __int64 v16; // x1
  CombineRootComponent_c *v17; // x0
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_Transform_o *v20; // x21

  if ( (byte_4C2B293 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17237/*"bit_result_command_card_exceed"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    sub_1C2D490(&StringLiteral_12312/*"START_COMMAND_CARD_EXCEED_EFFECT"*/);
    byte_4C2B293 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    cardIndex,
    *(const MethodInfo **)&exceedCount);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  if ( !userServantEntity )
    goto LABEL_18;
  this->fields.displayCount = UserServantEntity__GetTransformCount(userServantEntity, 0, 0);
  v17 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v17 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v17->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_18;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17237/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51051712,
                                     (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v19 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v20 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C20DA6 )
  {
    effectAssetData = (AssetData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v19, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(effectAssetData, v16);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12312/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  System_Action_o *v24; // x20
  CombineResultEffectComponent_o *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_4C2B28D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__102_0__);
    sub_1C2D490(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    byte_4C2B28D = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    costumeId,
    (const MethodInfo *)costumeName);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeName, (int32_t)costumeName, v13, v14);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  if ( gender >= 1 )
    this->fields.genderType = gender;
  v19 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C2D6DC(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v19, 0);
  this->fields.costumeSkillInfoManager = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v23);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__102_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v25, v24, v26);
}


void CombineResultEffectComponent__SetFriendshipCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  CombineRootComponent_c *v12; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Transform_o *v16; // x21

  if ( (byte_4C2B291 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17241/*"bit_result_friendship_exceed"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    sub_1C2D490(&StringLiteral_12320/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4C2B291 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)userSvtData, (int32_t)callback, method);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v7, v8);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  v12 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v12 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v12->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17241/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51051712,
                                     (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v15 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v16 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C20DA6 )
  {
    effectAssetData = (AssetData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v15, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_17:
    sub_1C2D6EC(effectAssetData, v11);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12320/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  CombineRootComponent_c *v15; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4C2B292 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__107_0__);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B292 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    oldFriendShipRank,
    (const MethodInfo *)callback);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v14);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v15 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v15 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v15->static_fields->COMBINE_ASSET_PATH;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__107_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v17, 1, 0);
}


void CombineResultEffectComponent__SetFriendshipUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1

  if ( (byte_4C2B287 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12319/*"START_FRIENDSHIPUP_EFFECT"*/);
    byte_4C2B287 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    oldFriendShipRank,
    (const MethodInfo *)callback);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_1C2D6EC(gameObject, v14);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12319/*"START_FRIENDSHIPUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetLevelUpSvtFigure(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  ServantScriptEntity_o *Entity_42526076; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ServantVoiceData_array *v15; // x1
  CGThumbnailListItem_o *p_playVoiceList; // x0
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v20; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  struct UserServantEntity_o *v24; // x8
  CombineResultEffectComponent_o *v25; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v30; // x21
  const MethodInfo *v31; // x2
  struct UserServantEntity_o *v32; // x8
  CombineResultEffectComponent_o *v33; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x21
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  ServantVoiceEntity_o *v37; // x20
  UserServantEntity_o *v38; // x21
  ServantVoiceData_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  ServantVoiceData_array *v42; // x0
  int v43; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v2 = this;
  if ( (byte_4C2B2A7 & 1) == 0 )
  {
    sub_1C2D490(&CombineResultFormManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1C2D490(&string___TypeInfo);
    byte_4C2B2A7 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v5;
  *(_QWORD *)&v44.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v44, 0);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_48;
  v6 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0);
  Id = ServantScriptMaster__getId(v6, FigureImageLimitCount, 0);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_42526076 = ServantScriptMaster__GetEntity_42526076((ServantScriptMaster_o *)this, Id, 0);
  if ( Entity_42526076 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_42526076, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v2->fields.combineVoiceId;
      method = (const MethodInfo *)v2->fields.baseUsrSvtData;
LABEL_19:
      v12 = ServantVoiceEntity__lotteryLevelUpVoice_42569660(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0);
LABEL_20:
      v15 = v12;
      p_playVoiceList = (CGThumbnailListItem_o *)&v2->fields.playVoiceList;
      v2->fields.playVoiceList = v15;
      goto LABEL_21;
    }
    method = (const MethodInfo *)v2->fields.baseUsrSvtData;
    if ( method )
    {
      v43 = *(_DWORD *)&method[2].slot;
      resUsrSvtData = v2->fields.resUsrSvtData;
      if ( resUsrSvtData )
      {
        combineVoiceId = v2->fields.combineVoiceId;
        if ( combineVoiceId )
        {
          this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
          if ( !this )
            goto LABEL_48;
          goto LABEL_19;
        }
        if ( System_Int32__Equals_64968544((int32_t)&v43, resUsrSvtData->fields.lv, 0) )
        {
          v22 = v2;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v22, form, 1, v18);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1C2D538(string___TypeInfo, 1);
        v24 = v2->fields.baseUsrSvtData;
        if ( v24 )
        {
          v25 = this;
          p_svtId = &v24->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v45.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v45.fields.fakeValue = 0;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v45, v23);
          if ( v25 )
          {
            if ( !LODWORD(v25->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v25->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1C2D434((CGThumbnailListItem_o *)&v25->fields.svtResultInfoWindow, (int32_t)this, v17, v27);
            v28 = System_String__Concat_63498380((System_String_array *)v25, 0);
            if ( UnityEngine_PlayerPrefs__GetInt_71121948(v28, 0) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v30 = v2->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v12 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v30, 0);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1C2D538(string___TypeInfo, 1);
            v32 = v2->fields.baseUsrSvtData;
            if ( v32 )
            {
              v33 = this;
              v34 = &v32->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v46.fields.currentCryptoKey = v34;
              *(_QWORD *)&v46.fields.fakeValue = 0;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v46, v31);
              if ( v33 )
              {
                if ( !LODWORD(v33->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v33->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1C2D434((CGThumbnailListItem_o *)&v33->fields.svtResultInfoWindow, (int32_t)this, v17, v35);
                v36 = System_String__Concat_63498380((System_String_array *)v33, 0);
                UnityEngine_PlayerPrefs__SetInt(v36, 1, 0);
                v37 = v2->fields.svtVoiceEntity;
                v38 = v2->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v39 = CombineResultFormManager__lotteryCombineResultInit(v37, v38, 0);
                v2->fields.playVoiceList = v39;
                sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.playVoiceList, (int32_t)v39, v40, v41);
                playVoiceList = v2->fields.playVoiceList;
                if ( playVoiceList )
                {
LABEL_22:
                  if ( LODWORD(playVoiceList->max_length) )
                  {
                    v20 = playVoiceList->m_Items[0];
                    if ( !v20 )
                      goto LABEL_48;
                    form = v20->fields.form;
                    v22 = v2;
                    goto LABEL_25;
                  }
LABEL_49:
                  sub_1C2D6F4(this, method, v17);
                }
                this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v42 = ServantVoiceEntity__lotteryLevelUpVoice_42569660(
                        (ServantVoiceEntity_o *)this,
                        v2->fields.baseUsrSvtData,
                        v2->fields.combineVoiceId,
                        0);
                LODWORD(v15) = (_DWORD)v42;
                v2->fields.playVoiceList = v42;
                p_playVoiceList = (CGThumbnailListItem_o *)&v2->fields.playVoiceList;
LABEL_21:
                sub_1C2D434(p_playVoiceList, (int32_t)v15, v13, v14);
                playVoiceList = v2->fields.playVoiceList;
                if ( !playVoiceList )
                  goto LABEL_48;
                goto LABEL_22;
              }
            }
          }
        }
      }
    }
LABEL_48:
    sub_1C2D6EC(this, method);
  }
}


void CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  void *LimitUpSvtVoiceList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w20
  __int64 v9; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  struct UserServantEntity_o *v13; // x8
  int32_t v14; // w21
  int32_t v15; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v18; // x5
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C2B2AD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_8427/*"LimitUpResSvtNodeName"*/);
    byte_4C2B2AD = 1;
  }
  entity = 0;
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v8 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !*((_DWORD *)LimitUpSvtVoiceList + 6) )
      sub_1C2D6F4(LimitUpSvtVoiceList, v6, v7);
    v9 = *((_QWORD *)LimitUpSvtVoiceList + 4);
    if ( !v9 )
      goto LABEL_21;
    v8 = *(_DWORD *)(v9 + 28);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_21;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  LimitUpSvtVoiceList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v20, 0);
  v13 = this->fields.resUsrSvtData;
  if ( !v13 )
    goto LABEL_21;
  v14 = (int)LimitUpSvtVoiceList;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v13->fields.limitCount, 0);
  LimitUpSvtVoiceList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = DataManager__GetMasterData_object_(
                          (DataManager_o *)LimitUpSvtVoiceList,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v14, v15, 0) )
    goto LABEL_18;
  LimitUpSvtVoiceList = entity;
  if ( !entity )
LABEL_21:
    sub_1C2D6EC(LimitUpSvtVoiceList, v6);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v15 = LimitCountUpResultServantLimitCount;
LABEL_18:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v14, v15, 0);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v14,
    ImageLimitCount,
    v8,
    (System_String_o *)StringLiteral_8427/*"LimitUpResSvtNodeName"*/,
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
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 v31; // x21
  __int64 v32; // x22
  int32_t v33; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v35; // x8
  ServantLimitImageMaster_o *v36; // x20
  System_Action_o *v37; // x20
  CombineResultEffectComponent_o *v38; // x0
  const MethodInfo *v39; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_4C2B28B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__99_0__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B28B = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    *(const MethodInfo **)&baseCollectionLimitCnt);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resSvtNameData, (int32_t)servantChange, v19, v20);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.limitUpPlayVoiceLabel, (int32_t)playVoiceLabel, v25, v26);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.limitUpRewardGiftDataList, (int32_t)rewardGiftDataList, v27, v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !baseData )
    goto LABEL_12;
  v32 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v32;
  *(_QWORD *)&v41.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v41, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v35 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v42.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue,
        v36 = (ServantLimitImageMaster_o *)MasterData_object,
        *(_QWORD *)&v42.fields.currentCryptoKey = v35,
        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                   v42,
                                                   0),
        !v36) )
  {
LABEL_12:
    sub_1C2D6EC(gameObject, v30);
  }
  this->fields.isLimitUpSuppression = ServantLimitImageMaster__IsServantLimitCountSeal(
                                        v36,
                                        (int32_t)gameObject,
                                        v33 + 1,
                                        0);
  v37 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__99_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v38, v37, v39);
}


void CombineResultEffectComponent__SetLvExceedCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 Int_71121948; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x21
  __int64 v22; // x22
  const MethodInfo *v23; // x3
  System_String_o *v24; // x0
  UserServantEntity_o *v25; // x20
  CombineRootComponent_c *v26; // x0
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *v28; // x20
  UnityEngine_Transform_o *v29; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4C2B28F & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&CombineResultFormManager_TypeInfo);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_12324/*"START_LVEXCEED_EFFECT"*/);
    sub_1C2D490(&StringLiteral_17242/*"bit_result_grail"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    byte_4C2B28F = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v8, v9);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  Int_71121948 = sub_1C2D538(string___TypeInfo, 1);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v15 = Int_71121948;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v30.fields.fakeValue = 0;
  Int_71121948 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v30, v14);
  if ( !v15 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v15 + 32) = Int_71121948;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 32), Int_71121948, v17, v18);
  v19 = System_String__Concat_63498380((System_String_array *)v15, 0);
  Int_71121948 = UnityEngine_PlayerPrefs__GetInt_71121948(v19, 0);
  if ( (_DWORD)Int_71121948 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_71121948 = sub_1C2D538(string___TypeInfo, 1);
      if ( *p_baseUsrSvtData )
      {
        v21 = Int_71121948;
        v22 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v31.fields.currentCryptoKey = v22;
        *(_QWORD *)&v31.fields.fakeValue = 0;
        Int_71121948 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v31, v20);
        if ( v21 )
        {
          if ( *(_DWORD *)(v21 + 24) )
          {
            *(_QWORD *)(v21 + 32) = Int_71121948;
            sub_1C2D434((CGThumbnailListItem_o *)(v21 + 32), Int_71121948, v17, v23);
            v24 = System_String__Concat_63498380((System_String_array *)v21, 0);
            UnityEngine_PlayerPrefs__SetInt(v24, 0, 0);
            v25 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v25, 0);
            goto LABEL_19;
          }
LABEL_34:
          sub_1C2D6F4(Int_71121948, v13, v17);
        }
      }
LABEL_33:
      sub_1C2D6EC(Int_71121948, v13);
    }
  }
LABEL_19:
  v26 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v26 = CombineRootComponent_TypeInfo;
  }
  Int_71121948 = (__int64)v26->static_fields->effectAssetData;
  if ( !Int_71121948 )
    goto LABEL_33;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              (AssetData_o *)Int_71121948,
                              (System_String_o *)StringLiteral_17242/*"bit_result_grail"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_71121948 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__51051712,
                            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_71121948 )
    goto LABEL_33;
  v28 = (UnityEngine_GameObject_o *)Int_71121948;
  Int_71121948 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_71121948, 0);
  v29 = (UnityEngine_Transform_o *)Int_71121948;
  if ( !byte_4C20DA6 )
  {
    Int_71121948 = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v29 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Int_71121948 = (__int64)this->fields.fsm;
  if ( !Int_71121948 )
    goto LABEL_33;
  Int_71121948 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_71121948, 0);
  if ( !Int_71121948 )
    goto LABEL_33;
  Int_71121948 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_71121948,
                            (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                            0);
  if ( !Int_71121948 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_71121948, v28, 0);
  Int_71121948 = (__int64)this->fields.fsm;
  if ( !Int_71121948 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_71121948, (System_String_o *)StringLiteral_12324/*"START_LVEXCEED_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetLvExceedInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  CombineRootComponent_c *v13; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21

  if ( (byte_4C2B290 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__105_0__);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B290 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v13 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v13 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v13->static_fields->EXCEED_ASSET_PATH;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__105_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v15, 1, 0);
}


void CombineResultEffectComponent__SetNameRevealInfo(
        CombineResultEffectComponent_o *this,
        ServantChangeEntity_o *before,
        ServantChangeEntity_o *after,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  char *gameObject; // x0
  __int64 v15; // x1
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v18; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v20; // x21
  UnityEngine_Transform_o *v21; // x0
  int *v22; // x21
  System_String_o *v23; // x22
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_ParticleSystem_o *v25; // x22
  float v26; // s0
  UnityEngine_ParticleSystem_EmissionModule_o v27; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v28; // x0
  const MethodInfo *v29; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v31; // x4
  struct ServantChangeEntity_o *v32; // x8
  int32_t v33; // w3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  UnityEngine_ParticleSystem_MinMaxCurve_o v37; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v38; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v39; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B28C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11351/*"ResNameNodeName"*/);
    sub_1C2D490(&StringLiteral_12325/*"START_NAME_REVEAL_EFFECT"*/);
    sub_1C2D490(&StringLiteral_9380/*"NameRevealCrossFade"*/);
    sub_1C2D490(&StringLiteral_4881/*"CrtNameNodeName"*/);
    sub_1C2D490(&StringLiteral_17247/*"bit_result_name_reveal"*/);
    sub_1C2D490(&StringLiteral_13042/*"StartAnimationName"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_9381/*"NameRevealParticleNodeName"*/);
    byte_4C2B28C = 1;
  }
  v39 = 0;
  m_ParticleSystem = 0;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (int32_t)after,
    (const MethodInfo *)callback);
  this->fields.resSvtNameData = after;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resSvtNameData, (int32_t)after, v10, v11);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12325/*"START_NAME_REVEAL_EFFECT"*/, 0);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4881/*"CrtNameNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v18 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v18, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11351/*"ResNameNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v20 = (System_String_o *)gameObject;
  v21 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(v21, v20, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v22 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9381/*"NameRevealParticleNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v23 = (System_String_o *)gameObject;
  v24 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(v24, v23, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v25 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0).fields.m_ParticleSystem;
  v39 = UnityEngine_ParticleSystem__get_shape(v25, 0).fields.m_ParticleSystem;
  v26 = (float)((float)v22[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v38, 0, sizeof(v38));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v38, v26, 0);
  v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v37 = v38;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v27, &v37, 0);
  v41.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v39;
  v41.fields.x = (float)((float)v22[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v41.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v28, v41, 0);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v29);
  v32 = this->fields.crtSvtNameData;
  if ( !v32 )
    goto LABEL_40;
  v33 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v32->fields.svtId, v32->fields.limitCount, v33, v31);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0)) == 0
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_13042/*"StartAnimationName"*/,
                               0)) == 0 )
  {
LABEL_40:
    sub_1C2D6EC(gameObject, v15);
  }
  v36 = StringLiteral_17247/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17247/*"bit_result_name_reveal"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(gameObject + 56), v36, v34, v35);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9380/*"NameRevealCrossFade"*/,
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
        const MethodInfo *method)
{
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ServantTreasureDeviceAddMaster_o *Master_object; // x0
  __int64 v22; // x1
  ServantTreasureDeviceAddMaster_o *v23; // x22
  __int64 v24; // x25
  __int64 v25; // x26
  int32_t v26; // w25
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x25
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v28; // x26
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  __int64 v33; // x26
  __int64 v34; // x27
  ServantTreasureDeviceAddMaster_o *v35; // x23
  int32_t v36; // w0
  __int64 v37; // x8
  int32_t v38; // w24
  int32_t v39; // w26
  ServantTreasureDeviceAddEntity_o *EnableEntityBeforeClearQuest; // x23
  __int64 v41; // x2
  __int64 v42; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v44; // x8
  __int64 v45; // x8
  int32_t TransformCount; // w0
  int32_t v47; // w25
  int32_t i; // w26
  TerminalPramsManager_c *v49; // x0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v50; // x28
  int32_t id; // w29
  int32_t v52; // w3
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v53; // x0
  int32_t v54; // w1
  int32_t v55; // w2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v56; // x28
  int32_t v57; // w29
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v58; // x28
  int32_t v59; // w29
  __int64 v60; // x26
  struct System_Int32_array *v61; // x8
  struct System_Int32_array *v62; // x8
  __int64 v63; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  TreasureDvcInfo_o *v66; // [xsp+0h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4C2B286 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12326/*"START_NOBLEUP_EFFECT"*/);
    sub_1C2D490(&StringLiteral_13523/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/);
    sub_1C2D490(&StringLiteral_13524/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/);
    byte_4C2B286 = 1;
  }
  v66 = 0;
  tdInfo = 0;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    *(const MethodInfo **)&targetId);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v23 = Master_object;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v68.fields.currentCryptoKey = v25;
  *(_QWORD *)&v68.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v68, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                        usrSvtData->fields.limitCount,
                                                        0);
  if ( !v23 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v23, v26, (int32_t)Master_object, 0, 0, 0, 0);
  v28 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1C2D6DC(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v28, 0);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.npInfoAddManager, (int32_t)v28, v30, v31);
  if ( EnableEntity )
  {
    Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
    if ( !*p_npInfoAddManager )
      goto LABEL_72;
    Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
      (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
      EnableEntity,
      0);
    if ( kind == 8 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v32 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v35 = (ServantTreasureDeviceAddMaster_o *)v32;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v69.fields.currentCryptoKey = v34;
      *(_QWORD *)&v69.fields.fakeValue = v33;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v69, 0);
      v37 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v70.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v38 = v36;
      *(_QWORD *)&v70.fields.currentCryptoKey = v37;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v70, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v35 )
        goto LABEL_72;
      EnableEntityBeforeClearQuest = ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
                                       v35,
                                       v38,
                                       v39,
                                       *(_DWORD *)&Master_object[2].fields._MasterName_k__BackingField->fields._firstChar,
                                       0);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        if ( EnableEntityBeforeClearQuest )
        {
          v42 = 8;
          while ( 1 )
          {
            treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
            if ( !treasureDeviceIds )
              break;
            if ( v42 - 8 >= (unsigned __int64)LODWORD(treasureDeviceIds->max_length) )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&treasureDeviceIds->obj.klass + v42),
              targetLv,
              0,
              0);
            v44 = EnableEntity->fields.treasureDeviceIds;
            if ( !v44 )
              break;
            if ( v42 - 8 >= (unsigned __int64)LODWORD(v44->max_length) )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&v44->obj.klass + v42),
              targetLv,
              0,
              0);
            Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                  (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
            v45 = v42 - 7;
            ++v42;
            if ( v45 >= (int)Master_object )
              goto LABEL_63;
          }
        }
        goto LABEL_72;
      }
    }
    else
    {
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        v60 = 8;
        while ( 1 )
        {
          v61 = EnableEntity->fields.treasureDeviceIds;
          if ( !v61 )
            break;
          if ( v60 - 8 >= (unsigned __int64)LODWORD(v61->max_length) )
            goto LABEL_73;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v61->obj.klass + v60),
            targetLvOld,
            0,
            0);
          v62 = EnableEntity->fields.treasureDeviceIds;
          if ( !v62 )
            break;
          if ( v60 - 8 >= (unsigned __int64)LODWORD(v62->max_length) )
LABEL_73:
            sub_1C2D6F4(Master_object, v22, v41);
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v62->obj.klass + v60),
            targetLv,
            0,
            0);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
          v63 = v60 - 7;
          ++v60;
          if ( v63 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1C2D6EC(Master_object, v22);
      }
    }
  }
  else
  {
    if ( UserServantEntity__GetTransformCount(usrSvtData, 1, 0) < 2 )
      goto LABEL_64;
    TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
    if ( TransformCount >= 1 )
    {
      v47 = TransformCount;
      for ( i = 0; v47 != i; ++i )
      {
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                              usrSvtData,
                                                              &tdInfo,
                                                              i,
                                                              -1,
                                                              -1,
                                                              0,
                                                              0);
        if ( kind == 8 )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C21464 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C21464 = 1;
          }
          v49 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v49 = TerminalPramsManager_TypeInfo;
          }
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                                usrSvtData,
                                                                &v66,
                                                                i,
                                                                v49->static_fields->_QuestId_k__BackingField,
                                                                -1,
                                                                0,
                                                                0);
          if ( !v66 )
            goto LABEL_72;
          v50 = *p_npInfoAddManager;
          id = v66->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0);
          if ( !v50 )
            goto LABEL_72;
          v52 = (int)Master_object;
          v53 = v50;
          v54 = id;
          v55 = targetLv;
        }
        else
        {
          if ( !tdInfo )
            goto LABEL_72;
          v56 = *p_npInfoAddManager;
          v57 = tdInfo->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0);
          if ( !v56 )
            goto LABEL_72;
          v52 = (int)Master_object;
          v53 = v56;
          v54 = v57;
          v55 = targetLvOld;
        }
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(v53, v54, v55, v52, 0);
        if ( !tdInfo )
          goto LABEL_72;
        v58 = *p_npInfoAddManager;
        v59 = tdInfo->fields.id;
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(usrSvtData, i, 0);
        if ( !v58 )
          goto LABEL_72;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          v58,
          v59,
          targetLv,
          (int32_t)Master_object,
          0);
      }
    }
  }
LABEL_63:
  ++this->fields.tdShowIndex;
LABEL_64:
  Master_object = (ServantTreasureDeviceAddMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !Master_object )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.unSummon;
  if ( !Master_object )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, kind == 27, 0);
  unSummonLabel = this->fields.unSummonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13523/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13524/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12326/*"START_NOBLEUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetPowerUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  if ( (byte_4C2B28E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12330/*"START_POWERUP_EFFECT"*/);
    byte_4C2B28E = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_1C2D6EC(gameObject, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12330/*"START_POWERUP_EFFECT"*/, 0);
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
  int32_t LimitCountByImageLimitCostumeIn; // w2
  bool v10; // w3
  CombineResultEffectComponent_o *v11; // x0
  struct ServantChangeEntity_o *v12; // x8
  int32_t CardImageLimitCount; // w0
  int32_t v14; // w20
  const MethodInfo *v15; // x1

  if ( (byte_4C2B29F & 1) == 0 )
  {
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B29F = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode(Instance, 1, 0);
    Instance = (CommonUI_o *)this->fields.resUsrSvtData;
    if ( !Instance )
      goto LABEL_32;
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)Instance, 0, 0);
    if ( CardImageLimitCount < 11 )
    {
      LimitCountByImageLimitCostumeIn = -1;
    }
    else
    {
      v14 = CardImageLimitCount;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v14, 0);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 1, 0);
        resSvtNameData = this->fields.resSvtNameData;
        if ( resSvtNameData )
          voiceSvtId = resSvtNameData->fields.svtVoiceId;
        else
          voiceSvtId = -1;
        LimitCountByImageLimitCostumeIn = -1;
        v10 = 1;
        v11 = this;
        goto LABEL_31;
      }
LABEL_32:
      sub_1C2D6EC(Instance, v5);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode(Instance, 1, 0);
    v12 = this->fields.resSvtNameData;
    if ( v12 )
      voiceSvtId = v12->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    LimitCountByImageLimitCostumeIn = this->fields.costumeId;
  }
  v11 = this;
  v10 = 0;
LABEL_31:
  CombineResultEffectComponent__getSvtVoiceData(v11, voiceSvtId, LimitCountByImageLimitCostumeIn, v10, v6);
  CombineResultEffectComponent__loadVoiceData(this, v15);
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
  const MethodInfo *v15; // x3
  struct UserServantEntity_o *v16; // x8
  __int64 v17; // x21
  __int64 v18; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UserServantEntity_o *v23; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v24; // x23
  __int64 v25; // x21
  __int64 v26; // x22
  int32_t v27; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x25
  ServantLimitImageMaster_o *v30; // x21
  int32_t v31; // w22
  int32_t v32; // w23
  int32_t v33; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // kr10_16
  struct UserServantEntity_o *v35; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v37; // x21
  int32_t v38; // w22
  CombineResultEffectComponent_o *v39; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v40; // x8
  UserServantEntity_o *v41; // x20
  UserServantEntity_o *v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_resUsrSvtData; // x19
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x22
  __int64 v47; // x20
  __int64 v48; // x21
  int32_t v49; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x22
  ServantLimitImageMaster_o *v51; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v52; // x8
  int32_t v53; // w19
  int32_t v54; // w21
  int32_t ServantImageLimitSealAfter; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // kr30_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+60h] [xbp-70h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v2 = this;
  if ( (byte_4C2B29E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C2B29E = 1;
  }
  *(_QWORD *)afterAtk = 0;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_62;
    v4 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v60.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v59 = v60;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v59, 0) < 1 )
    {
      v41 = v2->fields.baseUsrSvtData;
      v42 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_42922220(v42, v41, 0);
      v2->fields.resUsrSvtData = v42;
      p_resUsrSvtData = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
      sub_1C2D434((CGThumbnailListItem_o *)p_resUsrSvtData, (int32_t)v42, v44, v45);
      if ( (*((_DWORD *)p_resUsrSvtData - 8) | 0x10) != 0x1A )
        return;
      v46 = *p_resUsrSvtData;
      if ( *p_resUsrSvtData )
      {
        v48 = *(_QWORD *)&v46[6].fields.currentCryptoKey;
        v47 = *(_QWORD *)&v46[6].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v64.fields.currentCryptoKey = v48;
        *(_QWORD *)&v64.fields.fakeValue = v47;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v64, 0);
        v46[6] = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v49 + 1, 0);
        v50 = *p_resUsrSvtData;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( *p_resUsrSvtData )
        {
          v51 = (ServantLimitImageMaster_o *)this;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                     (*p_resUsrSvtData)[5],
                                                     0);
          v52 = *p_resUsrSvtData;
          if ( *p_resUsrSvtData )
          {
            v53 = (int)this;
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52[6], 0);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            this = (CombineResultEffectComponent_o *)ImageLimitCount__GetDispLimitCount(v54, 0);
            if ( v51 )
            {
              ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                             v51,
                                             v53,
                                             (int32_t)this,
                                             0);
              v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ServantImageLimitSealAfter, 0);
              method = *(const MethodInfo **)&v56.fields.fakeValue;
              this = *(CombineResultEffectComponent_o **)&v56.fields.currentCryptoKey;
              if ( v50 )
              {
                v50[8] = v56;
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v5 = v2->fields.baseUsrSvtData;
        if ( v5 )
        {
          v6 = *(_OWORD *)&v5->fields.id.fields.fakeValue;
          v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v5->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v60.fields.fakeValue = v6;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v60;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                     &v58,
                                                     0);
          if ( v7 )
          {
            v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v7,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v9 = v2->fields.baseUsrSvtData;
              if ( !v9 )
                goto LABEL_62;
              v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
              v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
              *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v60.fields.fakeValue = v10;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v57 = v60;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                         &v57,
                                                         0);
              if ( !v11 )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v11,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v12 = v2->fields.baseUsrSvtData;
                v13 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_42922220(v13, v12, 0);
                v2->fields.resUsrSvtData = v13;
                sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.resUsrSvtData, (int32_t)v13, v14, v15);
              }
            }
            if ( v2->fields.kind != 19 )
              return;
            v16 = v2->fields.baseUsrSvtData;
            if ( v16 )
            {
              v18 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
              v17 = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v62.fields.currentCryptoKey = v18;
              *(_QWORD *)&v62.fields.fakeValue = v17;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                         v62,
                                                         0);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v20 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_42922220(v20, resUsrSvtData, 0);
                v2->fields.resUsrSvtData = v20;
                sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.resUsrSvtData, (int32_t)v20, v21, v22);
                v23 = v2->fields.baseUsrSvtData;
                if ( v23 )
                {
                  v24 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                  v26 = *(_QWORD *)&v23->fields.limitCount.fields.currentCryptoKey;
                  v25 = *(_QWORD *)&v23->fields.limitCount.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v63.fields.currentCryptoKey = v26;
                  *(_QWORD *)&v63.fields.fakeValue = v25;
                  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v63, 0);
                  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v27 + 1, 0);
                  method = *(const MethodInfo **)&v28.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v28.fields.currentCryptoKey;
                  if ( v24 )
                  {
                    v24[6] = v28;
                    v29 = *v8;
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    if ( *v8 )
                    {
                      v30 = (ServantLimitImageMaster_o *)this;
                      this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                 (*v8)[5],
                                                                 0);
                      if ( *v8 )
                      {
                        v31 = (int)this;
                        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*v8)[6], 0);
                        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                        this = (CombineResultEffectComponent_o *)ImageLimitCount__GetDispLimitCount(v32, 0);
                        if ( v30 )
                        {
                          v33 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v30, v31, (int32_t)this, 0);
                          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v33, 0);
                          method = *(const MethodInfo **)&v34.fields.fakeValue;
                          this = *(CombineResultEffectComponent_o **)&v34.fields.currentCryptoKey;
                          if ( v29 )
                          {
                            v29[8] = v34;
                            v35 = v2->fields.baseUsrSvtData;
                            if ( v35 )
                            {
                              hp = v35->fields.hp;
                              afterAtk[0] = v35->fields.atk;
                              afterAtk[1] = hp;
                              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( this )
                              {
                                this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)this,
                                                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                if ( *v8 )
                                {
                                  v37 = (ServantLimitMaster_o *)this;
                                  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                             (*v8)[5],
                                                                             0);
                                  if ( *v8 )
                                  {
                                    v38 = (int)this;
                                    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                               (*v8)[6],
                                                                               0);
                                    if ( v37 )
                                    {
                                      this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                                 v37,
                                                                                 v38,
                                                                                 (int32_t)this,
                                                                                 0);
                                      if ( this )
                                      {
                                        v39 = this;
                                        this = (CombineResultEffectComponent_o *)v2->fields.combineResStatus;
                                        if ( this )
                                        {
                                          CheckCombineResStatus__getCombineResStatus(
                                            (CheckCombineResStatus_o *)this,
                                            &afterAtk[1],
                                            afterAtk,
                                            v2->fields.resUsrSvtData,
                                            HIDWORD(v39->fields.m_CancellationTokenSource),
                                            0);
                                          v40 = *v8;
                                          if ( *v8 )
                                          {
                                            *(_DWORD *)&v40[16].fields.inited = afterAtk[1];
                                            v40[16].fields.fakeValue = afterAtk[0];
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
    sub_1C2D6EC(this, method);
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
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  void *Instance; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *v15; // x26
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w27
  int v18; // w8
  Il2CppObject *v19; // x28
  int v20; // w8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Comparison_T__o *v27; // x24
  Il2CppObject *v28; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int v32; // w20
  BalanceConfig_c *v33; // x0
  TerminalSceneComponent_c *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  int32_t v40; // w24
  const MethodInfo *v41; // x2

  if ( (byte_4C2B294 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
    sub_1C2D490(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__109_0__);
    sub_1C2D490(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_12332/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1C2D490(&StringLiteral_17258/*"bit_result_ultimate_anim"*/);
    sub_1C2D490(&StringLiteral_13042/*"StartAnimationName"*/);
    byte_4C2B294 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    phase,
    (const MethodInfo *)msgCallBack);
  this->fields.messageCallback = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.messageCallback, 0, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  v15 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 5);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v15 )
    goto LABEL_57;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v15,
         (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v15,
                   v17,
                   (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        break;
      v18 = *((_DWORD *)Instance + 9);
      v19 = (Il2CppObject *)Instance;
      if ( v18 >= 1 && v18 == questId )
      {
        v20 = *((_DWORD *)Instance + 10);
        if ( v20 < 1 || v20 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v24 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v19,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v19;
              sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
            }
          }
        }
      }
      if ( ++v17 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v15,
                      (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) )
        goto LABEL_20;
    }
LABEL_57:
    sub_1C2D6EC(Instance, v14);
  }
LABEL_20:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v27 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      v27,
      v28,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__109_0__,
      0);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v27;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__109_0, (int32_t)v27, v30, v31);
  }
  if ( !v16 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_58242632(
    v16,
    v27,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v32 = v16->fields._size;
  if ( v32 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v16,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v33 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  if ( !v33->static_fields->CloseSecretTreasureDeviceQuestClear && v16->fields._size >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v16,
                   v40,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_57;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v41) )
        break;
      if ( ++v40 >= v16->fields._size )
        goto LABEL_33;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v16,
                 v40,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_33:
  if ( v32 < 1 )
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
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    v34 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v34 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v34->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_57;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0);
    this->fields.messageCallback = msgCallBack;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.messageCallback, (int32_t)msgCallBack, v35, v36);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_57;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_13042/*"StartAnimationName"*/,
                 0);
    if ( !Instance )
      goto LABEL_57;
    v39 = StringLiteral_17258/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17258/*"bit_result_ultimate_anim"*/;
    sub_1C2D434((CGThumbnailListItem_o *)((char *)Instance + 56), v39, v37, v38);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12332/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent__SetSecretTreasureDeviceInfoForSvtGet(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  const MethodInfo *v8; // x2
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  char *fsm; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1

  if ( (byte_4C2B295 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&StringLiteral_12332/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1C2D490(&StringLiteral_17258/*"bit_result_ultimate_anim"*/);
    sub_1C2D490(&StringLiteral_13042/*"StartAnimationName"*/);
    byte_4C2B295 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( v9->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v8) )
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
                          (System_String_o *)StringLiteral_13042/*"StartAnimationName"*/,
                          0)) == 0
      || (v14 = StringLiteral_17258/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17258/*"bit_result_ultimate_anim"*/,
          sub_1C2D434((CGThumbnailListItem_o *)(fsm + 56), v14, v12, v13),
          (fsm = (char *)this->fields.fsm) == 0) )
    {
      sub_1C2D6EC(fsm, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12332/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
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
  struct UserServantEntity_o **p_baseUsrSvtData; // x26
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t TransformCount; // w0
  struct System_Int32_array *skillIds; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2B285 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12337/*"START_SKILLUP_EFFECT"*/);
    sub_1C2D490(&StringLiteral_12221/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/);
    sub_1C2D490(&StringLiteral_12222/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/);
    byte_4C2B285 = 1;
  }
  svtSkillAddEnt = 0;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.kind = kind;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    *(const MethodInfo **)&targetId);
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_18;
  TransformCount = UserServantEntity__GetTransformCount(baseUsrSvtData, 0, 0);
  this->fields.displayCount = TransformCount;
  if ( !TransformCount )
  {
    baseUsrSvtData = *p_baseUsrSvtData;
    if ( !*p_baseUsrSvtData )
      goto LABEL_18;
    baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                              baseUsrSvtData,
                                              &svtSkillAddEnt,
                                              targetId,
                                              0);
    if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
    {
      if ( !svtSkillAddEnt )
        goto LABEL_18;
      skillIds = svtSkillAddEnt->fields.skillIds;
      if ( !skillIds )
        goto LABEL_18;
      this->fields.displayCount = LODWORD(skillIds->max_length) - 1;
    }
  }
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !baseUsrSvtData )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUsrSvtData, 1, 0);
  baseUsrSvtData = (UserServantEntity_o *)this->fields.unSummon;
  if ( !baseUsrSvtData )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUsrSvtData, kind == 21, 0);
  unSummonLabel = this->fields.unSummonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)baseUsrSvtData, 0),
        unSummonDetail = this->fields.unSummonDetail,
        baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)baseUsrSvtData, 0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.fsm) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(baseUsrSvtData, v20);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)baseUsrSvtData, (System_String_o *)StringLiteral_12337/*"START_SKILLUP_EFFECT"*/, 0);
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
  __int64 v15; // x2
  struct ServantVoiceData_array *v16; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v18; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  unsigned __int64 v21; // x20
  __int64 v22; // x27
  int32_t v23; // w21
  int32_t v24; // w22

  if ( (byte_4C2B2BA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C2D490(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C2B2BA = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_43824080(Item, faceType, formId, 0, fadeTime, 0);
          return;
        }
      }
    }
LABEL_25:
    sub_1C2D6EC(Item, v14);
  }
  v16 = this->fields.playVoiceList;
  if ( !v16 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= LODWORD(v16->max_length) )
LABEL_23:
    sub_1C2D6F4(Item, v14, v15);
  v18 = v16->m_Items[playCnt];
  if ( !v18 )
    goto LABEL_25;
  multiFace = v18->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v18->fields.multiForm;
    if ( multiForm )
    {
      if ( (_DWORD)Item == (unsigned int)multiFace->max_length && (_DWORD)Item == LODWORD(multiForm->max_length) )
      {
        if ( (unsigned int)multiFace->max_length )
        {
          v21 = 0;
          v22 = (unsigned int)Item - 1LL;
          do
          {
            if ( v21 >= LODWORD(multiForm->max_length) )
              break;
            if ( !standFigureCollects )
              goto LABEL_25;
            v23 = multiFace->m_Items[v21];
            v24 = multiForm->m_Items[v21];
            Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)standFigureCollects,
                                         v21,
                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_43824080(Item, v23, v24, 0, fadeTime, 0);
            if ( v22 == v21 )
              return;
            ++v21;
          }
          while ( v21 < LODWORD(multiFace->max_length) );
        }
        goto LABEL_23;
      }
    }
  }
}


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
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  System_Action_o *v27; // x20
  CombineResultEffectComponent_o *v28; // x0
  const MethodInfo *v29; // x2

  if ( (byte_4C2B288 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__96_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B288 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    infoIdx,
    (const MethodInfo *)returnQpNum);
  this->fields.baseUsrSvtData = baseData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v17, v18);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v19, v20);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineVoiceId, 0, v21, v22);
  this->fields.autoFadeout = 0;
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(gameObject, v26);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__96_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v28, v27, v29);
}


void CombineResultEffectComponent__SetSvtCombineInfo_48308060(
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
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_o *v27; // x20
  CombineResultEffectComponent_o *v28; // x0
  const MethodInfo *v29; // x2

  if ( (byte_4C2B289 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__97_0__);
    byte_4C2B289 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (const MethodInfo *)baseData);
  this->fields.resUsrSvtData = resData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v19, v20);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_6;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineVoiceId, (int32_t)voiceId, v23, v24);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v25, v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_6:
    sub_1C2D6EC(gameObject, v22);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__97_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v28, v27, v29);
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
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  System_Action_o *v27; // x20
  CombineResultEffectComponent_o *v28; // x0
  const MethodInfo *v29; // x2

  if ( (byte_4C2B28A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__98_0__);
    byte_4C2B28A = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    infoIdx,
    *(const MethodInfo **)&normalExp);
  this->fields.baseUsrSvtData = baseData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v19, v20);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v26);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__98_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v28, v27, v29);
}


void CombineResultEffectComponent__ShowCostumeChangeMessage(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  System_String_o *costumeName; // x21
  System_Action_o *v6; // x22

  if ( (byte_4C2B2D7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__183_0__);
    sub_1C2D490(&StringLiteral_3828/*"COSTUME_CHANGED_MSG"*/);
    byte_4C2B2D7 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        costumeName = this->fields.costumeName,
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__183_0__,
          0),
        !skillResultInfoWindow) )
  {
    sub_1C2D6EC(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenCostumeChangeMessage(
    skillResultInfoWindow,
    costumeName,
    (System_String_o *)StringLiteral_3828/*"COSTUME_CHANGED_MSG"*/,
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

  if ( (byte_4C2B2C3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__158_0__);
    byte_4C2B2C3 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__158_0__,
          0),
        !limitUpResultCheck) )
  {
    sub_1C2D6EC(bgCollider, method);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  __int64 v6; // x2
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x21
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x23
  int32_t kind; // w25
  System_Action_o *v13; // x24
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2B2C1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__156_0__);
    byte_4C2B2C1 = 1;
  }
  transformInfo = 0;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                           (UserServantEntity_o *)bgCollider,
                                           &transformInfo,
                                           index,
                                           0);
  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    goto LABEL_10;
  tdAddEntity_k__BackingField = npInfoAddManager->fields._tdAddEntity_k__BackingField;
  if ( !tdAddEntity_k__BackingField )
    goto LABEL_10;
  titles = tdAddEntity_k__BackingField->fields.titles;
  if ( !titles )
    goto LABEL_10;
  if ( LODWORD(titles->max_length) <= index )
    sub_1C2D6F4(bgCollider, *(_QWORD *)&index, v6);
  titleText = titles->m_Items[index];
  if ( !titleText )
  {
LABEL_10:
    if ( !transformInfo )
      goto LABEL_14;
    titleText = transformInfo->fields.titleText;
  }
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  kind = this->fields.kind;
  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__156_0__, 0);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1C2D6EC(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    index,
    titleText,
    kind == 8,
    v13,
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

  if ( (byte_4C2B2C2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__157_0__);
    byte_4C2B2C2 = 1;
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
  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__157_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1C2D6EC(bgCollider, *(_QWORD *)&index);
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

  if ( (byte_4C2B2C0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__155_0__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B2C0 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
  v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__155_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1C2D6EC(bgCollider, method);
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

  if ( (byte_4C2B2C4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__160_0__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B2C4 = 1;
  }
  v16 = 0;
  tdInfo = 0;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v14, 0);
  if ( !v6 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v6,
             bgCollider,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
        v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__160_0__,
          0),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1C2D6EC(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v11, v12, v13, 0);
}


void CombineResultEffectComponent__StartPlayVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *playVoiceList; // x0
  VoiceMaster_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantVoiceData_array *v7; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v9; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  VoiceMaster_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  struct ServantVoiceData_array *v14; // x8
  __int64 v15; // x9
  ServantVoiceData_o *v16; // x8
  int FlagRequestNumber; // w0
  struct ServantVoiceData_array *v18; // x8
  __int64 v19; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *v20; // x20
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C2B2BB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_PlayVoice__);
    sub_1C2D490(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B2BB = 1;
  }
  playVoiceList = (System_Collections_ICollection_o *)this->fields.playVoiceList;
  this->fields.unSkippableFlag = 0;
  IsNullOrEmpty = (VoiceMaster_o *)BasicHelper__IsNullOrEmpty(playVoiceList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    v7 = this->fields.playVoiceList;
    if ( !v7 )
      goto LABEL_24;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= LODWORD(v7->max_length) )
      goto LABEL_25;
    v9 = v7->m_Items[playCnt];
    if ( !v9 )
      goto LABEL_24;
    if ( v9->fields.unSkippable )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsNullOrEmpty = (VoiceMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_VoiceMaster___);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_24;
      v11 = IsNullOrEmpty;
      v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v13;
      *(_QWORD *)&v23.fields.fakeValue = v12;
      IsNullOrEmpty = (VoiceMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
      v14 = this->fields.playVoiceList;
      if ( !v14 )
        goto LABEL_24;
      v15 = this->fields.playCnt;
      if ( (unsigned int)v15 >= LODWORD(v14->max_length) )
LABEL_25:
        sub_1C2D6F4(IsNullOrEmpty, v5, v6);
      v16 = v14->m_Items[v15];
      if ( !v16 || !v11 )
        goto LABEL_24;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v11, (int32_t)IsNullOrEmpty, v16->fields.id, 1, 0);
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
    v18 = this->fields.playVoiceList;
    if ( !v18 )
      goto LABEL_24;
    v19 = this->fields.playCnt;
    if ( (unsigned int)v19 < LODWORD(v18->max_length) )
    {
      IsNullOrEmpty = (VoiceMaster_o *)v18->m_Items[v19];
      if ( IsNullOrEmpty )
      {
        v20 = ServantVoiceData__get_BeforePerformance((ServantVoiceData_o *)IsNullOrEmpty, 0);
        v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v21, (Il2CppObject *)this, Method_CombineResultEffectComponent_PlayVoice__, 0);
        CombineResultEffectComponent__PlayPerformance(this, v20, v21, v22);
        return;
      }
LABEL_24:
      sub_1C2D6EC(IsNullOrEmpty, v5);
    }
    goto LABEL_25;
  }
}


void CombineResultEffectComponent___CheckReturnCombineItem_b__170_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct System_Int64_array **v10; // x8
  struct System_Int64_array *v11; // x1

  if ( (byte_4C2B2E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_long___);
    byte_4C2B2E6 = 1;
  }
  this->fields.returnQpNum = 0;
  v6 = Method_System_Array_Empty_long___;
  v7 = *((_QWORD *)Method_System_Array_Empty_long___ + 7);
  if ( !v7 )
  {
    sub_1C7DC00(Method_System_Array_Empty_long___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(inited);
  v10 = *(struct System_Int64_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.returnSvtIds = *v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.returnSvtIds, (int32_t)v11, v2, v3);
}


void CombineResultEffectComponent___CloseLimitCountSealDialog_b__178_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C2B2E7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_1__);
    byte_4C2B2E7 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_1__,
    0);
  if ( !limitUpResultCheck )
    sub_1C2D6EC(v5, v6);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0);
}


void CombineResultEffectComponent___EndLoad_b__148_0(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2B2E5 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_5434/*"END_LOAD"*/);
    byte_4C2B2E5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.fsm) == 0) )
    sub_1C2D6EC(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5434/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___FadeoutProcess_b__172_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C2D6EC(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    1,
    callbackFunc->fields.method);
}


void CombineResultEffectComponent___InitCombineEffect_b__115_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C2B2E3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5434/*"END_LOAD"*/);
    byte_4C2B2E3 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5434/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___SetAppendSkillCombineInfo_b__111_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4C2B2E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_12324/*"START_LVEXCEED_EFFECT"*/);
    sub_1C2D490(&StringLiteral_17238/*"bit_result_extraskill"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    byte_4C2B2E1 = 1;
  }
  if ( data )
  {
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                data,
                                (System_String_o *)StringLiteral_17238/*"bit_result_extraskill"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51051712,
                                              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C2D6EC(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12324/*"START_LVEXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetCombineLimit_b__114_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x0
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x0
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *v14; // x21

  if ( (byte_4C2B2E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    sub_1C2D490(&StringLiteral_12311/*"START_COMBINE_LIMIT"*/);
    sub_1C2D490(&StringLiteral_17232/*"bit_result_"*/);
    byte_4C2B2E2 = 1;
  }
  if ( data )
  {
    v5 = sub_1C2D538(string___TypeInfo, 1);
    v6 = System_Int32__ToString((int)this + 332, 0);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_63457864(
                                              (System_String_o *)StringLiteral_17232/*"bit_result_"*/,
                                              v6,
                                              0);
    if ( !v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1C2D6F4(transform, v8, v9);
    *(_QWORD *)(v5 + 32) = transform;
    sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)transform, v9, v10);
    v11 = System_String__Concat_63498380((System_String_array *)v5, 0);
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                data,
                                v11,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51051712,
                                              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v14 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v13, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_19:
      sub_1C2D6EC(transform, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12311/*"START_COMBINE_LIMIT"*/, 0);
  }
}


void CombineResultEffectComponent___SetCostumeCombineInfo_b__102_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4C2B2DE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12316/*"START_COSTUME_EFFECT"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    sub_1C2D490(&StringLiteral_17256/*"bit_result_skinchange"*/);
    byte_4C2B2DE = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17256/*"bit_result_skinchange"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C2D6EC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12316/*"START_COSTUME_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__107_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4C2B2E0 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_17241/*"bit_result_friendship_exceed"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    sub_1C2D490(&StringLiteral_12320/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4C2B2E0 = 1;
  }
  if ( data )
  {
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                data,
                                (System_String_o *)StringLiteral_17241/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51051712,
                                              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C2D6EC(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12320/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetLimitUpCombineInfo_b__99_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4C2B2DD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17234/*"bit_result_advent"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    sub_1C2D490(&StringLiteral_12323/*"START_LIMITUP_EFFECT"*/);
    byte_4C2B2DD = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17234/*"bit_result_advent"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C2D6EC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12323/*"START_LIMITUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__105_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4C2B2DF & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_12324/*"START_LVEXCEED_EFFECT"*/);
    sub_1C2D490(&StringLiteral_17246/*"bit_result_limitbreak"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    byte_4C2B2DF = 1;
  }
  if ( data )
  {
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                data,
                                (System_String_o *)StringLiteral_17246/*"bit_result_limitbreak"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51051712,
                                              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C2D6EC(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12324/*"START_LVEXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__96_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4C2B2DA & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_12341/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C2D490(&StringLiteral_17251/*"bit_result_servant"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    byte_4C2B2DA = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17251/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)Effect, 0, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C2D6EC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12341/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__97_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4C2B2DB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12341/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C2D490(&StringLiteral_17251/*"bit_result_servant"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    byte_4C2B2DB = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17251/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C2D6EC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12341/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtEqCombineInfo_b__98_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4C2B2DC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12341/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C2D490(&StringLiteral_17251/*"bit_result_servant"*/);
    sub_1C2D490(&StringLiteral_11378/*"ResultEffect"*/);
    byte_4C2B2DC = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17251/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11378/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C2D6EC(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12341/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___ShowCostumeChangeMessage_b__183_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C2D6EC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowLimitUpChangeInfo_b__158_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C2D6EC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowNpChangeInfo_b__156_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C2D6EC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeInfo_b__157_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C2D6EC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeMessage_b__155_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C2D6EC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__160_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C2D6EC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___setSkillResultInfo_b__147_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineResultEffectComponent__EndDisp(this, method);
  CombineResultEffectComponent__CheckReturnCombineItem(this, v3);
}


void CombineResultEffectComponent___setSkillResultInfo_b__147_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effect; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v11; // x22
  __int64 v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UserServantEntity_o *v15; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CommonUI_o *v21; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v24; // x25
  struct CombineResultEffectComponent_ClickDelegate_o *v25; // x8

  if ( (byte_4C2B2E4 & 1) == 0 )
  {
    sub_1C2D490(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__7__);
    sub_1C2D490(&CombineResultEffectComponent___c__DisplayClass147_2_TypeInfo);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C2B2E4 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_71163892(effect, 0);
  this->fields.effect = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effect, 0, v4, v5);
  CombineResultEffectComponent__Close(this, v6);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    v11 = EntityDefinitely;
    v12 = sub_1C2D6DC(CombineResultEffectComponent___c__DisplayClass147_2_TypeInfo);
    CombineResultEffectComponent___c__DisplayClass147_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass147_2_o *)v12,
      0);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 24) = this;
      sub_1C2D434((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v13, v14);
      v15 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_42922472(v15, v11, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v12 + 16) = callbackFunc;
      sub_1C2D434((CGThumbnailListItem_o *)(v12 + 16), (int32_t)callbackFunc, v17, v18);
      this->fields.callbackFunc = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v19, v20);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v15 )
      {
        v21 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v15->fields.treasureDeviceLv1;
        v24 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C2D6DC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)v12,
          Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__7__,
          0);
        if ( v21 )
        {
          CommonUI__OpenNobleCombineResult(
            v21,
            18,
            v15,
            targetId,
            treasureDeviceLv1,
            v24,
            this->fields.targetIdOld,
            v15->fields.treasureDeviceLv1,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_1C2D6EC(Instance, v8);
  }
  v25 = this->fields.callbackFunc;
  if ( v25 )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v25->fields.invoke_impl)(
      v25->fields.method_code,
      1,
      v25->fields.method);
}


void CombineResultEffectComponent___setSkillResultInfo_b__147_2(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C2D6EC(this, method);
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
  __int64 v7; // x2
  ServantFlagEntity_o *v8; // x8
  struct System_Int32_array *args; // x8
  bool result; // w0
  int32_t v11; // w8
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2B297 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B297 = 1;
  }
  svtFlagEntity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_42455744(
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_15:
    sub_1C2D6EC(Instance, v6);
  }
  Instance = (Il2CppObject *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_13;
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v8 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_15;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v8->fields.args;
  if ( !args )
    goto LABEL_15;
  if ( LODWORD(args->max_length) <= 1 )
    sub_1C2D6F4(Instance, v6, v7);
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
  const MethodInfo *v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v14; // x20
  __int64 v15; // x21
  int32_t svtId; // w21
  System_String_o *dispBattleName; // x26
  int32_t v18; // w0
  System_Int32_array *v19; // x20
  float r; // s8
  __int64 v21; // x2
  struct System_Int32_array *skillIds; // x8
  int32_t v23; // w9
  int max_length; // w10
  UnityEngine_Collider_c *klass; // x8
  unsigned int v26; // w22
  float g; // s9
  float b; // s10
  float a; // s11
  float v30; // s12
  float v31; // s13
  float v32; // s14
  float v33; // s15
  ServantSkillAddEntity_o *v34; // x9
  unsigned __int64 v35; // x8
  __int64 v36; // x10
  struct System_Int32_array *v37; // x11
  unsigned int v38; // w13
  int32_t v39; // w11
  int32_t TransformCount; // w0
  int32_t displayCount; // w9
  int32_t v42; // w8
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  int32_t v47; // w9
  int32_t v48; // w8
  int32_t v49; // w21
  int32_t TransformedSameSlotSkillId; // w0
  int32_t v51; // w8
  int32_t v52; // w22
  UserServantEntity_o *v53; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x22
  int32_t targetId; // w23
  int32_t targetLv; // w24
  System_Action_o *v57; // x25
  TransformServantInfo_o *transformInfo; // [xsp+40h] [xbp-A0h] BYREF
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+48h] [xbp-98h] BYREF
  TransformServantInfo_o *v60; // [xsp+98h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C2B2CB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C2D490(&Method_CombineResultEffectComponent_clickNext__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2B2CB = 1;
  }
  v60 = 0;
  transformInfo = 0;
  svtSkillAddEnt = 0;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_102;
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
      goto LABEL_102;
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
LABEL_102:
      sub_1C2D6EC(bgCollider, method);
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
        v10 = (_QWORD *)sub_1C2D4A8(Method_CombineResultEffectComponent_clickNext__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v12);
      bgCollider = (UnityEngine_Collider_o *)this->fields.limitUpResultCheck;
      if ( bgCollider )
      {
        if ( !LimitUpResultCheckComponent__CheckFinishedResultLimitUp((LimitUpResultCheckComponent_o *)bgCollider, 0) )
          return;
        goto LABEL_29;
      }
      goto LABEL_102;
    }
    kind = this->fields.kind;
  }
  if ( kind > 6 )
  {
    if ( kind == 20 )
    {
      if ( this->fields.displayCount >= 1 )
      {
        bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
        if ( bgCollider )
        {
          TransformCount = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0);
          displayCount = this->fields.displayCount;
          v42 = TransformCount;
          bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
          this->fields.displayCount = displayCount - 1;
          if ( bgCollider )
          {
            bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                     (UserServantEntity_o *)bgCollider,
                                                     &transformInfo,
                                                     v42 - displayCount,
                                                     0);
            if ( transformInfo )
            {
              bgCollider = (UnityEngine_Collider_o *)this->fields.commandCardExceedResultWindow;
              if ( bgCollider )
              {
                CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
                  (CommandCardExceedResultWindowComponent_o *)bgCollider,
                  this->fields.baseUsrSvtData,
                  this->fields.commandCardIndex,
                  this->fields.commandCardExceedCount,
                  transformInfo->fields.svtId,
                  transformInfo->fields.titleText,
                  0);
                return;
              }
            }
          }
        }
        goto LABEL_102;
      }
      goto LABEL_76;
    }
    if ( kind != 7 )
      goto LABEL_76;
LABEL_42:
    if ( this->fields.displayCount < 1 )
      goto LABEL_76;
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_102;
    v15 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = v15;
    *(_QWORD *)&v61.fields.fakeValue = v14;
    bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v61, 0);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_102;
    svtId = (int)bgCollider;
    dispBattleName = string_TypeInfo->static_fields->Empty;
    v18 = UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0);
    if ( v18 >= 2 )
    {
      v47 = this->fields.displayCount;
      v48 = v18;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v47 - 1;
      if ( !bgCollider )
        goto LABEL_102;
      v49 = v48 - v47;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               (UserServantEntity_o *)bgCollider,
                                               v48 - v47,
                                               -1,
                                               -1,
                                               1,
                                               -1,
                                               1,
                                               0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_102;
      v19 = (System_Int32_array *)bgCollider;
      TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                     this->fields.baseUsrSvtData,
                                     this->fields.targetId,
                                     v49 - 1,
                                     v49,
                                     0);
      v51 = this->fields.kind;
      this->fields.targetId = TransformedSameSlotSkillId;
      if ( v51 == 7 )
      {
        v52 = TransformedSameSlotSkillId;
        v53 = this->fields.baseUsrSvtData;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C21464 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C21464 = 1;
        }
        bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v53 )
          goto LABEL_102;
        this->fields.targetIdOld = UserServantEntity__GetTransformedOldSkillId(
                                     v53,
                                     v52,
                                     *(_DWORD *)(bgCollider[7].fields.m_CachedPtr + 20),
                                     v49,
                                     0);
      }
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( !bgCollider )
        goto LABEL_102;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                               (UserServantEntity_o *)bgCollider,
                                               &v60,
                                               v49,
                                               0);
      if ( !v60 )
        goto LABEL_102;
      svtId = v60->fields.svtId;
      dispBattleName = v60->fields.titleText;
      r = 0.0;
    }
    else
    {
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( !bgCollider )
        goto LABEL_102;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               (UserServantEntity_o *)bgCollider,
                                               0,
                                               -1,
                                               -1,
                                               1,
                                               -1,
                                               1,
                                               0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_102;
      v19 = (System_Int32_array *)bgCollider;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                               this->fields.baseUsrSvtData,
                                               &svtSkillAddEnt,
                                               this->fields.targetId,
                                               0);
      r = 0.0;
      if ( ((unsigned __int8)bgCollider & 1) != 0 )
      {
        if ( !svtSkillAddEnt )
          goto LABEL_102;
        if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)svtSkillAddEnt->fields.skillIds, 0) )
        {
          bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
          if ( !svtSkillAddEnt )
            goto LABEL_102;
          skillIds = svtSkillAddEnt->fields.skillIds;
          if ( !skillIds )
            goto LABEL_102;
          v23 = this->fields.displayCount;
          max_length = skillIds->max_length;
          this->fields.displayCount = v23 - 1;
          klass = bgCollider[2].klass;
          if ( !klass )
            goto LABEL_102;
          v26 = max_length - v23;
          if ( (unsigned int)(max_length - v23) >= LODWORD(klass->_1.namespaze) )
LABEL_103:
            sub_1C2D6F4(bgCollider, method, v21);
          dispBattleName = (System_String_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v26);
          v62.fields.r = 0.0;
          v62.fields.g = 0.0;
          v62.fields.b = 0.0;
          v62.fields.a = 0.0;
          CondLabelColor = ServantSkillAddEntity__GetCondLabelColor((ServantSkillAddEntity_o *)bgCollider, v62, 0);
          bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
          if ( !svtSkillAddEnt )
            goto LABEL_102;
          r = CondLabelColor.fields.r;
          g = CondLabelColor.fields.g;
          b = CondLabelColor.fields.b;
          a = CondLabelColor.fields.a;
          v64.fields.r = 0.0;
          v64.fields.g = 0.0;
          v64.fields.b = 0.0;
          v64.fields.a = 0.0;
          CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(svtSkillAddEnt, v64, 0);
          if ( !v19 )
            goto LABEL_102;
          v30 = CondSpriteColor.fields.r;
          v31 = CondSpriteColor.fields.g;
          v32 = CondSpriteColor.fields.b;
          v33 = CondSpriteColor.fields.a;
          if ( (int)v19->max_length > 0 )
          {
            v34 = svtSkillAddEnt;
            v35 = 0;
            v36 = 4LL * (unsigned int)v19->max_length;
            while ( v36 != v35 )
            {
              if ( !v34 )
                goto LABEL_102;
              v37 = v34->fields.skillIds;
              if ( !v37 )
                goto LABEL_102;
              v38 = v37->max_length;
              if ( !v38 )
                goto LABEL_103;
              if ( v19->m_Items[v35 / 4] == v37->m_Items[0] )
              {
                if ( v26 >= v38 )
                  goto LABEL_103;
                v39 = v37->m_Items[v26];
                this->fields.targetId = v39;
                v19->m_Items[v35 / 4] = v39;
              }
              v35 += 4LL;
              if ( v36 == v35 )
                goto LABEL_97;
            }
            goto LABEL_103;
          }
LABEL_97:
          skillResultInfoWindow = this->fields.skillResultInfoWindow;
          targetId = this->fields.targetId;
          targetLv = this->fields.targetLv;
          v57 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v57, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
          if ( skillResultInfoWindow )
          {
            v66.fields.r = r;
            v66.fields.g = g;
            v66.fields.b = b;
            v66.fields.a = a;
            v67.fields.r = v30;
            v67.fields.g = v31;
            v67.fields.b = v32;
            v67.fields.a = v33;
            SkillUpResultWindowComponent__OpenSkillUpResultInfo(
              skillResultInfoWindow,
              targetId,
              targetLv,
              v57,
              this->fields.targetIdOld,
              this->fields.targetLvOld,
              svtId,
              v19,
              this->fields.baseUsrSvtData,
              this->fields.kind == 3,
              1,
              0,
              dispBattleName,
              0,
              v66,
              v67,
              0);
            return;
          }
          goto LABEL_102;
        }
      }
    }
    g = 0.0;
    b = 0.0;
    a = 0.0;
    v30 = 0.0;
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    goto LABEL_97;
  }
  if ( (unsigned int)(kind - 2) < 2 )
    goto LABEL_42;
  if ( !kind )
  {
    bgCollider = (UnityEngine_Collider_o *)this->fields.svtResultInfoWindow;
    if ( !bgCollider )
      goto LABEL_102;
    if ( SvtCombineResultWindowComponent__IsOpenStatusLimitTutorial((SvtCombineResultWindowComponent_o *)bgCollider, 0)
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
      goto LABEL_102;
    }
    CombineResultEffectComponent__stopVoice(this, method);
  }
LABEL_76:
  v43 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v43 = (_QWORD *)sub_1C2D4A8(Method_CombineResultEffectComponent_clickNext__);
  v44 = (System_Reflection_MethodBase_o *)sub_1C2D474(v43, v43[4]);
  OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0, 0);
  if ( this->fields.kind != 24 )
    CombineResultEffectComponent__ReleaseVoiceData(this, v45);
  if ( !CombineResultEffectComponent__OpenNotification(this, v45) )
    CombineResultEffectComponent__FadeoutProcess(this, v46);
}


void CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v14; // x8
  ServantVoiceMaster_o *v15; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C2B2A3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B2A3 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.asstName, 0, v2, v3);
  this->fields.playVoiceList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v5, v6);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v11;
  *(_QWORD *)&v23.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v12, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v14 = this->fields.resUsrSvtData) == 0)
    || (v15 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                     v14->fields.limitCount,
                                     0),
        !v15) )
  {
LABEL_12:
    sub_1C2D6EC(Instance, v8);
  }
  Entity = ServantVoiceMaster__getEntity(v15, 2, SvtVoiceId, (int32_t)Instance, 0);
  this->fields.svtVoiceEntity = Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v17, v18);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0);
    this->fields.asstName = VoiceAssetName;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v21, v22);
  }
}


ServantVoiceData_array *CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_4C2B2B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4C2B2B7 = 1;
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
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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

  if ( (byte_4C2B2B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2B2B6 = 1;
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
      sub_1C2D6EC(resUsrSvtData, isPlayVoice);
    v11 = *(_QWORD *)&v9->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v9->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14, 0);
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
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  int v6; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UserServantEntity_o *Master_object; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v14; // x21
  __int64 v15; // x24
  int32_t v16; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v18; // x8
  ServantLimitImageMaster_o *v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v6 = costumeId;
  if ( (byte_4C2B2A2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B2A2 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.asstName, 0, costumeId, (const MethodInfo *)isLimitUp);
  this->fields.playVoiceList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v9, v10);
  if ( voiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_26;
    v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v15;
    *(_QWORD *)&v30.fields.fakeValue = v14;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v30, 0);
    voiceId = ServantVoiceMaster__getSvtVoiceId(v16, 0);
  }
  if ( v6 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_43904660(Master_object->fields.limitCount, 0);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0);
    v6 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v18 = this->fields.resUsrSvtData;
  if ( !v18 )
    goto LABEL_26;
  v19 = (ServantLimitImageMaster_o *)Master_object;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v21;
  *(_QWORD *)&v31.fields.fakeValue = v20;
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v31, 0);
  if ( !v19
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v19,
                                       (int32_t)Master_object,
                                       v6,
                                       0),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0 )
  {
LABEL_26:
    sub_1C2D6EC(Master_object, v12);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             voiceId,
             ServantLimitCountSealAfter,
             0);
  this->fields.svtVoiceEntity = Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v24, v25);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0);
    this->fields.asstName = VoiceAssetName;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v28, v29);
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

  if ( (byte_4C2B2A4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_EndLoad__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C2B2A4 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v5 = (SoundManager_o *)Instance;
    v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0);
    if ( !v5 )
      sub_1C2D6EC(v7, v8);
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
  if ( (byte_4C2B2A8 & 1) == 0 )
  {
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C2D490(&StringLiteral_3056/*"BaseSvtNodeName"*/);
    byte_4C2B2A8 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C2D6EC(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3056/*"BaseSvtNodeName"*/,
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
  UserServantEntity_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x21
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Component_o *v22; // x19
  UnityEngine_Transform_o *v23; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B2B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_4331/*"CardScale"*/);
    sub_1C2D490(&StringLiteral_3055/*"BaseSvtCardNodeName"*/);
    byte_4C2B2B2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3055/*"BaseSvtCardNodeName"*/,
                            0);
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_26;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_26;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4331/*"CardScale"*/,
                            0);
  if ( !fsm )
    goto LABEL_26;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_26;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v13 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v12;
  *(_QWORD *)&v24.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_26;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15->fields.limitCount, 0);
  if ( !v16 )
    goto LABEL_26;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, (int32_t)fsm, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v14, ServantLimitCountSealAfter, 1, 0, 0);
  if ( !v8 )
    goto LABEL_26;
  v18 = (int)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v19 = this->fields.baseUsrSvtData;
  if ( !v19 )
    goto LABEL_26;
  v20 = (UnityEngine_GameObject_o *)fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(v19, 0, 0);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_40438256(
                            v20,
                            v19,
                            v18,
                            10,
                            0,
                            changeNameType,
                            OverwriteStatus,
                            0,
                            0,
                            0);
  if ( !fsm )
    goto LABEL_26;
  v22 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v23 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C20DA1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v23
    || (UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v22, 0)) == 0) )
  {
LABEL_26:
    sub_1C2D6EC(fsm, *(_QWORD *)&changeNameType);
  }
  v25.fields.x = v13;
  v25.fields.y = v13;
  v25.fields.z = v13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v25, 0);
}


void CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v10; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v17; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C2B2B0 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_8427/*"LimitUpResSvtNodeName"*/);
    byte_4C2B2B0 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  this->fields.playVoiceList = CostumeSvtVoiceList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)CostumeSvtVoiceList, v4, v5);
  playVoiceList = this->fields.playVoiceList;
  if ( playVoiceList )
  {
    if ( !LODWORD(playVoiceList->max_length) )
      sub_1C2D6F4(v6, v7, v8);
    v10 = playVoiceList->m_Items[0];
    if ( !v10 )
LABEL_13:
      sub_1C2D6EC(v6, v7);
    face = v10->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v14 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v18, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_13;
  v15 = v6;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v15,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8427/*"LimitUpResSvtNodeName"*/,
    v17);
}


void CombineResultEffectComponent__setEffectEnable(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1C2D6EC(0, method);
  UnityEngine_GameObject__SetActive(effect, 1, 0);
}


void CombineResultEffectComponent__setLimitUpBaseSvtFigure(
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
  if ( (byte_4C2B2AB & 1) == 0 )
  {
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C2D490(&StringLiteral_8426/*"LimitUpBaseSvtNodeName"*/);
    byte_4C2B2AB = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C2D6EC(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8426/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v10);
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
  __int64 v9; // x2
  ServantVoiceData_o *v10; // x8
  int32_t face; // w22
  int32_t ImageLimitCount; // w2
  const MethodInfo *v13; // x5

  if ( (byte_4C2B2B1 & 1) == 0 )
  {
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&StringLiteral_8426/*"LimitUpBaseSvtNodeName"*/);
    byte_4C2B2B1 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->max_length) )
      sub_1C2D6F4(LimitUpSvtVoiceList, v8, v9);
    v10 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v10 )
      sub_1C2D6EC(LimitUpSvtVoiceList, v8);
    face = v10->fields.face;
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
    (System_String_o *)StringLiteral_8426/*"LimitUpBaseSvtNodeName"*/,
    v13);
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
  const MethodInfo *v19; // x3
  UnityEngine_Transform_o *v20; // x19
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B2B4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4331/*"CardScale"*/);
    sub_1C2D490(&StringLiteral_3055/*"BaseSvtCardNodeName"*/);
    byte_4C2B2B4 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3055/*"BaseSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_4331/*"CardScale"*/,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.nameRevealCard, (int32_t)TexturePrefab, v18, v19);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v20 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C20DA1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0)) == 0 )
  {
LABEL_18:
    sub_1C2D6EC(fsm, *(_QWORD *)&svtId);
  }
  v21.fields.x = v14;
  v21.fields.y = v14;
  v21.fields.z = v14;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v21, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent__setResultCostumeSvtGraphCard(
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
  UserServantEntity_o *resUsrSvtData; // x21
  UnityEngine_GameObject_o *v12; // x22
  UserServantEntity_o *v13; // x8
  int32_t v14; // w20
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Component_o *v16; // x19
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B2B5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4331/*"CardScale"*/);
    sub_1C2D490(&StringLiteral_11380/*"ResultSvtCardNodeName"*/);
    byte_4C2B2B5 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11380/*"ResultSvtCardNodeName"*/,
                            0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_19;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_19;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4331/*"CardScale"*/,
                            0);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  if ( !v8 )
    goto LABEL_19;
  v10 = Value;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v8, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_19;
  v12 = (UnityEngine_GameObject_o *)fsm;
  fsm = (PlayMakerFSM_o *)UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0);
  v13 = this->fields.resUsrSvtData;
  if ( !v13 )
    goto LABEL_19;
  v14 = (int)fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(v13, 0, 0);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_40438256(
                            v12,
                            resUsrSvtData,
                            v14,
                            10,
                            0,
                            changeNameType,
                            OverwriteStatus,
                            0,
                            0,
                            0);
  if ( !fsm )
    goto LABEL_19;
  v16 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v17 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C20DA1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v17
    || (UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v16, 0)) == 0) )
  {
LABEL_19:
    sub_1C2D6EC(fsm, *(_QWORD *)&changeNameType);
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
  UserServantEntity_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x21
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Component_o *v22; // x19
  UnityEngine_Transform_o *v23; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B2B3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_4331/*"CardScale"*/);
    sub_1C2D490(&StringLiteral_11380/*"ResultSvtCardNodeName"*/);
    byte_4C2B2B3 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11380/*"ResultSvtCardNodeName"*/,
                            0);
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_26;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_26;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4331/*"CardScale"*/,
                            0);
  if ( !fsm )
    goto LABEL_26;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v13 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v12;
  *(_QWORD *)&v24.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_26;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.resUsrSvtData;
  if ( !v15 )
    goto LABEL_26;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15->fields.limitCount, 0);
  if ( !v16 )
    goto LABEL_26;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, (int32_t)fsm, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v14, ServantLimitCountSealAfter, 1, 0, 0);
  if ( !v8 )
    goto LABEL_26;
  v18 = (int)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v19 = this->fields.resUsrSvtData;
  if ( !v19 )
    goto LABEL_26;
  v20 = (UnityEngine_GameObject_o *)fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(v19, 0, 0);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_40438256(
                            v20,
                            v19,
                            v18,
                            10,
                            0,
                            changeNameType,
                            OverwriteStatus,
                            0,
                            0,
                            0);
  if ( !fsm )
    goto LABEL_26;
  v22 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v23 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C20DA1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v23
    || (UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v22, 0)) == 0) )
  {
LABEL_26:
    sub_1C2D6EC(fsm, *(_QWORD *)&changeNameType);
  }
  v25.fields.x = v13;
  v25.fields.y = v13;
  v25.fields.z = v13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v25, 0);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v22, 1.89, 0);
}


void CombineResultEffectComponent__setSkillResultInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Instance; // x0
  unsigned __int64 lv; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  long double v10; // q0
  SkillUpResultWindowComponent_o *v11; // x20
  UserServantEntity_o *v12; // x21
  int32_t v13; // w22
  int32_t v14; // w23
  System_Action_o *v15; // x24
  const MethodInfo *v16; // x2
  struct UserServantEntity_o *v17; // x8
  __int64 v18; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  struct UserServantEntity_o *v24; // x8
  __int64 v25; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x21
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  UserServantEntity_o *v29; // x20
  struct ServantVoiceData_array *v30; // x8
  struct UserServantEntity_o *v31; // x8
  __int64 v32; // x20
  __int64 v33; // x21
  struct UserServantEntity_o *v34; // x8
  int v35; // w21
  int v36; // w20
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x22
  __int64 v39; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  int32_t v41; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t kind; // w8
  System_Int32_array *v44; // x20
  int32_t TransformCount; // w21
  const MethodInfo *v46; // x2
  System_String_o *dispBattleName; // x27
  float b; // s8
  struct UserServantEntity_o *v49; // x8
  ServantSkillAddMaster_o *v50; // x21
  __int64 v51; // x22
  __int64 v52; // x23
  struct UserServantEntity_o *v53; // x8
  int32_t v54; // w22
  int32_t targetId; // w24
  int32_t v56; // w23
  ServantSkillAddEntity_o *EnableEntity; // x0
  ServantSkillAddEntity_o *v58; // x21
  float a; // s9
  float v60; // s11
  float v61; // s13
  float v62; // s14
  float v63; // s15
  float g; // s10
  float r; // s12
  struct System_String_array *titles; // x8
  __int64 v67; // x0
  __int64 v68; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v70; // x20
  __int64 v71; // x27
  int32_t v72; // w22
  struct UserServantEntity_o *v73; // x8
  __int64 v74; // x23
  __int64 v75; // x24
  int v76; // w8
  int v77; // w9
  __int64 v78; // x23
  struct UserServantEntity_o *v79; // x8
  __int64 v80; // x23
  __int64 v81; // x24
  int32_t v82; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  UserServantEntity_o *v86; // x8
  Il2CppObject *v87; // x23
  struct UserServantEntity_o *v88; // x8
  __int64 v89; // x25
  __int64 v90; // x26
  int64_t v91; // x24
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v93; // x23
  struct UserServantEntity_o *v94; // x8
  __int64 v95; // x23
  __int64 v96; // x24
  bool IsForceReleaseSkillRankUp; // w29
  int v98; // w22
  _BOOL8 v99; // x0
  __int64 v100; // x1
  Il2CppObject *current; // x23
  __int64 v102; // x1
  NetworkManager_c *v103; // x0
  struct UserServantEntity_o *v104; // x8
  int32_t v105; // w24
  __int64 v106; // x26
  __int64 v107; // x27
  int64_t userIdNumber; // x25
  int32_t v109; // w3
  bool isForceRelease; // w27
  bool isRelease; // w25
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t v113; // w22
  int32_t targetLv; // w23
  System_Action_o *v115; // x24
  int32_t targetIdOld; // w25
  int32_t targetLvOld; // w26
  const MethodInfo *v118; // x2
  SkillUpResultWindowComponent_o *v119; // x20
  UserServantEntity_o *v120; // x21
  System_Action_o *v121; // x22
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  Il2CppObject *v123; // x20
  Il2CppObject *v124; // x21
  Il2CppObject *v125; // x20
  BalanceConfig_c *v126; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v128; // x21
  Il2CppObject *Name; // x0
  System_String_o *v130; // x0
  System_Int32_array *v131; // x20
  SkillUpResultWindowComponent_o *v132; // x21
  int32_t v133; // w22
  int32_t v134; // w23
  System_Action_o *v135; // x24
  struct UserServantEntity_o *v136; // x8
  int32_t v137; // w26
  int32_t v138; // w25
  __int64 v139; // x27
  __int64 v140; // x28
  SkillUpResultWindowComponent_o *v141; // x20
  UserServantEntity_o *v142; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v144; // x23
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v146; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v147; // x21
  Il2CppObject *v148; // x0
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  struct UserServantEntity_o *v151; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v153; // w21
  _BOOL4 v154; // w22
  const MethodInfo *v155; // x1
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  struct UserServantEntity_o *v159; // x8
  __int128 v160; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v161; // x20
  Il2CppObject *v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  struct SvtCombineResultWindowComponent_o *v165; // x20
  struct UserServantEntity_o *v166; // x21
  int32_t v167; // w22
  System_Action_o *v168; // x23
  SvtCombineResultWindowComponent_o *v169; // x0
  UserServantEntity_o *v170; // x1
  int32_t v171; // w2
  System_Action_o *v172; // x3
  System_Action_o *v173; // x4
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v175; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  Il2CppObject *v178; // x20
  AvalonSceneManager_c *v179; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v181; // x0
  intptr_t *v182; // x8
  SkillUpResultWindowComponent_o *v183; // x21
  int32_t v184; // w23
  int32_t v185; // w28
  System_Action_o *v186; // x24
  int32_t v187; // w26
  int32_t v188; // w22
  const MethodInfo *v189; // x2
  int32_t v190; // w29
  System_Int32_array *v191; // x0
  UserServantEntity_o *v192; // x22
  System_Int32_array *v193; // x20
  const MethodInfo *v194; // x2
  __int64 v195; // x22
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  __int64 v203; // x23
  System_Action_o *v204; // x24
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  Il2CppObject *v207; // x21
  CombineResultEffectComponent_ClickDelegate_o *v208; // x22
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v212; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v214; // x23
  System_Action_o *v215; // x24
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v217; // x21
  System_String_o *v218; // x22
  Il2CppObject *v219; // x21
  Il2CppObject *v220; // x0
  AvalonSceneManager_c *v221; // x8
  System_Action_o *v222; // x21
  int32_t dispLimitCount; // [xsp+4Ch] [xbp-134h]
  int32_t dispLimitCounta; // [xsp+4Ch] [xbp-134h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+50h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+70h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+90h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v228; // [xsp+B0h] [xbp-D0h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+D0h] [xbp-B0h] BYREF
  int32_t v230; // [xsp+DCh] [xbp-A4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v231; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v232; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v233; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v235; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v237; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v238; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v239; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v240; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v241; // 0:x0.16
  UnityEngine_Color_o v242; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v245; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v246; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v247; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v248; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v249; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v250; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C2B2B8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent_CheckReturnCombineItem__);
    sub_1C2D490(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C2D490(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_0__);
    sub_1C2D490(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_1__);
    sub_1C2D490(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_2__);
    sub_1C2D490(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_6__);
    sub_1C2D490(&CombineResultFormManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass147_0__setSkillResultInfo_b__4__);
    sub_1C2D490(&CombineResultEffectComponent___c__DisplayClass147_0_TypeInfo);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__3__);
    sub_1C2D490(&CombineResultEffectComponent___c__DisplayClass147_1_TypeInfo);
    sub_1C2D490(&StringLiteral_10815/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/);
    sub_1C2D490(&StringLiteral_10816/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B2B8 = 1;
  }
  v230 = 0;
  entity = 0;
  memset(&v228, 0, sizeof(v228));
  this->fields.skipEndDispAfterVoicePlayed = 0;
  v3 = sub_1C2D6DC(CombineResultEffectComponent___c__DisplayClass147_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass147_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass147_0_o *)v3,
    0);
  if ( !v3 )
    goto LABEL_233;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_178;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_233;
      v146 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v147 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v227.fields.fakeValue = v146;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v226 = v227;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v226, 0);
      if ( !v147 )
        goto LABEL_233;
      v148 = DataMasterBase_object__object__long___GetEntity(
               v147,
               Instance,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v148;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)v148, v149, v150);
LABEL_178:
      v151 = this->fields.baseUsrSvtData;
      if ( !v151 )
        goto LABEL_233;
      lv = (unsigned int)v151->fields.lv;
      v230 = v151->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_233;
      v153 = resUsrSvtData->fields.lv;
      v154 = CombineResultEffectComponent__CheckCombineLimit(this, lv, v153, v9);
      if ( !System_Int32__Equals_64968544((int32_t)&v230, v153, 0)
        && this->fields.asstName
        && this->fields.svtVoiceEntity
        && (playVoiceList = this->fields.playVoiceList) != 0 )
      {
        this->fields.skipEndDispAfterVoicePlayed = v154;
        this->fields.maxPlayCnt = playVoiceList->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, v155);
      }
      else
      {
        this->fields.firstPlayedVoiceFlag = 0;
      }
      *(_QWORD *)(v3 + 16) = 0;
      sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), 0, v156, v157);
      if ( !v154 )
        goto LABEL_212;
      v195 = sub_1C2D6DC(CombineResultEffectComponent___c__DisplayClass147_1_TypeInfo);
      CombineResultEffectComponent___c__DisplayClass147_1___ctor(
        (CombineResultEffectComponent___c__DisplayClass147_1_o *)v195,
        0);
      if ( !v195 )
        goto LABEL_233;
      *(_QWORD *)(v195 + 24) = v3;
      sub_1C2D434((CGThumbnailListItem_o *)(v195 + 24), v3, v196, v197);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v195 + 16) = callbackFunc;
      sub_1C2D434((CGThumbnailListItem_o *)(v195 + 16), (int32_t)callbackFunc, v199, v200);
      this->fields.callbackFunc = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v201, v202);
      v203 = *(_QWORD *)(v195 + 24);
      v204 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v204,
        (Il2CppObject *)v195,
        Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__3__,
        0);
      if ( !v203 )
        goto LABEL_233;
      *(_QWORD *)(v203 + 16) = v204;
      sub_1C2D434((CGThumbnailListItem_o *)(v203 + 16), (int32_t)v204, v205, v206);
      v207 = *(Il2CppObject **)(v195 + 24);
      v208 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C2D6DC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v208,
        v207,
        Method_CombineResultEffectComponent___c__DisplayClass147_0__setSkillResultInfo_b__4__,
        0);
      this->fields.callbackFunc = v208;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v208, v209, v210);
LABEL_212:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_216:
        CombineResultEffectComponent__EndDisp(this, (const MethodInfo *)lv);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v212 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v214 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v214, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v215 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v215, (Il2CppObject *)this, Method_CombineResultEffectComponent_CheckReturnCombineItem__, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_233;
      v169 = svtResultInfoWindow;
      v170 = v212;
      v171 = baseUsrSvtCollictionLv;
      v172 = v214;
      v173 = v215;
LABEL_215:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v169, v170, v171, v172, v173, 0);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1C2D538(string___TypeInfo, 1);
      v17 = this->fields.baseUsrSvtData;
      if ( !v17 )
        goto LABEL_233;
      v18 = Instance;
      p_svtId = &v17->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v231.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v231.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v231, v16);
      if ( !v18 )
        goto LABEL_233;
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_234;
      *(_QWORD *)(v18 + 32) = Instance;
      sub_1C2D434((CGThumbnailListItem_o *)(v18 + 32), Instance, v20, v21);
      v22 = System_String__Concat_63498380((System_String_array *)v18, 0);
      if ( UnityEngine_PlayerPrefs__GetInt_71121948(v22, 0) != 1 || (this->fields.kind | 0x10) == 0x1A )
        goto LABEL_22;
      Instance = sub_1C2D538(string___TypeInfo, 1);
      v24 = this->fields.baseUsrSvtData;
      if ( !v24 )
        goto LABEL_233;
      v25 = Instance;
      v26 = &v24->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v232.fields.currentCryptoKey = v26;
      *(_QWORD *)&v232.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v232, v23);
      if ( !v25 )
        goto LABEL_233;
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_234;
      *(_QWORD *)(v25 + 32) = Instance;
      sub_1C2D434((CGThumbnailListItem_o *)(v25 + 32), Instance, v20, v27);
      v28 = System_String__Concat_63498380((System_String_array *)v25, 0);
      UnityEngine_PlayerPrefs__SetInt(v28, 0, 0);
      v29 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      CombineResultFormManager__ResetVoiceList(v29, 0);
LABEL_22:
      Instance = (__int64)this->fields.limitUpResultCheck;
      if ( !Instance )
        goto LABEL_233;
      LimitUpResultCheckComponent__checkResultLimitUp(
        (LimitUpResultCheckComponent_o *)Instance,
        this->fields.kind,
        this->fields.baseUsrSvtData,
        this->fields.resUsrSvtData,
        this->fields.baseUsrSvtCollectionLimitCnt,
        this->fields.limitUpRewardGiftDataList,
        0);
      v30 = this->fields.playVoiceList;
      if ( !v30 )
      {
        v31 = this->fields.baseUsrSvtData;
        if ( v31 )
        {
          v33 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
          v32 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v233.fields.currentCryptoKey = v33;
          *(_QWORD *)&v233.fields.fakeValue = v32;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v233, 0);
          v34 = this->fields.baseUsrSvtData;
          v35 = Instance == 2;
          if ( v34 )
          {
            v36 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v34->fields.limitCount, 0) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v37 = this->fields.baseUsrSvtData;
              if ( !v37 )
                goto LABEL_233;
              v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
              v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
              v40 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1096LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v234.fields.currentCryptoKey = v39;
              *(_QWORD *)&v234.fields.fakeValue = v38;
              v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v234, 0);
              v35 = (v36 == 2)
                  | System_Linq_Enumerable__Contains_int_(
                      v40,
                      v41,
                      (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              kind = this->fields.kind;
              isLimitUpSuppression = kind != 10 && kind != 26;
            }
            if ( (v35 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, (const MethodInfo *)lv);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v217 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v217,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__147_6__,
              0);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v217, 1, 0);
              return;
            }
          }
        }
        goto LABEL_233;
      }
LABEL_141:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = v30->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, (const MethodInfo *)lv);
      }
      return;
    case 2:
    case 3:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)UserServantEntity__getSkillIdList((UserServantEntity_o *)Instance, -1, -1, 1, -1, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_233;
      v44 = (System_Int32_array *)Instance;
      TransformCount = UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v46);
      if ( !Instance )
        goto LABEL_233;
      dispBattleName = *(System_String_o **)(Instance + 24);
      b = 0.0;
      if ( TransformCount > 1 )
        goto LABEL_132;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
      v49 = this->fields.baseUsrSvtData;
      if ( !v49 )
        goto LABEL_233;
      v50 = (ServantSkillAddMaster_o *)Instance;
      v52 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
      v51 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v235.fields.currentCryptoKey = v52;
      *(_QWORD *)&v235.fields.fakeValue = v51;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v235, 0);
      v53 = this->fields.baseUsrSvtData;
      if ( !v53 )
        goto LABEL_233;
      v54 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v53->fields.limitCount, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_233;
      targetId = this->fields.targetId;
      v56 = Instance;
      Instance = UserServantEntity__getDispLimitCount(this->fields.baseUsrSvtData, 1, 0);
      if ( !v50 )
        goto LABEL_233;
      EnableEntity = ServantSkillAddMaster__GetEnableEntity(v50, v54, v56, targetId, 0, Instance, 1, 0);
      if ( EnableEntity )
      {
        v58 = EnableEntity;
        Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntity->fields.titles, 0);
        a = 0.0;
        v60 = 0.0;
        v61 = 0.0;
        v62 = 0.0;
        v63 = 0.0;
        g = 0.0;
        r = 0.0;
        if ( (Instance & 1) == 0 )
        {
          titles = v58->fields.titles;
          if ( !titles )
            goto LABEL_233;
          if ( !LODWORD(titles->max_length) )
LABEL_234:
            sub_1C2D6F4(Instance, lv, v20);
          dispBattleName = titles->m_Items[0];
          v242.fields.r = 0.0;
          v242.fields.g = 0.0;
          v242.fields.b = 0.0;
          v242.fields.a = 0.0;
          CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v58, v242, 0);
          r = CondLabelColor.fields.r;
          g = CondLabelColor.fields.g;
          b = CondLabelColor.fields.b;
          a = CondLabelColor.fields.a;
          CondLabelColor.fields.r = 0.0;
          CondLabelColor.fields.g = 0.0;
          CondLabelColor.fields.b = 0.0;
          CondLabelColor.fields.a = 0.0;
          CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v58, CondLabelColor, 0);
          v60 = CondSpriteColor.fields.r;
          v61 = CondSpriteColor.fields.g;
          v62 = CondSpriteColor.fields.b;
          v63 = CondSpriteColor.fields.a;
        }
      }
      else
      {
LABEL_132:
        a = 0.0;
        v60 = 0.0;
        v61 = 0.0;
        v62 = 0.0;
        v63 = 0.0;
        g = 0.0;
        r = 0.0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      v113 = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v115 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v115, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v118);
      if ( Instance && skillResultInfoWindow )
      {
        v245.fields.r = r;
        v245.fields.g = g;
        v245.fields.b = b;
        v245.fields.a = a;
        v248.fields.r = v60;
        v248.fields.g = v61;
        v248.fields.b = v62;
        v248.fields.a = v63;
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          v113,
          targetLv,
          v115,
          targetIdOld,
          targetLvOld,
          *(_DWORD *)(Instance + 16),
          v44,
          this->fields.baseUsrSvtData,
          this->fields.kind == 3,
          1,
          0,
          dispBattleName,
          0,
          v245,
          v248,
          0);
        return;
      }
      goto LABEL_233;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v11 = this->fields.skillResultInfoWindow;
      v12 = this->fields.baseUsrSvtData;
      v13 = this->fields.targetId;
      v14 = this->fields.targetLv;
      v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v11 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_48412588(
        v11,
        v12,
        v13,
        v14,
        v15,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        this->fields.npInfoAddManager,
        this->fields.kind,
        0);
      return;
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v159 = this->fields.baseUsrSvtData;
      if ( !v159 )
        goto LABEL_233;
      v160 = *(_OWORD *)&v159->fields.id.fields.fakeValue;
      v161 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)&v159->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v227.fields.fakeValue = v160;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v225 = v227;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v225, 0);
      if ( !v161 )
        goto LABEL_233;
      v162 = DataMasterBase_object__object__long___GetEntity(
               v161,
               Instance,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v162;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)v162, v163, v164);
      v165 = this->fields.svtResultInfoWindow;
      v166 = this->fields.resUsrSvtData;
      v167 = this->fields.baseUsrSvtCollictionLv;
      v168 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v168,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__setSkillResultInfo_b__147_0__,
        0);
      if ( !v165 )
        goto LABEL_233;
      v169 = v165;
      v170 = v166;
      v171 = v167;
      v172 = v168;
      v173 = 0;
      goto LABEL_215;
    case 7:
    case 0x15:
      v67 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
        v67 = sub_1C7DBA4(v10);
      v68 = *(_QWORD *)(*(_QWORD *)(v67 + 192) + 16LL);
      if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
        v68 = sub_1C7DBA4(v10);
      Instance = **(_QWORD **)(v68 + 184);
      if ( !Instance )
        goto LABEL_233;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v70 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v70,
        (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
      v71 = 0;
      v72 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v72 > *(_DWORD *)(*(_QWORD *)(Instance + 184) + 40LL) )
        {
          if ( this->fields.kind == 7 )
          {
            Instance = (__int64)this->fields.baseUsrSvtData;
            if ( !Instance )
              goto LABEL_233;
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
            v86 = this->fields.baseUsrSvtData;
            dispLimitCount = Instance;
            if ( !v86 )
              goto LABEL_233;
            Instance = UserServantEntity__IsHeroine(v86, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_233;
              v87 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C211E1 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C211E1 = 1;
              }
              Instance = (__int64)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (__int64)NetworkManager_TypeInfo;
              }
              v88 = this->fields.baseUsrSvtData;
              if ( !v88 )
                goto LABEL_233;
              v90 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
              v89 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
              v91 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v238.fields.currentCryptoKey = v90;
              *(_QWORD *)&v238.fields.fakeValue = v89;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v238, 0);
              if ( !v87 )
                goto LABEL_233;
              Instance = UserServantCollectionMaster__TryGetEntity(
                           (UserServantCollectionMaster_o *)v87,
                           &entity,
                           v91,
                           Instance,
                           0);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)entity;
                if ( !entity )
                  goto LABEL_233;
                costumeIds = entity->fields.costumeIds;
                if ( !costumeIds )
                  goto LABEL_233;
                if ( costumeIds->max_length )
                {
                  v93 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v93,
                               (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v93, 0);
                    dispLimitCount = Instance;
                  }
                }
              }
            }
            v94 = this->fields.baseUsrSvtData;
            if ( !v94 )
              goto LABEL_233;
            v96 = *(_QWORD *)&v94->fields.svtId.fields.currentCryptoKey;
            v95 = *(_QWORD *)&v94->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v239.fields.currentCryptoKey = v96;
            *(_QWORD *)&v239.fields.fakeValue = v95;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v239, 0);
            if ( !v71 )
              goto LABEL_233;
            if ( !MasterData_object )
              goto LABEL_233;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  Instance,
                                  *(_DWORD *)(v71 + 20),
                                  this->fields.targetIdOld,
                                  0);
            if ( !Instance )
              goto LABEL_233;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v227,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            IsForceReleaseSkillRankUp = 0;
            LOBYTE(v98) = 0;
            *(_OWORD *)&v228.fields._list = *(_OWORD *)&v227.fields.currentCryptoKey;
            v228.fields._current = (Il2CppObject *)v227.fields.fakeValue;
            do
            {
              v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v228,
                      (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v99 )
                break;
              current = v228.fields._current;
              if ( !v228.fields._current )
                sub_1C2D6EC(v99, v100);
              if ( !ServantSkillEntity__isEnable((ServantSkillEntity_o *)v228.fields._current, 0, 0) )
                goto LABEL_129;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C211E1 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C211E1 = 1;
              }
              v103 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v103 = NetworkManager_TypeInfo;
              }
              v104 = this->fields.baseUsrSvtData;
              if ( !v104 )
                sub_1C2D6EC(v103, v102);
              v105 = v104->fields.lv;
              v107 = *(_QWORD *)&v104->fields.limitCount.fields.currentCryptoKey;
              v106 = *(_QWORD *)&v104->fields.limitCount.fields.fakeValue;
              userIdNumber = v103->static_fields->userIdNumber;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v240.fields.currentCryptoKey = v107;
              *(_QWORD *)&v240.fields.fakeValue = v106;
              v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v240, 0);
              if ( ServantSkillEntity__isUse(
                     (ServantSkillEntity_o *)current,
                     userIdNumber,
                     v105,
                     v109,
                     dispLimitCount,
                     -1,
                     -1,
                     -1,
                     0) )
              {
                v98 = 1;
              }
              else
              {
LABEL_129:
                v98 = 0;
                IsForceReleaseSkillRankUp = ServantSkillEntity__IsForceReleaseSkillRankUp(
                                              (ServantSkillEntity_o *)current,
                                              0);
              }
            }
            while ( !(v98 | IsForceReleaseSkillRankUp) );
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v228,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
            isForceRelease = IsForceReleaseSkillRankUp;
            isRelease = (unsigned __int8)v98 != 0;
          }
          else
          {
            isForceRelease = 0;
            isRelease = 0;
          }
          v183 = this->fields.skillResultInfoWindow;
          v184 = this->fields.targetId;
          v185 = this->fields.targetLv;
          v186 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v186, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
          v187 = this->fields.targetIdOld;
          v188 = this->fields.targetLvOld;
          Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v189);
          if ( Instance )
          {
            dispLimitCounta = v188;
            if ( v70 )
            {
              v190 = *(_DWORD *)(Instance + 16);
              v191 = System_Collections_Generic_List_int___ToArray(
                       v70,
                       (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
              v192 = this->fields.baseUsrSvtData;
              v193 = v191;
              Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v194);
              if ( Instance )
              {
                if ( v183 )
                {
                  v247.fields.r = 0.0;
                  v247.fields.g = 0.0;
                  v247.fields.b = 0.0;
                  v247.fields.a = 0.0;
                  v250.fields.r = 0.0;
                  v250.fields.g = 0.0;
                  v250.fields.b = 0.0;
                  v250.fields.a = 0.0;
                  SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                    v183,
                    v184,
                    v185,
                    v186,
                    v187,
                    dispLimitCounta,
                    v190,
                    v193,
                    v192,
                    0,
                    isRelease,
                    0,
                    *(System_String_o **)(Instance + 24),
                    isForceRelease,
                    v247,
                    v250,
                    0);
                  return;
                }
              }
            }
          }
LABEL_233:
          sub_1C2D6EC(Instance, lv);
        }
        v73 = this->fields.baseUsrSvtData;
        if ( !v73 )
          goto LABEL_233;
        v75 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
        v74 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v236.fields.currentCryptoKey = v75;
        *(_QWORD *)&v236.fields.fakeValue = v74;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v236, 0);
        if ( !MasterData_object )
          goto LABEL_233;
        Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              v72,
                              0);
        if ( !Instance )
          goto LABEL_233;
        v76 = *(_DWORD *)(Instance + 24);
        if ( v76 < 1 )
        {
LABEL_75:
          v79 = this->fields.baseUsrSvtData;
          if ( !v79 )
            goto LABEL_233;
          v81 = *(_QWORD *)&v79->fields.svtId.fields.currentCryptoKey;
          v80 = *(_QWORD *)&v79->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v237.fields.currentCryptoKey = v81;
          *(_QWORD *)&v237.fields.fakeValue = v80;
          v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v237, 0);
          Instance = (__int64)ServantSkillMaster__GetEntity((ServantSkillMaster_o *)MasterData_object, v82, v72, 1, 0);
          if ( Instance )
          {
            lv = *(unsigned int *)(Instance + 28);
            v78 = v71;
LABEL_80:
            if ( !v70 )
              goto LABEL_233;
            items = v70->fields._items;
            v84 = Method_System_Collections_Generic_List_int__Add__;
            ++v70->fields._version;
            if ( !items )
              goto LABEL_233;
            size = v70->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v70,
                lv,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            }
            else
            {
              v70->fields._size = size + 1;
              items->m_Items[size] = lv;
            }
          }
          else
          {
            v78 = v71;
          }
          ++v72;
          v71 = v78;
          continue;
        }
        break;
      }
      v77 = 0;
      while ( v76 != v77 )
      {
        v78 = *(_QWORD *)(Instance + 8LL * v77 + 32);
        if ( !v78 )
          goto LABEL_233;
        lv = *(unsigned int *)(v78 + 28);
        if ( (_DWORD)lv == this->fields.targetId )
          goto LABEL_80;
        if ( v76 == ++v77 )
          goto LABEL_75;
      }
      goto LABEL_234;
    case 9:
      v141 = this->fields.skillResultInfoWindow;
      v142 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v144 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v144, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v141 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v141, v142, oldFriendShipRank, v144, 0);
      return;
    case 0xB:
      v119 = this->fields.skillResultInfoWindow;
      v120 = this->fields.baseUsrSvtData;
      v121 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v121, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v119 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v119, v120, v121, 0);
      return;
    case 0xC:
    case 0xE:
    case 0x16:
    case 0x18:
      goto LABEL_216;
    case 0xD:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_233;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        0);
      goto LABEL_216;
    case 0xF:
      v30 = this->fields.playVoiceList;
      if ( v30 )
        goto LABEL_141;
      goto LABEL_216;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_196;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_227;
      this->fields.messageCallback = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.messageCallback, 0, (int32_t)v8, v9);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      v123 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v123 )
        goto LABEL_233;
      v124 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v123,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
               (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_233;
      v125 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v126 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v126 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v126->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10816/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0);
        if ( !v125 )
          goto LABEL_233;
        v128 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v125, -1, -1, 0, 0);
        v130 = System_String__Format(v128, Name, 0);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10815/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0);
        if ( !v124 )
          goto LABEL_233;
        v218 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v124, 0);
        if ( !v125 )
          goto LABEL_233;
        v219 = (Il2CppObject *)Instance;
        v220 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v125, -1, -1, 0, 0);
        v130 = System_String__Format_63499156(v218, v219, v220, 0);
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))messageCallback->fields.invoke_impl)(
        messageCallback->fields.method_code,
        v130,
        messageCallback->fields.method);
LABEL_227:
      if ( !this->fields.callbackFunc )
        return;
      v178 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v221 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v221 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v221->static_fields->DEFAULT_FADE_TIME;
      v181 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      v182 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__147_2__;
LABEL_231:
      v222 = v181;
      System_Action___ctor(v181, (Il2CppObject *)this, *v182, 0);
      if ( v178 )
      {
        CommonUI__maskFadeout((CommonUI_o *)v178, 1, DEFAULT_FADE_TIME, v222, 0);
        return;
      }
      goto LABEL_233;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_227;
LABEL_196:
      v178 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v179 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v179 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v179->static_fields->DEFAULT_FADE_TIME;
      v181 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      v182 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__147_1__;
      goto LABEL_231;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v175 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v8);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_233;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v175,
        commandCardIndex,
        commandCardExceedCount,
        0,
        *(System_String_o **)(Instance + 24),
        0);
      goto LABEL_216;
    case 0x17:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_233;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_48240192(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        this->fields.oldFriendShipRank,
        0);
      goto LABEL_216;
    case 0x19:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_233;
      v131 = *(System_Int32_array **)(Instance + 16);
      v132 = this->fields.skillResultInfoWindow;
      v133 = this->fields.targetId;
      v134 = this->fields.targetLv;
      v135 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v135, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v136 = this->fields.baseUsrSvtData;
      if ( !v136 )
        goto LABEL_233;
      v137 = this->fields.targetIdOld;
      v138 = this->fields.targetLvOld;
      v140 = *(_QWORD *)&v136->fields.svtId.fields.currentCryptoKey;
      v139 = *(_QWORD *)&v136->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v241.fields.currentCryptoKey = v140;
      *(_QWORD *)&v241.fields.fakeValue = v139;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v241, 0);
      if ( !v132 )
        goto LABEL_233;
      v246.fields.r = 0.0;
      v246.fields.g = 0.0;
      v246.fields.b = 0.0;
      v246.fields.a = 0.0;
      v249.fields.r = 0.0;
      v249.fields.g = 0.0;
      v249.fields.b = 0.0;
      v249.fields.a = 0.0;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v132,
        v133,
        v134,
        v135,
        v137,
        v138,
        Instance,
        v131,
        this->fields.baseUsrSvtData,
        this->fields.targetLvOld == 0,
        1,
        1,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v246,
        v249,
        0);
      return;
    default:
      return;
  }
}


void CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  CGThumbnailListItem_o *p_player; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2B2C8 & 1) == 0 )
  {
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C2B2C8 = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = (CGThumbnailListItem_o *)&this->fields.player;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0);
    p_player->klass = 0;
    sub_1C2D434(p_player, 0, v6, v7);
  }
}


void CombineResultEffectComponent_ClickDelegate___ctor(
        CombineResultEffectComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7666C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76624;
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
  if ( (byte_4C2B2E8 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2B2E8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2B2E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
    byte_4C2B2E9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.afterSkillList, (int32_t)v6, v7, v8);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4C2B2EB & 1) == 0 )
  {
    sub_1C2D490(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4C2B2EB = 1;
  }
  v7 = sub_1C2D6DC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList) == 0)
    || (items = afterSkillList->fields._items,
        v13 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_1C2D6EC(afterSkillList, v9);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), v7, v10, v11);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4C2B2EA & 1) == 0 )
  {
    sub_1C2D490(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4C2B2EA = 1;
  }
  v7 = sub_1C2D6DC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList) == 0)
    || (items = beforeSkillList->fields._items,
        v13 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_1C2D6EC(beforeSkillList, v9);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), v7, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4C2B2ED & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4C2B2ED = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1C2D6EC(0, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4C2B2EE & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__);
    byte_4C2B2EE = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1C2D6EC(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4C2B2EC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4C2B2EC = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1C2D6EC(0, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


void CombineResultEffectComponent_MessageDelegate___ctor(
        CombineResultEffectComponent_MessageDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A766F0;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A766D0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A76688;
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
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C2B2EF & 1) == 0 )
  {
    sub_1C2D490(&CombineResultEffectComponent___c_TypeInfo);
    byte_4C2B2EF = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CombineResultEffectComponent___c___ctor(CombineResultEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c___EndPlayProcess_b__162_0(
        CombineResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


ServantVoicePerformance_o *CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__153_0(
        CombineResultEffectComponent___c_o *this,
        ServantVoiceData_o *voiceData,
        const MethodInfo *method)
{
  if ( !voiceData )
    sub_1C2D6EC(this, 0);
  return voiceData->fields.additionalPerformances;
}


bool CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__153_1(
        CombineResultEffectComponent___c_o *this,
        ServantVoicePerformance_o *performanceData,
        const MethodInfo *method)
{
  if ( !performanceData )
    sub_1C2D6EC(this, 0);
  return !System_String__IsNullOrEmpty(performanceData->fields.assetName, 0);
}


int32_t CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__109_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C2D6EC(this, a);
  return System_Int32__CompareTo_64968396((_DWORD)a + 24, b->fields.priority, 0);
}


void CombineResultEffectComponent___c__DisplayClass116_0___ctor(
        CombineResultEffectComponent___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass116_0___LoadCombineEffect_b__0(
        CombineResultEffectComponent___c__DisplayClass116_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C2B2F0 & 1) == 0 )
  {
    sub_1C2D490(&CombineResultEffectComponent_TypeInfo);
    byte_4C2B2F0 = 1;
  }
  if ( assetData )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = assetData;
    sub_1C2D434(
      (CGThumbnailListItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int32_t)assetData,
      (int32_t)method,
      v3);
  }
  ActionExtensions__Call(this->fields.action, 0);
}


void CombineResultEffectComponent___c__DisplayClass147_0___ctor(
        CombineResultEffectComponent___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass147_0___setSkillResultInfo_b__4(
        CombineResultEffectComponent___c__DisplayClass147_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0);
}


void CombineResultEffectComponent___c__DisplayClass147_1___ctor(
        CombineResultEffectComponent___c__DisplayClass147_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass147_1___setSkillResultInfo_b__3(
        CombineResultEffectComponent___c__DisplayClass147_1_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass147_1_o *v2; // x19
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *v8; // x8
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *v9; // x8
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *v10; // x8
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *v11; // x8
  struct CombineResultEffectComponent_o *v12; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__5; // x22
  CommonUI_o *v15; // x20
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_4C2B2F1 & 1) == 0 )
  {
    sub_1C2D490(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__5__);
    byte_4C2B2F1 = 1;
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
  UnityEngine_Object__DestroyImmediate_71163892(effect, 0);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[3].fields.__9__5 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this[3].fields.__9__5, 0, v6, v7);
  v9 = v2->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v10->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[4].fields.CS___8__locals1 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = v2->fields.CS___8__locals1;
    if ( v11 )
    {
      v12 = v11->fields.__4__this;
      if ( v12 )
      {
        baseUsrSvtData = v12->fields.baseUsrSvtData;
        _9__5 = v2->fields.__9__5;
        v15 = (CommonUI_o *)this;
        if ( !_9__5 )
        {
          _9__5 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C2D6DC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__5,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__5__,
            v16);
          v2->fields.__9__5 = _9__5;
          sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v17, v18);
        }
        if ( v15 )
        {
          CommonUI__OpenCombineLimit(v15, baseUsrSvtData, _9__5, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_1C2D6EC(this, method);
  }
  if ( this[9].monitor )
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


void CombineResultEffectComponent___c__DisplayClass147_1___setSkillResultInfo_b__5(
        CombineResultEffectComponent___c__DisplayClass147_1_o *this,
        bool decide,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *CS___8__locals1; // x8
  CombineResultEffectComponent___c__DisplayClass147_1_o *v4; // x19
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this,
        (this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)CS___8__locals1->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(this, decide);
  }
  HIDWORD(this[8].monitor) = 0;
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
}


void CombineResultEffectComponent___c__DisplayClass147_2___ctor(
        CombineResultEffectComponent___c__DisplayClass147_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineResultEffectComponent___c__DisplayClass147_2___setSkillResultInfo_b__7(
        CombineResultEffectComponent___c__DisplayClass147_2_o *this,
        bool decide,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass147_2_o *v3; // x19
  struct CombineResultEffectComponent_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__8; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct CombineResultEffectComponent_o *v8; // x8

  v3 = this;
  if ( (byte_4C2B2F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_CardServantFlagRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass147_2_o *)sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__8__);
    byte_4C2B2F2 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__8 = v3->fields.__9__8;
  if ( !_9__8 )
  {
    _9__8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__8,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__8__,
      0);
    v3->fields.__9__8 = _9__8;
    sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__9__8, (int32_t)_9__8, v6, v7);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass147_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__8,
                                                                    (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v8 = v3->fields.__4__this;
  if ( !v8 || !this )
LABEL_11:
    sub_1C2D6EC(this, decide);
  CardServantFlagRequest__beginRequest(
    (CardServantFlagRequest_o *)this,
    v8->fields.targetSvtId,
    v8->fields.targetFlagId,
    0);
}


void CombineResultEffectComponent___c__DisplayClass147_2___setSkillResultInfo_b__8(
        CombineResultEffectComponent___c__DisplayClass147_2_o *this,
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


void CombineResultEffectComponent___c__DisplayClass162_0___ctor(
        CombineResultEffectComponent___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass162_0___EndPlayProcess_b__1(
        CombineResultEffectComponent___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct CombineResultEffectComponent_o *_4__this; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (limitUpResultCheck = _4__this->fields.limitUpResultCheck) == 0 )
    sub_1C2D6EC(this, method);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, this->fields.endDispAction, 1, v2);
}


void CombineResultEffectComponent___c__DisplayClass174_0___ctor(
        CombineResultEffectComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass174_0___OpenNotification_b__0(
        CombineResultEffectComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass174_0_o *v2; // x19
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  int32_t limitCount; // w20
  int32_t v9; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v2 = this;
  if ( (byte_4C2B2F3 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass174_0_o *)sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C2B2F3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  resUsrSvtData = _4__this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_11;
  v6 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
  limitCount = v2->fields.limitCount;
  v9 = v7;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v9, limitCount, 0);
  ServantCharaGraphEXOpenManager__WriteData(0);
  this = (CombineResultEffectComponent___c__DisplayClass174_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1C2D6EC(this, method);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass180_0___ctor(
        CombineResultEffectComponent___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineResultEffectComponent___c__DisplayClass180_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass180_0_o *this,
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
  const MethodInfo *v11; // x3

  if ( (byte_4C2B2F4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__1__);
    byte_4C2B2F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v7 )
    sub_1C2D6EC(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void CombineResultEffectComponent___c__DisplayClass180_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v7; // x20

  if ( (byte_4C2B2F5 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2B2F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_10:
    sub_1C2D6EC(Instance, v4);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}