void __fastcall CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Int32_array *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_HashSet_T__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4A5210B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__, method);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v4);
    sub_1B863B8(&int___TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v7);
    byte_4A5210B = 1;
  }
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_BC3810;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v8;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.currentFigureCollectList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v11;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.afterFigureCollectList, (int32_t)v11, v12, v13);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v14 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
  if ( !v14 )
    goto LABEL_7;
  if ( !v14->max_length )
    sub_1B8661C(v14, v14);
  v14->m_Items[1] = 100;
  this->fields.ChangeCardEffectLvList = v14;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.ChangeCardEffectLvList, (int32_t)v14, v16, v17);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v18 = (System_Collections_Generic_HashSet_T__o *)sub_1B86604(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v18,
    (const MethodInfo_34B9994 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v18 )
LABEL_7:
    sub_1B86614(v14, v15);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v18,
    1,
    (const MethodInfo_34BAB98 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v18,
    10,
    (const MethodInfo_34BAB98 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v18,
    26,
    (const MethodInfo_34BAB98 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v18,
    19,
    (const MethodInfo_34BAB98 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v18,
    24,
    (const MethodInfo_34BAB98 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v18;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.limitUpKinds, (int32_t)v18, v19, v20);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A520B9 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v3);
    byte_4A520B9 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)Component_object, v5, v6);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B86614(0LL, v8);
  v9 = UnityEngine_Component__GetComponent_object_(
         transform,
         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.combineResStatus, (int32_t)v9, v10, v11);
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
  __int64 v9; // x1
  ServantLvDetailMaster_o *v10; // x22
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v13; // w8

  if ( (byte_4A520CD & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, *(_QWORD *)&oldLv);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A520CD = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v10 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__GetRarity((UserServantEntity_o *)Instance, 1, 0LL);
  HighestData = ServantLvDetailMaster__GetHighestData(v10, Rarity, oldLv, 0LL);
  Instance = ServantLvDetailMaster__GetHighestData(v10, Rarity, currentLv, 0LL);
  if ( Instance && !HighestData )
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
    sub_1B86614(Instance, v9);
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
    sub_1B86614(0LL, method);
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
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4A52107 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    byte_4A52107 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1B86614(0LL, v8);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0
  AssetData_o *effectAssetData; // x0
  AssetData_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A52104 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&CombineResultEffectComponent_TypeInfo, v3);
    sub_1B863B8(&System_GC_TypeInfo, v4);
    byte_4A52104 = 1;
  }
  this->fields.skillShowIndex = 0;
  this->fields.tdShowIndex = 0;
  CombineResultEffectComponent__DestroySvtFigure(this, method);
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_22;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !svtResultInfoWindow )
    goto LABEL_22;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0LL) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_22;
    SvtCombineResultWindowComponent__Close((SvtCombineResultWindowComponent_o *)svtResultInfoWindow, 0LL);
  }
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_22;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !svtResultInfoWindow )
    goto LABEL_22;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0LL) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_22;
    SkillUpResultWindowComponent__Close((SkillUpResultWindowComponent_o *)svtResultInfoWindow, 0LL);
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( effectAssetData && !AssetData__get_IsEmpty(effectAssetData, 0LL) )
  {
    v8 = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38744968(v8, 0LL);
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)CombineResultEffectComponent_TypeInfo->static_fields, 0, v9, v10);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_22:
    sub_1B86614(svtResultInfoWindow, v5);
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
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A52106 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_1B863B8(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__173_0__, v4);
    byte_4A52106 = 1;
  }
  v5 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B863D0(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__173_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_1B86614(v9, v10);
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v8, 0LL);
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
  __int64 v21; // x1
  DataManager_o *v22; // x24
  Il2CppObject *MasterData_object; // x25
  SvtMultiPortraitMaster_o *v24; // x24
  int32_t v25; // w23
  System_Collections_Generic_List_object__o *v26; // x24
  _BOOL8 v27; // x0
  __int64 v28; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w8
  int32_t v31; // w25
  UnityEngine_GameObject_o *v32; // x0
  int32_t portraitImageId; // w27
  UnityEngine_GameObject_o *v34; // x26
  const MethodInfo *v35; // x1
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UnityEngine_Component_o *v41; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v43; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v45; // x0
  __int64 v46; // x1
  struct System_Int32_array *v47; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v49; // x26
  StandFigureCollect_o *v50; // x27
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v60; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v62; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v64; // x20
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A520E4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B863B8(&StandFigureCollect_TypeInfo, v18);
    byte_4A520E4 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v22 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v22,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_object )
    goto LABEL_47;
  v24 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                svtId,
                                imageLimitCount,
                                0LL);
  if ( !v24 )
    goto LABEL_47;
  v25 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v24, svtId, (int32_t)Instance, 2, 0LL);
  if ( !Instance
    || (v26 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v60);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_38936732(
                                    gameObject,
                                    svtId,
                                    v25,
                                    1,
                                    faceType,
                                    1,
                                    0LL,
                                    0,
                                    -1,
                                    VoiceEffectPrefab,
                                    0LL);
      if ( Instance )
      {
        v62 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v64 = (StandFigureCollect_o *)sub_1B86604(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v64, 0LL, v62, 0LL);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v68 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v64,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
              }
              else
              {
                v70 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v70[4] = (Il2CppClass *)v64;
                sub_1B8635C((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v64, v65, v66);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1B86614(Instance, v21);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    v26,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v27 )
      break;
    current = (SvtMultiPortraitEntity_o *)v73.fields._current;
    if ( !v73.fields._current )
      sub_1B86614(v27, v28);
    klass_high = HIDWORD(v73.fields._current[2].klass);
    if ( klass_high >= 1 )
      v31 = klass_high + 1;
    else
      v31 = 1;
    if ( !StandFigureNode )
      sub_1B86614(v27, v28);
    v32 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    portraitImageId = current->fields.portraitImageId;
    v34 = v32;
    original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v35);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v34,
                         portraitImageId,
                         1,
                         faceType,
                         v31,
                         0LL,
                         0,
                         -1,
                         original,
                         0LL);
    v41 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B86614(0LL, v38);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B8635C((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v39, v40);
    transform = UnityEngine_Component__get_transform(v41, 0LL);
    if ( !transform )
      sub_1B86614(0LL, v43);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v45 = UnityEngine_Component__get_gameObject(v41, 0LL);
      v47 = current->fields.commonPosition;
      if ( !v47 )
        sub_1B86614(v45, v46);
      max_length = v47->max_length;
      if ( max_length == 1 )
        sub_1B8661C(v45, v46);
      if ( !max_length )
        sub_1B8661C(v45, v46);
      GameObjectExtensions__AddLocalPosition_34383328(v45, (float)v47->m_Items[1], (float)v47->m_Items[2], 0LL);
    }
    v49 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v50 = (StandFigureCollect_o *)sub_1B86604(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v50, current, (UIStandFigureR_o *)v41, 0LL);
    if ( !v49 )
      sub_1B86614(v51, v52);
    v55 = v49->fields._items;
    v56 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v49->fields._version;
    if ( !v55 )
      sub_1B86614(v51, v52);
    v57 = v49->fields._size;
    if ( (unsigned int)v57 >= v55->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        (Il2CppObject *)v50,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v49->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v50;
      sub_1B8635C((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v50, v53, v54);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__CreateBaseFigurePrefab(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        int32_t imageLimitCount,
        int32_t friendshipNum,
        System_String_o *nodeName,
        bool ignoreFormChangeCheck,
        int32_t overwriteType,
        const MethodInfo *method)
{
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
  UnityEngine_Component_o *StandFigureNode; // x23
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  DataManager_o *v26; // x24
  Il2CppObject *MasterData_object; // x22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v29; // x28
  __int64 v30; // x24
  __int64 v31; // x26
  int32_t v32; // w26
  const MethodInfo *v33; // x3
  int32_t v34; // w25
  char v35; // w26
  System_Collections_Generic_List_object__o *v36; // x22
  _BOOL8 v37; // x0
  __int64 v38; // x1
  SvtMultiPortraitEntity_o *current; // x27
  int klass_high; // w8
  int32_t v41; // w28
  UnityEngine_GameObject_o *v42; // x0
  int32_t portraitImageId; // w29
  UnityEngine_GameObject_o *v44; // x22
  const MethodInfo *v45; // x1
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  UnityEngine_GameObject_o *v51; // x0
  int32_t v52; // w29
  UnityEngine_GameObject_o *v53; // x22
  const MethodInfo *v54; // x1
  UnityEngine_GameObject_o *v55; // x7
  UnityEngine_Component_o *v56; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v58; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v60; // x0
  __int64 v61; // x1
  struct System_Int32_array *v62; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v64; // x29
  StandFigureCollect_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v75; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v77; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v79; // x20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  int32_t svtId; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+50h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4A520DB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&formId);
    sub_1B863B8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v13);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v19);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B863B8(&StandFigureCollect_TypeInfo, v22);
    byte_4A520DB = 1;
  }
  memset(&v90, 0, sizeof(v90));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v26 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v26,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v29 = (SvtMultiPortraitMaster_o *)Instance;
  v31 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v91.fields.currentCryptoKey = v31;
  *(_QWORD *)&v91.fields.fakeValue = v30;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v91, 0LL);
  if ( !MasterData_object )
    goto LABEL_61;
  v32 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                (int32_t)Instance,
                                imageLimitCount,
                                0LL);
  v34 = (int)Instance;
  svtId = v32;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v32,
                                  (int32_t)Instance,
                                  v33);
    v35 = (char)Instance;
  }
  else
  {
    v35 = 0;
  }
  if ( !v29 )
    goto LABEL_61;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v29, svtId, v34, overwriteType, 0LL);
  if ( !Instance
    || (v36 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v75);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_38936732(
                                     gameObject,
                                     svtId,
                                     v34,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v35 & 1,
                                     friendshipNum,
                                     VoiceEffectPrefab,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_38938228(
                                     gameObject,
                                     svtId,
                                     v34,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     0,
                                     friendshipNum,
                                     VoiceEffectPrefab,
                                     0LL));
      v77 = (UIStandFigureR_o *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
          v79 = (StandFigureCollect_o *)sub_1B86604(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v79, 0LL, v77, 0LL);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v83 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v79,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
              }
              else
              {
                v85 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v85[4] = (Il2CppClass *)v79;
                sub_1B8635C((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v79, v80, v81);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1B86614(Instance, v25);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    v36,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v90 = v89;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v37 )
      break;
    current = (SvtMultiPortraitEntity_o *)v90.fields._current;
    if ( !v90.fields._current )
      sub_1B86614(v37, v38);
    klass_high = HIDWORD(v90.fields._current[2].klass);
    if ( klass_high >= 1 )
      v41 = klass_high + 1;
    else
      v41 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1B86614(v37, v38);
      v42 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      portraitImageId = current->fields.portraitImageId;
      v44 = v42;
      original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v45);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v44,
                           portraitImageId,
                           1,
                           0,
                           v41,
                           0LL,
                           v35 & 1,
                           friendshipNum,
                           original,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_1B86614(v37, v38);
      v51 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      v52 = current->fields.portraitImageId;
      v53 = v51;
      v55 = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v54);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(v53, v52, formId, 1, 0, v41, 0LL, v55, 0LL);
    }
    v56 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B86614(0LL, v48);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B8635C((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v49, v50);
    transform = UnityEngine_Component__get_transform(v56, 0LL);
    if ( !transform )
      sub_1B86614(0LL, v58);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v60 = UnityEngine_Component__get_gameObject(v56, 0LL);
      v62 = current->fields.commonPosition;
      if ( !v62 )
        sub_1B86614(v60, v61);
      max_length = v62->max_length;
      if ( max_length == 1 )
        sub_1B8661C(v60, v61);
      if ( !max_length )
        sub_1B8661C(v60, v61);
      GameObjectExtensions__AddLocalPosition_34383328(v60, (float)v62->m_Items[1], (float)v62->m_Items[2], 0LL);
    }
    v64 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v65 = (StandFigureCollect_o *)sub_1B86604(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v65, current, (UIStandFigureR_o *)v56, 0LL);
    if ( !v64 )
      sub_1B86614(v66, v67);
    v70 = v64->fields._items;
    v71 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v64->fields._version;
    if ( !v70 )
      sub_1B86614(v66, v67);
    v72 = v64->fields._size;
    if ( (unsigned int)v72 >= v70->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v64,
        (Il2CppObject *)v65,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &v70->obj.klass + v72;
      v64->fields._size = v72 + 1;
      v73[4] = (Il2CppClass *)v65;
      sub_1B8635C((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v65, v68, v69);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x25
  UnityEngine_Object_o *monitor; // x20
  __int64 v13; // x1
  UIStandFigureR_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x24
  UnityEngine_Object_o *v24; // x20
  __int64 v25; // x1
  UIStandFigureR_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Object_o *v29; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x8
  int32_t v31; // w2
  int v32; // w9
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A52103 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A52103 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    currentFigureCollectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v34,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1B86614(v9, v10);
    monitor = (UnityEngine_Object_o *)v34.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v14 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v14 )
        sub_1B86614(0LL, v13);
      UIStandFigureR__ReleaseCharacter(v14, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_1B86614(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69356480(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v18 = this->fields.currentFigureCollectList;
  if ( !v18 )
    goto LABEL_40;
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    currentFigureCollectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v21 )
      break;
    v23 = v34.fields._current;
    if ( !v34.fields._current )
      sub_1B86614(v21, v22);
    v24 = (UnityEngine_Object_o *)v34.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      v26 = (UIStandFigureR_o *)v23[1].monitor;
      if ( !v26 )
        sub_1B86614(0LL, v25);
      UIStandFigureR__ReleaseCharacter(v26, 0LL);
      v28 = (UnityEngine_Component_o *)v23[1].monitor;
      if ( !v28 )
        sub_1B86614(0LL, v27);
      v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69356480(v29, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1B86614(currentFigureCollectList, method);
  v31 = afterFigureCollectList->fields._size;
  v32 = afterFigureCollectList->fields._version + 1;
  afterFigureCollectList->fields._size = 0;
  afterFigureCollectList->fields._version = v32;
  if ( v31 >= 1 )
    System_Array__Clear((System_Array_o *)afterFigureCollectList->fields._items, 0, v31, 0LL);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  if ( this->fields.firstPlayedVoiceFlag <= 0 )
  {
    bgCollider = this->fields.bgCollider;
    if ( !bgCollider
      || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
          (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
    {
      sub_1B86614(bgCollider, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A520EE & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_CombineResultEffectComponent__EndLoad_b__144_0__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A520EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__144_0__, 0LL);
  if ( !v8 )
    sub_1B86614(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceData_o *IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  int v7; // w9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3

  if ( (byte_4A520FA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent_EndPlayProcess__, v3);
    byte_4A520FA = 1;
  }
  IsNullOrEmpty = (ServantVoiceData_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)this->fields.playVoiceList,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    CombineResultEffectComponent__EndPlayProcess(this, v5);
  }
  else
  {
    playVoiceList = this->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_9;
    v7 = this->fields.playCnt - 1;
    if ( v7 >= playVoiceList->max_length )
      sub_1B8661C(IsNullOrEmpty, v5);
    IsNullOrEmpty = playVoiceList->m_Items[v7];
    if ( !IsNullOrEmpty )
LABEL_9:
      sub_1B86614(IsNullOrEmpty, v5);
    v8 = ServantVoiceData__get_AfterPerformance(IsNullOrEmpty, 0LL);
    v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndPlayProcess__, 0LL);
    CombineResultEffectComponent__PlayPerformance(this, v8, v9, v10);
  }
}


void __fastcall CombineResultEffectComponent__EndPlayProcess(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CombineResultEffectComponent_o *v4; // x19
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
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v19; // x8
  __int64 v20; // x20
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineResultEffectComponent_o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int m_CancellationTokenSource; // w8
  int32_t kind; // w8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v35; // x0
  unsigned int v36; // w8
  struct UserServantEntity_o *v37; // x8
  __int64 v38; // x20
  __int64 v39; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v40; // x8
  int32_t v41; // w20
  CombineResultEffectComponent_o *v42; // x0
  int32_t v43; // w21
  const MethodInfo *v44; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v45; // x22
  System_Action_o *v46; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v4 = this;
  if ( (byte_4A520FB & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&BalanceConfig_TypeInfo, v5);
    sub_1B863B8(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v6);
    sub_1B863B8(&Method_CombineResultEffectComponent__EndPlayProcess_b__158_0__, v7);
    sub_1B863B8(&Method_CombineResultEffectComponent__EndPlayProcess_b__158_1__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v9);
    sub_1B863B8(&int_____TypeInfo, v10);
    sub_1B863B8(&int___TypeInfo, v11);
    sub_1B863B8(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B863B8(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v15);
    this = (CombineResultEffectComponent_o *)sub_1B863B8(&StringLiteral_10515/*"PlayVoice"*/, v16);
    byte_4A520FB = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( (int)playCnt < v4->fields.maxPlayCnt )
  {
    playVoiceList = v4->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_47;
    if ( (unsigned int)playCnt < playVoiceList->max_length )
    {
      v19 = playVoiceList->m_Items[playCnt];
      if ( v19 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v4,
          (System_String_o *)StringLiteral_10515/*"PlayVoice"*/,
          v19->fields.delay,
          0LL);
        return;
      }
LABEL_47:
      sub_1B86614(this, method);
    }
    goto LABEL_48;
  }
  if ( v4->fields.player )
    CombineResultEffectComponent__stopVoice(v4, method);
  v4->fields.playCnt = 0;
  v4->fields.playVoiceList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.playVoiceList, 0, v2, v3);
  if ( v4->fields.firstPlayedVoiceFlag >= 1 )
  {
    v20 = sub_1B86460(int_____TypeInfo, 1LL);
    this = (CombineResultEffectComponent_o *)sub_1B86460(int___TypeInfo, 2LL);
    baseUsrSvtData = v4->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_47;
    v22 = this;
    v24 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v24;
    *(_QWORD *)&v47.fields.fakeValue = v23;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                               v47,
                                               0LL);
    if ( !v22 )
      goto LABEL_47;
    m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_48;
    LODWORD(v22->fields.svtResultInfoWindow) = (_DWORD)this;
    if ( m_CancellationTokenSource == 1 )
      goto LABEL_48;
    HIDWORD(v22->fields.svtResultInfoWindow) = v4->fields.firstPlayedVoiceFlag;
    if ( !v20 )
      goto LABEL_47;
    if ( !*(_DWORD *)(v20 + 24) )
LABEL_48:
      sub_1B8661C(this, method);
    *(_QWORD *)(v20 + 32) = v22;
    sub_1B8635C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v22, v25, v26);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (CombineResultEffectComponent_o *)NetworkManager__getRequest_object_(
                                               0LL,
                                               (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
    if ( !this )
      goto LABEL_47;
    TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)this, (System_Int32_array_array *)v20, 0LL);
    kind = v4->fields.kind;
    v4->fields.firstPlayedVoiceFlag = 0;
    if ( !kind )
      CombineResultEffectComponent__EndDisp(v4, method);
  }
  this = (CombineResultEffectComponent_o *)v4->fields.limitUpKinds;
  if ( !this )
    goto LABEL_47;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_Int32Enum___Contains(
                                             (System_Collections_Generic_HashSet_T__o *)this,
                                             v4->fields.kind,
                                             (const MethodInfo_34BA088 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v4->fields.isLimitUpSuppression )
      goto LABEL_27;
    v36 = v4->fields.kind;
    if ( v36 > 0x1A || ((1 << v36) & 0x4080002) == 0 )
      goto LABEL_27;
    v37 = v4->fields.baseUsrSvtData;
    if ( !v37 )
      goto LABEL_47;
    v39 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v39;
    *(_QWORD *)&v48.fields.fakeValue = v38;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                               v48,
                                               0LL);
    v40 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseUsrSvtData;
    if ( !v40 )
      goto LABEL_47;
    v41 = (int)this;
    v42 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                              v40[6],
                                              0LL);
    v43 = (_DWORD)v42 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v42, v41, (_DWORD)v42 + 1, v44) )
    {
      v45 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1B86604(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v45,
        (Il2CppObject *)v4,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v46 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)v4, Method_CombineResultEffectComponent__EndPlayProcess_b__158_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v41, v43, v45, v46, 0LL);
    }
    else
    {
LABEL_27:
      limitUpResultCheck = v4->fields.limitUpResultCheck;
      v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)v4, Method_CombineResultEffectComponent__EndPlayProcess_b__158_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_47;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v30, 1, 0LL);
    }
  }
  else if ( v4->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v4, method);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v4, v31) )
    {
      this = (CombineResultEffectComponent_o *)v4->fields.touchInfo;
      if ( !this )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v4->fields.costumeId;
      v35 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v35 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v35->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v4, v32);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v4, v4->fields.skillShowIndex, v33);
        ++v4->fields.skillShowIndex;
      }
    }
    else
    {
      CombineResultEffectComponent__EndDisp(v4, method);
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
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A52100 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_CombineResultEffectComponent__FadeoutProcess_b__167_0__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A52100 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v8 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
      v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__167_0__,
        0LL);
      if ( !Instance )
        sub_1B86614(v11, v12);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0LL);
    }
  }
  else if ( callbackFunc )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


UnityEngine_GameObject_o *__fastcall CombineResultEffectComponent__GetEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4A520D1 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, parentTr);
    sub_1B863B8(&CombineResultEffectComponent_TypeInfo, v5);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169440, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A520D1 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_14;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              effectAssetData,
                              name,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object__50290528(
                                     Object_object__49610244,
                                     parentTr,
                                     1,
                                     (const MethodInfo_2FF5F60 *)Method_UnityEngine_Object_Instantiate_GameObject____76169440);
  if ( !effectAssetData )
    goto LABEL_14;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A487E1 )
  {
    effectAssetData = (AssetData_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4A487E1 = 1;
  }
  if ( !v11 )
    goto LABEL_14;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A487E6 )
  {
    effectAssetData = (AssetData_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4A487E6 = 1;
  }
  if ( !v12 )
LABEL_14:
    sub_1B86614(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v10;
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
  int v9; // w10

  if ( (byte_4A520E3 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4A520E3 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1B86614(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1B8661C(v6, *(_QWORD *)&svtId);
    if ( ServantIdsIgnoreFormChange->m_Items[v9 + 1] == svtId )
      break;
    if ( max_length == ++v9 )
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
  __int64 v13; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantCostumeMaster_o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  struct UserServantEntity_o *v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x19
  __int64 v21; // x20
  __int64 v22; // x21
  ServantEntity_o *v23; // [xsp+0h] [xbp-40h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4A52101 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&messageId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    byte_4A52101 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_21;
    v15 = (ServantCostumeMaster_o *)Instance;
    v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v17;
    *(_QWORD *)&v25.fields.fakeValue = v16;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v25, 0LL);
    if ( !v15 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v15, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_21:
      sub_1B86614(Instance, v13);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = this->fields.resUsrSvtData;
  if ( !v19 )
    goto LABEL_21;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v22;
  *(_QWORD *)&v26.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v26, 0LL);
  if ( !v20 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v20,
          (Il2CppObject **)&v23,
          (int32_t)Instance,
          (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v23;
  if ( !v23 )
    goto LABEL_21;
  return ServantEntity__getName(v23, -1, -1, 0, 0LL);
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

  if ( (byte_4A520DE & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIPanel___, fmsString);
    byte_4A520DE = 1;
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
    sub_1B86614(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineResultEffectComponent__GetStartAnimationName(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_String_o *v17; // x21
  VoicePlayCondMaster_o *Master_object; // x0
  __int64 v19; // x1
  struct ServantVoiceEntity_o *svtVoiceEntity; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v22; // x9
  bool isVoicePlay_41351900; // w0
  Il2CppObject *CombineAnimation; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_o *Clip; // x22
  int32_t kind; // w8
  Il2CppObject *v32; // x0
  __int64 *v33; // x8
  int32_t v35; // [xsp+1Ch] [xbp-44h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4A5210A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_VoicePlayCondMaster___, *(_QWORD *)&index);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8);
    sub_1B863B8(&int_TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_11190/*"ResultEffectAnimation"*/, v11);
    sub_1B863B8(&StringLiteral_17053/*"bit_result_skinchange{0:D2}"*/, v12);
    sub_1B863B8(&StringLiteral_17031/*"bit_result_advent{0:D2}"*/, v13);
    sub_1B863B8(&StringLiteral_24937/*"{0}{1:D2}"*/, v14);
    sub_1B863B8(&StringLiteral_1/*""*/, v15);
    sub_1B863B8(&StringLiteral_17055/*"bit_result{0:D2}"*/, v16);
    byte_4A5210A = 1;
  }
  condEntity = 0LL;
  if ( !this->fields.svtVoiceEntity )
    goto LABEL_26;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0LL) )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( !svtVoiceEntity )
    goto LABEL_42;
  playVoiceList = this->fields.playVoiceList;
  if ( !playVoiceList )
    goto LABEL_42;
  if ( !playVoiceList->max_length )
    sub_1B8661C(Master_object, v19);
  v22 = playVoiceList->m_Items[0];
  if ( !v22 || !Master_object )
    goto LABEL_42;
  isVoicePlay_41351900 = VoicePlayCondMaster__isVoicePlay_41351900(
                           Master_object,
                           svtVoiceEntity->fields.id,
                           v22->fields.id,
                           &condEntity,
                           0LL,
                           -1LL,
                           -1,
                           0LL,
                           0LL,
                           0LL,
                           0LL);
  if ( condEntity && isVoicePlay_41351900 )
  {
    CombineAnimation = (Il2CppObject *)VoicePlayCondEntity__GetCombineAnimation(condEntity, 0LL, 0LL);
    v35 = index;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v25, v26, v27);
    v17 = System_String__Format_61686468((System_String_o *)StringLiteral_24937/*"{0}{1:D2}"*/, CombineAnimation, v28, 0LL);
  }
  Master_object = (VoicePlayCondMaster_o *)this->fields.fsm;
  if ( !Master_object
    || (Master_object = (VoicePlayCondMaster_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Master_object, 0LL)) == 0LL
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11190/*"ResultEffectAnimation"*/,
                                                   0LL)) == 0LL
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                                   (HutongGames_PlayMaker_FsmGameObject_o *)Master_object,
                                                   0LL)) == 0LL )
  {
LABEL_42:
    sub_1B86614(Master_object, v19);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
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
          v35 = index;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, method, v3, v4);
          v33 = &StringLiteral_17053/*"bit_result_skinchange{0:D2}"*/;
          return System_String__Format((System_String_o *)*v33, v32, 0LL);
        }
        return (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_38:
      v35 = index;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, method, v3, v4);
      v33 = &StringLiteral_17031/*"bit_result_advent{0:D2}"*/;
      return System_String__Format((System_String_o *)*v33, v32, 0LL);
    }
    if ( kind )
    {
      if ( kind == 1 )
        goto LABEL_38;
      if ( kind != 6 )
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    v35 = index;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, method, v3, v4);
    v33 = &StringLiteral_17055/*"bit_result{0:D2}"*/;
    return System_String__Format((System_String_o *)*v33, v32, 0LL);
  }
  if ( !Component_object )
    goto LABEL_42;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Component_object, v17, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(Clip, 0LL) )
    goto LABEL_26;
  return v17;
}


