void CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_HashSet_T__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C4700D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C37058(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4C4700D = 1;
  }
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_C0F710;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentFigureCollectList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.afterFigureCollectList, (int32_t)v6, v7, v8);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  v9 = sub_1C37100(int___TypeInfo, 1);
  if ( !v9 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C372BC(v9);
  *(_DWORD *)(v9 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.ChangeCardEffectLvList, v9, v10, v11);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v12 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v12,
    (const MethodInfo_3655C0C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v12 )
LABEL_7:
    sub_1C372B4(v9);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v12,
    1,
    (const MethodInfo_3656E10 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v12,
    10,
    (const MethodInfo_3656E10 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v12,
    26,
    (const MethodInfo_3656E10 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v12,
    19,
    (const MethodInfo_3656E10 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v12,
    24,
    (const MethodInfo_3656E10 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.limitUpKinds, (int32_t)v12, v13, v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C46FB6 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4C46FB6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)Component_object, v4, v5);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  v7 = UnityEngine_Component__GetComponent_object_(
         transform,
         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)v7, v8, v9);
}


bool CombineResultEffectComponent__CheckCombineLimit(
        CombineResultEffectComponent_o *this,
        int32_t oldLv,
        int32_t currentLv,
        const MethodInfo *method)
{
  void *Instance; // x0
  ServantLvDetailMaster_o *v8; // x22
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v11; // w8

  if ( (byte_4C46FCA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46FCA = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v8 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__GetRarity((UserServantEntity_o *)Instance, 1, 0);
  HighestData = ServantLvDetailMaster__GetHighestData(v8, Rarity, oldLv, 0);
  Instance = ServantLvDetailMaster__GetHighestData(v8, Rarity, currentLv, 0);
  if ( Instance && !HighestData )
    goto LABEL_12;
  if ( HighestData )
  {
    if ( Instance )
    {
      if ( HighestData->fields.frameType == *((_DWORD *)Instance + 6) )
        goto LABEL_11;
LABEL_12:
      v11 = *((_DWORD *)Instance + 5);
      LOBYTE(Instance) = 1;
      this->fields.combineLimitLv = v11;
      return (char)Instance;
    }
LABEL_14:
    sub_1C372B4(Instance);
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
    sub_1C372B4(0);
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

  if ( (byte_4C46FFC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__CheckReturnCombineItem_b__170_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46FFC = 1;
  }
  if ( this->fields.returnQpNum >= 1
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.returnSvtIds, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    returnQpNum = this->fields.returnQpNum;
    returnSvtIds = this->fields.returnSvtIds;
    v6 = (CommonUI_o *)Instance;
    v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__CheckReturnCombineItem_b__170_0__,
      0);
    if ( !v6 )
      sub_1C372B4(v8);
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

  if ( (byte_4C47005 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C47005 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0);
}


void CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *svtResultInfoWindow; // x0
  AssetData_o *effectAssetData; // x0
  AssetData_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C47002 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&CombineResultEffectComponent_TypeInfo);
    sub_1C37058(&System_GC_TypeInfo);
    byte_4C47002 = 1;
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
    v5 = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(v5, 0);
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)CombineResultEffectComponent_TypeInfo->static_fields, 0, v6, v7);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !svtResultInfoWindow )
LABEL_22:
    sub_1C372B4(svtResultInfoWindow);
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

  if ( (byte_4C47004 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1C37058(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_0__);
    byte_4C47004 = 1;
  }
  v3 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_0__,
    0);
  if ( !limitCountSealDialog )
    sub_1C372B4(v7);
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
  DataManager_o *v12; // x24
  Il2CppObject *MasterData_object; // x25
  SvtMultiPortraitMaster_o *v14; // x24
  int32_t v15; // w23
  System_Collections_Generic_List_object__o *v16; // x24
  _BOOL8 v17; // x0
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w8
  int32_t v20; // w25
  UnityEngine_GameObject_o *v21; // x0
  int32_t portraitImageId; // w27
  UnityEngine_GameObject_o *v23; // x26
  const MethodInfo *v24; // x1
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Component_o *v29; // x25
  UnityEngine_Transform_o *transform; // x0
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v32; // x0
  struct System_Int32_array *v33; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v35; // x26
  StandFigureCollect_o *v36; // x27
  __int64 v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v45; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v47; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v49; // x20
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C46FE1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StandFigureCollect_TypeInfo);
    byte_4C46FE1 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v12 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v12,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_object )
    goto LABEL_47;
  v14 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                svtId,
                                imageLimitCount,
                                0);
  if ( !v14 )
    goto LABEL_47;
  v15 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v14, svtId, (int32_t)Instance, 2, 0);
  if ( !Instance
    || (v16 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v45);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40676404(
                                    gameObject,
                                    svtId,
                                    v15,
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
        v47 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v49 = (StandFigureCollect_o *)sub_1C372A4(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v49, 0, v47, 0);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v53 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v49,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                v55 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v55[4] = (Il2CppClass *)v49;
                sub_1C36FFC((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v49, v50, v51);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1C372B4(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v16,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v17 )
      break;
    current = (SvtMultiPortraitEntity_o *)v58.fields._current;
    if ( !v58.fields._current )
      sub_1C372B4(v17);
    klass_high = HIDWORD(v58.fields._current[2].klass);
    if ( klass_high >= 1 )
      v20 = klass_high + 1;
    else
      v20 = 1;
    if ( !StandFigureNode )
      sub_1C372B4(v17);
    v21 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
    portraitImageId = current->fields.portraitImageId;
    v23 = v21;
    original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v24);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v23,
                         portraitImageId,
                         1,
                         faceType,
                         v20,
                         0,
                         0,
                         -1,
                         original,
                         0);
    v29 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C372B4(0);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C36FFC((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v27, v28);
    transform = UnityEngine_Component__get_transform(v29, 0);
    if ( !transform )
      sub_1C372B4(0);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v32 = UnityEngine_Component__get_gameObject(v29, 0);
      v33 = current->fields.commonPosition;
      if ( !v33 )
        sub_1C372B4(v32);
      max_length = v33->max_length;
      if ( max_length == 1 )
        sub_1C372BC(v32);
      if ( !max_length )
        sub_1C372BC(v32);
      GameObjectExtensions__AddLocalPosition_36133328(v32, (float)v33->m_Items[0], (float)v33->m_Items[1], 0);
    }
    v35 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v36 = (StandFigureCollect_o *)sub_1C372A4(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v36, current, (UIStandFigureR_o *)v29, 0);
    if ( !v35 )
      sub_1C372B4(v37);
    v40 = v35->fields._items;
    v41 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v35->fields._version;
    if ( !v40 )
      sub_1C372B4(v37);
    v42 = v35->fields._size;
    if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        (Il2CppObject *)v36,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &v40->obj.klass + v42;
      v35->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)v36;
      sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v36, v38, v39);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  DataManager_o *v15; // x24
  Il2CppObject *MasterData_object; // x22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v18; // x28
  __int64 v19; // x24
  __int64 v20; // x26
  int32_t v21; // w26
  const MethodInfo *v22; // x3
  int32_t v23; // w25
  char v24; // w26
  System_Collections_Generic_List_object__o *v25; // x22
  _BOOL8 v26; // x0
  SvtMultiPortraitEntity_o *current; // x27
  int klass_high; // w8
  int32_t v29; // w28
  UnityEngine_GameObject_o *v30; // x0
  int32_t portraitImageId; // w29
  UnityEngine_GameObject_o *v32; // x22
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_GameObject_o *v38; // x0
  int32_t v39; // w29
  UnityEngine_GameObject_o *v40; // x22
  const MethodInfo *v41; // x1
  UnityEngine_GameObject_o *v42; // x7
  UnityEngine_Component_o *v43; // x28
  UnityEngine_Transform_o *transform; // x0
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v46; // x0
  struct System_Int32_array *v47; // x8
  int max_length; // w9
  System_Collections_Generic_List_object__o *v49; // x29
  StandFigureCollect_o *v50; // x22
  __int64 v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v59; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v61; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v63; // x20
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  int32_t svtId; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+50h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4C46FD8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StandFigureCollect_TypeInfo);
    byte_4C46FD8 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v15 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v15,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v18 = (SvtMultiPortraitMaster_o *)Instance;
  v20 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v75.fields.currentCryptoKey = v20;
  *(_QWORD *)&v75.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v75, 0);
  if ( !MasterData_object )
    goto LABEL_61;
  v21 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                (int32_t)Instance,
                                imageLimitCount,
                                0);
  v23 = (int)Instance;
  svtId = v21;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v21,
                                  (int32_t)Instance,
                                  v22);
    v24 = (char)Instance;
  }
  else
  {
    v24 = 0;
  }
  if ( !v18 )
    goto LABEL_61;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v18, svtId, v23, overwriteType, 0);
  if ( !Instance
    || (v25 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v59);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_40676404(
                                     gameObject,
                                     svtId,
                                     v23,
                                     1,
                                     0,
                                     1,
                                     0,
                                     v24 & 1,
                                     friendshipNum,
                                     VoiceEffectPrefab,
                                     0)
                                 : StandFigureManager__CreateRenderPrefab_40749324(
                                     gameObject,
                                     svtId,
                                     v23,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0,
                                     0,
                                     friendshipNum,
                                     VoiceEffectPrefab,
                                     0));
      v61 = (UIStandFigureR_o *)Instance;
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
          v63 = (StandFigureCollect_o *)sub_1C372A4(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v63, 0, v61, 0);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v67 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v63,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
              }
              else
              {
                v69 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v69[4] = (Il2CppClass *)v63;
                sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v63, v64, v65);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1C372B4(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    v25,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v74 = v73;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v74,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v26 )
      break;
    current = (SvtMultiPortraitEntity_o *)v74.fields._current;
    if ( !v74.fields._current )
      sub_1C372B4(v26);
    klass_high = HIDWORD(v74.fields._current[2].klass);
    if ( klass_high >= 1 )
      v29 = klass_high + 1;
    else
      v29 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1C372B4(v26);
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
                           v24 & 1,
                           friendshipNum,
                           original,
                           0);
    }
    else
    {
      if ( !StandFigureNode )
        sub_1C372B4(v26);
      v38 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      v39 = current->fields.portraitImageId;
      v40 = v38;
      v42 = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v41);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(v40, v39, formId, 1, 0, v29, 0, v42, 0);
    }
    v43 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C372B4(0);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C36FFC((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v36, v37);
    transform = UnityEngine_Component__get_transform(v43, 0);
    if ( !transform )
      sub_1C372B4(0);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
    {
      v46 = UnityEngine_Component__get_gameObject(v43, 0);
      v47 = current->fields.commonPosition;
      if ( !v47 )
        sub_1C372B4(v46);
      max_length = v47->max_length;
      if ( max_length == 1 )
        sub_1C372BC(v46);
      if ( !max_length )
        sub_1C372BC(v46);
      GameObjectExtensions__AddLocalPosition_36133328(v46, (float)v47->m_Items[0], (float)v47->m_Items[1], 0);
    }
    v49 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v50 = (StandFigureCollect_o *)sub_1C372A4(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v50, current, (UIStandFigureR_o *)v43, 0);
    if ( !v49 )
      sub_1C372B4(v51);
    v54 = v49->fields._items;
    v55 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v49->fields._version;
    if ( !v54 )
      sub_1C372B4(v51);
    v56 = v49->fields._size;
    if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        (Il2CppObject *)v50,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v49->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v50;
      sub_1C36FFC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v50, v52, v53);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v74,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void CombineResultEffectComponent__DestroySvtFigure(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x25
  UnityEngine_Object_o *monitor; // x20
  UIStandFigureR_o *v7; // x0
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  _BOOL8 v13; // x0
  Il2CppObject *v14; // x24
  UnityEngine_Object_o *v15; // x20
  UIStandFigureR_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Object_o *v18; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x8
  int32_t v20; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C47001 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47001 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)currentFigureCollectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C372B4(v4);
    monitor = (UnityEngine_Object_o *)v23.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
    {
      v7 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v7 )
        sub_1C372B4(0);
      UIStandFigureR__ReleaseCharacter(v7, 0);
      v8 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v8 )
        sub_1C372B4(0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v10 = this->fields.currentFigureCollectList;
  if ( !v10 )
    goto LABEL_40;
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)currentFigureCollectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v13 )
      break;
    v14 = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C372B4(v13);
    v15 = (UnityEngine_Object_o *)v23.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
    {
      v16 = (UIStandFigureR_o *)v14[1].monitor;
      if ( !v16 )
        sub_1C372B4(0);
      UIStandFigureR__ReleaseCharacter(v16, 0);
      v17 = (UnityEngine_Component_o *)v14[1].monitor;
      if ( !v17 )
        sub_1C372B4(0);
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v18, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1C372B4(currentFigureCollectList);
  v20 = afterFigureCollectList->fields._size;
  v21 = afterFigureCollectList->fields._version + 1;
  afterFigureCollectList->fields._size = 0;
  afterFigureCollectList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)afterFigureCollectList->fields._items, 0, v20, 0);
}


void CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0) )
  {
    sub_1C372B4(bgCollider);
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

  if ( (byte_4C46FEB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__EndLoad_b__148_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46FEB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__148_0__, 0);
  if ( !v5 )
    sub_1C372B4(v8);
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

  if ( (byte_4C46FF7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_EndPlayProcess__);
    byte_4C46FF7 = 1;
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
      sub_1C372BC(IsNullOrEmpty);
    IsNullOrEmpty = playVoiceList->m_Items[v6];
    if ( !IsNullOrEmpty )
LABEL_9:
      sub_1C372B4(IsNullOrEmpty);
    v7 = ServantVoiceData__get_AfterPerformance(IsNullOrEmpty, 0);
    v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndPlayProcess__, 0);
    CombineResultEffectComponent__PlayPerformance(this, v7, v8, v9);
  }
}


void CombineResultEffectComponent__EndPlayProcess(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Request_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
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
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v39; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  struct UserServantEntity_o *v44; // x8
  int32_t v45; // w22
  CombineResultEffectComponent_o *v46; // x0
  int32_t v47; // w23
  const MethodInfo *v48; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v49; // x21
  System_Action_o *v50; // x19
  const MethodInfo *v51; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4C46FF8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C37058(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
    sub_1C37058(&int_____TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent___c__EndPlayProcess_b__162_0__);
    sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass162_0__EndPlayProcess_b__1__);
    sub_1C37058(&CombineResultEffectComponent___c__DisplayClass162_0_TypeInfo);
    sub_1C37058(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_10676/*"PlayVoice"*/);
    byte_4C46FF8 = 1;
  }
  v3 = sub_1C372A4(CombineResultEffectComponent___c__DisplayClass162_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_61;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
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
          (System_String_o *)StringLiteral_10676/*"PlayVoice"*/,
          v12->fields.delay,
          0);
        return;
      }
LABEL_61:
      sub_1C372B4(Request_object);
    }
LABEL_62:
    sub_1C372BC(Request_object);
  }
  if ( this->fields.player )
    CombineResultEffectComponent__stopVoice(this, v7);
  this->fields.playCnt = 0;
  this->fields.playVoiceList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v8, v9);
  v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
  *(_QWORD *)(v3 + 24) = v13;
  v14 = (System_Action_o **)(v3 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v13, v15, v16);
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
      _9__162_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(_9__162_0, v21, Method_CombineResultEffectComponent___c__EndPlayProcess_b__162_0__, 0);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__162_0 = _9__162_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__162_0, (int32_t)_9__162_0, v23, v24);
    }
    *v14 = _9__162_0;
    sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)_9__162_0, v17, v18);
    this->fields.skipEndDispAfterVoicePlayed = 0;
  }
  if ( this->fields.firstPlayedVoiceFlag >= 1 )
  {
    v25 = sub_1C37100(int_____TypeInfo, 1);
    Request_object = sub_1C37100(int___TypeInfo, 2);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_61;
    v27 = (_DWORD *)Request_object;
    v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v52.fields.currentCryptoKey = v29;
    *(_QWORD *)&v52.fields.fakeValue = v28;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v52, 0);
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
    sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v27, v30, v31);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (__int64)NetworkManager__getRequest_object_(
                                0,
                                (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
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
                     (const MethodInfo_3656300 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( (Request_object & 1) != 0 )
  {
    if ( this->fields.isLimitUpSuppression )
      goto LABEL_39;
    kind = this->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_39;
    v41 = this->fields.baseUsrSvtData;
    if ( !v41 )
      goto LABEL_61;
    v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v53.fields.currentCryptoKey = v43;
    *(_QWORD *)&v53.fields.fakeValue = v42;
    Request_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v53, 0);
    v44 = this->fields.baseUsrSvtData;
    if ( !v44 )
      goto LABEL_61;
    v45 = Request_object;
    v46 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                              v44->fields.limitCount,
                                              0);
    v47 = (_DWORD)v46 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v46, v45, (_DWORD)v46 + 1, v48) )
    {
      v49 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1C372A4(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v49,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0);
      v50 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v3,
        Method_CombineResultEffectComponent___c__DisplayClass162_0__EndPlayProcess_b__1__,
        0);
      ServantCommentMaster__OpenSaintGraphProfileChange(v45, v47, v49, v50, 0);
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
    CombineResultEffectComponent__InitChangeInfoOnCostume(this, v33);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v34) )
    {
      Request_object = (__int64)this->fields.touchInfo;
      if ( !Request_object )
        goto LABEL_61;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Request_object, 1, 0);
      costumeId = this->fields.costumeId;
      v39 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v39 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v39->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(this, v36);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v37);
        ++this->fields.skillShowIndex;
      }
    }
    else if ( CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, v35) )
    {
      CombineResultEffectComponent__ShowCostumeChangeMessage(this, v51);
    }
    else
    {
      CombineResultEffectComponent__EndDisp(this, v51);
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

  if ( (byte_4C46FFE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__FadeoutProcess_b__172_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46FFE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v5 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
      v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__FadeoutProcess_b__172_0__, 0);
      if ( !Instance )
        sub_1C372B4(v8);
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
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4C46FCE & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&CombineResultEffectComponent_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78193016);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46FCE = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_14;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              effectAssetData,
                              name,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object__51855708(
                                     Object_object__51154888,
                                     parentTr,
                                     1,
                                     (const MethodInfo_317415C *)Method_UnityEngine_Object_Instantiate_GameObject____78193016);
  if ( !effectAssetData )
    goto LABEL_14;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C3C921 )
  {
    effectAssetData = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C3C926 )
  {
    effectAssetData = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v9 )
LABEL_14:
    sub_1C372B4(effectAssetData);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
}


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

  if ( (byte_4C46FE0 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C46FE0 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1C372B4(v6);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1C372BC(v6);
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
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantCostumeMaster_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  struct UserServantEntity_o *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  __int64 v15; // x20
  __int64 v16; // x21
  ServantEntity_o *v17; // [xsp+0h] [xbp-40h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C46FFF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46FFF = 1;
  }
  v17 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_21;
    v9 = (ServantCostumeMaster_o *)Instance;
    v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v11;
    *(_QWORD *)&v19.fields.fakeValue = v10;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v19, 0);
    if ( !v9 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v9, &entity, (int32_t)Instance, limitCount, 0) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0);
LABEL_21:
      sub_1C372B4(Instance);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = this->fields.resUsrSvtData;
  if ( !v13 )
    goto LABEL_21;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v20, 0);
  if ( !v14 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v14,
          (Il2CppObject **)&v17,
          (int32_t)Instance,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v17;
  if ( !v17 )
    goto LABEL_21;
  return ServantEntity__getName(v17, -1, -1, 0, 0);
}


