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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_HashSet_T__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4CBA3D9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4CBA3D9 = 1;
  }
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_CED040;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentFigureCollectList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.afterFigureCollectList, (int32_t)v6, v7, v8);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  v9 = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !v9 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C6BC68(v9);
  *(_DWORD *)(v9 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.ChangeCardEffectLvList, v9, v11, v12);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v13 = (System_Collections_Generic_HashSet_T__o *)sub_1C6BC54(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v13,
    (const MethodInfo_36B3140 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v13 )
LABEL_7:
    sub_1C6BC60(v9, v10);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    1,
    (const MethodInfo_36B4344 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    10,
    (const MethodInfo_36B4344 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    26,
    (const MethodInfo_36B4344 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    19,
    (const MethodInfo_36B4344 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v13,
    24,
    (const MethodInfo_36B4344 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.limitUpKinds, (int32_t)v13, v14, v15);
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

  if ( (byte_4CBA382 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4CBA382 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)Component_object, v4, v5);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C6BC60(0, v7);
  v8 = UnityEngine_Component__GetComponent_object_(
         transform,
         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)v8, v9, v10);
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

  if ( (byte_4CBA396 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA396 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    sub_1C6BC60(Instance, v8);
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
    sub_1C6BC60(0, method);
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

  if ( (byte_4CBA3C8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__CheckReturnCombineItem_b__170_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA3C8 = 1;
  }
  if ( this->fields.returnQpNum >= 1
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.returnSvtIds, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    returnQpNum = this->fields.returnQpNum;
    returnSvtIds = this->fields.returnSvtIds;
    v6 = (CommonUI_o *)Instance;
    v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__CheckReturnCombineItem_b__170_0__,
      0);
    if ( !v6 )
      sub_1C6BC60(v8, v9);
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

  if ( (byte_4CBA3D1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CBA3D1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v7);
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

  if ( (byte_4CBA3CE & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&CombineResultEffectComponent_TypeInfo);
    sub_1C6BA08(&System_GC_TypeInfo);
    byte_4CBA3CE = 1;
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
    AssetManager__releaseAsset_40765532(v6, 0);
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)CombineResultEffectComponent_TypeInfo->static_fields, 0, v7, v8);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !svtResultInfoWindow )
LABEL_22:
    sub_1C6BC60(svtResultInfoWindow, v3);
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

  if ( (byte_4CBA3D0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1C6BA08(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_0__);
    byte_4CBA3D0 = 1;
  }
  v3 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_0__,
    0);
  if ( !limitCountSealDialog )
    sub_1C6BC60(v7, v8);
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
  struct System_Int32_array *v38; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v40; // x26
  StandFigureCollect_o *v41; // x27
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v51; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v53; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v55; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CBA3AD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StandFigureCollect_TypeInfo);
    byte_4CBA3AD = 1;
  }
  memset(&v64, 0, sizeof(v64));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v13 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v13,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
                                      (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v51);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40907224(
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
        v53 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v55 = (StandFigureCollect_o *)sub_1C6BC54(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v55, 0, v53, 0);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v59 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v55,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
              }
              else
              {
                v61 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v61[4] = (Il2CppClass *)v55;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v55, v56, v57);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1C6BC60(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    v17,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v18 )
      break;
    current = (SvtMultiPortraitEntity_o *)v64.fields._current;
    if ( !v64.fields._current )
      sub_1C6BC60(v18, v19);
    klass_high = HIDWORD(v64.fields._current[2].klass);
    if ( klass_high >= 1 )
      v22 = klass_high + 1;
    else
      v22 = 1;
    if ( !StandFigureNode )
      sub_1C6BC60(v18, v19);
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
      sub_1C6BC60(0, v29);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C6B9AC((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v30, v31);
    transform = UnityEngine_Component__get_transform(v32, 0);
    if ( !transform )
      sub_1C6BC60(0, v34);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v36 = UnityEngine_Component__get_gameObject(v32, 0);
      v38 = current->fields.commonPosition;
      if ( !v38 )
        sub_1C6BC60(v36, v37);
      max_length = v38->max_length;
      if ( max_length == 1 )
        sub_1C6BC68(v36);
      if ( !max_length )
        sub_1C6BC68(v36);
      GameObjectExtensions__AddLocalPosition_36357076(v36, (float)v38->m_Items[0], (float)v38->m_Items[1], 0);
    }
    v40 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v41 = (StandFigureCollect_o *)sub_1C6BC54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v41, current, (UIStandFigureR_o *)v32, 0);
    if ( !v40 )
      sub_1C6BC60(v42, v43);
    v46 = v40->fields._items;
    v47 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v40->fields._version;
    if ( !v46 )
      sub_1C6BC60(v42, v43);
    v48 = v40->fields._size;
    if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v40,
        (Il2CppObject *)v41,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &v46->obj.klass + v48;
      v40->fields._size = v48 + 1;
      v49[4] = (Il2CppClass *)v41;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v41, v44, v45);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  struct System_Int32_array *v52; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v54; // x29
  StandFigureCollect_o *v55; // x22
  __int64 v56; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v65; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v67; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v69; // x20
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  int32_t svtId; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+50h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4CBA3A4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StandFigureCollect_TypeInfo);
    byte_4CBA3A4 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v16 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v16,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v19 = (SvtMultiPortraitMaster_o *)Instance;
  v21 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v81.fields.currentCryptoKey = v21;
  *(_QWORD *)&v81.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v81, 0);
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
                                      (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v65);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_40907224(
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
                                 : StandFigureManager__CreateRenderPrefab_40981060(
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
      v67 = (UIStandFigureR_o *)Instance;
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
          v69 = (StandFigureCollect_o *)sub_1C6BC54(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v69, 0, v67, 0);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v73 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v69,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
              }
              else
              {
                v75 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v75[4] = (Il2CppClass *)v69;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 4), (int32_t)v69, v70, v71);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1C6BC60(Instance, v15);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    v26,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v27 )
      break;
    current = (SvtMultiPortraitEntity_o *)v80.fields._current;
    if ( !v80.fields._current )
      sub_1C6BC60(v27, v28);
    klass_high = HIDWORD(v80.fields._current[2].klass);
    if ( klass_high >= 1 )
      v31 = klass_high + 1;
    else
      v31 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1C6BC60(v27, v28);
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
        sub_1C6BC60(v27, v28);
      v41 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      v42 = current->fields.portraitImageId;
      v43 = v41;
      v45 = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v44);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(v43, v42, formId, 1, 0, v31, 0, v45, 0);
    }
    v46 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C6BC60(0, v38);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C6B9AC((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v39, v40);
    transform = UnityEngine_Component__get_transform(v46, 0);
    if ( !transform )
      sub_1C6BC60(0, v48);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v50 = UnityEngine_Component__get_gameObject(v46, 0);
      v52 = current->fields.commonPosition;
      if ( !v52 )
        sub_1C6BC60(v50, v51);
      max_length = v52->max_length;
      if ( max_length == 1 )
        sub_1C6BC68(v50);
      if ( !max_length )
        sub_1C6BC68(v50);
      GameObjectExtensions__AddLocalPosition_36357076(v50, (float)v52->m_Items[0], (float)v52->m_Items[1], 0);
    }
    v54 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v55 = (StandFigureCollect_o *)sub_1C6BC54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v55, current, (UIStandFigureR_o *)v46, 0);
    if ( !v54 )
      sub_1C6BC60(v56, v57);
    v60 = v54->fields._items;
    v61 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v54->fields._version;
    if ( !v60 )
      sub_1C6BC60(v56, v57);
    v62 = v54->fields._size;
    if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v54,
        (Il2CppObject *)v55,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &v60->obj.klass + v62;
      v54->fields._size = v62 + 1;
      v63[4] = (Il2CppClass *)v55;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v55, v58, v59);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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

  if ( (byte_4CBA3CD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA3CD = 1;
  }
  memset(&v29, 0, sizeof(v29));
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)currentFigureCollectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C6BC60(v4, v5);
    monitor = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1C6BC60(0, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_1C6BC60(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71659864(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v16 )
      break;
    v18 = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C6BC60(v16, v17);
    v19 = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      v21 = (UIStandFigureR_o *)v18[1].monitor;
      if ( !v21 )
        sub_1C6BC60(0, v20);
      UIStandFigureR__ReleaseCharacter(v21, 0);
      v23 = (UnityEngine_Component_o *)v18[1].monitor;
      if ( !v23 )
        sub_1C6BC60(0, v22);
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71659864(v24, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1C6BC60(currentFigureCollectList, method);
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
    sub_1C6BC60(bgCollider, method);
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

  if ( (byte_4CBA3B7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__EndLoad_b__148_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA3B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__148_0__, 0);
  if ( !v5 )
    sub_1C6BC60(v8, v9);
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

  if ( (byte_4CBA3C3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_EndPlayProcess__);
    byte_4CBA3C3 = 1;
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
      sub_1C6BC68(IsNullOrEmpty);
    IsNullOrEmpty = playVoiceList->m_Items[v6];
    if ( !IsNullOrEmpty )
LABEL_9:
      sub_1C6BC60(IsNullOrEmpty, v4);
    v7 = ServantVoiceData__get_AfterPerformance(IsNullOrEmpty, 0);
    v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
  const MethodInfo *v7; // x3
  int32_t v8; // w2
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
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int v32; // w8
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v37; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x22
  __int64 v41; // x23
  struct UserServantEntity_o *v42; // x8
  int32_t v43; // w22
  CombineResultEffectComponent_o *v44; // x0
  int32_t v45; // w23
  const MethodInfo *v46; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v47; // x21
  System_Action_o *v48; // x19
  const MethodInfo *v49; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4CBA3C4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C6BA08(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
    sub_1C6BA08(&int_____TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__EndPlayProcess_b__162_0__);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass162_0__EndPlayProcess_b__1__);
    sub_1C6BA08(&CombineResultEffectComponent___c__DisplayClass162_0_TypeInfo);
    sub_1C6BA08(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_10674/*"PlayVoice"*/);
    byte_4CBA3C4 = 1;
  }
  v3 = sub_1C6BC54(CombineResultEffectComponent___c__DisplayClass162_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_61;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
          (System_String_o *)StringLiteral_10674/*"PlayVoice"*/,
          v12->fields.delay,
          0);
        return;
      }
LABEL_61:
      sub_1C6BC60(Request_object, v5);
    }
LABEL_62:
    sub_1C6BC68(Request_object);
  }
  if ( this->fields.player )
    CombineResultEffectComponent__stopVoice(this, v5);
  this->fields.playCnt = 0;
  this->fields.playVoiceList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v8, v9);
  v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
  *(_QWORD *)(v3 + 24) = v13;
  v14 = (System_Action_o **)(v3 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v13, v15, v16);
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
      _9__162_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(_9__162_0, v21, Method_CombineResultEffectComponent___c__EndPlayProcess_b__162_0__, 0);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__162_0 = _9__162_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__162_0, (int32_t)_9__162_0, v23, v24);
    }
    *v14 = _9__162_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)_9__162_0, v17, v18);
    this->fields.skipEndDispAfterVoicePlayed = 0;
  }
  if ( this->fields.firstPlayedVoiceFlag >= 1 )
  {
    v25 = sub_1C6BAB0(int_____TypeInfo, 1);
    Request_object = sub_1C6BAB0(int___TypeInfo, 2);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_61;
    v27 = (_DWORD *)Request_object;
    v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v29;
    *(_QWORD *)&v50.fields.fakeValue = v28;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v50, 0);
    if ( !v27 )
      goto LABEL_61;
    v32 = v27[6];
    if ( !v32 )
      goto LABEL_62;
    v27[8] = Request_object;
    if ( v32 == 1 )
      goto LABEL_62;
    v27[9] = this->fields.firstPlayedVoiceFlag;
    if ( !v25 )
      goto LABEL_61;
    if ( !*(_DWORD *)(v25 + 24) )
      goto LABEL_62;
    *(_QWORD *)(v25 + 32) = v27;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v27, v30, v31);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (__int64)NetworkManager__getRequest_object_(
                                0,
                                (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
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
                     (const MethodInfo_36B3834 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( (Request_object & 1) != 0 )
  {
    if ( this->fields.isLimitUpSuppression )
      goto LABEL_39;
    kind = this->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_39;
    v39 = this->fields.baseUsrSvtData;
    if ( !v39 )
      goto LABEL_61;
    v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = v41;
    *(_QWORD *)&v51.fields.fakeValue = v40;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v51, 0);
    v42 = this->fields.baseUsrSvtData;
    if ( !v42 )
      goto LABEL_61;
    v43 = Request_object;
    v44 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                              v42->fields.limitCount,
                                              0);
    v45 = (_DWORD)v44 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v44, v43, (_DWORD)v44 + 1, v46) )
    {
      v47 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1C6BC54(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v47,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0);
      v48 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v3,
        Method_CombineResultEffectComponent___c__DisplayClass162_0__EndPlayProcess_b__1__,
        0);
      ServantCommentMaster__OpenSaintGraphProfileChange(v43, v45, v47, v48, 0);
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
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v33) )
    {
      Request_object = (__int64)this->fields.touchInfo;
      if ( !Request_object )
        goto LABEL_61;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Request_object, 1, 0);
      costumeId = this->fields.costumeId;
      v37 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v37 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v37->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(this, v34);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v35);
        ++this->fields.skillShowIndex;
      }
    }
    else if ( CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, v5) )
    {
      CombineResultEffectComponent__ShowCostumeChangeMessage(this, v49);
    }
    else
    {
      CombineResultEffectComponent__EndDisp(this, v49);
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

  if ( (byte_4CBA3CA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__FadeoutProcess_b__172_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA3CA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v5 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
      v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__FadeoutProcess_b__172_0__, 0);
      if ( !Instance )
        sub_1C6BC60(v8, v9);
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
  Il2CppObject *Object_object__51495936; // x20
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4CBA39A & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&CombineResultEffectComponent_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656312);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA39A = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_14;
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              effectAssetData,
                              name,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object__52199600(
                                     Object_object__51495936,
                                     parentTr,
                                     1,
                                     (const MethodInfo_31C80B0 *)Method_UnityEngine_Object_Instantiate_GameObject____78656312);
  if ( !effectAssetData )
    goto LABEL_14;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CAFC09 )
  {
    effectAssetData = (AssetData_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CAFC0E )
  {
    effectAssetData = (AssetData_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v9 )
LABEL_14:
    sub_1C6BC60(effectAssetData, parentTr);
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

  if ( (byte_4CBA3AC & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CBA3AC = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1C6BC60(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1C6BC68(v6);
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

  if ( (byte_4CBA3CB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA3CB = 1;
  }
  v18 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v20, 0);
    if ( !v10 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v10, &entity, (int32_t)Instance, limitCount, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0);
LABEL_21:
      sub_1C6BC60(Instance, v8);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v21, 0);
  if ( !v15 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v15,
          (Il2CppObject **)&v18,
          (int32_t)Instance,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v18;
  if ( !v18 )
    goto LABEL_21;
  return ServantEntity__getName(v18, -1, -1, 0, 0);
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
  if ( (byte_4CBA3D8 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CBA3D8 = 1;
  }
  if ( !userServantEntity )
    sub_1C6BC60(this, *(_QWORD *)&imageLimitCount);
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

  if ( (byte_4CBA3D7 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CBA3D7 = 1;
  }
  if ( !userServantEntity )
    sub_1C6BC60(this, userServantEntity);
  if ( !UserServantEntity__IsUseLevelExceedItemHeroine(userServantEntity, 0) )
    return UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return UserServantEntity__GetOverwriteStatus_43431292(userServantEntity, v4->static_fields->SpecialLimitCountPLD, 0);
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

  if ( (byte_4CBA3A7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4CBA3A7 = 1;
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
    sub_1C6BC60(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
  bool isVoicePlay_43532164; // w0
  Il2CppObject *CombineAnimation; // x21
  Il2CppObject *v13; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_o *Clip; // x22
  int32_t kind; // w8
  Il2CppObject *v17; // x0
  __int64 *v18; // x8
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CBA3D4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_11385/*"ResultEffectAnimation"*/);
    sub_1C6BA08(&StringLiteral_17277/*"bit_result_skinchange{0:D2}"*/);
    sub_1C6BA08(&StringLiteral_17255/*"bit_result_advent{0:D2}"*/);
    sub_1C6BA08(&StringLiteral_25317/*"{0}{1:D2}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_17279/*"bit_result{0:D2}"*/);
    byte_4CBA3D4 = 1;
  }
  condEntity = 0;
  if ( !this->fields.svtVoiceEntity )
    goto LABEL_26;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0) )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( !svtVoiceEntity )
    goto LABEL_42;
  playVoiceList = this->fields.playVoiceList;
  if ( !playVoiceList )
    goto LABEL_42;
  if ( !LODWORD(playVoiceList->max_length) )
    sub_1C6BC68(Master_object);
  v10 = playVoiceList->m_Items[0];
  if ( !v10 || !Master_object )
    goto LABEL_42;
  isVoicePlay_43532164 = VoicePlayCondMaster__isVoicePlay_43532164(
                           Master_object,
                           svtVoiceEntity->fields.id,
                           v10->fields.id,
                           &condEntity,
                           0,
                           -1,
                           -1,
                           0,
                           0);
  if ( condEntity && isVoicePlay_43532164 )
  {
    CombineAnimation = (Il2CppObject *)VoicePlayCondEntity__GetCombineAnimation(condEntity, 0, 0);
    v20 = index;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v5 = System_String__Format_64008100((System_String_o *)StringLiteral_25317/*"{0}{1:D2}"*/, CombineAnimation, v13, 0);
  }
  Master_object = (VoicePlayCondMaster_o *)this->fields.fsm;
  if ( !Master_object
    || (Master_object = (VoicePlayCondMaster_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Master_object, 0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11385/*"ResultEffectAnimation"*/,
                                                   0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                                   (HutongGames_PlayMaker_FsmGameObject_o *)Master_object,
                                                   0)) == 0 )
  {
LABEL_42:
    sub_1C6BC60(Master_object, v7);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
          v18 = &StringLiteral_17277/*"bit_result_skinchange{0:D2}"*/;
          return System_String__Format((System_String_o *)*v18, v17, 0);
        }
        return (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_38:
      v20 = index;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v18 = &StringLiteral_17255/*"bit_result_advent{0:D2}"*/;
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
    v18 = &StringLiteral_17279/*"bit_result{0:D2}"*/;
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
    sub_1C6BC60(0, transformCount);
  UserServantEntity__GetTransformedServantInfo(baseUsrSvtData, &transformInfo, transformCount, 0);
  return transformInfo;
}


UnityEngine_GameObject_o *CombineResultEffectComponent__GetVoiceEffectPrefab(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51495936; // x20
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
  struct ServantVoiceData_array *v28; // x8
  ServantVoiceData_o *v29; // x8
  int FlagRequestNumber; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4CBA3BC & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&CombineResultEffectComponent_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    sub_1C6BA08(&System_Func_ServantVoicePerformance__bool__TypeInfo);
    sub_1C6BA08(&System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_0__);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_1__);
    sub_1C6BA08(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA3BC = 1;
  }
  Object_object__51495936 = 0;
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
      _9__153_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
      System_Func_object__object____ctor(
        _9__153_0,
        v7,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_0__,
        0);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__153_0 = (struct System_Func_ServantVoiceData__ServantVoicePerformance__o *)_9__153_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__153_0, (int32_t)_9__153_0, v9, v10);
    }
    v11 = System_Linq_Enumerable__Select_object__object_(
            playVoiceList,
            (System_Func_TSource__TResult__o *)_9__153_0,
            (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
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
      _9__153_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ServantVoicePerformance__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__153_1,
        v15,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_1__,
        0);
      v16 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v16->__9__153_1 = (struct System_Func_ServantVoicePerformance__bool__o *)_9__153_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v16->__9__153_1, (int32_t)_9__153_1, v17, v18);
    }
    v19 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
            v13,
            (System_Func_TSource__bool__o *)_9__153_1,
            (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
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
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                effectAssetData,
                                v23,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51495936, 0, 0) && !this->fields.kind )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    effectAssetData = (AssetData_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_VoiceMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      v25 = (VoiceMaster_o *)effectAssetData;
      v27 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v32.fields.currentCryptoKey = v27;
      *(_QWORD *)&v32.fields.fakeValue = v26;
      effectAssetData = (AssetData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v32, 0);
      v28 = this->fields.playVoiceList;
      if ( v28 )
      {
        if ( !LODWORD(v28->max_length) )
          sub_1C6BC68(effectAssetData);
        v29 = v28->m_Items[0];
        if ( v29 )
        {
          if ( v25 )
          {
            FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v25, (int32_t)effectAssetData, v29->fields.id, 0, 0);
            this->fields.firstPlayedVoiceFlag = FlagRequestNumber;
            if ( FlagRequestNumber >= 1 )
              this->fields.unSkippableFlag = 1;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_41:
    sub_1C6BC60(effectAssetData, v20);
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
  return (UnityEngine_GameObject_o *)Object_object__51495936;
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
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  unsigned int i; // w20
  SkillInfo_o *v18; // x8
  SkillInfo_o *v19; // x9
  const MethodInfo *v20; // x3
  SkillInfo_o *v21; // x8
  bool v22; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v26; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v28; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_4CBA3BD & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA3BD = 1;
  }
  v28 = 0;
  skillInfoList = 0;
  v26 = 0;
  tdInfo = 0;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
                *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v25.fields.fakeValue = v10;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v24 = v25;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v24, 0);
                if ( !v11 )
                  goto LABEL_52;
                v12 = *(_OWORD *)(v11 + 32);
                v13 = Instance;
                *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
                *(_OWORD *)&v23.fields.fakeValue = v12;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v23, 0);
                if ( v13 == Instance )
                  break;
                if ( v7 == v8 )
                  goto LABEL_20;
                if ( (unsigned int)++v8 >= *(_DWORD *)(v6 + 24) )
LABEL_18:
                  sub_1C6BC68(Instance);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v11;
              sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, v11, v14, v15);
            }