TransformServantInfo_o *__fastcall CombineResultEffectComponent__GetTransformedServantInfo(
        CombineResultEffectComponent_o *this,
        int32_t transformCount,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-8h] BYREF

  transformInfo = 0LL;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1B86614(0LL, transformCount);
  UserServantEntity__GetTransformedServantInfo(baseUsrSvtData, &transformInfo, transformCount, 0LL);
  return transformInfo;
}


UnityEngine_GameObject_o *__fastcall CombineResultEffectComponent__GetVoiceEffectPrefab(
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Object_object__49610244; // x20
  System_Collections_Generic_IEnumerable_TSource__o *playVoiceList; // x20
  CombineResultEffectComponent___c_c *v18; // x0
  System_Func_object__object__o *_9__149_0; // x21
  Il2CppObject *v20; // x22
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0
  CombineResultEffectComponent___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Func_object__bool__o *_9__149_1; // x21
  Il2CppObject *v28; // x22
  struct CombineResultEffectComponent___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  Il2CppClass *klass; // x8
  AssetData_o *effectAssetData; // x0
  System_String_o *v36; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  VoiceMaster_o *v38; // x21
  __int64 v39; // x22
  __int64 v40; // x23
  struct ServantVoiceData_array *v41; // x8
  ServantVoiceData_o *v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A520F3 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, method);
    sub_1B863B8(&CombineResultEffectComponent_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_VoiceMaster___, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___, v7);
    sub_1B863B8(&System_Func_ServantVoicePerformance__bool__TypeInfo, v8);
    sub_1B863B8(&System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__149_0__, v12);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__149_1__, v13);
    sub_1B863B8(&CombineResultEffectComponent___c_TypeInfo, v14);
    sub_1B863B8(&StringLiteral_1/*""*/, v15);
    byte_4A520F3 = 1;
  }
  Object_object__49610244 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0LL) )
  {
    playVoiceList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playVoiceList;
    v18 = CombineResultEffectComponent___c_TypeInfo;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v18 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__149_0 = (System_Func_object__object__o *)v18->static_fields->__9__149_0;
    if ( !_9__149_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = CombineResultEffectComponent___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__149_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
      System_Func_object__object____ctor(
        _9__149_0,
        v20,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__149_0__,
        0LL);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__149_0 = (struct System_Func_ServantVoiceData__ServantVoicePerformance__o *)_9__149_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__149_0, (int32_t)_9__149_0, v22, v23);
    }
    v24 = System_Linq_Enumerable__Select_object__object_(
            playVoiceList,
            (System_Func_TSource__TResult__o *)_9__149_0,
            (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    v25 = CombineResultEffectComponent___c_TypeInfo;
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v25 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__149_1 = (System_Func_object__bool__o *)v25->static_fields->__9__149_1;
    if ( !_9__149_1 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = CombineResultEffectComponent___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v25->static_fields->__9;
      _9__149_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_ServantVoicePerformance__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__149_1,
        v28,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__149_1__,
        0LL);
      v29 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v29->__9__149_1 = (struct System_Func_ServantVoicePerformance__bool__o *)_9__149_1;
      sub_1B8635C((CGThumbnailListItem_o *)&v29->__9__149_1, (int32_t)_9__149_1, v30, v31);
    }
    v32 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
            v26,
            (System_Func_TSource__bool__o *)_9__149_1,
            (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    if ( v32 )
      klass = v32[1].klass;
    else
      klass = 0LL;
    effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !effectAssetData )
      goto LABEL_39;
    if ( klass )
      v36 = (System_String_o *)klass;
    else
      v36 = (System_String_o *)StringLiteral_1/*""*/;
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                effectAssetData,
                                v36,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49610244, 0LL, 0LL)
    && !this->fields.kind )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    effectAssetData = (AssetData_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_VoiceMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      v38 = (VoiceMaster_o *)effectAssetData;
      v40 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v40;
      *(_QWORD *)&v44.fields.fakeValue = v39;
      effectAssetData = (AssetData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v44, 0LL);
      v41 = this->fields.playVoiceList;
      if ( v41 )
      {
        if ( !v41->max_length )
          sub_1B8661C(effectAssetData, v33);
        v42 = v41->m_Items[0];
        if ( v42 )
        {
          if ( v38 )
          {
            this->fields.firstPlayedVoiceFlag = VoiceMaster__getFlagRequestNumber(
                                                  v38,
                                                  (int32_t)effectAssetData,
                                                  v42->fields.id,
                                                  0,
                                                  0LL);
            return (UnityEngine_GameObject_o *)Object_object__49610244;
          }
        }
      }
    }
LABEL_39:
    sub_1B86614(effectAssetData, v33);
  }
  return (UnityEngine_GameObject_o *)Object_object__49610244;
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
  __int64 id; // x1
  int32_t DispLimitCount; // w20
  BalanceConfig_c *v10; // x8
  __int64 v11; // x8
  int64_t v12; // x20
  int v13; // w23
  int v14; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v16; // q1
  __int64 v17; // x21
  __int128 v18; // q0
  int64_t v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v23; // x8
  SkillInfo_o *v24; // x9
  SkillInfo_o *v25; // x8
  bool v26; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v30; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v32; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_4A520F4 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A520F4 = 1;
  }
  v32 = 0LL;
  skillInfoList = 0LL;
  v30 = 0LL;
  tdInfo = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_58;
    if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
      return;
    Instance = (int64_t)this->fields.baseUsrSvtData;
    if ( !Instance )
      goto LABEL_58;
    if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
      goto LABEL_12;
    Instance = (int64_t)this->fields.baseUsrSvtData;
    if ( !Instance )
      goto LABEL_58;
    DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( DispLimitCount != v10->static_fields->SpecialLimitCountPLD )
    {
LABEL_12:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
          if ( Instance )
          {
            v11 = *(_QWORD *)(Instance + 24);
            v12 = Instance;
            v13 = v11 - 1;
            if ( (int)v11 >= 1 )
            {
              v14 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_58;
                v16 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v17 = *(_QWORD *)(v12 + 8LL * v14 + 32);
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v29.fields.fakeValue = v16;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v28 = v29;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v28, 0LL);
                if ( !v17 )
                  goto LABEL_58;
                v18 = *(_OWORD *)(v17 + 32);
                v19 = Instance;
                *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
                *(_OWORD *)&v27.fields.fakeValue = v18;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v27, 0LL);
                if ( v19 == Instance )
                  break;
                if ( v13 == v14 )
                  goto LABEL_26;
                if ( (unsigned int)++v14 >= *(_DWORD *)(v12 + 24) )
LABEL_24:
                  sub_1B8661C(Instance, id);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v17;
              sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, v17, v20, v21);
            }
LABEL_26:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v32, -1, -1, 1, 0, -1, 0LL);
                for ( i = 0; ; ++i )
                {
                  Instance = (int64_t)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    Instance = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
                    break;
                  if ( !skillInfoList )
                    goto LABEL_58;
                  if ( i >= skillInfoList->max_length )
                    goto LABEL_24;
                  v23 = skillInfoList->m_Items[i];
                  if ( !v23 || !v32 )
                    goto LABEL_58;
                  if ( i >= v32->max_length )
                    goto LABEL_24;
                  v24 = v32->m_Items[i];
                  if ( !v24 )
                    goto LABEL_58;
                  id = (unsigned int)v23->fields.id;
                  if ( *(_QWORD *)&v23->fields.id != *(_QWORD *)&v24->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_58;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v23->fields.lv,
                      0LL);
                    if ( !v32 )
                      goto LABEL_58;
                    if ( i >= v32->max_length )
                      goto LABEL_24;
                    v25 = v32->m_Items[i];
                    if ( !v25 )
                      goto LABEL_58;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_58;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v25->fields.id,
                      v25->fields.lv,
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
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v30, -1, -1, 0, 0LL);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
                      if ( (Instance & 1) == 0 )
                      {
                        v26 = 0;
LABEL_56:
                        this->fields.treasureDeviceEnabled = v26;
                        return;
                      }
                      if ( tdInfo && v30 )
                      {
                        v26 = tdInfo->fields.id != v30->fields.id || tdInfo->fields.lv != v30->fields.lv;
                        goto LABEL_56;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_58:
      sub_1B86614(Instance, id);
    }
  }
}


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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Transform_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x1

  if ( (byte_4A520CF & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v6);
    byte_4A520CF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Value, v9, v10);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  v11 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A487E6 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A487E6 = 1;
  }
  if ( !v11 )
    goto LABEL_19;
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.bgCollider;
  if ( !fsm )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)fsm, 0, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.touchInfo;
  if ( !fsm )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  kind = this->fields.kind;
  if ( kind == 16 || kind == 14 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    v16 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__,
      0LL);
    if ( v16 )
    {
      CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_19:
    sub_1B86614(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v12);
  CombineResultEffectComponent__SetResultServantVoiceData(this, v19);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_1B86614(0LL, method);
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
    sub_1B86614(0LL, method);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  bool v13; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A520FC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A520FC = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)costumeSkillInfoManager;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                                        v16,
                                                                                        0LL);
  if ( !v10 )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v10,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_1B86614(costumeSkillInfoManager, method);
  v13 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)costumeSkillInfoManager, 30, 0LL);
  return v8 >= 1 && !v13 && this->fields.skillShowIndex < v8;
}


bool __fastcall CombineResultEffectComponent__IsShowTreasureDeviceInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureDeviceEnabled;
}


void __fastcall CombineResultEffectComponent__LoadCombineEffect(
        CombineResultEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CombineRootComponent_c *v14; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x22

  if ( (byte_4A520D0 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, action);
    sub_1B863B8(&CombineResultEffectComponent_TypeInfo, v4);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v5);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__DisplayClass112_0__LoadCombineEffect_b__0__, v7);
    sub_1B863B8(&CombineResultEffectComponent___c__DisplayClass112_0_TypeInfo, v8);
    byte_4A520D0 = 1;
  }
  v9 = sub_1B86604(CombineResultEffectComponent___c__DisplayClass112_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass112_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass112_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_1B86614(v10, v11);
  *(_QWORD *)(v9 + 16) = action;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)action, v12, v13);
  if ( CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData )
    goto LABEL_10;
  v14 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v14 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v14->static_fields->COMBINE_ASSET_PATH;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_CombineResultEffectComponent___c__DisplayClass112_0__LoadCombineEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v16, 1, 0LL) )
LABEL_10:
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0LL);
}


void __fastcall CombineResultEffectComponent__NameRevealCrossFade(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UICharaGraphTexture_o *nameRevealCard; // x0

  nameRevealCard = this->fields.nameRevealCard;
  if ( !nameRevealCard )
    sub_1B86614(0LL, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A52109 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_5399/*"END_ANIMATION"*/, method);
    byte_4A52109 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1B86614(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5399/*"END_ANIMATION"*/, 0LL);
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
  _QWORD *monitor; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v12; // x8
  int32_t v13; // w20
  int32_t v14; // w21
  System_String_o *LimitCountSealedDialogMessage; // x0
  LimitCountSealDialogComponent_o *v16; // x21
  System_String_o *v17; // x20
  System_String_o *v18; // x22
  LimitCountSealDialogComponent_CallbackFunc_o *v19; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v2 = (Il2CppObject *)this;
  if ( (byte_4A52105 & 1) == 0 )
  {
    sub_1B863B8(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CombineResultEffectComponent_o *)sub_1B863B8(&StringLiteral_8122/*"LIMIT_COUNT_SEALED_TITLE"*/, v8);
    byte_4A52105 = 1;
  }
  monitor = v2[11].monitor;
  if ( !monitor )
    goto LABEL_14;
  v11 = monitor[10];
  v10 = monitor[11];
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v20, 0LL);
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[11].monitor;
  if ( !v12 )
    goto LABEL_14;
  v13 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v12[6], 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_14;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v13,
                                    v14 + 1,
                                    0LL);
  v16 = (LimitCountSealDialogComponent_o *)v2[8].monitor;
  v17 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8122/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v19 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1B86604(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v19,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !v16 )
LABEL_14:
    sub_1B86614(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v16, v18, v17, v19, 0LL);
}


bool __fastcall CombineResultEffectComponent__OpenNotification(
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
  __int64 v11; // x19
  __int64 AscensionAfterDialogId; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool v16; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v20; // x21
  __int64 v21; // x22
  struct UserServantEntity_o *v22; // x8
  __int64 v23; // x21
  __int64 v24; // x22
  int32_t v25; // w0
  struct UserServantEntity_o *v26; // x8
  int32_t v27; // w21
  __int64 v28; // x22
  __int64 v29; // x23
  int32_t v30; // w0
  int32_t v31; // w22
  int32_t v32; // w23
  const MethodInfo *v33; // x3
  Il2CppObject *NameFromMessageId; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  System_String_o *v38; // x0
  System_String_o *v39; // x21
  System_Action_o *v40; // x23
  int v41; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A52102 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B863B8(&ServantCharaGraphEXOpenManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__DisplayClass169_0__OpenNotification_b__0__, v7);
    sub_1B863B8(&CombineResultEffectComponent___c__DisplayClass169_0_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_11378/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v9);
    sub_1B863B8(&StringLiteral_1/*""*/, v10);
    byte_4A52102 = 1;
  }
  v11 = sub_1B86604(CombineResultEffectComponent___c__DisplayClass169_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass169_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass169_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_28;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v16 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v21 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v20 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v42.fields.currentCryptoKey = v21;
      *(_QWORD *)&v42.fields.fakeValue = v20;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v42, 0LL);
      *(_DWORD *)(v11 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v11 + 24) = this->fields.costumeId;
      v22 = this->fields.resUsrSvtData;
      if ( v22 )
      {
        v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v43.fields.currentCryptoKey = v24;
        *(_QWORD *)&v43.fields.fakeValue = v23;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v43, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v25, *(_DWORD *)(v11 + 24), 0LL);
        v41 = AscensionAfterDialogId;
        if ( (_DWORD)AscensionAfterDialogId == -1 )
          return 0;
        v26 = this->fields.resUsrSvtData;
        if ( v26 )
        {
          v27 = AscensionAfterDialogId;
          v29 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
          v28 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v44.fields.currentCryptoKey = v29;
          *(_QWORD *)&v44.fields.fakeValue = v28;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v44, 0LL);
          v31 = *(_DWORD *)(v11 + 24);
          v32 = v30;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v32, v31, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v27,
                                                *(_DWORD *)(v11 + 24),
                                                v33);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v36 = System_Int32__ToString((int32_t)&v41, 0LL);
          v37 = System_String__Concat_61645176((System_String_o *)StringLiteral_11378/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v36, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v38 = LocalizationManager__Get(v37, 0LL);
          v39 = System_String__Format(v38, NameFromMessageId, 0LL);
          v40 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v40,
            (Il2CppObject *)v11,
            Method_CombineResultEffectComponent___c__DisplayClass169_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v16 = 1;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v39,
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
              0.0,
              0LL);
            return v16;
          }
        }
      }
    }
LABEL_28:
    sub_1B86614(AscensionAfterDialogId, v13);
  }
  return v16;
}


void __fastcall CombineResultEffectComponent__PlayPerformance(
        CombineResultEffectComponent_o *this,
        ServantVoicePerformance_ServantVoicePerformanceDetail_o *performance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UIStandFigureR_o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w22
  System_Action_o *v13; // x2

  if ( (byte_4A520F2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, performance);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    byte_4A520F2 = 1;
  }
  if ( performance )
  {
    IsNullOrEmpty = (UIStandFigureR_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)this->fields.afterFigureCollectList,
                                          0LL);
    v10 = 176LL;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      v10 = 168LL;
    v11 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v10);
    if ( !v11 )
      goto LABEL_17;
    if ( v11->fields._size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        IsNullOrEmpty = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                              v11,
                                              v12,
                                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (UIStandFigureR_o *)IsNullOrEmpty->fields.m_CancellationTokenSource;
        if ( !IsNullOrEmpty )
          break;
        if ( v12 == v11->fields._size - 1 )
          v13 = playEndAction;
        else
          v13 = 0LL;
        UIStandFigureR__PlayAnimation(IsNullOrEmpty, performance->fields.name, performance->fields.delay, v13, 0LL);
        if ( ++v12 >= v11->fields._size )
          return;
      }
LABEL_17:
      sub_1B86614(IsNullOrEmpty, v9);
    }
  }
  else
  {
    ActionExtensions__Call(playEndAction, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__PlayVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CombineResultEffectComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v11; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v13; // x8
  __int64 v14; // x9
  int32_t m_CancellationTokenSource_high; // w21
  int32_t friendshipExceedResultWindow; // w20
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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct ServantVoiceData_array *v31; // x8
  __int64 v32; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *StartPerformance; // x0
  const MethodInfo *v34; // x3

  v4 = this;
  if ( (byte_4A520F1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent_EndPlay__, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v6);
    this = (CombineResultEffectComponent_o *)sub_1B863B8(&SoundManager_TypeInfo, v7);
    byte_4A520F1 = 1;
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
      v11 = playVoiceList->m_Items[playCnt];
      if ( !v11 )
        goto LABEL_26;
      id = v11->fields.id;
      v4->fields.vcName = id;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
      v13 = v4->fields.playVoiceList;
      if ( !v13 )
        goto LABEL_26;
      v14 = v4->fields.playCnt;
      if ( (unsigned int)v14 < v13->max_length )
      {
        this = (CombineResultEffectComponent_o *)v13->m_Items[v14];
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
        friendshipExceedResultWindow = (int32_t)this->fields.friendshipExceedResultWindow;
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
        currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.currentFigureCollectList;
        if ( currentFigureCollectList )
        {
          v19 = FadeTime;
          if ( System_Linq_Enumerable__Any_object_(
                 currentFigureCollectList,
                 (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
          {
            if ( System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                   (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
              && System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                   (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
              v19,
              v20,
              v21,
              afterFigureCollectList,
              friendshipExceedResultWindow,
              v22);
          }
        }
        asstName = v4->fields.asstName;
        vcName = v4->fields.vcName;
        volume = v4->fields.volume;
        v27 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(v27, (Il2CppObject *)v4, Method_CombineResultEffectComponent_EndPlay__, 0LL);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v28 = SoundManager__playVoice_39673076(asstName, vcName, volume, v27, 0, 0LL);
        v4->fields.player = v28;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.player, (int32_t)v28, v29, v30);
        v31 = v4->fields.playVoiceList;
        if ( !v31 )
          goto LABEL_26;
        v32 = v4->fields.playCnt;
        if ( (unsigned int)v32 < v31->max_length )
        {
          this = (CombineResultEffectComponent_o *)v31->m_Items[v32];
          if ( this )
          {
            StartPerformance = ServantVoiceData__get_StartPerformance((ServantVoiceData_o *)this, 0LL);
            CombineResultEffectComponent__PlayPerformance(v4, StartPerformance, 0LL, v34);
            ++v4->fields.playCnt;
            return;
          }
LABEL_26:
          sub_1B86614(this, method);
        }
      }
    }
    sub_1B8661C(this, method);
  }
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
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *Master_object; // x24
  CommonUI_o *v26; // x22
  Il2CppObject *v27; // x0
  UserServantCollectionEntity_o *v28; // x20
  CommonUI_o *v29; // x22
  ServantStatusDialog_EndDelegate_o *v30; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A52108 & 1) == 0 )
  {
    sub_1B863B8(&AvalonSceneManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__DisplayClass175_0__ProfileChangeDecideAction_b__0__, v16);
    sub_1B863B8(&CombineResultEffectComponent___c__DisplayClass175_0_TypeInfo, v17);
    byte_4A52108 = 1;
  }
  entity = 0LL;
  v18 = sub_1B86604(CombineResultEffectComponent___c__DisplayClass175_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass175_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass175_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 24) = finishCallback;
  sub_1B8635C((CGThumbnailListItem_o *)(v18 + 24), (int32_t)finishCallback, v23, v24);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v20);
      byte_4A48C25 = 1;
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
           0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v26 )
      {
        CommonUI__maskFadein(v26, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0LL);
          Instance = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( Instance )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 0, 0LL);
            v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v28 = entity;
            v29 = (CommonUI_o *)v27;
            v30 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v30,
              (Il2CppObject *)v18,
              Method_CombineResultEffectComponent___c__DisplayClass175_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v29 )
            {
              CommonUI__OpenServantStatusDialog_30495064(v29, 33, v28, limitCount, v30, 0LL);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_1B86614(Instance, v20);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_30483660(Instance, *(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall CombineResultEffectComponent__ReleaseVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A520FE & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    byte_4A520FE = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v2, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v6);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields.asstName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetAfterLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
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
  UnityEngine_Component_o *StandFigureNode; // x21
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  DataManager_o *v25; // x22
  Il2CppObject *MasterData_object; // x25
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v28; // x24
  __int64 v29; // x22
  __int64 v30; // x23
  struct UserServantEntity_o *v31; // x8
  int32_t v32; // w22
  int32_t v33; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w23
  struct UserServantEntity_o *v36; // x8
  int32_t v37; // w23
  __int64 v38; // x24
  __int64 v39; // x26
  CombineResultEffectComponent_o *v40; // x0
  const MethodInfo *v41; // x3
  char v42; // w24
  System_Collections_Generic_List_object__o *v43; // x25
  _BOOL8 v44; // x0
  __int64 v45; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v48; // x1
  int32_t portraitImageId; // w27
  UnityEngine_GameObject_o *v50; // x26
  UnityEngine_GameObject_o *original; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  UnityEngine_Component_o *v56; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v58; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x0
  __int64 v63; // x1
  float v64; // s0
  float v65; // s1
  float v66; // s2
  struct System_Int32_array *v67; // x8
  il2cpp_array_size_t max_length; // w9
  int v69; // s11
  int v70; // s12
  float v71; // s9
  float v72; // s10
  float v73; // s8
  UnityEngine_Transform_o *v74; // x0
  __int64 v75; // x1
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v77; // x28
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  bool v86; // w20
  UnityEngine_GameObject_o *v87; // x21
  const MethodInfo *v88; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v90; // x23
  System_Collections_Generic_List_object__o *v91; // x21
  StandFigureCollect_o *v92; // x22
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  float v99; // s8
  struct System_Int32_array *multiFace; // x23
  int32_t masterDataBytes; // w20
  int32_t m_CancellationTokenSource_high; // w21
  struct ServantVoiceData_array *playVoiceList; // x8
  float FadeTime; // s0
  struct ServantVoiceData_array *v105; // x8
  ServantVoiceData_o *v106; // x8
  unsigned __int64 v107; // x22
  bool v108; // [xsp+24h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+40h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A520E1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v13);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v17);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B863B8(&StandFigureCollect_TypeInfo, v20);
    sub_1B863B8(&StringLiteral_8279/*"LimitUpResSvtNodeName"*/, v21);
    byte_4A520E1 = 1;
  }
  entity = 0LL;
  memset(&v110, 0, sizeof(v110));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8279/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v25 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v25,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_85;
  v28 = (ServantLimitAddMaster_o *)Instance;
  v30 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v30;
  *(_QWORD *)&v112.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v112, 0LL);
  v31 = this->fields.resUsrSvtData;
  if ( !v31 )
    goto LABEL_85;
  v32 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v31->fields.limitCount,
                                0LL);
  if ( !v28 )
    goto LABEL_85;
  v33 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v28, &entity, v32, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_85;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v33 = LimitCountUpResultServantLimitCount;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_85;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v32,
                                 v33,
                                 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v32, ServantLimitCountSealAfter, 0LL);
  v36 = this->fields.resUsrSvtData;
  if ( !v36 )
    goto LABEL_85;
  v37 = (int)Instance;
  v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v39;
  *(_QWORD *)&v113.fields.fakeValue = v38;
  v108 = isForceNormalFace;
  v40 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v113, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v40, (int32_t)v40, v37, v41);
  if ( !MasterData_object )