int32_t CombineResultEffectComponent__GetResolveImageLimitCount(
        CombineResultEffectComponent_o *this,
        int32_t imageLimitCount,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0

  if ( (byte_4C4700C & 1) == 0 )
  {
    this = (CombineResultEffectComponent_o *)sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C4700C = 1;
  }
  if ( !userServantEntity )
    sub_1C372B4(this);
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
  return imageLimitCount;
}


ServantOverwriteStatus_o *CombineResultEffectComponent__GetResolveOverwriteStatus(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4C4700B & 1) == 0 )
  {
    this = (CombineResultEffectComponent_o *)sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C4700B = 1;
  }
  if ( !userServantEntity )
    sub_1C372B4(this);
  if ( !UserServantEntity__IsUseLevelExceedItemHeroine(userServantEntity, 0) )
    return UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return UserServantEntity__GetOverwriteStatus_43187584(userServantEntity, v4->static_fields->SpecialLimitCountPLD, 0);
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

  if ( (byte_4C46FDB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C46FDB = 1;
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
    sub_1C372B4(fsm);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


System_String_o *CombineResultEffectComponent__GetStartAnimationName(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  System_String_o *v10; // x21
  VoicePlayCondMaster_o *Master_object; // x0
  struct ServantVoiceEntity_o *svtVoiceEntity; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v14; // x9
  bool isVoicePlay_43286548; // w0
  Il2CppObject *CombineAnimation; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_o *Clip; // x22
  int32_t kind; // w8
  Il2CppObject *v27; // x0
  __int64 *v28; // x8
  int32_t v30; // [xsp+1Ch] [xbp-44h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C47008 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11386/*"ResultEffectAnimation"*/);
    sub_1C37058(&StringLiteral_17263/*"bit_result_skinchange{0:D2}"*/);
    sub_1C37058(&StringLiteral_17241/*"bit_result_advent{0:D2}"*/);
    sub_1C37058(&StringLiteral_25207/*"{0}{1:D2}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_17265/*"bit_result{0:D2}"*/);
    byte_4C47008 = 1;
  }
  condEntity = 0;
  if ( !this->fields.svtVoiceEntity )
    goto LABEL_26;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0) )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( !svtVoiceEntity )
    goto LABEL_42;
  playVoiceList = this->fields.playVoiceList;
  if ( !playVoiceList )
    goto LABEL_42;
  if ( !LODWORD(playVoiceList->max_length) )
    sub_1C372BC(Master_object);
  v14 = playVoiceList->m_Items[0];
  if ( !v14 || !Master_object )
    goto LABEL_42;
  isVoicePlay_43286548 = VoicePlayCondMaster__isVoicePlay_43286548(
                           Master_object,
                           svtVoiceEntity->fields.id,
                           v14->fields.id,
                           &condEntity,
                           0,
                           -1,
                           -1,
                           0,
                           0,
                           0,
                           0);
  if ( condEntity && isVoicePlay_43286548 )
  {
    CombineAnimation = (Il2CppObject *)VoicePlayCondEntity__GetCombineAnimation(condEntity, 0, 0);
    v30 = index;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19, v20, v21, v22);
    v10 = System_String__Format_63602948((System_String_o *)StringLiteral_25207/*"{0}{1:D2}"*/, CombineAnimation, v23, 0);
  }
  Master_object = (VoicePlayCondMaster_o *)this->fields.fsm;
  if ( !Master_object
    || (Master_object = (VoicePlayCondMaster_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Master_object, 0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11386/*"ResultEffectAnimation"*/,
                                                   0)) == 0
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                                   (HutongGames_PlayMaker_FsmGameObject_o *)Master_object,
                                                   0)) == 0 )
  {
LABEL_42:
    sub_1C372B4(Master_object);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
          v30 = index;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, method, v3, v4, v5, v6, v7);
          v28 = &StringLiteral_17263/*"bit_result_skinchange{0:D2}"*/;
          return System_String__Format((System_String_o *)*v28, v27, 0);
        }
        return (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_38:
      v30 = index;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, method, v3, v4, v5, v6, v7);
      v28 = &StringLiteral_17241/*"bit_result_advent{0:D2}"*/;
      return System_String__Format((System_String_o *)*v28, v27, 0);
    }
    if ( kind )
    {
      if ( kind == 1 )
        goto LABEL_38;
      if ( kind != 6 )
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    v30 = index;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, method, v3, v4, v5, v6, v7);
    v28 = &StringLiteral_17265/*"bit_result{0:D2}"*/;
    return System_String__Format((System_String_o *)*v28, v27, 0);
  }
  if ( !Component_object )
    goto LABEL_42;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Component_object, v10, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(Clip, 0) )
    goto LABEL_26;
  return v10;
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
    sub_1C372B4(0);
  UserServantEntity__GetTransformedServantInfo(baseUsrSvtData, &transformInfo, transformCount, 0);
  return transformInfo;
}


UnityEngine_GameObject_o *CombineResultEffectComponent__GetVoiceEffectPrefab(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51154888; // x20
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
  Il2CppClass *klass; // x8
  AssetData_o *effectAssetData; // x0
  System_String_o *v22; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  VoiceMaster_o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  struct ServantVoiceData_array *v27; // x8
  ServantVoiceData_o *v28; // x8
  int FlagRequestNumber; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4C46FF0 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&CombineResultEffectComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    sub_1C37058(&System_Func_ServantVoicePerformance__bool__TypeInfo);
    sub_1C37058(&System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_0__);
    sub_1C37058(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_1__);
    sub_1C37058(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46FF0 = 1;
  }
  Object_object__51154888 = 0;
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
      _9__153_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
      System_Func_object__object____ctor(
        _9__153_0,
        v7,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_0__,
        0);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__153_0 = (struct System_Func_ServantVoiceData__ServantVoicePerformance__o *)_9__153_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__153_0, (int32_t)_9__153_0, v9, v10);
    }
    v11 = System_Linq_Enumerable__Select_object__object_(
            playVoiceList,
            (System_Func_TSource__TResult__o *)_9__153_0,
            (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
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
      _9__153_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ServantVoicePerformance__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__153_1,
        v15,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__153_1__,
        0);
      v16 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v16->__9__153_1 = (struct System_Func_ServantVoicePerformance__bool__o *)_9__153_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v16->__9__153_1, (int32_t)_9__153_1, v17, v18);
    }
    v19 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
            v13,
            (System_Func_TSource__bool__o *)_9__153_1,
            (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    if ( v19 )
      klass = v19[1].klass;
    else
      klass = 0;
    effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !effectAssetData )
      goto LABEL_41;
    if ( klass )
      v22 = (System_String_o *)klass;
    else
      v22 = (System_String_o *)StringLiteral_1/*""*/;
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                effectAssetData,
                                v22,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) && !this->fields.kind )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    effectAssetData = (AssetData_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_VoiceMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      v24 = (VoiceMaster_o *)effectAssetData;
      v26 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v31.fields.currentCryptoKey = v26;
      *(_QWORD *)&v31.fields.fakeValue = v25;
      effectAssetData = (AssetData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v31, 0);
      v27 = this->fields.playVoiceList;
      if ( v27 )
      {
        if ( !LODWORD(v27->max_length) )
          sub_1C372BC(effectAssetData);
        v28 = v27->m_Items[0];
        if ( v28 )
        {
          if ( v24 )
          {
            FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v24, (int32_t)effectAssetData, v28->fields.id, 0, 0);
            this->fields.firstPlayedVoiceFlag = FlagRequestNumber;
            if ( FlagRequestNumber >= 1 )
              this->fields.unSkippableFlag = 1;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_41:
    sub_1C372B4(effectAssetData);
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
  return (UnityEngine_GameObject_o *)Object_object__51154888;
}


void CombineResultEffectComponent__InitChangeInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x8
  int64_t v5; // x20
  int v6; // w23
  int v7; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  __int64 v10; // x21
  __int128 v11; // q0
  int64_t v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  unsigned int i; // w20
  SkillInfo_o *v17; // x8
  SkillInfo_o *v18; // x9
  int32_t id; // w1
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

  if ( (byte_4C46FF1 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46FF1 = 1;
  }
  v28 = 0;
  skillInfoList = 0;
  v26 = 0;
  tdInfo = 0;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
          if ( Instance )
          {
            v4 = *(_QWORD *)(Instance + 24);
            v5 = Instance;
            v6 = v4 - 1;
            if ( (int)v4 >= 1 )
            {
              v7 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_53;
                v9 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v10 = *(_QWORD *)(v5 + 8LL * v7 + 32);
                *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v25.fields.fakeValue = v9;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v24 = v25;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v24, 0);
                if ( !v10 )
                  goto LABEL_53;
                v11 = *(_OWORD *)(v10 + 32);
                v12 = Instance;
                *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
                *(_OWORD *)&v23.fields.fakeValue = v11;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v23, 0);
                if ( v12 == Instance )
                  break;
                if ( v6 == v7 )
                  goto LABEL_20;
                if ( (unsigned int)++v7 >= *(_DWORD *)(v5 + 24) )
LABEL_18:
                  sub_1C372BC(Instance);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v10;
              sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, v10, v13, v14);
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
                    goto LABEL_53;
                  if ( i >= LODWORD(skillInfoList->max_length) )
                    goto LABEL_18;
                  v17 = skillInfoList->m_Items[i];
                  if ( !v17 || !v28 )
                    goto LABEL_53;
                  if ( i >= LODWORD(v28->max_length) )
                    goto LABEL_18;
                  v18 = v28->m_Items[i];
                  if ( !v18 )
                    goto LABEL_53;
                  id = v17->fields.id;
                  if ( id != v18->fields.id || v17->fields.lv != v18->fields.lv )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_53;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v17->fields.lv,
                      v15);
                    if ( !v28 )
                      goto LABEL_53;
                    if ( i >= LODWORD(v28->max_length) )
                      goto LABEL_18;
                    v21 = v28->m_Items[i];
                    if ( !v21 )
                      goto LABEL_53;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_53;
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
LABEL_51:
                        this->fields.treasureDeviceEnabled = v22;
                        return;
                      }
                      if ( tdInfo && v26 )
                      {
                        v22 = tdInfo->fields.id != v26->fields.id || tdInfo->fields.lv != v26->fields.lv;
                        goto LABEL_51;
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
    sub_1C372B4(Instance);
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

  if ( (byte_4C46FCC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__InitCombineEffect_b__115_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    byte_4C46FCC = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                            0);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0);
  this->fields.effect = Value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Value, v5, v6);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0);
  v7 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C3C926 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
    sub_1C372B4(fsm);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v8);
  CombineResultEffectComponent__SetResultServantVoiceData(this, v15);
}


bool CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  int32_t DispLimitCount; // w20
  BalanceConfig_c *v5; // x8
  int32_t v6; // w0
  BalanceConfig_c *v7; // x8
  int32_t v8; // w20
  int32_t v9; // w0
  BalanceConfig_c *v10; // x8
  int32_t v11; // w19

  if ( (byte_4C4700A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C4700A = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( DispLimitCount == v5->static_fields->CostumeIdMashu )
    return 1;
  Instance = (AvalonSceneManager_o *)this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_21;
  v6 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = v6;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( v8 == v7->static_fields->HeroineLimitCountOrtinaxRefurbished )
    return 1;
  Instance = (AvalonSceneManager_o *)this->fields.baseUsrSvtData;
  if ( !Instance )
LABEL_21:
    sub_1C372B4(Instance);
  v9 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v10 = BalanceConfig_TypeInfo;
  v11 = v9;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return v11 == v10->static_fields->SpecialLimitCountPLD;
}


bool CombineResultEffectComponent__IsShowLimitUpInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_1C372B4(0);
  return !LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0);
}


bool CombineResultEffectComponent__IsShowNextNpInfo(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  int v4; // w0

  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    sub_1C372B4(0);
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

  if ( (byte_4C46FF9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46FF9 = 1;
  }
  entity = 0;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  v4 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, method);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_20;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                                        v13,
                                                                                        0);
  if ( !v6 )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v6,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_20:
    sub_1C372B4(costumeSkillInfoManager);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CombineRootComponent_c *v8; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v10; // x22

  if ( (byte_4C46FCD & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&CombineResultEffectComponent_TypeInfo);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass116_0__LoadCombineEffect_b__0__);
    sub_1C37058(&CombineResultEffectComponent___c__DisplayClass116_0_TypeInfo);
    byte_4C46FCD = 1;
  }
  v4 = sub_1C372A4(CombineResultEffectComponent___c__DisplayClass116_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C372B4(v5);
  *(_QWORD *)(v4 + 16) = action;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)action, v6, v7);
  if ( CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData )
    goto LABEL_10;
  v8 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v8 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v8->static_fields->COMBINE_ASSET_PATH;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v10,
    (Il2CppObject *)v4,
    Method_CombineResultEffectComponent___c__DisplayClass116_0__LoadCombineEffect_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v10, 1, 0) )
LABEL_10:
    ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
}


void CombineResultEffectComponent__NameRevealCrossFade(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UICharaGraphTexture_o *nameRevealCard; // x0

  nameRevealCard = this->fields.nameRevealCard;
  if ( !nameRevealCard )
    sub_1C372B4(0);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0);
}


void CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C47007 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5434/*"END_ANIMATION"*/);
    byte_4C47007 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1C372B4(0);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5434/*"END_ANIMATION"*/, 0);
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
  if ( (byte_4C47003 & 1) == 0 )
  {
    sub_1C37058(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C37058(&StringLiteral_8274/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4C47003 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[11].monitor;
  if ( !v6 )
    goto LABEL_14;
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v6[6], 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8274/*"LIMIT_COUNT_SEALED_TITLE"*/, 0);
  v13 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1C372A4(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v13,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0);
  if ( !v10 )
LABEL_14:
    sub_1C372B4(this);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v10, v12, v11, v13, 0);
}


bool CombineResultEffectComponent__OpenNotification(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 AscensionAfterDialogId; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool v7; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w0
  struct UserServantEntity_o *v17; // x8
  int32_t v18; // w21
  __int64 v19; // x22
  __int64 v20; // x23
  int32_t v21; // w0
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
  int v32; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C47000 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass174_0__OpenNotification_b__0__);
    sub_1C37058(&CombineResultEffectComponent___c__DisplayClass174_0_TypeInfo);
    sub_1C37058(&StringLiteral_11583/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C47000 = 1;
  }
  v3 = sub_1C372A4(CombineResultEffectComponent___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_28;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v7 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v12 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v11 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v33.fields.currentCryptoKey = v12;
      *(_QWORD *)&v33.fields.fakeValue = v11;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v33, 0);
      *(_DWORD *)(v3 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v3 + 24) = this->fields.costumeId;
      v13 = this->fields.resUsrSvtData;
      if ( v13 )
      {
        v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v15;
        *(_QWORD *)&v34.fields.fakeValue = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v34, 0);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v16, *(_DWORD *)(v3 + 24), 0);
        v32 = AscensionAfterDialogId;
        if ( (_DWORD)AscensionAfterDialogId == -1 )
          return 0;
        v17 = this->fields.resUsrSvtData;
        if ( v17 )
        {
          v18 = AscensionAfterDialogId;
          v20 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
          v19 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v35.fields.currentCryptoKey = v20;
          *(_QWORD *)&v35.fields.fakeValue = v19;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v35, 0);
          v22 = *(_DWORD *)(v3 + 24);
          v23 = v21;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v23, v22, 0) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v18,
                                                *(_DWORD *)(v3 + 24),
                                                v24);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = System_Int32__ToString((int32_t)&v32, 0);
          v28 = System_String__Concat_63561656((System_String_o *)StringLiteral_11583/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v27, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v29 = LocalizationManager__Get(v28, 0);
          v30 = System_String__Format(v29, NameFromMessageId, 0);
          v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v31,
            (Il2CppObject *)v3,
            Method_CombineResultEffectComponent___c__DisplayClass174_0__OpenNotification_b__0__,
            0);
          if ( Instance )
          {
            v7 = 1;
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
            return v7;
          }
        }
      }
    }
LABEL_28:
    sub_1C372B4(AscensionAfterDialogId);
  }
  return v7;
}


void CombineResultEffectComponent__PlayPerformance(
        CombineResultEffectComponent_o *this,
        ServantVoicePerformance_ServantVoicePerformanceDetail_o *performance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  UIStandFigureR_o *IsNullOrEmpty; // x0
  __int64 v8; // x8
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w22
  System_Action_o *v11; // x2

  if ( (byte_4C46FEF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C46FEF = 1;
  }
  if ( performance )
  {
    IsNullOrEmpty = (UIStandFigureR_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)this->fields.afterFigureCollectList,
                                          0);
    v8 = 176;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      v8 = 168;
    v9 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v8);
    if ( !v9 )
      goto LABEL_17;
    if ( v9->fields._size >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        IsNullOrEmpty = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                              v9,
                                              v10,
                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (UIStandFigureR_o *)IsNullOrEmpty->fields.m_CancellationTokenSource;
        if ( !IsNullOrEmpty )
          break;
        if ( v10 == v9->fields._size - 1 )
          v11 = playEndAction;
        else
          v11 = 0;
        UIStandFigureR__PlayAnimation(IsNullOrEmpty, performance->fields.name, performance->fields.delay, v11, 0);
        if ( ++v10 >= v9->fields._size )
          return;
      }
LABEL_17:
      sub_1C372B4(IsNullOrEmpty);
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
  if ( (byte_4C46FEE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_EndPlay__);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    this = (CombineResultEffectComponent_o *)sub_1C37058(&SoundManager_TypeInfo);
    byte_4C46FEE = 1;
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
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
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
                 (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
          {
            if ( System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                   (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
              && System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                   (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
        v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)v4, Method_CombineResultEffectComponent_EndPlay__, 0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v25 = SoundManager__playVoice_41518412(asstName, vcName, volume, v24, 0, 0);
        v4->fields.player = v25;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.player, (int32_t)v25, v26, v27);
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
          sub_1C372B4(this);
        }
      }
    }
    sub_1C372BC(this);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Master_object; // x24
  CommonUI_o *v18; // x22
  Il2CppObject *v19; // x0
  UserServantCollectionEntity_o *v20; // x20
  CommonUI_o *v21; // x22
  ServantStatusDialog_EndDelegate_o *v22; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C47006 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__0__);
    sub_1C37058(&CombineResultEffectComponent___c__DisplayClass180_0_TypeInfo);
    byte_4C47006 = 1;
  }
  entity = 0;
  v11 = sub_1C372A4(CombineResultEffectComponent___c__DisplayClass180_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)finishCallback, v15, v16);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v18 )
      {
        CommonUI__maskFadein(v18, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          Instance = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( Instance )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 0, 0);
            v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v20 = entity;
            v21 = (CommonUI_o *)v19;
            v22 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v22,
              (Il2CppObject *)v11,
              Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__0__,
              0);
            if ( v21 )
            {
              CommonUI__OpenServantStatusDialog_31220144(v21, 33, v20, limitCount, v22, 0);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_1C372B4(Instance);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_31208544(Instance, *(System_Action_o **)(v11 + 24), 0);
}