LABEL_20:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v28, -1, -1, 1, 0, -1, 0);
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
                  v18 = skillInfoList->m_Items[i];
                  if ( !v18 || !v28 )
                    goto LABEL_52;
                  if ( i >= LODWORD(v28->max_length) )
                    goto LABEL_18;
                  v19 = v28->m_Items[i];
                  if ( !v19 )
                    goto LABEL_52;
                  id = (unsigned int)v18->fields.id;
                  if ( *(_QWORD *)&v18->fields.id != *(_QWORD *)&v19->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v18->fields.lv,
                      v16);
                    if ( !v28 )
                      goto LABEL_52;
                    if ( i >= LODWORD(v28->max_length) )
                      goto LABEL_18;
                    v21 = v28->m_Items[i];
                    if ( !v21 )
                      goto LABEL_52;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v21->fields.id,
                      v21->fields.lv,
                      v20);
                  }
                }
                Instance = (int64_t)this->fields.baseUsrSvtData;
                if ( Instance )
                {
                  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &tdInfo, -1, -1, 0, 0);
                  Instance = (int64_t)this->fields.resUsrSvtData;
                  if ( Instance )
                  {
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v26, -1, -1, 0, 0);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0);
                      if ( (Instance & 1) == 0 )
                      {
                        v22 = 0;
LABEL_50:
                        this->fields.treasureDeviceEnabled = v22;
                        return;
                      }
                      if ( tdInfo && v26 )
                      {
                        v22 = tdInfo->fields.id != v26->fields.id || tdInfo->fields.lv != v26->fields.lv;
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
    sub_1C6BC60(Instance, id);
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

  if ( (byte_4CBA398 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__InitCombineEffect_b__115_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    byte_4CBA398 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                            0);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0);
  this->fields.effect = Value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Value, v5, v6);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0);
  v7 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4CAFC0E )
  {
    fsm = (PlayMakerFSM_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
    sub_1C6BC60(fsm, method);
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

  if ( (byte_4CBA3D6 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CBA3D6 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C6BC60(Instance, v4);
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
    sub_1C6BC60(0, method);
  return !LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0);
}


bool CombineResultEffectComponent__IsShowNextNpInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  int v4; // w0

  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    sub_1C6BC60(0, method);
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

  if ( (byte_4CBA3C5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA3C5 = 1;
  }
  entity = 0;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  v4 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, method);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                                        v13,
                                                                                        0);
  if ( !v6 )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v6,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_20:
    sub_1C6BC60(costumeSkillInfoManager, method);
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

  if ( (byte_4CBA399 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&CombineResultEffectComponent_TypeInfo);
    sub_1C6BA08(&CombineRootComponent_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass116_0__LoadCombineEffect_b__0__);
    sub_1C6BA08(&CombineResultEffectComponent___c__DisplayClass116_0_TypeInfo);
    byte_4CBA399 = 1;
  }
  v4 = sub_1C6BC54(CombineResultEffectComponent___c__DisplayClass116_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C6BC60(v5, v6);
  *(_QWORD *)(v4 + 16) = action;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)action, v7, v8);
  if ( CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData )
    goto LABEL_10;
  v9 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v9 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v9->static_fields->COMBINE_ASSET_PATH;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1C6BC60(0, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0);
}


void CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4CBA3D3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5424/*"END_ANIMATION"*/);
    byte_4CBA3D3 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1C6BC60(0, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5424/*"END_ANIMATION"*/, 0);
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
  if ( (byte_4CBA3CF & 1) == 0 )
  {
    sub_1C6BA08(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&StringLiteral_8271/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4CBA3CF = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v14, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[11].monitor;
  if ( !v6 )
    goto LABEL_14;
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v6[6], 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8271/*"LIMIT_COUNT_SEALED_TITLE"*/, 0);
  v13 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1C6BC54(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v13,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0);
  if ( !v10 )
LABEL_14:
    sub_1C6BC60(this, method);
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

  if ( (byte_4CBA3CC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass174_0__OpenNotification_b__0__);
    sub_1C6BA08(&CombineResultEffectComponent___c__DisplayClass174_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_11582/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA3CC = 1;
  }
  v3 = sub_1C6BC54(CombineResultEffectComponent___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_28;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v34, 0);
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
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v35, 0);
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
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v36, 0);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = System_Int32__ToString((int32_t)&v33, 0);
          v29 = System_String__Concat_63966792((System_String_o *)StringLiteral_11582/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v28, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v30 = LocalizationManager__Get(v29, 0);
          v31 = System_String__Format(v30, NameFromMessageId, 0);
          v32 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
    sub_1C6BC60(AscensionAfterDialogId, v5);
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

  if ( (byte_4CBA3BB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4CBA3BB = 1;
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
                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
      sub_1C6BC60(IsNullOrEmpty, v8);
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
  if ( (byte_4CBA3BA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_EndPlay__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CBA3BA = 1;
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
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
                 (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
          {
            if ( System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                   (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
              && System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                   (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
        v24 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)v4, Method_CombineResultEffectComponent_EndPlay__, 0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v25 = SoundManager__playVoice_41752360(asstName, vcName, volume, v24, 0, 0);
        v4->fields.player = v25;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.player, (int32_t)v25, v26, v27);
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
          sub_1C6BC60(this, method);
        }
      }
    }
    sub_1C6BC68(this);
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

  if ( (byte_4CBA3D2 & 1) == 0 )
  {
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__0__);
    sub_1C6BA08(&CombineResultEffectComponent___c__DisplayClass180_0_TypeInfo);
    byte_4CBA3D2 = 1;
  }
  entity = 0;
  v11 = sub_1C6BC54(CombineResultEffectComponent___c__DisplayClass180_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v19 )
      {
        CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          Instance = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( Instance )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 0, 0);
            v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v21 = entity;
            v22 = (CommonUI_o *)v20;
            v23 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v23,
              (Il2CppObject *)v11,
              Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__0__,
              0);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_31429552(v22, 33, v21, limitCount, v23, 0);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_1C6BC60(Instance, v13);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_31417952(Instance, *(System_Action_o **)(v11 + 24), 0);
}


void CombineResultEffectComponent__ReleaseVoiceData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CBA3C7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CBA3C7 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.playVoiceList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v2, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v6);
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
  const MethodInfo *v61; // x3
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  bool v66; // w20
  UnityEngine_GameObject_o *v67; // x21
  const MethodInfo *v68; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v70; // x23
  System_Collections_Generic_List_object__o *v71; // x21
  StandFigureCollect_o *v72; // x22
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  float v79; // s8
  struct System_Int32_array *multiFace; // x23
  int32_t masterDataBytes; // w20
  int32_t m_CancellationTokenSource_high; // w21
  struct ServantVoiceData_array *playVoiceList; // x8
  float FadeTime; // s0
  struct ServantVoiceData_array *v85; // x8
  ServantVoiceData_o *v86; // x8
  unsigned __int64 v87; // x22
  bool v88; // [xsp+24h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+40h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA3AA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StandFigureCollect_TypeInfo);
    sub_1C6BA08(&StringLiteral_8431/*"LimitUpResSvtNodeName"*/);
    byte_4CBA3AA = 1;
  }
  entity = 0;
  memset(&v90, 0, sizeof(v90));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8431/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v8 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v8,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v8,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_85;
  v11 = (ServantLimitAddMaster_o *)Instance;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v13;
  *(_QWORD *)&v92.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v92, 0);
  v14 = this->fields.resUsrSvtData;
  if ( !v14 )
    goto LABEL_85;
  v15 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  *(_QWORD *)&v93.fields.currentCryptoKey = v22;
  *(_QWORD *)&v93.fields.fakeValue = v21;
  v88 = isForceNormalFace;
  v23 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v93, 0);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v23, (int32_t)v23, v20, v24);
  if ( !MasterData_object )