LABEL_85:
    sub_1B86614(Instance, v24);
  v42 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v32,
                                v37,
                                2,
                                0LL);
  if ( Instance
    && (v43 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v109,
      v43,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v110 = v109;
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v110,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v44 )
        break;
      if ( !StandFigureNode )
        sub_1B86614(v44, v45);
      current = (SvtMultiPortraitEntity_o *)v110.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_1B86614(gameObject, v48);
      portraitImageId = current->fields.portraitImageId;
      v50 = gameObject;
      original = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v48);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v50,
                           portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v42 & 1,
                           -1,
                           original,
                           0LL);
      v56 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1B86614(0LL, v53);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1B8635C((CGThumbnailListItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity, (int32_t)current, v54, v55);
      transform = UnityEngine_Component__get_transform(v56, 0LL);
      if ( !transform )
        sub_1B86614(0LL, v58);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v60 = UnityEngine_Component__get_transform(v56, 0LL);
        if ( !v60 )
          sub_1B86614(0LL, v61);
        *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Transform__get_localPosition(v60, 0LL);
        v67 = current->fields.commonPosition;
        if ( !v67 )
          sub_1B86614(v62, v63);
        max_length = v67->max_length;
        if ( !max_length )
          sub_1B8661C(v62, v63);
        if ( max_length == 1 )
          sub_1B8661C(v62, v63);
        v70 = v67->m_Items[1];
        v69 = v67->m_Items[2];
        v71 = v64;
        v72 = v65;
        v73 = v66;
        v74 = UnityEngine_Component__get_transform(v56, 0LL);
        if ( !v74 )
          sub_1B86614(0LL, v75);
        v114.fields.x = v71 + (float)v70;
        v114.fields.y = v72 + (float)v69;
        v114.fields.z = v73;
        UnityEngine_Transform__set_localPosition(v74, v114, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v56,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v77 = (StandFigureCollect_o *)sub_1B86604(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v77, current, (UIStandFigureR_o *)v56, 0LL);
      if ( !afterFigureCollectList )
        sub_1B86614(v78, v79);
      items = afterFigureCollectList->fields._items;
      v83 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1B86614(v78, v79);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v77,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v85[4] = (Il2CppClass *)v77;
        sub_1B8635C((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v77, v80, v81);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v110,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    v86 = v108;
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_85;
    v87 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v88);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_38936732(
                                  v87,
                                  v32,
                                  v37,
                                  1,
                                  0,
                                  1,
                                  0LL,
                                  v42 & 1,
                                  -1,
                                  VoiceEffectPrefab,
                                  0LL);
    if ( !Instance )
      goto LABEL_85;
    v90 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_85;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v91 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v92 = (StandFigureCollect_o *)sub_1B86604(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v92, 0LL, v90, 0LL);
    if ( !v91 )
      goto LABEL_85;
    v95 = v91->fields._items;
    v96 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v91->fields._version;
    if ( !v95 )
      goto LABEL_85;
    v97 = v91->fields._size;
    v86 = isForceNormalFace;
    if ( (unsigned int)v97 >= v95->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v91,
        (Il2CppObject *)v92,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &v95->obj.klass + v97;
      v91->fields._size = v97 + 1;
      v98[4] = (Il2CppClass *)v92;
      sub_1B8635C((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v92, v93, v94);
    }
  }
  v99 = 0.0;
  if ( v86
    || (Instance = (DataManager_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)this->fields.playVoiceList,
                                      0LL),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    multiFace = 0LL;
    masterDataBytes = 0;
    m_CancellationTokenSource_high = 0;
  }
  else
  {
    playVoiceList = this->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_85;
    if ( !playVoiceList->max_length )
      goto LABEL_86;
    Instance = (DataManager_o *)playVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_85;
    m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
    masterDataBytes = (int32_t)Instance->fields.masterDataBytes;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0LL);
    v105 = this->fields.playVoiceList;
    if ( !v105 )
      goto LABEL_85;
    if ( !v105->max_length )
LABEL_86:
      sub_1B8661C(Instance, v24);
    v106 = v105->m_Items[0];
    if ( !v106 )
      goto LABEL_85;
    multiFace = v106->fields.multiFace;
    v99 = FadeTime;
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_2F8B4FC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v107 = 0LL;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v107,
                                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( multiFace )
      {
        if ( v107 >= multiFace->max_length )
          goto LABEL_86;
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace((UIStandFigureR_o *)Instance, multiFace->m_Items[v107 + 1], 0.0, 0LL);
      }
      else
      {
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace_42109500(
          (UIStandFigureR_o *)Instance,
          m_CancellationTokenSource_high,
          masterDataBytes,
          0LL,
          v99,
          0LL);
      }
      if ( (__int64)++v107 >= System_Linq_Enumerable__Count_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                                (const MethodInfo_2F8B4FC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
        return;
    }
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  CombineRootComponent_c *v18; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_4A520CB & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, usrSvtData);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__, v11);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v12);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    byte_4A520CB = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    currentSkillId,
    *(const MethodInfo **)&currentSkillLv);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v14, v15);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v16, v17);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v18 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v18 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v18->static_fields->COMBINE_ASSET_PATH;
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v20, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t FigureImageLimitCount; // w0
  const MethodInfo *v9; // x7

  if ( (byte_4A520DA & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_3089/*"BaseSvtNodeName"*/, *(_QWORD *)&formId);
    byte_4A520DA = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1B86614(0LL, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3089/*"BaseSvtNodeName"*/,
    0,
    overwriteType,
    v9);
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
  const MethodInfo *v12; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4A520DF & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, method);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B863B8(&StringLiteral_8278/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_4A520DF = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B86614(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8278/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v12);
}


void __fastcall CombineResultEffectComponent__SetCardParam(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
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
  __int64 svtResultInfoWindow; // x0
  System_String_o *v37; // x20
  UnityEngine_Transform_o *transform; // x0
  UIExtrusionLabel_o *v39; // x20
  System_String_o *v40; // x20
  UnityEngine_Transform_o *v41; // x0
  UIExtrusionLabel_o *v42; // x20
  struct UserServantEntity_o *v43; // x8
  __int64 v44; // x20
  __int64 v45; // x21
  struct UserServantEntity_o *v46; // x8
  int32_t v47; // w20
  int32_t v48; // w21
  struct UserServantEntity_o *v49; // x8
  struct UserServantEntity_o *v50; // x8
  int32_t v51; // w20
  int32_t v52; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v54; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  _BOOL4 v57; // w20
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  System_Collections_ICollection_o **p_playVoiceList; // x21
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x1
  float v63; // s8
  _DWORD *data; // x23
  int32_t v65; // w20
  unsigned int v66; // w22
  int32_t v67; // w0
  const MethodInfo *v68; // x2
  __int64 *v69; // x8
  __int64 *v70; // x8
  System_String_o *v71; // x20
  UnityEngine_Transform_o *v72; // x0
  UIExtrusionLabel_o *v73; // x20
  System_String_o *v74; // x20
  UnityEngine_Transform_o *v75; // x0
  UIExtrusionLabel_o *v76; // x20
  struct UserServantEntity_o *v77; // x20
  struct UserServantEntity_o *v78; // x8
  int32_t Rarity; // w0
  UserServantEntity_o *v80; // x21
  int v81; // w20
  UserServantEntity_o *v82; // x20
  int32_t v83; // w0
  UserServantEntity_o *v84; // x21
  int v85; // w20
  const MethodInfo *v86; // x2
  __int64 *v87; // x20
  __int64 *v88; // x8
  struct ServantVoiceData_array *v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x2
  unsigned __int64 v96; // x21
  __int64 v97; // x25
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *resUsrSvtData; // x9
  bool v100; // w2
  CombineResultEffectComponent_o *v101; // x0
  System_String_o *v102; // x1
  bool v103; // w2
  CombineResultEffectComponent_o *v104; // x0
  System_String_o *v105; // x1
  System_String_o *v106; // x20
  UnityEngine_Transform_o *v107; // x0
  UnityEngine_Component_o *v108; // x20
  float Value; // s0
  float v110; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v112; // x20
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  __int64 *v115; // x8
  __int64 v116; // x1
  CGThumbnailListItem_o *v117; // x0
  System_String_o *v118; // x20
  UnityEngine_Transform_o *v119; // x0
  const MethodInfo *v120; // x1
  const MethodInfo *v121; // x2
  const MethodInfo *v122; // x2
  __int64 v123; // x20
  const MethodInfo *v124; // x2
  const MethodInfo *v125; // x2
  const MethodInfo *v126; // x2
  Il2CppObject *v127; // x21
  EventDelegate_Callback_o *v128; // x22
  EventDelegate_o *v129; // x20
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  __int64 v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x8
  const MethodInfo *v136; // x3
  const MethodInfo *v137; // x2
  System_Collections_ICollection_o *v138; // x8
  float FadeTime; // s0
  System_Collections_ICollection_o *v140; // x8
  System_Collections_ICollection_c *klass; // x8
  __int64 v142; // [xsp+0h] [xbp-60h] BYREF
  __int64 v143; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A520D2 & 1) == 0 )
  {
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetCardParam_b__114_0__, v4);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v5);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UILabel___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v7);
    sub_1B863B8(&EventDelegate_TypeInfo, v8);
    sub_1B863B8(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v12);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_4716/*"CostumeName"*/, v14);
    sub_1B863B8(&StringLiteral_3089/*"BaseSvtNodeName"*/, v15);
    sub_1B863B8(&StringLiteral_17029/*"bit_result_120"*/, v16);
    sub_1B863B8(&StringLiteral_17036/*"bit_result_extraskill02"*/, v17);
    sub_1B863B8(&StringLiteral_17045/*"bit_result_nobledeliverance"*/, v18);
    sub_1B863B8(&StringLiteral_12099/*"START_ANIMATION"*/, v19);
    sub_1B863B8(&StringLiteral_17033/*"bit_result_command_card_exceed"*/, v20);
    sub_1B863B8(&StringLiteral_17042/*"bit_result_limitbreak"*/, v21);
    sub_1B863B8(&StringLiteral_17037/*"bit_result_friendship_exceed"*/, v22);
    sub_1B863B8(&StringLiteral_11160/*"ResMaxLvExceedNodeName"*/, v23);
    sub_1B863B8(&StringLiteral_17050/*"bit_result_skillrank"*/, v24);
    sub_1B863B8(&StringLiteral_17040/*"bit_result_grail_02"*/, v25);
    sub_1B863B8(&StringLiteral_17051/*"bit_result_skillup"*/, v26);
    sub_1B863B8(&StringLiteral_4858/*"CrtMaxLvExceedNodeName"*/, v27);
    sub_1B863B8(&StringLiteral_17046/*"bit_result_powerup"*/, v28);
    sub_1B863B8(&StringLiteral_12822/*"StartAnimationName"*/, v29);
    sub_1B863B8(&StringLiteral_17039/*"bit_result_grail_01"*/, v30);
    sub_1B863B8(&StringLiteral_17035/*"bit_result_extraskill01"*/, v31);
    sub_1B863B8(&StringLiteral_17049/*"bit_result_skilldeliverance"*/, v32);
    sub_1B863B8(&StringLiteral_4859/*"CrtMaxLvNodeName"*/, v33);
    sub_1B863B8(&StringLiteral_11161/*"ResMaxLvNodeName"*/, v34);
    sub_1B863B8(&StringLiteral_12967/*"SvtEqCardScale"*/, v35);
    byte_4A520D2 = 1;
  }
  v142 = 0LL;
  v143 = 0LL;
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
        0LL);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)svtResultInfoWindow,
        this->fields.combineStatusDisp,
        0LL);
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = UserServantEntity__isLevelMax((UserServantEntity_o *)svtResultInfoWindow, 0LL);
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
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_4859/*"CrtMaxLvNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_173;
      v37 = (System_String_o *)svtResultInfoWindow;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(transform, v37, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v39 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v143) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v143 + 4, 0LL);
      if ( !v39 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v39, (System_String_o *)svtResultInfoWindow, 0LL);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_11161/*"ResMaxLvNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_173;
      v40 = (System_String_o *)svtResultInfoWindow;
      v41 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v41, v40, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v42 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v143) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v143, 0LL);
      if ( !v42 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v42, (System_String_o *)svtResultInfoWindow, 0LL);
      v43 = this->fields.baseUsrSvtData;
      if ( !v43 )
        goto LABEL_173;
      v45 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
      v44 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v144.fields.currentCryptoKey = v45;
      *(_QWORD *)&v144.fields.fakeValue = v44;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v144, 0LL);
      v46 = this->fields.baseUsrSvtData;
      if ( !v46 )
        goto LABEL_173;
      v47 = svtResultInfoWindow;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v46->fields.limitCount, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      svtResultInfoWindow = ImageLimitCount__GetImageLimitCount(v47, v48, 0LL);
      v49 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = svtResultInfoWindow;
      if ( !v49 )
        goto LABEL_173;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v49->fields.svtId, 0LL);
      v50 = this->fields.resUsrSvtData;
      if ( !v50 )
        goto LABEL_173;
      v51 = svtResultInfoWindow;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v50->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v51, v52, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v57 = resSvtNameData != 0LL;
      if ( isLimitUpSuppression )
        goto LABEL_27;
      if ( this->fields.oldImgLimitCnt != ImageLimitCount )
        goto LABEL_71;
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtResultInfoWindow, 0LL) )
      {
LABEL_27:
        this->fields.isChangeCardImg = 0;
        LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v54);
        p_playVoiceList = (System_Collections_ICollection_o **)&this->fields.playVoiceList;
        this->fields.playVoiceList = LimitUpSvtVoiceList;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)LimitUpSvtVoiceList, v60, v61);
        CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v62);
        v63 = 0.0;
        if ( this->fields.isLimitUpSuppression
          || (svtResultInfoWindow = BasicHelper__IsNullOrEmpty(*p_playVoiceList, 0LL), (svtResultInfoWindow & 1) != 0) )
        {
          data = 0LL;
          v65 = 0;
          v66 = 0;
        }
        else
        {
          v138 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v138[1].monitor) )
            goto LABEL_174;
          svtResultInfoWindow = (__int64)v138[2].klass;
          if ( !svtResultInfoWindow )
            goto LABEL_173;
          v66 = *(_DWORD *)(svtResultInfoWindow + 28);
          v65 = *(_DWORD *)(svtResultInfoWindow + 56);
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)svtResultInfoWindow, 0LL);
          v140 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_173;
          if ( !LODWORD(v140[1].monitor) )
LABEL_174:
            sub_1B8661C(svtResultInfoWindow, method);
          klass = v140[2].klass;
          if ( !klass )
            goto LABEL_173;
          data = klass->_1.byval_arg.data;
          v63 = FadeTime;
        }
        v67 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_2F8B4FC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( data )
        {
          method = (const MethodInfo *)(&dword_0 + 1);
          if ( v67 != *(_DWORD *)((char *)&off_18 + (_QWORD)data) || v67 <= 0 )
            goto LABEL_136;
        }
        else if ( v67 < 1 )
        {
LABEL_135:
          LODWORD(method) = 1;
          goto LABEL_136;
        }
        v96 = 0LL;
        if ( v67 <= 1 )
          v97 = 1LL;
        else
          v97 = (unsigned int)v67;
        while ( 1 )
        {
          svtResultInfoWindow = (__int64)this->fields.currentFigureCollectList;
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = (__int64)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                                           v96,
                                           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = *(_QWORD *)(svtResultInfoWindow + 24);
          if ( data )
          {
            if ( v96 >= *(unsigned int *)((char *)&off_18 + (_QWORD)data) )
              goto LABEL_174;
            if ( !svtResultInfoWindow )
              break;
            LODWORD(method) = data[v96 + 8];
          }
          else
          {
            method = (const MethodInfo *)v66;
            if ( !svtResultInfoWindow )
              break;
          }
          UIStandFigureR__SetFace_42109500((UIStandFigureR_o *)svtResultInfoWindow, (int32_t)method, v65, 0LL, v63, 0LL);
          if ( v97 == ++v96 )
            goto LABEL_135;
        }
LABEL_173:
        sub_1B86614(svtResultInfoWindow, method);
      }
LABEL_71:
      this->fields.isChangeCardImg = 1;
      v89 = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v54);
      this->fields.playVoiceList = v89;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)v89, v90, v91);
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v92);
      CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v93);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, v57, v94);
      CombineResultEffectComponent__setResultSvtGraphCard(this, v57, v95);
      LODWORD(method) = 2;
LABEL_136:
      svtResultInfoWindow = (__int64)CombineResultEffectComponent__GetStartAnimationName(this, (int32_t)method, v68);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v123 = svtResultInfoWindow;
      svtResultInfoWindow = (__int64)this->fields.fsm;
LABEL_167:
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_12822/*"StartAnimationName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      *(_QWORD *)(svtResultInfoWindow + 56) = v123;
      v117 = (CGThumbnailListItem_o *)(svtResultInfoWindow + 56);
      LODWORD(v116) = v123;
LABEL_170:
      sub_1B8635C(v117, v116, v113, v114);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtResultInfoWindow, (System_String_o *)StringLiteral_12099/*"START_ANIMATION"*/, 0LL);
      return;
    case 2:
      v100 = 1;
      v101 = this;
      v102 = (System_String_o *)StringLiteral_17051/*"bit_result_skillup"*/;
      goto LABEL_97;
    case 3:
      v70 = &StringLiteral_17049/*"bit_result_skilldeliverance"*/;
      goto LABEL_96;
    case 4:
      v103 = 1;
      v104 = this;
      v105 = (System_String_o *)StringLiteral_17051/*"bit_result_skillup"*/;
      goto LABEL_101;
    case 5:
      v69 = &StringLiteral_17045/*"bit_result_nobledeliverance"*/;
      goto LABEL_100;
    case 6:
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_3089/*"BaseSvtNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_173;
      v106 = (System_String_o *)svtResultInfoWindow;
      v107 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v107, v106, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_173;
      v108 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_12967/*"SvtEqCardScale"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)svtResultInfoWindow, 0LL);
      if ( !v108 )
        goto LABEL_173;
      v110 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v108, 0LL);
      svtResultInfoWindow = (__int64)CharaGraphManager__CreateTexturePrefab_38863560(
                                       gameObject,
                                       this->fields.resUsrSvtData,
                                       10,
                                       0LL,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v112 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v145.fields.z = 0.0;
      v145.fields.x = -50.0;
      v145.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtResultInfoWindow, v145, 0LL);
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(v112, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v146.fields.x = v110;
      v146.fields.y = v110;
      v146.fields.z = v110;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)svtResultInfoWindow, v146, 0LL);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 1, 0LL);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      SvtCombineResultWindowComponent__setBefSvtEqResultState(
        (SvtCombineResultWindowComponent_o *)svtResultInfoWindow,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        this->fields.normalExp,
        this->fields.addTotalExp,
        0LL);
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtResultInfoWindow, 0LL) )
        goto LABEL_118;
      goto LABEL_93;
    case 7:
    case 0x15:
      v70 = &StringLiteral_17050/*"bit_result_skillrank"*/;
LABEL_96:
      v102 = (System_String_o *)*v70;
      v101 = this;
      v100 = 0;
LABEL_97:
      CombineResultEffectComponent__SetCardParam_Skill(v101, v102, v100, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v69 = &StringLiteral_17050/*"bit_result_skillrank"*/;
LABEL_100:
      v105 = (System_String_o *)*v69;
      v104 = this;
      v103 = 0;
LABEL_101:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v104, v105, v103, v2);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_12822/*"StartAnimationName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v115 = &StringLiteral_17051/*"bit_result_skillup"*/;
      goto LABEL_127;
    case 0xB:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_12822/*"StartAnimationName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v115 = &StringLiteral_17046/*"bit_result_powerup"*/;
LABEL_127:
      v116 = *v115;
      *(_QWORD *)(svtResultInfoWindow + 56) = *v115;
      v117 = (CGThumbnailListItem_o *)(svtResultInfoWindow + 56);
      goto LABEL_170;
    case 0xC:
    case 0x16:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 2, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_4858/*"CrtMaxLvExceedNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_173;
      v71 = (System_String_o *)svtResultInfoWindow;
      v72 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v72, v71, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v73 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v142) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v142 + 4, 0LL);
      if ( !v73 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v73, (System_String_o *)svtResultInfoWindow, 0LL);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_11160/*"ResMaxLvExceedNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_173;
      v74 = (System_String_o *)svtResultInfoWindow;
      v75 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v75, v74, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_173;
      v76 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v142) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v142, 0LL);
      if ( !v76 )
        goto LABEL_173;
      UIExtrusionLabel__set_text(v76, (System_String_o *)svtResultInfoWindow, 0LL);
      v77 = this->fields.baseUsrSvtData;
      if ( !v77 )
        goto LABEL_173;
      if ( v77->fields.exceedCount )
        goto LABEL_55;
      v78 = this->fields.resUsrSvtData;
      if ( !v78 )
        goto LABEL_173;
      if ( v78->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_55:
      Rarity = UserServantEntity__GetRarity(v77, 0, 0LL);
      svtResultInfoWindow = UserServantEntity__GetFrameType(v77, Rarity, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v80 = this->fields.resUsrSvtData;
      v81 = svtResultInfoWindow;
      svtResultInfoWindow = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0LL);
      if ( !v80 )
        goto LABEL_173;
      svtResultInfoWindow = UserServantEntity__GetFrameType(v80, svtResultInfoWindow, 0LL);
      if ( v81 != (_DWORD)svtResultInfoWindow )
        this->fields.isChangeCardImg = 1;
      v82 = this->fields.baseUsrSvtData;
      if ( !v82 )
        goto LABEL_173;
      v83 = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0LL);
      svtResultInfoWindow = UserServantEntity__GetRarityIcon(v82, v83, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_173;
      v84 = this->fields.resUsrSvtData;
      v85 = svtResultInfoWindow;
      svtResultInfoWindow = UserServantEntity__GetRarity(this->fields.baseUsrSvtData, 0, 0LL);
      if ( !v84 )
        goto LABEL_173;
      if ( v85 != UserServantEntity__GetRarityIcon(v84, svtResultInfoWindow, 0LL) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        v87 = &StringLiteral_17042/*"bit_result_limitbreak"*/;
      }
      else
      {
        if ( !this->fields.isChangeCardImg )
        {
          v87 = &StringLiteral_17039/*"bit_result_grail_01"*/;
LABEL_152:
          svtResultInfoWindow = (__int64)this->fields.fsm;
          if ( svtResultInfoWindow )
          {
            v123 = *v87;
            goto LABEL_167;
          }
          goto LABEL_173;
        }
        v87 = &StringLiteral_17040/*"bit_result_grail_02"*/;
      }
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v86);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v137);
      goto LABEL_152;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v88 = &StringLiteral_17037/*"bit_result_friendship_exceed"*/;
      goto LABEL_166;
    case 0xF:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_4716/*"CostumeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_173;
      v118 = (System_String_o *)svtResultInfoWindow;
      v119 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v119, v118, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      UILabel__set_text((UILabel_o *)svtResultInfoWindow, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v120);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v121);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v122);
      goto LABEL_135;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v88 = &StringLiteral_17033/*"bit_result_command_card_exceed"*/;
      goto LABEL_166;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v124);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v125);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v126);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_173;
      v88 = &StringLiteral_17029/*"bit_result_120"*/;