void CombineResultEffectComponent__ReleaseVoiceData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0

  if ( (byte_4C46FFB & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C46FFB = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.playVoiceList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v2, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
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
  DataManager_o *v7; // x22
  Il2CppObject *MasterData_object; // x25
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
  System_Collections_Generic_List_object__o *v25; // x25
  _BOOL8 v26; // x0
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  int32_t portraitImageId; // w27
  UnityEngine_GameObject_o *v31; // x26
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Component_o *v36; // x26
  UnityEngine_Transform_o *transform; // x0
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v39; // x0
  __int64 v40; // x0
  struct System_Int32_array *v41; // x8
  int max_length; // w9
  int v43; // s11
  int v44; // s12
  float x; // s9
  float y; // s10
  float z; // s8
  UnityEngine_Transform_o *v48; // x0
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v50; // x28
  __int64 v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  bool v58; // w20
  UnityEngine_GameObject_o *v59; // x21
  const MethodInfo *v60; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v62; // x23
  System_Collections_Generic_List_object__o *v63; // x21
  StandFigureCollect_o *v64; // x22
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  float v71; // s8
  struct System_Int32_array *multiFace; // x23
  int32_t masterDataBytes; // w20
  int32_t m_CancellationTokenSource_high; // w21
  struct ServantVoiceData_array *playVoiceList; // x8
  float FadeTime; // s0
  struct ServantVoiceData_array *v77; // x8
  ServantVoiceData_o *v78; // x8
  unsigned __int64 v79; // x22
  bool v80; // [xsp+24h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+40h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46FDE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StandFigureCollect_TypeInfo);
    sub_1C37058(&StringLiteral_8434/*"LimitUpResSvtNodeName"*/);
    byte_4C46FDE = 1;
  }
  entity = 0;
  memset(&v82, 0, sizeof(v82));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8434/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v7 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_85;
  v10 = (ServantLimitAddMaster_o *)Instance;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v84.fields.currentCryptoKey = v12;
  *(_QWORD *)&v84.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v84, 0);
  v13 = this->fields.resUsrSvtData;
  if ( !v13 )
    goto LABEL_85;
  v14 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                v13->fields.limitCount,
                                0);
  if ( !v10 )
    goto LABEL_85;
  v15 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v10, &entity, v14, (int32_t)Instance, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_85;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v15 = LimitCountUpResultServantLimitCount;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_85;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v14,
                                 v15,
                                 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v14, ServantLimitCountSealAfter, 0);
  v18 = this->fields.resUsrSvtData;
  if ( !v18 )
    goto LABEL_85;
  v19 = (int)Instance;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v21;
  *(_QWORD *)&v85.fields.fakeValue = v20;
  v80 = isForceNormalFace;
  v22 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v85, 0);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v22, (int32_t)v22, v19, v23);
  if ( !MasterData_object )
LABEL_85:
    sub_1C372B4(Instance);
  v24 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v14,
                                v19,
                                2,
                                0);
  if ( Instance
    && (v25 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v81,
      v25,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v82 = v81;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v82,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v26 )
        break;
      if ( !StandFigureNode )
        sub_1C372B4(v26);
      current = (SvtMultiPortraitEntity_o *)v82.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
      if ( !current )
        sub_1C372B4(gameObject);
      portraitImageId = current->fields.portraitImageId;
      v31 = gameObject;
      original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v29);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v31,
                           portraitImageId,
                           1,
                           0,
                           0,
                           0,
                           v24 & 1,
                           -1,
                           original,
                           0);
      v36 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1C372B4(0);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1C36FFC((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v34, v35);
      transform = UnityEngine_Component__get_transform(v36, 0);
      if ( !transform )
        sub_1C372B4(0);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
      {
        v39 = UnityEngine_Component__get_transform(v36, 0);
        if ( !v39 )
          sub_1C372B4(0);
        localPosition = UnityEngine_Transform__get_localPosition(v39, 0);
        v41 = current->fields.commonPosition;
        if ( !v41 )
          sub_1C372B4(v40);
        max_length = v41->max_length;
        if ( !max_length )
          sub_1C372BC(v40);
        if ( max_length == 1 )
          sub_1C372BC(v40);
        v44 = v41->m_Items[0];
        v43 = v41->m_Items[1];
        x = localPosition.fields.x;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        v48 = UnityEngine_Component__get_transform(v36, 0);
        if ( !v48 )
          sub_1C372B4(0);
        v87.fields.x = x + (float)v44;
        v87.fields.y = y + (float)v43;
        v87.fields.z = z;
        UnityEngine_Transform__set_localPosition(v48, v87, 0);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v36,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v50 = (StandFigureCollect_o *)sub_1C372A4(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v50, current, (UIStandFigureR_o *)v36, 0);
      if ( !afterFigureCollectList )
        sub_1C372B4(v51);
      items = afterFigureCollectList->fields._items;
      v55 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1C372B4(v51);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v50,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v50;
        sub_1C36FFC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v50, v52, v53);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v82,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    v58 = v80;
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_85;
    v59 = UnityEngine_Component__get_gameObject(StandFigureNode, 0);
    VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v60);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_40676404(
                                  v59,
                                  v14,
                                  v19,
                                  1,
                                  0,
                                  1,
                                  0,
                                  v24 & 1,
                                  -1,
                                  VoiceEffectPrefab,
                                  0);
    if ( !Instance )
      goto LABEL_85;
    v62 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_85;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0);
    v63 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v64 = (StandFigureCollect_o *)sub_1C372A4(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v64, 0, v62, 0);
    if ( !v63 )
      goto LABEL_85;
    v67 = v63->fields._items;
    v68 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v63->fields._version;
    if ( !v67 )
      goto LABEL_85;
    v69 = v63->fields._size;
    v58 = isForceNormalFace;
    if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v63,
        (Il2CppObject *)v64,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->obj.klass + v69;
      v63->fields._size = v69 + 1;
      v70[4] = (Il2CppClass *)v64;
      sub_1C36FFC((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v64, v65, v66);
    }
  }
  v71 = 0.0;
  if ( v58
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
    v77 = this->fields.playVoiceList;
    if ( !v77 )
      goto LABEL_85;
    if ( !LODWORD(v77->max_length) )
LABEL_86:
      sub_1C372BC(Instance);
    v78 = v77->m_Items[0];
    if ( !v78 )
      goto LABEL_85;
    multiFace = v78->fields.multiFace;
    v71 = FadeTime;
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v79 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v79,
                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( multiFace )
      {
        if ( v79 >= *(unsigned int *)((char *)&off_18 + (_QWORD)multiFace) )
          goto LABEL_86;
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace((UIStandFigureR_o *)Instance, multiFace->m_Items[v79], 0.0, 0);
      }
      else
      {
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace_44061972(
          (UIStandFigureR_o *)Instance,
          m_CancellationTokenSource_high,
          masterDataBytes,
          0,
          v71,
          0);
      }
      if ( (__int64)++v79 >= System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                               (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
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

  if ( (byte_4C46FC8 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__111_0__);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C46FC8 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    currentSkillId,
    *(const MethodInfo **)&currentSkillLv);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
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
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__111_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v17, 1, 0);
}


void CombineResultEffectComponent__SetBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t FigureImageLimitCount; // w0
  const MethodInfo *v9; // x7

  if ( (byte_4C46FD7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3059/*"BaseSvtNodeName"*/);
    byte_4C46FD7 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1C372B4(0);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3059/*"BaseSvtNodeName"*/,
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
  if ( (byte_4C46FDC & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C37058(&StringLiteral_8433/*"LimitUpBaseSvtNodeName"*/);
    byte_4C46FDC = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C372B4(this);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8433/*"LimitUpBaseSvtNodeName"*/,
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
  int32_t v34; // w22
  int32_t v35; // w0
  const MethodInfo *v36; // x2
  int32_t successInfo; // w1
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
  int32_t v67; // w1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *resUsrSvtData; // x9
  bool v70; // w2
  CombineResultEffectComponent_o *v71; // x0
  System_String_o *v72; // x1
  bool v73; // w2
  CombineResultEffectComponent_o *v74; // x0
  System_String_o *v75; // x1
  System_String_o *v76; // x20
  UnityEngine_Transform_o *v77; // x0
  UnityEngine_Component_o *v78; // x20
  float Value; // s0
  float v80; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v82; // x20
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 *v85; // x8
  __int64 v86; // x1
  CGThumbnailListItem_o *v87; // x0
  System_String_o *v88; // x20
  UnityEngine_Transform_o *v89; // x0
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x2
  __int64 v93; // x20
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x2
  Il2CppObject *v97; // x21
  EventDelegate_Callback_o *v98; // x22
  EventDelegate_o *v99; // x20
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  __int64 v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  __int64 v105; // x8
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x2
  System_Collections_ICollection_o *v108; // x8
  float FadeTime; // s0
  System_Collections_ICollection_o *v110; // x8
  System_Collections_ICollection_c *klass; // x8
  __int64 v112; // [xsp+0h] [xbp-60h] BYREF
  __int64 v113; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46FCF & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetCardParam_b__118_0__);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_4746/*"CostumeName"*/);
    sub_1C37058(&StringLiteral_3059/*"BaseSvtNodeName"*/);
    sub_1C37058(&StringLiteral_17239/*"bit_result_120"*/);
    sub_1C37058(&StringLiteral_17246/*"bit_result_extraskill02"*/);
    sub_1C37058(&StringLiteral_17255/*"bit_result_nobledeliverance"*/);
    sub_1C37058(&StringLiteral_12309/*"START_ANIMATION"*/);
    sub_1C37058(&StringLiteral_17243/*"bit_result_command_card_exceed"*/);
    sub_1C37058(&StringLiteral_17252/*"bit_result_limitbreak"*/);
    sub_1C37058(&StringLiteral_17247/*"bit_result_friendship_exceed"*/);
    sub_1C37058(&StringLiteral_11356/*"ResMaxLvExceedNodeName"*/);
    sub_1C37058(&StringLiteral_17260/*"bit_result_skillrank"*/);
    sub_1C37058(&StringLiteral_17250/*"bit_result_grail_02"*/);
    sub_1C37058(&StringLiteral_17261/*"bit_result_skillup"*/);
    sub_1C37058(&StringLiteral_4887/*"CrtMaxLvExceedNodeName"*/);
    sub_1C37058(&StringLiteral_17256/*"bit_result_powerup"*/);
    sub_1C37058(&StringLiteral_13046/*"StartAnimationName"*/);
    sub_1C37058(&StringLiteral_17249/*"bit_result_grail_01"*/);
    sub_1C37058(&StringLiteral_17245/*"bit_result_extraskill01"*/);
    sub_1C37058(&StringLiteral_17259/*"bit_result_skilldeliverance"*/);
    sub_1C37058(&StringLiteral_4888/*"CrtMaxLvNodeName"*/);
    sub_1C37058(&StringLiteral_11357/*"ResMaxLvNodeName"*/);
    sub_1C37058(&StringLiteral_13191/*"SvtEqCardScale"*/);
    byte_4C46FCF = 1;
  }
  v112 = 0;
  v113 = 0;
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
        successInfo = this->fields.successInfo;
      else
LABEL_93:
        successInfo = 4;
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
                                       (System_String_o *)StringLiteral_4888/*"CrtMaxLvNodeName"*/,
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
                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v7 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v113) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v113 + 4, 0);
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
                                       (System_String_o *)StringLiteral_11357/*"ResMaxLvNodeName"*/,
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
                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v10 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v113) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v113, 0);
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
      *(_QWORD *)&v114.fields.currentCryptoKey = v13;
      *(_QWORD *)&v114.fields.fakeValue = v12;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v114, 0);
      v14 = this->fields.baseUsrSvtData;
      if ( !v14 )
        goto LABEL_173;
      v15 = svtResultInfoWindow;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14->fields.limitCount, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      svtResultInfoWindow = ImageLimitCount__GetImageLimitCount(v15, v16, 0);
      v17 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = svtResultInfoWindow;
      if ( !v17 )
        goto LABEL_173;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v17->fields.svtId, 0);
      v18 = this->fields.resUsrSvtData;
      if ( !v18 )
        goto LABEL_173;
      v19 = svtResultInfoWindow;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v18->fields.limitCount, 0);
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
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)LimitUpSvtVoiceList, v28, v29);
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
          v108 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v108[1].monitor) )
            goto LABEL_174;
          svtResultInfoWindow = (__int64)v108[2].klass;
          if ( !svtResultInfoWindow )
            goto LABEL_173;
          v34 = *(_DWORD *)(svtResultInfoWindow + 28);
          v33 = *(_DWORD *)(svtResultInfoWindow + 56);
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)svtResultInfoWindow, 0);
          v110 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v110[1].monitor) )
LABEL_174:
            sub_1C372BC(svtResultInfoWindow);
          klass = v110[2].klass;
          if ( !klass )
            goto LABEL_173;
          data = klass->_1.byval_arg.data;
          v31 = FadeTime;
        }
        v35 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( data )
        {
          successInfo = 1;
          if ( v35 != data[6] || v35 <= 0 )
            goto LABEL_136;
        }
        else if ( v35 < 1 )
        {
LABEL_135:
          successInfo = 1;
          goto LABEL_136;
        }
        v65 = 0;
        if ( v35 <= 1 )
          v66 = 1;
        else
          v66 = (unsigned int)v35;
        while ( 1 )
        {
          svtResultInfoWindow = (__int64)this->fields.currentFigureCollectList;
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = (__int64)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                                           v65,
                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = *(_QWORD *)(svtResultInfoWindow + 24);
          if ( data )
          {
            if ( v65 >= (unsigned int)data[6] )
              goto LABEL_174;
            if ( !svtResultInfoWindow )
              break;
            v67 = data[v65 + 8];
          }
          else
          {
            v67 = v34;
            if ( !svtResultInfoWindow )
              break;
          }
          UIStandFigureR__SetFace_44061972((UIStandFigureR_o *)svtResultInfoWindow, v67, v33, 0, v31, 0);
          if ( v66 == ++v65 )
            goto LABEL_135;
        }
LABEL_173:
        sub_1C372B4(svtResultInfoWindow);
      }
LABEL_71:
      this->fields.isChangeCardImg = 1;
      v58 = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v22);
      this->fields.playVoiceList = v58;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)v58, v59, v60);
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v61);
      CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v62);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, v25, v63);
      CombineResultEffectComponent__setResultSvtGraphCard(this, v25, v64);
      successInfo = 2;
LABEL_136:
      svtResultInfoWindow = (__int64)CombineResultEffectComponent__GetStartAnimationName(this, successInfo, v36);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v93 = svtResultInfoWindow;
      svtResultInfoWindow = (__int64)this->fields.fsm;
LABEL_167:
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      *(_QWORD *)(svtResultInfoWindow + 56) = v93;
      v87 = (CGThumbnailListItem_o *)(svtResultInfoWindow + 56);
      LODWORD(v86) = v93;
LABEL_170:
      sub_1C36FFC(v87, v86, v83, v84);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtResultInfoWindow, (System_String_o *)StringLiteral_12309/*"START_ANIMATION"*/, 0);
      return;
    case 2:
      v70 = 1;
      v71 = this;
      v72 = (System_String_o *)StringLiteral_17261/*"bit_result_skillup"*/;
      goto LABEL_97;
    case 3:
      v39 = &StringLiteral_17259/*"bit_result_skilldeliverance"*/;
      goto LABEL_96;
    case 4:
      v73 = 1;
      v74 = this;
      v75 = (System_String_o *)StringLiteral_17261/*"bit_result_skillup"*/;
      goto LABEL_101;
    case 5:
      v38 = &StringLiteral_17255/*"bit_result_nobledeliverance"*/;
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
                                       (System_String_o *)StringLiteral_3059/*"BaseSvtNodeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v76 = (System_String_o *)svtResultInfoWindow;
      v77 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v77, v76, 1, 0);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v78 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13191/*"SvtEqCardScale"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)svtResultInfoWindow, 0);
      if ( !v78 )
        goto LABEL_173;
      v80 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v78, 0);
      svtResultInfoWindow = (__int64)CharaGraphManager__CreateTexturePrefab_40659744(
                                       gameObject,
                                       this->fields.resUsrSvtData,
                                       10,
                                       0,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v82 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v115.fields.z = 0.0;
      v115.fields.x = -50.0;
      v115.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtResultInfoWindow, v115, 0);
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(v82, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v116.fields.x = v80;
      v116.fields.y = v80;
      v116.fields.z = v80;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)svtResultInfoWindow, v116, 0);
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
      v39 = &StringLiteral_17260/*"bit_result_skillrank"*/;
LABEL_96:
      v72 = (System_String_o *)*v39;
      v71 = this;
      v70 = 0;
LABEL_97:
      CombineResultEffectComponent__SetCardParam_Skill(v71, v72, v70, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v38 = &StringLiteral_17260/*"bit_result_skillrank"*/;
LABEL_100:
      v75 = (System_String_o *)*v38;
      v74 = this;
      v73 = 0;
LABEL_101:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v74, v75, v73, v2);
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
                                       (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v85 = &StringLiteral_17261/*"bit_result_skillup"*/;
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
                                       (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v85 = &StringLiteral_17256/*"bit_result_powerup"*/;
LABEL_127:
      v86 = *v85;
      *(_QWORD *)(svtResultInfoWindow + 56) = *v85;
      v87 = (CGThumbnailListItem_o *)(svtResultInfoWindow + 56);
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
                                       (System_String_o *)StringLiteral_4887/*"CrtMaxLvExceedNodeName"*/,
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
                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v42 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v112) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v112 + 4, 0);
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
                                       (System_String_o *)StringLiteral_11356/*"ResMaxLvExceedNodeName"*/,
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
                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v45 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v112) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v112, 0);
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
        v56 = &StringLiteral_17252/*"bit_result_limitbreak"*/;
      }
      else
      {
        if ( !this->fields.isChangeCardImg )
        {
          v56 = &StringLiteral_17249/*"bit_result_grail_01"*/;
LABEL_152:
          svtResultInfoWindow = (__int64)this->fields.fsm;
          if ( svtResultInfoWindow )
          {
            v93 = *v56;
            goto LABEL_167;
          }
          goto LABEL_173;
        }
        v56 = &StringLiteral_17250/*"bit_result_grail_02"*/;
      }
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v55);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v107);
      goto LABEL_152;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v57 = &StringLiteral_17247/*"bit_result_friendship_exceed"*/;
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
                                       (System_String_o *)StringLiteral_4746/*"CostumeName"*/,
                                       0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0);
      if ( !this->fields.effect )
        goto LABEL_173;
      v88 = (System_String_o *)svtResultInfoWindow;
      v89 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v89, v88, 1, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UILabel__set_text((UILabel_o *)svtResultInfoWindow, this->fields.costumeName, 0);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v90);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v91);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v92);
      goto LABEL_135;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v57 = &StringLiteral_17243/*"bit_result_command_card_exceed"*/;
      goto LABEL_166;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v94);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v95);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v96);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v57 = (__int64 *)&StringLiteral_17239/*"bit_result_120"*/;