LABEL_85:
    sub_1C6BC60(Instance, v7);
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
                                      (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v89,
      v26,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v90 = v89;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v90,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v27 )
        break;
      if ( !StandFigureNode )
        sub_1C6BC60(v27, v28);
      current = (SvtMultiPortraitEntity_o *)v90.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      if ( !current )
        sub_1C6BC60(gameObject, v31);
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
        sub_1C6BC60(0, v36);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1C6B9AC((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v37, v38);
      transform = UnityEngine_Component__get_transform(v39, 0);
      if ( !transform )
        sub_1C6BC60(0, v41);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        v43 = UnityEngine_Component__get_transform(v39, 0);
        if ( !v43 )
          sub_1C6BC60(0, v44);
        localPosition = UnityEngine_Transform__get_localPosition(v43, 0);
        v47 = current->fields.commonPosition;
        if ( !v47 )
          sub_1C6BC60(v45, v46);
        max_length = v47->max_length;
        if ( !max_length )
          sub_1C6BC68(v45);
        if ( max_length == 1 )
          sub_1C6BC68(v45);
        v50 = v47->m_Items[0];
        v49 = v47->m_Items[1];
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        v54 = UnityEngine_Component__get_transform(v39, 0);
        if ( !v54 )
          sub_1C6BC60(0, v55);
        v95.fields.x = x + (float)v50;
        v95.fields.y = y + (float)v49;
        v95.fields.z = z;
        UnityEngine_Transform__set_localPosition(v54, v95, 0);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v39,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v57 = (StandFigureCollect_o *)sub_1C6BC54(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v57, current, (UIStandFigureR_o *)v39, 0);
      if ( !afterFigureCollectList )
        sub_1C6BC60(v58, v59);
      items = afterFigureCollectList->fields._items;
      v63 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1C6BC60(v58, v59);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v57,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v65[4] = (Il2CppClass *)v57;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v57, v60, v61);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v90,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    v66 = v88;
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_85;
    v67 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
    VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v68);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40907224(
                                  v67,
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
    v70 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_85;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0);
    v71 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v72 = (StandFigureCollect_o *)sub_1C6BC54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v72, 0, v70, 0);
    if ( !v71 )
      goto LABEL_85;
    v75 = v71->fields._items;
    v76 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v71->fields._version;
    if ( !v75 )
      goto LABEL_85;
    v77 = v71->fields._size;
    v66 = isForceNormalFace;
    if ( (unsigned int)v77 >= LODWORD(v75->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v71,
        (Il2CppObject *)v72,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = &v75->obj.klass + v77;
      v71->fields._size = v77 + 1;
      v78[4] = (Il2CppClass *)v72;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v72, v73, v74);
    }
  }
  v79 = 0.0;
  if ( v66
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
    v85 = this->fields.playVoiceList;
    if ( !v85 )
      goto LABEL_85;
    if ( !LODWORD(v85->max_length) )
LABEL_86:
      sub_1C6BC68(Instance);
    v86 = v85->m_Items[0];
    if ( !v86 )
      goto LABEL_85;
    multiFace = v86->fields.multiFace;
    v79 = FadeTime;
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v87 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v87,
                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( multiFace )
      {
        if ( v87 >= *(unsigned int *)((char *)&off_18 + (_QWORD)multiFace) )
          goto LABEL_86;
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace((UIStandFigureR_o *)Instance, multiFace->m_Items[v87], 0.0, 0);
      }
      else
      {
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace_44313536(
          (UIStandFigureR_o *)Instance,
          m_CancellationTokenSource_high,
          masterDataBytes,
          0,
          v79,
          0);
      }
      if ( (__int64)++v87 >= System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                               (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
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

  if ( (byte_4CBA394 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__111_0__);
    sub_1C6BA08(&CombineRootComponent_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CBA394 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    currentSkillId,
    *(const MethodInfo **)&currentSkillLv);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
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
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
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

  if ( (byte_4CBA3A3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3051/*"BaseSvtNodeName"*/);
    byte_4CBA3A3 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1C6BC60(0, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3051/*"BaseSvtNodeName"*/,
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
  if ( (byte_4CBA3A8 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&StringLiteral_8430/*"LimitUpBaseSvtNodeName"*/);
    byte_4CBA3A8 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C6BC60(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8430/*"LimitUpBaseSvtNodeName"*/,
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
  _DWORD *data; // x23
  int32_t v33; // w20
  unsigned int v34; // w22
  int32_t v35; // w0
  const MethodInfo *v36; // x2
  __int64 *v37; // x8
  __int64 *v38; // x8
  System_String_o *v39; // x20
  UnityEngine_Transform_o *v40; // x0
  UIExtrusionLabel_o *v41; // x20
  System_String_o *v42; // x20
  UnityEngine_Transform_o *v43; // x0
  UIExtrusionLabel_o *v44; // x20
  struct UserServantEntity_o *v45; // x20
  struct UserServantEntity_o *v46; // x8
  int32_t Rarity; // w0
  UserServantEntity_o *v48; // x21
  int v49; // w20
  UserServantEntity_o *v50; // x20
  int32_t v51; // w0
  UserServantEntity_o *v52; // x21
  int v53; // w20
  const MethodInfo *v54; // x2
  __int64 *v55; // x20
  __int64 *v56; // x8
  struct ServantVoiceData_array *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x2
  unsigned __int64 v64; // x21
  __int64 v65; // x25
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *resUsrSvtData; // x9
  bool v68; // w2
  CombineResultEffectComponent_o *v69; // x0
  System_String_o *v70; // x1
  bool v71; // w2
  CombineResultEffectComponent_o *v72; // x0
  System_String_o *v73; // x1
  System_String_o *v74; // x20
  UnityEngine_Transform_o *v75; // x0
  UnityEngine_Component_o *v76; // x20
  float Value; // s0
  float v78; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v80; // x20
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 *v83; // x8
  __int64 v84; // x1
  CGThumbnailListItem_o *v85; // x0
  System_String_o *v86; // x20
  UnityEngine_Transform_o *v87; // x0
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x2
  __int64 v91; // x20
  const MethodInfo *v92; // x2
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x2
  Il2CppObject *v95; // x21
  EventDelegate_Callback_o *v96; // x22
  EventDelegate_o *v97; // x20
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x2
  System_Collections_ICollection_o *v106; // x8
  float FadeTime; // s0
  System_Collections_ICollection_o *v108; // x8
  System_Collections_ICollection_c *klass; // x8
  __int64 v110; // [xsp+0h] [xbp-60h] BYREF
  __int64 v111; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA39B & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetCardParam_b__118_0__);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&StringLiteral_4736/*"CostumeName"*/);
    sub_1C6BA08(&StringLiteral_3051/*"BaseSvtNodeName"*/);
    sub_1C6BA08(&StringLiteral_17253/*"bit_result_120"*/);
    sub_1C6BA08(&StringLiteral_17260/*"bit_result_extraskill02"*/);
    sub_1C6BA08(&StringLiteral_17269/*"bit_result_nobledeliverance"*/);
    sub_1C6BA08(&StringLiteral_12311/*"START_ANIMATION"*/);
    sub_1C6BA08(&StringLiteral_17257/*"bit_result_command_card_exceed"*/);
    sub_1C6BA08(&StringLiteral_17266/*"bit_result_limitbreak"*/);
    sub_1C6BA08(&StringLiteral_17261/*"bit_result_friendship_exceed"*/);
    sub_1C6BA08(&StringLiteral_11355/*"ResMaxLvExceedNodeName"*/);
    sub_1C6BA08(&StringLiteral_17274/*"bit_result_skillrank"*/);
    sub_1C6BA08(&StringLiteral_17264/*"bit_result_grail_02"*/);
    sub_1C6BA08(&StringLiteral_17275/*"bit_result_skillup"*/);
    sub_1C6BA08(&StringLiteral_4877/*"CrtMaxLvExceedNodeName"*/);
    sub_1C6BA08(&StringLiteral_17270/*"bit_result_powerup"*/);
    sub_1C6BA08(&StringLiteral_13047/*"StartAnimationName"*/);
    sub_1C6BA08(&StringLiteral_17263/*"bit_result_grail_01"*/);
    sub_1C6BA08(&StringLiteral_17259/*"bit_result_extraskill01"*/);
    sub_1C6BA08(&StringLiteral_17273/*"bit_result_skilldeliverance"*/);
    sub_1C6BA08(&StringLiteral_4878/*"CrtMaxLvNodeName"*/);
    sub_1C6BA08(&StringLiteral_11356/*"ResMaxLvNodeName"*/);
    sub_1C6BA08(&StringLiteral_13192/*"SvtEqCardScale"*/);
    byte_4CBA39B = 1;
  }
  v110 = 0;
  v111 = 0;
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
                                       (System_String_o *)StringLiteral_4878/*"CrtMaxLvNodeName"*/,
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
                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v7 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v111) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v111 + 4, 0);
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
                                       (System_String_o *)StringLiteral_11356/*"ResMaxLvNodeName"*/,
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
                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v10 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v111) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v111, 0);
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
      *(_QWORD *)&v112.fields.currentCryptoKey = v13;
      *(_QWORD *)&v112.fields.fakeValue = v12;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v112, 0);
      v14 = this->fields.baseUsrSvtData;
      if ( !v14 )
        goto LABEL_173;
      v15 = svtResultInfoWindow;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v14->fields.limitCount, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      svtResultInfoWindow = ImageLimitCount__GetImageLimitCount(v15, v16, 0);
      v17 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = svtResultInfoWindow;
      if ( !v17 )
        goto LABEL_173;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17->fields.svtId, 0);
      v18 = this->fields.resUsrSvtData;
      if ( !v18 )
        goto LABEL_173;
      v19 = svtResultInfoWindow;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v18->fields.limitCount, 0);
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
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)LimitUpSvtVoiceList, v28, v29);
        CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v30);
        v31 = 0.0;
        if ( this->fields.isLimitUpSuppression
          || (svtResultInfoWindow = BasicHelper__IsNullOrEmpty(*p_playVoiceList, 0), (svtResultInfoWindow & 1) != 0) )
        {
          data = 0;
          v33 = 0;
          v34 = 0;
        }
        else
        {
          v106 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v106[1].monitor) )
            goto LABEL_174;
          svtResultInfoWindow = (__int64)v106[2].klass;
          if ( !svtResultInfoWindow )
            goto LABEL_173;
          v34 = *(_DWORD *)(svtResultInfoWindow + 28);
          v33 = *(_DWORD *)(svtResultInfoWindow + 56);
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)svtResultInfoWindow, 0);
          v108 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v108[1].monitor) )
LABEL_174:
            sub_1C6BC68(svtResultInfoWindow);
          klass = v108[2].klass;
          if ( !klass )
            goto LABEL_173;
          data = klass->_1.byval_arg.data;
          v31 = FadeTime;
        }
        v35 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( data )
        {
          method = (const MethodInfo *)(&dword_0 + 1);
          if ( v35 != data[6] || v35 <= 0 )
            goto LABEL_136;
        }
        else if ( v35 < 1 )
        {
LABEL_135:
          LODWORD(method) = 1;
          goto LABEL_136;
        }
        v64 = 0;
        if ( v35 <= 1 )
          v65 = 1;
        else
          v65 = (unsigned int)v35;
        while ( 1 )
        {
          svtResultInfoWindow = (__int64)this->fields.currentFigureCollectList;
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = (__int64)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                                           v64,
                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = *(_QWORD *)(svtResultInfoWindow + 24);
          if ( data )
          {
            if ( v64 >= (unsigned int)data[6] )
              goto LABEL_174;
            if ( !svtResultInfoWindow )
              break;
            LODWORD(method) = data[v64 + 8];
          }
          else
          {
            method = (const MethodInfo *)v34;
            if ( !svtResultInfoWindow )
              break;
          }
          UIStandFigureR__SetFace_44313536((UIStandFigureR_o *)svtResultInfoWindow, (int32_t)method, v33, 0, v31, 0);
          if ( v65 == ++v64 )
            goto LABEL_135;
        }
LABEL_173:
        sub_1C6BC60(svtResultInfoWindow, method);
      }
LABEL_71:
      this->fields.isChangeCardImg = 1;
      v57 = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v22);
      this->fields.playVoiceList = v57;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)v57, v58, v59);
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v60);
      CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v61);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, v25, v62);
      CombineResultEffectComponent__setResultSvtGraphCard(this, v25, v63);
      LODWORD(method) = 2;
LABEL_136:
      svtResultInfoWindow = (__int64)CombineResultEffectComponent__GetStartAnimationName(this, (int32_t)method, v36);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v91 = svtResultInfoWindow;
      svtResultInfoWindow = (__int64)this->fields.fsm;
LABEL_167:
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13047/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      *(_QWORD *)(svtResultInfoWindow + 56) = v91;
      v85 = (CGThumbnailListItem_o *)(svtResultInfoWindow + 56);
      LODWORD(v84) = v91;
LABEL_170:
      sub_1C6B9AC(v85, v84, v81, v82);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtResultInfoWindow, (System_String_o *)StringLiteral_12311/*"START_ANIMATION"*/, 0);
      return;
    case 2:
      v68 = 1;
      v69 = this;
      v70 = (System_String_o *)StringLiteral_17275/*"bit_result_skillup"*/;
      goto LABEL_97;
    case 3:
      v38 = &StringLiteral_17273/*"bit_result_skilldeliverance"*/;
      goto LABEL_96;
    case 4:
      v71 = 1;
      v72 = this;
      v73 = (System_String_o *)StringLiteral_17275/*"bit_result_skillup"*/;
      goto LABEL_101;
    case 5:
      v37 = &StringLiteral_17269/*"bit_result_nobledeliverance"*/;
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
                                       (System_String_o *)StringLiteral_3051/*"BaseSvtNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v74 = (System_String_o *)svtResultInfoWindow;
      v75 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v75, v74, 1, 0);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v76 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13192/*"SvtEqCardScale"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)svtResultInfoWindow, 0);
      if ( !v76 )
        goto LABEL_173;
      v78 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v76, 0);
      svtResultInfoWindow = (__int64)CharaGraphManager__CreateTexturePrefab_40890564(
                                       gameObject,
                                       this->fields.resUsrSvtData,
                                       10,
                                       0,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v80 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v113.fields.z = 0.0;
      v113.fields.x = -50.0;
      v113.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtResultInfoWindow, v113, 0);
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(v80, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v114.fields.x = v78;
      v114.fields.y = v78;
      v114.fields.z = v78;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)svtResultInfoWindow, v114, 0);
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
      v38 = &StringLiteral_17274/*"bit_result_skillrank"*/;
LABEL_96:
      v70 = (System_String_o *)*v38;
      v69 = this;
      v68 = 0;
LABEL_97:
      CombineResultEffectComponent__SetCardParam_Skill(v69, v70, v68, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v37 = &StringLiteral_17274/*"bit_result_skillrank"*/;
LABEL_100:
      v73 = (System_String_o *)*v37;
      v72 = this;
      v71 = 0;
LABEL_101:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v72, v73, v71, v2);
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
                                       (System_String_o *)StringLiteral_13047/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v83 = &StringLiteral_17275/*"bit_result_skillup"*/;
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
                                       (System_String_o *)StringLiteral_13047/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v83 = &StringLiteral_17270/*"bit_result_powerup"*/;
LABEL_127:
      v84 = *v83;
      *(_QWORD *)(svtResultInfoWindow + 56) = *v83;
      v85 = (CGThumbnailListItem_o *)(svtResultInfoWindow + 56);
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
                                       (System_String_o *)StringLiteral_4877/*"CrtMaxLvExceedNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v39 = (System_String_o *)svtResultInfoWindow;
      v40 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v40, v39, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v41 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v110) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v110 + 4, 0);
      if ( !v41 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v41, (System_String_o *)svtResultInfoWindow, 0);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_11355/*"ResMaxLvExceedNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v42 = (System_String_o *)svtResultInfoWindow;
      v43 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v43, v42, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v44 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v110) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v110, 0);
      if ( !v44 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v44, (System_String_o *)svtResultInfoWindow, 0);
      v45 = this->fields.baseUsrSvtData;
      if ( !v45 )
        goto LABEL_173;
      if ( v45->fields.exceedCount )
        goto LABEL_55;
      v46 = this->fields.resUsrSvtData;
      if ( !v46 )
        goto LABEL_173;
      if ( v46->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_55:
      Rarity = UserServantEntity__GetRarity(v45, 0, 0);
      svtResultInfoWindow = UserServantEntity__GetFrameType(v45, Rarity, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v48 = this->fields.resUsrSvtData;
      v49 = svtResultInfoWindow;
      svtResultInfoWindow = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      if ( !v48 )
        goto LABEL_173;
      svtResultInfoWindow = UserServantEntity__GetFrameType(v48, svtResultInfoWindow, 0);
      if ( v49 != (_DWORD)svtResultInfoWindow )
        this->fields.isChangeCardImg = 1;
      v50 = this->fields.baseUsrSvtData;
      if ( !v50 )
        goto LABEL_173;
      v51 = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      svtResultInfoWindow = UserServantEntity__GetRarityIcon(v50, v51, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v52 = this->fields.resUsrSvtData;
      v53 = svtResultInfoWindow;
      svtResultInfoWindow = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0);
      if ( !v52 )
        goto LABEL_173;
      if ( v53 != UserServantEntity__GetRarityIcon(v52, svtResultInfoWindow, 0) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        v55 = &StringLiteral_17266/*"bit_result_limitbreak"*/;
      }
      else
      {
        if ( !this->fields.isChangeCardImg )
        {
          v55 = &StringLiteral_17263/*"bit_result_grail_01"*/;
LABEL_152:
          svtResultInfoWindow = (__int64)this->fields.fsm;
          if ( svtResultInfoWindow )
          {
            v91 = *v55;
            goto LABEL_167;
          }
          goto LABEL_173;
        }
        v55 = &StringLiteral_17264/*"bit_result_grail_02"*/;
      }
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v54);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v105);
      goto LABEL_152;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v56 = &StringLiteral_17261/*"bit_result_friendship_exceed"*/;
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
                                       (System_String_o *)StringLiteral_4736/*"CostumeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v86 = (System_String_o *)svtResultInfoWindow;
      v87 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v87, v86, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UILabel__set_text((UILabel_o *)svtResultInfoWindow, this->fields.costumeName, 0);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v88);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v89);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v90);
      goto LABEL_135;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v56 = &StringLiteral_17257/*"bit_result_command_card_exceed"*/;
      goto LABEL_166;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v92);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v93);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v94);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v56 = (__int64 *)&StringLiteral_17253/*"bit_result_120"*/;