LABEL_166:
      v123 = *v88;
      goto LABEL_167;
    case 0x19:
      svtResultInfoWindow = (__int64)this->fields.effect;
      if ( svtResultInfoWindow )
      {
        svtResultInfoWindow = (__int64)UnityEngine_GameObject__get_gameObject(
                                         (UnityEngine_GameObject_o *)svtResultInfoWindow,
                                         0LL);
        if ( svtResultInfoWindow )
        {
          v127 = UnityEngine_GameObject__AddComponent_object_(
                   (UnityEngine_GameObject_o *)svtResultInfoWindow,
                   (const MethodInfo_2FC0D08 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
          v128 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v128,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_b__114_0__,
            0LL);
          v129 = (EventDelegate_o *)sub_1B86604(EventDelegate_TypeInfo);
          EventDelegate___ctor_47774260(v129, v128, 0LL);
          if ( v127 )
          {
            svtResultInfoWindow = (__int64)v127[2].klass;
            if ( svtResultInfoWindow )
            {
              v132 = *(_QWORD *)(svtResultInfoWindow + 16);
              v133 = Method_System_Collections_Generic_List_EventDelegate__Add__;
              ++*(_DWORD *)(svtResultInfoWindow + 28);
              if ( v132 )
              {
                v134 = *(int *)(svtResultInfoWindow + 24);
                if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                    (Il2CppObject *)v129,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
                }
                else
                {
                  v135 = v132 + 8 * v134;
                  *(_DWORD *)(svtResultInfoWindow + 24) = v134 + 1;
                  *(_QWORD *)(v135 + 32) = v129;
                  sub_1B8635C((CGThumbnailListItem_o *)(v135 + 32), (int32_t)v129, v130, v131);
                }
                CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v136);
                svtResultInfoWindow = (__int64)this->fields.fsm;
                v88 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17036/*"bit_result_extraskill02"*/ : &StringLiteral_17035/*"bit_result_extraskill01"*/);
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
  __int64 v13; // x1
  int *effect; // x0
  Il2CppObject *v15; // x22
  EventDelegate_Callback_o *v16; // x23
  EventDelegate_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4A520D5 & 1) == 0 )
  {
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, startName);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__117_0__, v7);
    sub_1B863B8(&EventDelegate_TypeInfo, v8);
    sub_1B863B8(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1B863B8(&StringLiteral_12099/*"START_ANIMATION"*/, v11);
    sub_1B863B8(&StringLiteral_12822/*"StartAnimationName"*/, v12);
    byte_4A520D5 = 1;
  }
  CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, method);
  if ( isSkip )
  {
    effect = (int *)this->fields.effect;
    if ( !effect )
      goto LABEL_17;
    effect = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL);
    if ( !effect )
      goto LABEL_17;
    v15 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)effect,
            (const MethodInfo_2FC0D08 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v16 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v16,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__117_0__,
      0LL);
    v17 = (EventDelegate_o *)sub_1B86604(EventDelegate_TypeInfo);
    EventDelegate___ctor_47774260(v17, v16, 0LL);
    if ( !v15
      || (effect = (int *)v15[2].klass) == 0LL
      || (v20 = *((_QWORD *)effect + 2),
          v21 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v20) )
    {
LABEL_17:
      sub_1B86614(effect, v13);
    }
    v22 = effect[6];
    if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v17,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = v20 + 8 * v22;
      effect[6] = v22 + 1;
      *(_QWORD *)(v23 + 32) = v17;
      sub_1B8635C((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v17, v18, v19);
    }
  }
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  effect = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL);
  if ( !effect )
    goto LABEL_17;
  effect = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                    (HutongGames_PlayMaker_FsmVariables_o *)effect,
                    (System_String_o *)StringLiteral_12822/*"StartAnimationName"*/,
                    0LL);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1B8635C((CGThumbnailListItem_o *)(effect + 14), (int32_t)startName, v24, v25);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12099/*"START_ANIMATION"*/, 0LL);
}


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
  int *effect; // x0
  Il2CppObject *v14; // x22
  EventDelegate_Callback_o *v15; // x23
  EventDelegate_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4A520D6 & 1) == 0 )
  {
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, startName);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__118_0__, v7);
    sub_1B863B8(&EventDelegate_TypeInfo, v8);
    sub_1B863B8(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1B863B8(&StringLiteral_12099/*"START_ANIMATION"*/, v11);
    sub_1B863B8(&StringLiteral_12822/*"StartAnimationName"*/, v12);
    byte_4A520D6 = 1;
  }
  if ( isSkip )
  {
    effect = (int *)this->fields.effect;
    if ( !effect )
      goto LABEL_20;
    effect = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL);
    if ( !effect )
      goto LABEL_20;
    v14 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)effect,
            (const MethodInfo_2FC0D08 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v15 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__118_0__,
      0LL);
    v16 = (EventDelegate_o *)sub_1B86604(EventDelegate_TypeInfo);
    EventDelegate___ctor_47774260(v16, v15, 0LL);
    if ( !v14 )
      goto LABEL_20;
    effect = (int *)v14[2].klass;
    if ( !effect )
      goto LABEL_20;
    v19 = *((_QWORD *)effect + 2);
    v20 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++effect[7];
    if ( !v19 )
      goto LABEL_20;
    v21 = effect[6];
    if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v16,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = v19 + 8 * v21;
      effect[6] = v21 + 1;
      *(_QWORD *)(v22 + 32) = v16;
      sub_1B8635C((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v16, v17, v18);
    }
  }
  if ( this->fields.kind == 18 )
    CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(this, (const MethodInfo *)startName);
  else
    CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, method);
  effect = (int *)this->fields.fsm;
  if ( !effect
    || (effect = (int *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL)) == 0LL
    || (effect = (int *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)effect,
                          (System_String_o *)StringLiteral_12822/*"StartAnimationName"*/,
                          0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_1B8635C((CGThumbnailListItem_o *)(effect + 14), (int32_t)startName, v23, v24),
        (effect = (int *)this->fields.fsm) == 0LL) )
  {
LABEL_20:
    sub_1B86614(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12099/*"START_ANIMATION"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  CombineRootComponent_c *v19; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_4A520CE & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, baseData);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__, v9);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v10);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4A520CE = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)callback,
    (const MethodInfo *)autoFadeout);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B86614(gameObject, v18);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v19 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v19 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v19->static_fields->EXCEED_ASSET_PATH;
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v21, 1, 0LL);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  AssetData_o *effectAssetData; // x0
  __int64 v22; // x1
  CombineRootComponent_c *v23; // x0
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_Transform_o *v26; // x21

  if ( (byte_4A520C8 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, userServantEntity);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v11);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_17033/*"bit_result_command_card_exceed"*/, v14);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v15);
    sub_1B863B8(&StringLiteral_12104/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v16);
    byte_4A520C8 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    cardIndex,
    *(const MethodInfo **)&exceedCount);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v19, v20);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  if ( !userServantEntity )
    goto LABEL_18;
  this->fields.displayCount = UserServantEntity__GetTransformCount(userServantEntity, 0, 0LL);
  v23 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v23 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v23->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_18;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17033/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49610244,
                                     (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v25 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v26 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A487E6 )
  {
    effectAssetData = (AssetData_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v22);
    byte_4A487E6 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v25,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_18:
    sub_1B86614(effectAssetData, v22);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12104/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
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

  if ( (byte_4A520C2 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, userSvtEntity);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__98_0__, v11);
    sub_1B863B8(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo, v12);
    byte_4A520C2 = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    costumeId,
    (const MethodInfo *)costumeName);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeName, (int32_t)costumeName, v13, v14);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  v19 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1B86604(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v19, 0LL);
  this->fields.costumeSkillInfoManager = v19;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B86614(0LL, v23);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__98_0__,
    0LL);
  CombineResultEffectComponent__LoadCombineEffect(v25, v24, v26);
}


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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  CombineRootComponent_c *v18; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_Transform_o *v22; // x21

  if ( (byte_4A520C6 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, userSvtData);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v7);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_17037/*"bit_result_friendship_exceed"*/, v10);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v11);
    sub_1B863B8(&StringLiteral_12111/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v12);
    byte_4A520C6 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)userSvtData, (int32_t)callback, method);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v15, v16);
  this->fields.setResUsrSvtData = 0;
  v18 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v18 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v18->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17037/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49610244,
                                     (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v21 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v22 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A487E6 )
  {
    effectAssetData = (AssetData_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4A487E6 = 1;
  }
  if ( !v22
    || (UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v21,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_1B86614(effectAssetData, v17);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12111/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  CombineRootComponent_c *v19; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_4A520C7 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, userSvtData);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__, v9);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v10);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4A520C7 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    oldFriendShipRank,
    (const MethodInfo *)callback);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v18);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v19 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v19 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v19->static_fields->COMBINE_ASSET_PATH;
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v21, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__SetFriendshipUpInfo(
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

  if ( (byte_4A520BC & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12110/*"START_FRIENDSHIPUP_EFFECT"*/, usrSvtData);
    byte_4A520BC = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    oldFriendShipRank,
    (const MethodInfo *)callback);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B86614(gameObject, v14);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12110/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
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
  ServantScriptEntity_o *Entity_40842564; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct ServantVoiceData_array *v19; // x1
  CGThumbnailListItem_o *p_playVoiceList; // x0
  const MethodInfo *v21; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v23; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v25; // x0
  const MethodInfo *v26; // x2
  struct UserServantEntity_o *v27; // x8
  CombineResultEffectComponent_o *v28; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_o *v32; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v34; // x21
  const MethodInfo *v35; // x2
  struct UserServantEntity_o *v36; // x8
  CombineResultEffectComponent_o *v37; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_String_o *v41; // x0
  ServantVoiceEntity_o *v42; // x20
  UserServantEntity_o *v43; // x21
  ServantVoiceData_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  ServantVoiceData_array *v47; // x0
  int v48; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v2 = this;
  if ( (byte_4A520DC & 1) == 0 )
  {
    sub_1B863B8(&CombineResultFormManager_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantScriptMaster___, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (CombineResultEffectComponent_o *)sub_1B863B8(&string___TypeInfo, v6);
    byte_4A520DC = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v9;
  *(_QWORD *)&v49.fields.fakeValue = v8;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v49, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_48;
  v10 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v10, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_40842564 = ServantScriptMaster__GetEntity_40842564((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_40842564 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_40842564, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v2->fields.combineVoiceId;
      method = (const MethodInfo *)v2->fields.baseUsrSvtData;
LABEL_19:
      v16 = ServantVoiceEntity__lotteryLevelUpVoice_40884540(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0LL);
LABEL_20:
      v19 = v16;
      p_playVoiceList = (CGThumbnailListItem_o *)&v2->fields.playVoiceList;
      v2->fields.playVoiceList = v19;
      goto LABEL_21;
    }
    method = (const MethodInfo *)v2->fields.baseUsrSvtData;
    if ( method )
    {
      v48 = *(_DWORD *)&method[2].slot;
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
        if ( System_Int32__Equals_63159256((int32_t)&v48, resUsrSvtData->fields.lv, 0LL) )
        {
          v25 = v2;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v25, form, 1, v21);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1B86460(string___TypeInfo, 1LL);
        v27 = v2->fields.baseUsrSvtData;
        if ( v27 )
        {
          v28 = this;
          p_svtId = &v27->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v50.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v50.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v50, v26);
          if ( v28 )
          {
            if ( !LODWORD(v28->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v28->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1B8635C((CGThumbnailListItem_o *)&v28->fields.svtResultInfoWindow, (int32_t)this, v30, v31);
            v32 = System_String__Concat_61685692((System_String_array *)v28, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_69314012(v32, 0LL) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v34 = v2->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v16 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v34, 0LL);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1B86460(string___TypeInfo, 1LL);
            v36 = v2->fields.baseUsrSvtData;
            if ( v36 )
            {
              v37 = this;
              v38 = &v36->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v51.fields.currentCryptoKey = v38;
              *(_QWORD *)&v51.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v51, v35);
              if ( v37 )
              {
                if ( !LODWORD(v37->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v37->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1B8635C((CGThumbnailListItem_o *)&v37->fields.svtResultInfoWindow, (int32_t)this, v39, v40);
                v41 = System_String__Concat_61685692((System_String_array *)v37, 0LL);
                UnityEngine_PlayerPrefs__SetInt(v41, 1, 0LL);
                v42 = v2->fields.svtVoiceEntity;
                v43 = v2->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v44 = CombineResultFormManager__lotteryCombineResultInit(v42, v43, 0LL);
                v2->fields.playVoiceList = v44;
                sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.playVoiceList, (int32_t)v44, v45, v46);
                playVoiceList = v2->fields.playVoiceList;
                if ( playVoiceList )
                {
LABEL_22:
                  if ( playVoiceList->max_length )
                  {
                    v23 = playVoiceList->m_Items[0];
                    if ( !v23 )
                      goto LABEL_48;
                    form = v23->fields.form;
                    v25 = v2;
                    goto LABEL_25;
                  }
LABEL_49:
                  sub_1B8661C(this, method);
                }
                this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v47 = ServantVoiceEntity__lotteryLevelUpVoice_40884540(
                        (ServantVoiceEntity_o *)this,
                        v2->fields.baseUsrSvtData,
                        v2->fields.combineVoiceId,
                        0LL);
                LODWORD(v19) = (_DWORD)v47;
                v2->fields.playVoiceList = v47;
                p_playVoiceList = (CGThumbnailListItem_o *)&v2->fields.playVoiceList;
LABEL_21:
                sub_1B8635C(p_playVoiceList, (int32_t)v19, v17, v18);
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
    sub_1B86614(this, method);
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
  void *LimitUpSvtVoiceList; // x0
  __int64 v10; // x1
  int32_t v11; // w20
  __int64 v12; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v14; // x21
  __int64 v15; // x22
  struct UserServantEntity_o *v16; // x8
  int32_t v17; // w21
  int32_t v18; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v21; // x5
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A520E2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_8279/*"LimitUpResSvtNodeName"*/, v8);
    byte_4A520E2 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v11 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !*((_DWORD *)LimitUpSvtVoiceList + 6) )
      sub_1B8661C(LimitUpSvtVoiceList, v10);
    v12 = *((_QWORD *)LimitUpSvtVoiceList + 4);
    if ( !v12 )
      goto LABEL_21;
    v11 = *(_DWORD *)(v12 + 28);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_21;
  v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  LimitUpSvtVoiceList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v23, 0LL);
  v16 = this->fields.resUsrSvtData;
  if ( !v16 )
    goto LABEL_21;
  v17 = (int)LimitUpSvtVoiceList;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v16->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = DataManager__GetMasterData_object_(
                          (DataManager_o *)LimitUpSvtVoiceList,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v17, v18, 0LL) )
    goto LABEL_18;
  LimitUpSvtVoiceList = entity;
  if ( !entity )
LABEL_21:
    sub_1B86614(LimitUpSvtVoiceList, v10);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v18 = LimitCountUpResultServantLimitCount;
LABEL_18:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v17, v18, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v17,
    ImageLimitCount,
    v11,
    (System_String_o *)StringLiteral_8279/*"LimitUpResSvtNodeName"*/,
    v21);
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
  bool v18; // w29
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  __int64 v35; // x21
  __int64 v36; // x22
  int32_t v37; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v39; // x8
  ServantLimitImageMaster_o *v40; // x20
  System_Action_o *v41; // x20
  CombineResultEffectComponent_o *v42; // x0
  const MethodInfo *v43; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_4A520C0 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__95_0__, v19);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v20);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4A520C0 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    *(const MethodInfo **)&baseCollectionLimitCnt);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resSvtNameData, (int32_t)servantChange, v23, v24);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v25, v26);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v27, v28);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.limitUpPlayVoiceLabel, (int32_t)playVoiceLabel, v29, v30);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.limitUpRewardGiftDataList, (int32_t)rewardGiftDataList, v31, v32);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_12;
  v36 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v35 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v36;
  *(_QWORD *)&v45.fields.fakeValue = v35;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v45, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v39 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue,
        v40 = (ServantLimitImageMaster_o *)MasterData_object,
        *(_QWORD *)&v46.fields.currentCryptoKey = v39,
        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                   v46,
                                                   0LL),
        !v40) )
  {
LABEL_12:
    sub_1B86614(gameObject, v34);
  }
  this->fields.isLimitUpSuppression = ServantLimitImageMaster__IsServantLimitCountSeal(
                                        v40,
                                        (int32_t)gameObject,
                                        v37 + 1,
                                        0LL);
  v41 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__95_0__,
    0LL);
  CombineResultEffectComponent__LoadCombineEffect(v42, v41, v43);
}


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
  __int64 v15; // x1
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 Int_69314012; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  __int64 v24; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x21
  __int64 v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x0
  UserServantEntity_o *v35; // x20
  CombineRootComponent_c *v36; // x0
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_GameObject_o *v38; // x20
  UnityEngine_Transform_o *v39; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A520C4 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, usrSvtData);
    sub_1B863B8(&CombineResultFormManager_TypeInfo, v7);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v8);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&string___TypeInfo, v12);
    sub_1B863B8(&StringLiteral_12115/*"START_LVEXCEED_EFFECT"*/, v13);
    sub_1B863B8(&StringLiteral_17038/*"bit_result_grail"*/, v14);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v15);
    byte_4A520C4 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  Int_69314012 = sub_1B86460(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v24 = Int_69314012;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v40.fields.fakeValue = 0LL;
  Int_69314012 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v40, v23);
  if ( !v24 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v24 + 32) = Int_69314012;
  sub_1B8635C((CGThumbnailListItem_o *)(v24 + 32), Int_69314012, v26, v27);
  v28 = System_String__Concat_61685692((System_String_array *)v24, 0LL);
  Int_69314012 = UnityEngine_PlayerPrefs__GetInt_69314012(v28, 0LL);
  if ( (_DWORD)Int_69314012 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_69314012 = sub_1B86460(string___TypeInfo, 1LL);
      if ( *p_baseUsrSvtData )
      {
        v30 = Int_69314012;
        v31 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v41.fields.currentCryptoKey = v31;
        *(_QWORD *)&v41.fields.fakeValue = 0LL;
        Int_69314012 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v41, v29);
        if ( v30 )
        {
          if ( *(_DWORD *)(v30 + 24) )
          {
            *(_QWORD *)(v30 + 32) = Int_69314012;
            sub_1B8635C((CGThumbnailListItem_o *)(v30 + 32), Int_69314012, v32, v33);
            v34 = System_String__Concat_61685692((System_String_array *)v30, 0LL);
            UnityEngine_PlayerPrefs__SetInt(v34, 0, 0LL);
            v35 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v35, 0LL);
            goto LABEL_19;
          }
LABEL_34:
          sub_1B8661C(Int_69314012, v22);
        }
      }
LABEL_33:
      sub_1B86614(Int_69314012, v22);
    }
  }