LABEL_166:
      v93 = *v57;
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
          v97 = UnityEngine_GameObject__AddComponent_object_(
                  (UnityEngine_GameObject_o *)svtResultInfoWindow,
                  (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
          v98 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v98,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_b__118_0__,
            0);
          v99 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
          EventDelegate___ctor_49273948(v99, v98, 0);
          if ( v97 )
          {
            svtResultInfoWindow = (__int64)v97[2].klass;
            if ( svtResultInfoWindow )
            {
              v102 = *(_QWORD *)(svtResultInfoWindow + 16);
              v103 = Method_System_Collections_Generic_List_EventDelegate__Add__;
              ++*(_DWORD *)(svtResultInfoWindow + 28);
              if ( v102 )
              {
                v104 = *(int *)(svtResultInfoWindow + 24);
                if ( (unsigned int)v104 >= *(_DWORD *)(v102 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                    (Il2CppObject *)v99,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
                }
                else
                {
                  v105 = v102 + 8 * v104;
                  *(_DWORD *)(svtResultInfoWindow + 24) = v104 + 1;
                  *(_QWORD *)(v105 + 32) = v99;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v105 + 32), (int32_t)v99, v100, v101);
                }
                CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v106);
                svtResultInfoWindow = (__int64)this->fields.fsm;
                v57 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17246/*"bit_result_extraskill02"*/ : &StringLiteral_17245/*"bit_result_extraskill01"*/);
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

  if ( (byte_4C46FD2 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__121_0__);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&StringLiteral_12309/*"START_ANIMATION"*/);
    sub_1C37058(&StringLiteral_13046/*"StartAnimationName"*/);
    byte_4C46FD2 = 1;
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
    v8 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)effect,
           (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__121_0__,
      0);
    v10 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
    EventDelegate___ctor_49273948(v10, v9, 0);
    if ( !v8
      || (effect = (int *)v8[2].klass) == 0
      || (v13 = *((_QWORD *)effect + 2),
          v14 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v13) )
    {
LABEL_17:
      sub_1C372B4(effect);
    }
    v15 = effect[6];
    if ( (unsigned int)v15 >= *(_DWORD *)(v13 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v10,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = v13 + 8 * v15;
      effect[6] = v15 + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
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
                    (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                    0);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1C36FFC((CGThumbnailListItem_o *)(effect + 14), (int32_t)startName, v17, v18);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12309/*"START_ANIMATION"*/, 0);
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

  if ( (byte_4C46FD3 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__122_0__);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&StringLiteral_12309/*"START_ANIMATION"*/);
    sub_1C37058(&StringLiteral_13046/*"StartAnimationName"*/);
    byte_4C46FD3 = 1;
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
           (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__122_0__,
      0);
    v10 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
    EventDelegate___ctor_49273948(v10, v9, 0);
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
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = v13 + 8 * v15;
      effect[6] = v15 + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
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
                          (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                          0)) == 0
    || (*((_QWORD *)effect + 7) = startName,
        sub_1C36FFC((CGThumbnailListItem_o *)(effect + 14), (int32_t)startName, v17, v18),
        (effect = (int *)this->fields.fsm) == 0) )
  {
LABEL_20:
    sub_1C372B4(effect);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12309/*"START_ANIMATION"*/, 0);
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
  CombineRootComponent_c *v14; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_4C46FCB & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetCombineLimit_b__114_0__);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46FCB = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)callback,
    (const MethodInfo *)autoFadeout);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(gameObject);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v14 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v14 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v14->static_fields->EXCEED_ASSET_PATH;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__114_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v16, 1, 0);
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
  CombineRootComponent_c *v16; // x0
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *v19; // x21

  if ( (byte_4C46FC5 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17243/*"bit_result_command_card_exceed"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    sub_1C37058(&StringLiteral_12316/*"START_COMMAND_CARD_EXCEED_EFFECT"*/);
    byte_4C46FC5 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    cardIndex,
    *(const MethodInfo **)&exceedCount);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  if ( !userServantEntity )
    goto LABEL_18;
  this->fields.displayCount = UserServantEntity__GetTransformCount(userServantEntity, 0, 0);
  v16 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v16 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v16->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_18;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17243/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51154888,
                                     (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v18 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v19 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C3C926 )
  {
    effectAssetData = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v19
    || (UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v18, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_18:
    sub_1C372B4(effectAssetData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12316/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0);
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
  System_Action_o *v24; // x20
  CombineResultEffectComponent_o *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_4C46FBF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__102_0__);
    sub_1C37058(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    byte_4C46FBF = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    costumeId,
    (const MethodInfo *)costumeName);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.costumeName, (int32_t)costumeName, v13, v14);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  if ( gender >= 1 )
    this->fields.genderType = gender;
  v19 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C372A4(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v19, v20);
  this->fields.costumeSkillInfoManager = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v19, v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  CombineRootComponent_c *v11; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4C46FC3 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17247/*"bit_result_friendship_exceed"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    sub_1C37058(&StringLiteral_12324/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4C46FC3 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)userSvtData, (int32_t)callback, method);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v7, v8);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  v11 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v11 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v11->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17247/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51154888,
                                     (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v14 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  v15 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C3C926 )
  {
    effectAssetData = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v15
    || (UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0)) == 0
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData, v14, 0),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0) )
  {
LABEL_17:
    sub_1C372B4(effectAssetData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12324/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
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
  CombineRootComponent_c *v14; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_4C46FC4 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__107_0__);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46FC4 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    oldFriendShipRank,
    (const MethodInfo *)callback);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v14 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v14 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v14->static_fields->COMBINE_ASSET_PATH;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__107_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v16, 1, 0);
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

  if ( (byte_4C46FB9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12323/*"START_FRIENDSHIPUP_EFFECT"*/);
    byte_4C46FB9 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    oldFriendShipRank,
    (const MethodInfo *)callback);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12323/*"START_FRIENDSHIPUP_EFFECT"*/, 0);
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
  ServantScriptEntity_o *Entity_42760964; // x0
  UserServantEntity_o *v10; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ServantVoiceData_array *v16; // x1
  CGThumbnailListItem_o *p_playVoiceList; // x0
  const MethodInfo *v18; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v20; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  struct UserServantEntity_o *v24; // x8
  CombineResultEffectComponent_o *v25; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x0
  const MethodInfo *v30; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v32; // x21
  const MethodInfo *v33; // x2
  struct UserServantEntity_o *v34; // x8
  CombineResultEffectComponent_o *v35; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  const MethodInfo *v40; // x2
  ServantVoiceEntity_o *v41; // x20
  UserServantEntity_o *v42; // x21
  ServantVoiceData_array *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  ServantVoiceData_array *v46; // x0
  int32_t lv; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v2 = this;
  if ( (byte_4C46FD9 & 1) == 0 )
  {
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1C37058(&string___TypeInfo);
    byte_4C46FD9 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v5;
  *(_QWORD *)&v48.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v48, 0);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_48;
  v6 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0);
  Id = ServantScriptMaster__getId(v6, FigureImageLimitCount, 0);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_42760964 = ServantScriptMaster__GetEntity_42760964((ServantScriptMaster_o *)this, Id, 0);
  if ( Entity_42760964 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_42760964, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v2->fields.combineVoiceId;
      v10 = v2->fields.baseUsrSvtData;
LABEL_19:
      v13 = ServantVoiceEntity__lotteryLevelUpVoice_42804216((ServantVoiceEntity_o *)this, v10, combineVoiceId, 0);
LABEL_20:
      v16 = v13;
      p_playVoiceList = (CGThumbnailListItem_o *)&v2->fields.playVoiceList;
      v2->fields.playVoiceList = v16;
      goto LABEL_21;
    }
    v10 = v2->fields.baseUsrSvtData;
    if ( v10 )
    {
      lv = v10->fields.lv;
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
        if ( System_Int32__Equals_65071592((int32_t)&lv, resUsrSvtData->fields.lv, 0) )
        {
          v22 = v2;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v22, form, 1, v18);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1C37100(string___TypeInfo, 1);
        v24 = v2->fields.baseUsrSvtData;
        if ( v24 )
        {
          v25 = this;
          p_svtId = &v24->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v49.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v49.fields.fakeValue = 0;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v49, v23);
          if ( v25 )
          {
            if ( !LODWORD(v25->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v25->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1C36FFC((CGThumbnailListItem_o *)&v25->fields.svtResultInfoWindow, (int32_t)this, v27, v28);
            v29 = System_String__Concat_63602172((System_String_array *)v25, 0);
            if ( UnityEngine_PlayerPrefs__GetInt_71224996(v29, 0) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v32 = v2->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v13 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v32, v30);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1C37100(string___TypeInfo, 1);
            v34 = v2->fields.baseUsrSvtData;
            if ( v34 )
            {
              v35 = this;
              v36 = &v34->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v50.fields.currentCryptoKey = v36;
              *(_QWORD *)&v50.fields.fakeValue = 0;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v50, v33);
              if ( v35 )
              {
                if ( !LODWORD(v35->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v35->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1C36FFC((CGThumbnailListItem_o *)&v35->fields.svtResultInfoWindow, (int32_t)this, v37, v38);
                v39 = System_String__Concat_63602172((System_String_array *)v35, 0);
                UnityEngine_PlayerPrefs__SetInt(v39, 1, 0);
                v41 = v2->fields.svtVoiceEntity;
                v42 = v2->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v43 = CombineResultFormManager__lotteryCombineResultInit(v41, v42, v40);
                v2->fields.playVoiceList = v43;
                sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.playVoiceList, (int32_t)v43, v44, v45);
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
                  sub_1C372BC(this);
                }
                this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v46 = ServantVoiceEntity__lotteryLevelUpVoice_42804216(
                        (ServantVoiceEntity_o *)this,
                        v2->fields.baseUsrSvtData,
                        v2->fields.combineVoiceId,
                        0);
                LODWORD(v16) = (_DWORD)v46;
                v2->fields.playVoiceList = v46;
                p_playVoiceList = (CGThumbnailListItem_o *)&v2->fields.playVoiceList;
LABEL_21:
                sub_1C36FFC(p_playVoiceList, (int32_t)v16, v14, v15);
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
    sub_1C372B4(this);
  }
}


void CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  DataManager_o *LimitUpSvtVoiceList; // x0
  int32_t v6; // w20
  __int64 v7; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v9; // x21
  __int64 v10; // x22
  struct UserServantEntity_o *v11; // x8
  int32_t v12; // w21
  int32_t v13; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  CombineResultEffectComponent_o *ImageLimitCount; // x0
  const MethodInfo *v16; // x3
  int32_t ResolveImageLimitCount; // w0
  const MethodInfo *v18; // x5
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C46FDF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_8434/*"LimitUpResSvtNodeName"*/);
    byte_4C46FDF = 1;
  }
  entity = 0;
  LimitUpSvtVoiceList = (DataManager_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v6 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.m_CancellationTokenSource) )
      sub_1C372BC(LimitUpSvtVoiceList);
    v7 = *(_QWORD *)&LimitUpSvtVoiceList->fields._DispLog;
    if ( !v7 )
      goto LABEL_21;
    v6 = *(_DWORD *)(v7 + 28);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_21;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v10;
  *(_QWORD *)&v20.fields.fakeValue = v9;
  LimitUpSvtVoiceList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v20, 0);
  v11 = this->fields.resUsrSvtData;
  if ( !v11 )
    goto LABEL_21;
  v12 = (int)LimitUpSvtVoiceList;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11->fields.limitCount, 0);
  LimitUpSvtVoiceList = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = (DataManager_o *)DataManager__GetMasterData_object_(
                                           LimitUpSvtVoiceList,
                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v12, v13, 0) )
    goto LABEL_18;
  LimitUpSvtVoiceList = (DataManager_o *)entity;
  if ( !entity )
LABEL_21:
    sub_1C372B4(LimitUpSvtVoiceList);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v13 = LimitCountUpResultServantLimitCount;