LABEL_166:
      v91 = *v56;
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
          v95 = UnityEngine_GameObject__AddComponent_object_(
                  (UnityEngine_GameObject_o *)svtResultInfoWindow,
                  (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
          v96 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v96,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_b__118_0__,
            0);
          v97 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
          EventDelegate___ctor_49576072(v97, v96, 0);
          if ( v95 )
          {
            svtResultInfoWindow = (__int64)v95[2].klass;
            if ( svtResultInfoWindow )
            {
              v100 = *(_QWORD *)(svtResultInfoWindow + 16);
              v101 = Method_System_Collections_Generic_List_EventDelegate__Add__;
              ++*(_DWORD *)(svtResultInfoWindow + 28);
              if ( v100 )
              {
                v102 = *(int *)(svtResultInfoWindow + 24);
                if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                    (Il2CppObject *)v97,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                }
                else
                {
                  v103 = v100 + 8 * v102;
                  *(_DWORD *)(svtResultInfoWindow + 24) = v102 + 1;
                  *(_QWORD *)(v103 + 32) = v97;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v103 + 32), (int32_t)v97, v98, v99);
                }
                CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v104);
                svtResultInfoWindow = (__int64)this->fields.fsm;
                v56 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17260/*"bit_result_extraskill02"*/ : &StringLiteral_17259/*"bit_result_extraskill01"*/);
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

  if ( (byte_4CBA39E & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__121_0__);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&StringLiteral_12311/*"START_ANIMATION"*/);
    sub_1C6BA08(&StringLiteral_13047/*"StartAnimationName"*/);
    byte_4CBA39E = 1;
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
           (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v10 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__121_0__,
      0);
    v11 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
    EventDelegate___ctor_49576072(v11, v10, 0);
    if ( !v9
      || (effect = (int *)v9[2].klass) == 0
      || (v14 = *((_QWORD *)effect + 2),
          v15 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v14) )
    {
LABEL_17:
      sub_1C6BC60(effect, v7);
    }
    v16 = effect[6];
    if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v11,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = v14 + 8 * v16;
      effect[6] = v16 + 1;
      *(_QWORD *)(v17 + 32) = v11;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v11, v12, v13);
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
                    (System_String_o *)StringLiteral_13047/*"StartAnimationName"*/,
                    0);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(effect + 14), (int32_t)startName, v18, v19);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12311/*"START_ANIMATION"*/, 0);
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

  if ( (byte_4CBA39F & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__122_0__);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&StringLiteral_12311/*"START_ANIMATION"*/);
    sub_1C6BA08(&StringLiteral_13047/*"StartAnimationName"*/);
    byte_4CBA39F = 1;
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
           (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__122_0__,
      0);
    v10 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
    EventDelegate___ctor_49576072(v10, v9, 0);
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
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = v13 + 8 * v15;
      effect[6] = v15 + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
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
                          (System_String_o *)StringLiteral_13047/*"StartAnimationName"*/,
                          0)) == 0
    || (*((_QWORD *)effect + 7) = startName,
        sub_1C6B9AC((CGThumbnailListItem_o *)(effect + 14), (int32_t)startName, v17, v18),
        (effect = (int *)this->fields.fsm) == 0) )
  {
LABEL_20:
    sub_1C6BC60(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12311/*"START_ANIMATION"*/, 0);
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

  if ( (byte_4CBA397 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetCombineLimit_b__114_0__);
    sub_1C6BA08(&CombineRootComponent_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA397 = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)callback,
    (const MethodInfo *)autoFadeout);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C6BC60(gameObject, v14);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v15 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v15 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v15->static_fields->EXCEED_ASSET_PATH;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  Il2CppObject *Object_object__51495936; // x20
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_Transform_o *v20; // x21

  if ( (byte_4CBA391 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&CombineRootComponent_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17257/*"bit_result_command_card_exceed"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    sub_1C6BA08(&StringLiteral_12318/*"START_COMMAND_CARD_EXCEED_EFFECT"*/);
    byte_4CBA391 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    cardIndex,
    *(const MethodInfo **)&exceedCount);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
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
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17257/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51495936,
                                     (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v19 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v20 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CAFC0E )
  {
    effectAssetData = (AssetData_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v19, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_18:
    sub_1C6BC60(effectAssetData, v16);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12318/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0);
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
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  System_Action_o *v25; // x20
  CombineResultEffectComponent_o *v26; // x0
  const MethodInfo *v27; // x2

  if ( (byte_4CBA38B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__102_0__);
    sub_1C6BA08(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    byte_4CBA38B = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    costumeId,
    (const MethodInfo *)costumeName);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.costumeName, (int32_t)costumeName, v13, v14);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  if ( gender >= 1 )
    this->fields.genderType = gender;
  v19 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C6BC54(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v19, v20);
  this->fields.costumeSkillInfoManager = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v19, v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v24);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v25 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__102_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v26, v25, v27);
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
  Il2CppObject *Object_object__51495936; // x20
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Transform_o *v16; // x21

  if ( (byte_4CBA38F & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&CombineRootComponent_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17261/*"bit_result_friendship_exceed"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    sub_1C6BA08(&StringLiteral_12326/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4CBA38F = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)userSvtData, (int32_t)callback, method);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v7, v8);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
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
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17261/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51495936,
                                     (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v15 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v16 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CAFC0E )
  {
    effectAssetData = (AssetData_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v15, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_17:
    sub_1C6BC60(effectAssetData, v11);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12326/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
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

  if ( (byte_4CBA390 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__107_0__);
    sub_1C6BA08(&CombineRootComponent_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA390 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    oldFriendShipRank,
    (const MethodInfo *)callback);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v14);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v15 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v15 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v15->static_fields->COMBINE_ASSET_PATH;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
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

  if ( (byte_4CBA385 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12325/*"START_FRIENDSHIPUP_EFFECT"*/);
    byte_4CBA385 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    oldFriendShipRank,
    (const MethodInfo *)callback);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_1C6BC60(gameObject, v14);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12325/*"START_FRIENDSHIPUP_EFFECT"*/, 0);
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
  ServantScriptEntity_o *Entity_43001364; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ServantVoiceData_array *v15; // x1
  CGThumbnailListItem_o *p_playVoiceList; // x0
  const MethodInfo *v17; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v19; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  struct UserServantEntity_o *v23; // x8
  CombineResultEffectComponent_o *v24; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  const MethodInfo *v29; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v31; // x21
  const MethodInfo *v32; // x2
  struct UserServantEntity_o *v33; // x8
  CombineResultEffectComponent_o *v34; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_o *v38; // x0
  const MethodInfo *v39; // x2
  ServantVoiceEntity_o *v40; // x20
  UserServantEntity_o *v41; // x21
  ServantVoiceData_array *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  ServantVoiceData_array *v45; // x0
  int v46; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v2 = this;
  if ( (byte_4CBA3A5 & 1) == 0 )
  {
    sub_1C6BA08(&CombineResultFormManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&string___TypeInfo);
    byte_4CBA3A5 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v5;
  *(_QWORD *)&v47.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v47, 0);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_48;
  v6 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0);
  Id = ServantScriptMaster__getId(v6, FigureImageLimitCount, 0);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_43001364 = ServantScriptMaster__GetEntity_43001364((ServantScriptMaster_o *)this, Id, 0);
  if ( Entity_43001364 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_43001364, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v2->fields.combineVoiceId;
      method = (const MethodInfo *)v2->fields.baseUsrSvtData;
LABEL_19:
      v12 = ServantVoiceEntity__lotteryLevelUpVoice_43046336(
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
      v46 = *(_DWORD *)&method[2].slot;
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
        if ( System_Int32__Equals_65475116((int32_t)&v46, resUsrSvtData->fields.lv, 0) )
        {
          v21 = v2;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v21, form, 1, v17);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1C6BAB0(string___TypeInfo, 1);
        v23 = v2->fields.baseUsrSvtData;
        if ( v23 )
        {
          v24 = this;
          p_svtId = &v23->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v48.fields.fakeValue = 0;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v48, v22);
          if ( v24 )
          {
            if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v24->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v24->fields.svtResultInfoWindow, (int32_t)this, v26, v27);
            v28 = System_String__Concat_64007324((System_String_array *)v24, 0);
            if ( UnityEngine_PlayerPrefs__GetInt_71617412(v28, 0) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v31 = v2->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v12 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v31, v29);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1C6BAB0(string___TypeInfo, 1);
            v33 = v2->fields.baseUsrSvtData;
            if ( v33 )
            {
              v34 = this;
              v35 = &v33->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v49.fields.currentCryptoKey = v35;
              *(_QWORD *)&v49.fields.fakeValue = 0;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v49, v32);
              if ( v34 )
              {
                if ( !LODWORD(v34->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v34->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1C6B9AC((CGThumbnailListItem_o *)&v34->fields.svtResultInfoWindow, (int32_t)this, v36, v37);
                v38 = System_String__Concat_64007324((System_String_array *)v34, 0);
                UnityEngine_PlayerPrefs__SetInt(v38, 1, 0);
                v40 = v2->fields.svtVoiceEntity;
                v41 = v2->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v42 = CombineResultFormManager__lotteryCombineResultInit(v40, v41, v39);
                v2->fields.playVoiceList = v42;
                sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.playVoiceList, (int32_t)v42, v43, v44);
                playVoiceList = v2->fields.playVoiceList;
                if ( playVoiceList )
                {
LABEL_22:
                  if ( LODWORD(playVoiceList->max_length) )
                  {
                    v19 = playVoiceList->m_Items[0];
                    if ( !v19 )
                      goto LABEL_48;
                    form = v19->fields.form;
                    v21 = v2;
                    goto LABEL_25;
                  }
LABEL_49:
                  sub_1C6BC68(this);
                }
                this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v45 = ServantVoiceEntity__lotteryLevelUpVoice_43046336(
                        (ServantVoiceEntity_o *)this,
                        v2->fields.baseUsrSvtData,
                        v2->fields.combineVoiceId,
                        0);
                LODWORD(v15) = (_DWORD)v45;
                v2->fields.playVoiceList = v45;
                p_playVoiceList = (CGThumbnailListItem_o *)&v2->fields.playVoiceList;
LABEL_21:
                sub_1C6B9AC(p_playVoiceList, (int32_t)v15, v13, v14);
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
    sub_1C6BC60(this, method);
  }
}


void CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  DataManager_o *LimitUpSvtVoiceList; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  __int64 v8; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  struct UserServantEntity_o *v12; // x8
  int32_t v13; // w21
  int32_t v14; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  CombineResultEffectComponent_o *ImageLimitCount; // x0
  const MethodInfo *v17; // x3
  int32_t ResolveImageLimitCount; // w0
  const MethodInfo *v19; // x5
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4CBA3AB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_8431/*"LimitUpResSvtNodeName"*/);
    byte_4CBA3AB = 1;
  }
  entity = 0;
  LimitUpSvtVoiceList = (DataManager_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v7 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.m_CancellationTokenSource) )
      sub_1C6BC68(LimitUpSvtVoiceList);
    v8 = *(_QWORD *)&LimitUpSvtVoiceList->fields._DispLog;
    if ( !v8 )
      goto LABEL_21;
    v7 = *(_DWORD *)(v8 + 28);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_21;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v10;
  LimitUpSvtVoiceList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v21, 0);
  v12 = this->fields.resUsrSvtData;
  if ( !v12 )
    goto LABEL_21;
  v13 = (int)LimitUpSvtVoiceList;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v12->fields.limitCount, 0);
  LimitUpSvtVoiceList = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = (DataManager_o *)DataManager__GetMasterData_object_(
                                           LimitUpSvtVoiceList,
                                           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v13, v14, 0) )
    goto LABEL_18;
  LimitUpSvtVoiceList = (DataManager_o *)entity;
  if ( !entity )
LABEL_21:
    sub_1C6BC60(LimitUpSvtVoiceList, v6);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v14 = LimitCountUpResultServantLimitCount;
LABEL_18:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetImageLimitCount(v13, v14, 0);
  ResolveImageLimitCount = CombineResultEffectComponent__GetResolveImageLimitCount(
                             ImageLimitCount,
                             (int32_t)ImageLimitCount,
                             this->fields.resUsrSvtData,
                             v17);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v13,
    ResolveImageLimitCount,
    v7,
    (System_String_o *)StringLiteral_8431/*"LimitUpResSvtNodeName"*/,
    v19);
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
  if ( (byte_4CBA389 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__99_0__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA389 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    *(const MethodInfo **)&baseCollectionLimitCnt);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resSvtNameData, (int32_t)servantChange, v19, v20);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.limitUpPlayVoiceLabel, (int32_t)playVoiceLabel, v25, v26);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.limitUpRewardGiftDataList, (int32_t)rewardGiftDataList, v27, v28);
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
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v41, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v35 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v42.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue,
        v36 = (ServantLimitImageMaster_o *)MasterData_object,
        *(_QWORD *)&v42.fields.currentCryptoKey = v35,
        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                   v42,
                                                   0),
        !v36) )
  {
LABEL_12:
    sub_1C6BC60(gameObject, v30);
  }
  this->fields.isLimitUpSuppression = ServantLimitImageMaster__IsServantLimitCountSeal(
                                        v36,
                                        (int32_t)gameObject,
                                        v33 + 1,
                                        0);
  v37 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
  __int64 Int_71617412; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1
  UserServantEntity_o *v27; // x20
  CombineRootComponent_c *v28; // x0
  Il2CppObject *Object_object__51495936; // x20
  UnityEngine_GameObject_o *v30; // x20
  UnityEngine_Transform_o *v31; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4CBA38D & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&CombineResultFormManager_TypeInfo);
    sub_1C6BA08(&CombineRootComponent_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_12330/*"START_LVEXCEED_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_17262/*"bit_result_grail"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    byte_4CBA38D = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v8, v9);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  Int_71617412 = sub_1C6BAB0(string___TypeInfo, 1);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v15 = Int_71617412;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v32.fields.fakeValue = 0;
  Int_71617412 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v32, v14);
  if ( !v15 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v15 + 32) = Int_71617412;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 32), Int_71617412, v17, v18);
  v19 = System_String__Concat_64007324((System_String_array *)v15, 0);
  Int_71617412 = UnityEngine_PlayerPrefs__GetInt_71617412(v19, 0);
  if ( (_DWORD)Int_71617412 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_71617412 = sub_1C6BAB0(string___TypeInfo, 1);
      if ( *p_baseUsrSvtData )
      {
        v21 = Int_71617412;
        v22 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v33.fields.currentCryptoKey = v22;
        *(_QWORD *)&v33.fields.fakeValue = 0;
        Int_71617412 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v33, v20);
        if ( v21 )
        {
          if ( *(_DWORD *)(v21 + 24) )
          {
            *(_QWORD *)(v21 + 32) = Int_71617412;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 32), Int_71617412, v23, v24);
            v25 = System_String__Concat_64007324((System_String_array *)v21, 0);
            UnityEngine_PlayerPrefs__SetInt(v25, 0, 0);
            v27 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v27, v26);
            goto LABEL_19;
          }
LABEL_34:
          sub_1C6BC68(Int_71617412);
        }
      }
LABEL_33:
      sub_1C6BC60(Int_71617412, v13);
    }
  }
LABEL_19:
  v28 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v28 = CombineRootComponent_TypeInfo;
  }
  Int_71617412 = (__int64)v28->static_fields->effectAssetData;
  if ( !Int_71617412 )
    goto LABEL_33;
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              (AssetData_o *)Int_71617412,
                              (System_String_o *)StringLiteral_17262/*"bit_result_grail"*/,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_71617412 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__51495936,
                            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_71617412 )
    goto LABEL_33;
  v30 = (UnityEngine_GameObject_o *)Int_71617412;
  Int_71617412 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_71617412, 0);
  v31 = (UnityEngine_Transform_o *)Int_71617412;
  if ( !byte_4CAFC0E )
  {
    Int_71617412 = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v31 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Int_71617412 = (__int64)this->fields.fsm;
  if ( !Int_71617412 )
    goto LABEL_33;
  Int_71617412 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_71617412, 0);
  if ( !Int_71617412 )
    goto LABEL_33;
  Int_71617412 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_71617412,
                            (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                            0);
  if ( !Int_71617412 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_71617412, v30, 0);
  Int_71617412 = (__int64)this->fields.fsm;
  if ( !Int_71617412 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_71617412, (System_String_o *)StringLiteral_12330/*"START_LVEXCEED_EFFECT"*/, 0);
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

  if ( (byte_4CBA38E & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__105_0__);
    sub_1C6BA08(&CombineRootComponent_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA38E = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v13 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v13 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v13->static_fields->EXCEED_ASSET_PATH;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
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

  if ( (byte_4CBA38A & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_11357/*"ResNameNodeName"*/);
    sub_1C6BA08(&StringLiteral_12331/*"START_NAME_REVEAL_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_9384/*"NameRevealCrossFade"*/);
    sub_1C6BA08(&StringLiteral_4879/*"CrtNameNodeName"*/);
    sub_1C6BA08(&StringLiteral_17267/*"bit_result_name_reveal"*/);
    sub_1C6BA08(&StringLiteral_13047/*"StartAnimationName"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_9385/*"NameRevealParticleNodeName"*/);
    byte_4CBA38A = 1;
  }
  v39 = 0;
  m_ParticleSystem = 0;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (int32_t)after,
    (const MethodInfo *)callback);
  this->fields.resSvtNameData = after;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resSvtNameData, (int32_t)after, v10, v11);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12331/*"START_NAME_REVEAL_EFFECT"*/, 0);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4879/*"CrtNameNodeName"*/,
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
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11357/*"ResNameNodeName"*/,
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
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_9385/*"NameRevealParticleNodeName"*/,
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
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
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
                               (System_String_o *)StringLiteral_13047/*"StartAnimationName"*/,
                               0)) == 0 )
  {
LABEL_40:
    sub_1C6BC60(gameObject, v15);
  }
  v36 = StringLiteral_17267/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17267/*"bit_result_name_reveal"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(gameObject + 56), v36, v34, v35);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9384/*"NameRevealCrossFade"*/,
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
  __int64 v41; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v43; // x8
  __int64 v44; // x8
  int32_t TransformCount; // w0
  int32_t v46; // w25
  int32_t i; // w26
  TerminalPramsManager_c *v48; // x0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v49; // x28
  int32_t id; // w29
  int32_t v51; // w3
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v52; // x0
  int32_t v53; // w1
  int32_t v54; // w2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v55; // x28
  int32_t v56; // w29
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v57; // x28
  int32_t v58; // w29
  __int64 v59; // x26
  struct System_Int32_array *v60; // x8
  struct System_Int32_array *v61; // x8
  __int64 v62; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  TreasureDvcInfo_o *v65; // [xsp+0h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4CBA384 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12332/*"START_NOBLEUP_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_13530/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/);
    sub_1C6BA08(&StringLiteral_13531/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/);
    byte_4CBA384 = 1;
  }
  v65 = 0;
  tdInfo = 0;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    *(const MethodInfo **)&targetId);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v23 = Master_object;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v25;
  *(_QWORD *)&v67.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v67, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                        usrSvtData->fields.limitCount,
                                                        0);
  if ( !v23 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v23, v26, (int32_t)Master_object, 0, 0, 0, 0);
  v28 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1C6BC54(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v28, 0);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v28;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.npInfoAddManager, (int32_t)v28, v30, v31);
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
      v32 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v35 = (ServantTreasureDeviceAddMaster_o *)v32;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v68.fields.currentCryptoKey = v34;
      *(_QWORD *)&v68.fields.fakeValue = v33;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v68, 0);
      v37 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v69.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v38 = v36;
      *(_QWORD *)&v69.fields.currentCryptoKey = v37;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v69, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CB02AF )
      {
        sub_1C6BA08(&TerminalPramsManager_TypeInfo);
        byte_4CB02AF = 1;
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
                                                            (const MethodInfo_315B034 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        if ( EnableEntityBeforeClearQuest )
        {
          v41 = 8;
          while ( 1 )
          {
            treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
            if ( !treasureDeviceIds )
              break;
            if ( v41 - 8 >= (unsigned __int64)LODWORD(treasureDeviceIds->max_length) )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&treasureDeviceIds->obj.klass + v41),
              targetLv,
              0,
              0);
            v43 = EnableEntity->fields.treasureDeviceIds;
            if ( !v43 )
              break;
            if ( v41 - 8 >= (unsigned __int64)LODWORD(v43->max_length) )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&v43->obj.klass + v41),
              targetLv,
              0,
              0);
            Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                  (const MethodInfo_315B034 *)Method_System_Linq_Enumerable_Count_int___);
            v44 = v41 - 7;
            ++v41;
            if ( v44 >= (int)Master_object )
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
                                                            (const MethodInfo_315B034 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        v59 = 8;
        while ( 1 )
        {
          v60 = EnableEntity->fields.treasureDeviceIds;
          if ( !v60 )
            break;
          if ( v59 - 8 >= (unsigned __int64)LODWORD(v60->max_length) )
            goto LABEL_73;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v60->obj.klass + v59),
            targetLvOld,
            0,
            0);
          v61 = EnableEntity->fields.treasureDeviceIds;
          if ( !v61 )
            break;
          if ( v59 - 8 >= (unsigned __int64)LODWORD(v61->max_length) )