LABEL_19:
  v36 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v36 = CombineRootComponent_TypeInfo;
  }
  Int_69314012 = (__int64)v36->static_fields->effectAssetData;
  if ( !Int_69314012 )
    goto LABEL_33;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              (AssetData_o *)Int_69314012,
                              (System_String_o *)StringLiteral_17038/*"bit_result_grail"*/,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_69314012 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__49610244,
                            (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_69314012 )
    goto LABEL_33;
  v38 = (UnityEngine_GameObject_o *)Int_69314012;
  Int_69314012 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_69314012, 0LL);
  v39 = (UnityEngine_Transform_o *)Int_69314012;
  if ( !byte_4A487E6 )
  {
    Int_69314012 = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v22);
    byte_4A487E6 = 1;
  }
  if ( !v39 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Int_69314012 = (__int64)this->fields.fsm;
  if ( !Int_69314012 )
    goto LABEL_33;
  Int_69314012 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_69314012, 0LL);
  if ( !Int_69314012 )
    goto LABEL_33;
  Int_69314012 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_69314012,
                            (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                            0LL);
  if ( !Int_69314012 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_69314012, v38, 0LL);
  Int_69314012 = (__int64)this->fields.fsm;
  if ( !Int_69314012 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_69314012, (System_String_o *)StringLiteral_12115/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  CombineRootComponent_c *v17; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_4A520C5 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, usrSvtData);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__, v7);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v8);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4A520C5 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v16);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v17 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v17 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v17->static_fields->EXCEED_ASSET_PATH;
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v19, 1, 0LL);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  char *gameObject; // x0
  __int64 v27; // x1
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v30; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v32; // x21
  UnityEngine_Transform_o *v33; // x0
  int *v34; // x21
  System_String_o *v35; // x22
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_ParticleSystem_o *v37; // x22
  float v38; // s0
  const MethodInfo *v39; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v41; // x4
  struct ServantChangeEntity_o *v42; // x8
  int32_t v43; // w3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v48; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v49; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v51; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v52; // 0:x0.8
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A520C1 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, before);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B863B8(&StringLiteral_11162/*"ResNameNodeName"*/, v13);
    sub_1B863B8(&StringLiteral_12116/*"START_NAME_REVEAL_EFFECT"*/, v14);
    sub_1B863B8(&StringLiteral_9232/*"NameRevealCrossFade"*/, v15);
    sub_1B863B8(&StringLiteral_4860/*"CrtNameNodeName"*/, v16);
    sub_1B863B8(&StringLiteral_17043/*"bit_result_name_reveal"*/, v17);
    sub_1B863B8(&StringLiteral_12822/*"StartAnimationName"*/, v18);
    sub_1B863B8(&StringLiteral_1/*""*/, v19);
    sub_1B863B8(&StringLiteral_9233/*"NameRevealParticleNodeName"*/, v20);
    byte_4A520C1 = 1;
  }
  v49 = 0LL;
  m_ParticleSystem = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (int32_t)after,
    (const MethodInfo *)callback);
  this->fields.resSvtNameData = after;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resSvtNameData, (int32_t)after, v22, v23);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12116/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4860/*"CrtNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v30 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v30, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11162/*"ResNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v32 = (System_String_o *)gameObject;
  v33 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v33, v32, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v34 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9233/*"NameRevealParticleNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v35 = (System_String_o *)gameObject;
  v36 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v36, v35, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v37 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v49 = UnityEngine_ParticleSystem__get_shape(v37, 0LL).fields.m_ParticleSystem;
  v38 = (float)((float)v34[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v48, 0, sizeof(v48));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v48, v38, 0LL);
  v51.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v47 = v48;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v51, &v47, 0LL);
  v53.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v52.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v49;
  v53.fields.x = (float)((float)v34[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v53.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v52, v53, 0LL);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v39);
  v42 = this->fields.crtSvtNameData;
  if ( !v42 )
    goto LABEL_40;
  v43 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v42->fields.svtId, v42->fields.limitCount, v43, v41);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_12822/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_1B86614(gameObject, v27);
  }
  v46 = StringLiteral_17043/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17043/*"bit_result_name_reveal"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(gameObject + 56), v46, v44, v45);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9232/*"NameRevealCrossFade"*/,
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
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ServantTreasureDeviceAddMaster_o *Master_object; // x0
  __int64 v31; // x1
  ServantTreasureDeviceAddMaster_o *v32; // x22
  __int64 v33; // x25
  __int64 v34; // x26
  int32_t v35; // w25
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x25
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v37; // x26
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x0
  __int64 v42; // x26
  __int64 v43; // x27
  ServantTreasureDeviceAddMaster_o *v44; // x23
  int32_t v45; // w0
  __int64 v46; // x8
  int32_t v47; // w24
  int32_t v48; // w26
  ServantTreasureDeviceAddEntity_o *EnableEntityBeforeClearQuest; // x23
  __int64 v50; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v52; // x8
  __int64 v53; // x8
  int32_t TransformCount; // w0
  int32_t v55; // w25
  int32_t i; // w26
  TerminalPramsManager_c *v57; // x0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v58; // x28
  int32_t id; // w29
  int32_t v60; // w3
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v61; // x0
  int32_t v62; // w1
  int32_t v63; // w2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v64; // x28
  int32_t v65; // w29
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v66; // x28
  int32_t v67; // w29
  __int64 v68; // x26
  struct System_Int32_array *v69; // x8
  struct System_Int32_array *v70; // x8
  __int64 v71; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  TreasureDvcInfo_o *v74; // [xsp+0h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4A520BB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, *(_QWORD *)&kind);
    sub_1B863B8(&DataManager_TypeInfo, v17);
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_int___, v18);
    sub_1B863B8(&LocalizationManager_TypeInfo, v19);
    sub_1B863B8(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v20);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v22);
    sub_1B863B8(&StringLiteral_12117/*"START_NOBLEUP_EFFECT"*/, v23);
    sub_1B863B8(&StringLiteral_13302/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v24);
    sub_1B863B8(&StringLiteral_13303/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v25);
    byte_4A520BB = 1;
  }
  v74 = 0LL;
  tdInfo = 0LL;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    *(const MethodInfo **)&targetId);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v26, v27);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v28, v29);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v32 = Master_object;
  v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v34;
  *(_QWORD *)&v76.fields.fakeValue = v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v76, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                        usrSvtData->fields.limitCount,
                                                        0LL);
  if ( !v32 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v32, v35, (int32_t)Master_object, 0, 0, 0, 0LL);
  v37 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1B86604(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v37, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v37;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.npInfoAddManager, (int32_t)v37, v39, v40);
  if ( EnableEntity )
  {
    Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
    if ( !*p_npInfoAddManager )
      goto LABEL_72;
    Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
      (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
      EnableEntity,
      0LL);
    if ( kind == 8 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v41 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v43 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v44 = (ServantTreasureDeviceAddMaster_o *)v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v77.fields.currentCryptoKey = v43;
      *(_QWORD *)&v77.fields.fakeValue = v42;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v77, 0LL);
      v46 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v78.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v47 = v45;
      *(_QWORD *)&v78.fields.currentCryptoKey = v46;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v78, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E97 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v31);
        byte_4A48E97 = 1;
      }
      Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v44 )
        goto LABEL_72;
      EnableEntityBeforeClearQuest = ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
                                       v44,
                                       v47,
                                       v48,
                                       *(_DWORD *)&Master_object[2].fields._MasterName_k__BackingField->fields._firstChar,
                                       0LL);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        if ( EnableEntityBeforeClearQuest )
        {
          v50 = 8LL;
          while ( 1 )
          {
            treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
            if ( !treasureDeviceIds )
              break;
            if ( v50 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&treasureDeviceIds->obj.klass + v50),
              targetLv,
              0,
              0LL);
            v52 = EnableEntity->fields.treasureDeviceIds;
            if ( !v52 )
              break;
            if ( v50 - 8 >= (unsigned __int64)v52->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&v52->obj.klass + v50),
              targetLv,
              0,
              0LL);
            Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                  (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
            v53 = v50 - 7;
            ++v50;
            if ( v53 >= (int)Master_object )
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
                                                            (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        v68 = 8LL;
        while ( 1 )
        {
          v69 = EnableEntity->fields.treasureDeviceIds;
          if ( !v69 )
            break;
          if ( v68 - 8 >= (unsigned __int64)v69->max_length )
            goto LABEL_73;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v69->obj.klass + v68),
            targetLvOld,
            0,
            0LL);
          v70 = EnableEntity->fields.treasureDeviceIds;
          if ( !v70 )
            break;
          if ( v68 - 8 >= (unsigned __int64)v70->max_length )
LABEL_73:
            sub_1B8661C(Master_object, v31);
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v70->obj.klass + v68),
            targetLv,
            0,
            0LL);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
          v71 = v68 - 7;
          ++v68;
          if ( v71 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1B86614(Master_object, v31);
      }
    }
  }
  else
  {
    if ( UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL) < 2 )
      goto LABEL_64;
    TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
    if ( TransformCount >= 1 )
    {
      v55 = TransformCount;
      for ( i = 0; v55 != i; ++i )
      {
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                              usrSvtData,
                                                              &tdInfo,
                                                              i,
                                                              -1,
                                                              -1,
                                                              0,
                                                              0LL);
        if ( kind == 8 )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A48E97 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v31);
            byte_4A48E97 = 1;
          }
          v57 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v57 = TerminalPramsManager_TypeInfo;
          }
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                                usrSvtData,
                                                                &v74,
                                                                i,
                                                                v57->static_fields->_QuestId_k__BackingField,
                                                                -1,
                                                                0,
                                                                0LL);
          if ( !v74 )
            goto LABEL_72;
          v58 = *p_npInfoAddManager;
          id = v74->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
          if ( !v58 )
            goto LABEL_72;
          v60 = (int)Master_object;
          v61 = v58;
          v62 = id;
          v63 = targetLv;
        }
        else
        {
          if ( !tdInfo )
            goto LABEL_72;
          v64 = *p_npInfoAddManager;
          v65 = tdInfo->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
          if ( !v64 )
            goto LABEL_72;
          v60 = (int)Master_object;
          v61 = v64;
          v62 = v65;
          v63 = targetLvOld;
        }
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(v61, v62, v63, v60, 0LL);
        if ( !tdInfo )
          goto LABEL_72;
        v66 = *p_npInfoAddManager;
        v67 = tdInfo->fields.id;
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                              usrSvtData,
                                                              i,
                                                              0LL);
        if ( !v66 )
          goto LABEL_72;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          v66,
          v67,
          targetLv,
          (int32_t)Master_object,
          0LL);
      }
    }
  }
LABEL_63:
  ++this->fields.tdShowIndex;
LABEL_64:
  Master_object = (ServantTreasureDeviceAddMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !Master_object )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.unSummon;
  if ( !Master_object )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, kind == 27, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13302/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0LL);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13303/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0LL);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12117/*"START_NOBLEUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetPowerUpInfo(
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

  if ( (byte_4A520C3 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12120/*"START_POWERUP_EFFECT"*/, usrSvtData);
    byte_4A520C3 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseUsrSvtData, (int32_t)usrSvtData, (int32_t)callback, method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B86614(gameObject, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12120/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t kind; // w9
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  struct ServantChangeEntity_o *resSvtNameData; // x8
  int32_t voiceSvtId; // w1
  int32_t LimitCountByImageLimitCostumeIn; // w2
  bool v11; // w3
  CombineResultEffectComponent_o *v12; // x0
  struct ServantChangeEntity_o *v13; // x8
  int32_t CardImageLimitCount; // w0
  int32_t v15; // w20
  const MethodInfo *v16; // x1

  if ( (byte_4A520D4 & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A520D4 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    Instance = (CommonUI_o *)this->fields.resUsrSvtData;
    if ( !Instance )
      goto LABEL_32;
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
    if ( CardImageLimitCount < 11 )
    {
      LimitCountByImageLimitCostumeIn = -1;
    }
    else
    {
      v15 = CardImageLimitCount;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v15, 0LL);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 1, 0LL);
        resSvtNameData = this->fields.resSvtNameData;
        if ( resSvtNameData )
          voiceSvtId = resSvtNameData->fields.svtVoiceId;
        else
          voiceSvtId = -1;
        LimitCountByImageLimitCostumeIn = -1;
        v11 = 1;
        v12 = this;
        goto LABEL_31;
      }
LABEL_32:
      sub_1B86614(Instance, v6);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    v13 = this->fields.resSvtNameData;
    if ( v13 )
      voiceSvtId = v13->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    LimitCountByImageLimitCostumeIn = this->fields.costumeId;
  }
  v12 = this;
  v11 = 0;
LABEL_31:
  CombineResultEffectComponent__getSvtVoiceData(v12, voiceSvtId, LimitCountByImageLimitCostumeIn, v11, v7);
  CombineResultEffectComponent__loadVoiceData(this, v16);
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
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v16; // x20
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  UserServantEntity_o *v20; // x21
  UserServantEntity_o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UserServantEntity_o *v24; // x8
  __int64 v25; // x21
  __int64 v26; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v42; // x8
  UserServantEntity_o *v43; // x20
  UserServantEntity_o *v44; // x21
  CGThumbnailListItem_o *p_resUsrSvtData; // x19
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  CGThumbnailListItem_c *klass; // x21
  void *typeMetadataHandle; // x19
  void *generic_class; // x20
  int32_t v51; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v2 = this;
  if ( (byte_4A520D3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    this = (CombineResultEffectComponent_o *)sub_1B863B8(&UserServantEntity_TypeInfo, v10);
    byte_4A520D3 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_46;
    v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v55.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v54 = v55;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v54, 0LL) < 1 )
    {
      v43 = v2->fields.baseUsrSvtData;
      v44 = (UserServantEntity_o *)sub_1B86604(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41229780(v44, v43, 0LL);
      v2->fields.resUsrSvtData = v44;
      p_resUsrSvtData = (CGThumbnailListItem_o *)&v2->fields.resUsrSvtData;
      sub_1B8635C(p_resUsrSvtData, (int32_t)v44, v46, v47);
      if ( (LODWORD(p_resUsrSvtData[-1].fields.viewObject) | 0x10) != 26 )
        return;
      klass = p_resUsrSvtData->klass;
      if ( p_resUsrSvtData->klass )
      {
        generic_class = klass->_1.generic_class;
        typeMetadataHandle = klass->_1.typeMetadataHandle;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v59.fields.currentCryptoKey = generic_class;
        *(_QWORD *)&v59.fields.fakeValue = typeMetadataHandle;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v59, 0LL);
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&klass->_1.generic_class = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                                         v51 + 1,
                                                                                         0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v13 = v2->fields.baseUsrSvtData;
        if ( v13 )
        {
          v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
          v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
          *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v55.fields.fakeValue = v14;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v53 = v55;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                     &v53,
                                                     0LL);
          if ( v15 )
          {
            v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v15,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v17 = v2->fields.baseUsrSvtData;
              if ( !v17 )
                goto LABEL_46;
              v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
              v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
              *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v55.fields.fakeValue = v18;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v52 = v55;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                         &v52,
                                                         0LL);
              if ( !v19 )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v19,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v20 = v2->fields.baseUsrSvtData;
                v21 = (UserServantEntity_o *)sub_1B86604(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_41229780(v21, v20, 0LL);
                v2->fields.resUsrSvtData = v21;
                sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.resUsrSvtData, (int32_t)v21, v22, v23);
              }
            }
            if ( v2->fields.kind != 19 )
              return;
            v24 = v2->fields.baseUsrSvtData;
            if ( v24 )
            {
              v26 = *(_QWORD *)&v24->fields.limitCount.fields.currentCryptoKey;
              v25 = *(_QWORD *)&v24->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v57.fields.currentCryptoKey = v26;
              *(_QWORD *)&v57.fields.fakeValue = v25;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                         v57,
                                                         0LL);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v28 = (UserServantEntity_o *)sub_1B86604(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_41229780(v28, resUsrSvtData, 0LL);
                v2->fields.resUsrSvtData = v28;
                sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.resUsrSvtData, (int32_t)v28, v29, v30);
                v31 = v2->fields.baseUsrSvtData;
                if ( v31 )
                {
                  v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                  v34 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
                  v33 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v58.fields.currentCryptoKey = v34;
                  *(_QWORD *)&v58.fields.fakeValue = v33;
                  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v58, 0LL);
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
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v16 )
                        {
                          v39 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                     (*v16)[5],
                                                                     0LL);
                          if ( *v16 )
                          {
                            v40 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                       (*v16)[6],
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
                                    HIDWORD(v41->fields.m_CancellationTokenSource),
                                    0LL);
                                  v42 = *v16;
                                  if ( *v16 )
                                  {
                                    *(_DWORD *)&v42[16].fields.inited = afterAtk[1];
                                    v42[16].fields.fakeValue = afterAtk[0];
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
LABEL_46:
    sub_1B86614(this, method);
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
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  void *Instance; // x0
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_T__o *v33; // x26
  System_Collections_Generic_List_object__o *v34; // x23
  int32_t v35; // w27
  int v36; // w8
  Il2CppObject *v37; // x28
  int v38; // w8
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x24
  Il2CppObject *v46; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int v50; // w20
  BalanceConfig_c *v51; // x0
  TerminalSceneComponent_c *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w1
  int32_t v58; // w24
  const MethodInfo *v59; // x2

  if ( (byte_4A520C9 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__, v11);
    sub_1B863B8(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v13);
    sub_1B863B8(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__getEntityList__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v19);
    sub_1B863B8(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v20);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v22);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__, v23);
    sub_1B863B8(&CombineResultEffectComponent___c_TypeInfo, v24);
    sub_1B863B8(&StringLiteral_12121/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v25);
    sub_1B863B8(&StringLiteral_17054/*"bit_result_ultimate_anim"*/, v26);
    sub_1B863B8(&StringLiteral_12822/*"StartAnimationName"*/, v27);
    byte_4A520C9 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    phase,
    (const MethodInfo *)msgCallBack);
  this->fields.messageCallback = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.messageCallback, 0, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  v33 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 5);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v33 )
    goto LABEL_57;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v33,
         (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v33,
                   v35,
                   (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        break;
      v36 = *((_DWORD *)Instance + 9);
      v37 = (Il2CppObject *)Instance;
      if ( v36 >= 1 && v36 == questId )
      {
        v38 = *((_DWORD *)Instance + 10);
        if ( v38 < 1 || v38 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v34 )
              break;
            items = v34->fields._items;
            v42 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v34->fields._version;
            if ( !items )
              break;
            size = v34->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v37,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = &items->obj.klass + size;
              v34->fields._size = size + 1;
              v44[4] = (Il2CppClass *)v37;
              sub_1B8635C((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v37, v39, v40);
            }
          }
        }
      }
      if ( ++v35 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v33,
                      (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) )
        goto LABEL_20;
    }
LABEL_57:
    sub_1B86614(Instance, v32);
  }