LABEL_18:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetImageLimitCount(v12, v13, 0);
  ResolveImageLimitCount = CombineResultEffectComponent__GetResolveImageLimitCount(
                             ImageLimitCount,
                             (int32_t)ImageLimitCount,
                             this->fields.resUsrSvtData,
                             v16);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v12,
    ResolveImageLimitCount,
    v6,
    (System_String_o *)StringLiteral_8434/*"LimitUpResSvtNodeName"*/,
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
  __int64 v30; // x21
  __int64 v31; // x22
  int32_t v32; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v34; // x8
  ServantLimitImageMaster_o *v35; // x20
  System_Action_o *v36; // x20
  CombineResultEffectComponent_o *v37; // x0
  const MethodInfo *v38; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_4C46FBD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__99_0__);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46FBD = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    *(const MethodInfo **)&baseCollectionLimitCnt);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resSvtNameData, (int32_t)servantChange, v19, v20);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.limitUpPlayVoiceLabel, (int32_t)playVoiceLabel, v25, v26);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.limitUpRewardGiftDataList, (int32_t)rewardGiftDataList, v27, v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !baseData )
    goto LABEL_12;
  v31 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v31;
  *(_QWORD *)&v40.fields.fakeValue = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v40, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v34 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v41.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue,
        v35 = (ServantLimitImageMaster_o *)MasterData_object,
        *(_QWORD *)&v41.fields.currentCryptoKey = v34,
        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                   v41,
                                                   0),
        !v35) )
  {
LABEL_12:
    sub_1C372B4(gameObject);
  }
  this->fields.isLimitUpSuppression = ServantLimitImageMaster__IsServantLimitCountSeal(
                                        v35,
                                        (int32_t)gameObject,
                                        v32 + 1,
                                        0);
  v36 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__99_0__,
    0);
  CombineResultEffectComponent__LoadCombineEffect(v37, v36, v38);
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
  __int64 Int_71224996; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x21
  __int64 v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x0
  const MethodInfo *v25; // x1
  UserServantEntity_o *v26; // x20
  CombineRootComponent_c *v27; // x0
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_Transform_o *v30; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4C46FC1 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_12328/*"START_LVEXCEED_EFFECT"*/);
    sub_1C37058(&StringLiteral_17248/*"bit_result_grail"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    byte_4C46FC1 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v8, v9);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  Int_71224996 = sub_1C37100(string___TypeInfo, 1);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v14 = Int_71224996;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v31.fields.fakeValue = 0;
  Int_71224996 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v31, v13);
  if ( !v14 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v14 + 32) = Int_71224996;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 32), Int_71224996, v16, v17);
  v18 = System_String__Concat_63602172((System_String_array *)v14, 0);
  Int_71224996 = UnityEngine_PlayerPrefs__GetInt_71224996(v18, 0);
  if ( (_DWORD)Int_71224996 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_71224996 = sub_1C37100(string___TypeInfo, 1);
      if ( *p_baseUsrSvtData )
      {
        v20 = Int_71224996;
        v21 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v32.fields.currentCryptoKey = v21;
        *(_QWORD *)&v32.fields.fakeValue = 0;
        Int_71224996 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v32, v19);
        if ( v20 )
        {
          if ( *(_DWORD *)(v20 + 24) )
          {
            *(_QWORD *)(v20 + 32) = Int_71224996;
            sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 32), Int_71224996, v22, v23);
            v24 = System_String__Concat_63602172((System_String_array *)v20, 0);
            UnityEngine_PlayerPrefs__SetInt(v24, 0, 0);
            v26 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v26, v25);
            goto LABEL_19;
          }
LABEL_34:
          sub_1C372BC(Int_71224996);
        }
      }
LABEL_33:
      sub_1C372B4(Int_71224996);
    }
  }
LABEL_19:
  v27 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v27 = CombineRootComponent_TypeInfo;
  }
  Int_71224996 = (__int64)v27->static_fields->effectAssetData;
  if ( !Int_71224996 )
    goto LABEL_33;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              (AssetData_o *)Int_71224996,
                              (System_String_o *)StringLiteral_17248/*"bit_result_grail"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_71224996 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__51154888,
                            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_71224996 )
    goto LABEL_33;
  v29 = (UnityEngine_GameObject_o *)Int_71224996;
  Int_71224996 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_71224996, 0);
  v30 = (UnityEngine_Transform_o *)Int_71224996;
  if ( !byte_4C3C926 )
  {
    Int_71224996 = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v30 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Int_71224996 = (__int64)this->fields.fsm;
  if ( !Int_71224996 )
    goto LABEL_33;
  Int_71224996 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_71224996, 0);
  if ( !Int_71224996 )
    goto LABEL_33;
  Int_71224996 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_71224996,
                            (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                            0);
  if ( !Int_71224996 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_71224996, v29, 0);
  Int_71224996 = (__int64)this->fields.fsm;
  if ( !Int_71224996 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_71224996, (System_String_o *)StringLiteral_12328/*"START_LVEXCEED_EFFECT"*/, 0);
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
  CombineRootComponent_c *v12; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4C46FC2 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__105_0__);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46FC2 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v12 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v12 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v12->static_fields->EXCEED_ASSET_PATH;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__105_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v14, 1, 0);
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
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v17; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v19; // x21
  UnityEngine_Transform_o *v20; // x0
  int *v21; // x21
  System_String_o *v22; // x22
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_ParticleSystem_o *v24; // x22
  float v25; // s0
  UnityEngine_ParticleSystem_EmissionModule_o v26; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v27; // x0
  const MethodInfo *v28; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v30; // x4
  struct ServantChangeEntity_o *v31; // x8
  int32_t v32; // w3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  UnityEngine_ParticleSystem_MinMaxCurve_o v36; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v37; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v38; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46FBE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_11358/*"ResNameNodeName"*/);
    sub_1C37058(&StringLiteral_12329/*"START_NAME_REVEAL_EFFECT"*/);
    sub_1C37058(&StringLiteral_9387/*"NameRevealCrossFade"*/);
    sub_1C37058(&StringLiteral_4889/*"CrtNameNodeName"*/);
    sub_1C37058(&StringLiteral_17253/*"bit_result_name_reveal"*/);
    sub_1C37058(&StringLiteral_13046/*"StartAnimationName"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_9388/*"NameRevealParticleNodeName"*/);
    byte_4C46FBE = 1;
  }
  v38 = 0;
  m_ParticleSystem = 0;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (int32_t)after,
    (const MethodInfo *)callback);
  this->fields.resSvtNameData = after;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resSvtNameData, (int32_t)after, v10, v11);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12329/*"START_NAME_REVEAL_EFFECT"*/, 0);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4889/*"CrtNameNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v17 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v17, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11358/*"ResNameNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v19 = (System_String_o *)gameObject;
  v20 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(v20, v19, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v21 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9388/*"NameRevealParticleNodeName"*/,
                         0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0);
  if ( !this->fields.effect )
    goto LABEL_40;
  v22 = (System_String_o *)gameObject;
  v23 = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  gameObject = (char *)TransformHelper__getNodeFromName(v23, v22, 1, 0);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v24 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0).fields.m_ParticleSystem;
  v38 = UnityEngine_ParticleSystem__get_shape(v24, 0).fields.m_ParticleSystem;
  v25 = (float)((float)v21[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v37, 0, sizeof(v37));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v37, v25, 0);
  v26.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v36 = v37;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v26, &v36, 0);
  v40.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v38;
  v40.fields.x = (float)((float)v21[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v40.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v27, v40, 0);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v28);
  v31 = this->fields.crtSvtNameData;
  if ( !v31 )
    goto LABEL_40;
  v32 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v31->fields.svtId, v31->fields.limitCount, v32, v30);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0)) == 0
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                               0)) == 0 )
  {
LABEL_40:
    sub_1C372B4(gameObject);
  }
  v35 = StringLiteral_17253/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17253/*"bit_result_name_reveal"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(gameObject + 56), v35, v33, v34);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9387/*"NameRevealCrossFade"*/,
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
  ServantTreasureDeviceAddMaster_o *v22; // x22
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w25
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x25
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v27; // x26
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  __int64 v32; // x26
  __int64 v33; // x27
  ServantTreasureDeviceAddMaster_o *v34; // x23
  int32_t v35; // w0
  __int64 v36; // x8
  int32_t v37; // w24
  int32_t v38; // w26
  ServantTreasureDeviceAddEntity_o *EnableEntityBeforeClearQuest; // x23
  __int64 v40; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v42; // x8
  __int64 v43; // x8
  int32_t TransformCount; // w0
  int32_t v45; // w25
  int32_t i; // w26
  TerminalPramsManager_c *v47; // x0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v48; // x28
  int32_t id; // w29
  int32_t v50; // w3
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v51; // x0
  int32_t v52; // w1
  int32_t v53; // w2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v54; // x28
  int32_t v55; // w29
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v56; // x28
  int32_t v57; // w29
  __int64 v58; // x26
  struct System_Int32_array *v59; // x8
  struct System_Int32_array *v60; // x8
  __int64 v61; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  TreasureDvcInfo_o *v64; // [xsp+0h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4C46FB8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_12330/*"START_NOBLEUP_EFFECT"*/);
    sub_1C37058(&StringLiteral_13527/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/);
    sub_1C37058(&StringLiteral_13528/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/);
    byte_4C46FB8 = 1;
  }
  v64 = 0;
  tdInfo = 0;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    *(const MethodInfo **)&targetId);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v22 = Master_object;
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v66.fields.currentCryptoKey = v24;
  *(_QWORD *)&v66.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v66, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                        usrSvtData->fields.limitCount,
                                                        0);
  if ( !v22 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v22, v25, (int32_t)Master_object, 0, 0, 0, 0);
  v27 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1C372A4(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v27, 0);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v27;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.npInfoAddManager, (int32_t)v27, v29, v30);
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
      v31 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v34 = (ServantTreasureDeviceAddMaster_o *)v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = v33;
      *(_QWORD *)&v67.fields.fakeValue = v32;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v67, 0);
      v36 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v68.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v37 = v35;
      *(_QWORD *)&v68.fields.currentCryptoKey = v36;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v68, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE7 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE7 = 1;
      }
      Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v34 )
        goto LABEL_72;
      EnableEntityBeforeClearQuest = ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
                                       v34,
                                       v37,
                                       v38,
                                       *(_DWORD *)&Master_object[2].fields._MasterName_k__BackingField->fields._firstChar,
                                       0);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        if ( EnableEntityBeforeClearQuest )
        {
          v40 = 8;
          while ( 1 )
          {
            treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
            if ( !treasureDeviceIds )
              break;
            if ( v40 - 8 >= (unsigned __int64)LODWORD(treasureDeviceIds->max_length) )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&treasureDeviceIds->obj.klass + v40),
              targetLv,
              0,
              0);
            v42 = EnableEntity->fields.treasureDeviceIds;
            if ( !v42 )
              break;
            if ( v40 - 8 >= (unsigned __int64)LODWORD(v42->max_length) )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&v42->obj.klass + v40),
              targetLv,
              0,
              0);
            Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                  (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
            v43 = v40 - 7;
            ++v40;
            if ( v43 >= (int)Master_object )
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
                                                            (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        v58 = 8;
        while ( 1 )
        {
          v59 = EnableEntity->fields.treasureDeviceIds;
          if ( !v59 )
            break;
          if ( v58 - 8 >= (unsigned __int64)LODWORD(v59->max_length) )
            goto LABEL_73;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v59->obj.klass + v58),
            targetLvOld,
            0,
            0);
          v60 = EnableEntity->fields.treasureDeviceIds;
          if ( !v60 )
            break;
          if ( v58 - 8 >= (unsigned __int64)LODWORD(v60->max_length) )
LABEL_73:
            sub_1C372BC(Master_object);
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v60->obj.klass + v58),
            targetLv,
            0,
            0);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_3107848 *)Method_System_Linq_Enumerable_Count_int___);
          v61 = v58 - 7;
          ++v58;
          if ( v61 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1C372B4(Master_object);
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
      v45 = TransformCount;
      for ( i = 0; v45 != i; ++i )
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
          if ( !byte_4C3CFE7 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C3CFE7 = 1;
          }
          v47 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v47 = TerminalPramsManager_TypeInfo;
          }
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                                usrSvtData,
                                                                &v64,
                                                                i,
                                                                v47->static_fields->_QuestId_k__BackingField,
                                                                -1,
                                                                0,
                                                                0);
          if ( !v64 )
            goto LABEL_72;
          v48 = *p_npInfoAddManager;
          id = v64->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0);
          if ( !v48 )
            goto LABEL_72;
          v50 = (int)Master_object;
          v51 = v48;
          v52 = id;
          v53 = targetLv;
        }
        else
        {
          if ( !tdInfo )
            goto LABEL_72;
          v54 = *p_npInfoAddManager;
          v55 = tdInfo->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0);
          if ( !v54 )
            goto LABEL_72;
          v50 = (int)Master_object;
          v51 = v54;
          v52 = v55;
          v53 = targetLvOld;
        }
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(v51, v52, v53, v50, 0);
        if ( !tdInfo )
          goto LABEL_72;
        v56 = *p_npInfoAddManager;
        v57 = tdInfo->fields.id;
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(usrSvtData, i, 0);
        if ( !v56 )
          goto LABEL_72;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          v56,
          v57,
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
                                                        (System_String_o *)StringLiteral_13527/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13528/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12330/*"START_NOBLEUP_EFFECT"*/, 0);
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

  if ( (byte_4C46FC0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12334/*"START_POWERUP_EFFECT"*/);
    byte_4C46FC0 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12334/*"START_POWERUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t kind; // w9
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x4
  struct ServantChangeEntity_o *resSvtNameData; // x8
  int32_t voiceSvtId; // w1
  int32_t LimitCountByImageLimitCostumeIn; // w2
  bool v9; // w3
  CombineResultEffectComponent_o *v10; // x0
  struct ServantChangeEntity_o *v11; // x8
  int32_t CardImageLimitCount; // w0
  int32_t v13; // w20
  const MethodInfo *v14; // x1

  if ( (byte_4C46FD1 & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46FD1 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v13 = CardImageLimitCount;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v13, 0);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 1, 0);
        resSvtNameData = this->fields.resSvtNameData;
        if ( resSvtNameData )
          voiceSvtId = resSvtNameData->fields.svtVoiceId;
        else
          voiceSvtId = -1;
        LimitCountByImageLimitCostumeIn = -1;
        v9 = 1;
        v10 = this;
        goto LABEL_31;
      }
LABEL_32:
      sub_1C372B4(Instance);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode(Instance, 1, 0);
    v11 = this->fields.resSvtNameData;
    if ( v11 )
      voiceSvtId = v11->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    LimitCountByImageLimitCostumeIn = this->fields.costumeId;
  }
  v10 = this;
  v9 = 0;
LABEL_31:
  CombineResultEffectComponent__getSvtVoiceData(v10, voiceSvtId, LimitCountByImageLimitCostumeIn, v9, v5);
  CombineResultEffectComponent__loadVoiceData(this, v14);
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
  if ( (byte_4C46FD0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1C37058(&UserServantEntity_TypeInfo);
    byte_4C46FD0 = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v59, 0) < 1 )
    {
      v41 = v2->fields.baseUsrSvtData;
      v42 = (UserServantEntity_o *)sub_1C372A4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43157284(v42, v41, 0);
      v2->fields.resUsrSvtData = v42;
      p_resUsrSvtData = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
      sub_1C36FFC((CGThumbnailListItem_o *)p_resUsrSvtData, (int32_t)v42, v44, v45);
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
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v64, 0);
        v46[6] = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v49 + 1, 0);
        v50 = *p_resUsrSvtData;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( *p_resUsrSvtData )
        {
          v51 = (ServantLimitImageMaster_o *)this;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                     (*p_resUsrSvtData)[5],
                                                     0);
          v52 = *p_resUsrSvtData;
          if ( *p_resUsrSvtData )
          {
            v53 = (int)this;
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v52[6], 0);
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
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                     &v58,
                                                     0);
          if ( v7 )
          {
            v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v7,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                         &v57,
                                                         0);
              if ( !v11 )
                goto LABEL_62;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v11,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v12 = v2->fields.baseUsrSvtData;
                v13 = (UserServantEntity_o *)sub_1C372A4(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_43157284(v13, v12, 0);
                v2->fields.resUsrSvtData = v13;
                sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.resUsrSvtData, (int32_t)v13, v14, v15);
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
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                         v62,
                                                         0);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v20 = (UserServantEntity_o *)sub_1C372A4(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_43157284(v20, resUsrSvtData, 0);
                v2->fields.resUsrSvtData = v20;
                sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.resUsrSvtData, (int32_t)v20, v21, v22);
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
                  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v63, 0);
                  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v27 + 1, 0);
                  this = *(CombineResultEffectComponent_o **)&v28.fields.currentCryptoKey;
                  if ( v24 )
                  {
                    v24[6] = v28;
                    v29 = *v8;
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    if ( *v8 )
                    {
                      v30 = (ServantLimitImageMaster_o *)this;
                      this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                 (*v8)[5],
                                                                 0);
                      if ( *v8 )
                      {
                        v31 = (int)this;
                        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896((*v8)[6], 0);
                        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                        this = (CombineResultEffectComponent_o *)ImageLimitCount__GetDispLimitCount(v32, 0);
                        if ( v30 )
                        {
                          v33 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v30, v31, (int32_t)this, 0);
                          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v33, 0);
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
                              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                              if ( this )
                              {
                                this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                           (DataManager_o *)this,
                                                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                                if ( *v8 )
                                {
                                  v37 = (ServantLimitMaster_o *)this;
                                  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                             (*v8)[5],
                                                                             0);
                                  if ( *v8 )
                                  {
                                    v38 = (int)this;
                                    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
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
    sub_1C372B4(this);
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
  System_Collections_ObjectModel_Collection_T__o *v14; // x26
  System_Collections_Generic_List_object__o *v15; // x23
  int32_t v16; // w27
  int v17; // w8
  Il2CppObject *v18; // x28
  int v19; // w8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x24
  Il2CppObject *v27; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int v31; // w20
  BalanceConfig_c *v32; // x0
  TerminalSceneComponent_c *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w24
  const MethodInfo *v40; // x2

  if ( (byte_4C46FC6 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
    sub_1C37058(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__getEntityList__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__109_0__);
    sub_1C37058(&CombineResultEffectComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_12336/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1C37058(&StringLiteral_17264/*"bit_result_ultimate_anim"*/);
    sub_1C37058(&StringLiteral_13046/*"StartAnimationName"*/);
    byte_4C46FC6 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    phase,
    (const MethodInfo *)msgCallBack);
  this->fields.messageCallback = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.messageCallback, 0, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  v14 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 5);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v14 )
    goto LABEL_57;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v14,
         (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v14,
                   v16,
                   (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        break;
      v17 = *((_DWORD *)Instance + 9);
      v18 = (Il2CppObject *)Instance;
      if ( v17 >= 1 && v17 == questId )
      {
        v19 = *((_DWORD *)Instance + 10);
        if ( v19 < 1 || v19 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v23 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v18,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v18;
              sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
            }
          }
        }
      }
      if ( ++v16 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v14,
                      (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) )
        goto LABEL_20;
    }
LABEL_57:
    sub_1C372B4(Instance);
  }
LABEL_20:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v26 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      v26,
      v27,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__109_0__,
      0);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v26;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__109_0, (int32_t)v26, v29, v30);
  }
  if ( !v15 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_58346216(
    v15,
    v26,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v31 = v15->fields._size;
  if ( v31 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v15,
                 0,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v32 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  if ( !v32->static_fields->CloseSecretTreasureDeviceQuestClear && v15->fields._size >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v15,
                   v39,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_57;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v40) )
        break;
      if ( ++v39 >= v15->fields._size )
        goto LABEL_33;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v39,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_33:
  if ( v31 < 1 )
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
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    v33 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v33 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v33->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_57;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0);
    this->fields.messageCallback = msgCallBack;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.messageCallback, (int32_t)msgCallBack, v34, v35);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_57;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                 0);
    if ( !Instance )
      goto LABEL_57;
    v38 = StringLiteral_17264/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17264/*"bit_result_ultimate_anim"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)Instance + 56), v38, v36, v37);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12336/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
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
  char *fsm; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1

  if ( (byte_4C46FC7 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&StringLiteral_12336/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1C37058(&StringLiteral_17264/*"bit_result_ultimate_anim"*/);
    sub_1C37058(&StringLiteral_13046/*"StartAnimationName"*/);
    byte_4C46FC7 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
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
                          (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                          0)) == 0
      || (v13 = StringLiteral_17264/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17264/*"bit_result_ultimate_anim"*/,
          sub_1C36FFC((CGThumbnailListItem_o *)(fsm + 56), v13, v11, v12),
          (fsm = (char *)this->fields.fsm) == 0) )
    {
      sub_1C372B4(fsm);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12336/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0);
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
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t TransformCount; // w0
  struct System_Int32_array *skillIds; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C46FB7 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_12341/*"START_SKILLUP_EFFECT"*/);
    sub_1C37058(&StringLiteral_12225/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/);
    sub_1C37058(&StringLiteral_12226/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/);
    byte_4C46FB7 = 1;
  }
  svtSkillAddEnt = 0;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.kind = kind;
  sub_1C36FFC(
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
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
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12225/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)baseUsrSvtData, 0),
        unSummonDetail = this->fields.unSummonDetail,
        baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12226/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)baseUsrSvtData, 0),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.fsm) == 0) )
  {
LABEL_18:
    sub_1C372B4(baseUsrSvtData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)baseUsrSvtData, (System_String_o *)StringLiteral_12341/*"START_SKILLUP_EFFECT"*/, 0);
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
  struct ServantVoiceData_array *v14; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v16; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  unsigned __int64 v19; // x20
  __int64 v20; // x27
  int32_t v21; // w21
  int32_t v22; // w22

  if ( (byte_4C46FEC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C37058(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C46FEC = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_3107FE0 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_44061972(Item, faceType, formId, 0, fadeTime, 0);
          return;
        }
      }
    }
LABEL_25:
    sub_1C372B4(Item);
  }
  v14 = this->fields.playVoiceList;
  if ( !v14 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= LODWORD(v14->max_length) )
LABEL_23:
    sub_1C372BC(Item);
  v16 = v14->m_Items[playCnt];
  if ( !v16 )
    goto LABEL_25;
  multiFace = v16->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v16->fields.multiForm;
    if ( multiForm )
    {
      if ( (_DWORD)Item == (unsigned int)multiFace->max_length && (_DWORD)Item == LODWORD(multiForm->max_length) )
      {
        if ( (unsigned int)multiFace->max_length )
        {
          v19 = 0;
          v20 = (unsigned int)Item - 1LL;
          do
          {
            if ( v19 >= LODWORD(multiForm->max_length) )
              break;
            if ( !standFigureCollects )
              goto LABEL_25;
            v21 = multiFace->m_Items[v19];
            v22 = multiForm->m_Items[v19];
            Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)standFigureCollects,
                                         v19,
                                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_44061972(Item, v21, v22, 0, fadeTime, 0);
            if ( v20 == v19 )
              return;
            ++v19;
          }
          while ( v19 < LODWORD(multiFace->max_length) );
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
  System_Action_o *v26; // x20
  CombineResultEffectComponent_o *v27; // x0
  const MethodInfo *v28; // x2

  if ( (byte_4C46FBA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__96_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46FBA = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    infoIdx,
    (const MethodInfo *)returnQpNum);
  this->fields.baseUsrSvtData = baseData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v17, v18);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v19, v20);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineVoiceId, 0, v21, v22);
  this->fields.autoFadeout = 0;
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(gameObject);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__96_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v27, v26, v28);
}


void CombineResultEffectComponent__SetSvtCombineInfo_48577252(
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_o *v26; // x20
  CombineResultEffectComponent_o *v27; // x0
  const MethodInfo *v28; // x2

  if ( (byte_4C46FBB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__97_0__);
    byte_4C46FBB = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (const MethodInfo *)baseData);
  this->fields.resUsrSvtData = resData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v19, v20);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_6;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineVoiceId, (int32_t)voiceId, v22, v23);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_6:
    sub_1C372B4(gameObject);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__97_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v27, v26, v28);
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
  System_Action_o *v26; // x20
  CombineResultEffectComponent_o *v27; // x0
  const MethodInfo *v28; // x2

  if ( (byte_4C46FBC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__98_0__);
    byte_4C46FBC = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.returnQpNum = returnQpNum;
  this->fields.returnSvtIds = returnSvtIds;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.returnSvtIds,
    (int32_t)returnSvtIds,
    infoIdx,
    *(const MethodInfo **)&normalExp);
  this->fields.baseUsrSvtData = baseData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, v19, v20);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__98_0__, 0);
  CombineResultEffectComponent__LoadCombineEffect(v27, v26, v28);
}


void CombineResultEffectComponent__ShowCostumeChangeMessage(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  System_String_o *costumeName; // x21
  System_Action_o *v6; // x22

  if ( (byte_4C47009 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__183_0__);
    sub_1C37058(&StringLiteral_3835/*"COSTUME_CHANGED_MSG"*/);
    byte_4C47009 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        costumeName = this->fields.costumeName,
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowCostumeChangeMessage_b__183_0__,
          0),
        !skillResultInfoWindow) )
  {
    sub_1C372B4(bgCollider);
  }
  SkillUpResultWindowComponent__OpenCostumeChangeMessage(
    skillResultInfoWindow,
    costumeName,
    (System_String_o *)StringLiteral_3835/*"COSTUME_CHANGED_MSG"*/,
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

  if ( (byte_4C46FF5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__158_0__);
    byte_4C46FF5 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__158_0__,
          0),
        !limitUpResultCheck) )
  {
    sub_1C372B4(bgCollider);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 0, 0);
}


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

  if ( (byte_4C46FF3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__156_0__);
    byte_4C46FF3 = 1;
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
    sub_1C372BC(bgCollider);
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
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__156_0__, 0);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1C372B4(bgCollider);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    index,
    titleText,
    kind == 8,
    v12,
    0);
}


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

  if ( (byte_4C46FF4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__157_0__);
    byte_4C46FF4 = 1;
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
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__157_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1C372B4(bgCollider);
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

  if ( (byte_4C46FF2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__155_0__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C46FF2 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v10, 0);
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__155_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1C372B4(bgCollider);
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

  if ( (byte_4C46FF6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__160_0__);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46FF6 = 1;
  }
  v16 = 0;
  tdInfo = 0;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v14, 0);
  if ( !v6 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v6,
             bgCollider,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__160_0__,
          0),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1C372B4(bgCollider);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v11, v12, v13, 0);
}