LABEL_73:
            sub_1C6BC68(Master_object);
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v61->obj.klass + v59),
            targetLv,
            0,
            0);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_315B034 *)Method_System_Linq_Enumerable_Count_int___);
          v62 = v59 - 7;
          ++v59;
          if ( v62 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1C6BC60(Master_object, v22);
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
      v46 = TransformCount;
      for ( i = 0; v46 != i; ++i )
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
          if ( !byte_4CB02AF )
          {
            sub_1C6BA08(&TerminalPramsManager_TypeInfo);
            byte_4CB02AF = 1;
          }
          v48 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v48 = TerminalPramsManager_TypeInfo;
          }
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                                usrSvtData,
                                                                &v65,
                                                                i,
                                                                v48->static_fields->_QuestId_k__BackingField,
                                                                -1,
                                                                0,
                                                                0);
          if ( !v65 )
            goto LABEL_72;
          v49 = *p_npInfoAddManager;
          id = v65->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0);
          if ( !v49 )
            goto LABEL_72;
          v51 = (int)Master_object;
          v52 = v49;
          v53 = id;
          v54 = targetLv;
        }
        else
        {
          if ( !tdInfo )
            goto LABEL_72;
          v55 = *p_npInfoAddManager;
          v56 = tdInfo->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0);
          if ( !v55 )
            goto LABEL_72;
          v51 = (int)Master_object;
          v52 = v55;
          v53 = v56;
          v54 = targetLvOld;
        }
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(v52, v53, v54, v51, 0);
        if ( !tdInfo )
          goto LABEL_72;
        v57 = *p_npInfoAddManager;
        v58 = tdInfo->fields.id;
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(usrSvtData, i, 0);
        if ( !v57 )
          goto LABEL_72;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          v57,
          v58,
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
                                                        (System_String_o *)StringLiteral_13530/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13531/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12332/*"START_NOBLEUP_EFFECT"*/, 0);
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

  if ( (byte_4CBA38C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12336/*"START_POWERUP_EFFECT"*/);
    byte_4CBA38C = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_1C6BC60(gameObject, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12336/*"START_POWERUP_EFFECT"*/, 0);
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

  if ( (byte_4CBA39D & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA39D = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C6BC60(Instance, v5);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( (byte_4CBA39C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&UserServantEntity_TypeInfo);
    byte_4CBA39C = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v59, 0) < 1 )
    {
      v41 = v2->fields.baseUsrSvtData;
      v42 = (UserServantEntity_o *)sub_1C6BC54(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43400888(v42, v41, 0);
      v2->fields.resUsrSvtData = v42;
      p_resUsrSvtData = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
      sub_1C6B9AC((CGThumbnailListItem_o *)p_resUsrSvtData, (int32_t)v42, v44, v45);
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
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v64, 0);
        v46[6] = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v49 + 1, 0);
        v50 = *p_resUsrSvtData;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( *p_resUsrSvtData )
        {
          v51 = (ServantLimitImageMaster_o *)this;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                     (*p_resUsrSvtData)[5],
                                                     0);
          v52 = *p_resUsrSvtData;
          if ( *p_resUsrSvtData )
          {
            v53 = (int)this;
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v52[6], 0);
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
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(
                                                     &v58,
                                                     0);
          if ( v7 )
          {
            v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v7,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(
                                                         &v57,
                                                         0);
              if ( !v11 )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v11,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v12 = v2->fields.baseUsrSvtData;
                v13 = (UserServantEntity_o *)sub_1C6BC54(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_43400888(v13, v12, 0);
                v2->fields.resUsrSvtData = v13;
                sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.resUsrSvtData, (int32_t)v13, v14, v15);
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
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                         v62,
                                                         0);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v20 = (UserServantEntity_o *)sub_1C6BC54(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_43400888(v20, resUsrSvtData, 0);
                v2->fields.resUsrSvtData = v20;
                sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.resUsrSvtData, (int32_t)v20, v21, v22);
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
                  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v63, 0);
                  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v27 + 1, 0);
                  method = *(const MethodInfo **)&v28.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v28.fields.currentCryptoKey;
                  if ( v24 )
                  {
                    v24[6] = v28;
                    v29 = *v8;
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    if ( *v8 )
                    {
                      v30 = (ServantLimitImageMaster_o *)this;
                      this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                 (*v8)[5],
                                                                 0);
                      if ( *v8 )
                      {
                        v31 = (int)this;
                        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*v8)[6], 0);
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
                              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( this )
                              {
                                this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)this,
                                                                           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                if ( *v8 )
                                {
                                  v37 = (ServantLimitMaster_o *)this;
                                  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                             (*v8)[5],
                                                                             0);
                                  if ( *v8 )
                                  {
                                    v38 = (int)this;
                                    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
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
    sub_1C6BC60(this, method);
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

  if ( (byte_4CBA392 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__getEntityList__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__109_0__);
    sub_1C6BA08(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_12338/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_17278/*"bit_result_ultimate_anim"*/);
    sub_1C6BA08(&StringLiteral_13047/*"StartAnimationName"*/);
    byte_4CBA392 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    phase,
    (const MethodInfo *)msgCallBack);
  this->fields.messageCallback = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.messageCallback, 0, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  v15 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 5);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v15 )
    goto LABEL_57;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v15,
         (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v15,
                   v17,
                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
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
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v19;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
            }
          }
        }
      }
      if ( ++v17 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v15,
                      (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) )
        goto LABEL_20;
    }
LABEL_57:
    sub_1C6BC60(Instance, v14);
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
    v27 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      v27,
      v28,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__109_0__,
      0);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v27;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__109_0, (int32_t)v27, v30, v31);
  }
  if ( !v16 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_58729528(
    v16,
    v27,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v32 = v16->fields._size;
  if ( v32 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v16,
                 0,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
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
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
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
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
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
    if ( !byte_4CB01CE )
    {
      sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
      byte_4CB01CE = 1;
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.messageCallback, (int32_t)msgCallBack, v35, v36);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_57;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_13047/*"StartAnimationName"*/,
                 0);
    if ( !Instance )
      goto LABEL_57;
    v39 = StringLiteral_17278/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17278/*"bit_result_ultimate_anim"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)((char *)Instance + 56), v39, v37, v38);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12338/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
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

  if ( (byte_4CBA393 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&StringLiteral_12338/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_17278/*"bit_result_ultimate_anim"*/);
    sub_1C6BA08(&StringLiteral_13047/*"StartAnimationName"*/);
    byte_4CBA393 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
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
                          (System_String_o *)StringLiteral_13047/*"StartAnimationName"*/,
                          0)) == 0
      || (v14 = StringLiteral_17278/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17278/*"bit_result_ultimate_anim"*/,
          sub_1C6B9AC((CGThumbnailListItem_o *)(fsm + 56), v14, v12, v13),
          (fsm = (char *)this->fields.fsm) == 0) )
    {
      sub_1C6BC60(fsm, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12338/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
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

  if ( (byte_4CBA383 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12343/*"START_SKILLUP_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_12224/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/);
    sub_1C6BA08(&StringLiteral_12225/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/);
    byte_4CBA383 = 1;
  }
  svtSkillAddEnt = 0;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.kind = kind;
  sub_1C6B9AC(
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
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
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12224/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)baseUsrSvtData, 0),
        unSummonDetail = this->fields.unSummonDetail,
        baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12225/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)baseUsrSvtData, 0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.fsm) == 0) )
  {
LABEL_18:
    sub_1C6BC60(baseUsrSvtData, v20);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)baseUsrSvtData, (System_String_o *)StringLiteral_12343/*"START_SKILLUP_EFFECT"*/, 0);
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

  if ( (byte_4CBA3B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4CBA3B8 = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_44313536(Item, faceType, formId, 0, fadeTime, 0);
          return;
        }
      }
    }
LABEL_25:
    sub_1C6BC60(Item, v14);
  }
  v15 = this->fields.playVoiceList;
  if ( !v15 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= LODWORD(v15->max_length) )
LABEL_23:
    sub_1C6BC68(Item);
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
                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_44313536(Item, v22, v23, 0, fadeTime, 0);
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

  if ( (byte_4CBA386 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__96_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA386 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    infoIdx,
    (const MethodInfo *)returnQpNum);
  this->fields.baseUsrSvtData = baseData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v17, v18);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v19, v20);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.combineVoiceId, 0, v21, v22);
  this->fields.autoFadeout = 0;
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C6BC60(gameObject, v26);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__96_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v28, v27, v29);
}