LABEL_20:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v45 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      v45,
      v46,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__,
      0LL);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v45;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__105_0, (int32_t)v45, v48, v49);
  }
  if ( !v34 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_56615964(
    v34,
    v45,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v50 = v34->fields._size;
  if ( v50 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v34,
                 0,
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v51 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  if ( !v51->static_fields->CloseSecretTreasureDeviceQuestClear && v34->fields._size >= 1 )
  {
    v58 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v34,
                   v58,
                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_57;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v59) )
        break;
      if ( ++v58 >= v34->fields._size )
        goto LABEL_33;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v34,
                 v58,
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_33:
  if ( v50 < 1 )
  {
    if ( *p_callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))(*p_callbackFunc)->fields.m_target)(
        (*p_callbackFunc)->fields.original_method_info,
        1LL,
        *(_QWORD *)&(*p_callbackFunc)->fields.extra_arg);
  }
  else
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v32);
      byte_4A48DB8 = 1;
    }
    v52 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v52 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v52->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_57;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
    this->fields.messageCallback = msgCallBack;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.messageCallback, (int32_t)msgCallBack, v53, v54);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_57;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_12822/*"StartAnimationName"*/,
                 0LL);
    if ( !Instance )
      goto LABEL_57;
    v57 = StringLiteral_17054/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17054/*"bit_result_ultimate_anim"*/;
    sub_1B8635C((CGThumbnailListItem_o *)((char *)Instance + 56), v57, v55, v56);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12121/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
  }
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
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  const MethodInfo *v11; // x2
  BalanceConfig_c *v12; // x0
  __int64 v13; // x1
  char *fsm; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1

  if ( (byte_4A520CA & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&StringLiteral_12121/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v7);
    sub_1B863B8(&StringLiteral_17054/*"bit_result_ultimate_anim"*/, v8);
    sub_1B863B8(&StringLiteral_12822/*"StartAnimationName"*/, v9);
    byte_4A520CA = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v12->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v11) )
  {
    if ( *p_callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))(*p_callbackFunc)->fields.m_target)(
        (*p_callbackFunc)->fields.original_method_info,
        1LL,
        *(_QWORD *)&(*p_callbackFunc)->fields.extra_arg);
  }
  else
  {
    fsm = (char *)this->fields.fsm;
    this->fields.targetSvtId = svtId;
    if ( !fsm
      || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                          (System_String_o *)StringLiteral_12822/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v17 = StringLiteral_17054/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17054/*"bit_result_ultimate_anim"*/,
          sub_1B8635C((CGThumbnailListItem_o *)(fsm + 56), v17, v15, v16),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_1B86614(fsm, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12121/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  struct UserServantEntity_o **p_baseUsrSvtData; // x26
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t TransformCount; // w0
  struct System_Int32_array *skillIds; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A520BA & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&StringLiteral_12123/*"START_SKILLUP_EFFECT"*/, v17);
    sub_1B863B8(&StringLiteral_12015/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v18);
    sub_1B863B8(&StringLiteral_12016/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v19);
    byte_4A520BA = 1;
  }
  svtSkillAddEnt = 0LL;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  this->fields.kind = kind;
  sub_1B8635C(
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v21, v22);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_18;
  TransformCount = UserServantEntity__GetTransformCount(baseUsrSvtData, 0, 0LL);
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
                                              0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
    {
      if ( !svtSkillAddEnt )
        goto LABEL_18;
      skillIds = svtSkillAddEnt->fields.skillIds;
      if ( !skillIds )
        goto LABEL_18;
      this->fields.displayCount = skillIds->max_length - 1;
    }
  }
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !baseUsrSvtData )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUsrSvtData, 1, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)this->fields.unSummon;
  if ( !baseUsrSvtData )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUsrSvtData, kind == 21, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12015/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)baseUsrSvtData, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        baseUsrSvtData = (UserServantEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12016/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)baseUsrSvtData, 0LL),
        (baseUsrSvtData = (UserServantEntity_o *)this->fields.fsm) == 0LL) )
  {
LABEL_18:
    sub_1B86614(baseUsrSvtData, v23);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)baseUsrSvtData, (System_String_o *)StringLiteral_12123/*"START_SKILLUP_EFFECT"*/, 0LL);
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
  UIStandFigureR_o *Item; // x0
  __int64 v15; // x1
  struct ServantVoiceData_array *v16; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v18; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  unsigned __int64 v21; // x20
  __int64 v22; // x27
  int32_t v23; // w21
  int32_t v24; // w22

  if ( (byte_4A520EF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_1B863B8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    byte_4A520EF = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_2F8B4FC *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_42109500(Item, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_1B86614(Item, v15);
  }
  v16 = this->fields.playVoiceList;
  if ( !v16 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
LABEL_23:
    sub_1B8661C(Item, v15);
  v18 = v16->m_Items[playCnt];
  if ( !v18 )
    goto LABEL_25;
  multiFace = v18->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v18->fields.multiForm;
    if ( multiForm )
    {
      if ( (_DWORD)Item == (unsigned int)*(_QWORD *)&multiFace->max_length && (_DWORD)Item == multiForm->max_length )
      {
        if ( (unsigned int)*(_QWORD *)&multiFace->max_length )
        {
          v21 = 0LL;
          v22 = (unsigned int)Item - 1LL;
          do
          {
            if ( v21 >= multiForm->max_length )
              break;
            if ( !standFigureCollects )
              goto LABEL_25;
            v23 = multiFace->m_Items[v21 + 1];
            v24 = multiForm->m_Items[v21 + 1];
            Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)standFigureCollects,
                                         v21,
                                         (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_42109500(Item, v23, v24, 0LL, fadeTime, 0LL);
            if ( v22 == v21 )
              return;
            ++v21;
          }
          while ( v21 < multiFace->max_length );
        }
        goto LABEL_23;
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
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  System_Action_o *v23; // x20
  CombineResultEffectComponent_o *v24; // x0
  const MethodInfo *v25; // x2

  if ( (byte_4A520BD & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__92_0__, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4A520BD = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (const MethodInfo *)baseData);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.combineVoiceId, 0, v17, v18);
  this->fields.autoFadeout = 0;
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B86614(gameObject, v22);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v23 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__92_0__, 0LL);
  CombineResultEffectComponent__LoadCombineEffect(v24, v23, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_46242120(
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
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x20
  CombineResultEffectComponent_o *v29; // x0
  const MethodInfo *v30; // x2

  if ( (byte_4A520BE & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__93_0__, v19);
    byte_4A520BE = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (const MethodInfo *)baseData);
  this->fields.resUsrSvtData = resData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v20, v21);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_6;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.combineVoiceId, (int32_t)voiceId, v24, v25);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_6:
    sub_1B86614(gameObject, v23);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v28 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__93_0__, 0LL);
  CombineResultEffectComponent__LoadCombineEffect(v29, v28, v30);
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
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  System_Action_o *v24; // x20
  CombineResultEffectComponent_o *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_4A520BF & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__94_0__, v17);
    byte_4A520BF = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    *(const MethodInfo **)&normalExp);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, 0, v18, v19);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B86614(0LL, v23);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__94_0__,
    0LL);
  CombineResultEffectComponent__LoadCombineEffect(v25, v24, v26);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A520F8 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__154_0__, v3);
    byte_4A520F8 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__154_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_1B86614(bgCollider, method);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x21
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x23
  int32_t kind; // w25
  System_Action_o *v13; // x24
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A520F6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1B863B8(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__152_0__, v5);
    byte_4A520F6 = 1;
  }
  transformInfo = 0LL;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                           (UserServantEntity_o *)bgCollider,
                                           &transformInfo,
                                           index,
                                           0LL);
  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    goto LABEL_10;
  tdAddEntity_k__BackingField = npInfoAddManager->fields._tdAddEntity_k__BackingField;
  if ( !tdAddEntity_k__BackingField )
    goto LABEL_10;
  titles = tdAddEntity_k__BackingField->fields.titles;
  if ( !titles )
    goto LABEL_10;
  if ( titles->max_length <= index )
    sub_1B8661C(bgCollider, *(_QWORD *)&index);
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
  v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__152_0__, 0LL);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1B86614(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    index,
    titleText,
    kind == 8,
    v13,
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
  int32_t v8; // w23
  int32_t v9; // w24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v11; // w21
  int32_t v12; // w22
  System_String_o *costumeName; // x25
  System_Action_o *v14; // x26

  if ( (byte_4A520F7 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1B863B8(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__153_0__, v5);
    byte_4A520F7 = 1;
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
  v8 = *((_DWORD *)bgCollider + 4);
  v9 = *((_DWORD *)bgCollider + 5);
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v11 = v7[4];
  v12 = v7[5];
  costumeName = this->fields.costumeName;
  v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__153_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1B86614(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v11,
    v12,
    v8,
    v9,
    costumeName,
    v14,
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
  System_Action_o *v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A520F5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__151_0__, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4A520F5 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_9;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v12, 0LL);
  v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__151_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1B86614(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v10, v11, 0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  Il2CppObject *Entity; // x21
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t id; // w21
  int32_t lv; // w22
  int32_t v16; // w23
  int32_t v17; // w24
  System_Action_o *v18; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v21; // [xsp+40h] [xbp-50h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4A520F9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__156_0__, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A520F9 = 1;
  }
  v21 = 0LL;
  tdInfo = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v19, 0LL);
  if ( !v11 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v11,
             bgCollider,
             (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_14;
  bgCollider = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v21, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v21
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v16 = v21->fields.id,
        v17 = v21->fields.lv,
        v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__156_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1B86614(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v16, v17, v18, 0LL);
}


void __fastcall CombineResultEffectComponent__StartPlayVoice(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceData_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3

  if ( (byte_4A520F0 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent_PlayVoice__, v3);
    byte_4A520F0 = 1;
  }
  IsNullOrEmpty = (ServantVoiceData_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)this->fields.playVoiceList,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    playVoiceList = this->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_8;
    playCnt = this->fields.playCnt;
    if ( (unsigned int)playCnt >= playVoiceList->max_length )
      sub_1B8661C(IsNullOrEmpty, v5);
    IsNullOrEmpty = playVoiceList->m_Items[playCnt];
    if ( !IsNullOrEmpty )
LABEL_8:
      sub_1B86614(IsNullOrEmpty, v5);
    v8 = ServantVoiceData__get_BeforePerformance(IsNullOrEmpty, 0LL);
    v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineResultEffectComponent_PlayVoice__, 0LL);
    CombineResultEffectComponent__PlayPerformance(this, v8, v9, v10);
  }
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__173_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A52119 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__173_1__, v3);
    byte_4A52119 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__173_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_1B86614(v6, v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__144_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A52117 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B863B8(&StringLiteral_5406/*"END_LOAD"*/, v3);
    byte_4A52117 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_1B86614(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5406/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlayProcess_b__158_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A52118 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent__EndPlayProcess_b__158_2__, v3);
    byte_4A52118 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlayProcess_b__158_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_1B86614(v6, v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__167_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B86614(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___InitCombineEffect_b__111_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A52115 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_5406/*"END_LOAD"*/, method);
    byte_4A52115 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B86614(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5406/*"END_LOAD"*/, 0LL);
}


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
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4A52113 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, data);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_12115/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_1B863B8(&StringLiteral_17034/*"bit_result_extraskill"*/, v9);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v10);
    byte_4A52113 = 1;
  }
  if ( data )
  {
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                data,
                                (System_String_o *)StringLiteral_17034/*"bit_result_extraskill"*/,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49610244,
                                              (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A487E6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4A487E6 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B86614(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12115/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


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
  __int64 v12; // x21
  System_String_o *v13; // x0
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x0
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_Transform_o *v21; // x21

  if ( (byte_4A52114 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, data);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&string___TypeInfo, v8);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v9);
    sub_1B863B8(&StringLiteral_12103/*"START_COMBINE_LIMIT"*/, v10);
    sub_1B863B8(&StringLiteral_17028/*"bit_result_"*/, v11);
    byte_4A52114 = 1;
  }
  if ( data )
  {
    v12 = sub_1B86460(string___TypeInfo, 1LL);
    v13 = System_Int32__ToString((int)this + 312, 0LL);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_61645176(
                                              (System_String_o *)StringLiteral_17028/*"bit_result_"*/,
                                              v13,
                                              0LL);
    if ( !v12 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v12 + 24) )
      sub_1B8661C(transform, v15);
    *(_QWORD *)(v12 + 32) = transform;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 32), (int32_t)transform, v16, v17);
    v18 = System_String__Concat_61685692((System_String_array *)v12, 0LL);
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                data,
                                v18,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49610244,
                                              (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v20 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v21 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A487E6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
      byte_4A487E6 = 1;
    }
    if ( !v21 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v20, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_19:
      sub_1B86614(transform, v15);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12103/*"START_COMBINE_LIMIT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetCostumeCombineInfo_b__98_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_4A52110 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12108/*"START_COSTUME_EFFECT"*/, method);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v4);
    sub_1B863B8(&StringLiteral_17052/*"bit_result_skinchange"*/, v5);
    byte_4A52110 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17052/*"bit_result_skinchange"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v8 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v8, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B86614(Effect, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12108/*"START_COSTUME_EFFECT"*/, 0LL);
}


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
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4A52112 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, data);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_17037/*"bit_result_friendship_exceed"*/, v8);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v9);
    sub_1B863B8(&StringLiteral_12111/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v10);
    byte_4A52112 = 1;
  }
  if ( data )
  {
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                data,
                                (System_String_o *)StringLiteral_17037/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49610244,
                                              (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A487E6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4A487E6 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B86614(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12111/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetLimitUpCombineInfo_b__95_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_4A5210F & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_17030/*"bit_result_advent"*/, method);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v4);
    sub_1B863B8(&StringLiteral_12114/*"START_LIMITUP_EFFECT"*/, v5);
    byte_4A5210F = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17030/*"bit_result_advent"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v8 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v8, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B86614(Effect, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12114/*"START_LIMITUP_EFFECT"*/, 0LL);
}


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
  Il2CppObject *Object_object__49610244; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4A52111 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, data);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_12115/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_1B863B8(&StringLiteral_17042/*"bit_result_limitbreak"*/, v9);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v10);
    byte_4A52111 = 1;
  }
  if ( data )
  {
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                data,
                                (System_String_o *)StringLiteral_17042/*"bit_result_limitbreak"*/,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49610244,
                                              (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A487E6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4A487E6 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B86614(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12115/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetSvtCombineInfo_b__92_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20

  if ( (byte_4A5210C & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B863B8(&StringLiteral_12126/*"START_SVTCOMBINE_EFFECT"*/, v4);
    sub_1B863B8(&StringLiteral_17047/*"bit_result_servant"*/, v5);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v6);
    byte_4A5210C = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17047/*"bit_result_servant"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v9 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v9, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Effect, 0, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B86614(Effect, v8);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12126/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___SetSvtCombineInfo_b__93_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_4A5210D & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12126/*"START_SVTCOMBINE_EFFECT"*/, method);
    sub_1B863B8(&StringLiteral_17047/*"bit_result_servant"*/, v4);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v5);
    byte_4A5210D = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17047/*"bit_result_servant"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v8 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v8, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B86614(Effect, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12126/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___SetSvtEqCombineInfo_b__94_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  HutongGames_PlayMaker_FsmVariables_o *Effect; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_4A5210E & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12126/*"START_SVTCOMBINE_EFFECT"*/, method);
    sub_1B863B8(&StringLiteral_17047/*"bit_result_servant"*/, v4);
    sub_1B863B8(&StringLiteral_11189/*"ResultEffect"*/, v5);
    byte_4A5210E = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17047/*"bit_result_servant"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v8 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11189/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v8, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B86614(Effect, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12126/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__154_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B86614(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__152_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B86614(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B86614(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B86614(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__156_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B86614(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v19; // x22
  __int64 v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UserServantEntity_o *v23; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CommonUI_o *v29; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v32; // x25
  struct CombineResultEffectComponent_ClickDelegate_o *v33; // x8

  if ( (byte_4A52116 & 1) == 0 )
  {
    sub_1B863B8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__, v8);
    sub_1B863B8(&CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo, v9);
    sub_1B863B8(&UserServantEntity_TypeInfo, v10);
    byte_4A52116 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69356480(effect, 0LL);
  this->fields.effect = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.effect, 0, v12, v13);
  CombineResultEffectComponent__Close(this, v14);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v16);
    byte_4A48C25 = 1;
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
                       0LL);
  if ( EntityDefinitely )
  {
    v19 = EntityDefinitely;
    v20 = sub_1B86604(CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo);
    CombineResultEffectComponent___c__DisplayClass143_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass143_2_o *)v20,
      0LL);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 24) = this;
      sub_1B8635C((CGThumbnailListItem_o *)(v20 + 24), (int32_t)this, v21, v22);
      v23 = (UserServantEntity_o *)sub_1B86604(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41230020(v23, v19, 0LL);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v20 + 16) = callbackFunc;
      sub_1B8635C((CGThumbnailListItem_o *)(v20 + 16), (int32_t)callbackFunc, v25, v26);
      this->fields.callbackFunc = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v27, v28);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v23 )
      {
        v29 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v23->fields.treasureDeviceLv1;
        v32 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B86604(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v32,
          (Il2CppObject *)v20,
          Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__,
          0LL);
        if ( v29 )
        {
          CommonUI__OpenNobleCombineResult(
            v29,
            18,
            v23,
            targetId,
            treasureDeviceLv1,
            v32,
            this->fields.targetIdOld,
            v23->fields.treasureDeviceLv1,
            0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1B86614(Instance, v16);
  }
  v33 = this->fields.callbackFunc;
  if ( v33 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v33->fields.m_target)(
      v33->fields.original_method_info,
      1LL,
      *(_QWORD *)&v33->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B86614(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineResultEffectComponent__checkSecretTreasureDeviceData(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  ServantFlagEntity_o *v9; // x8
  struct System_Int32_array *args; // x8
  bool result; // w0
  int32_t v12; // w8
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A520CC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A520CC = 1;
  }
  svtFlagEntity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_40775104(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0LL) )
  {
LABEL_13:
    v12 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B86614(Instance, v8);
  }
  Instance = (Il2CppObject *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_13;
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v9 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_15;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v9->fields.args;
  if ( !args )
    goto LABEL_15;
  if ( args->max_length <= 1 )
    sub_1B8661C(Instance, v8);
  result = 1;
  this->fields.targetId = args->m_Items[2];
  v12 = args->m_Items[1];
LABEL_14:
  this->fields.targetIdOld = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  int32_t kind; // w8
  const MethodInfo *v10; // x2
  int32_t v11; // w20
  int32_t v12; // w0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v19; // x20
  __int64 v20; // x21
  int32_t svtId; // w21
  System_String_o *dispBattleName; // x26
  int32_t TransformCount; // w0
  UnityEngine_Collider_o *v24; // x20
  float v25; // s8
  struct System_Int32_array *skillIds; // x8
  int32_t v27; // w9
  il2cpp_array_size_t max_length; // w10
  UnityEngine_Collider_c *klass; // x8
  il2cpp_array_size_t v30; // w22
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s3
  float v35; // s9
  float v36; // s10
  float v37; // s11
  float v38; // s0
  float v39; // s1
  float v40; // s2
  float v41; // s3
  float v42; // s12
  float v43; // s13
  float v44; // s14
  float v45; // s15
  ServantSkillAddEntity_o *v46; // x9
  __int64 v47; // x8
  __int64 v48; // x10
  struct System_Int32_array *v49; // x11
  il2cpp_array_size_t v50; // w13
  int32_t v51; // w11
  int32_t v52; // w0
  int32_t v53; // w9
  int32_t v54; // w8
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  int32_t displayCount; // w9
  int32_t v60; // w8
  int32_t v61; // w21
  int32_t TransformedSameSlotSkillId; // w0
  int32_t v63; // w8
  int32_t v64; // w22
  UserServantEntity_o *v65; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x22
  int32_t targetId; // w23
  int32_t targetLv; // w24
  System_Action_o *v69; // x25
  TransformServantInfo_o *transformInfo; // [xsp+30h] [xbp-A0h] BYREF
  ServantSkillAddEntity_o *svtSkillAddEnt; // [xsp+38h] [xbp-98h] BYREF
  TransformServantInfo_o *v72; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4A520FF & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent_EndDisp__, v3);
    sub_1B863B8(&Method_CombineResultEffectComponent_clickNext__, v4);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B863B8(&string_TypeInfo, v6);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    byte_4A520FF = 1;
  }
  v72 = 0LL;
  transformInfo = 0LL;
  svtSkillAddEnt = 0LL;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_93;
  bgCollider = (UnityEngine_Collider_o *)UnityEngine_Collider__get_enabled(bgCollider, 0LL);
  if ( ((unsigned __int8)bgCollider & 1) == 0 )
    return;
  kind = this->fields.kind;
  if ( kind == 15 )
  {
    bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, method);
    if ( ((unsigned __int8)bgCollider & 1) != 0 )
    {
      CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v10);
      bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
      v11 = this->fields.skillShowIndex + 1;
      this->fields.skillShowIndex = v11;
      if ( bgCollider )
      {
        v12 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
                (CombineResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
                0LL);
        goto LABEL_17;
      }
      goto LABEL_93;
    }
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      if ( this->fields.treasureDeviceEnabled )
      {
        CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, method);
        this->fields.treasureDeviceEnabled = 0;
LABEL_27:
        CombineResultEffectComponent__EndDisp(this, v13);
        return;
      }
      goto LABEL_70;
    }
  }
  if ( (unsigned int)kind <= 0x1B && ((1 << kind) & 0x8000110) != 0 )
  {
    bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowNextNpInfo(this, method);
    if ( ((unsigned __int8)bgCollider & 1) != 0 )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v14);
      bgCollider = (UnityEngine_Collider_o *)this->fields.npInfoAddManager;
      v11 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v11;
      if ( bgCollider )
      {
        v12 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
                (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
                0LL);
LABEL_17:
        if ( v11 < v12 )
          return;
        goto LABEL_27;
      }
LABEL_93:
      sub_1B86614(bgCollider, method);
    }
    kind = this->fields.kind;
  }
  if ( (unsigned int)kind <= 0x1A && ((1 << kind) & 0x4080402) != 0 )
  {
    bgCollider = (UnityEngine_Collider_o *)CombineResultEffectComponent__IsShowLimitUpInfo(this, method);
    if ( ((unsigned __int8)bgCollider & 1) != 0 )
    {
      v15 = Method_CombineResultEffectComponent_clickNext__;
      if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1B863D0(Method_CombineResultEffectComponent_clickNext__);
      v16 = (System_Reflection_MethodBase_o *)sub_1B8639C(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
      CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v17);
      bgCollider = (UnityEngine_Collider_o *)this->fields.limitUpResultCheck;
      if ( bgCollider )
      {
        if ( !LimitUpResultCheckComponent__CheckFinishedResultLimitUp((LimitUpResultCheckComponent_o *)bgCollider, 0LL) )
          return;
        goto LABEL_27;
      }
      goto LABEL_93;
    }
    kind = this->fields.kind;
  }
  if ( kind <= 6 )
  {
    if ( (unsigned int)(kind - 2) >= 2 )
    {
      if ( !kind )
        CombineResultEffectComponent__stopVoice(this, method);
      goto LABEL_70;
    }
    goto LABEL_36;
  }
  if ( kind != 20 )
  {
    if ( kind != 7 )
      goto LABEL_70;
LABEL_36:
    if ( this->fields.displayCount < 1 )
      goto LABEL_70;
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_93;
    v20 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v73.fields.currentCryptoKey = v20;
    *(_QWORD *)&v73.fields.fakeValue = v19;
    bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v73, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_93;
    svtId = (int)bgCollider;
    dispBattleName = string_TypeInfo->static_fields->Empty;
    TransformCount = UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0LL);
    if ( TransformCount >= 2 )
    {
      displayCount = this->fields.displayCount;
      v60 = TransformCount;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = displayCount - 1;
      if ( !bgCollider )
        goto LABEL_93;
      v61 = v60 - displayCount;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               (UserServantEntity_o *)bgCollider,
                                               v60 - displayCount,
                                               -1,
                                               -1,
                                               1,
                                               -1,
                                               0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_93;
      v24 = bgCollider;
      TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                     this->fields.baseUsrSvtData,
                                     this->fields.targetId,
                                     v61 - 1,
                                     v61,
                                     0LL);
      v63 = this->fields.kind;
      this->fields.targetId = TransformedSameSlotSkillId;
      if ( v63 == 7 )
      {
        v64 = TransformedSameSlotSkillId;
        v65 = this->fields.baseUsrSvtData;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A48E97 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
          byte_4A48E97 = 1;
        }
        bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v65 )
          goto LABEL_93;
        this->fields.targetIdOld = UserServantEntity__GetTransformedOldSkillId(
                                     v65,
                                     v64,
                                     *(_DWORD *)(*(_QWORD *)&bgCollider[7].fields.m_CachedPtr + 20LL),
                                     v61,
                                     0LL);
      }
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( !bgCollider )
        goto LABEL_93;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                               (UserServantEntity_o *)bgCollider,
                                               &v72,
                                               v61,
                                               0LL);
      if ( !v72 )
        goto LABEL_93;
      svtId = v72->fields.svtId;
      dispBattleName = v72->fields.titleText;
      v25 = 0.0;
    }
    else
    {
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( !bgCollider )
        goto LABEL_93;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               (UserServantEntity_o *)bgCollider,
                                               0,
                                               -1,
                                               -1,
                                               1,
                                               -1,
                                               0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_93;
      v24 = bgCollider;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                               this->fields.baseUsrSvtData,
                                               &svtSkillAddEnt,
                                               this->fields.targetId,
                                               0LL);
      v25 = 0.0;
      if ( ((unsigned __int8)bgCollider & 1) != 0 )
      {
        if ( !svtSkillAddEnt )
          goto LABEL_93;
        if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)svtSkillAddEnt->fields.skillIds, 0LL) )
        {
          bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
          if ( !svtSkillAddEnt )
            goto LABEL_93;
          skillIds = svtSkillAddEnt->fields.skillIds;
          if ( !skillIds )
            goto LABEL_93;
          v27 = this->fields.displayCount;
          max_length = skillIds->max_length;
          this->fields.displayCount = v27 - 1;
          klass = bgCollider[2].klass;
          if ( !klass )
            goto LABEL_93;
          v30 = max_length - v27;
          if ( max_length - v27 >= LODWORD(klass->_1.namespaze) )
LABEL_94:
            sub_1B8661C(bgCollider, method);
          dispBattleName = (System_String_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v30);
          v74.fields.r = 0.0;
          v74.fields.g = 0.0;
          v74.fields.b = 0.0;
          v74.fields.a = 0.0;
          *(UnityEngine_Color_o *)&v31 = ServantSkillAddEntity__GetCondLabelColor(
                                           (ServantSkillAddEntity_o *)bgCollider,
                                           v74,
                                           0LL);
          bgCollider = (UnityEngine_Collider_o *)svtSkillAddEnt;
          if ( !svtSkillAddEnt )
            goto LABEL_93;
          v25 = v31;
          v35 = v32;
          v36 = v33;
          v37 = v34;
          v75.fields.r = 0.0;
          v75.fields.g = 0.0;
          v75.fields.b = 0.0;
          v75.fields.a = 0.0;
          *(UnityEngine_Color_o *)&v38 = ServantSkillAddEntity__GetCondSpriteColor(svtSkillAddEnt, v75, 0LL);
          if ( !v24 )
            goto LABEL_93;
          v42 = v38;
          v43 = v39;
          v44 = v40;
          v45 = v41;
          if ( (int)v24[1].klass > 0 )
          {
            v46 = svtSkillAddEnt;
            v47 = 0LL;
            v48 = 4LL * (unsigned int)v24[1].klass;
            while ( v48 != v47 )
            {
              if ( !v46 )
                goto LABEL_93;
              v49 = v46->fields.skillIds;
              if ( !v49 )
                goto LABEL_93;
              v50 = v49->max_length;
              if ( !v50 )
                goto LABEL_94;
              if ( *(_DWORD *)((char *)&v24[1].monitor + v47) == v49->m_Items[1] )
              {
                if ( v30 >= v50 )
                  goto LABEL_94;
                v51 = v49->m_Items[v30 + 1];
                this->fields.targetId = v51;
                *(_DWORD *)((char *)&v24[1].monitor + v47) = v51;
              }
              v47 += 4LL;
              if ( v48 == v47 )
                goto LABEL_91;
            }
            goto LABEL_94;
          }
LABEL_91:
          skillResultInfoWindow = this->fields.skillResultInfoWindow;
          targetId = this->fields.targetId;
          targetLv = this->fields.targetLv;
          v69 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v69, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
          if ( skillResultInfoWindow )
          {
            v76.fields.r = v25;
            v76.fields.g = v35;
            v76.fields.b = v36;
            v76.fields.a = v37;
            v77.fields.r = v42;
            v77.fields.g = v43;
            v77.fields.b = v44;
            v77.fields.a = v45;
            SkillUpResultWindowComponent__OpenSkillUpResultInfo(
              skillResultInfoWindow,
              targetId,
              targetLv,
              v69,
              this->fields.targetIdOld,
              this->fields.targetLvOld,
              svtId,
              (System_Int32_array *)v24,
              this->fields.kind == 3,
              1,
              0,
              dispBattleName,
              0,
              v76,
              v77,
              0LL);
            return;
          }
          goto LABEL_93;
        }
      }
    }
    v35 = 0.0;
    v36 = 0.0;
    v37 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
    v44 = 0.0;
    v45 = 0.0;
    goto LABEL_91;
  }
  if ( this->fields.displayCount >= 1 )
  {
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    if ( bgCollider )
    {
      v52 = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0LL);
      v53 = this->fields.displayCount;
      v54 = v52;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v53 - 1;
      if ( bgCollider )
      {
        bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                 (UserServantEntity_o *)bgCollider,
                                                 &transformInfo,
                                                 v54 - v53,
                                                 0LL);
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
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_93;
  }
LABEL_70:
  v55 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v55 = (_QWORD *)sub_1B863D0(Method_CombineResultEffectComponent_clickNext__);
  v56 = (System_Reflection_MethodBase_o *)sub_1B8639C(v55, v55[4]);
  OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0, 0LL);
  if ( this->fields.kind != 24 )
    CombineResultEffectComponent__ReleaseVoiceData(this, v57);
  if ( !CombineResultEffectComponent__OpenNotification(this, v57) )
    CombineResultEffectComponent__FadeoutProcess(this, v58);
}


void __fastcall CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v16; // x8
  ServantVoiceMaster_o *v17; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A520D8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, method);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A520D8 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.asstName, 0, v2, v3);
  this->fields.playVoiceList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v7, v8);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v13;
  *(_QWORD *)&v25.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v25, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v14, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v16 = this->fields.resUsrSvtData) == 0LL)
    || (v17 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                     v16->fields.limitCount,
                                     0LL),
        !v17) )
  {
LABEL_12:
    sub_1B86614(Instance, v10);
  }
  Entity = ServantVoiceMaster__getEntity(v17, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v19, v20);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v23, v24);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_4A520EC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    byte_4A520EC = 1;
  }
  if ( this->fields.isChangeCardImg
    && (svtVoiceEntity = this->fields.svtVoiceEntity) != 0LL
    && (CostumeCombineVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getCostumeCombineVoiceList(
                                                                                 svtVoiceEntity,
                                                                                 this->fields.costumeId,
                                                                                 0LL)) != 0LL
    && CostumeCombineVoiceList->fields._size >= 1 )
  {
    return (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                       CostumeCombineVoiceList,
                                       0,
                                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  }
  else
  {
    return 0LL;
  }
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
  ServantVoiceEntity_o *svtVoiceEntity; // x21
  System_Collections_Generic_List_object__o *CntStopVoiceList; // x0
  ServantVoiceEntity_o *v10; // x0
  struct UserServantEntity_o *v11; // x8
  __int64 v12; // x20
  __int64 v13; // x22
  int32_t v14; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A520EB & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4A520EB = 1;
  }
  if ( this->fields.isChangeCardImg )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_20;
    resUsrSvtData = (UserServantEntity_o *)UserServantEntity__isLimitCountMax(resUsrSvtData, 0LL);
    svtVoiceEntity = this->fields.svtVoiceEntity;
    if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
    {
      if ( !svtVoiceEntity )
        return 0LL;
      CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getCntStopVoiceList(
                                                                        this->fields.svtVoiceEntity,
                                                                        this->fields.displayType,
                                                                        isPlayVoice,
                                                                        this->fields.genderType,
                                                                        this->fields.limitUpPlayVoiceLabel,
                                                                        0LL);
      if ( !CntStopVoiceList )
        return 0LL;
      goto LABEL_17;
    }
    if ( !svtVoiceEntity )
      return 0LL;
    v11 = this->fields.resUsrSvtData;
    if ( !v11 )
LABEL_20:
      sub_1B86614(resUsrSvtData, isPlayVoice);
    v13 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v13;
    *(_QWORD *)&v16.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v16, 0LL);
    CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                                                      svtVoiceEntity,
                                                                      v14,
                                                                      this->fields.limitUpPlayVoiceLabel,
                                                                      this->fields.genderType,
                                                                      0LL);
    if ( !CntStopVoiceList )
      return 0LL;
  }
  else
  {
    v10 = this->fields.svtVoiceEntity;
    if ( !v10 )
      return 0LL;
    CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getLimitCntUpVoiceList(
                                                                      v10,
                                                                      this->fields.genderType,
                                                                      this->fields.limitUpPlayVoiceLabel,
                                                                      0LL);
    if ( !CntStopVoiceList )
      return 0LL;
  }
LABEL_17:
  if ( CntStopVoiceList->fields._size >= 1 )
    return (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                       CntStopVoiceList,
                                       0,
                                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__getSvtVoiceData(
        CombineResultEffectComponent_o *this,
        int32_t voiceId,
        int32_t costumeId,
        bool isLimitUp,
        const MethodInfo *method)
{
  int v6; // w22
  int SvtVoiceId; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UserServantEntity_o *Master_object; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v18; // x21
  __int64 v19; // x24
  int32_t v20; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v22; // x8
  ServantLimitImageMaster_o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v6 = costumeId;
  SvtVoiceId = voiceId;
  if ( (byte_4A520D7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&voiceId);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A520D7 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.asstName, 0, costumeId, (const MethodInfo *)isLimitUp);
  this->fields.playVoiceList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playVoiceList, 0, v13, v14);
  if ( SvtVoiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_26;
    v19 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = v19;
    *(_QWORD *)&v34.fields.fakeValue = v18;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v20, 0LL);
  }
  if ( v6 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_42186464(Master_object->fields.limitCount, 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0LL);
    v6 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v22 = this->fields.resUsrSvtData;
  if ( !v22 )
    goto LABEL_26;
  v23 = (ServantLimitImageMaster_o *)Master_object;
  v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v25;
  *(_QWORD *)&v35.fields.fakeValue = v24;
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v35, 0LL);
  if ( !v23
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v23,
                                       (int32_t)Master_object,
                                       v6,
                                       0LL),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_26:
    sub_1B86614(Master_object, v16);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v28, v29);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v32, v33);
  }
}


void __fastcall CombineResultEffectComponent__loadVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v7; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A520D9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_CombineResultEffectComponent_EndLoad__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_4A520D9 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v7 = (SoundManager_o *)Instance;
    v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v7 )
      sub_1B86614(v9, v10);
    SoundManager__LoadAudioAssetStorage(v7, asstName, v8, 1, 0LL);
  }
  else
  {
    CombineResultEffectComponent__EndLoad(this, method);
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
  const MethodInfo *v12; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4A520DD & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, method);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B863B8(&StringLiteral_3089/*"BaseSvtNodeName"*/, v4);
    byte_4A520DD = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B86614(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3089/*"BaseSvtNodeName"*/,
    0,
    1,
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
  __int64 fsm; // x0
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
  UserServantEntity_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x21
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Component_o *v27; // x19
  UnityEngine_Transform_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A520E7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_4328/*"CardScale"*/, v8);
    sub_1B863B8(&StringLiteral_3088/*"BaseSvtCardNodeName"*/, v9);
    byte_4A520E7 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3088/*"BaseSvtCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_26;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_26;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4328/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_26;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_26;
  v17 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v18 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v17;
  *(_QWORD *)&v29.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v29, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_26;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v20->fields.limitCount, 0LL);
  if ( !v21 )
    goto LABEL_26;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v19, fsm, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  fsm = ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v13 )
    goto LABEL_26;
  v23 = fsm;
  fsm = (__int64)UnityEngine_Component__get_gameObject(v13, 0LL);
  v24 = this->fields.baseUsrSvtData;
  if ( !v24 )
    goto LABEL_26;
  v25 = (UnityEngine_GameObject_o *)fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(v24, 0LL, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_38863684(
                   v25,
                   v24,
                   v23,
                   10,
                   0LL,
                   changeNameType,
                   OverwriteStatus,
                   0LL);
  if ( !fsm )
    goto LABEL_26;
  v27 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v28 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A487E1 )
  {
    fsm = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_4A487E1 = 1;
  }
  if ( !v28
    || (UnityEngine_Transform__set_localPosition(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v27, 0LL)) == 0) )
  {
LABEL_26:
    sub_1B86614(fsm, *(_QWORD *)&changeNameType);
  }
  v30.fields.x = v18;
  v30.fields.y = v18;
  v30.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v30, 0LL);
}


void __fastcall CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_4A520E5 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B863B8(&StringLiteral_8279/*"LimitUpResSvtNodeName"*/, v3);
    byte_4A520E5 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  this->fields.playVoiceList = CostumeSvtVoiceList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playVoiceList, (int32_t)CostumeSvtVoiceList, v5, v6);
  playVoiceList = this->fields.playVoiceList;
  if ( playVoiceList )
  {
    if ( !playVoiceList->max_length )
      sub_1B8661C(v7, v8);
    v10 = playVoiceList->m_Items[0];
    if ( !v10 )
LABEL_13:
      sub_1B86614(v7, v8);
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v18, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_13;
  v15 = v7;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v15,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8279/*"LimitUpResSvtNodeName"*/,
    v17);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1B86614(0LL, method);
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
  const MethodInfo *v12; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_4A520E0 & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, method);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B863B8(&StringLiteral_8278/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_4A520E0 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B86614(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8278/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
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
  __int64 v9; // x1
  ServantVoiceData_o *v10; // x8
  int32_t face; // w22
  int32_t ImageLimitCount; // w2
  const MethodInfo *v13; // x5

  if ( (byte_4A520E6 & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&StringLiteral_8278/*"LimitUpBaseSvtNodeName"*/, v7);
    byte_4A520E6 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1B8661C(LimitUpSvtVoiceList, v9);
    v10 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v10 )
      sub_1B86614(LimitUpSvtVoiceList, v9);
    face = v10->fields.face;
  }
  else
  {
    face = 0;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCnt, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    svtId,
    ImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8278/*"LimitUpBaseSvtNodeName"*/,
    v13);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Transform_o *v21; // x19
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A520E9 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_4328/*"CardScale"*/, *(_QWORD *)&svtId);
    sub_1B863B8(&StringLiteral_3088/*"BaseSvtCardNodeName"*/, v9);
    byte_4A520E9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3088/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_18;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_18;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4328/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v13 )
    goto LABEL_18;
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nameRevealCard, (int32_t)TexturePrefab, v19, v20);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v21 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A487E1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&svtId);
    byte_4A487E1 = 1;
  }
  if ( !v21
    || (UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_18:
    sub_1B86614(fsm, *(_QWORD *)&svtId);
  }
  v22.fields.x = v15;
  v22.fields.y = v15;
  v22.fields.z = v15;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultCostumeSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 fsm; // x0
  System_String_o *v7; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v9; // x21
  float Value; // s0
  float v11; // s8
  UserServantEntity_o *resUsrSvtData; // x21
  UnityEngine_GameObject_o *v13; // x22
  UserServantEntity_o *v14; // x8
  int32_t v15; // w20
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Component_o *v17; // x19
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A520EA & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_4328/*"CardScale"*/, *(_QWORD *)&changeNameType);
    sub_1B863B8(&StringLiteral_11191/*"ResultSvtCardNodeName"*/, v5);
    byte_4A520EA = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_19;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11191/*"ResultSvtCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_19;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_19;
  v7 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v7, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_19;
  v9 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_19;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4328/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v9 )
    goto LABEL_19;
  v11 = Value;
  fsm = (__int64)UnityEngine_Component__get_gameObject(v9, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_19;
  v13 = (UnityEngine_GameObject_o *)fsm;
  fsm = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  v14 = this->fields.resUsrSvtData;
  if ( !v14 )
    goto LABEL_19;
  v15 = fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(v14, 0LL, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_38863684(
                   v13,
                   resUsrSvtData,
                   v15,
                   10,
                   0LL,
                   changeNameType,
                   OverwriteStatus,
                   0LL);
  if ( !fsm )
    goto LABEL_19;
  v17 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v18 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A487E1 )
  {
    fsm = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_4A487E1 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v17, 0LL)) == 0) )
  {
LABEL_19:
    sub_1B86614(fsm, *(_QWORD *)&changeNameType);
  }
  v19.fields.x = v11;
  v19.fields.y = v11;
  v19.fields.z = v11;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v19, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v17, 1.89, 0LL);
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
  __int64 fsm; // x0
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
  UserServantEntity_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x21
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Component_o *v27; // x19
  UnityEngine_Transform_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A520E8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_4328/*"CardScale"*/, v8);
    sub_1B863B8(&StringLiteral_11191/*"ResultSvtCardNodeName"*/, v9);
    byte_4A520E8 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11191/*"ResultSvtCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_26;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_26;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4328/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_26;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_26;
  v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v18 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v17;
  *(_QWORD *)&v29.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v29, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_26;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.resUsrSvtData;
  if ( !v20 )
    goto LABEL_26;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v20->fields.limitCount, 0LL);
  if ( !v21 )
    goto LABEL_26;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v19, fsm, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  fsm = ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v13 )
    goto LABEL_26;
  v23 = fsm;
  fsm = (__int64)UnityEngine_Component__get_gameObject(v13, 0LL);
  v24 = this->fields.resUsrSvtData;
  if ( !v24 )
    goto LABEL_26;
  v25 = (UnityEngine_GameObject_o *)fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(v24, 0LL, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_38863684(
                   v25,
                   v24,
                   v23,
                   10,
                   0LL,
                   changeNameType,
                   OverwriteStatus,
                   0LL);
  if ( !fsm )
    goto LABEL_26;
  v27 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v28 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A487E1 )
  {
    fsm = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_4A487E1 = 1;
  }
  if ( !v28
    || (UnityEngine_Transform__set_localPosition(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v27, 0LL)) == 0) )
  {
LABEL_26:
    sub_1B86614(fsm, *(_QWORD *)&changeNameType);
  }
  v30.fields.x = v18;
  v30.fields.y = v18;
  v30.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v30, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v27, 1.89, 0LL);
}


void __fastcall CombineResultEffectComponent__setSkillResultInfo(
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
  __int64 v48; // x20
  __int64 Instance; // x0
  const MethodInfo *v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  long double v55; // q0
  SkillUpResultWindowComponent_o *v56; // x20
  UserServantEntity_o *v57; // x21
  int32_t v58; // w22
  int32_t v59; // w23
  System_Action_o *v60; // x24
  const MethodInfo *v61; // x2
  struct UserServantEntity_o *v62; // x8
  __int64 v63; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_String_o *v67; // x0
  const MethodInfo *v68; // x2
  struct UserServantEntity_o *v69; // x8
  __int64 v70; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v71; // x21
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_String_o *v74; // x0
  UserServantEntity_o *v75; // x20
  struct ServantVoiceData_array *v76; // x8
  struct UserServantEntity_o *v77; // x8
  __int64 v78; // x20
  __int64 v79; // x21
  struct UserServantEntity_o *v80; // x8
  int v81; // w21
  int v82; // w20
  struct UserServantEntity_o *v83; // x8
  __int64 v84; // x22
  __int64 v85; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x21
  int32_t v87; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t kind; // w8
  System_Int32_array *v90; // x20
  int32_t TransformCount; // w21
  const MethodInfo *v92; // x2
  System_String_o *dispBattleName; // x27
  float b; // s8
  struct UserServantEntity_o *v95; // x8
  ServantSkillAddMaster_o *v96; // x21
  __int64 v97; // x22
  __int64 v98; // x23
  struct UserServantEntity_o *v99; // x8
  int32_t v100; // w22
  int32_t targetId; // w24
  int32_t v102; // w23
  ServantSkillAddEntity_o *EnableEntity; // x0
  ServantSkillAddEntity_o *v104; // x21
  float a; // s9
  float v106; // s11
  float v107; // s13
  float v108; // s14
  float v109; // s15
  float g; // s10
  float r; // s12
  struct System_String_array *titles; // x8
  __int64 v113; // x0
  __int64 v114; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v116; // x20
  __int64 v117; // x27
  int32_t v118; // w22
  struct UserServantEntity_o *v119; // x8
  __int64 v120; // x23
  __int64 v121; // x24
  int v122; // w8
  int v123; // w9
  __int64 v124; // x23
  struct UserServantEntity_o *v125; // x8
  __int64 v126; // x23
  __int64 v127; // x24
  int32_t v128; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v130; // x9
  __int64 size; // x10
  UserServantEntity_o *v132; // x8
  Il2CppObject *v133; // x23
  struct UserServantEntity_o *v134; // x8
  __int64 v135; // x25
  __int64 v136; // x26
  int64_t v137; // x24
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v139; // x23
  struct UserServantEntity_o *v140; // x8
  __int64 v141; // x23
  __int64 v142; // x24
  bool IsForceReleaseSkillRankUp; // w29
  int v144; // w22
  _BOOL8 v145; // x0
  __int64 v146; // x1
  Il2CppObject *current; // x23
  __int64 v148; // x1
  NetworkManager_c *v149; // x0
  struct UserServantEntity_o *v150; // x8
  int32_t v151; // w24
  __int64 v152; // x26
  __int64 v153; // x27
  int64_t userIdNumber; // x25
  int32_t v155; // w3
  bool isForceRelease; // w28
  bool v157; // w29
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t v159; // w22
  int32_t targetLv; // w23
  System_Action_o *v161; // x24
  int32_t targetIdOld; // w25
  int32_t targetLvOld; // w26
  const MethodInfo *v164; // x2
  SkillUpResultWindowComponent_o *v165; // x20
  UserServantEntity_o *v166; // x21
  System_Action_o *v167; // x22
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  Il2CppObject *v169; // x20
  Il2CppObject *v170; // x21
  Il2CppObject *v171; // x20
  BalanceConfig_c *v172; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v174; // x21
  Il2CppObject *Name; // x0
  System_String_o *v176; // x0
  System_Int32_array *v177; // x20
  SkillUpResultWindowComponent_o *v178; // x21
  int32_t v179; // w22
  int32_t v180; // w23
  System_Action_o *v181; // x24
  struct UserServantEntity_o *v182; // x8
  int32_t v183; // w26
  int32_t v184; // w25
  __int64 v185; // x27
  __int64 v186; // x28
  SkillUpResultWindowComponent_o *v187; // x20
  UserServantEntity_o *v188; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v190; // x23
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v192; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v193; // x21
  Il2CppObject *v194; // x0
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  struct UserServantEntity_o *v197; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t lv; // w21
  const MethodInfo *v200; // x1
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  struct UserServantEntity_o *v204; // x8
  __int128 v205; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v206; // x20
  Il2CppObject *v207; // x0
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  struct SvtCombineResultWindowComponent_o *v210; // x20
  struct UserServantEntity_o *v211; // x21
  int32_t v212; // w22
  System_Action_o *v213; // x23
  SvtCombineResultWindowComponent_o *v214; // x0
  UserServantEntity_o *v215; // x1
  int32_t v216; // w2
  System_Action_o *v217; // x3
  System_Action_o *v218; // x4
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v220; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  Il2CppObject *v223; // x20
  AvalonSceneManager_c *v224; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v226; // x0
  __int64 *v227; // x8
  SkillUpResultWindowComponent_o *v228; // x21
  int32_t v229; // w22
  int32_t v230; // w23
  System_Action_o *v231; // x24
  int32_t v232; // w25
  int32_t v233; // w26
  const MethodInfo *v234; // x2
  int32_t v235; // w27
  System_Int32_array *v236; // x20
  const MethodInfo *v237; // x2
  const MethodInfo *v238; // x3
  __int64 v239; // x22
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v243; // w2
  const MethodInfo *v244; // x3
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  __int64 v247; // x23
  System_Action_o *v248; // x24
  int32_t v249; // w2
  const MethodInfo *v250; // x3
  Il2CppObject *v251; // x21
  CombineResultEffectComponent_ClickDelegate_o *v252; // x22
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v256; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v258; // x23
  System_Action_o *v259; // x24
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v261; // x21
  System_String_o *v262; // x22
  Il2CppObject *v263; // x21
  Il2CppObject *v264; // x0
  AvalonSceneManager_c *v265; // x8
  System_Action_o *v266; // x21
  int32_t dispLimitCount; // [xsp+3Ch] [xbp-134h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v268; // [xsp+40h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v269; // [xsp+60h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v270; // [xsp+80h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v271; // [xsp+A0h] [xbp-D0h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+C0h] [xbp-B0h] BYREF
  int32_t oldLv; // [xsp+CCh] [xbp-A4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v274; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v275; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v276; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v277; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v278; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v279; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v280; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v281; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v282; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v283; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v284; // 0:x0.16
  UnityEngine_Color_o v285; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v288; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v289; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v290; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v291; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v292; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v293; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4A520ED & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&BalanceConfig_TypeInfo, v4);
    sub_1B863B8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v5);
    sub_1B863B8(&Method_CombineResultEffectComponent_EndDisp__, v6);
    sub_1B863B8(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__, v7);
    sub_1B863B8(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__, v8);
    sub_1B863B8(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__, v9);
    sub_1B863B8(&Method_CombineResultEffectComponent_clickNext__, v10);
    sub_1B863B8(&CombineResultFormManager_TypeInfo, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantSkillAddMaster___, v17);
    sub_1B863B8(&DataManager_TypeInfo, v18);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_int___, v22);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v30);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v31);
    sub_1B863B8(&LocalizationManager_TypeInfo, v32);
    sub_1B863B8(&NetworkManager_TypeInfo, v33);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v36);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v37);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_1B863B8(&string___TypeInfo, v39);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__, v41);
    sub_1B863B8(&CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo, v42);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__, v43);
    sub_1B863B8(&CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo, v44);
    sub_1B863B8(&StringLiteral_10662/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v45);
    sub_1B863B8(&StringLiteral_10663/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v46);
    sub_1B863B8(&StringLiteral_1/*""*/, v47);
    byte_4A520ED = 1;
  }
  oldLv = 0;
  entity = 0LL;
  memset(&v271, 0, sizeof(v271));
  v48 = sub_1B86604(CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass143_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass143_0_o *)v48,
    0LL);
  if ( !v48 )
    goto LABEL_233;
  *(_QWORD *)(v48 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v48 + 24), (int32_t)this, v51, v52);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_178;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_233;
      v192 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v193 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v270.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v270.fields.fakeValue = v192;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v269 = v270;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v269, 0LL);
      if ( !v193 )
        goto LABEL_233;
      v194 = DataMasterBase_object__object__long___GetEntity(
               v193,
               Instance,
               (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v194;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)v194, v195, v196);