void CombineResultEffectComponent__StartPlayVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *playVoiceList; // x0
  VoiceMaster_o *IsNullOrEmpty; // x0
  struct ServantVoiceData_array *v5; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v7; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  VoiceMaster_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  struct ServantVoiceData_array *v12; // x8
  __int64 v13; // x9
  ServantVoiceData_o *v14; // x8
  int FlagRequestNumber; // w0
  struct ServantVoiceData_array *v16; // x8
  __int64 v17; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *v18; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C46FED & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_PlayVoice__);
    sub_1C37058(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C46FED = 1;
  }
  playVoiceList = (System_Collections_ICollection_o *)this->fields.playVoiceList;
  this->fields.unSkippableFlag = 0;
  IsNullOrEmpty = (VoiceMaster_o *)BasicHelper__IsNullOrEmpty(playVoiceList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    v5 = this->fields.playVoiceList;
    if ( !v5 )
      goto LABEL_24;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= LODWORD(v5->max_length) )
      goto LABEL_25;
    v7 = v5->m_Items[playCnt];
    if ( !v7 )
      goto LABEL_24;
    if ( v7->fields.unSkippable )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsNullOrEmpty = (VoiceMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_VoiceMaster___);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_24;
      v9 = IsNullOrEmpty;
      v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v21.fields.currentCryptoKey = v11;
      *(_QWORD *)&v21.fields.fakeValue = v10;
      IsNullOrEmpty = (VoiceMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v21, 0);
      v12 = this->fields.playVoiceList;
      if ( !v12 )
        goto LABEL_24;
      v13 = this->fields.playCnt;
      if ( (unsigned int)v13 >= LODWORD(v12->max_length) )
LABEL_25:
        sub_1C372BC(IsNullOrEmpty);
      v14 = v12->m_Items[v13];
      if ( !v14 || !v9 )
        goto LABEL_24;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v9, (int32_t)IsNullOrEmpty, v14->fields.id, 1, 0);
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
    v16 = this->fields.playVoiceList;
    if ( !v16 )
      goto LABEL_24;
    v17 = this->fields.playCnt;
    if ( (unsigned int)v17 < LODWORD(v16->max_length) )
    {
      IsNullOrEmpty = (VoiceMaster_o *)v16->m_Items[v17];
      if ( IsNullOrEmpty )
      {
        v18 = ServantVoiceData__get_BeforePerformance((ServantVoiceData_o *)IsNullOrEmpty, 0);
        v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_CombineResultEffectComponent_PlayVoice__, 0);
        CombineResultEffectComponent__PlayPerformance(this, v18, v19, v20);
        return;
      }
LABEL_24:
      sub_1C372B4(IsNullOrEmpty);
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

  if ( (byte_4C4701A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_long___);
    byte_4C4701A = 1;
  }
  this->fields.returnQpNum = 0;
  v6 = Method_System_Array_Empty_long___;
  v7 = *((_QWORD *)Method_System_Array_Empty_long___ + 7);
  if ( !v7 )
  {
    sub_1C877C8(Method_System_Array_Empty_long___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C(inited);
  v10 = *(struct System_Int64_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.returnSvtIds = *v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.returnSvtIds, (int32_t)v11, v2, v3);
}


void CombineResultEffectComponent___CloseLimitCountSealDialog_b__178_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C4701B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_1__);
    byte_4C4701B = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__178_1__,
    0);
  if ( !limitUpResultCheck )
    sub_1C372B4(v5);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0);
}


void CombineResultEffectComponent___EndLoad_b__148_0(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C47019 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_5443/*"END_LOAD"*/);
    byte_4C47019 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.fsm) == 0) )
    sub_1C372B4(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5443/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___FadeoutProcess_b__172_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C372B4(this);
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

  if ( (byte_4C47017 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5443/*"END_LOAD"*/);
    byte_4C47017 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5443/*"END_LOAD"*/, 0);
}


void CombineResultEffectComponent___SetAppendSkillCombineInfo_b__111_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21

  if ( (byte_4C47015 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_12328/*"START_LVEXCEED_EFFECT"*/);
    sub_1C37058(&StringLiteral_17244/*"bit_result_extraskill"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    byte_4C47015 = 1;
  }
  if ( data )
  {
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                data,
                                (System_String_o *)StringLiteral_17244/*"bit_result_extraskill"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51154888,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v7 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v8 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C3C926 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v8 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v7, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C372B4(transform);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12328/*"START_LVEXCEED_EFFECT"*/, 0);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x0
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *v13; // x21

  if ( (byte_4C47016 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    sub_1C37058(&StringLiteral_12315/*"START_COMBINE_LIMIT"*/);
    sub_1C37058(&StringLiteral_17238/*"bit_result_"*/);
    byte_4C47016 = 1;
  }
  if ( data )
  {
    v5 = sub_1C37100(string___TypeInfo, 1);
    v6 = System_Int32__ToString((int)this + 332, 0);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_63561656(
                                              (System_String_o *)StringLiteral_17238/*"bit_result_"*/,
                                              v6,
                                              0);
    if ( !v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1C372BC(transform);
    *(_QWORD *)(v5 + 32) = transform;
    sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)transform, v8, v9);
    v10 = System_String__Concat_63602172((System_String_array *)v5, 0);
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                data,
                                v10,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51154888,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v12 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C3C926 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v13 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v12, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_19:
      sub_1C372B4(transform);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12315/*"START_COMBINE_LIMIT"*/, 0);
  }
}


void CombineResultEffectComponent___SetCostumeCombineInfo_b__102_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  UnityEngine_GameObject_o *v5; // x20

  if ( (byte_4C47012 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12320/*"START_COSTUME_EFFECT"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    sub_1C37058(&StringLiteral_17262/*"bit_result_skinchange"*/);
    byte_4C47012 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17262/*"bit_result_skinchange"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v5 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v5, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(Effect);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12320/*"START_COSTUME_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__107_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21

  if ( (byte_4C47014 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_17247/*"bit_result_friendship_exceed"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    sub_1C37058(&StringLiteral_12324/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4C47014 = 1;
  }
  if ( data )
  {
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                data,
                                (System_String_o *)StringLiteral_17247/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51154888,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v7 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v8 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C3C926 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v8 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v7, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C372B4(transform);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12324/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetLimitUpCombineInfo_b__99_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  UnityEngine_GameObject_o *v5; // x20

  if ( (byte_4C47011 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17240/*"bit_result_advent"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    sub_1C37058(&StringLiteral_12327/*"START_LIMITUP_EFFECT"*/);
    byte_4C47011 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17240/*"bit_result_advent"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v5 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v5, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(Effect);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12327/*"START_LIMITUP_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__105_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21

  if ( (byte_4C47013 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_12328/*"START_LVEXCEED_EFFECT"*/);
    sub_1C37058(&StringLiteral_17252/*"bit_result_limitbreak"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    byte_4C47013 = 1;
  }
  if ( data )
  {
    Object_object__51154888 = AssetData__GetObject_object__51154888(
                                data,
                                (System_String_o *)StringLiteral_17252/*"bit_result_limitbreak"*/,
                                (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51154888,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v7 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    v8 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C3C926 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v8 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0)) == 0
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                    0)) == 0
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v7, 0),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
    {
LABEL_17:
      sub_1C372B4(transform);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12328/*"START_LVEXCEED_EFFECT"*/, 0);
  }
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__96_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  UnityEngine_GameObject_o *v5; // x20

  if ( (byte_4C4700E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_12345/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C37058(&StringLiteral_17257/*"bit_result_servant"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    byte_4C4700E = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17257/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v5 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v5, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)Effect, 0, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(Effect);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12345/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtCombineInfo_b__97_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  UnityEngine_GameObject_o *v5; // x20

  if ( (byte_4C4700F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12345/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C37058(&StringLiteral_17257/*"bit_result_servant"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    byte_4C4700F = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17257/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v5 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v5, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(Effect);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12345/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___SetSvtEqCombineInfo_b__98_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  UnityEngine_GameObject_o *v5; // x20

  if ( (byte_4C47010 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12345/*"START_SVTCOMBINE_EFFECT"*/);
    sub_1C37058(&StringLiteral_17257/*"bit_result_servant"*/);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    byte_4C47010 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17257/*"bit_result_servant"*/,
                                                     0,
                                                     v2);
  if ( !this->fields.fsm
    || (v5 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0)) == 0)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                                           0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v5, 0),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(Effect);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12345/*"START_SVTCOMBINE_EFFECT"*/, 0);
}


void CombineResultEffectComponent___ShowCostumeChangeMessage_b__183_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowLimitUpChangeInfo_b__158_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowNpChangeInfo_b__156_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeInfo_b__157_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowSkillChangeMessage_b__155_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__160_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
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
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v10; // x22
  __int64 v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UserServantEntity_o *v14; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CommonUI_o *v20; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v23; // x25
  const MethodInfo *v24; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *v25; // x8

  if ( (byte_4C47018 & 1) == 0 )
  {
    sub_1C37058(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__7__);
    sub_1C37058(&CombineResultEffectComponent___c__DisplayClass147_2_TypeInfo);
    sub_1C37058(&UserServantEntity_TypeInfo);
    byte_4C47018 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_71266940(effect, 0);
  this->fields.effect = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effect, 0, v4, v5);
  CombineResultEffectComponent__Close(this, v6);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
    v10 = EntityDefinitely;
    v11 = sub_1C372A4(CombineResultEffectComponent___c__DisplayClass147_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 24) = this;
      sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v12, v13);
      v14 = (UserServantEntity_o *)sub_1C372A4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43157536(v14, v10, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v11 + 16) = callbackFunc;
      sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)callbackFunc, v16, v17);
      this->fields.callbackFunc = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v18, v19);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v14 )
      {
        v20 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v14->fields.treasureDeviceLv1;
        v23 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C372A4(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v23,
          (Il2CppObject *)v11,
          Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__7__,
          v24);
        if ( v20 )
        {
          CommonUI__OpenNobleCombineResult(
            v20,
            18,
            v14,
            targetId,
            treasureDeviceLv1,
            v23,
            this->fields.targetIdOld,
            v14->fields.treasureDeviceLv1,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_1C372B4(Instance);
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
    sub_1C372B4(this);
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
  ServantFlagEntity_o *v6; // x8
  struct System_Int32_array *args; // x8
  bool result; // w0
  int32_t v9; // w8
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C46FC9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46FC9 = 1;
  }
  svtFlagEntity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_42689724(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0) )
  {
LABEL_13:
    v9 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_15:
    sub_1C372B4(Instance);
  }
  Instance = (Il2CppObject *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_13;
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v6 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_15;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v6->fields.args;
  if ( !args )
    goto LABEL_15;
  if ( LODWORD(args->max_length) <= 1 )
    sub_1C372BC(Instance);
  result = 1;
  this->fields.targetId = args->m_Items[1];
  v9 = args->m_Items[0];
LABEL_14:
  this->fields.targetIdOld = v9;
  return result;
}


void CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  const MethodInfo *v4; // x1
  int32_t kind; // w8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  int32_t v9; // w0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v17; // x20
  __int64 v18; // x21
  int32_t svtId; // w21
  System_String_o *dispBattleName; // x26
  int32_t v21; // w0
  System_Int32_array *v22; // x20
  float r; // s8
  struct System_Int32_array *skillIds; // x8
  int32_t v25; // w9
  int max_length; // w10
  UnityEngine_Collider_c *klass; // x8
  unsigned int v28; // w22
  float g; // s9
  float b; // s10
  float a; // s11
  float v32; // s12
  float v33; // s13
  float v34; // s14
  float v35; // s15
  ServantSkillAddEntity_o *v36; // x9
  unsigned __int64 v37; // x8
  __int64 v38; // x10
  struct System_Int32_array *v39; // x11
  unsigned int v40; // w13
  int32_t v41; // w11
  int32_t TransformCount; // w0
  int32_t displayCount; // w9
  int32_t v44; // w8
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  int32_t v49; // w9
  int32_t v50; // w8
  int32_t v51; // w21
  int32_t TransformedSameSlotSkillId; // w0
  int32_t v53; // w8
  int32_t v54; // w22
  UserServantEntity_o *v55; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x22
  int32_t targetId; // w23
  int32_t targetLv; // w24
  System_Action_o *v59; // x25
  TransformServantInfo_o *transformInfo; // [xsp+40h] [xbp-A0h] BYREF
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+48h] [xbp-98h] BYREF
  TransformServantInfo_o *v62; // [xsp+98h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C46FFD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C37058(&Method_CombineResultEffectComponent_clickNext__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C46FFD = 1;
  }
  v62 = 0;
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
    bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v4);
    if ( ((unsigned __int8)bgCollider & 1) != 0 )
    {
      CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v6);
      bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
      v8 = this->fields.skillShowIndex + 1;
      this->fields.skillShowIndex = v8;
      if ( bgCollider )
      {
        v9 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
               (CombineResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
               v7);
        goto LABEL_19;
      }
      goto LABEL_102;
    }
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsHeroineCostumeChangeNotShowInfo(this, v4);
      if ( ((unsigned __int8)bgCollider & 1) == 0 && this->fields.treasureDeviceEnabled )
      {
        CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, v4);
        this->fields.treasureDeviceEnabled = 0;
LABEL_29:
        CombineResultEffectComponent__EndDisp(this, v10);
        return;
      }
      kind = this->fields.kind;
    }
  }
  if ( (unsigned int)kind <= 0x1B && ((1 << kind) & 0x8000110) != 0 )
  {
    bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowNextNpInfo(this, v4);
    if ( ((unsigned __int8)bgCollider & 1) != 0 )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v11);
      bgCollider = (UnityEngine_Collider_o *)this->fields.npInfoAddManager;
      v8 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v8;
      if ( bgCollider )
      {
        v9 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
               (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
               0);
LABEL_19:
        if ( v8 < v9 )
          return;
        goto LABEL_29;
      }
LABEL_102:
      sub_1C372B4(bgCollider);
    }
    kind = this->fields.kind;
  }
  if ( (unsigned int)kind <= 0x1A && ((1 << kind) & 0x4080402) != 0 )
  {
    bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowLimitUpInfo(this, v4);
    if ( ((unsigned __int8)bgCollider & 1) != 0 )
    {
      v12 = Method_CombineResultEffectComponent_clickNext__;
      if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C37070(Method_CombineResultEffectComponent_clickNext__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C3703C(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v14);
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
          v44 = TransformCount;
          bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
          this->fields.displayCount = displayCount - 1;
          if ( bgCollider )
          {
            bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                     (UserServantEntity_o *)bgCollider,
                                                     &transformInfo,
                                                     v44 - displayCount,
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
    v18 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v63.fields.currentCryptoKey = v18;
    *(_QWORD *)&v63.fields.fakeValue = v17;
    bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v63, 0);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_102;
    svtId = (int)bgCollider;
    dispBattleName = string_TypeInfo->static_fields->Empty;
    v21 = UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0);
    if ( v21 >= 2 )
    {
      v49 = this->fields.displayCount;
      v50 = v21;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v49 - 1;
      if ( !bgCollider )
        goto LABEL_102;
      v51 = v50 - v49;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               (UserServantEntity_o *)bgCollider,
                                               v50 - v49,
                                               -1,
                                               -1,
                                               1,
                                               -1,
                                               1,
                                               0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_102;
      v22 = (System_Int32_array *)bgCollider;
      TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                     this->fields.baseUsrSvtData,
                                     this->fields.targetId,
                                     v51 - 1,
                                     v51,
                                     0);
      v53 = this->fields.kind;
      this->fields.targetId = TransformedSameSlotSkillId;
      if ( v53 == 7 )
      {
        v54 = TransformedSameSlotSkillId;
        v55 = this->fields.baseUsrSvtData;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3CFE7 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3CFE7 = 1;
        }
        bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v55 )
          goto LABEL_102;
        this->fields.targetIdOld = UserServantEntity__GetTransformedOldSkillId(
                                     v55,
                                     v54,
                                     *(_DWORD *)(bgCollider[7].fields.m_CachedPtr + 20),
                                     v51,
                                     0);
      }
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( !bgCollider )
        goto LABEL_102;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                               (UserServantEntity_o *)bgCollider,
                                               &v62,
                                               v51,
                                               0);
      if ( !v62 )
        goto LABEL_102;
      svtId = v62->fields.svtId;
      dispBattleName = v62->fields.titleText;
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
      v22 = (System_Int32_array *)bgCollider;
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
          v25 = this->fields.displayCount;
          max_length = skillIds->max_length;
          this->fields.displayCount = v25 - 1;
          klass = bgCollider[2].klass;
          if ( !klass )
            goto LABEL_102;
          v28 = max_length - v25;
          if ( (unsigned int)(max_length - v25) >= LODWORD(klass->_1.namespaze) )
LABEL_103:
            sub_1C372BC(bgCollider);
          dispBattleName = (System_String_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v28);
          v64.fields.r = 0.0;
          v64.fields.g = 0.0;
          v64.fields.b = 0.0;
          v64.fields.a = 0.0;
          CondLabelColor = ServantSkillAddEntity__GetCondLabelColor((ServantSkillAddEntity_o *)bgCollider, v64, 0);
          bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
          if ( !svtSkillAddEnt )
            goto LABEL_102;
          r = CondLabelColor.fields.r;
          g = CondLabelColor.fields.g;
          b = CondLabelColor.fields.b;
          a = CondLabelColor.fields.a;
          v66.fields.r = 0.0;
          v66.fields.g = 0.0;
          v66.fields.b = 0.0;
          v66.fields.a = 0.0;
          CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(svtSkillAddEnt, v66, 0);
          if ( !v22 )
            goto LABEL_102;
          v32 = CondSpriteColor.fields.r;
          v33 = CondSpriteColor.fields.g;
          v34 = CondSpriteColor.fields.b;
          v35 = CondSpriteColor.fields.a;
          if ( (int)v22->max_length > 0 )
          {
            v36 = svtSkillAddEnt;
            v37 = 0;
            v38 = 4LL * (unsigned int)v22->max_length;
            while ( v38 != v37 )
            {
              if ( !v36 )
                goto LABEL_102;
              v39 = v36->fields.skillIds;
              if ( !v39 )
                goto LABEL_102;
              v40 = v39->max_length;
              if ( !v40 )
                goto LABEL_103;
              if ( v22->m_Items[v37 / 4] == v39->m_Items[0] )
              {
                if ( v28 >= v40 )
                  goto LABEL_103;
                v41 = v39->m_Items[v28];
                this->fields.targetId = v41;
                v22->m_Items[v37 / 4] = v41;
              }
              v37 += 4LL;
              if ( v38 == v37 )
                goto LABEL_97;
            }
            goto LABEL_103;
          }
LABEL_97:
          skillResultInfoWindow = this->fields.skillResultInfoWindow;
          targetId = this->fields.targetId;
          targetLv = this->fields.targetLv;
          v59 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v59, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
          if ( skillResultInfoWindow )
          {
            v68.fields.r = r;
            v68.fields.g = g;
            v68.fields.b = b;
            v68.fields.a = a;
            v69.fields.r = v32;
            v69.fields.g = v33;
            v69.fields.b = v34;
            v69.fields.a = v35;
            SkillUpResultWindowComponent__OpenSkillUpResultInfo(
              skillResultInfoWindow,
              targetId,
              targetLv,
              v59,
              this->fields.targetIdOld,
              this->fields.targetLvOld,
              svtId,
              v22,
              this->fields.baseUsrSvtData,
              this->fields.kind == 3,
              1,
              0,
              dispBattleName,
              0,
              v68,
              v69,
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
    v32 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
    v35 = 0.0;
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
    CombineResultEffectComponent__stopVoice(this, v15);
  }
LABEL_76:
  v45 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v45 = (_QWORD *)sub_1C37070(Method_CombineResultEffectComponent_clickNext__);
  v46 = (System_Reflection_MethodBase_o *)sub_1C3703C(v45, v45[4]);
  OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0, 0);
  if ( this->fields.kind != 24 )
    CombineResultEffectComponent__ReleaseVoiceData(this, v47);
  if ( !CombineResultEffectComponent__OpenNotification(this, v47) )
    CombineResultEffectComponent__FadeoutProcess(this, v48);
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
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v13; // x8
  ServantVoiceMaster_o *v14; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4C46FD5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46FD5 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.asstName, 0, v2, v3);
  this->fields.playVoiceList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v5, v6);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v10;
  *(_QWORD *)&v22.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v22, 0);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v11, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v13 = this->fields.resUsrSvtData) == 0)
    || (v14 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                     v13->fields.limitCount,
                                     0),
        !v14) )
  {
LABEL_12:
    sub_1C372B4(Instance);
  }
  Entity = ServantVoiceMaster__getEntity(v14, 2, SvtVoiceId, (int32_t)Instance, 0);
  this->fields.svtVoiceEntity = Entity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v16, v17);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0);
    this->fields.asstName = VoiceAssetName;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v20, v21);
  }
}