void CombineResultEffectComponent__SetSvtCombineInfo_48879220(
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

  if ( (byte_4CBA387 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__97_0__);
    byte_4CBA387 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (const MethodInfo *)baseData);
  this->fields.resUsrSvtData = resData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v19, v20);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_6;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.combineVoiceId, (int32_t)voiceId, v23, v24);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v25, v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_6:
    sub_1C6BC60(gameObject, v22);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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

  if ( (byte_4CBA388 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__98_0__);
    byte_4CBA388 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    infoIdx,
    *(const MethodInfo **)&normalExp);
  this->fields.baseUsrSvtData = baseData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v19, v20);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v26);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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

  if ( (byte_4CBA3D5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__183_0__);
    sub_1C6BA08(&StringLiteral_3827/*"COSTUME_CHANGED_MSG"*/);
    byte_4CBA3D5 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        costumeName = this->fields.costumeName,
        v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__183_0__,
          0),
        !skillResultInfoWindow) )
  {
    sub_1C6BC60(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenCostumeChangeMessage(
    skillResultInfoWindow,
    costumeName,
    (System_String_o *)StringLiteral_3827/*"COSTUME_CHANGED_MSG"*/,
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

  if ( (byte_4CBA3C1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__158_0__);
    byte_4CBA3C1 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__158_0__,
          0),
        !limitUpResultCheck) )
  {
    sub_1C6BC60(bgCollider, method);
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
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x21
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x23
  int32_t kind; // w25
  System_Action_o *v12; // x24
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CBA3BF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__156_0__);
    byte_4CBA3BF = 1;
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
    sub_1C6BC68(bgCollider);
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
  v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__156_0__, 0);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1C6BC60(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    index,
    titleText,
    kind == 8,
    v12,
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
  int32_t v9; // w23
  int32_t v10; // w24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v12; // w21
  int32_t v13; // w22
  System_String_o *costumeName; // x25
  System_Action_o *v15; // x26

  if ( (byte_4CBA3C0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__157_0__);
    byte_4CBA3C0 = 1;
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
  v9 = *((_DWORD *)bgCollider + 4);
  v10 = *((_DWORD *)bgCollider + 5);
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v12 = v8[4];
  v13 = v8[5];
  costumeName = this->fields.costumeName;
  v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__157_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1C6BC60(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(skillResultInfoWindow, v12, v13, v9, v10, costumeName, v15, 0);
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

  if ( (byte_4CBA3BE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__155_0__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CBA3BE = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v10, 0);
  v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__155_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1C6BC60(bgCollider, method);
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

  if ( (byte_4CBA3C2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__160_0__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA3C2 = 1;
  }
  v16 = 0;
  tdInfo = 0;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v14, 0);
  if ( !v6 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v6,
             bgCollider,
             (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
        v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__160_0__,
          0),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1C6BC60(bgCollider, method);
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

  if ( (byte_4CBA3B9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_PlayVoice__);
    sub_1C6BA08(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CBA3B9 = 1;
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
      IsNullOrEmpty = (VoiceMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_VoiceMaster___);
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
      IsNullOrEmpty = (VoiceMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v22, 0);
      v13 = this->fields.playVoiceList;
      if ( !v13 )
        goto LABEL_24;
      v14 = this->fields.playCnt;
      if ( (unsigned int)v14 >= LODWORD(v13->max_length) )
LABEL_25:
        sub_1C6BC68(IsNullOrEmpty);
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
        v20 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_CombineResultEffectComponent_PlayVoice__, 0);
        CombineResultEffectComponent__PlayPerformance(this, v19, v20, v21);
        return;
      }
LABEL_24:
      sub_1C6BC60(IsNullOrEmpty, v5);
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

  if ( (byte_4CBA3E6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_long___);
    byte_4CBA3E6 = 1;
  }
  this->fields.returnQpNum = 0;
  v6 = Method_System_Array_Empty_long___;
  v7 = *((_QWORD *)Method_System_Array_Empty_long___ + 7);
  if ( !v7 )
  {
    sub_1C41AF8(Method_System_Array_Empty_long___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(inited);
  v10 = *(struct System_Int64_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.returnSvtIds = *v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.returnSvtIds, (int32_t)v11, v2, v3);
}


void CombineResultEffectComponent___CloseLimitCountSealDialog_b__178_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CBA3E7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_1__);
    byte_4CBA3E7 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_1__,
    0);
  if ( !limitUpResultCheck )
    sub_1C6BC60(v5, v6);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0);
}


void CombineResultEffectComponent___EndLoad_b__148_0(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CBA3E5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_5433/*"END_LOAD"*/);
    byte_4CBA3E5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.fsm) == 0) )
    sub_1C6BC60(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5433/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___FadeoutProcess_b__172_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C6BC60(this, method);
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

  if ( (byte_4CBA3E3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5433/*"END_LOAD"*/);
    byte_4CBA3E3 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5433/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___SetAppendSkillCombineInfo_b__111_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51495936; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4CBA3E1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_12330/*"START_LVEXCEED_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_17258/*"bit_result_extraskill"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    byte_4CBA3E1 = 1;
  }
  if ( data )
  {
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                data,
                                (System_String_o *)StringLiteral_17258/*"bit_result_extraskill"*/,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51495936,
                                              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CAFC0E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C6BC60(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12330/*"START_LVEXCEED_EFFECT"*/, 0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x0
  Il2CppObject *Object_object__51495936; // x20
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *v14; // x21

  if ( (byte_4CBA3E2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    sub_1C6BA08(&StringLiteral_12317/*"START_COMBINE_LIMIT"*/);
    sub_1C6BA08(&StringLiteral_17252/*"bit_result_"*/);
    byte_4CBA3E2 = 1;
  }
  if ( data )
  {
    v5 = sub_1C6BAB0(string___TypeInfo, 1);
    v6 = System_Int32__ToString((int)this + 332, 0);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_63966792(
                                              (System_String_o *)StringLiteral_17252/*"bit_result_"*/,
                                              v6,
                                              0);
    if ( !v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1C6BC68(transform);
    *(_QWORD *)(v5 + 32) = transform;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)transform, v9, v10);
    v11 = System_String__Concat_64007324((System_String_array *)v5, 0);
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                data,
                                v11,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51495936,
                                              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CAFC0E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( !v14 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v13, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_19:
      sub_1C6BC60(transform, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12317/*"START_COMBINE_LIMIT"*/, 0);
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

  if ( (byte_4CBA3DE & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12322/*"START_COSTUME_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    sub_1C6BA08(&StringLiteral_17276/*"bit_result_skinchange"*/);
    byte_4CBA3DE = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17276/*"bit_result_skinchange"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C6BC60(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12322/*"START_COSTUME_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__107_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51495936; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4CBA3E0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_17261/*"bit_result_friendship_exceed"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    sub_1C6BA08(&StringLiteral_12326/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4CBA3E0 = 1;
  }
  if ( data )
  {
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                data,
                                (System_String_o *)StringLiteral_17261/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51495936,
                                              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CAFC0E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C6BC60(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12326/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
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

  if ( (byte_4CBA3DD & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17254/*"bit_result_advent"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    sub_1C6BA08(&StringLiteral_12329/*"START_LIMITUP_EFFECT"*/);
    byte_4CBA3DD = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17254/*"bit_result_advent"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C6BC60(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12329/*"START_LIMITUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__105_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51495936; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4CBA3DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_12330/*"START_LVEXCEED_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_17266/*"bit_result_limitbreak"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    byte_4CBA3DF = 1;
  }
  if ( data )
  {
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                data,
                                (System_String_o *)StringLiteral_17266/*"bit_result_limitbreak"*/,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51495936,
                                              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CAFC0E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C6BC60(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12330/*"START_LVEXCEED_EFFECT"*/, 0);
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

  if ( (byte_4CBA3DA & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_12347/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_17271/*"bit_result_servant"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    byte_4CBA3DA = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17271/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)Effect, 0, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C6BC60(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12347/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__97_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4CBA3DB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12347/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_17271/*"bit_result_servant"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    byte_4CBA3DB = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17271/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C6BC60(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12347/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtEqCombineInfo_b__98_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4CBA3DC & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12347/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_17271/*"bit_result_servant"*/);
    sub_1C6BA08(&StringLiteral_11384/*"ResultEffect"*/);
    byte_4CBA3DC = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17271/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v6 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11384/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v6, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C6BC60(Effect, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12347/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___ShowCostumeChangeMessage_b__183_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C6BC60(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowLimitUpChangeInfo_b__158_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C6BC60(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowNpChangeInfo_b__156_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C6BC60(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeInfo_b__157_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C6BC60(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeMessage_b__155_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C6BC60(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__160_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C6BC60(0, method);
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
  const MethodInfo *v25; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *v26; // x8

  if ( (byte_4CBA3E4 & 1) == 0 )
  {
    sub_1C6BA08(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__7__);
    sub_1C6BA08(&CombineResultEffectComponent___c__DisplayClass147_2_TypeInfo);
    sub_1C6BA08(&UserServantEntity_TypeInfo);
    byte_4CBA3E4 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_71659864(effect, 0);
  this->fields.effect = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effect, 0, v4, v5);
  CombineResultEffectComponent__Close(this, v6);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
    v12 = sub_1C6BC54(CombineResultEffectComponent___c__DisplayClass147_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 24) = this;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v13, v14);
      v15 = (UserServantEntity_o *)sub_1C6BC54(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43401192(v15, v11, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v12 + 16) = callbackFunc;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)callbackFunc, v17, v18);
      this->fields.callbackFunc = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v19, v20);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v15 )
      {
        v21 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v15->fields.treasureDeviceLv1;
        v24 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C6BC54(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)v12,
          Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__7__,
          v25);
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
    sub_1C6BC60(Instance, v8);
  }
  v26 = this->fields.callbackFunc;
  if ( v26 )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v26->fields.invoke_impl)(
      v26->fields.method_code,
      1,
      v26->fields.method);
}


void CombineResultEffectComponent___setSkillResultInfo_b__147_2(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C6BC60(this, method);
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

  if ( (byte_4CBA395 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA395 = 1;
  }
  svtFlagEntity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_42929028(
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_15:
    sub_1C6BC60(Instance, v6);
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
    sub_1C6BC68(Instance);
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
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v14; // x20
  __int64 v15; // x21
  int32_t svtId; // w21
  System_String_o *dispBattleName; // x26
  int32_t v18; // w0
  System_Int32_array *v19; // x20
  float r; // s8
  struct System_Int32_array *skillIds; // x8
  int32_t v22; // w9
  int max_length; // w10
  UnityEngine_Collider_c *klass; // x8
  unsigned int v25; // w22
  float g; // s9
  float b; // s10
  float a; // s11
  float v29; // s12
  float v30; // s13
  float v31; // s14
  float v32; // s15
  ServantSkillAddEntity_o *v33; // x9
  unsigned __int64 v34; // x8
  __int64 v35; // x10
  struct System_Int32_array *v36; // x11
  unsigned int v37; // w13
  int32_t v38; // w11
  int32_t TransformCount; // w0
  int32_t displayCount; // w9
  int32_t v41; // w8
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  int32_t v46; // w9
  int32_t v47; // w8
  int32_t v48; // w21
  int32_t TransformedSameSlotSkillId; // w0
  int32_t v50; // w8
  int32_t v51; // w22
  UserServantEntity_o *v52; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x22
  int32_t targetId; // w23
  int32_t targetLv; // w24
  System_Action_o *v56; // x25
  TransformServantInfo_o *transformInfo; // [xsp+40h] [xbp-A0h] BYREF
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+48h] [xbp-98h] BYREF
  TransformServantInfo_o *v59; // [xsp+98h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4CBA3C9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C6BA08(&Method_CombineResultEffectComponent_clickNext__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CBA3C9 = 1;
  }
  v59 = 0;
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
               method);
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
      sub_1C6BC60(bgCollider, method);
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
        v10 = (_QWORD *)sub_1C6BA20(Method_CombineResultEffectComponent_clickNext__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v10, v10[4]);
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
          v41 = TransformCount;
          bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
          this->fields.displayCount = displayCount - 1;
          if ( bgCollider )
          {
            bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                     (UserServantEntity_o *)bgCollider,
                                                     &transformInfo,
                                                     v41 - displayCount,
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
    *(_QWORD *)&v60.fields.currentCryptoKey = v15;
    *(_QWORD *)&v60.fields.fakeValue = v14;
    bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v60, 0);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_102;
    svtId = (int)bgCollider;
    dispBattleName = string_TypeInfo->static_fields->Empty;
    v18 = UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0);
    if ( v18 >= 2 )
    {
      v46 = this->fields.displayCount;
      v47 = v18;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v46 - 1;
      if ( !bgCollider )
        goto LABEL_102;
      v48 = v47 - v46;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               (UserServantEntity_o *)bgCollider,
                                               v47 - v46,
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
                                     v48 - 1,
                                     v48,
                                     0);
      v50 = this->fields.kind;
      this->fields.targetId = TransformedSameSlotSkillId;
      if ( v50 == 7 )
      {
        v51 = TransformedSameSlotSkillId;
        v52 = this->fields.baseUsrSvtData;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CB02AF )
        {
          sub_1C6BA08(&TerminalPramsManager_TypeInfo);
          byte_4CB02AF = 1;
        }
        bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v52 )
          goto LABEL_102;
        this->fields.targetIdOld = UserServantEntity__GetTransformedOldSkillId(
                                     v52,
                                     v51,
                                     *(_DWORD *)(bgCollider[7].fields.m_CachedPtr + 20),
                                     v48,
                                     0);
      }
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( !bgCollider )
        goto LABEL_102;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                               (UserServantEntity_o *)bgCollider,
                                               &v59,
                                               v48,
                                               0);
      if ( !v59 )
        goto LABEL_102;
      svtId = v59->fields.svtId;
      dispBattleName = v59->fields.titleText;
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
          v22 = this->fields.displayCount;
          max_length = skillIds->max_length;
          this->fields.displayCount = v22 - 1;
          klass = bgCollider[2].klass;
          if ( !klass )
            goto LABEL_102;
          v25 = max_length - v22;
          if ( (unsigned int)(max_length - v22) >= LODWORD(klass->_1.namespaze) )
LABEL_103:
            sub_1C6BC68(bgCollider);
          dispBattleName = (System_String_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v25);
          v61.fields.r = 0.0;
          v61.fields.g = 0.0;
          v61.fields.b = 0.0;
          v61.fields.a = 0.0;
          CondLabelColor = ServantSkillAddEntity__GetCondLabelColor((ServantSkillAddEntity_o *)bgCollider, v61, 0);
          bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
          if ( !svtSkillAddEnt )
            goto LABEL_102;
          r = CondLabelColor.fields.r;
          g = CondLabelColor.fields.g;
          b = CondLabelColor.fields.b;
          a = CondLabelColor.fields.a;
          v63.fields.r = 0.0;
          v63.fields.g = 0.0;
          v63.fields.b = 0.0;
          v63.fields.a = 0.0;
          CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(svtSkillAddEnt, v63, 0);
          if ( !v19 )
            goto LABEL_102;
          v29 = CondSpriteColor.fields.r;
          v30 = CondSpriteColor.fields.g;
          v31 = CondSpriteColor.fields.b;
          v32 = CondSpriteColor.fields.a;
          if ( (int)v19->max_length > 0 )
          {
            v33 = svtSkillAddEnt;
            v34 = 0;
            v35 = 4LL * (unsigned int)v19->max_length;
            while ( v35 != v34 )
            {
              if ( !v33 )
                goto LABEL_102;
              v36 = v33->fields.skillIds;
              if ( !v36 )
                goto LABEL_102;
              v37 = v36->max_length;
              if ( !v37 )
                goto LABEL_103;
              if ( v19->m_Items[v34 / 4] == v36->m_Items[0] )
              {
                if ( v25 >= v37 )
                  goto LABEL_103;
                v38 = v36->m_Items[v25];
                this->fields.targetId = v38;
                v19->m_Items[v34 / 4] = v38;
              }
              v34 += 4LL;
              if ( v35 == v34 )
                goto LABEL_97;
            }
            goto LABEL_103;
          }
LABEL_97:
          skillResultInfoWindow = this->fields.skillResultInfoWindow;
          targetId = this->fields.targetId;
          targetLv = this->fields.targetLv;
          v56 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(v56, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
          if ( skillResultInfoWindow )
          {
            v65.fields.r = r;
            v65.fields.g = g;
            v65.fields.b = b;
            v65.fields.a = a;
            v66.fields.r = v29;
            v66.fields.g = v30;
            v66.fields.b = v31;
            v66.fields.a = v32;
            SkillUpResultWindowComponent__OpenSkillUpResultInfo(
              skillResultInfoWindow,
              targetId,
              targetLv,
              v56,
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
              v65,
              v66,
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
    v29 = 0.0;
    v30 = 0.0;
    v31 = 0.0;
    v32 = 0.0;
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
  v42 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v42 = (_QWORD *)sub_1C6BA20(Method_CombineResultEffectComponent_clickNext__);
  v43 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v42, v42[4]);
  OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0, 0);
  if ( this->fields.kind != 24 )
    CombineResultEffectComponent__ReleaseVoiceData(this, v44);
  if ( !CombineResultEffectComponent__OpenNotification(this, v44) )
    CombineResultEffectComponent__FadeoutProcess(this, v45);
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

  if ( (byte_4CBA3A1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA3A1 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.asstName, 0, v2, v3);
  this->fields.playVoiceList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v5, v6);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v11;
  *(_QWORD *)&v23.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v23, 0);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v12, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v14 = this->fields.resUsrSvtData) == 0)
    || (v15 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                     v14->fields.limitCount,
                                     0),
        !v15) )
  {
LABEL_12:
    sub_1C6BC60(Instance, v8);
  }
  Entity = ServantVoiceMaster__getEntity(v15, 2, SvtVoiceId, (int32_t)Instance, 0);
  this->fields.svtVoiceEntity = Entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v17, v18);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0);
    this->fields.asstName = VoiceAssetName;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v21, v22);
  }
}


ServantVoiceData_array *CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_4CBA3B5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4CBA3B5 = 1;
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
                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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

  if ( (byte_4CBA3B4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CBA3B4 = 1;
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
      sub_1C6BC60(resUsrSvtData, isPlayVoice);
    v11 = *(_QWORD *)&v9->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v9->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v14, 0);
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
                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  if ( (byte_4CBA3A0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA3A0 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.asstName, 0, costumeId, (const MethodInfo *)isLimitUp);
  this->fields.playVoiceList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v9, v10);
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
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v30, 0);
    voiceId = ServantVoiceMaster__getSvtVoiceId(v16, 0);
  }
  if ( v6 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_44392072(Master_object->fields.limitCount, 0);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0);
    v6 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v31, 0);
  if ( !v19
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v19,
                                       (int32_t)Master_object,
                                       v6,
                                       0),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0 )
  {
LABEL_26:
    sub_1C6BC60(Master_object, v12);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             voiceId,
             ServantLimitCountSealAfter,
             0);
  this->fields.svtVoiceEntity = Entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v24, v25);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0);
    this->fields.asstName = VoiceAssetName;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v28, v29);
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

  if ( (byte_4CBA3A2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_EndLoad__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CBA3A2 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v5 = (SoundManager_o *)Instance;
    v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0);
    if ( !v5 )
      sub_1C6BC60(v7, v8);
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
  if ( (byte_4CBA3A6 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&StringLiteral_3051/*"BaseSvtNodeName"*/);
    byte_4CBA3A6 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C6BC60(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3051/*"BaseSvtNodeName"*/,
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
  float Value; // s0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  float v13; // s8
  int32_t v14; // w22
  struct UserServantEntity_o *v15; // x8
  ServantLimitImageMaster_o *v16; // x23
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

  if ( (byte_4CBA3B0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_4328/*"CardScale"*/);
    sub_1C6BA08(&StringLiteral_3050/*"BaseSvtCardNodeName"*/);
    byte_4CBA3B0 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3050/*"BaseSvtCardNodeName"*/,
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
                   (System_String_o *)StringLiteral_4328/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v13 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v12;
  *(_QWORD *)&v28.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v28, 0);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15->fields.limitCount, 0);
  if ( !v16 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, fsm, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetCardImageLimitCount(
                                                            v14,
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
    goto LABEL_25;
  v20 = fsm;
  gameObject = (CombineResultEffectComponent_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v22 = this->fields.baseUsrSvtData;
  v23 = (UnityEngine_GameObject_o *)gameObject;
  ResolveOverwriteStatus = CombineResultEffectComponent__GetResolveOverwriteStatus(gameObject, v22, v24);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_40890688(
                   v23,
                   v22,
                   v20,
                   10,
                   0,
                   changeNameType,
                   ResolveOverwriteStatus,
                   0,
                   0,
                   0);
  if ( !fsm )
    goto LABEL_25;
  v26 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4CAFC09 )
  {
    fsm = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v26, 0)) == 0) )
  {
LABEL_25:
    sub_1C6BC60(fsm, *(_QWORD *)&changeNameType);
  }
  v29.fields.x = v13;
  v29.fields.y = v13;
  v29.fields.z = v13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v29, 0);
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
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v9; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v16; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CBA3AE & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&StringLiteral_8431/*"LimitUpResSvtNodeName"*/);
    byte_4CBA3AE = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  this->fields.playVoiceList = CostumeSvtVoiceList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)CostumeSvtVoiceList, v4, v5);
  playVoiceList = this->fields.playVoiceList;
  if ( playVoiceList )
  {
    if ( !LODWORD(playVoiceList->max_length) )
      sub_1C6BC68(v6);
    v9 = playVoiceList->m_Items[0];
    if ( !v9 )
LABEL_13:
      sub_1C6BC60(v6, v7);
    face = v9->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_13;
  v14 = v6;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v14,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8431/*"LimitUpResSvtNodeName"*/,
    v16);
}