LABEL_178:
      v197 = this->fields.baseUsrSvtData;
      if ( !v197 )
        goto LABEL_233;
      oldLv = v197->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_233;
      lv = resUsrSvtData->fields.lv;
      if ( !System_Int32__Equals_63159256((int32_t)&oldLv, lv, 0LL)
        && this->fields.asstName
        && this->fields.svtVoiceEntity
        && (playVoiceList = this->fields.playVoiceList) != 0LL )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, v200);
      }
      else
      {
        this->fields.firstPlayedVoiceFlag = 0;
      }
      *(_QWORD *)(v48 + 16) = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)(v48 + 16), 0, v201, v202);
      if ( !CombineResultEffectComponent__CheckCombineLimit(this, oldLv, lv, v238) )
        goto LABEL_212;
      v239 = sub_1B86604(CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo);
      CombineResultEffectComponent___c__DisplayClass143_1___ctor(
        (CombineResultEffectComponent___c__DisplayClass143_1_o *)v239,
        0LL);
      if ( !v239 )
        goto LABEL_233;
      *(_QWORD *)(v239 + 24) = v48;
      sub_1B8635C((CGThumbnailListItem_o *)(v239 + 24), v48, v240, v241);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v239 + 16) = callbackFunc;
      sub_1B8635C((CGThumbnailListItem_o *)(v239 + 16), (int32_t)callbackFunc, v243, v244);
      this->fields.callbackFunc = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v245, v246);
      v247 = *(_QWORD *)(v239 + 24);
      v248 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v248,
        (Il2CppObject *)v239,
        Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__,
        0LL);
      if ( !v247 )
        goto LABEL_233;
      *(_QWORD *)(v247 + 16) = v248;
      sub_1B8635C((CGThumbnailListItem_o *)(v247 + 16), (int32_t)v248, v249, v250);
      v251 = *(Il2CppObject **)(v239 + 24);
      v252 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B86604(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v252,
        v251,
        Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__,
        0LL);
      this->fields.callbackFunc = v252;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v252, v253, v254);
LABEL_212:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_216:
        CombineResultEffectComponent__EndDisp(this, v50);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v256 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v258 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v258, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v259 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v259, (Il2CppObject *)this, (intptr_t)Method_CombineResultEffectComponent_clickNext__, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_233;
      v214 = svtResultInfoWindow;
      v215 = v256;
      v216 = baseUsrSvtCollictionLv;
      v217 = v258;
      v218 = v259;
LABEL_215:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v214, v215, v216, v217, v218, 0LL);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1B86460(string___TypeInfo, 1LL);
      v62 = this->fields.baseUsrSvtData;
      if ( !v62 )
        goto LABEL_233;
      v63 = Instance;
      p_svtId = &v62->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v274.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v274.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v274, v61);
      if ( !v63 )
        goto LABEL_233;
      if ( !*(_DWORD *)(v63 + 24) )
        goto LABEL_234;
      *(_QWORD *)(v63 + 32) = Instance;
      sub_1B8635C((CGThumbnailListItem_o *)(v63 + 32), Instance, v65, v66);
      v67 = System_String__Concat_61685692((System_String_array *)v63, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt_69314012(v67, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
        goto LABEL_22;
      Instance = sub_1B86460(string___TypeInfo, 1LL);
      v69 = this->fields.baseUsrSvtData;
      if ( !v69 )
        goto LABEL_233;
      v70 = Instance;
      v71 = &v69->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v275.fields.currentCryptoKey = v71;
      *(_QWORD *)&v275.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v275, v68);
      if ( !v70 )
        goto LABEL_233;
      if ( !*(_DWORD *)(v70 + 24) )
        goto LABEL_234;
      *(_QWORD *)(v70 + 32) = Instance;
      sub_1B8635C((CGThumbnailListItem_o *)(v70 + 32), Instance, v72, v73);
      v74 = System_String__Concat_61685692((System_String_array *)v70, 0LL);
      UnityEngine_PlayerPrefs__SetInt(v74, 0, 0LL);
      v75 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      CombineResultFormManager__ResetVoiceList(v75, 0LL);
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
        0LL);
      v76 = this->fields.playVoiceList;
      if ( !v76 )
      {
        v77 = this->fields.baseUsrSvtData;
        if ( v77 )
        {
          v79 = *(_QWORD *)&v77->fields.limitCount.fields.currentCryptoKey;
          v78 = *(_QWORD *)&v77->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v276.fields.currentCryptoKey = v79;
          *(_QWORD *)&v276.fields.fakeValue = v78;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v276, 0LL);
          v80 = this->fields.baseUsrSvtData;
          v81 = Instance == 2;
          if ( v80 )
          {
            v82 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v80->fields.limitCount, 0LL) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v83 = this->fields.baseUsrSvtData;
              if ( !v83 )
                goto LABEL_233;
              v85 = *(_QWORD *)&v83->fields.svtId.fields.currentCryptoKey;
              v84 = *(_QWORD *)&v83->fields.svtId.fields.fakeValue;
              v86 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1056LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v277.fields.currentCryptoKey = v85;
              *(_QWORD *)&v277.fields.fakeValue = v84;
              v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v277, 0LL);
              v81 = (v82 == 2) | System_Linq_Enumerable__Contains_int_(
                                   v86,
                                   v87,
                                   (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              kind = this->fields.kind;
              isLimitUpSuppression = kind != 10 && kind != 26;
            }
            if ( (v81 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, v50);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v261 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              v261,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__,
              0LL);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v261, 1, 0LL);
              return;
            }
          }
        }
        goto LABEL_233;
      }