ServantVoiceData_array *CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_4C46FE9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4C46FE9 = 1;
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
                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  }
  else
  {
    return 0;
  }
}


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

  if ( (byte_4C46FE8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C46FE8 = 1;
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
      sub_1C372B4(resUsrSvtData);
    v11 = *(_QWORD *)&v9->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v9->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14, 0);
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
                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v13; // x21
  __int64 v14; // x24
  int32_t v15; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v17; // x8
  ServantLimitImageMaster_o *v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v6 = costumeId;
  if ( (byte_4C46FD4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46FD4 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.asstName = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.asstName, 0, costumeId, (const MethodInfo *)isLimitUp);
  this->fields.playVoiceList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v9, v10);
  if ( voiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_26;
    v14 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v14;
    *(_QWORD *)&v29.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v29, 0);
    voiceId = ServantVoiceMaster__getSvtVoiceId(v15, 0);
  }
  if ( v6 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_44142552(Master_object->fields.limitCount, 0);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0);
    v6 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v17 = this->fields.resUsrSvtData;
  if ( !v17 )
    goto LABEL_26;
  v18 = (ServantLimitImageMaster_o *)Master_object;
  v20 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v20;
  *(_QWORD *)&v30.fields.fakeValue = v19;
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v30, 0);
  if ( !v18
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v18,
                                       (int32_t)Master_object,
                                       v6,
                                       0),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0 )
  {
LABEL_26:
    sub_1C372B4(Master_object);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             voiceId,
             ServantLimitCountSealAfter,
             0);
  this->fields.svtVoiceEntity = Entity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v23, v24);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0);
    this->fields.asstName = VoiceAssetName;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v27, v28);
  }
}


void CombineResultEffectComponent__loadVoiceData(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_4C46FD6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_EndLoad__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C46FD6 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v5 = (SoundManager_o *)Instance;
    v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0);
    if ( !v5 )
      sub_1C372B4(v7);
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
  if ( (byte_4C46FDA & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C37058(&StringLiteral_3059/*"BaseSvtNodeName"*/);
    byte_4C46FDA = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C372B4(this);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v6[6], 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3059/*"BaseSvtNodeName"*/,
    0,
    1,
    v10);
}


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

  if ( (byte_4C46FE4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_4338/*"CardScale"*/);
    sub_1C37058(&StringLiteral_3058/*"BaseSvtCardNodeName"*/);
    byte_4C46FE4 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3058/*"BaseSvtCardNodeName"*/,
                            0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_25;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4338/*"CardScale"*/,
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
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v28, 0);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v15->fields.limitCount, 0);
  if ( !v16 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, (int32_t)fsm, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetCardImageLimitCount(
                                                            v14,
                                                            ServantLimitCountSealAfter,
                                                            1,
                                                            0,
                                                            0);
  fsm = (PlayMakerFSM_o *)CombineResultEffectComponent__GetResolveImageLimitCount(
                            CardImageLimitCount,
                            (int32_t)CardImageLimitCount,
                            this->fields.baseUsrSvtData,
                            v19);
  if ( !v8 )
    goto LABEL_25;
  v20 = (int)fsm;
  gameObject = (CombineResultEffectComponent_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v22 = this->fields.baseUsrSvtData;
  v23 = (UnityEngine_GameObject_o *)gameObject;
  ResolveOverwriteStatus = CombineResultEffectComponent__GetResolveOverwriteStatus(gameObject, v22, v24);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_40659868(
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
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C3C921 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v26, 0)) == 0) )
  {
LABEL_25:
    sub_1C372B4(fsm);
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
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v8; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v15; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C46FE2 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_8434/*"LimitUpResSvtNodeName"*/);
    byte_4C46FE2 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  this->fields.playVoiceList = CostumeSvtVoiceList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)CostumeSvtVoiceList, v4, v5);
  playVoiceList = this->fields.playVoiceList;
  if ( playVoiceList )
  {
    if ( !LODWORD(playVoiceList->max_length) )
      sub_1C372BC(v6);
    v8 = playVoiceList->m_Items[0];
    if ( !v8 )
LABEL_13:
      sub_1C372B4(v6);
    face = v8->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v16, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_13;
  v13 = v6;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v13,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8434/*"LimitUpResSvtNodeName"*/,
    v15);
}


void CombineResultEffectComponent__setEffectEnable(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1C372B4(0);
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
  if ( (byte_4C46FDD & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1C37058(&StringLiteral_8433/*"LimitUpBaseSvtNodeName"*/);
    byte_4C46FDD = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v13, 0);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1C372B4(this);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v6[6], 0);
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
    (System_String_o *)StringLiteral_8433/*"LimitUpBaseSvtNodeName"*/,
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
  ServantVoiceData_o *v8; // x8
  int32_t face; // w22
  int32_t ImageLimitCount; // w2
  const MethodInfo *v11; // x5

  if ( (byte_4C46FE3 & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&StringLiteral_8433/*"LimitUpBaseSvtNodeName"*/);
    byte_4C46FE3 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->max_length) )
      sub_1C372BC(LimitUpSvtVoiceList);
    v8 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v8 )
      sub_1C372B4(LimitUpSvtVoiceList);
    face = v8->fields.face;
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
    (System_String_o *)StringLiteral_8433/*"LimitUpBaseSvtNodeName"*/,
    v11);
}


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

  if ( (byte_4C46FE6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4338/*"CardScale"*/);
    sub_1C37058(&StringLiteral_3058/*"BaseSvtCardNodeName"*/);
    byte_4C46FE6 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3058/*"BaseSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_4338/*"CardScale"*/,
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nameRevealCard, (int32_t)TexturePrefab, v18, v19);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v20 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C3C921 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0)) == 0 )
  {
LABEL_18:
    sub_1C372B4(fsm);
  }
  v21.fields.x = v14;
  v21.fields.y = v14;
  v21.fields.z = v14;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v21, 0);
}


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

  if ( (byte_4C46FE7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4338/*"CardScale"*/);
    sub_1C37058(&StringLiteral_11387/*"ResultSvtCardNodeName"*/);
    byte_4C46FE7 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11387/*"ResultSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_4338/*"CardScale"*/,
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
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_40659868(
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
  if ( !byte_4C3C921 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v17
    || (UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v16, 0)) == 0) )
  {
LABEL_19:
    sub_1C372B4(fsm);
  }
  v18.fields.x = v10;
  v18.fields.y = v10;
  v18.fields.z = v10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v18, 0);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v16, 1.89, 0);
}


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

  if ( (byte_4C46FE5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_4338/*"CardScale"*/);
    sub_1C37058(&StringLiteral_11387/*"ResultSvtCardNodeName"*/);
    byte_4C46FE5 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11387/*"ResultSvtCardNodeName"*/,
                            0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0);
  if ( !this->fields.effect )
    goto LABEL_25;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4338/*"CardScale"*/,
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
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v28, 0);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.resUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v15->fields.limitCount, 0);
  if ( !v16 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, (int32_t)fsm, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardImageLimitCount = (CombineResultEffectComponent_o *)ImageLimitCount__GetCardImageLimitCount(
                                                            v14,
                                                            ServantLimitCountSealAfter,
                                                            1,
                                                            0,
                                                            0);
  fsm = (PlayMakerFSM_o *)CombineResultEffectComponent__GetResolveImageLimitCount(
                            CardImageLimitCount,
                            (int32_t)CardImageLimitCount,
                            this->fields.resUsrSvtData,
                            v19);
  if ( !v8 )
    goto LABEL_25;
  v20 = (int)fsm;
  gameObject = (CombineResultEffectComponent_o *)UnityEngine_Component__get_gameObject(v8, 0);
  v22 = this->fields.resUsrSvtData;
  v23 = (UnityEngine_GameObject_o *)gameObject;
  ResolveOverwriteStatus = CombineResultEffectComponent__GetResolveOverwriteStatus(gameObject, v22, v24);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_40659868(
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
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0);
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4C3C921 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v26, 0)) == 0) )
  {
LABEL_25:
    sub_1C372B4(fsm);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
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
  const MethodInfo *v39; // x1
  struct UserServantEntity_o *v40; // x8
  __int64 v41; // x22
  __int64 v42; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  int32_t v44; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t kind; // w8
  System_Int32_array *v47; // x20
  int32_t TransformCount; // w21
  const MethodInfo *v49; // x2
  System_String_o *dispBattleName; // x27
  float b; // s8
  struct UserServantEntity_o *v52; // x8
  ServantSkillAddMaster_o *v53; // x21
  __int64 v54; // x22
  __int64 v55; // x23
  struct UserServantEntity_o *v56; // x8
  int32_t v57; // w22
  int32_t targetId; // w24
  int32_t v59; // w23
  ServantSkillAddEntity_o *EnableEntity; // x0
  ServantSkillAddEntity_o *v61; // x21
  float a; // s9
  float v63; // s11
  float v64; // s13
  float v65; // s14
  float v66; // s15
  float g; // s10
  float r; // s12
  struct System_String_array *titles; // x8
  __int64 v70; // x0
  __int64 v71; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v73; // x20
  __int64 v74; // x27
  int32_t v75; // w22
  struct UserServantEntity_o *v76; // x8
  __int64 v77; // x23
  __int64 v78; // x24
  int v79; // w8
  int v80; // w9
  __int64 v81; // x23
  int32_t v82; // w1
  struct UserServantEntity_o *v83; // x8
  __int64 v84; // x23
  __int64 v85; // x24
  int32_t v86; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  UserServantEntity_o *v90; // x8
  Il2CppObject *v91; // x23
  struct UserServantEntity_o *v92; // x8
  __int64 v93; // x25
  __int64 v94; // x26
  int64_t v95; // x24
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v97; // x23
  struct UserServantEntity_o *v98; // x8
  __int64 v99; // x23
  __int64 v100; // x24
  bool IsForceReleaseSkillRankUp; // w29
  int v102; // w22
  _BOOL8 v103; // x0
  Il2CppObject *current; // x23
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
  int32_t lv; // w1
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v156; // w21
  _BOOL4 v157; // w22
  const MethodInfo *v158; // x1
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  struct UserServantEntity_o *v162; // x8
  __int128 v163; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v164; // x20
  Il2CppObject *v165; // x0
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  struct SvtCombineResultWindowComponent_o *v168; // x20
  struct UserServantEntity_o *v169; // x21
  int32_t v170; // w22
  System_Action_o *v171; // x23
  SvtCombineResultWindowComponent_o *v172; // x0
  UserServantEntity_o *v173; // x1
  int32_t v174; // w2
  System_Action_o *v175; // x3
  System_Action_o *v176; // x4
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v178; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  Il2CppObject *v181; // x20
  AvalonSceneManager_c *v182; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v184; // x0
  intptr_t *v185; // x8
  SkillUpResultWindowComponent_o *v186; // x21
  int32_t v187; // w23
  int32_t v188; // w28
  System_Action_o *v189; // x24
  int32_t v190; // w26
  int32_t v191; // w22
  const MethodInfo *v192; // x2
  int32_t v193; // w29
  System_Int32_array *v194; // x0
  UserServantEntity_o *v195; // x22
  System_Int32_array *v196; // x20
  const MethodInfo *v197; // x2
  __int64 v198; // x22
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  __int64 v206; // x23
  System_Action_o *v207; // x24
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  Il2CppObject *v210; // x21
  CombineResultEffectComponent_ClickDelegate_o *v211; // x22
  const MethodInfo *v212; // x3
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v216; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v218; // x23
  System_Action_o *v219; // x24
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v221; // x21
  System_String_o *v222; // x22
  Il2CppObject *v223; // x21
  Il2CppObject *v224; // x0
  AvalonSceneManager_c *v225; // x8
  System_Action_o *v226; // x21
  int32_t dispLimitCount; // [xsp+4Ch] [xbp-134h]
  int32_t dispLimitCounta; // [xsp+4Ch] [xbp-134h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v229; // [xsp+50h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v230; // [xsp+70h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v231; // [xsp+90h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v232; // [xsp+B0h] [xbp-D0h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+D0h] [xbp-B0h] BYREF
  int32_t v234; // [xsp+DCh] [xbp-A4h] BYREF
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // 0:x0.16
  UnityEngine_Color_o v246; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v249; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v250; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v251; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v252; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v253; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v254; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C46FEA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent_CheckReturnCombineItem__);
    sub_1C37058(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1C37058(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_0__);
    sub_1C37058(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_1__);
    sub_1C37058(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_2__);
    sub_1C37058(&Method_CombineResultEffectComponent__setSkillResultInfo_b__147_6__);
    sub_1C37058(&CombineResultFormManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass147_0__setSkillResultInfo_b__4__);
    sub_1C37058(&CombineResultEffectComponent___c__DisplayClass147_0_TypeInfo);
    sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__3__);
    sub_1C37058(&CombineResultEffectComponent___c__DisplayClass147_1_TypeInfo);
    sub_1C37058(&StringLiteral_10822/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/);
    sub_1C37058(&StringLiteral_10823/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46FEA = 1;
  }
  v234 = 0;
  entity = 0;
  memset(&v232, 0, sizeof(v232));
  this->fields.skipEndDispAfterVoicePlayed = 0;
  v3 = sub_1C372A4(CombineResultEffectComponent___c__DisplayClass147_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_233;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_178;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_233;
      v148 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v149 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v231.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v231.fields.fakeValue = v148;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v230 = v231;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v230, 0);
      if ( !v149 )
        goto LABEL_233;
      v150 = DataMasterBase_object__object__long___GetEntity(
               v149,
               Instance,
               (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v150;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)v150, v151, v152);
LABEL_178:
      v153 = this->fields.baseUsrSvtData;
      if ( !v153 )
        goto LABEL_233;
      lv = v153->fields.lv;
      v234 = lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_233;
      v156 = resUsrSvtData->fields.lv;
      v157 = CombineResultEffectComponent__CheckCombineLimit(this, lv, v156, v9);
      if ( !System_Int32__Equals_65071592((int32_t)&v234, v156, 0)
        && this->fields.asstName
        && this->fields.svtVoiceEntity
        && (playVoiceList = this->fields.playVoiceList) != 0 )
      {
        this->fields.skipEndDispAfterVoicePlayed = v157;
        this->fields.maxPlayCnt = playVoiceList->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, v158);
      }
      else
      {
        this->fields.firstPlayedVoiceFlag = 0;
      }
      *(_QWORD *)(v3 + 16) = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), 0, v159, v160);
      if ( !v157 )
        goto LABEL_212;
      v198 = sub_1C372A4(CombineResultEffectComponent___c__DisplayClass147_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v198, 0);
      if ( !v198 )
        goto LABEL_233;
      *(_QWORD *)(v198 + 24) = v3;
      sub_1C36FFC((CGThumbnailListItem_o *)(v198 + 24), v3, v199, v200);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v198 + 16) = callbackFunc;
      sub_1C36FFC((CGThumbnailListItem_o *)(v198 + 16), (int32_t)callbackFunc, v202, v203);
      this->fields.callbackFunc = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v204, v205);
      v206 = *(_QWORD *)(v198 + 24);
      v207 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v207,
        (Il2CppObject *)v198,
        Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__3__,
        0);
      if ( !v206 )
        goto LABEL_233;
      *(_QWORD *)(v206 + 16) = v207;
      sub_1C36FFC((CGThumbnailListItem_o *)(v206 + 16), (int32_t)v207, v208, v209);
      v210 = *(Il2CppObject **)(v198 + 24);
      v211 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C372A4(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v211,
        v210,
        Method_CombineResultEffectComponent___c__DisplayClass147_0__setSkillResultInfo_b__4__,
        v212);
      this->fields.callbackFunc = v211;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v211, v213, v214);
LABEL_212:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_216:
        CombineResultEffectComponent__EndDisp(this, v7);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v216 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v218 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v218, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      v219 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v219, (Il2CppObject *)this, Method_CombineResultEffectComponent_CheckReturnCombineItem__, 0);
      if ( !svtResultInfoWindow )
        goto LABEL_233;
      v172 = svtResultInfoWindow;
      v173 = v216;
      v174 = baseUsrSvtCollictionLv;
      v175 = v218;
      v176 = v219;