void CombineResultEffectComponent__setEffectEnable(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1C6BC60(0, method);
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
  CombineResultEffectComponent_o *ImageLimitCount; // x0
  const MethodInfo *v10; // x3
  int32_t ResolveImageLimitCount; // w2
  const MethodInfo *v12; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4CBA3A9 & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C6BA08(&StringLiteral_8430/*"LimitUpBaseSvtNodeName"*/);
    byte_4CBA3A9 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v5;
  *(_QWORD *)&v13.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v13, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C6BC60(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  ResolveImageLimitCount = CombineResultEffectComponent__GetResolveImageLimitCount(
                             ImageLimitCount,
                             (int32_t)ImageLimitCount,
                             v2->fields.baseUsrSvtData,
                             v10);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ResolveImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8430/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v12);
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

  if ( (byte_4CBA3AF & 1) == 0 )
  {
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&StringLiteral_8430/*"LimitUpBaseSvtNodeName"*/);
    byte_4CBA3AF = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->max_length) )
      sub_1C6BC68(LimitUpSvtVoiceList);
    v9 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v9 )
      sub_1C6BC60(LimitUpSvtVoiceList, v8);
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
    (System_String_o *)StringLiteral_8430/*"LimitUpBaseSvtNodeName"*/,
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
  const MethodInfo *v19; // x3
  UnityEngine_Transform_o *v20; // x19
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA3B2 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4328/*"CardScale"*/);
    sub_1C6BA08(&StringLiteral_3050/*"BaseSvtCardNodeName"*/);
    byte_4CBA3B2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3050/*"BaseSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_4328/*"CardScale"*/,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nameRevealCard, (int32_t)TexturePrefab, v18, v19);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v20 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4CAFC09 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0)) == 0 )
  {
LABEL_18:
    sub_1C6BC60(fsm, *(_QWORD *)&svtId);
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
  __int64 fsm; // x0
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

  if ( (byte_4CBA3B3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4328/*"CardScale"*/);
    sub_1C6BA08(&StringLiteral_11386/*"ResultSvtCardNodeName"*/);
    byte_4CBA3B3 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11386/*"ResultSvtCardNodeName"*/,
                   0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_19;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_19;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4328/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  if ( !v8 )
    goto LABEL_19;
  v10 = Value;
  fsm = (__int64)UnityEngine_Component__get_gameObject(v8, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_19;
  v12 = (UnityEngine_GameObject_o *)fsm;
  fsm = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0);
  v13 = this->fields.resUsrSvtData;
  if ( !v13 )
    goto LABEL_19;
  v14 = fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(v13, 0, 0);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_40890688(
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
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v17 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4CAFC09 )
  {
    fsm = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v17
    || (UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v16, 0)) == 0) )
  {
LABEL_19:
    sub_1C6BC60(fsm, *(_QWORD *)&changeNameType);
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
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  float v13; // s8
  int32_t v14; // w22
  struct UserServantEntity_o *v15; // x8
  ServantLimitImageMaster_o *v16; // x23
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

  if ( (byte_4CBA3B1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_4328/*"CardScale"*/);
    sub_1C6BA08(&StringLiteral_11386/*"ResultSvtCardNodeName"*/);
    byte_4CBA3B1 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11386/*"ResultSvtCardNodeName"*/,
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
                   (System_String_o *)StringLiteral_4328/*"CardScale"*/,
                   0);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v13 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v12;
  *(_QWORD *)&v28.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v28, 0);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.resUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15->fields.limitCount, 0);
  if ( !v16 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, fsm, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetCardImageLimitCount(
                                                            v14,
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
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_40890688(
                   v23,
                   v22,
                   v20,
                   10,
                   0,
                   changeNameType,
                   ResolveOverwriteStatus,
                   0,
                   0,
                   0);
  if ( !fsm )
    goto LABEL_25;
  v26 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4CAFC09 )
  {
    fsm = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (__int64)UnityEngine_Component__get_transform(v26, 0)) == 0) )
  {
LABEL_25:
    sub_1C6BC60(fsm, *(_QWORD *)&changeNameType);
  }
  v29.fields.x = v13;
  v29.fields.y = v13;
  v29.fields.z = v13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v29, 0);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v26, 1.89, 0);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  struct UserServantEntity_o *v24; // x8
  __int64 v25; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1
  UserServantEntity_o *v31; // x20
  struct ServantVoiceData_array *v32; // x8
  struct UserServantEntity_o *v33; // x8
  __int64 v34; // x20
  __int64 v35; // x21
  struct UserServantEntity_o *v36; // x8
  int v37; // w21
  int v38; // w20
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x22
  __int64 v41; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  int32_t v43; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t kind; // w8
  System_Int32_array *v46; // x20
  int32_t TransformCount; // w21
  const MethodInfo *v48; // x2
  System_String_o *dispBattleName; // x27
  float b; // s8
  struct UserServantEntity_o *v51; // x8
  ServantSkillAddMaster_o *v52; // x21
  __int64 v53; // x22
  __int64 v54; // x23
  struct UserServantEntity_o *v55; // x8
  int32_t v56; // w22
  int32_t targetId; // w24
  int32_t v58; // w23
  ServantSkillAddEntity_o *EnableEntity; // x0
  ServantSkillAddEntity_o *v60; // x21
  float a; // s9
  float v62; // s11
  float v63; // s13
  float v64; // s14
  float v65; // s15
  float g; // s10
  float r; // s12
  struct System_String_array *titles; // x8
  __int64 v69; // x0
  __int64 v70; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v72; // x20
  __int64 v73; // x27
  int32_t v74; // w22
  struct UserServantEntity_o *v75; // x8
  __int64 v76; // x23
  __int64 v77; // x24
  int v78; // w8
  int v79; // w9
  __int64 v80; // x23
  struct UserServantEntity_o *v81; // x8
  __int64 v82; // x23
  __int64 v83; // x24
  int32_t v84; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  UserServantEntity_o *v88; // x8
  Il2CppObject *v89; // x23
  struct UserServantEntity_o *v90; // x8
  __int64 v91; // x25
  __int64 v92; // x26
  int64_t v93; // x24
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v95; // x23
  struct UserServantEntity_o *v96; // x8
  __int64 v97; // x23
  __int64 v98; // x24
  bool IsForceReleaseSkillRankUp; // w29
  int v100; // w22
  _BOOL8 v101; // x0
  __int64 v102; // x1
  Il2CppObject *current; // x23
  __int64 v104; // x1
  NetworkManager_c *v105; // x0
  struct UserServantEntity_o *v106; // x8
  int32_t v107; // w24
  __int64 v108; // x26
  __int64 v109; // x27
  int64_t userIdNumber; // x25
  int32_t v111; // w3
  bool isForceRelease; // w27
  bool isRelease; // w25
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t v115; // w22
  int32_t targetLv; // w23
  System_Action_o *v117; // x24
  int32_t targetIdOld; // w25
  int32_t targetLvOld; // w26
  const MethodInfo *v120; // x2
  SkillUpResultWindowComponent_o *v121; // x20
  UserServantEntity_o *v122; // x21
  System_Action_o *v123; // x22
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  Il2CppObject *v125; // x20
  Il2CppObject *v126; // x21
  Il2CppObject *v127; // x20
  BalanceConfig_c *v128; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v130; // x21
  Il2CppObject *Name; // x0
  System_String_o *v132; // x0
  System_Int32_array *v133; // x20
  SkillUpResultWindowComponent_o *v134; // x21
  int32_t v135; // w22
  int32_t v136; // w23
  System_Action_o *v137; // x24
  struct UserServantEntity_o *v138; // x8
  int32_t v139; // w26
  int32_t v140; // w25
  __int64 v141; // x27
  __int64 v142; // x28
  SkillUpResultWindowComponent_o *v143; // x20
  UserServantEntity_o *v144; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v146; // x23
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v148; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v149; // x21
  Il2CppObject *v150; // x0
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  struct UserServantEntity_o *v153; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v155; // w21
  _BOOL4 v156; // w22
  const MethodInfo *v157; // x1
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  struct UserServantEntity_o *v161; // x8
  __int128 v162; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v163; // x20
  Il2CppObject *v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  struct SvtCombineResultWindowComponent_o *v167; // x20
  struct UserServantEntity_o *v168; // x21
  int32_t v169; // w22
  System_Action_o *v170; // x23
  SvtCombineResultWindowComponent_o *v171; // x0
  UserServantEntity_o *v172; // x1
  int32_t v173; // w2
  System_Action_o *v174; // x3
  System_Action_o *v175; // x4
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v177; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  Il2CppObject *v180; // x20
  AvalonSceneManager_c *v181; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v183; // x0
  intptr_t *v184; // x8
  SkillUpResultWindowComponent_o *v185; // x21
  int32_t v186; // w23
  int32_t v187; // w28
  System_Action_o *v188; // x24
  int32_t v189; // w26
  int32_t v190; // w22
  const MethodInfo *v191; // x2
  int32_t v192; // w29
  System_Int32_array *v193; // x0
  UserServantEntity_o *v194; // x22
  System_Int32_array *v195; // x20
  const MethodInfo *v196; // x2
  __int64 v197; // x22
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  __int64 v205; // x23
  System_Action_o *v206; // x24
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  Il2CppObject *v209; // x21
  CombineResultEffectComponent_ClickDelegate_o *v210; // x22
  const MethodInfo *v211; // x3
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v215; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v217; // x23
  System_Action_o *v218; // x24
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v220; // x21
  System_String_o *v221; // x22
  Il2CppObject *v222; // x21
  Il2CppObject *v223; // x0
  AvalonSceneManager_c *v224; // x8
  System_Action_o *v225; // x21
  int32_t dispLimitCount; // [xsp+4Ch] [xbp-134h]
  int32_t dispLimitCounta; // [xsp+4Ch] [xbp-134h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v228; // [xsp+50h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v229; // [xsp+70h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v230; // [xsp+90h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v231; // [xsp+B0h] [xbp-D0h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+D0h] [xbp-B0h] BYREF
  int32_t v233; // [xsp+DCh] [xbp-A4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v235; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v237; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v238; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v239; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v240; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v241; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v242; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v243; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v244; // 0:x0.16
  UnityEngine_Color_o v245; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v248; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v249; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v250; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v251; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v252; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v253; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4CBA3B6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent_CheckReturnCombineItem__);
    sub_1C6BA08(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C6BA08(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_0__);
    sub_1C6BA08(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_1__);
    sub_1C6BA08(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_2__);
    sub_1C6BA08(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_6__);
    sub_1C6BA08(&CombineResultFormManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass147_0__setSkillResultInfo_b__4__);
    sub_1C6BA08(&CombineResultEffectComponent___c__DisplayClass147_0_TypeInfo);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__3__);
    sub_1C6BA08(&CombineResultEffectComponent___c__DisplayClass147_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_10820/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/);
    sub_1C6BA08(&StringLiteral_10821/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA3B6 = 1;
  }
  v233 = 0;
  entity = 0;
  memset(&v231, 0, sizeof(v231));
  this->fields.skipEndDispAfterVoicePlayed = 0;
  v3 = sub_1C6BC54(CombineResultEffectComponent___c__DisplayClass147_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_233;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_178;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_233;
      v148 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v149 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v230.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v230.fields.fakeValue = v148;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v229 = v230;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v229, 0);
      if ( !v149 )
        goto LABEL_233;
      v150 = DataMasterBase_object__object__long___GetEntity(
               v149,
               Instance,
               (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v150;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)v150, v151, v152);
LABEL_178:
      v153 = this->fields.baseUsrSvtData;
      if ( !v153 )
        goto LABEL_233;
      lv = (unsigned int)v153->fields.lv;
      v233 = v153->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_233;
      v155 = resUsrSvtData->fields.lv;
      v156 = CombineResultEffectComponent__CheckCombineLimit(this, lv, v155, v9);
      if ( !System_Int32__Equals_65475116((int32_t)&v233, v155, 0)
        && this->fields.asstName
        && this->fields.svtVoiceEntity
        && (playVoiceList = this->fields.playVoiceList) != 0 )
      {
        this->fields.skipEndDispAfterVoicePlayed = v156;
        this->fields.maxPlayCnt = playVoiceList->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, v157);
      }
      else
      {
        this->fields.firstPlayedVoiceFlag = 0;
      }
      *(_QWORD *)(v3 + 16) = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), 0, v158, v159);
      if ( !v156 )
        goto LABEL_212;
      v197 = sub_1C6BC54(CombineResultEffectComponent___c__DisplayClass147_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v197, 0);
      if ( !v197 )
        goto LABEL_233;
      *(_QWORD *)(v197 + 24) = v3;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v197 + 24), v3, v198, v199);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v197 + 16) = callbackFunc;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v197 + 16), (int32_t)callbackFunc, v201, v202);
      this->fields.callbackFunc = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v203, v204);
      v205 = *(_QWORD *)(v197 + 24);
      v206 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v206,
        (Il2CppObject *)v197,
        Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__3__,
        0);
      if ( !v205 )
        goto LABEL_233;
      *(_QWORD *)(v205 + 16) = v206;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v205 + 16), (int32_t)v206, v207, v208);
      v209 = *(Il2CppObject **)(v197 + 24);
      v210 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C6BC54(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v210,
        v209,
        Method_CombineResultEffectComponent___c__DisplayClass147_0__setSkillResultInfo_b__4__,
        v211);
      this->fields.callbackFunc = v210;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v210, v212, v213);
LABEL_212:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_216:
        CombineResultEffectComponent__EndDisp(this, (const MethodInfo *)lv);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v215 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v217 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v217, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v218 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v218, (Il2CppObject *)this, Method_CombineResultEffectComponent_CheckReturnCombineItem__, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_233;
      v171 = svtResultInfoWindow;
      v172 = v215;
      v173 = baseUsrSvtCollictionLv;
      v174 = v217;
      v175 = v218;
LABEL_215:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v171, v172, v173, v174, v175, 0);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1C6BAB0(string___TypeInfo, 1);
      v17 = this->fields.baseUsrSvtData;
      if ( !v17 )
        goto LABEL_233;
      v18 = Instance;
      p_svtId = &v17->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v234.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v234.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v234, v16);
      if ( !v18 )
        goto LABEL_233;
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_234;
      *(_QWORD *)(v18 + 32) = Instance;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 32), Instance, v20, v21);
      v22 = System_String__Concat_64007324((System_String_array *)v18, 0);
      if ( UnityEngine_PlayerPrefs__GetInt_71617412(v22, 0) != 1 || (this->fields.kind | 0x10) == 0x1A )
        goto LABEL_22;
      Instance = sub_1C6BAB0(string___TypeInfo, 1);
      v24 = this->fields.baseUsrSvtData;
      if ( !v24 )
        goto LABEL_233;
      v25 = Instance;
      v26 = &v24->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v235.fields.currentCryptoKey = v26;
      *(_QWORD *)&v235.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v235, v23);
      if ( !v25 )
        goto LABEL_233;
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_234;
      *(_QWORD *)(v25 + 32) = Instance;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 32), Instance, v27, v28);
      v29 = System_String__Concat_64007324((System_String_array *)v25, 0);
      UnityEngine_PlayerPrefs__SetInt(v29, 0, 0);
      v31 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      CombineResultFormManager__ResetVoiceList(v31, v30);
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
      v32 = this->fields.playVoiceList;
      if ( !v32 )
      {
        v33 = this->fields.baseUsrSvtData;
        if ( v33 )
        {
          v35 = *(_QWORD *)&v33->fields.limitCount.fields.currentCryptoKey;
          v34 = *(_QWORD *)&v33->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v236.fields.currentCryptoKey = v35;
          *(_QWORD *)&v236.fields.fakeValue = v34;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v236, 0);
          v36 = this->fields.baseUsrSvtData;
          v37 = Instance == 2;
          if ( v36 )
          {
            v38 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v36->fields.limitCount, 0) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v39 = this->fields.baseUsrSvtData;
              if ( !v39 )
                goto LABEL_233;
              v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
              v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
              v42 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1096LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v237.fields.currentCryptoKey = v41;
              *(_QWORD *)&v237.fields.fakeValue = v40;
              v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v237, 0);
              v37 = (v38 == 2)
                  | System_Linq_Enumerable__Contains_int_(
                      v42,
                      v43,
                      (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              kind = this->fields.kind;
              isLimitUpSuppression = kind != 10 && kind != 26;
            }
            if ( (v37 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, (const MethodInfo *)lv);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v220 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
            System_Action___ctor(
              v220,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__147_6__,
              0);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v220, 1, 0);
              return;
            }
          }
        }
        goto LABEL_233;
      }