LABEL_141:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&v76->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, v50);
      }
      return;
    case 2:
    case 3:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)UserServantEntity__getSkillIdList((UserServantEntity_o *)Instance, -1, -1, 1, -1, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_233;
      v90 = (System_Int32_array *)Instance;
      TransformCount = UserServantEntity__GetTransformCount(this->fields.baseUsrSvtData, 1, 0LL);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v92);
      if ( !Instance )
        goto LABEL_233;
      dispBattleName = *(System_String_o **)(Instance + 24);
      b = 0.0;
      if ( TransformCount > 1 )
        goto LABEL_132;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
      v95 = this->fields.baseUsrSvtData;
      if ( !v95 )
        goto LABEL_233;
      v96 = (ServantSkillAddMaster_o *)Instance;
      v98 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
      v97 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v278.fields.currentCryptoKey = v98;
      *(_QWORD *)&v278.fields.fakeValue = v97;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v278, 0LL);
      v99 = this->fields.baseUsrSvtData;
      if ( !v99 )
        goto LABEL_233;
      v100 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v99->fields.limitCount, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_233;
      targetId = this->fields.targetId;
      v102 = Instance;
      Instance = UserServantEntity__getDispLimitCount(this->fields.baseUsrSvtData, 1, 0LL);
      if ( !v96 )
        goto LABEL_233;
      EnableEntity = ServantSkillAddMaster__GetEnableEntity(v96, v100, v102, targetId, 0, Instance, 1, 0LL);
      if ( EnableEntity )
      {
        v104 = EnableEntity;
        Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EnableEntity->fields.titles, 0LL);
        a = 0.0;
        v106 = 0.0;
        v107 = 0.0;
        v108 = 0.0;
        v109 = 0.0;
        g = 0.0;
        r = 0.0;
        if ( (Instance & 1) == 0 )
        {
          titles = v104->fields.titles;
          if ( !titles )
            goto LABEL_233;
          if ( !titles->max_length )
LABEL_234:
            sub_1B8661C(Instance, v50);
          dispBattleName = titles->m_Items[0];
          v285.fields.r = 0.0;
          v285.fields.g = 0.0;
          v285.fields.b = 0.0;
          v285.fields.a = 0.0;
          CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(v104, v285, 0LL);
          r = CondLabelColor.fields.r;
          g = CondLabelColor.fields.g;
          b = CondLabelColor.fields.b;
          a = CondLabelColor.fields.a;
          CondLabelColor.fields.r = 0.0;
          CondLabelColor.fields.g = 0.0;
          CondLabelColor.fields.b = 0.0;
          CondLabelColor.fields.a = 0.0;
          CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(v104, CondLabelColor, 0LL);
          v106 = CondSpriteColor.fields.r;
          v107 = CondSpriteColor.fields.g;
          v108 = CondSpriteColor.fields.b;
          v109 = CondSpriteColor.fields.a;
        }
      }
      else
      {
LABEL_132:
        a = 0.0;
        v106 = 0.0;
        v107 = 0.0;
        v108 = 0.0;
        v109 = 0.0;
        g = 0.0;
        r = 0.0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      v159 = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v161 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v161, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v164);
      if ( Instance && skillResultInfoWindow )
      {
        v288.fields.r = r;
        v288.fields.g = g;
        v288.fields.b = b;
        v288.fields.a = a;
        v291.fields.r = v106;
        v291.fields.g = v107;
        v291.fields.b = v108;
        v291.fields.a = v109;
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          v159,
          targetLv,
          v161,
          targetIdOld,
          targetLvOld,
          *(_DWORD *)(Instance + 16),
          v90,
          this->fields.kind == 3,
          1,
          0,
          dispBattleName,
          0,
          v288,
          v291,
          0LL);
        return;
      }
      goto LABEL_233;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v56 = this->fields.skillResultInfoWindow;
      v57 = this->fields.baseUsrSvtData;
      v58 = this->fields.targetId;
      v59 = this->fields.targetLv;
      v60 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v60, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v56 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_46425204(
        v56,
        v57,
        v58,
        v59,
        v60,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        this->fields.npInfoAddManager,
        this->fields.kind,
        0LL);
      return;
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v204 = this->fields.baseUsrSvtData;
      if ( !v204 )
        goto LABEL_233;
      v205 = *(_OWORD *)&v204->fields.id.fields.fakeValue;
      v206 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v270.fields.currentCryptoKey = *(_OWORD *)&v204->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v270.fields.fakeValue = v205;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v268 = v270;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v268, 0LL);
      if ( !v206 )
        goto LABEL_233;
      v207 = DataMasterBase_object__object__long___GetEntity(
               v206,
               Instance,
               (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v207;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)v207, v208, v209);
      v210 = this->fields.svtResultInfoWindow;
      v211 = this->fields.resUsrSvtData;
      v212 = this->fields.baseUsrSvtCollictionLv;
      v213 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v213, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v210 )
        goto LABEL_233;
      v214 = v210;
      v215 = v211;
      v216 = v212;
      v217 = v213;
      v218 = 0LL;
      goto LABEL_215;
    case 7:
    case 0x15:
      v113 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v113 + 309) & 1) == 0 )
        v113 = sub_1BD6A48(v55);
      v114 = *(_QWORD *)(*(_QWORD *)(v113 + 192) + 16LL);
      if ( (*(_BYTE *)(v114 + 309) & 1) == 0 )
        v114 = sub_1BD6A48(v55);
      Instance = **(_QWORD **)(v114 + 184);
      if ( !Instance )
        goto LABEL_233;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v116 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v116,
        (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
      v117 = 0LL;
      v118 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v118 > *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          if ( this->fields.kind == 7 )
          {
            Instance = (__int64)this->fields.baseUsrSvtData;
            if ( !Instance )
              goto LABEL_233;
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            v132 = this->fields.baseUsrSvtData;
            dispLimitCount = Instance;
            if ( !v132 )
              goto LABEL_233;
            Instance = UserServantEntity__IsHeroine(v132, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_233;
              v133 = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4A48C25 )
              {
                sub_1B863B8(&NetworkManager_TypeInfo, v50);
                byte_4A48C25 = 1;
              }
              Instance = (__int64)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (__int64)NetworkManager_TypeInfo;
              }
              v134 = this->fields.baseUsrSvtData;
              if ( !v134 )
                goto LABEL_233;
              v136 = *(_QWORD *)&v134->fields.svtId.fields.currentCryptoKey;
              v135 = *(_QWORD *)&v134->fields.svtId.fields.fakeValue;
              v137 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v281.fields.currentCryptoKey = v136;
              *(_QWORD *)&v281.fields.fakeValue = v135;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v281, 0LL);
              if ( !v133 )
                goto LABEL_233;
              Instance = UserServantCollectionMaster__TryGetEntity(
                           (UserServantCollectionMaster_o *)v133,
                           &entity,
                           v137,
                           Instance,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)entity;
                if ( !entity )
                  goto LABEL_233;
                costumeIds = entity->fields.costumeIds;
                if ( !costumeIds )
                  goto LABEL_233;
                if ( *(_QWORD *)&costumeIds->max_length )
                {
                  v139 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v139,
                               (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v139, 0LL);
                    dispLimitCount = Instance;
                  }
                }
              }
            }
            v140 = this->fields.baseUsrSvtData;
            if ( !v140 )
              goto LABEL_233;
            v142 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
            v141 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v282.fields.currentCryptoKey = v142;
            *(_QWORD *)&v282.fields.fakeValue = v141;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v282, 0LL);
            if ( !v117 )
              goto LABEL_233;
            if ( !MasterData_object )
              goto LABEL_233;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  Instance,
                                  *(_DWORD *)(v117 + 20),
                                  this->fields.targetIdOld,
                                  0LL);
            if ( !Instance )
              goto LABEL_233;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v270,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            IsForceReleaseSkillRankUp = 0;
            LOBYTE(v144) = 0;
            *(_OWORD *)&v271.fields._list = *(_OWORD *)&v270.fields.currentCryptoKey;
            v271.fields._current = (Il2CppObject *)v270.fields.fakeValue;
            do
            {
              v145 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v271,
                       (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v145 )
                break;
              current = v271.fields._current;
              if ( !v271.fields._current )
                sub_1B86614(v145, v146);
              if ( !ServantSkillEntity__isEnable((ServantSkillEntity_o *)v271.fields._current, 0, 0LL) )
                goto LABEL_129;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4A48C25 )
              {
                sub_1B863B8(&NetworkManager_TypeInfo, v148);
                byte_4A48C25 = 1;
              }
              v149 = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                v149 = NetworkManager_TypeInfo;
              }
              v150 = this->fields.baseUsrSvtData;
              if ( !v150 )
                sub_1B86614(v149, v148);
              v151 = v150->fields.lv;
              v153 = *(_QWORD *)&v150->fields.limitCount.fields.currentCryptoKey;
              v152 = *(_QWORD *)&v150->fields.limitCount.fields.fakeValue;
              userIdNumber = v149->static_fields->userIdNumber;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v283.fields.currentCryptoKey = v153;
              *(_QWORD *)&v283.fields.fakeValue = v152;
              v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v283, 0LL);
              if ( ServantSkillEntity__isUse(
                     (ServantSkillEntity_o *)current,
                     userIdNumber,
                     v151,
                     v155,
                     dispLimitCount,
                     -1,
                     -1,
                     -1LL,
                     0LL) )
              {
                v144 = 1;
              }
              else
              {
LABEL_129:
                v144 = 0;
                IsForceReleaseSkillRankUp = ServantSkillEntity__IsForceReleaseSkillRankUp(
                                              (ServantSkillEntity_o *)current,
                                              0LL);
              }
            }
            while ( !(v144 | IsForceReleaseSkillRankUp) );
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v271,
              (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
            isForceRelease = IsForceReleaseSkillRankUp;
            v157 = (unsigned __int8)v144 != 0;
          }
          else
          {
            isForceRelease = 0;
            v157 = 0;
          }
          v228 = this->fields.skillResultInfoWindow;
          v229 = this->fields.targetId;
          v230 = this->fields.targetLv;
          v231 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v231, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
          v232 = this->fields.targetIdOld;
          v233 = this->fields.targetLvOld;
          Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v234);
          if ( Instance )
          {
            if ( v116 )
            {
              v235 = *(_DWORD *)(Instance + 16);
              v236 = System_Collections_Generic_List_int___ToArray(
                       v116,
                       (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
              Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v237);
              if ( Instance )
              {
                if ( v228 )
                {
                  v290.fields.r = 0.0;
                  v290.fields.g = 0.0;
                  v290.fields.b = 0.0;
                  v290.fields.a = 0.0;
                  v293.fields.r = 0.0;
                  v293.fields.g = 0.0;
                  v293.fields.b = 0.0;
                  v293.fields.a = 0.0;
                  SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                    v228,
                    v229,
                    v230,
                    v231,
                    v232,
                    v233,
                    v235,
                    v236,
                    0,
                    v157,
                    0,
                    *(System_String_o **)(Instance + 24),
                    isForceRelease,
                    v290,
                    v293,
                    0LL);
                  return;
                }
              }
            }
          }
LABEL_233:
          sub_1B86614(Instance, v50);
        }
        v119 = this->fields.baseUsrSvtData;
        if ( !v119 )
          goto LABEL_233;
        v121 = *(_QWORD *)&v119->fields.svtId.fields.currentCryptoKey;
        v120 = *(_QWORD *)&v119->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v279.fields.currentCryptoKey = v121;
        *(_QWORD *)&v279.fields.fakeValue = v120;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v279, 0LL);
        if ( !MasterData_object )
          goto LABEL_233;
        Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              v118,
                              0LL);
        if ( !Instance )
          goto LABEL_233;
        v122 = *(_DWORD *)(Instance + 24);
        if ( v122 < 1 )
        {
LABEL_75:
          v125 = this->fields.baseUsrSvtData;
          if ( !v125 )
            goto LABEL_233;
          v127 = *(_QWORD *)&v125->fields.svtId.fields.currentCryptoKey;
          v126 = *(_QWORD *)&v125->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v280.fields.currentCryptoKey = v127;
          *(_QWORD *)&v280.fields.fakeValue = v126;
          v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v280, 0LL);
          Instance = (__int64)ServantSkillMaster__GetEntity(
                                (ServantSkillMaster_o *)MasterData_object,
                                v128,
                                v118,
                                1,
                                0LL);
          if ( Instance )
          {
            v50 = (const MethodInfo *)*(unsigned int *)(Instance + 28);
            v124 = v117;
LABEL_80:
            if ( !v116 )
              goto LABEL_233;
            items = v116->fields._items;
            v130 = Method_System_Collections_Generic_List_int__Add__;
            ++v116->fields._version;
            if ( !items )
              goto LABEL_233;
            size = v116->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v116,
                (int32_t)v50,
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
            }
            else
            {
              v116->fields._size = size + 1;
              items->m_Items[size + 1] = (int)v50;
            }
          }
          else
          {
            v124 = v117;
          }
          ++v118;
          v117 = v124;
          continue;
        }
        break;
      }
      v123 = 0;
      while ( v122 != v123 )
      {
        v124 = *(_QWORD *)(Instance + 8LL * v123 + 32);
        if ( !v124 )
          goto LABEL_233;
        v50 = (const MethodInfo *)*(unsigned int *)(v124 + 28);
        if ( (_DWORD)v50 == this->fields.targetId )
          goto LABEL_80;
        if ( v122 == ++v123 )
          goto LABEL_75;
      }
      goto LABEL_234;
    case 9:
      v187 = this->fields.skillResultInfoWindow;
      v188 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v190 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v190, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v187 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v187, v188, oldFriendShipRank, v190, 0LL);
      return;
    case 0xB:
      v165 = this->fields.skillResultInfoWindow;
      v166 = this->fields.baseUsrSvtData;
      v167 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v167, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v165 )
        goto LABEL_233;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v165, v166, v167, 0LL);
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
        0LL);
      goto LABEL_216;
    case 0xF:
      v76 = this->fields.playVoiceList;
      if ( v76 )
        goto LABEL_141;
      goto LABEL_216;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_196;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_227;
      this->fields.messageCallback = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.messageCallback, 0, (int32_t)v53, v54);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      v169 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E97 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v50);
        byte_4A48E97 = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v169 )
        goto LABEL_233;
      v170 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v169,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
               (const MethodInfo_3214280 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_233;
      v171 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v172 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v172 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v172->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10663/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
        if ( !v171 )
          goto LABEL_233;
        v174 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v171, -1, -1, 0, 0LL);
        v176 = System_String__Format(v174, Name, 0LL);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10662/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
        if ( !v170 )
          goto LABEL_233;
        v262 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v170, 0LL);
        if ( !v171 )
          goto LABEL_233;
        v263 = (Il2CppObject *)Instance;
        v264 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v171, -1, -1, 0, 0LL);
        v176 = System_String__Format_61686468(v262, v263, v264, 0LL);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))messageCallback->fields.m_target)(
        messageCallback->fields.original_method_info,
        v176,
        *(_QWORD *)&messageCallback->fields.extra_arg);
LABEL_227:
      if ( !this->fields.callbackFunc )
        return;
      v223 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v265 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v265 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v265->static_fields->DEFAULT_FADE_TIME;
      v226 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      v227 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__;
LABEL_231:
      v266 = v226;
      System_Action___ctor(v226, (Il2CppObject *)this, *v227, 0LL);
      if ( v223 )
      {
        CommonUI__maskFadeout((CommonUI_o *)v223, 1, DEFAULT_FADE_TIME, v266, 0LL);
        return;
      }
      goto LABEL_233;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_227;
LABEL_196:
      v223 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v224 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v224 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v224->static_fields->DEFAULT_FADE_TIME;
      v226 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      v227 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__;
      goto LABEL_231;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v220 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v53);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_233;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v220,
        commandCardIndex,
        commandCardExceedCount,
        0,
        *(System_String_o **)(Instance + 24),
        0LL);
      goto LABEL_216;
    case 0x17:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_233;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_46173224(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        this->fields.oldFriendShipRank,
        0LL);
      goto LABEL_216;
    case 0x19:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_233;
      Instance = (__int64)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_233;
      v177 = *(System_Int32_array **)(Instance + 16);
      v178 = this->fields.skillResultInfoWindow;
      v179 = this->fields.targetId;
      v180 = this->fields.targetLv;
      v181 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v181, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v182 = this->fields.baseUsrSvtData;
      if ( !v182 )
        goto LABEL_233;
      v183 = this->fields.targetIdOld;
      v184 = this->fields.targetLvOld;
      v186 = *(_QWORD *)&v182->fields.svtId.fields.currentCryptoKey;
      v185 = *(_QWORD *)&v182->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v284.fields.currentCryptoKey = v186;
      *(_QWORD *)&v284.fields.fakeValue = v185;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v284, 0LL);
      if ( !v178 )
        goto LABEL_233;
      v289.fields.r = 0.0;
      v289.fields.g = 0.0;
      v289.fields.b = 0.0;
      v289.fields.a = 0.0;
      v292.fields.r = 0.0;
      v292.fields.g = 0.0;
      v292.fields.b = 0.0;
      v292.fields.a = 0.0;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v178,
        v179,
        v180,
        v181,
        v183,
        v184,
        Instance,
        v177,
        this->fields.targetLvOld == 0,
        1,
        1,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v289,
        v292,
        0LL);
      return;
    default:
      return;
  }
}


void __fastcall CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  CGThumbnailListItem_o *p_player; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A520FD & 1) == 0 )
  {
    sub_1B863B8(&SoundManager_TypeInfo, method);
    byte_4A520FD = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = (CGThumbnailListItem_o *)&this->fields.player;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    p_player->klass = 0LL;
    sub_1B8635C(p_player, 0, v6, v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D725C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D7214;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CombineResultEffectComponent_ClickDelegate__BeginInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4A521D8 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, isDecide);
    byte_4A521D8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__Invoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A521D9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v3);
    byte_4A521D9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.afterSkillList, (int32_t)v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x19
  System_Collections_Generic_List_object__o *afterSkillList; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A521DB & 1) == 0 )
  {
    sub_1B863B8(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_1B863B8(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4A521DB = 1;
  }
  v8 = sub_1B86604(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        *(_DWORD *)(v8 + 20) = lv,
        (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList) == 0LL)
    || (items = afterSkillList->fields._items,
        v14 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_1B86614(afterSkillList, v10);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v8;
    sub_1B8635C((CGThumbnailListItem_o *)(v16 + 4), v8, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x19
  System_Collections_Generic_List_object__o *beforeSkillList; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A521DA & 1) == 0 )
  {
    sub_1B863B8(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_1B863B8(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4A521DA = 1;
  }
  v8 = sub_1B86604(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        *(_DWORD *)(v8 + 20) = lv,
        (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList) == 0LL)
    || (items = beforeSkillList->fields._items,
        v14 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_1B86614(beforeSkillList, v10);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v8;
    sub_1B8635C((CGThumbnailListItem_o *)(v16 + 4), v8, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4A521DD & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_4A521DD = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1B86614(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4A521DE & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1B863B8(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
                                                                       method);
    byte_4A521DE = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1B86614(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4A521DC & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_4A521DC = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1B86614(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_MessageDelegate___ctor(
        CombineResultEffectComponent_MessageDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D72E0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D72C0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D7278;
}


System_IAsyncResult_o *__fastcall CombineResultEffectComponent_MessageDelegate__BeginInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = message;
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__Invoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    message,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A521DF & 1) == 0 )
  {
    sub_1B863B8(&CombineResultEffectComponent___c_TypeInfo, v1);
    byte_4A521DF = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall CombineResultEffectComponent___c___ctor(
        CombineResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ServantVoicePerformance_o *__fastcall CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__149_0(
        CombineResultEffectComponent___c_o *this,
        ServantVoiceData_o *voiceData,
        const MethodInfo *method)
{
  if ( !voiceData )
    sub_1B86614(this, 0LL);
  return voiceData->fields.additionalPerformances;
}


bool __fastcall CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__149_1(
        CombineResultEffectComponent___c_o *this,
        ServantVoicePerformance_o *performanceData,
        const MethodInfo *method)
{
  if ( !performanceData )
    sub_1B86614(this, 0LL);
  return !System_String__IsNullOrEmpty(performanceData->fields.assetName, 0LL);
}


int32_t __fastcall CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__105_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return System_Int32__CompareTo_63159108((_DWORD)a + 24, b->fields.priority, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass112_0___ctor(
        CombineResultEffectComponent___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass112_0___LoadCombineEffect_b__0(
        CombineResultEffectComponent___c__DisplayClass112_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A521E0 & 1) == 0 )
  {
    sub_1B863B8(&CombineResultEffectComponent_TypeInfo, assetData);
    byte_4A521E0 = 1;
  }
  if ( assetData )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = assetData;
    sub_1B8635C(
      (CGThumbnailListItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int32_t)assetData,
      (int32_t)method,
      v3);
  }
  ActionExtensions__Call(this->fields.action, 0LL);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v11; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v12; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v13; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v14; // x8
  struct CombineResultEffectComponent_o *v15; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__4; // x22
  CommonUI_o *v18; // x20
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_4A521E1 & 1) == 0 )
  {
    sub_1B863B8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)sub_1B863B8(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__,
                                                                      v5);
    byte_4A521E1 = 1;
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
  UnityEngine_Object__DestroyImmediate_69356480(effect, 0LL);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v11->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[3].fields.__9__4 = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this[3].fields.__9__4, 0, v9, v10);
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v12->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0LL);
  v13 = v2->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v13->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[4].fields.CS___8__locals1 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = v2->fields.CS___8__locals1;
    if ( v14 )
    {
      v15 = v14->fields.__4__this;
      if ( v15 )
      {
        baseUsrSvtData = v15->fields.baseUsrSvtData;
        _9__4 = v2->fields.__9__4;
        v18 = (CommonUI_o *)this;
        if ( !_9__4 )
        {
          _9__4 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B86604(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__4,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__,
            v19);
          v2->fields.__9__4 = _9__4;
          sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v20, v21);
        }
        if ( v18 )
        {
          CommonUI__OpenCombineLimit(v18, baseUsrSvtData, _9__4, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1B86614(this, method);
  }
  if ( this[8].fields.__9__4 )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
    callback = v2->fields.callback;
    if ( !callback )
      goto LABEL_24;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
  }
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_1___setSkillResultInfo_b__4(
        CombineResultEffectComponent___c__DisplayClass143_1_o *this,
        bool decide,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *CS___8__locals1; // x8
  CombineResultEffectComponent___c__DisplayClass143_1_o *v4; // x19
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this,
        (this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)CS___8__locals1->fields.__4__this) == 0LL) )
  {
    sub_1B86614(this, decide);
  }
  LODWORD(this[7].fields.__9__4) = 0;
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
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
  CombineResultEffectComponent___c__DisplayClass143_2_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__7; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct CombineResultEffectComponent_o *v11; // x8

  v3 = this;
  if ( (byte_4A521E2 & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)sub_1B863B8(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
                                                                      v6);
    byte_4A521E2 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__7 = v3->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
      0LL);
    v3->fields.__9__7 = _9__7;
    sub_1B8635C((CGThumbnailListItem_o *)&v3->fields.__9__7, (int32_t)_9__7, v9, v10);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__7,
                                                                    (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v11 = v3->fields.__4__this;
  if ( !v11 || !this )
LABEL_11:
    sub_1B86614(this, decide);
  CardServantFlagRequest__beginRequest(
    (CardServantFlagRequest_o *)this,
    v11->fields.targetSvtId,
    v11->fields.targetFlagId,
    0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_2___setSkillResultInfo_b__7(
        CombineResultEffectComponent___c__DisplayClass143_2_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass169_0___ctor(
        CombineResultEffectComponent___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass169_0___OpenNotification_b__0(
        CombineResultEffectComponent___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass169_0_o *v2; // x19
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
  if ( (byte_4A521E3 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineResultEffectComponent___c__DisplayClass169_0_o *)sub_1B863B8(
                                                                      &ServantCharaGraphEXOpenManager_TypeInfo,
                                                                      v3);
    byte_4A521E3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  resUsrSvtData = _4__this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_11;
  v7 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v11, 0LL);
  limitCount = v2->fields.limitCount;
  v10 = v8;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v10, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass169_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1B86614(this, method);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass175_0___ctor(
        CombineResultEffectComponent___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___c__DisplayClass175_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass175_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A521E4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDcd);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_CombineResultEffectComponent___c__DisplayClass175_0__ProfileChangeDecideAction_b__1__, v6);
    byte_4A521E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass175_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !v10 )
    sub_1B86614(Instance, v8);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass175_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v8; // x20

  if ( (byte_4A521E5 & 1) == 0 )
  {
    sub_1B863B8(&AvalonSceneManager_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A521E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  Instance = (Il2CppObject *)_4__this->fields.limitUpResultCheck;
  if ( !Instance )
    goto LABEL_10;
  LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 1, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v8 )
LABEL_10:
    sub_1B86614(Instance, v5);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}