LABEL_215:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v172, v173, v174, v175, v176, 0);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1C37100(string___TypeInfo, 1);
      v17 = this->fields.baseUsrSvtData;
      if ( !v17 )
        goto LABEL_233;
      v18 = Instance;
      p_svtId = &v17->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v235.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v235.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v235, v16);
      if ( !v18 )
        goto LABEL_233;
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_234;
      *(_QWORD *)(v18 + 32) = Instance;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 32), Instance, v20, v21);
      v22 = System_String__Concat_63602172((System_String_array *)v18, 0);
      if ( UnityEngine_PlayerPrefs__GetInt_71224996(v22, 0) != 1 || (this->fields.kind | 0x10) == 0x1A )
        goto LABEL_22;
      Instance = sub_1C37100(string___TypeInfo, 1);
      v24 = this->fields.baseUsrSvtData;
      if ( !v24 )
        goto LABEL_233;
      v25 = Instance;
      v26 = &v24->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v236.fields.currentCryptoKey = v26;
      *(_QWORD *)&v236.fields.fakeValue = 0;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v236, v23);
      if ( !v25 )
        goto LABEL_233;
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_234;
      *(_QWORD *)(v25 + 32) = Instance;
      sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 32), Instance, v27, v28);
      v29 = System_String__Concat_63602172((System_String_array *)v25, 0);
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
          *(_QWORD *)&v237.fields.currentCryptoKey = v35;
          *(_QWORD *)&v237.fields.fakeValue = v34;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v237, 0);
          v36 = this->fields.baseUsrSvtData;
          v37 = Instance == 2;
          if ( v36 )
          {
            v38 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v36->fields.limitCount, 0) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v40 = this->fields.baseUsrSvtData;
              if ( !v40 )
                goto LABEL_233;
              v42 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
              v41 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
              v43 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1096LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v238.fields.currentCryptoKey = v42;
              *(_QWORD *)&v238.fields.fakeValue = v41;
              v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v238, 0);
              v37 = (v38 == 2)
                  | System_Linq_Enumerable__Contains_int_(
                      v43,
                      v44,
                      (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              kind = this->fields.kind;
              isLimitUpSuppression = kind != 10 && kind != 26;
            }
            if ( (v37 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, v39);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v221 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v221,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__147_6__,
              0);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v221, 1, 0);
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
        CombineResultEffectComponent__StartPlayVoice(this, v7);
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
      v47 = (System_Int32_array *)Instance;
      TransformCount = UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v49);
      if ( !Instance )
        goto LABEL_233;
      dispBattleName = *(System_String_o **)(Instance + 24);
      b = 0.0;
      if ( TransformCount > 1 )
        goto LABEL_132;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
      v52 = this->fields.baseUsrSvtData;
      if ( !v52 )
        goto LABEL_233;
      v53 = (ServantSkillAddMaster_o *)Instance;
      v55 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v239.fields.currentCryptoKey = v55;
      *(_QWORD *)&v239.fields.fakeValue = v54;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v239, 0);
      v56 = this->fields.baseUsrSvtData;
      if ( !v56 )
        goto LABEL_233;
      v57 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v56->fields.limitCount, 0);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_233;
      targetId = this->fields.targetId;
      v59 = Instance;
      Instance = UserServantEntity__getDispLimitCount(this->fields.baseUsrSvtData, 1, 0);
      if ( !v53 )
        goto LABEL_233;
      EnableEntity = ServantSkillAddMaster__GetEnableEntity(v53, v57, v59, targetId, 0, Instance, 1, 0);
      if ( EnableEntity )
      {
        v61 = EnableEntity;
        Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntity->fields.titles, 0);
        a = 0.0;
        v63 = 0.0;
        v64 = 0.0;
        v65 = 0.0;
        v66 = 0.0;
        g = 0.0;
        r = 0.0;
        if ( (Instance & 1) == 0 )
        {
          titles = v61->fields.titles;
          if ( !titles )
            goto LABEL_233;
          if ( !LODWORD(titles->max_length) )
LABEL_234:
            sub_1C372BC(Instance);
          dispBattleName = titles->m_Items[0];
          v246.fields.r = 0.0;
          v246.fields.g = 0.0;
          v246.fields.b = 0.0;
          v246.fields.a = 0.0;
          CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v61, v246, 0);
          r = CondLabelColor.fields.r;
          g = CondLabelColor.fields.g;
          b = CondLabelColor.fields.b;
          a = CondLabelColor.fields.a;
          CondLabelColor.fields.r = 0.0;
          CondLabelColor.fields.g = 0.0;
          CondLabelColor.fields.b = 0.0;
          CondLabelColor.fields.a = 0.0;
          CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v61, CondLabelColor, 0);
          v63 = CondSpriteColor.fields.r;
          v64 = CondSpriteColor.fields.g;
          v65 = CondSpriteColor.fields.b;
          v66 = CondSpriteColor.fields.a;
        }
      }
      else
      {
LABEL_132:
        a = 0.0;
        v63 = 0.0;
        v64 = 0.0;
        v65 = 0.0;
        v66 = 0.0;
        g = 0.0;
        r = 0.0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      v115 = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v117 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v117, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v120);
      if ( Instance && skillResultInfoWindow )
      {
        v249.fields.r = r;
        v249.fields.g = g;
        v249.fields.b = b;
        v249.fields.a = a;
        v252.fields.r = v63;
        v252.fields.g = v64;
        v252.fields.b = v65;
        v252.fields.a = v66;
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          v115,
          targetLv,
          v117,
          targetIdOld,
          targetLvOld,
          *(_DWORD *)(Instance + 16),
          v47,
          this->fields.baseUsrSvtData,
          this->fields.kind == 3,
          1,
          0,
          dispBattleName,
          0,
          v249,
          v252,
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
      v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v11 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_48681928(
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v162 = this->fields.baseUsrSvtData;
      if ( !v162 )
        goto LABEL_233;
      v163 = *(_OWORD *)&v162->fields.id.fields.fakeValue;
      v164 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v231.fields.currentCryptoKey = *(_OWORD *)&v162->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v231.fields.fakeValue = v163;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v229 = v231;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v229, 0);
      if ( !v164 )
        goto LABEL_233;
      v165 = DataMasterBase_object__object__long___GetEntity(
               v164,
               Instance,
               (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v165;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)v165, v166, v167);
      v168 = this->fields.svtResultInfoWindow;
      v169 = this->fields.resUsrSvtData;
      v170 = this->fields.baseUsrSvtCollictionLv;
      v171 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v171,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__setSkillResultInfo_b__147_0__,
        0);
      if ( !v168 )
        goto LABEL_233;
      v172 = v168;
      v173 = v169;
      v174 = v170;
      v175 = v171;
      v176 = 0;
      goto LABEL_215;
    case 7:
    case 0x15:
      v70 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
        v70 = sub_1C8776C(v10);
      v71 = *(_QWORD *)(*(_QWORD *)(v70 + 192) + 16LL);
      if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
        v71 = sub_1C8776C(v10);
      Instance = **(_QWORD **)(v71 + 184);
      if ( !Instance )
        goto LABEL_233;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v73 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v73,
        (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
      v74 = 0;
      v75 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v75 > *(_DWORD *)(*(_QWORD *)(Instance + 184) + 40LL) )
        {
          if ( this->fields.kind == 7 )
          {
            Instance = (__int64)this->fields.baseUsrSvtData;
            if ( !Instance )
              goto LABEL_233;
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
            v90 = this->fields.baseUsrSvtData;
            dispLimitCount = Instance;
            if ( !v90 )
              goto LABEL_233;
            Instance = UserServantEntity__IsHeroine(v90, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_233;
              v91 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C3CD62 )
              {
                sub_1C37058(&NetworkManager_TypeInfo);
                byte_4C3CD62 = 1;
              }
              Instance = (__int64)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (__int64)NetworkManager_TypeInfo;
              }
              v92 = this->fields.baseUsrSvtData;
              if ( !v92 )
                goto LABEL_233;
              v94 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
              v93 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
              v95 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v242.fields.currentCryptoKey = v94;
              *(_QWORD *)&v242.fields.fakeValue = v93;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v242, 0);
              if ( !v91 )
                goto LABEL_233;
              Instance = UserServantCollectionMaster__TryGetEntity(
                           (UserServantCollectionMaster_o *)v91,
                           &entity,
                           v95,
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
                  v97 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v97,
                               (const MethodInfo_30F32A0 *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v97, 0);
                    dispLimitCount = Instance;
                  }
                }
              }
            }
            v98 = this->fields.baseUsrSvtData;
            if ( !v98 )
              goto LABEL_233;
            v100 = *(_QWORD *)&v98->fields.svtId.fields.currentCryptoKey;
            v99 = *(_QWORD *)&v98->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v243.fields.currentCryptoKey = v100;
            *(_QWORD *)&v243.fields.fakeValue = v99;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v243, 0);
            if ( !v74 )
              goto LABEL_233;
            if ( !MasterData_object )
              goto LABEL_233;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  Instance,
                                  *(_DWORD *)(v74 + 20),
                                  this->fields.targetIdOld,
                                  0);
            if ( !Instance )
              goto LABEL_233;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v231,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            IsForceReleaseSkillRankUp = 0;
            LOBYTE(v102) = 0;
            *(_OWORD *)&v232.fields._list = *(_OWORD *)&v231.fields.currentCryptoKey;
            v232.fields._current = (Il2CppObject *)v231.fields.fakeValue;
            do
            {
              v103 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v232,
                       (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v103 )
                break;
              current = v232.fields._current;
              if ( !v232.fields._current )
                sub_1C372B4(v103);
              if ( !ServantSkillEntity__isEnable((ServantSkillEntity_o *)v232.fields._current, 0, 0) )
                goto LABEL_129;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C3CD62 )
              {
                sub_1C37058(&NetworkManager_TypeInfo);
                byte_4C3CD62 = 1;
              }
              v105 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v105 = NetworkManager_TypeInfo;
              }
              v106 = this->fields.baseUsrSvtData;
              if ( !v106 )
                sub_1C372B4(v105);
              v107 = v106->fields.lv;
              v109 = *(_QWORD *)&v106->fields.limitCount.fields.currentCryptoKey;
              v108 = *(_QWORD *)&v106->fields.limitCount.fields.fakeValue;
              userIdNumber = v105->static_fields->userIdNumber;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v244.fields.currentCryptoKey = v109;
              *(_QWORD *)&v244.fields.fakeValue = v108;
              v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v244, 0);
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
                v102 = 1;
              }
              else
              {
LABEL_129:
                v102 = 0;
                IsForceReleaseSkillRankUp = ServantSkillEntity__IsForceReleaseSkillRankUp(
                                              (ServantSkillEntity_o *)current,
                                              0);
              }
            }
            while ( !(v102 | IsForceReleaseSkillRankUp) );
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v232,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
            isForceRelease = IsForceReleaseSkillRankUp;
            isRelease = (unsigned __int8)v102 != 0;
          }
          else
          {
            isForceRelease = 0;
            isRelease = 0;
          }
          v186 = this->fields.skillResultInfoWindow;
          v187 = this->fields.targetId;
          v188 = this->fields.targetLv;
          v189 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v189, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
          v190 = this->fields.targetIdOld;
          v191 = this->fields.targetLvOld;
          Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v192);
          if ( Instance )
          {
            dispLimitCounta = v191;
            if ( v73 )
            {
              v193 = *(_DWORD *)(Instance + 16);
              v194 = System_Collections_Generic_List_int___ToArray(
                       v73,
                       (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
              v195 = this->fields.baseUsrSvtData;
              v196 = v194;
              Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v197);
              if ( Instance )
              {
                if ( v186 )
                {
                  v251.fields.r = 0.0;
                  v251.fields.g = 0.0;
                  v251.fields.b = 0.0;
                  v251.fields.a = 0.0;
                  v254.fields.r = 0.0;
                  v254.fields.g = 0.0;
                  v254.fields.b = 0.0;
                  v254.fields.a = 0.0;
                  SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                    v186,
                    v187,
                    v188,
                    v189,
                    v190,
                    dispLimitCounta,
                    v193,
                    v196,
                    v195,
                    0,
                    isRelease,
                    0,
                    *(System_String_o **)(Instance + 24),
                    isForceRelease,
                    v251,
                    v254,
                    0);
                  return;
                }
              }
            }
          }
LABEL_233:
          sub_1C372B4(Instance);
        }
        v76 = this->fields.baseUsrSvtData;
        if ( !v76 )
          goto LABEL_233;
        v78 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v77 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v240.fields.currentCryptoKey = v78;
        *(_QWORD *)&v240.fields.fakeValue = v77;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v240, 0);
        if ( !MasterData_object )
          goto LABEL_233;
        Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              v75,
                              0);
        if ( !Instance )
          goto LABEL_233;
        v79 = *(_DWORD *)(Instance + 24);
        if ( v79 < 1 )
        {
LABEL_75:
          v83 = this->fields.baseUsrSvtData;
          if ( !v83 )
            goto LABEL_233;
          v85 = *(_QWORD *)&v83->fields.svtId.fields.currentCryptoKey;
          v84 = *(_QWORD *)&v83->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v241.fields.currentCryptoKey = v85;
          *(_QWORD *)&v241.fields.fakeValue = v84;
          v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v241, 0);
          Instance = (__int64)ServantSkillMaster__GetEntity((ServantSkillMaster_o *)MasterData_object, v86, v75, 1, 0);
          if ( Instance )
          {
            v82 = *(_DWORD *)(Instance + 28);
            v81 = v74;
LABEL_80:
            if ( !v73 )
              goto LABEL_233;
            items = v73->fields._items;
            v88 = Method_System_Collections_Generic_List_int__Add__;
            ++v73->fields._version;
            if ( !items )
              goto LABEL_233;
            size = v73->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v73,
                v82,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
            }
            else
            {
              v73->fields._size = size + 1;
              items->m_Items[size] = v82;
            }
          }
          else
          {
            v81 = v74;
          }
          ++v75;
          v74 = v81;
          continue;
        }
        break;
      }
      v80 = 0;
      while ( v79 != v80 )
      {
        v81 = *(_QWORD *)(Instance + 8LL * v80 + 32);
        if ( !v81 )
          goto LABEL_233;
        v82 = *(_DWORD *)(v81 + 28);
        if ( v82 == this->fields.targetId )
          goto LABEL_80;
        if ( v79 == ++v80 )
          goto LABEL_75;
      }
      goto LABEL_234;
    case 9:
      v143 = this->fields.skillResultInfoWindow;
      v144 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v146 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v146, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0);
      if ( !v143 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v143, v144, oldFriendShipRank, v146, 0);
      return;
    case 0xB:
      v121 = this->fields.skillResultInfoWindow;
      v122 = this->fields.baseUsrSvtData;
      v123 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.messageCallback, 0, (int32_t)v8, v9);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      v125 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE7 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE7 = 1;
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
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_233;
      v127 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10823/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0);
        if ( !v127 )
          goto LABEL_233;
        v130 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v127, -1, -1, 0, 0);
        v132 = System_String__Format(v130, Name, 0);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10822/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0);
        if ( !v126 )
          goto LABEL_233;
        v222 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v126, 0);
        if ( !v127 )
          goto LABEL_233;
        v223 = (Il2CppObject *)Instance;
        v224 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v127, -1, -1, 0, 0);
        v132 = System_String__Format_63602948(v222, v223, v224, 0);
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))messageCallback->fields.invoke_impl)(
        messageCallback->fields.method_code,
        v132,
        messageCallback->fields.method);
LABEL_227:
      if ( !this->fields.callbackFunc )
        return;
      v181 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v225 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v225 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v225->static_fields->DEFAULT_FADE_TIME;
      v184 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v185 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__147_2__;
LABEL_231:
      v226 = v184;
      System_Action___ctor(v184, (Il2CppObject *)this, *v185, 0);
      if ( v181 )
      {
        CommonUI__maskFadeout((CommonUI_o *)v181, 1, DEFAULT_FADE_TIME, v226, 0);
        return;
      }
      goto LABEL_233;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_227;
LABEL_196:
      v181 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v182 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v182 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v182->static_fields->DEFAULT_FADE_TIME;
      v184 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v185 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__147_1__;
      goto LABEL_231;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v178 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v8);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_233;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v178,
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
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_48509388(
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
      v137 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
      *(_QWORD *)&v245.fields.currentCryptoKey = v142;
      *(_QWORD *)&v245.fields.fakeValue = v141;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v245, 0);
      if ( !v134 )
        goto LABEL_233;
      v250.fields.r = 0.0;
      v250.fields.g = 0.0;
      v250.fields.b = 0.0;
      v250.fields.a = 0.0;
      v253.fields.r = 0.0;
      v253.fields.g = 0.0;
      v253.fields.b = 0.0;
      v253.fields.a = 0.0;
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
        v250,
        v253,
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

  if ( (byte_4C46FFA & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C46FFA = 1;
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
    sub_1C36FFC(p_player, 0, v6, v7);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A800E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A8009C;
}


System_IAsyncResult_o *CombineResultEffectComponent_ClickDelegate__BeginInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C4701C & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C4701C = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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

  if ( (byte_4C4701D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
    byte_4C4701D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.afterSkillList, (int32_t)v6, v7, v8);
}


void CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *afterSkillList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C4701F & 1) == 0 )
  {
    sub_1C37058(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4C4701F = 1;
  }
  v7 = sub_1C372A4(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList) == 0)
    || (items = afterSkillList->fields._items,
        v12 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_1C372B4(afterSkillList);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), v7, v9, v10);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C4701E & 1) == 0 )
  {
    sub_1C37058(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4C4701E = 1;
  }
  v7 = sub_1C372A4(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList) == 0)
    || (items = beforeSkillList->fields._items,
        v12 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_1C372B4(beforeSkillList);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), v7, v9, v10);
  }
}


CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4C47021 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4C47021 = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1C372B4(0);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4C47022 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__);
    byte_4C47022 = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1C372B4(this);
  return afterSkillList->fields._size;
}


CombineResultEffectComponent_CostumeSkillInfo_o *CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4C47020 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4C47020 = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1C372B4(0);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A80168;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A80148;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A80100;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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

  if ( (byte_4C47023 & 1) == 0 )
  {
    sub_1C37058(&CombineResultEffectComponent___c_TypeInfo);
    byte_4C47023 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return voiceData->fields.additionalPerformances;
}


bool CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__153_1(
        CombineResultEffectComponent___c_o *this,
        ServantVoicePerformance_o *performanceData,
        const MethodInfo *method)
{
  if ( !performanceData )
    sub_1C372B4(this);
  return !System_String__IsNullOrEmpty(performanceData->fields.assetName, 0);
}


int32_t CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__109_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return System_Int32__CompareTo_65071444((_DWORD)a + 24, b->fields.priority, 0);
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

  if ( (byte_4C47024 & 1) == 0 )
  {
    sub_1C37058(&CombineResultEffectComponent_TypeInfo);
    byte_4C47024 = 1;
  }
  if ( assetData )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = assetData;
    sub_1C36FFC(
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
  const MethodInfo *v9; // x1
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *v10; // x8
  const MethodInfo *v11; // x1
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *v12; // x8
  struct CombineResultEffectComponent___c__DisplayClass147_0_o *v13; // x8
  struct CombineResultEffectComponent_o *v14; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__5; // x22
  CommonUI_o *v17; // x20
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_4C47025 & 1) == 0 )
  {
    sub_1C37058(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__5__);
    byte_4C47025 = 1;
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
  UnityEngine_Object__DestroyImmediate_71266940(effect, 0);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[3].fields.__9__5 = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this[3].fields.__9__5, 0, v6, v7);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v10->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, v9);
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)v12->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[4].fields.CS___8__locals1 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass147_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = v2->fields.CS___8__locals1;
    if ( v13 )
    {
      v14 = v13->fields.__4__this;
      if ( v14 )
      {
        baseUsrSvtData = v14->fields.baseUsrSvtData;
        _9__5 = v2->fields.__9__5;
        v17 = (CommonUI_o *)this;
        if ( !_9__5 )
        {
          _9__5 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C372A4(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__5,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass147_1__setSkillResultInfo_b__5__,
            v18);
          v2->fields.__9__5 = _9__5;
          sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v19, v20);
        }
        if ( v17 )
        {
          CommonUI__OpenCombineLimit(v17, baseUsrSvtData, _9__5, 0);
          return;
        }
      }
    }
LABEL_24:
    sub_1C372B4(this);
  }
  if ( this[9].monitor )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, v11);
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
    sub_1C372B4(this);
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
  if ( (byte_4C47026 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_CardServantFlagRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass147_2_o *)sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__8__);
    byte_4C47026 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__8 = v3->fields.__9__8;
  if ( !_9__8 )
  {
    _9__8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__8,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass147_2__setSkillResultInfo_b__8__,
      0);
    v3->fields.__9__8 = _9__8;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__8, (int32_t)_9__8, v6, v7);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass147_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__8,
                                                                    (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v8 = v3->fields.__4__this;
  if ( !v8 || !this )
LABEL_11:
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  const MethodInfo *v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v2 = this;
  if ( (byte_4C47027 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass174_0_o *)sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C47027 = 1;
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
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11, 0);
  limitCount = v2->fields.limitCount;
  v9 = v7;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v9, limitCount, 0);
  ServantCharaGraphEXOpenManager__WriteData(0);
  this = (CombineResultEffectComponent___c__DisplayClass174_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1C372B4(this);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, v10);
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
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C47028 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__1__);
    byte_4C47028 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass180_0__ProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v6 )
    sub_1C372B4(Instance);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void CombineResultEffectComponent___c__DisplayClass180_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v5; // x20

  if ( (byte_4C47029 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C47029 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
LABEL_10:
    sub_1C372B4(Instance);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}