LABEL_141:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = v32->max_length;
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
      v46 = (System_Int32_array *)Instance;
      TransformCount = UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v48);
      if ( !Instance )
        goto LABEL_233;
      dispBattleName = *(System_String_o **)(Instance + 24);
      b = 0.0;
      if ( TransformCount > 1 )
        goto LABEL_132;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
      v51 = this->fields.baseUsrSvtData;
      if ( !v51 )
        goto LABEL_233;
      v52 = (ServantSkillAddMaster_o *)Instance;
      v54 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
      v53 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v238.fields.currentCryptoKey = v54;
      *(_QWORD *)&v238.fields.fakeValue = v53;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v238, 0);
      v55 = this->fields.baseUsrSvtData;
      if ( !v55 )
        goto LABEL_233;
      v56 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v55->fields.limitCount, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_233;
      targetId = this->fields.targetId;
      v58 = Instance;
      Instance = UserServantEntity__getDispLimitCount(this->fields.baseUsrSvtData, 1, 0);
      if ( !v52 )
        goto LABEL_233;
      EnableEntity = ServantSkillAddMaster__GetEnableEntity(v52, v56, v58, targetId, 0, Instance, 1, 0);
      if ( EnableEntity )
      {
        v60 = EnableEntity;
        Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntity->fields.titles, 0);
        a = 0.0;
        v62 = 0.0;
        v63 = 0.0;
        v64 = 0.0;
        v65 = 0.0;
        g = 0.0;
        r = 0.0;
        if ( (Instance & 1) == 0 )
        {
          titles = v60->fields.titles;
          if ( !titles )
            goto LABEL_233;
          if ( !LODWORD(titles->max_length) )
LABEL_234:
            sub_1C6BC68(Instance);
          dispBattleName = titles->m_Items[0];
          v245.fields.r = 0.0;
          v245.fields.g = 0.0;
          v245.fields.b = 0.0;
          v245.fields.a = 0.0;
          CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v60, v245, 0);
          r = CondLabelColor.fields.r;
          g = CondLabelColor.fields.g;
          b = CondLabelColor.fields.b;
          a = CondLabelColor.fields.a;
          CondLabelColor.fields.r = 0.0;
          CondLabelColor.fields.g = 0.0;
          CondLabelColor.fields.b = 0.0;
          CondLabelColor.fields.a = 0.0;
          CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v60, CondLabelColor, 0);
          v62 = CondSpriteColor.fields.r;
          v63 = CondSpriteColor.fields.g;
          v64 = CondSpriteColor.fields.b;
          v65 = CondSpriteColor.fields.a;
        }
      }
      else
      {
LABEL_132:
        a = 0.0;
        v62 = 0.0;
        v63 = 0.0;
        v64 = 0.0;
        v65 = 0.0;
        g = 0.0;
        r = 0.0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      v115 = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v117 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v117, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v120);
      if ( Instance && skillResultInfoWindow )
      {
        v248.fields.r = r;
        v248.fields.g = g;
        v248.fields.b = b;
        v248.fields.a = a;
        v251.fields.r = v62;
        v251.fields.g = v63;
        v251.fields.b = v64;
        v251.fields.a = v65;
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          v115,
          targetLv,
          v117,
          targetIdOld,
          targetLvOld,
          *(_DWORD *)(Instance + 16),
          v46,
          this->fields.baseUsrSvtData,
          this->fields.kind == 3,
          1,
          0,
          dispBattleName,
          0,
          v248,
          v251,
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
      v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v11 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_48984000(
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v161 = this->fields.baseUsrSvtData;
      if ( !v161 )
        goto LABEL_233;
      v162 = *(_OWORD *)&v161->fields.id.fields.fakeValue;
      v163 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v230.fields.currentCryptoKey = *(_OWORD *)&v161->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v230.fields.fakeValue = v162;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v228 = v230;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v228, 0);
      if ( !v163 )
        goto LABEL_233;
      v164 = DataMasterBase_object__object__long___GetEntity(
               v163,
               Instance,
               (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v164;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)v164, v165, v166);
      v167 = this->fields.svtResultInfoWindow;
      v168 = this->fields.resUsrSvtData;
      v169 = this->fields.baseUsrSvtCollictionLv;
      v170 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v170,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__setSkillResultInfo_b__147_0__,
        0);
      if ( !v167 )
        goto LABEL_233;
      v171 = v167;
      v172 = v168;
      v173 = v169;
      v174 = v170;
      v175 = 0;
      goto LABEL_215;
    case 7:
    case 0x15:
      v69 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
        v69 = sub_1C41A9C(v10);
      v70 = *(_QWORD *)(*(_QWORD *)(v69 + 192) + 16LL);
      if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
        v70 = sub_1C41A9C(v10);
      Instance = **(_QWORD **)(v70 + 184);
      if ( !Instance )
        goto LABEL_233;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v72 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v72,
        (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
      v73 = 0;
      v74 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v74 > *(_DWORD *)(*(_QWORD *)(Instance + 184) + 40LL) )
        {
          if ( this->fields.kind == 7 )
          {
            Instance = (__int64)this->fields.baseUsrSvtData;
            if ( !Instance )
              goto LABEL_233;
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
            v88 = this->fields.baseUsrSvtData;
            dispLimitCount = Instance;
            if ( !v88 )
              goto LABEL_233;
            Instance = UserServantEntity__IsHeroine(v88, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_233;
              v89 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4CB002A )
              {
                sub_1C6BA08(&NetworkManager_TypeInfo);
                byte_4CB002A = 1;
              }
              Instance = (__int64)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (__int64)NetworkManager_TypeInfo;
              }
              v90 = this->fields.baseUsrSvtData;
              if ( !v90 )
                goto LABEL_233;
              v92 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
              v91 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
              v93 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v241.fields.currentCryptoKey = v92;
              *(_QWORD *)&v241.fields.fakeValue = v91;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v241, 0);
              if ( !v89 )
                goto LABEL_233;
              Instance = UserServantCollectionMaster__TryGetEntity(
                           (UserServantCollectionMaster_o *)v89,
                           &entity,
                           v93,
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
                  v95 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v95,
                               (const MethodInfo_31469B0 *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v95, 0);
                    dispLimitCount = Instance;
                  }
                }
              }
            }
            v96 = this->fields.baseUsrSvtData;
            if ( !v96 )
              goto LABEL_233;
            v98 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
            v97 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v242.fields.currentCryptoKey = v98;
            *(_QWORD *)&v242.fields.fakeValue = v97;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v242, 0);
            if ( !v73 )
              goto LABEL_233;
            if ( !MasterData_object )
              goto LABEL_233;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  Instance,
                                  *(_DWORD *)(v73 + 20),
                                  this->fields.targetIdOld,
                                  0);
            if ( !Instance )
              goto LABEL_233;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v230,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            IsForceReleaseSkillRankUp = 0;
            LOBYTE(v100) = 0;
            *(_OWORD *)&v231.fields._list = *(_OWORD *)&v230.fields.currentCryptoKey;
            v231.fields._current = (Il2CppObject *)v230.fields.fakeValue;
            do
            {
              v101 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v231,
                       (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v101 )
                break;
              current = v231.fields._current;
              if ( !v231.fields._current )
                sub_1C6BC60(v101, v102);
              if ( !ServantSkillEntity__isEnable((ServantSkillEntity_o *)v231.fields._current, 0, 0) )
                goto LABEL_129;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4CB002A )
              {
                sub_1C6BA08(&NetworkManager_TypeInfo);
                byte_4CB002A = 1;
              }
              v105 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v105 = NetworkManager_TypeInfo;
              }
              v106 = this->fields.baseUsrSvtData;
              if ( !v106 )
                sub_1C6BC60(v105, v104);
              v107 = v106->fields.lv;
              v109 = *(_QWORD *)&v106->fields.limitCount.fields.currentCryptoKey;
              v108 = *(_QWORD *)&v106->fields.limitCount.fields.fakeValue;
              userIdNumber = v105->static_fields->userIdNumber;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v243.fields.currentCryptoKey = v109;
              *(_QWORD *)&v243.fields.fakeValue = v108;
              v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v243, 0);
              if ( ServantSkillEntity__isUse(
                     (ServantSkillEntity_o *)current,
                     userIdNumber,
                     v107,
                     v111,
                     dispLimitCount,
                     -1,
                     -1,
                     -1,
                     0) )
              {
                v100 = 1;
              }
              else
              {
LABEL_129:
                v100 = 0;
                IsForceReleaseSkillRankUp = ServantSkillEntity__IsForceReleaseSkillRankUp(
                                              (ServantSkillEntity_o *)current,
                                              0);
              }
            }
            while ( !(v100 | IsForceReleaseSkillRankUp) );
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v231,
              (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
            isForceRelease = IsForceReleaseSkillRankUp;
            isRelease = (unsigned __int8)v100 != 0;
          }
          else
          {
            isForceRelease = 0;
            isRelease = 0;
          }
          v185 = this->fields.skillResultInfoWindow;
          v186 = this->fields.targetId;
          v187 = this->fields.targetLv;
          v188 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(v188, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
          v189 = this->fields.targetIdOld;
          v190 = this->fields.targetLvOld;
          Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v191);
          if ( Instance )
          {
            dispLimitCounta = v190;
            if ( v72 )
            {
              v192 = *(_DWORD *)(Instance + 16);
              v193 = System_Collections_Generic_List_int___ToArray(
                       v72,
                       (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
              v194 = this->fields.baseUsrSvtData;
              v195 = v193;
              Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v196);
              if ( Instance )
              {
                if ( v185 )
                {
                  v250.fields.r = 0.0;
                  v250.fields.g = 0.0;
                  v250.fields.b = 0.0;
                  v250.fields.a = 0.0;
                  v253.fields.r = 0.0;
                  v253.fields.g = 0.0;
                  v253.fields.b = 0.0;
                  v253.fields.a = 0.0;
                  SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                    v185,
                    v186,
                    v187,
                    v188,
                    v189,
                    dispLimitCounta,
                    v192,
                    v195,
                    v194,
                    0,
                    isRelease,
                    0,
                    *(System_String_o **)(Instance + 24),
                    isForceRelease,
                    v250,
                    v253,
                    0);
                  return;
                }
              }
            }
          }
LABEL_233:
          sub_1C6BC60(Instance, lv);
        }
        v75 = this->fields.baseUsrSvtData;
        if ( !v75 )
          goto LABEL_233;
        v77 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
        v76 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v239.fields.currentCryptoKey = v77;
        *(_QWORD *)&v239.fields.fakeValue = v76;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v239, 0);
        if ( !MasterData_object )
          goto LABEL_233;
        Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              v74,
                              0);
        if ( !Instance )
          goto LABEL_233;
        v78 = *(_DWORD *)(Instance + 24);
        if ( v78 < 1 )
        {
LABEL_75:
          v81 = this->fields.baseUsrSvtData;
          if ( !v81 )
            goto LABEL_233;
          v83 = *(_QWORD *)&v81->fields.svtId.fields.currentCryptoKey;
          v82 = *(_QWORD *)&v81->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v240.fields.currentCryptoKey = v83;
          *(_QWORD *)&v240.fields.fakeValue = v82;
          v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v240, 0);
          Instance = (__int64)ServantSkillMaster__GetEntity((ServantSkillMaster_o *)MasterData_object, v84, v74, 1, 0);
          if ( Instance )
          {
            lv = *(unsigned int *)(Instance + 28);
            v80 = v73;
LABEL_80:
            if ( !v72 )
              goto LABEL_233;
            items = v72->fields._items;
            v86 = Method_System_Collections_Generic_List_int__Add__;
            ++v72->fields._version;
            if ( !items )
              goto LABEL_233;
            size = v72->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v72,
                lv,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
            }
            else
            {
              v72->fields._size = size + 1;
              items->m_Items[size] = lv;
            }
          }
          else
          {
            v80 = v73;
          }
          ++v74;
          v73 = v80;
          continue;
        }
        break;
      }
      v79 = 0;
      while ( v78 != v79 )
      {
        v80 = *(_QWORD *)(Instance + 8LL * v79 + 32);
        if ( !v80 )
          goto LABEL_233;
        lv = *(unsigned int *)(v80 + 28);
        if ( (_DWORD)lv == this->fields.targetId )
          goto LABEL_80;
        if ( v78 == ++v79 )
          goto LABEL_75;
      }
      goto LABEL_234;
    case 9:
      v143 = this->fields.skillResultInfoWindow;
      v144 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v146 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v146, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v143 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v143, v144, oldFriendShipRank, v146, 0);
      return;
    case 0xB:
      v121 = this->fields.skillResultInfoWindow;
      v122 = this->fields.baseUsrSvtData;
      v123 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v123, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v121 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v121, v122, v123, 0);
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
      v32 = this->fields.playVoiceList;
      if ( v32 )
        goto LABEL_141;
      goto LABEL_216;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_196;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_227;
      this->fields.messageCallback = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.messageCallback, 0, (int32_t)v8, v9);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      v125 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CB02AF )
      {
        sub_1C6BA08(&TerminalPramsManager_TypeInfo);
        byte_4CB02AF = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v125 )
        goto LABEL_233;
      v126 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v125,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
               (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_233;
      v127 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v128 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v128 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v128->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10821/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0);
        if ( !v127 )
          goto LABEL_233;
        v130 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v127, -1, -1, 0, 0);
        v132 = System_String__Format(v130, Name, 0);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10820/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0);
        if ( !v126 )
          goto LABEL_233;
        v221 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v126, 0);
        if ( !v127 )
          goto LABEL_233;
        v222 = (Il2CppObject *)Instance;
        v223 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v127, -1, -1, 0, 0);
        v132 = System_String__Format_64008100(v221, v222, v223, 0);
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))messageCallback->fields.invoke_impl)(
        messageCallback->fields.method_code,
        v132,
        messageCallback->fields.method);
LABEL_227:
      if ( !this->fields.callbackFunc )
        return;
      v180 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v224 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v224 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v224->static_fields->DEFAULT_FADE_TIME;
      v183 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      v184 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__147_2__;
LABEL_231:
      v225 = v183;
      System_Action___ctor(v183, (Il2CppObject *)this, *v184, 0);
      if ( v180 )
      {
        CommonUI__maskFadeout((CommonUI_o *)v180, 1, DEFAULT_FADE_TIME, v225, 0);
        return;
      }
      goto LABEL_233;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_227;
LABEL_196:
      v180 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v181 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v181 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v181->static_fields->DEFAULT_FADE_TIME;
      v183 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      v184 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__147_1__;
      goto LABEL_231;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v177 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v8);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_233;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v177,
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
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_48810920(
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
      v133 = *(System_Int32_array **)(Instance + 16);
      v134 = this->fields.skillResultInfoWindow;
      v135 = this->fields.targetId;
      v136 = this->fields.targetLv;
      v137 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v137, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v138 = this->fields.baseUsrSvtData;
      if ( !v138 )
        goto LABEL_233;
      v139 = this->fields.targetIdOld;
      v140 = this->fields.targetLvOld;
      v142 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
      v141 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v244.fields.currentCryptoKey = v142;
      *(_QWORD *)&v244.fields.fakeValue = v141;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v244, 0);
      if ( !v134 )
        goto LABEL_233;
      v249.fields.r = 0.0;
      v249.fields.g = 0.0;
      v249.fields.b = 0.0;
      v249.fields.a = 0.0;
      v252.fields.r = 0.0;
      v252.fields.g = 0.0;
      v252.fields.b = 0.0;
      v252.fields.a = 0.0;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v134,
        v135,
        v136,
        v137,
        v139,
        v140,
        Instance,
        v133,
        this->fields.baseUsrSvtData,
        this->fields.targetLvOld == 0,
        1,
        1,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v249,
        v252,
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

  if ( (byte_4CBA3C6 & 1) == 0 )
  {
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CBA3C6 = 1;
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
    sub_1C6B9AC(p_player, 0, v6, v7);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA690C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA68C4;
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
  if ( (byte_4CBA3E8 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CBA3E8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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

  if ( (byte_4CBA3E9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
    byte_4CBA3E9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.afterSkillList, (int32_t)v6, v7, v8);
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

  if ( (byte_4CBA3EB & 1) == 0 )
  {
    sub_1C6BA08(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4CBA3EB = 1;
  }
  v7 = sub_1C6BC54(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
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
    sub_1C6BC60(afterSkillList, v9);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), v7, v10, v11);
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

  if ( (byte_4CBA3EA & 1) == 0 )
  {
    sub_1C6BA08(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4CBA3EA = 1;
  }
  v7 = sub_1C6BC54(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
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
    sub_1C6BC60(beforeSkillList, v9);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), v7, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4CBA3ED & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4CBA3ED = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1C6BC60(0, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4CBA3EE & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__);
    byte_4CBA3EE = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1C6BC60(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4CBA3EC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4CBA3EC = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1C6BC60(0, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1AA6990;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1AA6970;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AA6928;
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
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v6, callback, object);
}


void CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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

  if ( (byte_4CBA3EF & 1) == 0 )
  {
    sub_1C6BA08(&CombineResultEffectComponent___c_TypeInfo);
    byte_4CBA3EF = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return voiceData->fields.additionalPerformances;
}


bool CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__153_1(
        CombineResultEffectComponent___c_o *this,
        ServantVoicePerformance_o *performanceData,
        const MethodInfo *method)
{
  if ( !performanceData )
    sub_1C6BC60(this, 0);
  return !System_String__IsNullOrEmpty(performanceData->fields.assetName, 0);
}


int32_t CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__109_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return System_Int32__CompareTo_65474968((_DWORD)a + 24, b->fields.priority, 0);
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

  if ( (byte_4CBA3F0 & 1) == 0 )
  {
    sub_1C6BA08(&CombineResultEffectComponent_TypeInfo);
    byte_4CBA3F0 = 1;
  }
  if ( assetData )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = assetData;
    sub_1C6B9AC(
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
  if ( (byte_4CBA3F1 & 1) == 0 )
  {
    sub_1C6BA08(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__5__);
    byte_4CBA3F1 = 1;
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
  UnityEngine_Object__DestroyImmediate_71659864(effect, 0);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[3].fields.__9__5 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this[3].fields.__9__5, 0, v6, v7);
  v9 = v2->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, method);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v10->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[4].fields.CS___8__locals1 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          _9__5 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C6BC54(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__5,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__5__,
            v16);
          v2->fields.__9__5 = _9__5;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v17, v18);
        }
        if ( v15 )
        {
          CommonUI__OpenCombineLimit(v15, baseUsrSvtData, _9__5, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_1C6BC60(this, method);
  }
  if ( this[9].monitor )
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
    sub_1C6BC60(this, decide);
  }
  HIDWORD(this[8].monitor) = 0;
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, (const MethodInfo *)decide);
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
  if ( (byte_4CBA3F2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NetworkManager_getRequest_CardServantFlagRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass147_2_o *)sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__8__);
    byte_4CBA3F2 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__8 = v3->fields.__9__8;
  if ( !_9__8 )
  {
    _9__8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__8,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__8__,
      0);
    v3->fields.__9__8 = _9__8;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.__9__8, (int32_t)_9__8, v6, v7);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass147_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__8,
                                                                    (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v8 = v3->fields.__4__this;
  if ( !v8 || !this )
LABEL_11:
    sub_1C6BC60(this, decide);
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
  struct CombineResultEffectComponent_o *_4__this; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (limitUpResultCheck = _4__this->fields.limitUpResultCheck) == 0 )
    sub_1C6BC60(this, method);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, this->fields.endDispAction, 1, 0);
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
  if ( (byte_4CBA3F3 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass174_0_o *)sub_1C6BA08(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4CBA3F3 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v10, 0);
  limitCount = v2->fields.limitCount;
  v9 = v7;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v9, limitCount, 0);
  ServantCharaGraphEXOpenManager__WriteData(0);
  this = (CombineResultEffectComponent___c__DisplayClass174_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1C6BC60(this, method);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, method);
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

  if ( (byte_4CBA3F4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__1__);
    byte_4CBA3F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v7 )
    sub_1C6BC60(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void CombineResultEffectComponent___c__DisplayClass180_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v6; // x20

  if ( (byte_4CBA3F5 & 1) == 0 )
  {
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA3F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_10:
    sub_1C6BC60(Instance, v4);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}