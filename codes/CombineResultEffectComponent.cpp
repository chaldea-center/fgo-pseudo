void __fastcall CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Int32_array *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_HashSet_T__o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BCB530 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v4);
    sub_1C1ABD4(&int___TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v7);
    byte_4BCB530 = 1;
  }
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_BFAEF0;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v8;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.currentFigureCollectList,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v15;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.afterFigureCollectList,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v22 = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !v22 )
    goto LABEL_7;
  if ( !v22->max_length )
    sub_1C1AE38(v22, v22);
  v22->m_Items[1] = 100;
  this->fields.ChangeCardEffectLvList = v22;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.ChangeCardEffectLvList,
    (int64_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v30 = (System_Collections_Generic_HashSet_T__o *)sub_1C1AE20(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v30,
    (const MethodInfo_34F1C78 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v30 )
LABEL_7:
    sub_1C1AE30(v22, v23);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v30,
    1,
    (const MethodInfo_34F2E7C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v30,
    10,
    (const MethodInfo_34F2E7C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v30,
    26,
    (const MethodInfo_34F2E7C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v30,
    19,
    (const MethodInfo_34F2E7C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v30,
    24,
    (const MethodInfo_34F2E7C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v30;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.limitUpKinds, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BCB4DE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v3);
    byte_4BCB4DE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)Component_object, v5, v6, v7, v8, v9, v10);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1C1AE30(0LL, v12);
  v13 = UnityEngine_Component__GetComponent_object_(
          transform,
          (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v13;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.combineResStatus, (int64_t)v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4BCB4F2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, *(_QWORD *)&oldLv);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BCB4F2 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v10 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
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
    sub_1C1AE30(Instance, v9);
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
    sub_1C1AE30(0LL, method);
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

  if ( (byte_4BCB52C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&DataManager_TypeInfo, v6);
    byte_4BCB52C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v8);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BCB529 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&CombineResultEffectComponent_TypeInfo, v3);
    sub_1C1ABD4(&System_GC_TypeInfo, v4);
    byte_4BCB529 = 1;
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
    AssetManager__releaseAsset_38988476(v8, 0LL);
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = 0LL;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      0LL,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_64086932(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_22:
    sub_1C1AE30(svtResultInfoWindow, v5);
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

  if ( (byte_4BCB52B & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__173_0__, v4);
    byte_4BCB52B = 1;
  }
  v5 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v8 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__173_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_1C1AE30(v9, v10);
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
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Component_o *v45; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v47; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x1
  struct System_Int32_array *v51; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v53; // x26
  StandFigureCollect_o *v54; // x27
  __int64 v55; // x0
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v68; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v70; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v72; // x20
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct System_Object_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppClass **v82; // x0
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4BCB509 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C1ABD4(&StandFigureCollect_TypeInfo, v18);
    byte_4BCB509 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v22 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v22,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
                                      (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v68);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_39177300(
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
        v70 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v72 = (StandFigureCollect_o *)sub_1C1AE20(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v72, 0LL, v70, 0LL);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v80 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v72,
                  *(const MethodInfo_363C890 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
              }
              else
              {
                v82 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v82[4] = (Il2CppClass *)v72;
                sub_1C1AB78((PartyOrganizationUtility_o *)(v82 + 4), (int64_t)v72, v73, v74, v75, v76, v77, v78);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1C1AE30(Instance, v21);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    v26,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v85 = v84;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v27 )
      break;
    current = (SvtMultiPortraitEntity_o *)v85.fields._current;
    if ( !v85.fields._current )
      sub_1C1AE30(v27, v28);
    klass_high = HIDWORD(v85.fields._current[2].klass);
    if ( klass_high >= 1 )
      v31 = klass_high + 1;
    else
      v31 = 1;
    if ( !StandFigureNode )
      sub_1C1AE30(v27, v28);
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
    v45 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C1AE30(0LL, v38);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    transform = UnityEngine_Component__get_transform(v45, 0LL);
    if ( !transform )
      sub_1C1AE30(0LL, v47);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v49 = UnityEngine_Component__get_gameObject(v45, 0LL);
      v51 = current->fields.commonPosition;
      if ( !v51 )
        sub_1C1AE30(v49, v50);
      max_length = v51->max_length;
      if ( max_length == 1 )
        sub_1C1AE38(v49, v50);
      if ( !max_length )
        sub_1C1AE38(v49, v50);
      GameObjectExtensions__AddLocalPosition_34757244(v49, (float)v51->m_Items[1], (float)v51->m_Items[2], 0LL);
    }
    v53 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v54 = (StandFigureCollect_o *)sub_1C1AE20(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v54, current, (UIStandFigureR_o *)v45, 0LL);
    if ( !v53 )
      sub_1C1AE30(v55, v56);
    v63 = v53->fields._items;
    v64 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v53->fields._version;
    if ( !v63 )
      sub_1C1AE30(v55, v56);
    v65 = v53->fields._size;
    if ( (unsigned int)v65 >= v63->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v53,
        (Il2CppObject *)v54,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
    }
    else
    {
      v66 = &v63->obj.klass + v65;
      v53->fields._size = v65 + 1;
      v66[4] = (Il2CppClass *)v54;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v66 + 4), (int64_t)v54, v57, v58, v59, v60, v61, v62);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UnityEngine_GameObject_o *v55; // x0
  int32_t v56; // w29
  UnityEngine_GameObject_o *v57; // x22
  const MethodInfo *v58; // x1
  UnityEngine_GameObject_o *v59; // x7
  UnityEngine_Component_o *v60; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v62; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v64; // x0
  __int64 v65; // x1
  struct System_Int32_array *v66; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v68; // x29
  StandFigureCollect_o *v69; // x22
  __int64 v70; // x0
  __int64 v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v83; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v85; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v87; // x20
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Object_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  Il2CppClass **v97; // x0
  int32_t svtId; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v102; // [xsp+50h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4BCB500 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&formId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v13);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v19);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C1ABD4(&StandFigureCollect_TypeInfo, v22);
    byte_4BCB500 = 1;
  }
  memset(&v102, 0, sizeof(v102));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v26 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v26,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v29 = (SvtMultiPortraitMaster_o *)Instance;
  v31 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v31;
  *(_QWORD *)&v103.fields.fakeValue = v30;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v103, 0LL);
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
                                      (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v83);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_39177300(
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
                                 : StandFigureManager__CreateRenderPrefab_39178796(
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
      v85 = (UIStandFigureR_o *)Instance;
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
          v87 = (StandFigureCollect_o *)sub_1C1AE20(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v87, 0LL, v85, 0LL);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v95 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v87,
                  *(const MethodInfo_363C890 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
              }
              else
              {
                v97 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v97[4] = (Il2CppClass *)v87;
                sub_1C1AB78((PartyOrganizationUtility_o *)(v97 + 4), (int64_t)v87, v88, v89, v90, v91, v92, v93);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1C1AE30(Instance, v25);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v101,
    v36,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v102 = v101;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v102,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v37 )
      break;
    current = (SvtMultiPortraitEntity_o *)v102.fields._current;
    if ( !v102.fields._current )
      sub_1C1AE30(v37, v38);
    klass_high = HIDWORD(v102.fields._current[2].klass);
    if ( klass_high >= 1 )
      v41 = klass_high + 1;
    else
      v41 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1C1AE30(v37, v38);
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
        sub_1C1AE30(v37, v38);
      v55 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      v56 = current->fields.portraitImageId;
      v57 = v55;
      v59 = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v58);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(v57, v56, formId, 1, 0, v41, 0LL, v59, 0LL);
    }
    v60 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C1AE30(0LL, v48);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    transform = UnityEngine_Component__get_transform(v60, 0LL);
    if ( !transform )
      sub_1C1AE30(0LL, v62);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v64 = UnityEngine_Component__get_gameObject(v60, 0LL);
      v66 = current->fields.commonPosition;
      if ( !v66 )
        sub_1C1AE30(v64, v65);
      max_length = v66->max_length;
      if ( max_length == 1 )
        sub_1C1AE38(v64, v65);
      if ( !max_length )
        sub_1C1AE38(v64, v65);
      GameObjectExtensions__AddLocalPosition_34757244(v64, (float)v66->m_Items[1], (float)v66->m_Items[2], 0LL);
    }
    v68 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v69 = (StandFigureCollect_o *)sub_1C1AE20(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v69, current, (UIStandFigureR_o *)v60, 0LL);
    if ( !v68 )
      sub_1C1AE30(v70, v71);
    v78 = v68->fields._items;
    v79 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v68->fields._version;
    if ( !v78 )
      sub_1C1AE30(v70, v71);
    v80 = v68->fields._size;
    if ( (unsigned int)v80 >= v78->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v68,
        (Il2CppObject *)v69,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = &v78->obj.klass + v80;
      v68->fields._size = v80 + 1;
      v81[4] = (Il2CppClass *)v69;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)v69, v72, v73, v74, v75, v76, v77);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v102,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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

  if ( (byte_4BCB528 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    byte_4BCB528 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    currentFigureCollectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v34,
           (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C1AE30(v9, v10);
    monitor = (UnityEngine_Object_o *)v34.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v14 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v14 )
        sub_1C1AE30(0LL, v13);
      UIStandFigureR__ReleaseCharacter(v14, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_1C1AE30(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70794600(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v21 )
      break;
    v23 = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C1AE30(v21, v22);
    v24 = (UnityEngine_Object_o *)v34.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      v26 = (UIStandFigureR_o *)v23[1].monitor;
      if ( !v26 )
        sub_1C1AE30(0LL, v25);
      UIStandFigureR__ReleaseCharacter(v26, 0LL);
      v28 = (UnityEngine_Component_o *)v23[1].monitor;
      if ( !v28 )
        sub_1C1AE30(0LL, v27);
      v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70794600(v29, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1C1AE30(currentFigureCollectList, method);
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
      sub_1C1AE30(bgCollider, method);
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

  if ( (byte_4BCB513 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__EndLoad_b__144_0__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCB513 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__144_0__, 0LL);
  if ( !v8 )
    sub_1C1AE30(v11, v12);
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

  if ( (byte_4BCB51F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_EndPlayProcess__, v3);
    byte_4BCB51F = 1;
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
      sub_1C1AE38(IsNullOrEmpty, v5);
    IsNullOrEmpty = playVoiceList->m_Items[v7];
    if ( !IsNullOrEmpty )
LABEL_9:
      sub_1C1AE30(IsNullOrEmpty, v5);
    v8 = ServantVoiceData__get_AfterPerformance(IsNullOrEmpty, 0LL);
    v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndPlayProcess__, 0LL);
    CombineResultEffectComponent__PlayPerformance(this, v8, v9, v10);
  }
}


void __fastcall CombineResultEffectComponent__EndPlayProcess(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CombineResultEffectComponent_o *v8; // x19
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
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v23; // x8
  __int64 v24; // x20
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineResultEffectComponent_o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int m_CancellationTokenSource; // w8
  int32_t kind; // w8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v43; // x0
  unsigned int v44; // w8
  struct UserServantEntity_o *v45; // x8
  __int64 v46; // x20
  __int64 v47; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  int32_t v49; // w20
  CombineResultEffectComponent_o *v50; // x0
  int32_t v51; // w21
  const MethodInfo *v52; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v53; // x22
  System_Action_o *v54; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v8 = this;
  if ( (byte_4BCB520 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&BalanceConfig_TypeInfo, v9);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v10);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__EndPlayProcess_b__158_0__, v11);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__EndPlayProcess_b__158_1__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v13);
    sub_1C1ABD4(&int_____TypeInfo, v14);
    sub_1C1ABD4(&int___TypeInfo, v15);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v16);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v17);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1C1ABD4(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v19);
    this = (CombineResultEffectComponent_o *)sub_1C1ABD4(&StringLiteral_10867/*"PlayVoice"*/, v20);
    byte_4BCB520 = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_47;
    if ( (unsigned int)playCnt < playVoiceList->max_length )
    {
      v23 = playVoiceList->m_Items[playCnt];
      if ( v23 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_10867/*"PlayVoice"*/,
          v23->fields.delay,
          0LL);
        return;
      }
LABEL_47:
      sub_1C1AE30(this, method);
    }
    goto LABEL_48;
  }
  if ( v8->fields.player )
    CombineResultEffectComponent__stopVoice(v8, method);
  v8->fields.playCnt = 0;
  v8->fields.playVoiceList = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  if ( v8->fields.firstPlayedVoiceFlag >= 1 )
  {
    v24 = sub_1C1AC7C(int_____TypeInfo, 1LL);
    this = (CombineResultEffectComponent_o *)sub_1C1AC7C(int___TypeInfo, 2LL);
    baseUsrSvtData = v8->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_47;
    v26 = this;
    v28 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v55.fields.currentCryptoKey = v28;
    *(_QWORD *)&v55.fields.fakeValue = v27;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                               v55,
                                               0LL);
    if ( !v26 )
      goto LABEL_47;
    m_CancellationTokenSource = (int)v26->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_48;
    LODWORD(v26->fields.svtResultInfoWindow) = (_DWORD)this;
    if ( m_CancellationTokenSource == 1 )
      goto LABEL_48;
    HIDWORD(v26->fields.svtResultInfoWindow) = v8->fields.firstPlayedVoiceFlag;
    if ( !v24 )
      goto LABEL_47;
    if ( !*(_DWORD *)(v24 + 24) )
LABEL_48:
      sub_1C1AE38(this, method);
    *(_QWORD *)(v24 + 32) = v26;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v26, v29, v30, v31, v32, v33, v34);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (CombineResultEffectComponent_o *)NetworkManager__getRequest_object_(
                                               0LL,
                                               (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
    if ( !this )
      goto LABEL_47;
    TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)this, (System_Int32_array_array *)v24, 0LL);
    kind = v8->fields.kind;
    v8->fields.firstPlayedVoiceFlag = 0;
    if ( !kind )
      CombineResultEffectComponent__EndDisp(v8, method);
  }
  this = (CombineResultEffectComponent_o *)v8->fields.limitUpKinds;
  if ( !this )
    goto LABEL_47;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_Int32Enum___Contains(
                                             (System_Collections_Generic_HashSet_T__o *)this,
                                             v8->fields.kind,
                                             (const MethodInfo_34F236C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8->fields.isLimitUpSuppression )
      goto LABEL_27;
    v44 = v8->fields.kind;
    if ( v44 > 0x1A || ((1 << v44) & 0x4080002) == 0 )
      goto LABEL_27;
    v45 = v8->fields.baseUsrSvtData;
    if ( !v45 )
      goto LABEL_47;
    v47 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
    v46 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v56.fields.currentCryptoKey = v47;
    *(_QWORD *)&v56.fields.fakeValue = v46;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                               v56,
                                               0LL);
    v48 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v8->fields.baseUsrSvtData;
    if ( !v48 )
      goto LABEL_47;
    v49 = (int)this;
    v50 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                              v48[6],
                                              0LL);
    v51 = (_DWORD)v50 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v50, v49, (_DWORD)v50 + 1, v52) )
    {
      v53 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1C1AE20(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v53,
        (Il2CppObject *)v8,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v54 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v54, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlayProcess_b__158_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v49, v51, v53, v54, 0LL);
    }
    else
    {
LABEL_27:
      limitUpResultCheck = v8->fields.limitUpResultCheck;
      v38 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v38, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlayProcess_b__158_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_47;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v38, 1, 0LL);
    }
  }
  else if ( v8->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v8, method);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v8, v39) )
    {
      this = (CombineResultEffectComponent_o *)v8->fields.touchInfo;
      if ( !this )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v8->fields.costumeId;
      v43 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v43->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v8, v40);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v8, v8->fields.skillShowIndex, v41);
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

  if ( (byte_4BCB525 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__FadeoutProcess_b__167_0__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCB525 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v8 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
      v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__167_0__,
        0LL);
      if ( !Instance )
        sub_1C1AE30(v11, v12);
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
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4BCB4F6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, parentTr);
    sub_1C1ABD4(&CombineResultEffectComponent_TypeInfo, v5);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject____77632832, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    byte_4BCB4F6 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_14;
  Object_object__49812820 = AssetData__GetObject_object__49812820(
                              effectAssetData,
                              name,
                              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object__50483428(
                                     Object_object__49812820,
                                     parentTr,
                                     1,
                                     (const MethodInfo_30250E4 *)Method_UnityEngine_Object_Instantiate_GameObject____77632832);
  if ( !effectAssetData )
    goto LABEL_14;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4BC2141 )
  {
    effectAssetData = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4BC2141 = 1;
  }
  if ( !v11 )
    goto LABEL_14;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4BC2146 )
  {
    effectAssetData = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4BC2146 = 1;
  }
  if ( !v12 )
LABEL_14:
    sub_1C1AE30(effectAssetData, parentTr);
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

  if ( (byte_4BCB508 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4BCB508 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1C1AE30(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1C1AE38(v6, *(_QWORD *)&svtId);
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

  if ( (byte_4BCB526 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&messageId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v11);
    byte_4BCB526 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v25, 0LL);
    if ( !v15 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v15, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_21:
      sub_1C1AE30(Instance, v13);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v26, 0LL);
  if ( !v20 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v20,
          (Il2CppObject **)&v23,
          (int32_t)Instance,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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

  if ( (byte_4BCB503 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIPanel___, fmsString);
    byte_4BCB503 = 1;
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
    sub_1C1AE30(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
  bool isVoicePlay_41533288; // w0
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

  if ( (byte_4BCB52F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_VoicePlayCondMaster___, *(_QWORD *)&index);
    sub_1C1ABD4(&DataManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8);
    sub_1C1ABD4(&int_TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_11561/*"ResultEffectAnimation"*/, v11);
    sub_1C1ABD4(&StringLiteral_17568/*"bit_result_skinchange{0:D2}"*/, v12);
    sub_1C1ABD4(&StringLiteral_17546/*"bit_result_advent{0:D2}"*/, v13);
    sub_1C1ABD4(&StringLiteral_25530/*"{0}{1:D2}"*/, v14);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v15);
    sub_1C1ABD4(&StringLiteral_17570/*"bit_result{0:D2}"*/, v16);
    byte_4BCB52F = 1;
  }
  condEntity = 0LL;
  if ( !this->fields.svtVoiceEntity )
    goto LABEL_26;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playVoiceList, 0LL) )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( !svtVoiceEntity )
    goto LABEL_42;
  playVoiceList = this->fields.playVoiceList;
  if ( !playVoiceList )
    goto LABEL_42;
  if ( !playVoiceList->max_length )
    sub_1C1AE38(Master_object, v19);
  v22 = playVoiceList->m_Items[0];
  if ( !v22 || !Master_object )
    goto LABEL_42;
  isVoicePlay_41533288 = VoicePlayCondMaster__isVoicePlay_41533288(
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
  if ( condEntity && isVoicePlay_41533288 )
  {
    CombineAnimation = (Il2CppObject *)VoicePlayCondEntity__GetCombineAnimation(condEntity, 0LL, 0LL);
    v35 = index;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v25, v26, v27);
    v17 = System_String__Format_63054740((System_String_o *)StringLiteral_25530/*"{0}{1:D2}"*/, CombineAnimation, v28, 0LL);
  }
  Master_object = (VoicePlayCondMaster_o *)this->fields.fsm;
  if ( !Master_object
    || (Master_object = (VoicePlayCondMaster_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Master_object, 0LL)) == 0LL
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                   (System_String_o *)StringLiteral_11561/*"ResultEffectAnimation"*/,
                                                   0LL)) == 0LL
    || (Master_object = (VoicePlayCondMaster_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                                   (HutongGames_PlayMaker_FsmGameObject_o *)Master_object,
                                                   0LL)) == 0LL )
  {
LABEL_42:
    sub_1C1AE30(Master_object, v19);
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Master_object,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
          v33 = &StringLiteral_17568/*"bit_result_skinchange{0:D2}"*/;
          return System_String__Format((System_String_o *)*v33, v32, 0LL);
        }
        return (System_String_o *)StringLiteral_1/*""*/;
      }
LABEL_38:
      v35 = index;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, method, v3, v4);
      v33 = &StringLiteral_17546/*"bit_result_advent{0:D2}"*/;
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
    v33 = &StringLiteral_17570/*"bit_result{0:D2}"*/;
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
    sub_1C1AE30(0LL, transformCount);
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
  Il2CppObject *Object_object__49812820; // x20
  System_Collections_Generic_IEnumerable_TSource__o *playVoiceList; // x20
  CombineResultEffectComponent___c_c *v18; // x0
  System_Func_object__object__o *_9__149_0; // x21
  Il2CppObject *v20; // x22
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v28; // x0
  CombineResultEffectComponent___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_object__bool__o *_9__149_1; // x21
  Il2CppObject *v32; // x22
  struct CombineResultEffectComponent___c_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  Il2CppClass *klass; // x8
  AssetData_o *effectAssetData; // x0
  System_String_o *v44; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  VoiceMaster_o *v46; // x21
  __int64 v47; // x22
  __int64 v48; // x23
  struct ServantVoiceData_array *v49; // x8
  ServantVoiceData_o *v50; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4BCB518 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, method);
    sub_1C1ABD4(&CombineResultEffectComponent_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataManager_GetMaster_VoiceMaster___, v4);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___, v7);
    sub_1C1ABD4(&System_Func_ServantVoicePerformance__bool__TypeInfo, v8);
    sub_1C1ABD4(&System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__149_0__, v12);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__149_1__, v13);
    sub_1C1ABD4(&CombineResultEffectComponent___c_TypeInfo, v14);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v15);
    byte_4BCB518 = 1;
  }
  Object_object__49812820 = 0LL;
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
      _9__149_0 = (System_Func_object__object__o *)sub_1C1AE20(System_Func_ServantVoiceData__ServantVoicePerformance__TypeInfo);
      System_Func_object__object____ctor(
        _9__149_0,
        v20,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__149_0__,
        0LL);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__149_0 = (struct System_Func_ServantVoiceData__ServantVoicePerformance__o *)_9__149_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__149_0,
        (int64_t)_9__149_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = System_Linq_Enumerable__Select_object__object_(
            playVoiceList,
            (System_Func_TSource__TResult__o *)_9__149_0,
            (const MethodInfo_2FD0C44 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__ServantVoicePerformance___);
    v29 = CombineResultEffectComponent___c_TypeInfo;
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
    if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
      v29 = CombineResultEffectComponent___c_TypeInfo;
    }
    _9__149_1 = (System_Func_object__bool__o *)v29->static_fields->__9__149_1;
    if ( !_9__149_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = CombineResultEffectComponent___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__149_1 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_ServantVoicePerformance__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__149_1,
        v32,
        Method_CombineResultEffectComponent___c__GetVoiceEffectPrefab_b__149_1__,
        0LL);
      v33 = CombineResultEffectComponent___c_TypeInfo->static_fields;
      v33->__9__149_1 = (struct System_Func_ServantVoicePerformance__bool__o *)_9__149_1;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v33->__9__149_1, (int64_t)_9__149_1, v34, v35, v36, v37, v38, v39);
    }
    v40 = System_Linq_Enumerable__FirstOrDefault_object__50081164(
            v30,
            (System_Func_TSource__bool__o *)_9__149_1,
            (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_ServantVoicePerformance___);
    if ( v40 )
      klass = v40[1].klass;
    else
      klass = 0LL;
    effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
    if ( !effectAssetData )
      goto LABEL_39;
    if ( klass )
      v44 = (System_String_o *)klass;
    else
      v44 = (System_String_o *)StringLiteral_1/*""*/;
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                effectAssetData,
                                v44,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49812820, 0LL, 0LL)
    && !this->fields.kind )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    effectAssetData = (AssetData_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_VoiceMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( baseUsrSvtData )
    {
      v46 = (VoiceMaster_o *)effectAssetData;
      v48 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = v48;
      *(_QWORD *)&v52.fields.fakeValue = v47;
      effectAssetData = (AssetData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v52, 0LL);
      v49 = this->fields.playVoiceList;
      if ( v49 )
      {
        if ( !v49->max_length )
          sub_1C1AE38(effectAssetData, v41);
        v50 = v49->m_Items[0];
        if ( v50 )
        {
          if ( v46 )
          {
            this->fields.firstPlayedVoiceFlag = VoiceMaster__getFlagRequestNumber(
                                                  v46,
                                                  (int32_t)effectAssetData,
                                                  v50->fields.id,
                                                  0,
                                                  0LL);
            return (UnityEngine_GameObject_o *)Object_object__49812820;
          }
        }
      }
    }
LABEL_39:
    sub_1C1AE30(effectAssetData, v41);
  }
  return (UnityEngine_GameObject_o *)Object_object__49812820;
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
  __int64 v9; // x8
  int64_t v10; // x20
  int v11; // w23
  int v12; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v14; // q1
  int64_t v15; // x21
  __int128 v16; // q0
  int64_t v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v25; // x8
  SkillInfo_o *v26; // x9
  SkillInfo_o *v27; // x8
  bool v28; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v32; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v34; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_4BCB519 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BCB519 = 1;
  }
  v34 = 0LL;
  skillInfoList = 0LL;
  v32 = 0LL;
  tdInfo = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
          if ( Instance )
          {
            v9 = *(_QWORD *)(Instance + 24);
            v10 = Instance;
            v11 = v9 - 1;
            if ( (int)v9 >= 1 )
            {
              v12 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_52;
                v14 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v15 = *(_QWORD *)(v10 + 8LL * v12 + 32);
                *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v31.fields.fakeValue = v14;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v30 = v31;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v30, 0LL);
                if ( !v15 )
                  goto LABEL_52;
                v16 = *(_OWORD *)(v15 + 32);
                v17 = Instance;
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
                *(_OWORD *)&v29.fields.fakeValue = v16;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v29, 0LL);
                if ( v17 == Instance )
                  break;
                if ( v11 == v12 )
                  goto LABEL_20;
                if ( (unsigned int)++v12 >= *(_DWORD *)(v10 + 24) )
LABEL_18:
                  sub_1C1AE38(Instance, id);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v15;
              sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, v15, v18, v19, v20, v21, v22, v23);
            }
LABEL_20:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v34, -1, -1, 1, 0, -1, 0LL);
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
                    goto LABEL_52;
                  if ( i >= skillInfoList->max_length )
                    goto LABEL_18;
                  v25 = skillInfoList->m_Items[i];
                  if ( !v25 || !v34 )
                    goto LABEL_52;
                  if ( i >= v34->max_length )
                    goto LABEL_18;
                  v26 = v34->m_Items[i];
                  if ( !v26 )
                    goto LABEL_52;
                  id = (unsigned int)v25->fields.id;
                  if ( *(_QWORD *)&v25->fields.id != *(_QWORD *)&v26->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v25->fields.lv,
                      0LL);
                    if ( !v34 )
                      goto LABEL_52;
                    if ( i >= v34->max_length )
                      goto LABEL_18;
                    v27 = v34->m_Items[i];
                    if ( !v27 )
                      goto LABEL_52;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v27->fields.id,
                      v27->fields.lv,
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
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v32, -1, -1, 0, 0LL);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
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
    sub_1C1AE30(Instance, id);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Transform_o *v15; // x20
  const MethodInfo *v16; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x1

  if ( (byte_4BCB4F4 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v6);
    byte_4BCB4F4 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_19;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effect, (int64_t)Value, v9, v10, v11, v12, v13, v14);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_19;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  v15 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4BC2146 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BC2146 = 1;
  }
  if ( !v15 )
    goto LABEL_19;
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = AvalonSceneManager_TypeInfo;
    v20 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
    v22 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__,
      0LL);
    if ( v20 )
    {
      CommonUI__maskFadein(v20, DEFAULT_FADE_TIME, v22, 0LL);
      return;
    }
LABEL_19:
    sub_1C1AE30(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v16);
  CombineResultEffectComponent__SetResultServantVoiceData(this, v23);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_1C1AE30(0LL, method);
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
    sub_1C1AE30(0LL, method);
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

  if ( (byte_4BCB521 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BCB521 = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                                                        v16,
                                                                                        0LL);
  if ( !v10 )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v10,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_1C1AE30(costumeSkillInfoManager, method);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  CombineRootComponent_c *v18; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v20; // x22

  if ( (byte_4BCB4F5 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, action);
    sub_1C1ABD4(&CombineResultEffectComponent_TypeInfo, v4);
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, v5);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__DisplayClass112_0__LoadCombineEffect_b__0__, v7);
    sub_1C1ABD4(&CombineResultEffectComponent___c__DisplayClass112_0_TypeInfo, v8);
    byte_4BCB4F5 = 1;
  }
  v9 = sub_1C1AE20(CombineResultEffectComponent___c__DisplayClass112_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass112_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass112_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_1C1AE30(v10, v11);
  *(_QWORD *)(v9 + 16) = action;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)action, v12, v13, v14, v15, v16, v17);
  if ( CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData )
    goto LABEL_10;
  v18 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v18 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v18->static_fields->COMBINE_ASSET_PATH;
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_CombineResultEffectComponent___c__DisplayClass112_0__LoadCombineEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v20, 1, 0LL) )
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
    sub_1C1AE30(0LL, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BCB52E & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_5574/*"END_ANIMATION"*/, method);
    byte_4BCB52E = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1C1AE30(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5574/*"END_ANIMATION"*/, 0LL);
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
  if ( (byte_4BCB52A & 1) == 0 )
  {
    sub_1C1ABD4(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CombineResultEffectComponent_o *)sub_1C1ABD4(&StringLiteral_8416/*"LIMIT_COUNT_SEALED_TITLE"*/, v8);
    byte_4BCB52A = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v20, 0LL);
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[11].monitor;
  if ( !v12 )
    goto LABEL_14;
  v13 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v12[6], 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8416/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v19 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1C1AE20(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v19,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !v16 )
LABEL_14:
    sub_1C1AE30(this, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  bool v20; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  struct UserServantEntity_o *v26; // x8
  __int64 v27; // x21
  __int64 v28; // x22
  int32_t v29; // w0
  struct UserServantEntity_o *v30; // x8
  int32_t v31; // w21
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w0
  int32_t v35; // w22
  int32_t v36; // w23
  const MethodInfo *v37; // x3
  Il2CppObject *NameFromMessageId; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v40; // x0
  System_String_o *v41; // x22
  System_String_o *v42; // x0
  System_String_o *v43; // x21
  System_Action_o *v44; // x23
  int v45; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4BCB527 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&ServantCharaGraphEXOpenManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__DisplayClass169_0__OpenNotification_b__0__, v7);
    sub_1C1ABD4(&CombineResultEffectComponent___c__DisplayClass169_0_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_11758/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v9);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v10);
    byte_4BCB527 = 1;
  }
  v11 = sub_1C1AE20(CombineResultEffectComponent___c__DisplayClass169_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass169_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass169_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_28;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v20 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v25 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v24 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v46.fields.currentCryptoKey = v25;
      *(_QWORD *)&v46.fields.fakeValue = v24;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v46, 0LL);
      *(_DWORD *)(v11 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v11 + 24) = this->fields.costumeId;
      v26 = this->fields.resUsrSvtData;
      if ( v26 )
      {
        v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v47.fields.currentCryptoKey = v28;
        *(_QWORD *)&v47.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v47, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v29, *(_DWORD *)(v11 + 24), 0LL);
        v45 = AscensionAfterDialogId;
        if ( (_DWORD)AscensionAfterDialogId == -1 )
          return 0;
        v30 = this->fields.resUsrSvtData;
        if ( v30 )
        {
          v31 = AscensionAfterDialogId;
          v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = v33;
          *(_QWORD *)&v48.fields.fakeValue = v32;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v48, 0LL);
          v35 = *(_DWORD *)(v11 + 24);
          v36 = v34;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v36, v35, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v31,
                                                *(_DWORD *)(v11 + 24),
                                                v37);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v40 = System_Int32__ToString((int32_t)&v45, 0LL);
          v41 = System_String__Concat_63040368((System_String_o *)StringLiteral_11758/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v40, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v42 = LocalizationManager__Get(v41, 0LL);
          v43 = System_String__Format(v42, NameFromMessageId, 0LL);
          v44 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v11,
            Method_CombineResultEffectComponent___c__DisplayClass169_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v20 = 1;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v43,
              v44,
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
            return v20;
          }
        }
      }
    }
LABEL_28:
    sub_1C1AE30(AscensionAfterDialogId, v13);
  }
  return v20;
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

  if ( (byte_4BCB517 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, performance);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v7);
    byte_4BCB517 = 1;
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
                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
      sub_1C1AE30(IsNullOrEmpty, v9);
    }
  }
  else
  {
    ActionExtensions__Call(playEndAction, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__PlayVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CombineResultEffectComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v15; // x8
  int64_t id; // x1
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  int32_t m_CancellationTokenSource_high; // w21
  int32_t friendshipExceedResultWindow; // w20
  float FadeTime; // s0
  System_Collections_Generic_IEnumerable_TSource__o *currentFigureCollectList; // x0
  float v23; // s8
  int32_t v24; // w2
  ServantVoiceData_array *v25; // x3
  const MethodInfo *v26; // x6
  System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x4
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v31; // x22
  SePlayer_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct ServantVoiceData_array *v39; // x8
  __int64 v40; // x9
  ServantVoicePerformance_ServantVoicePerformanceDetail_o *StartPerformance; // x0
  const MethodInfo *v42; // x3

  v8 = this;
  if ( (byte_4BCB516 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_EndPlay__, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v10);
    this = (CombineResultEffectComponent_o *)sub_1C1ABD4(&SoundManager_TypeInfo, v11);
    byte_4BCB516 = 1;
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
      v15 = playVoiceList->m_Items[playCnt];
      if ( !v15 )
        goto LABEL_26;
      id = (int64_t)v15->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      v17 = v8->fields.playVoiceList;
      if ( !v17 )
        goto LABEL_26;
      v18 = v8->fields.playCnt;
      if ( (unsigned int)v18 < v17->max_length )
      {
        this = (CombineResultEffectComponent_o *)v17->m_Items[v18];
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
        friendshipExceedResultWindow = (int32_t)this->fields.friendshipExceedResultWindow;
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
        currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.currentFigureCollectList;
        if ( currentFigureCollectList )
        {
          v23 = FadeTime;
          if ( System_Linq_Enumerable__Any_object_(
                 currentFigureCollectList,
                 (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
          {
            if ( System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                   (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
              && System_Linq_Enumerable__Any_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                   (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
              v23,
              v24,
              v25,
              afterFigureCollectList,
              friendshipExceedResultWindow,
              v26);
          }
        }
        asstName = v8->fields.asstName;
        vcName = v8->fields.vcName;
        volume = v8->fields.volume;
        v31 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)v8, Method_CombineResultEffectComponent_EndPlay__, 0LL);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        v32 = SoundManager__playVoice_39911060(asstName, vcName, volume, v31, 0, 0LL);
        v8->fields.player = v32;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields.player, (int64_t)v32, v33, v34, v35, v36, v37, v38);
        v39 = v8->fields.playVoiceList;
        if ( !v39 )
          goto LABEL_26;
        v40 = v8->fields.playCnt;
        if ( (unsigned int)v40 < v39->max_length )
        {
          this = (CombineResultEffectComponent_o *)v39->m_Items[v40];
          if ( this )
          {
            StartPerformance = ServantVoiceData__get_StartPerformance((ServantVoiceData_o *)this, 0LL);
            CombineResultEffectComponent__PlayPerformance(v8, StartPerformance, 0LL, v42);
            ++v8->fields.playCnt;
            return;
          }
LABEL_26:
          sub_1C1AE30(this, method);
        }
      }
    }
    sub_1C1AE38(this, method);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *Master_object; // x24
  CommonUI_o *v34; // x22
  Il2CppObject *v35; // x0
  UserServantCollectionEntity_o *v36; // x20
  CommonUI_o *v37; // x22
  ServantStatusDialog_EndDelegate_o *v38; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BCB52D & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_1C1ABD4(&DataManager_TypeInfo, v12);
    sub_1C1ABD4(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__DisplayClass175_0__ProfileChangeDecideAction_b__0__, v16);
    sub_1C1ABD4(&CombineResultEffectComponent___c__DisplayClass175_0_TypeInfo, v17);
    byte_4BCB52D = 1;
  }
  entity = 0LL;
  v18 = sub_1C1AE20(CombineResultEffectComponent___c__DisplayClass175_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass175_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass175_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = finishCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)finishCallback, v27, v28, v29, v30, v31, v32);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v20);
      byte_4BC2585 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v34 )
      {
        CommonUI__maskFadein(v34, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0LL);
          Instance = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( Instance )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 0, 0LL);
            v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v36 = entity;
            v37 = (CommonUI_o *)v35;
            v38 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v38,
              (Il2CppObject *)v18,
              Method_CombineResultEffectComponent___c__DisplayClass175_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v37 )
            {
              CommonUI__OpenServantStatusDialog_31110836(v37, 33, v36, limitCount, v38, 0LL);
              return;
            }
          }
        }
      }
LABEL_25:
      sub_1C1AE30(Instance, v20);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_31099464(Instance, *(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall CombineResultEffectComponent__ReleaseVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4BCB523 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    byte_4BCB523 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1C1AE30(0LL, v10);
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
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  UnityEngine_Component_o *v60; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v62; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x0
  __int64 v67; // x1
  float v68; // s0
  float v69; // s1
  float v70; // s2
  struct System_Int32_array *v71; // x8
  il2cpp_array_size_t max_length; // w9
  int v73; // s11
  int v74; // s12
  float v75; // s9
  float v76; // s10
  float v77; // s8
  UnityEngine_Transform_o *v78; // x0
  __int64 v79; // x1
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v81; // x28
  __int64 v82; // x0
  __int64 v83; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x0
  bool v94; // w20
  UnityEngine_GameObject_o *v95; // x21
  const MethodInfo *v96; // x1
  UnityEngine_GameObject_o *VoiceEffectPrefab; // x0
  UIStandFigureR_o *v98; // x23
  System_Collections_Generic_List_object__o *v99; // x21
  StandFigureCollect_o *v100; // x22
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  float v111; // s8
  struct System_Int32_array *multiFace; // x23
  int32_t masterDataBytes; // w20
  int32_t m_CancellationTokenSource_high; // w21
  struct ServantVoiceData_array *playVoiceList; // x8
  float FadeTime; // s0
  struct ServantVoiceData_array *v117; // x8
  ServantVoiceData_o *v118; // x8
  unsigned __int64 v119; // x22
  bool v120; // [xsp+24h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_object__o v121; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v122; // [xsp+40h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB506 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v9);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v13);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v17);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C1ABD4(&StandFigureCollect_TypeInfo, v20);
    sub_1C1ABD4(&StringLiteral_8575/*"LimitUpResSvtNodeName"*/, v21);
    byte_4BCB506 = 1;
  }
  entity = 0LL;
  memset(&v122, 0, sizeof(v122));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8575/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v25 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v25,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_85;
  v28 = (ServantLimitAddMaster_o *)Instance;
  v30 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v124.fields.currentCryptoKey = v30;
  *(_QWORD *)&v124.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v124, 0LL);
  v31 = this->fields.resUsrSvtData;
  if ( !v31 )
    goto LABEL_85;
  v32 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  *(_QWORD *)&v125.fields.currentCryptoKey = v39;
  *(_QWORD *)&v125.fields.fakeValue = v38;
  v120 = isForceNormalFace;
  v40 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v125, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v40, (int32_t)v40, v37, v41);
  if ( !MasterData_object )
LABEL_85:
    sub_1C1AE30(Instance, v24);
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
                                      (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v121,
      v43,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v122 = v121;
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v122,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v44 )
        break;
      if ( !StandFigureNode )
        sub_1C1AE30(v44, v45);
      current = (SvtMultiPortraitEntity_o *)v122.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_1C1AE30(gameObject, v48);
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
      v60 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1C1AE30(0LL, v53);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (int64_t)current,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      transform = UnityEngine_Component__get_transform(v60, 0LL);
      if ( !transform )
        sub_1C1AE30(0LL, v62);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v64 = UnityEngine_Component__get_transform(v60, 0LL);
        if ( !v64 )
          sub_1C1AE30(0LL, v65);
        *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Transform__get_localPosition(v64, 0LL);
        v71 = current->fields.commonPosition;
        if ( !v71 )
          sub_1C1AE30(v66, v67);
        max_length = v71->max_length;
        if ( !max_length )
          sub_1C1AE38(v66, v67);
        if ( max_length == 1 )
          sub_1C1AE38(v66, v67);
        v74 = v71->m_Items[1];
        v73 = v71->m_Items[2];
        v75 = v68;
        v76 = v69;
        v77 = v70;
        v78 = UnityEngine_Component__get_transform(v60, 0LL);
        if ( !v78 )
          sub_1C1AE30(0LL, v79);
        v126.fields.x = v75 + (float)v74;
        v126.fields.y = v76 + (float)v73;
        v126.fields.z = v77;
        UnityEngine_Transform__set_localPosition(v78, v126, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v60,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v81 = (StandFigureCollect_o *)sub_1C1AE20(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v81, current, (UIStandFigureR_o *)v60, 0LL);
      if ( !afterFigureCollectList )
        sub_1C1AE30(v82, v83);
      items = afterFigureCollectList->fields._items;
      v91 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1C1AE30(v82, v83);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v81,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v93[4] = (Il2CppClass *)v81;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)v81, v84, v85, v86, v87, v88, v89);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v122,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    v94 = v120;
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_85;
    v95 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    VoiceEffectPrefab = CombineResultEffectComponent__GetVoiceEffectPrefab(this, v96);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_39177300(
                                  v95,
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
    v98 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_85;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v99 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v100 = (StandFigureCollect_o *)sub_1C1AE20(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v100, 0LL, v98, 0LL);
    if ( !v99 )
      goto LABEL_85;
    v107 = v99->fields._items;
    v108 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v99->fields._version;
    if ( !v107 )
      goto LABEL_85;
    v109 = v99->fields._size;
    v94 = isForceNormalFace;
    if ( (unsigned int)v109 >= v107->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v99,
        (Il2CppObject *)v100,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
    }
    else
    {
      v110 = &v107->obj.klass + v109;
      v99->fields._size = v109 + 1;
      v110[4] = (Il2CppClass *)v100;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v110 + 4), (int64_t)v100, v101, v102, v103, v104, v105, v106);
    }
  }
  v111 = 0.0;
  if ( v94
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
    v117 = this->fields.playVoiceList;
    if ( !v117 )
      goto LABEL_85;
    if ( !v117->max_length )
LABEL_86:
      sub_1C1AE38(Instance, v24);
    v118 = v117->m_Items[0];
    if ( !v118 )
      goto LABEL_85;
    multiFace = v118->fields.multiFace;
    v111 = FadeTime;
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v119 = 0LL;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v119,
                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        goto LABEL_85;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( multiFace )
      {
        if ( v119 >= multiFace->max_length )
          goto LABEL_86;
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace((UIStandFigureR_o *)Instance, multiFace->m_Items[v119 + 1], 0.0, 0LL);
      }
      else
      {
        if ( !Instance )
          goto LABEL_85;
        UIStandFigureR__SetFace_42273324(
          (UIStandFigureR_o *)Instance,
          m_CancellationTokenSource_high,
          masterDataBytes,
          0LL,
          v111,
          0LL);
      }
      if ( (__int64)++v119 >= System_Linq_Enumerable__Count_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                                (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  CombineRootComponent_c *v28; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_4BCB4F0 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, usrSvtData);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__, v13);
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, v14);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    byte_4BCB4F0 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    *(int64_t *)&currentSkillId,
    currentSkillLv,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v22, v23, v24, v25, v26, v27);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v28 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v28 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v28->static_fields->COMBINE_ASSET_PATH;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v30, 1, 0LL);
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

  if ( (byte_4BCB4FF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3219/*"BaseSvtNodeName"*/, *(_QWORD *)&formId);
    byte_4BCB4FF = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1C1AE30(0LL, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3219/*"BaseSvtNodeName"*/,
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
  if ( (byte_4BCB504 & 1) == 0 )
  {
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1C1ABD4(&StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_4BCB504 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1C1AE30(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/,
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
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  const MethodInfo *v66; // x1
  float v67; // s8
  _DWORD *data; // x23
  int32_t v69; // w20
  unsigned int v70; // w22
  int32_t v71; // w0
  const MethodInfo *v72; // x2
  __int64 *v73; // x8
  __int64 *v74; // x8
  System_String_o *v75; // x20
  UnityEngine_Transform_o *v76; // x0
  UIExtrusionLabel_o *v77; // x20
  System_String_o *v78; // x20
  UnityEngine_Transform_o *v79; // x0
  UIExtrusionLabel_o *v80; // x20
  struct UserServantEntity_o *v81; // x8
  const MethodInfo *v82; // x2
  __int64 *v83; // x20
  __int64 *v84; // x8
  struct ServantVoiceData_array *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
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
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t *v119; // x8
  int64_t v120; // x1
  PartyOrganizationUtility_o *v121; // x0
  System_String_o *v122; // x20
  UnityEngine_Transform_o *v123; // x0
  const MethodInfo *v124; // x1
  const MethodInfo *v125; // x2
  const MethodInfo *v126; // x2
  __int64 v127; // x20
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x2
  const MethodInfo *v130; // x2
  Il2CppObject *v131; // x21
  EventDelegate_Callback_o *v132; // x22
  EventDelegate_o *v133; // x20
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  __int64 v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  __int64 v143; // x8
  const MethodInfo *v144; // x3
  const MethodInfo *v145; // x2
  System_Collections_ICollection_o *v146; // x8
  float FadeTime; // s0
  System_Collections_ICollection_o *v148; // x8
  System_Collections_ICollection_c *klass; // x8
  __int64 v150; // [xsp+0h] [xbp-60h] BYREF
  __int64 v151; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB4F7 & 1) == 0 )
  {
    sub_1C1ABD4(&EventDelegate_Callback_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetCardParam_b__114_0__, v4);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v5);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UILabel___, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v7);
    sub_1C1ABD4(&EventDelegate_TypeInfo, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C1ABD4(&StringLiteral_4868/*"CostumeName"*/, v14);
    sub_1C1ABD4(&StringLiteral_3219/*"BaseSvtNodeName"*/, v15);
    sub_1C1ABD4(&StringLiteral_17544/*"bit_result_120"*/, v16);
    sub_1C1ABD4(&StringLiteral_17551/*"bit_result_extraskill02"*/, v17);
    sub_1C1ABD4(&StringLiteral_17560/*"bit_result_nobledeliverance"*/, v18);
    sub_1C1ABD4(&StringLiteral_12456/*"START_ANIMATION"*/, v19);
    sub_1C1ABD4(&StringLiteral_17548/*"bit_result_command_card_exceed"*/, v20);
    sub_1C1ABD4(&StringLiteral_17557/*"bit_result_limitbreak"*/, v21);
    sub_1C1ABD4(&StringLiteral_17552/*"bit_result_friendship_exceed"*/, v22);
    sub_1C1ABD4(&StringLiteral_11530/*"ResMaxLvExceedNodeName"*/, v23);
    sub_1C1ABD4(&StringLiteral_17565/*"bit_result_skillrank"*/, v24);
    sub_1C1ABD4(&StringLiteral_17555/*"bit_result_grail_02"*/, v25);
    sub_1C1ABD4(&StringLiteral_17566/*"bit_result_skillup"*/, v26);
    sub_1C1ABD4(&StringLiteral_5015/*"CrtMaxLvExceedNodeName"*/, v27);
    sub_1C1ABD4(&StringLiteral_17561/*"bit_result_powerup"*/, v28);
    sub_1C1ABD4(&StringLiteral_13189/*"StartAnimationName"*/, v29);
    sub_1C1ABD4(&StringLiteral_17554/*"bit_result_grail_01"*/, v30);
    sub_1C1ABD4(&StringLiteral_17550/*"bit_result_extraskill01"*/, v31);
    sub_1C1ABD4(&StringLiteral_17564/*"bit_result_skilldeliverance"*/, v32);
    sub_1C1ABD4(&StringLiteral_5016/*"CrtMaxLvNodeName"*/, v33);
    sub_1C1ABD4(&StringLiteral_11531/*"ResMaxLvNodeName"*/, v34);
    sub_1C1ABD4(&StringLiteral_13339/*"SvtEqCardScale"*/, v35);
    byte_4BCB4F7 = 1;
  }
  v150 = 0LL;
  v151 = 0LL;
  switch ( this->fields.kind )
  {
    case 0:
      CombineResultEffectComponent__SetLevelUpSvtFigure(this, method);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      SvtCombineResultWindowComponent__setBefResultState(
        (SvtCombineResultWindowComponent_o *)svtResultInfoWindow,
        this->fields.baseUsrSvtData,
        0LL);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)svtResultInfoWindow,
        this->fields.combineStatusDisp,
        0LL);
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = UserServantEntity__isLevelMax((UserServantEntity_o *)svtResultInfoWindow, 0LL);
      if ( (svtResultInfoWindow & 1) == 0 )
        goto LABEL_116;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_171;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_171;
      if ( baseUsrSvtData->fields.exp == resUsrSvtData->fields.exp )
LABEL_116:
        LODWORD(method) = this->fields.successInfo;
      else
LABEL_91:
        LODWORD(method) = 4;
      goto LABEL_134;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_5016/*"CrtMaxLvNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_171;
      v37 = (System_String_o *)svtResultInfoWindow;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(transform, v37, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_171;
      v39 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v151) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v151 + 4, 0LL);
      if ( !v39 )
        goto LABEL_171;
      UIExtrusionLabel__set_text(v39, (System_String_o *)svtResultInfoWindow, 0LL);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_11531/*"ResMaxLvNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_171;
      v40 = (System_String_o *)svtResultInfoWindow;
      v41 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v41, v40, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_171;
      v42 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v151) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v151, 0LL);
      if ( !v42 )
        goto LABEL_171;
      UIExtrusionLabel__set_text(v42, (System_String_o *)svtResultInfoWindow, 0LL);
      v43 = this->fields.baseUsrSvtData;
      if ( !v43 )
        goto LABEL_171;
      v45 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
      v44 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v152.fields.currentCryptoKey = v45;
      *(_QWORD *)&v152.fields.fakeValue = v44;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v152, 0LL);
      v46 = this->fields.baseUsrSvtData;
      if ( !v46 )
        goto LABEL_171;
      v47 = svtResultInfoWindow;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v46->fields.limitCount, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      svtResultInfoWindow = ImageLimitCount__GetImageLimitCount(v47, v48, 0LL);
      v49 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = svtResultInfoWindow;
      if ( !v49 )
        goto LABEL_171;
      svtResultInfoWindow = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v49->fields.svtId, 0LL);
      v50 = this->fields.resUsrSvtData;
      if ( !v50 )
        goto LABEL_171;
      v51 = svtResultInfoWindow;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v50->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v51, v52, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v57 = resSvtNameData != 0LL;
      if ( isLimitUpSuppression )
        goto LABEL_27;
      if ( this->fields.oldImgLimitCnt != ImageLimitCount )
        goto LABEL_69;
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtResultInfoWindow, 0LL) )
      {
LABEL_27:
        this->fields.isChangeCardImg = 0;
        LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v54);
        p_playVoiceList = (System_Collections_ICollection_o **)&this->fields.playVoiceList;
        this->fields.playVoiceList = LimitUpSvtVoiceList;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.playVoiceList,
          (int64_t)LimitUpSvtVoiceList,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
        CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v66);
        v67 = 0.0;
        if ( this->fields.isLimitUpSuppression
          || (svtResultInfoWindow = BasicHelper__IsNullOrEmpty(*p_playVoiceList, 0LL), (svtResultInfoWindow & 1) != 0) )
        {
          data = 0LL;
          v69 = 0;
          v70 = 0;
        }
        else
        {
          v146 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_171;
          if ( !LODWORD(v146[1].monitor) )
            goto LABEL_172;
          svtResultInfoWindow = (__int64)v146[2].klass;
          if ( !svtResultInfoWindow )
            goto LABEL_171;
          v70 = *(_DWORD *)(svtResultInfoWindow + 28);
          v69 = *(_DWORD *)(svtResultInfoWindow + 56);
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)svtResultInfoWindow, 0LL);
          v148 = *p_playVoiceList;
          if ( !*p_playVoiceList )
            goto LABEL_171;
          if ( !LODWORD(v148[1].monitor) )
LABEL_172:
            sub_1C1AE38(svtResultInfoWindow, method);
          klass = v148[2].klass;
          if ( !klass )
            goto LABEL_171;
          data = klass->_1.byval_arg.data;
          v67 = FadeTime;
        }
        v71 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( data )
        {
          method = (const MethodInfo *)(&dword_0 + 1);
          if ( v71 != *(_DWORD *)((char *)&off_18 + (_QWORD)data) || v71 <= 0 )
            goto LABEL_134;
        }
        else if ( v71 < 1 )
        {
LABEL_133:
          LODWORD(method) = 1;
          goto LABEL_134;
        }
        v96 = 0LL;
        if ( v71 <= 1 )
          v97 = 1LL;
        else
          v97 = (unsigned int)v71;
        while ( 1 )
        {
          svtResultInfoWindow = (__int64)this->fields.currentFigureCollectList;
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = (__int64)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                                           v96,
                                           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !svtResultInfoWindow )
            break;
          svtResultInfoWindow = *(_QWORD *)(svtResultInfoWindow + 24);
          if ( data )
          {
            if ( v96 >= *(unsigned int *)((char *)&off_18 + (_QWORD)data) )
              goto LABEL_172;
            if ( !svtResultInfoWindow )
              break;
            LODWORD(method) = data[v96 + 8];
          }
          else
          {
            method = (const MethodInfo *)v70;
            if ( !svtResultInfoWindow )
              break;
          }
          UIStandFigureR__SetFace_42273324((UIStandFigureR_o *)svtResultInfoWindow, (int32_t)method, v69, 0LL, v67, 0LL);
          if ( v97 == ++v96 )
            goto LABEL_133;
        }
LABEL_171:
        sub_1C1AE30(svtResultInfoWindow, method);
      }
LABEL_69:
      this->fields.isChangeCardImg = 1;
      v85 = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v54);
      this->fields.playVoiceList = v85;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.playVoiceList, (int64_t)v85, v86, v87, v88, v89, v90, v91);
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, v92);
      CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v93);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, v57, v94);
      CombineResultEffectComponent__setResultSvtGraphCard(this, v57, v95);
      LODWORD(method) = 2;
LABEL_134:
      svtResultInfoWindow = (__int64)CombineResultEffectComponent__GetStartAnimationName(this, (int32_t)method, v72);
      if ( !this->fields.fsm )
        goto LABEL_171;
      v127 = svtResultInfoWindow;
      svtResultInfoWindow = (__int64)this->fields.fsm;
LABEL_165:
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      *(_QWORD *)(svtResultInfoWindow + 56) = v127;
      v121 = (PartyOrganizationUtility_o *)(svtResultInfoWindow + 56);
      v120 = v127;
LABEL_168:
      sub_1C1AB78(v121, v120, v113, v114, v115, v116, v117, v118);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtResultInfoWindow, (System_String_o *)StringLiteral_12456/*"START_ANIMATION"*/, 0LL);
      return;
    case 2:
      v100 = 1;
      v101 = this;
      v102 = (System_String_o *)StringLiteral_17566/*"bit_result_skillup"*/;
      goto LABEL_95;
    case 3:
      v74 = &StringLiteral_17564/*"bit_result_skilldeliverance"*/;
      goto LABEL_94;
    case 4:
      v103 = 1;
      v104 = this;
      v105 = (System_String_o *)StringLiteral_17566/*"bit_result_skillup"*/;
      goto LABEL_99;
    case 5:
      v73 = &StringLiteral_17560/*"bit_result_nobledeliverance"*/;
      goto LABEL_98;
    case 6:
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_3219/*"BaseSvtNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_171;
      v106 = (System_String_o *)svtResultInfoWindow;
      v107 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v107, v106, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_171;
      v108 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13339/*"SvtEqCardScale"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)svtResultInfoWindow, 0LL);
      if ( !v108 )
        goto LABEL_171;
      v110 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v108, 0LL);
      svtResultInfoWindow = (__int64)CharaGraphManager__CreateTexturePrefab_39105696(
                                       gameObject,
                                       this->fields.resUsrSvtData,
                                       10,
                                       0LL,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      v112 = (UnityEngine_Component_o *)svtResultInfoWindow;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      v153.fields.z = 0.0;
      v153.fields.x = -50.0;
      v153.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtResultInfoWindow, v153, 0LL);
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_transform(v112, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      v154.fields.x = v110;
      v154.fields.y = v110;
      v154.fields.z = v110;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)svtResultInfoWindow, v154, 0LL);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 1, 0LL);
      svtResultInfoWindow = (__int64)this->fields.svtResultInfoWindow;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      SvtCombineResultWindowComponent__setBefSvtEqResultState(
        (SvtCombineResultWindowComponent_o *)svtResultInfoWindow,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        this->fields.normalExp,
        this->fields.addTotalExp,
        0LL);
      svtResultInfoWindow = (__int64)this->fields.resUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtResultInfoWindow, 0LL) )
        goto LABEL_116;
      goto LABEL_91;
    case 7:
    case 0x15:
      v74 = &StringLiteral_17565/*"bit_result_skillrank"*/;
LABEL_94:
      v102 = (System_String_o *)*v74;
      v101 = this;
      v100 = 0;
LABEL_95:
      CombineResultEffectComponent__SetCardParam_Skill(v101, v102, v100, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v73 = &StringLiteral_17565/*"bit_result_skillrank"*/;
LABEL_98:
      v105 = (System_String_o *)*v73;
      v104 = this;
      v103 = 0;
LABEL_99:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v104, v105, v103, v2);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      v119 = &StringLiteral_17566/*"bit_result_skillup"*/;
      goto LABEL_125;
    case 0xB:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      v119 = &StringLiteral_17561/*"bit_result_powerup"*/;
LABEL_125:
      v120 = *v119;
      *(_QWORD *)(svtResultInfoWindow + 56) = *v119;
      v121 = (PartyOrganizationUtility_o *)(svtResultInfoWindow + 56);
      goto LABEL_168;
    case 0xC:
    case 0x16:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 2, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_5015/*"CrtMaxLvExceedNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_171;
      v75 = (System_String_o *)svtResultInfoWindow;
      v76 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v76, v75, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_171;
      v77 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      HIDWORD(v150) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v150 + 4, 0LL);
      if ( !v77 )
        goto LABEL_171;
      UIExtrusionLabel__set_text(v77, (System_String_o *)svtResultInfoWindow, 0LL);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_11530/*"ResMaxLvExceedNodeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_171;
      v78 = (System_String_o *)svtResultInfoWindow;
      v79 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v79, v78, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_171;
      v80 = (UIExtrusionLabel_o *)svtResultInfoWindow;
      LODWORD(v150) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      svtResultInfoWindow = (__int64)System_Int32__ToString((int32_t)&v150, 0LL);
      if ( !v80 )
        goto LABEL_171;
      UIExtrusionLabel__set_text(v80, (System_String_o *)svtResultInfoWindow, 0LL);
      svtResultInfoWindow = (__int64)this->fields.baseUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      if ( *(_DWORD *)(svtResultInfoWindow + 296) )
        goto LABEL_55;
      v81 = this->fields.resUsrSvtData;
      if ( !v81 )
        goto LABEL_171;
      if ( v81->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_55:
      svtResultInfoWindow = UserServantEntity__getFrameType((UserServantEntity_o *)svtResultInfoWindow, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_171;
      if ( (_DWORD)svtResultInfoWindow != UserServantEntity__getFrameType(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      svtResultInfoWindow = (__int64)this->fields.baseUsrSvtData;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = UserServantEntity__getRarityIcon((UserServantEntity_o *)svtResultInfoWindow, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_171;
      if ( (_DWORD)svtResultInfoWindow != UserServantEntity__getRarityIcon(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        v83 = &StringLiteral_17557/*"bit_result_limitbreak"*/;
      }
      else
      {
        if ( !this->fields.isChangeCardImg )
        {
          v83 = &StringLiteral_17554/*"bit_result_grail_01"*/;
LABEL_150:
          svtResultInfoWindow = (__int64)this->fields.fsm;
          if ( svtResultInfoWindow )
          {
            v127 = *v83;
            goto LABEL_165;
          }
          goto LABEL_171;
        }
        v83 = &StringLiteral_17555/*"bit_result_grail_02"*/;
      }
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v82);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v145);
      goto LABEL_150;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      v84 = &StringLiteral_17552/*"bit_result_friendship_exceed"*/;
      goto LABEL_164;
    case 0xF:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)svtResultInfoWindow, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                       (HutongGames_PlayMaker_FsmVariables_o *)svtResultInfoWindow,
                                       (System_String_o *)StringLiteral_4868/*"CostumeName"*/,
                                       0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)HutongGames_PlayMaker_FsmString__get_Value(
                                       (HutongGames_PlayMaker_FsmString_o *)svtResultInfoWindow,
                                       0LL);
      if ( !this->fields.effect )
        goto LABEL_171;
      v122 = (System_String_o *)svtResultInfoWindow;
      v123 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      svtResultInfoWindow = (__int64)TransformHelper__getNodeFromName(v123, v122, 1, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      svtResultInfoWindow = (__int64)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)svtResultInfoWindow,
                                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      UILabel__set_text((UILabel_o *)svtResultInfoWindow, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v124);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v125);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v126);
      goto LABEL_133;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      v84 = &StringLiteral_17548/*"bit_result_command_card_exceed"*/;
      goto LABEL_164;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v128);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v129);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v130);
      svtResultInfoWindow = (__int64)this->fields.fsm;
      if ( !svtResultInfoWindow )
        goto LABEL_171;
      v84 = &StringLiteral_17544/*"bit_result_120"*/;
LABEL_164:
      v127 = *v84;
      goto LABEL_165;
    case 0x19:
      svtResultInfoWindow = (__int64)this->fields.effect;
      if ( svtResultInfoWindow )
      {
        svtResultInfoWindow = (__int64)UnityEngine_GameObject__get_gameObject(
                                         (UnityEngine_GameObject_o *)svtResultInfoWindow,
                                         0LL);
        if ( svtResultInfoWindow )
        {
          v131 = UnityEngine_GameObject__AddComponent_object_(
                   (UnityEngine_GameObject_o *)svtResultInfoWindow,
                   (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
          v132 = (EventDelegate_Callback_o *)sub_1C1AE20(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v132,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_b__114_0__,
            0LL);
          v133 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
          EventDelegate___ctor_47893424(v133, v132, 0LL);
          if ( v131 )
          {
            svtResultInfoWindow = (__int64)v131[2].klass;
            if ( svtResultInfoWindow )
            {
              v140 = *(_QWORD *)(svtResultInfoWindow + 16);
              v141 = Method_System_Collections_Generic_List_EventDelegate__Add__;
              ++*(_DWORD *)(svtResultInfoWindow + 28);
              if ( v140 )
              {
                v142 = *(int *)(svtResultInfoWindow + 24);
                if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)svtResultInfoWindow,
                    (Il2CppObject *)v133,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
                }
                else
                {
                  v143 = v140 + 8 * v142;
                  *(_DWORD *)(svtResultInfoWindow + 24) = v142 + 1;
                  *(_QWORD *)(v143 + 32) = v133;
                  sub_1C1AB78(
                    (PartyOrganizationUtility_o *)(v143 + 32),
                    (int64_t)v133,
                    v134,
                    v135,
                    v136,
                    v137,
                    v138,
                    v139);
                }
                CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v144);
                svtResultInfoWindow = (__int64)this->fields.fsm;
                v84 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17551/*"bit_result_extraskill02"*/ : &StringLiteral_17550/*"bit_result_extraskill01"*/);
                if ( svtResultInfoWindow )
                  goto LABEL_164;
              }
            }
          }
        }
      }
      goto LABEL_171;
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BCB4FA & 1) == 0 )
  {
    sub_1C1ABD4(&EventDelegate_Callback_TypeInfo, startName);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__117_0__, v7);
    sub_1C1ABD4(&EventDelegate_TypeInfo, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1C1ABD4(&StringLiteral_12456/*"START_ANIMATION"*/, v11);
    sub_1C1ABD4(&StringLiteral_13189/*"StartAnimationName"*/, v12);
    byte_4BCB4FA = 1;
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
            (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v16 = (EventDelegate_Callback_o *)sub_1C1AE20(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v16,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__117_0__,
      0LL);
    v17 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
    EventDelegate___ctor_47893424(v17, v16, 0LL);
    if ( !v15
      || (effect = (int *)v15[2].klass) == 0LL
      || (v24 = *((_QWORD *)effect + 2),
          v25 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v24) )
    {
LABEL_17:
      sub_1C1AE30(effect, v13);
    }
    v26 = effect[6];
    if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v17,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = v24 + 8 * v26;
      effect[6] = v26 + 1;
      *(_QWORD *)(v27 + 32) = v17;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v17, v18, v19, v20, v21, v22, v23);
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
                    (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                    0LL);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1C1AB78((PartyOrganizationUtility_o *)(effect + 14), (int64_t)startName, v28, v29, v30, v31, v32, v33);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12456/*"START_ANIMATION"*/, 0LL);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4BCB4FB & 1) == 0 )
  {
    sub_1C1ABD4(&EventDelegate_Callback_TypeInfo, startName);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__118_0__, v7);
    sub_1C1ABD4(&EventDelegate_TypeInfo, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1C1ABD4(&StringLiteral_12456/*"START_ANIMATION"*/, v11);
    sub_1C1ABD4(&StringLiteral_13189/*"StartAnimationName"*/, v12);
    byte_4BCB4FB = 1;
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
            (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v15 = (EventDelegate_Callback_o *)sub_1C1AE20(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__118_0__,
      0LL);
    v16 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
    EventDelegate___ctor_47893424(v16, v15, 0LL);
    if ( !v14 )
      goto LABEL_20;
    effect = (int *)v14[2].klass;
    if ( !effect )
      goto LABEL_20;
    v23 = *((_QWORD *)effect + 2);
    v24 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++effect[7];
    if ( !v23 )
      goto LABEL_20;
    v25 = effect[6];
    if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v16,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * v25;
      effect[6] = v25 + 1;
      *(_QWORD *)(v26 + 32) = v16;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v16, v17, v18, v19, v20, v21, v22);
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
                          (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                          0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_1C1AB78((PartyOrganizationUtility_o *)(effect + 14), (int64_t)startName, v27, v28, v29, v30, v31, v32),
        (effect = (int *)this->fields.fsm) == 0LL) )
  {
LABEL_20:
    sub_1C1AE30(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12456/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetCombineLimit(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        bool autoFadeout,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  char v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  char v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  CombineRootComponent_c *v30; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v32; // x21

  if ( (byte_4BCB4F3 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, baseData);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__, v12);
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, v13);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_4BCB4F3 = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    (int64_t)callback,
    autoFadeout,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v22, v23, v24, v25, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C1AE30(gameObject, v29);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v30 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v30 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v30->static_fields->EXCEED_ASSET_PATH;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v32, 1, 0LL);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  AssetData_o *effectAssetData; // x0
  __int64 v32; // x1
  CombineRootComponent_c *v33; // x0
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *v35; // x20
  UnityEngine_Transform_o *v36; // x21

  if ( (byte_4BCB4ED & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, userServantEntity);
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, v13);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v15);
    sub_1C1ABD4(&StringLiteral_17548/*"bit_result_command_card_exceed"*/, v16);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v17);
    sub_1C1ABD4(&StringLiteral_12461/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v18);
    byte_4BCB4ED = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)userServantEntity,
    *(int64_t *)&cardIndex,
    exceedCount,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v19, v20, v21, v22, v23, v24);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  if ( !userServantEntity )
    goto LABEL_18;
  this->fields.displayCount = UserServantEntity__GetTransformCount(userServantEntity, 0, 0LL);
  v33 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v33 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v33->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_18;
  Object_object__49812820 = AssetData__GetObject_object__49812820(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17548/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49812820,
                                     (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v35 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v36 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4BC2146 )
  {
    effectAssetData = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v32);
    byte_4BC2146 = 1;
  }
  if ( !v36
    || (UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v35,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_18:
    sub_1C1AE30(effectAssetData, v32);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12461/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v41; // x1
  System_Action_o *v42; // x20
  CombineResultEffectComponent_o *v43; // x0
  const MethodInfo *v44; // x2

  if ( (byte_4BCB4E7 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, userSvtEntity);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__98_0__, v13);
    sub_1C1ABD4(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo, v14);
    byte_4BCB4E7 = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)userSvtEntity,
    *(int64_t *)&costumeId,
    (int32_t)costumeName,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.costumeName,
    (int64_t)costumeName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v21, v22, v23, v24, v25, v26);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.setResUsrSvtData = 0;
  v33 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C1AE20(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v33, 0LL);
  this->fields.costumeSkillInfoManager = v33;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.costumeSkillInfoManager,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v41);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v42 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCostumeCombineInfo_b__98_0__,
    0LL);
  CombineResultEffectComponent__LoadCombineEffect(v43, v42, v44);
}


void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  CombineRootComponent_c *v30; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_Transform_o *v34; // x21

  if ( (byte_4BCB4EB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, userSvtData);
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, v11);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v13);
    sub_1C1ABD4(&StringLiteral_17552/*"bit_result_friendship_exceed"*/, v14);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v15);
    sub_1C1ABD4(&StringLiteral_12468/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v16);
    byte_4BCB4EB = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)userSvtData,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v17, v18, v19, v20, v21, v22);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.setResUsrSvtData = 0;
  v30 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v30 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v30->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__49812820 = AssetData__GetObject_object__49812820(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17552/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49812820,
                                     (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v33 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v34 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4BC2146 )
  {
    effectAssetData = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v29);
    byte_4BC2146 = 1;
  }
  if ( !v34
    || (UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v33,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_1C1AE30(effectAssetData, v29);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12468/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  CombineRootComponent_c *v30; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v32; // x21

  if ( (byte_4BCB4EC & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, userSvtData);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__, v12);
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, v13);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_4BCB4EC = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)userSvtData,
    *(int64_t *)&oldFriendShipRank,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v16, v17, v18, v19, v20, v21);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v29);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v30 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v30 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v30->static_fields->COMBINE_ASSET_PATH;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v32, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetFriendshipUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1

  if ( (byte_4BCB4E1 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_12467/*"START_FRIENDSHIPUP_EFFECT"*/, usrSvtData);
    byte_4BCB4E1 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    *(int64_t *)&oldFriendShipRank,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v18, v19, v20, v21, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C1AE30(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12467/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
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
  ServantScriptEntity_o *Entity_41041856; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ServantVoiceData_array *v23; // x1
  PartyOrganizationUtility_o *p_playVoiceList; // x0
  const MethodInfo *v25; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v27; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v29; // x0
  const MethodInfo *v30; // x2
  struct UserServantEntity_o *v31; // x8
  CombineResultEffectComponent_o *v32; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *v40; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v42; // x21
  const MethodInfo *v43; // x2
  struct UserServantEntity_o *v44; // x8
  CombineResultEffectComponent_o *v45; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_String_o *v53; // x0
  ServantVoiceEntity_o *v54; // x20
  UserServantEntity_o *v55; // x21
  ServantVoiceData_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int v63; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v2 = this;
  if ( (byte_4BCB501 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantScriptMaster___, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (CombineResultEffectComponent_o *)sub_1C1ABD4(&string___TypeInfo, v6);
    byte_4BCB501 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v9;
  *(_QWORD *)&v64.fields.fakeValue = v8;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v64, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_48;
  v10 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v10, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_41041856 = ServantScriptMaster__GetEntity_41041856((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_41041856 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_41041856, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v2->fields.combineVoiceId;
      method = (const MethodInfo *)v2->fields.baseUsrSvtData;
LABEL_19:
      v16 = ServantVoiceEntity__lotteryLevelUpVoice_41080608(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0LL);
LABEL_20:
      v23 = v16;
      p_playVoiceList = (PartyOrganizationUtility_o *)&v2->fields.playVoiceList;
      v2->fields.playVoiceList = v23;
      goto LABEL_21;
    }
    method = (const MethodInfo *)v2->fields.baseUsrSvtData;
    if ( method )
    {
      v63 = *(_DWORD *)&method[2].slot;
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
        if ( System_Int32__Equals_63845804((int32_t)&v63, resUsrSvtData->fields.lv, 0LL) )
        {
          v29 = v2;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v29, form, 1, v25);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1C1AC7C(string___TypeInfo, 1LL);
        v31 = v2->fields.baseUsrSvtData;
        if ( v31 )
        {
          v32 = this;
          p_svtId = &v31->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v65.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v65.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v65, v30);
          if ( v32 )
          {
            if ( !LODWORD(v32->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v32->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&v32->fields.svtResultInfoWindow,
              (int64_t)this,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            v40 = System_String__Concat_63053896((System_String_array *)v32, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_70752120(v40, 0LL) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v42 = v2->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v16 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v42, 0LL);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1C1AC7C(string___TypeInfo, 1LL);
            v44 = v2->fields.baseUsrSvtData;
            if ( v44 )
            {
              v45 = this;
              v46 = &v44->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v66.fields.currentCryptoKey = v46;
              *(_QWORD *)&v66.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v66, v43);
              if ( v45 )
              {
                if ( !LODWORD(v45->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v45->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1C1AB78(
                  (PartyOrganizationUtility_o *)&v45->fields.svtResultInfoWindow,
                  (int64_t)this,
                  v47,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52);
                v53 = System_String__Concat_63053896((System_String_array *)v45, 0LL);
                UnityEngine_PlayerPrefs__SetInt(v53, 1, 0LL);
                v54 = v2->fields.svtVoiceEntity;
                v55 = v2->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v56 = CombineResultFormManager__lotteryCombineResultInit(v54, v55, 0LL);
                v2->fields.playVoiceList = v56;
                sub_1C1AB78(
                  (PartyOrganizationUtility_o *)&v2->fields.playVoiceList,
                  (int64_t)v56,
                  v57,
                  v58,
                  v59,
                  v60,
                  v61,
                  v62);
                playVoiceList = v2->fields.playVoiceList;
                if ( playVoiceList )
                {
LABEL_22:
                  if ( playVoiceList->max_length )
                  {
                    v27 = playVoiceList->m_Items[0];
                    if ( !v27 )
                      goto LABEL_48;
                    form = v27->fields.form;
                    v29 = v2;
                    goto LABEL_25;
                  }
LABEL_49:
                  sub_1C1AE38(this, method);
                }
                this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v23 = ServantVoiceEntity__lotteryLevelUpVoice_41080608(
                        (ServantVoiceEntity_o *)this,
                        v2->fields.baseUsrSvtData,
                        v2->fields.combineVoiceId,
                        0LL);
                v2->fields.playVoiceList = v23;
                p_playVoiceList = (PartyOrganizationUtility_o *)&v2->fields.playVoiceList;
LABEL_21:
                sub_1C1AB78(p_playVoiceList, (int64_t)v23, v17, v18, v19, v20, v21, v22);
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
    sub_1C1AE30(this, method);
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

  if ( (byte_4BCB507 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&StringLiteral_8575/*"LimitUpResSvtNodeName"*/, v8);
    byte_4BCB507 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v11 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !*((_DWORD *)LimitUpSvtVoiceList + 6) )
      sub_1C1AE38(LimitUpSvtVoiceList, v10);
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
  LimitUpSvtVoiceList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v23, 0LL);
  v16 = this->fields.resUsrSvtData;
  if ( !v16 )
    goto LABEL_21;
  v17 = (int)LimitUpSvtVoiceList;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v16->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = DataManager__GetMasterData_object_(
                          (DataManager_o *)LimitUpSvtVoiceList,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v17, v18, 0LL) )
    goto LABEL_18;
  LimitUpSvtVoiceList = entity;
  if ( !entity )
LABEL_21:
    sub_1C1AE30(LimitUpSvtVoiceList, v10);
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
    (System_String_o *)StringLiteral_8575/*"LimitUpResSvtNodeName"*/,
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v54; // x1
  __int64 v55; // x21
  __int64 v56; // x22
  int32_t v57; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v59; // x8
  ServantLimitImageMaster_o *v60; // x20
  System_Action_o *v61; // x20
  CombineResultEffectComponent_o *v62; // x0
  const MethodInfo *v63; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_4BCB4E5 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__95_0__, v19);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v20);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BCB4E5 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    (int64_t)baseData,
    baseCollectionLimitCnt,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)servantChange,
    (FollowerInfo_o *)autoFadeout,
    *(PartyListViewItem_o **)&displayType);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.resSvtNameData,
    (int64_t)servantChange,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v35, v36, v37, v38, v39, v40);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.limitUpPlayVoiceLabel,
    (int64_t)playVoiceLabel,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.limitUpRewardGiftDataList,
    (int64_t)rewardGiftDataList,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_12;
  v56 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v55 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v56;
  *(_QWORD *)&v65.fields.fakeValue = v55;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v65, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        v59 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v66.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue,
        v60 = (ServantLimitImageMaster_o *)MasterData_object,
        *(_QWORD *)&v66.fields.currentCryptoKey = v59,
        gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                   v66,
                                                   0LL),
        !v60) )
  {
LABEL_12:
    sub_1C1AE30(gameObject, v54);
  }
  this->fields.isLimitUpSuppression = ServantLimitImageMaster__IsServantLimitCountSeal(
                                        v60,
                                        (int32_t)gameObject,
                                        v57 + 1,
                                        0LL);
  v61 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLimitUpCombineInfo_b__95_0__,
    0LL);
  CombineResultEffectComponent__LoadCombineEffect(v62, v61, v63);
}


void __fastcall CombineResultEffectComponent__SetLvExceedCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t Int_70752120; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  int64_t v36; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *v44; // x0
  const MethodInfo *v45; // x2
  int64_t v46; // x21
  __int64 v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x0
  UserServantEntity_o *v55; // x20
  CombineRootComponent_c *v56; // x0
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *v58; // x20
  UnityEngine_Transform_o *v59; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4BCB4E9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, usrSvtData);
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, v11);
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, v12);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v14);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C1ABD4(&string___TypeInfo, v16);
    sub_1C1ABD4(&StringLiteral_12472/*"START_LVEXCEED_EFFECT"*/, v17);
    sub_1C1ABD4(&StringLiteral_17553/*"bit_result_grail"*/, v18);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v19);
    byte_4BCB4E9 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v27, v28, v29, v30, v31, v32);
  Int_70752120 = sub_1C1AC7C(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v36 = Int_70752120;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v60.fields.fakeValue = 0LL;
  Int_70752120 = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v60, v35);
  if ( !v36 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v36 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v36 + 32) = Int_70752120;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v36 + 32), Int_70752120, v38, v39, v40, v41, v42, v43);
  v44 = System_String__Concat_63053896((System_String_array *)v36, 0LL);
  Int_70752120 = UnityEngine_PlayerPrefs__GetInt_70752120(v44, 0LL);
  if ( (_DWORD)Int_70752120 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_70752120 = sub_1C1AC7C(string___TypeInfo, 1LL);
      if ( *p_baseUsrSvtData )
      {
        v46 = Int_70752120;
        v47 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v47;
        *(_QWORD *)&v61.fields.fakeValue = 0LL;
        Int_70752120 = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v61, v45);
        if ( v46 )
        {
          if ( *(_DWORD *)(v46 + 24) )
          {
            *(_QWORD *)(v46 + 32) = Int_70752120;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v46 + 32), Int_70752120, v48, v49, v50, v51, v52, v53);
            v54 = System_String__Concat_63053896((System_String_array *)v46, 0LL);
            UnityEngine_PlayerPrefs__SetInt(v54, 0, 0LL);
            v55 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v55, 0LL);
            goto LABEL_19;
          }
LABEL_34:
          sub_1C1AE38(Int_70752120, v34);
        }
      }
LABEL_33:
      sub_1C1AE30(Int_70752120, v34);
    }
  }
LABEL_19:
  v56 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v56 = CombineRootComponent_TypeInfo;
  }
  Int_70752120 = (int64_t)v56->static_fields->effectAssetData;
  if ( !Int_70752120 )
    goto LABEL_33;
  Object_object__49812820 = AssetData__GetObject_object__49812820(
                              (AssetData_o *)Int_70752120,
                              (System_String_o *)StringLiteral_17553/*"bit_result_grail"*/,
                              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_70752120 = (int64_t)UnityEngine_Object__Instantiate_object_(
                            Object_object__49812820,
                            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_70752120 )
    goto LABEL_33;
  v58 = (UnityEngine_GameObject_o *)Int_70752120;
  Int_70752120 = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_70752120, 0LL);
  v59 = (UnityEngine_Transform_o *)Int_70752120;
  if ( !byte_4BC2146 )
  {
    Int_70752120 = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v34);
    byte_4BC2146 = 1;
  }
  if ( !v59 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v59, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Int_70752120 = (int64_t)this->fields.fsm;
  if ( !Int_70752120 )
    goto LABEL_33;
  Int_70752120 = (int64_t)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_70752120, 0LL);
  if ( !Int_70752120 )
    goto LABEL_33;
  Int_70752120 = (int64_t)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_70752120,
                            (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                            0LL);
  if ( !Int_70752120 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_70752120, v58, 0LL);
  Int_70752120 = (int64_t)this->fields.fsm;
  if ( !Int_70752120 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_70752120, (System_String_o *)StringLiteral_12472/*"START_LVEXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLvExceedInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Instance; // x0
  __int64 v28; // x1
  CombineRootComponent_c *v29; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  if ( (byte_4BCB4EA & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, usrSvtData);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__, v11);
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, v12);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4BCB4EA = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v21, v22, v23, v24, v25, v26);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v28);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v29 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v29 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v29->static_fields->EXCEED_ASSET_PATH;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v31, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__SetNameRevealInfo(
        CombineResultEffectComponent_o *this,
        ServantChangeEntity_o *before,
        ServantChangeEntity_o *after,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  char *gameObject; // x0
  __int64 v38; // x1
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v41; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v43; // x21
  UnityEngine_Transform_o *v44; // x0
  int *v45; // x21
  System_String_o *v46; // x22
  UnityEngine_Transform_o *v47; // x0
  UnityEngine_ParticleSystem_o *v48; // x22
  float v49; // s0
  const MethodInfo *v50; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v52; // x4
  struct ServantChangeEntity_o *v53; // x8
  int32_t v54; // w3
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x1
  UnityEngine_ParticleSystem_MinMaxCurve_o v62; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v63; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v64; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v66; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v67; // 0:x0.8
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB4E6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, before);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C1ABD4(&StringLiteral_11532/*"ResNameNodeName"*/, v16);
    sub_1C1ABD4(&StringLiteral_12473/*"START_NAME_REVEAL_EFFECT"*/, v17);
    sub_1C1ABD4(&StringLiteral_9539/*"NameRevealCrossFade"*/, v18);
    sub_1C1ABD4(&StringLiteral_5017/*"CrtNameNodeName"*/, v19);
    sub_1C1ABD4(&StringLiteral_17558/*"bit_result_name_reveal"*/, v20);
    sub_1C1ABD4(&StringLiteral_13189/*"StartAnimationName"*/, v21);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v22);
    sub_1C1ABD4(&StringLiteral_9540/*"NameRevealParticleNodeName"*/, v23);
    byte_4BCB4E6 = 1;
  }
  v64 = 0LL;
  m_ParticleSystem = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.crtSvtNameData,
    (int64_t)before,
    (int64_t)after,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resSvtNameData = after;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resSvtNameData, (int64_t)after, v25, v26, v27, v28, v29, v30);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v31, v32, v33, v34, v35, v36);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12473/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_5017/*"CrtNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v41 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v41, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11532/*"ResNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v43 = (System_String_o *)gameObject;
  v44 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v44, v43, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v45 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9540/*"NameRevealParticleNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v46 = (System_String_o *)gameObject;
  v47 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v47, v46, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v48 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v64 = UnityEngine_ParticleSystem__get_shape(v48, 0LL).fields.m_ParticleSystem;
  v49 = (float)((float)v45[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v63, 0, sizeof(v63));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v63, v49, 0LL);
  v66.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v62 = v63;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v66, &v62, 0LL);
  v68.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v67.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v64;
  v68.fields.x = (float)((float)v45[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v68.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v67, v68, 0LL);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v50);
  v53 = this->fields.crtSvtNameData;
  if ( !v53 )
    goto LABEL_40;
  v54 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v53->fields.svtId, v53->fields.limitCount, v54, v52);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_1C1AE30(gameObject, v38);
  }
  v61 = StringLiteral_17558/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17558/*"bit_result_name_reveal"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(gameObject + 56), v61, v55, v56, v57, v58, v59, v60);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9539/*"NameRevealCrossFade"*/,
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  ServantTreasureDeviceAddMaster_o *Master_object; // x0
  __int64 v39; // x1
  ServantTreasureDeviceAddMaster_o *v40; // x22
  __int64 v41; // x25
  __int64 v42; // x26
  int32_t v43; // w25
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x25
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v45; // x26
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  Il2CppObject *v53; // x0
  __int64 v54; // x26
  __int64 v55; // x27
  ServantTreasureDeviceAddMaster_o *v56; // x23
  int32_t v57; // w0
  __int64 v58; // x8
  int32_t v59; // w24
  int32_t v60; // w26
  ServantTreasureDeviceAddEntity_o *EnableEntityBeforeClearQuest; // x23
  __int64 v62; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v64; // x8
  __int64 v65; // x8
  int32_t TransformCount; // w0
  int32_t v67; // w25
  int32_t i; // w26
  TerminalPramsManager_c *v69; // x0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v70; // x28
  int32_t id; // w29
  int32_t v72; // w3
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v73; // x0
  int32_t v74; // w1
  int32_t v75; // w2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v76; // x28
  int32_t v77; // w29
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v78; // x28
  int32_t v79; // w29
  __int64 v80; // x26
  struct System_Int32_array *v81; // x8
  struct System_Int32_array *v82; // x8
  __int64 v83; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  TreasureDvcInfo_o *v86; // [xsp+0h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_4BCB4E0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, *(_QWORD *)&kind);
    sub_1C1ABD4(&DataManager_TypeInfo, v17);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Count_int___, v18);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v19);
    sub_1C1ABD4(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v20);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v22);
    sub_1C1ABD4(&StringLiteral_12474/*"START_NOBLEUP_EFFECT"*/, v23);
    sub_1C1ABD4(&StringLiteral_13679/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v24);
    sub_1C1ABD4(&StringLiteral_13680/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v25);
    byte_4BCB4E0 = 1;
  }
  v86 = 0LL;
  tdInfo = 0LL;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)usrSvtData,
    targetId,
    *(System_String_o **)&targetLv,
    (BattleSetupInfo_o *)callback,
    *(FollowerInfo_o **)&targetIdOld,
    *(PartyListViewItem_o **)&targetLvOld);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v32, v33, v34, v35, v36, v37);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v40 = Master_object;
  v42 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v42;
  *(_QWORD *)&v88.fields.fakeValue = v41;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v88, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                        usrSvtData->fields.limitCount,
                                                        0LL);
  if ( !v40 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v40, v43, (int32_t)Master_object, 0, 0, 0LL);
  v45 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1C1AE20(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v45, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v45;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.npInfoAddManager, (int64_t)v45, v47, v48, v49, v50, v51, v52);
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
      v53 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v55 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v56 = (ServantTreasureDeviceAddMaster_o *)v53;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v89.fields.currentCryptoKey = v55;
      *(_QWORD *)&v89.fields.fakeValue = v54;
      v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v89, 0LL);
      v58 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v90.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v59 = v57;
      *(_QWORD *)&v90.fields.currentCryptoKey = v58;
      v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v90, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BC27F4 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v39);
        byte_4BC27F4 = 1;
      }
      Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v56 )
        goto LABEL_72;
      EnableEntityBeforeClearQuest = ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
                                       v56,
                                       v59,
                                       v60,
                                       *(_DWORD *)&Master_object[2].fields._MasterName_k__BackingField->fields._firstChar,
                                       0LL);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_2FBA0CC *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        if ( EnableEntityBeforeClearQuest )
        {
          v62 = 8LL;
          while ( 1 )
          {
            treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
            if ( !treasureDeviceIds )
              break;
            if ( v62 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&treasureDeviceIds->obj.klass + v62),
              targetLv,
              0,
              0LL);
            v64 = EnableEntity->fields.treasureDeviceIds;
            if ( !v64 )
              break;
            if ( v62 - 8 >= (unsigned __int64)v64->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&v64->obj.klass + v62),
              targetLv,
              0,
              0LL);
            Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                  (const MethodInfo_2FBA0CC *)Method_System_Linq_Enumerable_Count_int___);
            v65 = v62 - 7;
            ++v62;
            if ( v65 >= (int)Master_object )
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
                                                            (const MethodInfo_2FBA0CC *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        v80 = 8LL;
        while ( 1 )
        {
          v81 = EnableEntity->fields.treasureDeviceIds;
          if ( !v81 )
            break;
          if ( v80 - 8 >= (unsigned __int64)v81->max_length )
            goto LABEL_73;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v81->obj.klass + v80),
            targetLvOld,
            0,
            0LL);
          v82 = EnableEntity->fields.treasureDeviceIds;
          if ( !v82 )
            break;
          if ( v80 - 8 >= (unsigned __int64)v82->max_length )
LABEL_73:
            sub_1C1AE38(Master_object, v39);
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v82->obj.klass + v80),
            targetLv,
            0,
            0LL);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_2FBA0CC *)Method_System_Linq_Enumerable_Count_int___);
          v83 = v80 - 7;
          ++v80;
          if ( v83 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1C1AE30(Master_object, v39);
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
      v67 = TransformCount;
      for ( i = 0; v67 != i; ++i )
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
          if ( !byte_4BC27F4 )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v39);
            byte_4BC27F4 = 1;
          }
          v69 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v69 = TerminalPramsManager_TypeInfo;
          }
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                                usrSvtData,
                                                                &v86,
                                                                i,
                                                                v69->static_fields->_QuestId_k__BackingField,
                                                                -1,
                                                                0,
                                                                0LL);
          if ( !v86 )
            goto LABEL_72;
          v70 = *p_npInfoAddManager;
          id = v86->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
          if ( !v70 )
            goto LABEL_72;
          v72 = (int)Master_object;
          v73 = v70;
          v74 = id;
          v75 = targetLv;
        }
        else
        {
          if ( !tdInfo )
            goto LABEL_72;
          v76 = *p_npInfoAddManager;
          v77 = tdInfo->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
          if ( !v76 )
            goto LABEL_72;
          v72 = (int)Master_object;
          v73 = v76;
          v74 = v77;
          v75 = targetLvOld;
        }
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(v73, v74, v75, v72, 0LL);
        if ( !tdInfo )
          goto LABEL_72;
        v78 = *p_npInfoAddManager;
        v79 = tdInfo->fields.id;
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                              usrSvtData,
                                                              i,
                                                              0LL);
        if ( !v78 )
          goto LABEL_72;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          v78,
          v79,
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
                                                        (System_String_o *)StringLiteral_13679/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0LL);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13680/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0LL);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12474/*"START_NOBLEUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetPowerUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1

  if ( (byte_4BCB4E8 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_12477/*"START_POWERUP_EFFECT"*/, usrSvtData);
    byte_4BCB4E8 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v17, v18, v19, v20, v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C1AE30(gameObject, v24);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12477/*"START_POWERUP_EFFECT"*/, 0LL);
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

  if ( (byte_4BCB4F9 & 1) == 0 )
  {
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BCB4F9 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C1AE30(Instance, v6);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UserServantEntity_o *v28; // x8
  __int64 v29; // x21
  __int64 v30; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct UserServantEntity_o *v39; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v40; // x24
  __int64 v41; // x21
  __int64 v42; // x22
  int32_t v43; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // kr00_16
  struct UserServantEntity_o *v45; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v47; // x21
  int32_t v48; // w22
  CombineResultEffectComponent_o *v49; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  UserServantEntity_o *v51; // x20
  UserServantEntity_o *v52; // x21
  PartyOrganizationUtility_o *p_resUsrSvtData; // x19
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  PartyOrganizationUtility_c *klass; // x21
  void *typeMetadataHandle; // x19
  void *generic_class; // x20
  int32_t v63; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  v2 = this;
  if ( (byte_4BCB4F8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    this = (CombineResultEffectComponent_o *)sub_1C1ABD4(&UserServantEntity_TypeInfo, v10);
    byte_4BCB4F8 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_46;
    v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v67.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v66 = v67;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v66, 0LL) < 1 )
    {
      v51 = v2->fields.baseUsrSvtData;
      v52 = (UserServantEntity_o *)sub_1C1AE20(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41414804(v52, v51, 0LL);
      v2->fields.resUsrSvtData = v52;
      p_resUsrSvtData = (PartyOrganizationUtility_o *)&v2->fields.resUsrSvtData;
      sub_1C1AB78(p_resUsrSvtData, (int64_t)v52, v54, v55, v56, v57, v58, v59);
      if ( (LODWORD(p_resUsrSvtData[-1].fields.questUseItemStateList) | 0x10) != 26 )
        return;
      klass = p_resUsrSvtData->klass;
      if ( p_resUsrSvtData->klass )
      {
        generic_class = klass->_1.generic_class;
        typeMetadataHandle = klass->_1.typeMetadataHandle;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v71.fields.currentCryptoKey = generic_class;
        *(_QWORD *)&v71.fields.fakeValue = typeMetadataHandle;
        v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v71, 0LL);
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&klass->_1.generic_class = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                                         v63 + 1,
                                                                                         0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v13 = v2->fields.baseUsrSvtData;
        if ( v13 )
        {
          v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
          v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
          *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v67.fields.fakeValue = v14;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v65 = v67;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                     &v65,
                                                     0LL);
          if ( v15 )
          {
            v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v15,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_324AC20 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v17 = v2->fields.baseUsrSvtData;
              if ( !v17 )
                goto LABEL_46;
              v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
              v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
              *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v67.fields.fakeValue = v18;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v64 = v67;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(
                                                         &v64,
                                                         0LL);
              if ( !v19 )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v19,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_324AC20 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v20 = v2->fields.baseUsrSvtData;
                v21 = (UserServantEntity_o *)sub_1C1AE20(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_41414804(v21, v20, 0LL);
                v2->fields.resUsrSvtData = v21;
                sub_1C1AB78(
                  (PartyOrganizationUtility_o *)&v2->fields.resUsrSvtData,
                  (int64_t)v21,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27);
              }
            }
            if ( v2->fields.kind != 19 )
              return;
            v28 = v2->fields.baseUsrSvtData;
            if ( v28 )
            {
              v30 = *(_QWORD *)&v28->fields.limitCount.fields.currentCryptoKey;
              v29 = *(_QWORD *)&v28->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v69.fields.currentCryptoKey = v30;
              *(_QWORD *)&v69.fields.fakeValue = v29;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                         v69,
                                                         0LL);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v32 = (UserServantEntity_o *)sub_1C1AE20(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_41414804(v32, resUsrSvtData, 0LL);
                v2->fields.resUsrSvtData = v32;
                sub_1C1AB78(
                  (PartyOrganizationUtility_o *)&v2->fields.resUsrSvtData,
                  (int64_t)v32,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38);
                v39 = v2->fields.baseUsrSvtData;
                if ( v39 )
                {
                  v40 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                  v42 = *(_QWORD *)&v39->fields.limitCount.fields.currentCryptoKey;
                  v41 = *(_QWORD *)&v39->fields.limitCount.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v70.fields.currentCryptoKey = v42;
                  *(_QWORD *)&v70.fields.fakeValue = v41;
                  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v70, 0LL);
                  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v43 + 1, 0LL);
                  method = *(const MethodInfo **)&v44.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v44.fields.currentCryptoKey;
                  if ( v40 )
                  {
                    v40[6] = v44;
                    v45 = v2->fields.baseUsrSvtData;
                    if ( v45 )
                    {
                      hp = v45->fields.hp;
                      afterAtk[0] = v45->fields.atk;
                      afterAtk[1] = hp;
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v16 )
                        {
                          v47 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                                     (*v16)[5],
                                                                     0LL);
                          if ( *v16 )
                          {
                            v48 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                                                       (*v16)[6],
                                                                       0LL);
                            if ( v47 )
                            {
                              this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                         v47,
                                                                         v48,
                                                                         (int32_t)this,
                                                                         0LL);
                              if ( this )
                              {
                                v49 = this;
                                this = (CombineResultEffectComponent_o *)v2->fields.combineResStatus;
                                if ( this )
                                {
                                  CheckCombineResStatus__getCombineResStatus(
                                    (CheckCombineResStatus_o *)this,
                                    &afterAtk[1],
                                    afterAtk,
                                    v2->fields.resUsrSvtData,
                                    HIDWORD(v49->fields.m_CancellationTokenSource),
                                    0LL);
                                  v50 = *v16;
                                  if ( *v16 )
                                  {
                                    *(_DWORD *)&v50[16].fields.inited = afterAtk[1];
                                    v50[16].fields.fakeValue = afterAtk[0];
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
    sub_1C1AE30(this, method);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  void *Instance; // x0
  __int64 v38; // x1
  System_Collections_ObjectModel_Collection_T__o *v39; // x26
  System_Collections_Generic_List_object__o *v40; // x23
  int32_t v41; // w27
  int v42; // w8
  Il2CppObject *v43; // x28
  int v44; // w8
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Comparison_T__o *v55; // x24
  Il2CppObject *v56; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int v64; // w20
  BalanceConfig_c *v65; // x0
  TerminalSceneComponent_c *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x1
  int32_t v80; // w24
  const MethodInfo *v81; // x2

  if ( (byte_4BCB4EE & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__, v12);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__, v13);
    sub_1C1ABD4(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v14);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v15);
    sub_1C1ABD4(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__getEntityList__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v21);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v22);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v24);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__, v25);
    sub_1C1ABD4(&CombineResultEffectComponent___c_TypeInfo, v26);
    sub_1C1ABD4(&StringLiteral_12478/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v27);
    sub_1C1ABD4(&StringLiteral_17569/*"bit_result_ultimate_anim"*/, v28);
    sub_1C1ABD4(&StringLiteral_13189/*"StartAnimationName"*/, v29);
    byte_4BCB4EE = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    *(int64_t *)&phase,
    (int32_t)msgCallBack,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.messageCallback = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.messageCallback, 0LL, v31, v32, v33, v34, v35, v36);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  v39 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 5);
  v40 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v39 )
    goto LABEL_57;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v39,
         (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v39,
                   v41,
                   (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        break;
      v42 = *((_DWORD *)Instance + 9);
      v43 = (Il2CppObject *)Instance;
      if ( v42 >= 1 && v42 == questId )
      {
        v44 = *((_DWORD *)Instance + 10);
        if ( v44 < 1 || v44 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v40 )
              break;
            items = v40->fields._items;
            v52 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v40->fields._version;
            if ( !items )
              break;
            size = v40->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v40,
                v43,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &items->obj.klass + size;
              v40->fields._size = size + 1;
              v54[4] = (Il2CppClass *)v43;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v43, v45, v46, v47, v48, v49, v50);
            }
          }
        }
      }
      if ( ++v41 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v39,
                      (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__get_Count__) )
        goto LABEL_20;
    }
LABEL_57:
    sub_1C1AE30(Instance, v38);
  }
LABEL_20:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v55 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v55 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v56 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v55 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      v55,
      v56,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__,
      0LL);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v55;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__105_0, (int64_t)v55, v58, v59, v60, v61, v62, v63);
  }
  if ( !v40 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_56877908(
    v40,
    v55,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v64 = v40->fields._size;
  if ( v64 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v40,
                 0,
                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v65 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v65 = BalanceConfig_TypeInfo;
  }
  if ( !v65->static_fields->CloseSecretTreasureDeviceQuestClear && v40->fields._size >= 1 )
  {
    v80 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v40,
                   v80,
                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_57;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v81) )
        break;
      if ( ++v80 >= v40->fields._size )
        goto LABEL_33;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v40,
                 v80,
                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_33:
  if ( v64 < 1 )
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
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v38);
      byte_4BC2713 = 1;
    }
    v66 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v66 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v66->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_57;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
    this->fields.messageCallback = msgCallBack;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.messageCallback,
      (int64_t)msgCallBack,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_57;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                 0LL);
    if ( !Instance )
      goto LABEL_57;
    v79 = StringLiteral_17569/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17569/*"bit_result_ultimate_anim"*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)((char *)Instance + 56), v79, v73, v74, v75, v76, v77, v78);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_57;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12478/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSecretTreasureDeviceInfoForSvtGet(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  const MethodInfo *v15; // x2
  BalanceConfig_c *v16; // x0
  __int64 v17; // x1
  char *fsm; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1

  if ( (byte_4BCB4EF & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C1ABD4(&StringLiteral_12478/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v11);
    sub_1C1ABD4(&StringLiteral_17569/*"bit_result_ultimate_anim"*/, v12);
    sub_1C1ABD4(&StringLiteral_13189/*"StartAnimationName"*/, v13);
    byte_4BCB4EF = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  if ( v16->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v15) )
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
                          (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v25 = StringLiteral_17569/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17569/*"bit_result_ultimate_anim"*/,
          sub_1C1AB78((PartyOrganizationUtility_o *)(fsm + 56), v25, v19, v20, v21, v22, v23, v24),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_1C1AE30(fsm, v17);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12478/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_4BCB4DF & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&StringLiteral_12480/*"START_SKILLUP_EFFECT"*/, v17);
    sub_1C1ABD4(&StringLiteral_12372/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v18);
    sub_1C1ABD4(&StringLiteral_12373/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v19);
    byte_4BCB4DF = 1;
  }
  this->fields.baseUsrSvtData = usrSvtData;
  this->fields.kind = kind;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)usrSvtData,
    targetId,
    *(System_String_o **)&targetLv,
    (BattleSetupInfo_o *)callback,
    *(FollowerInfo_o **)&targetIdOld,
    *(PartyListViewItem_o **)&targetLvOld);
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v20, v21, v22, v23, v24, v25);
  if ( !usrSvtData )
    goto LABEL_12;
  this->fields.displayCount = UserServantEntity__GetTransformCount(usrSvtData, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.unSummon;
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, kind == 21, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12373/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_1C1AE30(gameObject, v27);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12480/*"START_SKILLUP_EFFECT"*/, 0LL);
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

  if ( (byte_4BCB514 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    byte_4BCB514 = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_42273324(Item, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_1C1AE30(Item, v15);
  }
  v16 = this->fields.playVoiceList;
  if ( !v16 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
LABEL_23:
    sub_1C1AE38(Item, v15);
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
                                         (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_42273324(Item, v23, v24, 0LL, fadeTime, 0LL);
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
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  System_Action_o *v36; // x20
  CombineResultEffectComponent_o *v37; // x0
  const MethodInfo *v38; // x2

  if ( (byte_4BCB4E2 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__92_0__, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_4BCB4E2 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    *(int64_t *)&infoIdx,
    (int32_t)baseData,
    *(System_String_o **)&baseCollectionLv,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.combineVoiceId, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.autoFadeout = 0;
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v28, v29, v30, v31, v32, v33);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C1AE30(gameObject, v35);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v36 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__92_0__, 0LL);
  CombineResultEffectComponent__LoadCombineEffect(v37, v36, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_46279712(
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Action_o *v40; // x20
  CombineResultEffectComponent_o *v41; // x0
  const MethodInfo *v42; // x2

  if ( (byte_4BCB4E3 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetSvtCombineInfo_b__93_0__, v19);
    byte_4BCB4E3 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    *(int64_t *)&infoIdx,
    (int32_t)baseData,
    (System_String_o *)resData,
    *(BattleSetupInfo_o **)&svtId,
    (FollowerInfo_o *)voiceId,
    (PartyListViewItem_o *)statusDisp);
  this->fields.resUsrSvtData = resData;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, (int64_t)resData, v20, v21, v22, v23, v24, v25);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_6;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.combineVoiceId,
    (int64_t)voiceId,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v34, v35, v36, v37, v38, v39);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_6:
    sub_1C1AE30(gameObject, v27);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v40 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_CombineResultEffectComponent__SetSvtCombineInfo_b__93_0__, 0LL);
  CombineResultEffectComponent__LoadCombineEffect(v41, v40, v42);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  System_Action_o *v32; // x20
  CombineResultEffectComponent_o *v33; // x0
  const MethodInfo *v34; // x2

  if ( (byte_4BCB4E4 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__94_0__, v17);
    byte_4BCB4E4 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    *(int64_t *)&infoIdx,
    normalExp,
    *(System_String_o **)&addExp,
    (BattleSetupInfo_o *)baseData,
    *(FollowerInfo_o **)&baseCollectionLv,
    (PartyListViewItem_o *)callback);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v24, v25, v26, v27, v28, v29);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v31);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v32 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetSvtEqCombineInfo_b__94_0__,
    0LL);
  CombineResultEffectComponent__LoadCombineEffect(v33, v32, v34);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v6; // x21

  if ( (byte_4BCB51D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__154_0__, v3);
    byte_4BCB51D = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v6 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__154_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_1C1AE30(bgCollider, method);
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

  if ( (byte_4BCB51B & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__152_0__, v5);
    byte_4BCB51B = 1;
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
    sub_1C1AE38(bgCollider, *(_QWORD *)&index);
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
  v13 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__152_0__, 0LL);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1C1AE30(bgCollider, *(_QWORD *)&index);
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

  if ( (byte_4BCB51C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__153_0__, v5);
    byte_4BCB51C = 1;
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
  v14 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__153_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1C1AE30(bgCollider, *(_QWORD *)&index);
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

  if ( (byte_4BCB51A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__151_0__, v3);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4BCB51A = 1;
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v12, 0LL);
  v11 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__151_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1C1AE30(bgCollider, method);
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

  if ( (byte_4BCB51E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__156_0__, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BCB51E = 1;
  }
  v21 = 0LL;
  tdInfo = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v19, 0LL);
  if ( !v11 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v11,
             bgCollider,
             (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
        v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__156_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1C1AE30(bgCollider, method);
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

  if ( (byte_4BCB515 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_PlayVoice__, v3);
    byte_4BCB515 = 1;
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
      sub_1C1AE38(IsNullOrEmpty, v5);
    IsNullOrEmpty = playVoiceList->m_Items[playCnt];
    if ( !IsNullOrEmpty )
LABEL_8:
      sub_1C1AE30(IsNullOrEmpty, v5);
    v8 = ServantVoiceData__get_BeforePerformance(IsNullOrEmpty, 0LL);
    v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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

  if ( (byte_4BCB53E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__173_1__, v3);
    byte_4BCB53E = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v5 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__173_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_1C1AE30(v6, v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__144_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BCB53C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C1ABD4(&StringLiteral_5581/*"END_LOAD"*/, v3);
    byte_4BCB53C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_1C1AE30(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5581/*"END_LOAD"*/, 0LL);
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

  if ( (byte_4BCB53D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__EndPlayProcess_b__158_2__, v3);
    byte_4BCB53D = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v5 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlayProcess_b__158_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_1C1AE30(v6, v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__167_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C1AE30(this, method);
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

  if ( (byte_4BCB53A & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_5581/*"END_LOAD"*/, method);
    byte_4BCB53A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5581/*"END_LOAD"*/, 0LL);
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
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4BCB538 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, data);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&StringLiteral_12472/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_1C1ABD4(&StringLiteral_17549/*"bit_result_extraskill"*/, v9);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v10);
    byte_4BCB538 = 1;
  }
  if ( data )
  {
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                data,
                                (System_String_o *)StringLiteral_17549/*"bit_result_extraskill"*/,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49812820,
                                              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BC2146 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4BC2146 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1C1AE30(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12472/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x0
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_Transform_o *v25; // x21

  if ( (byte_4BCB539 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, data);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&string___TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v9);
    sub_1C1ABD4(&StringLiteral_12460/*"START_COMBINE_LIMIT"*/, v10);
    sub_1C1ABD4(&StringLiteral_17543/*"bit_result_"*/, v11);
    byte_4BCB539 = 1;
  }
  if ( data )
  {
    v12 = sub_1C1AC7C(string___TypeInfo, 1LL);
    v13 = System_Int32__ToString((int)this + 312, 0LL);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_63040368(
                                              (System_String_o *)StringLiteral_17543/*"bit_result_"*/,
                                              v13,
                                              0LL);
    if ( !v12 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v12 + 24) )
      sub_1C1AE38(transform, v15);
    *(_QWORD *)(v12 + 32) = transform;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)transform, v16, v17, v18, v19, v20, v21);
    v22 = System_String__Concat_63053896((System_String_array *)v12, 0LL);
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                data,
                                v22,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49812820,
                                              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v24 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v25 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BC2146 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v15);
      byte_4BC2146 = 1;
    }
    if ( !v25 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v24, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_19:
      sub_1C1AE30(transform, v15);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12460/*"START_COMBINE_LIMIT"*/, 0LL);
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

  if ( (byte_4BCB535 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_12465/*"START_COSTUME_EFFECT"*/, method);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v4);
    sub_1C1ABD4(&StringLiteral_17567/*"bit_result_skinchange"*/, v5);
    byte_4BCB535 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17567/*"bit_result_skinchange"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v8 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v8, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C1AE30(Effect, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12465/*"START_COSTUME_EFFECT"*/, 0LL);
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
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4BCB537 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, data);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&StringLiteral_17552/*"bit_result_friendship_exceed"*/, v8);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v9);
    sub_1C1ABD4(&StringLiteral_12468/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v10);
    byte_4BCB537 = 1;
  }
  if ( data )
  {
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                data,
                                (System_String_o *)StringLiteral_17552/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49812820,
                                              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BC2146 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4BC2146 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1C1AE30(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12468/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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

  if ( (byte_4BCB534 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17545/*"bit_result_advent"*/, method);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v4);
    sub_1C1ABD4(&StringLiteral_12471/*"START_LIMITUP_EFFECT"*/, v5);
    byte_4BCB534 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17545/*"bit_result_advent"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v8 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v8, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C1AE30(Effect, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12471/*"START_LIMITUP_EFFECT"*/, 0LL);
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
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4BCB536 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, data);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&StringLiteral_12472/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_1C1ABD4(&StringLiteral_17557/*"bit_result_limitbreak"*/, v9);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v10);
    byte_4BCB536 = 1;
  }
  if ( data )
  {
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                data,
                                (System_String_o *)StringLiteral_17557/*"bit_result_limitbreak"*/,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49812820,
                                              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BC2146 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v13);
      byte_4BC2146 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1C1AE30(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12472/*"START_LVEXCEED_EFFECT"*/, 0LL);
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

  if ( (byte_4BCB531 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C1ABD4(&StringLiteral_12482/*"START_SVTCOMBINE_EFFECT"*/, v4);
    sub_1C1ABD4(&StringLiteral_17562/*"bit_result_servant"*/, v5);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v6);
    byte_4BCB531 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17562/*"bit_result_servant"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v9 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v9, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Effect, 0, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C1AE30(Effect, v8);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12482/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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

  if ( (byte_4BCB532 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_12482/*"START_SVTCOMBINE_EFFECT"*/, method);
    sub_1C1ABD4(&StringLiteral_17562/*"bit_result_servant"*/, v4);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v5);
    byte_4BCB532 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17562/*"bit_result_servant"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v8 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v8, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C1AE30(Effect, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12482/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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

  if ( (byte_4BCB533 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_12482/*"START_SVTCOMBINE_EFFECT"*/, method);
    sub_1C1ABD4(&StringLiteral_17562/*"bit_result_servant"*/, v4);
    sub_1C1ABD4(&StringLiteral_11560/*"ResultEffect"*/, v5);
    byte_4BCB533 = 1;
  }
  Effect = (HutongGames_PlayMaker_FsmVariables_o *)CombineResultEffectComponent__GetEffect(
                                                     (System_String_o *)StringLiteral_17562/*"bit_result_servant"*/,
                                                     0LL,
                                                     v2);
  if ( !this->fields.fsm
    || (v8 = (UnityEngine_GameObject_o *)Effect, (Effect = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL)) == 0LL)
    || (Effect = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                           Effect,
                                                           (System_String_o *)StringLiteral_11560/*"ResultEffect"*/,
                                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Effect, v8, 0LL),
        (Effect = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C1AE30(Effect, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Effect, (System_String_o *)StringLiteral_12482/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__154_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C1AE30(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__152_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C1AE30(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C1AE30(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C1AE30(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__156_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C1AE30(0LL, method);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v23; // x22
  __int64 v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UserServantEntity_o *v31; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  CommonUI_o *v45; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v48; // x25
  struct CombineResultEffectComponent_ClickDelegate_o *v49; // x8

  if ( (byte_4BCB53B & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__, v8);
    sub_1C1ABD4(&CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo, v9);
    sub_1C1ABD4(&UserServantEntity_TypeInfo, v10);
    byte_4BCB53B = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70794600(effect, 0LL);
  this->fields.effect = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effect, 0LL, v12, v13, v14, v15, v16, v17);
  CombineResultEffectComponent__Close(this, v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v20);
    byte_4BC2585 = 1;
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
    v23 = EntityDefinitely;
    v24 = sub_1C1AE20(CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo);
    CombineResultEffectComponent___c__DisplayClass143_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass143_2_o *)v24,
      0LL);
    if ( v24 )
    {
      *(_QWORD *)(v24 + 24) = this;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)this, v25, v26, v27, v28, v29, v30);
      v31 = (UserServantEntity_o *)sub_1C1AE20(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41415036(v31, v23, 0LL);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v24 + 16) = callbackFunc;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)callbackFunc, v33, v34, v35, v36, v37, v38);
      this->fields.callbackFunc = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v39, v40, v41, v42, v43, v44);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v31 )
      {
        v45 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v31->fields.treasureDeviceLv1;
        v48 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C1AE20(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v48,
          (Il2CppObject *)v24,
          Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__,
          0LL);
        if ( v45 )
        {
          CommonUI__OpenNobleCombineResult(
            v45,
            18,
            v31,
            targetId,
            treasureDeviceLv1,
            v48,
            this->fields.targetIdOld,
            v31->fields.treasureDeviceLv1,
            0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1C1AE30(Instance, v20);
  }
  v49 = this->fields.callbackFunc;
  if ( v49 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v49->fields.m_target)(
      v49->fields.original_method_info,
      1LL,
      *(_QWORD *)&v49->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C1AE30(this, method);
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

  if ( (byte_4BCB4F1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BCB4F1 = 1;
  }
  svtFlagEntity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_40891028(
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_15:
    sub_1C1AE30(Instance, v8);
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
    sub_1C1AE38(Instance, v8);
  result = 1;
  this->fields.targetId = args->m_Items[2];
  v12 = args->m_Items[1];
LABEL_14:
  this->fields.targetIdOld = v12;
  return result;
}


void __fastcall CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  int32_t kind; // w8
  const MethodInfo *v8; // x2
  int32_t v9; // w20
  int32_t v10; // w0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x1
  int32_t TransformCount; // w0
  int32_t displayCount; // w9
  int32_t v18; // w8
  int32_t v19; // w21
  System_Int32_array *v20; // x20
  int32_t TransformedSameSlotSkillId; // w0
  int32_t v22; // w8
  int32_t v23; // w22
  UserServantEntity_o *baseUsrSvtData; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Action_o *v28; // x24
  int32_t v29; // w0
  int32_t v30; // w9
  int32_t v31; // w8
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  TransformServantInfo_o *v36; // [xsp+30h] [xbp-50h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4BCB524 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_EndDisp__, v3);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_clickNext__, v4);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v5);
    byte_4BCB524 = 1;
  }
  v36 = 0LL;
  transformInfo = 0LL;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_65;
  if ( !UnityEngine_Collider__get_enabled(bgCollider, 0LL) )
    return;
  kind = this->fields.kind;
  if ( kind == 15 )
  {
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, method) )
    {
      CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v8);
      bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
      v9 = this->fields.skillShowIndex + 1;
      this->fields.skillShowIndex = v9;
      if ( bgCollider )
      {
        v10 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
                (CombineResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
                0LL);
        goto LABEL_17;
      }
      goto LABEL_65;
    }
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      if ( this->fields.treasureDeviceEnabled )
      {
        CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, method);
        this->fields.treasureDeviceEnabled = 0;
LABEL_27:
        CombineResultEffectComponent__EndDisp(this, v11);
        return;
      }
      goto LABEL_59;
    }
  }
  if ( (unsigned int)kind <= 0x1B && ((1 << kind) & 0x8000110) != 0 )
  {
    if ( CombineResultEffectComponent__IsShowNextNpInfo(this, method) )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v12);
      bgCollider = (UnityEngine_Collider_o *)this->fields.npInfoAddManager;
      v9 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v9;
      if ( bgCollider )
      {
        v10 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
                (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
                0LL);
LABEL_17:
        if ( v9 < v10 )
          return;
        goto LABEL_27;
      }
      goto LABEL_65;
    }
    kind = this->fields.kind;
  }
  if ( (unsigned int)kind <= 0x1A && ((1 << kind) & 0x4080402) != 0 )
  {
    if ( CombineResultEffectComponent__IsShowLimitUpInfo(this, method) )
    {
      v13 = Method_CombineResultEffectComponent_clickNext__;
      if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C1ABEC(Method_CombineResultEffectComponent_clickNext__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
      CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v15);
      bgCollider = (UnityEngine_Collider_o *)this->fields.limitUpResultCheck;
      if ( bgCollider )
      {
        if ( !LimitUpResultCheckComponent__CheckFinishedResultLimitUp((LimitUpResultCheckComponent_o *)bgCollider, 0LL) )
          return;
        goto LABEL_27;
      }
      goto LABEL_65;
    }
    kind = this->fields.kind;
  }
  if ( kind <= 6 )
  {
    if ( (unsigned int)(kind - 2) >= 2 )
    {
      if ( !kind )
        CombineResultEffectComponent__stopVoice(this, method);
      goto LABEL_59;
    }
LABEL_36:
    if ( this->fields.displayCount < 1 )
      goto LABEL_59;
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    if ( !bgCollider )
      goto LABEL_65;
    TransformCount = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0LL);
    displayCount = this->fields.displayCount;
    v18 = TransformCount;
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    this->fields.displayCount = displayCount - 1;
    if ( !bgCollider )
      goto LABEL_65;
    v19 = v18 - displayCount;
    bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                             (UserServantEntity_o *)bgCollider,
                                             v18 - displayCount,
                                             -1,
                                             -1,
                                             1,
                                             -1,
                                             0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_65;
    v20 = (System_Int32_array *)bgCollider;
    TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                   this->fields.baseUsrSvtData,
                                   this->fields.targetId,
                                   v19 - 1,
                                   v19,
                                   0LL);
    v22 = this->fields.kind;
    this->fields.targetId = TransformedSameSlotSkillId;
    if ( v22 == 7 )
    {
      v23 = TransformedSameSlotSkillId;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BC27F4 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
        byte_4BC27F4 = 1;
      }
      bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !baseUsrSvtData )
        goto LABEL_65;
      this->fields.targetIdOld = UserServantEntity__GetTransformedOldSkillId(
                                   baseUsrSvtData,
                                   v23,
                                   *(_DWORD *)(*(_QWORD *)&bgCollider[7].fields.m_CachedPtr + 20LL),
                                   v19,
                                   0LL);
    }
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    if ( bgCollider )
    {
      UserServantEntity__GetTransformedServantInfo((UserServantEntity_o *)bgCollider, &transformInfo, v19, 0LL);
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v28 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( transformInfo )
      {
        if ( skillResultInfoWindow )
        {
          SkillUpResultWindowComponent__OpenSkillUpResultInfo(
            skillResultInfoWindow,
            targetId,
            targetLv,
            v28,
            this->fields.targetIdOld,
            this->fields.targetLvOld,
            transformInfo->fields.svtId,
            v20,
            this->fields.kind == 3,
            1,
            0,
            transformInfo->fields.titleText,
            0,
            0LL);
          return;
        }
      }
    }
LABEL_65:
    sub_1C1AE30(bgCollider, method);
  }
  if ( kind != 20 )
  {
    if ( kind != 7 )
      goto LABEL_59;
    goto LABEL_36;
  }
  if ( this->fields.displayCount >= 1 )
  {
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    if ( bgCollider )
    {
      v29 = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0LL);
      v30 = this->fields.displayCount;
      v31 = v29;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v30 - 1;
      if ( bgCollider )
      {
        bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                 (UserServantEntity_o *)bgCollider,
                                                 &v36,
                                                 v31 - v30,
                                                 0LL);
        if ( v36 )
        {
          bgCollider = (UnityEngine_Collider_o *)this->fields.commandCardExceedResultWindow;
          if ( bgCollider )
          {
            CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
              (CommandCardExceedResultWindowComponent_o *)bgCollider,
              this->fields.baseUsrSvtData,
              this->fields.commandCardIndex,
              this->fields.commandCardExceedCount,
              v36->fields.svtId,
              v36->fields.titleText,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_65;
  }
LABEL_59:
  v32 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1C1ABEC(Method_CombineResultEffectComponent_clickNext__);
  v33 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0LL);
  if ( this->fields.kind != 24 )
    CombineResultEffectComponent__ReleaseVoiceData(this, v34);
  if ( !CombineResultEffectComponent__OpenNotification(this, v34) )
    CombineResultEffectComponent__FadeoutProcess(this, v35);
}


void __fastcall CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v20; // x21
  __int64 v21; // x22
  int32_t v22; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v24; // x8
  ServantVoiceMaster_o *v25; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4BCB4FD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BCB4FD = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.asstName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.playVoiceList = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.playVoiceList, 0LL, v11, v12, v13, v14, v15, v16);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v21;
  *(_QWORD *)&v41.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v41, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v22, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v24 = this->fields.resUsrSvtData) == 0LL)
    || (v25 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                     v24->fields.limitCount,
                                     0LL),
        !v25) )
  {
LABEL_12:
    sub_1C1AE30(Instance, v18);
  }
  Entity = ServantVoiceMaster__getEntity(v25, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.svtVoiceEntity, (int64_t)Entity, v27, v28, v29, v30, v31, v32);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.asstName,
      (int64_t)VoiceAssetName,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_4BCB511 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    byte_4BCB511 = 1;
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
                                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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

  if ( (byte_4BCB510 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4BCB510 = 1;
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
      sub_1C1AE30(resUsrSvtData, isPlayVoice);
    v13 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v13;
    *(_QWORD *)&v16.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v16, 0LL);
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
                                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int v9; // w22
  int SvtVoiceId; // w21
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  char v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UserServantEntity_o *Master_object; // x0
  __int64 v23; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v25; // x21
  __int64 v26; // x24
  int32_t v27; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v29; // x8
  ServantLimitImageMaster_o *v30; // x23
  __int64 v31; // x24
  __int64 v32; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  int64_t v35; // x2
  char v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x1
  int64_t v43; // x2
  char v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v9 = costumeId;
  SvtVoiceId = voiceId;
  if ( (byte_4BCB4FC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&voiceId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1C1ABD4(&DataManager_TypeInfo, v13);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BCB4FC = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    0LL,
    *(int64_t *)&costumeId,
    isLimitUp,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.playVoiceList = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.playVoiceList, 0LL, v16, v17, v18, v19, v20, v21);
  if ( SvtVoiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_26;
    v26 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v26;
    *(_QWORD *)&v49.fields.fakeValue = v25;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v49, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v27, 0LL);
  }
  if ( v9 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_42343996(Master_object->fields.limitCount, 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0LL);
    v9 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v29 = this->fields.resUsrSvtData;
  if ( !v29 )
    goto LABEL_26;
  v30 = (ServantLimitImageMaster_o *)Master_object;
  v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v32;
  *(_QWORD *)&v50.fields.fakeValue = v31;
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v50, 0LL);
  if ( !v30
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v30,
                                       (int32_t)Master_object,
                                       v9,
                                       0LL),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_26:
    sub_1C1AE30(Master_object, v23);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.svtVoiceEntity, (int64_t)Entity, v35, v36, v37, v38, v39, v40);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.asstName,
      (int64_t)VoiceAssetName,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
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

  if ( (byte_4BCB4FE & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_EndLoad__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_4BCB4FE = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v7 = (SoundManager_o *)Instance;
    v8 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v7 )
      sub_1C1AE30(v9, v10);
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
  if ( (byte_4BCB502 & 1) == 0 )
  {
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1C1ABD4(&StringLiteral_3219/*"BaseSvtNodeName"*/, v4);
    byte_4BCB502 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1C1AE30(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3219/*"BaseSvtNodeName"*/,
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v25; // x19
  UnityEngine_Transform_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB50C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&StringLiteral_4468/*"CardScale"*/, v8);
    sub_1C1ABD4(&StringLiteral_3218/*"BaseSvtCardNodeName"*/, v9);
    byte_4BCB50C = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3218/*"BaseSvtCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4468/*"CardScale"*/,
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v17;
  *(_QWORD *)&v27.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v27, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v20->fields.limitCount, 0LL);
  if ( !v21 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v19, fsm, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  fsm = ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v13 )
    goto LABEL_25;
  v23 = fsm;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_39105820(
                   gameObject,
                   this->fields.baseUsrSvtData,
                   v23,
                   10,
                   0LL,
                   changeNameType,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  v25 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v26 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4BC2141 )
  {
    fsm = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_4BC2141 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v25, 0LL)) == 0) )
  {
LABEL_25:
    sub_1C1AE30(fsm, *(_QWORD *)&changeNameType);
  }
  v28.fields.x = v18;
  v28.fields.y = v18;
  v28.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v28, 0LL);
}


void __fastcall CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v14; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v21; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4BCB50A & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_8575/*"LimitUpResSvtNodeName"*/, v3);
    byte_4BCB50A = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  this->fields.playVoiceList = CostumeSvtVoiceList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceList,
    (int64_t)CostumeSvtVoiceList,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  playVoiceList = this->fields.playVoiceList;
  if ( playVoiceList )
  {
    if ( !playVoiceList->max_length )
      sub_1C1AE38(v11, v12);
    v14 = playVoiceList->m_Items[0];
    if ( !v14 )
LABEL_13:
      sub_1C1AE30(v11, v12);
    face = v14->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v18;
  *(_QWORD *)&v22.fields.fakeValue = v17;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v22, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_13;
  v19 = v11;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v19,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8575/*"LimitUpResSvtNodeName"*/,
    v21);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1C1AE30(0LL, method);
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
  if ( (byte_4BCB505 & 1) == 0 )
  {
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1C1ABD4(&StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_4BCB505 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1C1AE30(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/,
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

  if ( (byte_4BCB50B & 1) == 0 )
  {
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1C1ABD4(&StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/, v7);
    byte_4BCB50B = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1C1AE38(LimitUpSvtVoiceList, v9);
    v10 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v10 )
      sub_1C1AE30(LimitUpSvtVoiceList, v9);
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
    (System_String_o *)StringLiteral_8574/*"LimitUpBaseSvtNodeName"*/,
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Transform_o *v25; // x19
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB50E & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_4468/*"CardScale"*/, *(_QWORD *)&svtId);
    sub_1C1ABD4(&StringLiteral_3218/*"BaseSvtCardNodeName"*/, v9);
    byte_4BCB50E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3218/*"BaseSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_4468/*"CardScale"*/,
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
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.nameRevealCard,
    (int64_t)TexturePrefab,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v25 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4BC2141 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&svtId);
    byte_4BC2141 = 1;
  }
  if ( !v25
    || (UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_18:
    sub_1C1AE30(fsm, *(_QWORD *)&svtId);
  }
  v26.fields.x = v15;
  v26.fields.y = v15;
  v26.fields.z = v15;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v26, 0LL);
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
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB50F & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_4468/*"CardScale"*/, *(_QWORD *)&changeNameType);
    sub_1C1ABD4(&StringLiteral_11562/*"ResultSvtCardNodeName"*/, v5);
    byte_4BCB50F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11562/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_18;
  v7 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v7, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_18;
  v9 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4468/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v11 = Value;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_18;
  v13 = (UnityEngine_GameObject_o *)fsm;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(resUsrSvtData, 0, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_39105820(
                            v13,
                            resUsrSvtData,
                            FigureImageLimitCount,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  v15 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v16 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4BC2141 )
  {
    fsm = (PlayMakerFSM_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_4BC2141 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_18:
    sub_1C1AE30(fsm, *(_QWORD *)&changeNameType);
  }
  v17.fields.x = v11;
  v17.fields.y = v11;
  v17.fields.z = v11;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v17, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v25; // x19
  UnityEngine_Transform_o *v26; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB50D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&StringLiteral_4468/*"CardScale"*/, v8);
    sub_1C1ABD4(&StringLiteral_11562/*"ResultSvtCardNodeName"*/, v9);
    byte_4BCB50D = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11562/*"ResultSvtCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4468/*"CardScale"*/,
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v17;
  *(_QWORD *)&v27.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v27, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.resUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v20->fields.limitCount, 0LL);
  if ( !v21 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v19, fsm, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  fsm = ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v13 )
    goto LABEL_25;
  v23 = fsm;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_39105820(
                   gameObject,
                   this->fields.resUsrSvtData,
                   v23,
                   10,
                   0LL,
                   changeNameType,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  v25 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v26 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4BC2141 )
  {
    fsm = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_4BC2141 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v25, 0LL)) == 0) )
  {
LABEL_25:
    sub_1C1AE30(fsm, *(_QWORD *)&changeNameType);
  }
  v28.fields.x = v18;
  v28.fields.y = v18;
  v28.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v28, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v25, 1.89, 0LL);
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
  int64_t v46; // x20
  __int64 Instance; // x0
  const MethodInfo *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  const MethodInfo *v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  long double v61; // q0
  SkillUpResultWindowComponent_o *v62; // x20
  UserServantEntity_o *v63; // x21
  int32_t v64; // w22
  int32_t v65; // w23
  System_Action_o *v66; // x24
  const MethodInfo *v67; // x2
  struct UserServantEntity_o *v68; // x8
  __int64 v69; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_String_o *v77; // x0
  const MethodInfo *v78; // x2
  struct UserServantEntity_o *v79; // x8
  __int64 v80; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_String_o *v88; // x0
  UserServantEntity_o *v89; // x20
  struct ServantVoiceData_array *v90; // x8
  struct UserServantEntity_o *v91; // x8
  __int64 v92; // x20
  __int64 v93; // x21
  struct UserServantEntity_o *v94; // x8
  int v95; // w21
  int v96; // w20
  struct UserServantEntity_o *v97; // x8
  __int64 v98; // x22
  __int64 v99; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x21
  int32_t v101; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v103; // w8
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v108; // x20
  System_Action_o *v109; // x24
  int32_t targetIdOld; // w25
  int32_t targetLvOld; // w26
  const MethodInfo *v112; // x2
  const MethodInfo *v113; // x2
  int32_t v114; // w27
  int32_t v115; // w28
  __int64 v116; // x0
  __int64 v117; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v119; // x20
  __int64 v120; // x27
  int32_t v121; // w22
  struct UserServantEntity_o *v122; // x8
  __int64 v123; // x23
  __int64 v124; // x24
  int v125; // w8
  int v126; // w9
  __int64 v127; // x23
  struct UserServantEntity_o *v128; // x8
  __int64 v129; // x23
  __int64 v130; // x24
  int32_t v131; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v133; // x9
  __int64 size; // x10
  UserServantEntity_o *v135; // x8
  Il2CppObject *v136; // x23
  struct UserServantEntity_o *v137; // x8
  __int64 v138; // x25
  __int64 v139; // x26
  int64_t v140; // x24
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v142; // x23
  struct UserServantEntity_o *v143; // x8
  __int64 v144; // x23
  __int64 v145; // x24
  bool IsForceReleaseSkillRankUp; // w29
  int v147; // w22
  _BOOL8 v148; // x0
  __int64 v149; // x1
  Il2CppObject *current; // x23
  __int64 v151; // x1
  NetworkManager_c *v152; // x0
  struct UserServantEntity_o *v153; // x8
  int32_t v154; // w24
  __int64 v155; // x26
  __int64 v156; // x27
  int64_t userIdNumber; // x25
  int32_t v158; // w3
  bool v159; // w28
  bool v160; // w29
  SkillUpResultWindowComponent_o *v161; // x20
  UserServantEntity_o *v162; // x21
  System_Action_o *v163; // x22
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  Il2CppObject *v165; // x20
  Il2CppObject *v166; // x21
  Il2CppObject *v167; // x20
  BalanceConfig_c *v168; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v170; // x21
  Il2CppObject *Name; // x0
  System_String_o *v172; // x0
  System_Int32_array *v173; // x20
  SkillUpResultWindowComponent_o *v174; // x21
  int32_t v175; // w22
  int32_t v176; // w23
  System_Action_o *v177; // x24
  struct UserServantEntity_o *v178; // x8
  int32_t v179; // w26
  int32_t v180; // w25
  __int64 v181; // x27
  __int64 v182; // x28
  SkillUpResultWindowComponent_o *v183; // x20
  UserServantEntity_o *v184; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v186; // x23
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v188; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v189; // x21
  Il2CppObject *v190; // x0
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  struct UserServantEntity_o *v197; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t lv; // w21
  const MethodInfo *v200; // x1
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  struct ServantVoiceData_array *playVoiceList; // x8
  struct UserServantEntity_o *v208; // x8
  __int128 v209; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v210; // x20
  Il2CppObject *v211; // x0
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  struct SvtCombineResultWindowComponent_o *v218; // x20
  struct UserServantEntity_o *v219; // x21
  int32_t v220; // w22
  System_Action_o *v221; // x23
  SvtCombineResultWindowComponent_o *v222; // x0
  UserServantEntity_o *v223; // x1
  int32_t v224; // w2
  System_Action_o *v225; // x3
  System_Action_o *v226; // x4
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v228; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  Il2CppObject *v231; // x20
  AvalonSceneManager_c *v232; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v234; // x0
  __int64 *v235; // x8
  const MethodInfo *v236; // x2
  const MethodInfo *v237; // x2
  const MethodInfo *v238; // x3
  __int64 v239; // x22
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int64_t v247; // x2
  int32_t v248; // w3
  System_String_o *v249; // x4
  BattleSetupInfo_o *v250; // x5
  FollowerInfo_o *v251; // x6
  PartyListViewItem_o *v252; // x7
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  __int64 v259; // x23
  System_Action_o *v260; // x24
  int64_t v261; // x2
  int32_t v262; // w3
  System_String_o *v263; // x4
  BattleSetupInfo_o *v264; // x5
  FollowerInfo_o *v265; // x6
  PartyListViewItem_o *v266; // x7
  Il2CppObject *v267; // x21
  CombineResultEffectComponent_ClickDelegate_o *v268; // x22
  int64_t v269; // x2
  int32_t v270; // w3
  System_String_o *v271; // x4
  BattleSetupInfo_o *v272; // x5
  FollowerInfo_o *v273; // x6
  PartyListViewItem_o *v274; // x7
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v276; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v278; // x23
  System_Action_o *v279; // x24
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v281; // x21
  System_String_o *v282; // x22
  Il2CppObject *v283; // x21
  Il2CppObject *v284; // x0
  AvalonSceneManager_c *v285; // x8
  System_Action_o *v286; // x21
  bool kind; // [xsp+0h] [xbp-130h]
  bool methoda; // [xsp+8h] [xbp-128h]
  System_String_o *dispBattleName; // [xsp+18h] [xbp-118h]
  bool isForceRelease; // [xsp+20h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v291; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v292; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v293; // [xsp+80h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v294; // [xsp+A0h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+B8h] [xbp-78h] BYREF
  int32_t dispLimitCount; // [xsp+C8h] [xbp-68h]
  int32_t oldLv; // [xsp+CCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v298; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v299; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v300; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v301; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v302; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v303; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v304; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v305; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v306; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v307; // 0:x0.16

  if ( (byte_4BCB512 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v3);
    sub_1C1ABD4(&BalanceConfig_TypeInfo, v4);
    sub_1C1ABD4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v5);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_EndDisp__, v6);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__, v7);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__, v8);
    sub_1C1ABD4(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__, v9);
    sub_1C1ABD4(&Method_CombineResultEffectComponent_clickNext__, v10);
    sub_1C1ABD4(&CombineResultFormManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v17);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_int___, v20);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Contains_int___, v21);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v22);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v26);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v27);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v30);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v31);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v34);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_1C1ABD4(&string___TypeInfo, v37);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v38);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__, v39);
    sub_1C1ABD4(&CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo, v40);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__, v41);
    sub_1C1ABD4(&CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo, v42);
    sub_1C1ABD4(&StringLiteral_11024/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v43);
    sub_1C1ABD4(&StringLiteral_11025/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v44);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v45);
    byte_4BCB512 = 1;
  }
  oldLv = 0;
  entity = 0LL;
  memset(&v294, 0, sizeof(v294));
  v46 = sub_1C1AE20(CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass143_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass143_0_o *)v46,
    0LL);
  if ( !v46 )
    goto LABEL_218;
  *(_QWORD *)(v46 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v46 + 24), (int64_t)this, v49, v50, v51, v52, v53, v54);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_162;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_218;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_218;
      v188 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v189 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v293.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v293.fields.fakeValue = v188;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v292 = v293;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v292, 0LL);
      if ( !v189 )
        goto LABEL_218;
      v190 = DataMasterBase_object__object__long___GetEntity(
               v189,
               Instance,
               (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v190;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.resUsrSvtData,
        (int64_t)v190,
        v191,
        v192,
        v193,
        v194,
        v195,
        v196);
LABEL_162:
      v197 = this->fields.baseUsrSvtData;
      if ( !v197 )
        goto LABEL_218;
      oldLv = v197->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_218;
      lv = resUsrSvtData->fields.lv;
      if ( !System_Int32__Equals_63845804((int32_t)&oldLv, lv, 0LL)
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
      *(_QWORD *)(v46 + 16) = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v46 + 16), 0LL, v201, v202, v203, v204, v205, v206);
      if ( !CombineResultEffectComponent__CheckCombineLimit(this, oldLv, lv, v238) )
        goto LABEL_197;
      v239 = sub_1C1AE20(CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo);
      CombineResultEffectComponent___c__DisplayClass143_1___ctor(
        (CombineResultEffectComponent___c__DisplayClass143_1_o *)v239,
        0LL);
      if ( !v239 )
        goto LABEL_218;
      *(_QWORD *)(v239 + 24) = v46;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v239 + 24), v46, v240, v241, v242, v243, v244, v245);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v239 + 16) = callbackFunc;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v239 + 16), (int64_t)callbackFunc, v247, v248, v249, v250, v251, v252);
      this->fields.callbackFunc = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v253, v254, v255, v256, v257, v258);
      v259 = *(_QWORD *)(v239 + 24);
      v260 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v260,
        (Il2CppObject *)v239,
        Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__,
        0LL);
      if ( !v259 )
        goto LABEL_218;
      *(_QWORD *)(v259 + 16) = v260;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v259 + 16), (int64_t)v260, v261, v262, v263, v264, v265, v266);
      v267 = *(Il2CppObject **)(v239 + 24);
      v268 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C1AE20(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v268,
        v267,
        Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__,
        0LL);
      this->fields.callbackFunc = v268;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)v268,
        v269,
        v270,
        v271,
        v272,
        v273,
        v274);
LABEL_197:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_201:
        CombineResultEffectComponent__EndDisp(this, v48);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v276 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v278 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v278, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v279 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v279, (Il2CppObject *)this, (intptr_t)Method_CombineResultEffectComponent_clickNext__, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_218;
      v222 = svtResultInfoWindow;
      v223 = v276;
      v224 = baseUsrSvtCollictionLv;
      v225 = v278;
      v226 = v279;
LABEL_200:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v222, v223, v224, v225, v226, 0LL);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1C1AC7C(string___TypeInfo, 1LL);
      v68 = this->fields.baseUsrSvtData;
      if ( !v68 )
        goto LABEL_218;
      v69 = Instance;
      p_svtId = &v68->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v298.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v298.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v298, v67);
      if ( !v69 )
        goto LABEL_218;
      if ( !*(_DWORD *)(v69 + 24) )
        goto LABEL_219;
      *(_QWORD *)(v69 + 32) = Instance;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v69 + 32), Instance, v71, v72, v73, v74, v75, v76);
      v77 = System_String__Concat_63053896((System_String_array *)v69, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt_70752120(v77, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
        goto LABEL_22;
      Instance = sub_1C1AC7C(string___TypeInfo, 1LL);
      v79 = this->fields.baseUsrSvtData;
      if ( !v79 )
        goto LABEL_218;
      v80 = Instance;
      v81 = &v79->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v299.fields.currentCryptoKey = v81;
      *(_QWORD *)&v299.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v299, v78);
      if ( !v80 )
        goto LABEL_218;
      if ( !*(_DWORD *)(v80 + 24) )
        goto LABEL_219;
      *(_QWORD *)(v80 + 32) = Instance;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v80 + 32), Instance, v82, v83, v84, v85, v86, v87);
      v88 = System_String__Concat_63053896((System_String_array *)v80, 0LL);
      UnityEngine_PlayerPrefs__SetInt(v88, 0, 0LL);
      v89 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      CombineResultFormManager__ResetVoiceList(v89, 0LL);
LABEL_22:
      Instance = (__int64)this->fields.limitUpResultCheck;
      if ( !Instance )
        goto LABEL_218;
      LimitUpResultCheckComponent__checkResultLimitUp(
        (LimitUpResultCheckComponent_o *)Instance,
        this->fields.kind,
        this->fields.baseUsrSvtData,
        this->fields.resUsrSvtData,
        this->fields.baseUsrSvtCollectionLimitCnt,
        this->fields.limitUpRewardGiftDataList,
        0LL);
      v90 = this->fields.playVoiceList;
      if ( !v90 )
      {
        v91 = this->fields.baseUsrSvtData;
        if ( v91 )
        {
          v93 = *(_QWORD *)&v91->fields.limitCount.fields.currentCryptoKey;
          v92 = *(_QWORD *)&v91->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v300.fields.currentCryptoKey = v93;
          *(_QWORD *)&v300.fields.fakeValue = v92;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v300, 0LL);
          v94 = this->fields.baseUsrSvtData;
          v95 = Instance == 2;
          if ( v94 )
          {
            v96 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v94->fields.limitCount, 0LL) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v97 = this->fields.baseUsrSvtData;
              if ( !v97 )
                goto LABEL_218;
              v99 = *(_QWORD *)&v97->fields.svtId.fields.currentCryptoKey;
              v98 = *(_QWORD *)&v97->fields.svtId.fields.fakeValue;
              v100 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1040LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v301.fields.currentCryptoKey = v99;
              *(_QWORD *)&v301.fields.fakeValue = v98;
              v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v301, 0LL);
              v95 = (v96 == 2) | System_Linq_Enumerable__Contains_int_(
                                   v100,
                                   v101,
                                   (const MethodInfo_2FB748C *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              v103 = this->fields.kind;
              isLimitUpSuppression = v103 != 10 && v103 != 26;
            }
            if ( (v95 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, v48);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v281 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(
              v281,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__,
              0LL);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v281, 1, 0LL);
              return;
            }
          }
        }
        goto LABEL_218;
      }
LABEL_125:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&v90->max_length;
        CombineResultEffectComponent__StartPlayVoice(this, v48);
      }
      break;
    case 2:
    case 3:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_218;
      SkillIdList = UserServantEntity__getSkillIdList((UserServantEntity_o *)Instance, -1, -1, 1, -1, 0LL);
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v108 = SkillIdList;
      v109 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v109, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v112);
      if ( !Instance )
        goto LABEL_218;
      v114 = *(_DWORD *)(Instance + 16);
      v115 = this->fields.kind;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v113);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_218;
      dispBattleName = *(System_String_o **)(Instance + 24);
      isForceRelease = 0;
      methoda = 1;
      kind = v115 == 3;
      goto LABEL_191;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v62 = this->fields.skillResultInfoWindow;
      v63 = this->fields.baseUsrSvtData;
      v64 = this->fields.targetId;
      v65 = this->fields.targetLv;
      v66 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v66, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v62 )
        goto LABEL_218;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_46361028(
        v62,
        v63,
        v64,
        v65,
        v66,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        this->fields.npInfoAddManager,
        this->fields.kind,
        0LL);
      return;
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_218;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v208 = this->fields.baseUsrSvtData;
      if ( !v208 )
        goto LABEL_218;
      v209 = *(_OWORD *)&v208->fields.id.fields.fakeValue;
      v210 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v293.fields.currentCryptoKey = *(_OWORD *)&v208->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v293.fields.fakeValue = v209;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v291 = v293;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v291, 0LL);
      if ( !v210 )
        goto LABEL_218;
      v211 = DataMasterBase_object__object__long___GetEntity(
               v210,
               Instance,
               (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v211;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.resUsrSvtData,
        (int64_t)v211,
        v212,
        v213,
        v214,
        v215,
        v216,
        v217);
      v218 = this->fields.svtResultInfoWindow;
      v219 = this->fields.resUsrSvtData;
      v220 = this->fields.baseUsrSvtCollictionLv;
      v221 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v221, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v218 )
        goto LABEL_218;
      v222 = v218;
      v223 = v219;
      v224 = v220;
      v225 = v221;
      v226 = 0LL;
      goto LABEL_200;
    case 7:
    case 0x15:
      v116 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v116 + 309) & 1) == 0 )
        v116 = sub_1C6CAB0(v61);
      v117 = *(_QWORD *)(*(_QWORD *)(v116 + 192) + 16LL);
      if ( (*(_BYTE *)(v117 + 309) & 1) == 0 )
        v117 = sub_1C6CAB0(v61);
      Instance = **(_QWORD **)(v117 + 184);
      if ( !Instance )
        goto LABEL_218;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v119 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v119,
        (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
      v120 = 0LL;
      v121 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v121 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v122 = this->fields.baseUsrSvtData;
          if ( !v122 )
            goto LABEL_218;
          v124 = *(_QWORD *)&v122->fields.svtId.fields.currentCryptoKey;
          v123 = *(_QWORD *)&v122->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v302.fields.currentCryptoKey = v124;
          *(_QWORD *)&v302.fields.fakeValue = v123;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v302, 0LL);
          if ( !MasterData_object )
            goto LABEL_218;
          Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                (ServantSkillMaster_o *)MasterData_object,
                                Instance,
                                v121,
                                0LL);
          if ( !Instance )
            goto LABEL_218;
          v125 = *(_DWORD *)(Instance + 24);
          if ( v125 < 1 )
          {
LABEL_63:
            v128 = this->fields.baseUsrSvtData;
            if ( !v128 )
              goto LABEL_218;
            v130 = *(_QWORD *)&v128->fields.svtId.fields.currentCryptoKey;
            v129 = *(_QWORD *)&v128->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v303.fields.currentCryptoKey = v130;
            *(_QWORD *)&v303.fields.fakeValue = v129;
            v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v303, 0LL);
            Instance = (__int64)ServantSkillMaster__GetEntity(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  v131,
                                  v121,
                                  1,
                                  0LL);
            if ( Instance )
            {
              v48 = (const MethodInfo *)*(unsigned int *)(Instance + 28);
              v127 = v120;
LABEL_68:
              if ( !v119 )
                goto LABEL_218;
              items = v119->fields._items;
              v133 = Method_System_Collections_Generic_List_int__Add__;
              ++v119->fields._version;
              if ( !items )
                goto LABEL_218;
              size = v119->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v119,
                  (int32_t)v48,
                  *(const MethodInfo_361F86C **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
              }
              else
              {
                v119->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v48;
              }
            }
            else
            {
              v127 = v120;
            }
            ++v121;
            v120 = v127;
            continue;
          }
          v126 = 0;
          while ( 1 )
          {
            if ( v125 == v126 )
LABEL_219:
              sub_1C1AE38(Instance, v48);
            v127 = *(_QWORD *)(Instance + 8LL * v126 + 32);
            if ( !v127 )
              break;
            v48 = (const MethodInfo *)*(unsigned int *)(v127 + 28);
            if ( (_DWORD)v48 == this->fields.targetId )
              goto LABEL_68;
            if ( v125 == ++v126 )
              goto LABEL_63;
          }
LABEL_218:
          sub_1C1AE30(Instance, v48);
        }
        break;
      }
      if ( this->fields.kind == 7 )
      {
        Instance = (__int64)this->fields.baseUsrSvtData;
        if ( !Instance )
          goto LABEL_218;
        Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
        v135 = this->fields.baseUsrSvtData;
        dispLimitCount = Instance;
        if ( !v135 )
          goto LABEL_218;
        Instance = UserServantEntity__IsHeroine(v135, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_218;
          v136 = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BC2585 )
          {
            sub_1C1ABD4(&NetworkManager_TypeInfo, v48);
            byte_4BC2585 = 1;
          }
          Instance = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (__int64)NetworkManager_TypeInfo;
          }
          v137 = this->fields.baseUsrSvtData;
          if ( !v137 )
            goto LABEL_218;
          v139 = *(_QWORD *)&v137->fields.svtId.fields.currentCryptoKey;
          v138 = *(_QWORD *)&v137->fields.svtId.fields.fakeValue;
          v140 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v304.fields.currentCryptoKey = v139;
          *(_QWORD *)&v304.fields.fakeValue = v138;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v304, 0LL);
          if ( !v136 )
            goto LABEL_218;
          Instance = UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)v136,
                       &entity,
                       v140,
                       Instance,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)entity;
            if ( !entity )
              goto LABEL_218;
            costumeIds = entity->fields.costumeIds;
            if ( !costumeIds )
              goto LABEL_218;
            if ( *(_QWORD *)&costumeIds->max_length )
            {
              v142 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
              Instance = System_Linq_Enumerable__Any_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v142,
                           (const MethodInfo_2FAA400 *)Method_System_Linq_Enumerable_Any_int___);
              if ( (Instance & 1) != 0 )
              {
                Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v142, 0LL);
                dispLimitCount = Instance;
              }
            }
          }
        }
        v143 = this->fields.baseUsrSvtData;
        if ( !v143 )
          goto LABEL_218;
        v145 = *(_QWORD *)&v143->fields.svtId.fields.currentCryptoKey;
        v144 = *(_QWORD *)&v143->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v305.fields.currentCryptoKey = v145;
        *(_QWORD *)&v305.fields.fakeValue = v144;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v305, 0LL);
        if ( !v120 )
          goto LABEL_218;
        if ( !MasterData_object )
          goto LABEL_218;
        Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              *(_DWORD *)(v120 + 20),
                              this->fields.targetIdOld,
                              0LL);
        if ( !Instance )
          goto LABEL_218;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v293,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
        IsForceReleaseSkillRankUp = 0;
        LOBYTE(v147) = 0;
        *(_OWORD *)&v294.fields._list = *(_OWORD *)&v293.fields.currentCryptoKey;
        v294.fields._current = (Il2CppObject *)v293.fields.fakeValue;
        do
        {
          v148 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v294,
                   (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
          if ( !v148 )
            break;
          current = v294.fields._current;
          if ( !v294.fields._current )
            sub_1C1AE30(v148, v149);
          if ( !ServantSkillEntity__isEnable((ServantSkillEntity_o *)v294.fields._current, 0, 0LL) )
            goto LABEL_117;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BC2585 )
          {
            sub_1C1ABD4(&NetworkManager_TypeInfo, v151);
            byte_4BC2585 = 1;
          }
          v152 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v152 = NetworkManager_TypeInfo;
          }
          v153 = this->fields.baseUsrSvtData;
          if ( !v153 )
            sub_1C1AE30(v152, v151);
          v154 = v153->fields.lv;
          v156 = *(_QWORD *)&v153->fields.limitCount.fields.currentCryptoKey;
          v155 = *(_QWORD *)&v153->fields.limitCount.fields.fakeValue;
          userIdNumber = v152->static_fields->userIdNumber;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v306.fields.currentCryptoKey = v156;
          *(_QWORD *)&v306.fields.fakeValue = v155;
          v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v306, 0LL);
          if ( ServantSkillEntity__isUse(
                 (ServantSkillEntity_o *)current,
                 userIdNumber,
                 v154,
                 v158,
                 dispLimitCount,
                 -1,
                 -1,
                 -1LL,
                 0LL) )
          {
            v147 = 1;
          }
          else
          {
LABEL_117:
            v147 = 0;
            IsForceReleaseSkillRankUp = ServantSkillEntity__IsForceReleaseSkillRankUp(
                                          (ServantSkillEntity_o *)current,
                                          0LL);
          }
        }
        while ( !(v147 | IsForceReleaseSkillRankUp) );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v294,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
        v159 = IsForceReleaseSkillRankUp;
        v160 = (unsigned __int8)v147 != 0;
      }
      else
      {
        v159 = 0;
        v160 = 0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v109 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v109, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v236);
      if ( !Instance )
        goto LABEL_218;
      if ( !v119 )
        goto LABEL_218;
      v114 = *(_DWORD *)(Instance + 16);
      v108 = System_Collections_Generic_List_int___ToArray(
               v119,
               (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v237);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_218;
      isForceRelease = v159;
      dispBattleName = *(System_String_o **)(Instance + 24);
      methoda = v160;
      kind = 0;
LABEL_191:
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        skillResultInfoWindow,
        targetId,
        targetLv,
        v109,
        targetIdOld,
        targetLvOld,
        v114,
        v108,
        kind,
        methoda,
        0,
        dispBattleName,
        isForceRelease,
        0LL);
      break;
    case 9:
      v183 = this->fields.skillResultInfoWindow;
      v184 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v186 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v186, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v183 )
        goto LABEL_218;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v183, v184, oldFriendShipRank, v186, 0LL);
      return;
    case 0xB:
      v161 = this->fields.skillResultInfoWindow;
      v162 = this->fields.baseUsrSvtData;
      v163 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v163, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v161 )
        goto LABEL_218;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v161, v162, v163, 0LL);
      return;
    case 0xC:
    case 0xE:
    case 0x16:
    case 0x18:
      goto LABEL_201;
    case 0xD:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_218;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        0LL);
      goto LABEL_201;
    case 0xF:
      v90 = this->fields.playVoiceList;
      if ( v90 )
        goto LABEL_125;
      goto LABEL_201;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_180;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_212;
      this->fields.messageCallback = 0LL;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.messageCallback,
        0LL,
        (int64_t)v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_218;
      v165 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BC27F4 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v48);
        byte_4BC27F4 = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v165 )
        goto LABEL_218;
      v166 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v165,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
               (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_218;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_218;
      v167 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v168 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v168 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v168->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11025/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
        if ( !v167 )
          goto LABEL_218;
        v170 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v167, -1, -1, 0, 0LL);
        v172 = System_String__Format(v170, Name, 0LL);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11024/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
        if ( !v166 )
          goto LABEL_218;
        v282 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v166, 0LL);
        if ( !v167 )
          goto LABEL_218;
        v283 = (Il2CppObject *)Instance;
        v284 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v167, -1, -1, 0, 0LL);
        v172 = System_String__Format_63054740(v282, v283, v284, 0LL);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))messageCallback->fields.m_target)(
        messageCallback->fields.original_method_info,
        v172,
        *(_QWORD *)&messageCallback->fields.extra_arg);
LABEL_212:
      if ( !this->fields.callbackFunc )
        return;
      v231 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v285 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v285 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v285->static_fields->DEFAULT_FADE_TIME;
      v234 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      v235 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__;
LABEL_216:
      v286 = v234;
      System_Action___ctor(v234, (Il2CppObject *)this, *v235, 0LL);
      if ( v231 )
      {
        CommonUI__maskFadeout((CommonUI_o *)v231, 1, DEFAULT_FADE_TIME, v286, 0LL);
        return;
      }
      goto LABEL_218;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_212;
LABEL_180:
      v231 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v232 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v232 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v232->static_fields->DEFAULT_FADE_TIME;
      v234 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      v235 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__;
      goto LABEL_216;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v228 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v55);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_218;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v228,
        commandCardIndex,
        commandCardExceedCount,
        0,
        *(System_String_o **)(Instance + 24),
        0LL);
      goto LABEL_201;
    case 0x17:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_218;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_46218904(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        this->fields.oldFriendShipRank,
        0LL);
      goto LABEL_201;
    case 0x19:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_218;
      Instance = (__int64)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_218;
      v173 = *(System_Int32_array **)(Instance + 16);
      v174 = this->fields.skillResultInfoWindow;
      v175 = this->fields.targetId;
      v176 = this->fields.targetLv;
      v177 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v177, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v178 = this->fields.baseUsrSvtData;
      if ( !v178 )
        goto LABEL_218;
      v179 = this->fields.targetIdOld;
      v180 = this->fields.targetLvOld;
      v182 = *(_QWORD *)&v178->fields.svtId.fields.currentCryptoKey;
      v181 = *(_QWORD *)&v178->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v307.fields.currentCryptoKey = v182;
      *(_QWORD *)&v307.fields.fakeValue = v181;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v307, 0LL);
      if ( !v174 )
        goto LABEL_218;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v174,
        v175,
        v176,
        v177,
        v179,
        v180,
        Instance,
        v173,
        this->fields.targetLvOld == 0,
        1,
        1,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
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
  PartyOrganizationUtility_o *p_player; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BCB522 & 1) == 0 )
  {
    sub_1C1ABD4(&SoundManager_TypeInfo, method);
    byte_4BCB522 = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = (PartyOrganizationUtility_o *)&this->fields.player;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    p_player->klass = 0LL;
    sub_1C1AB78(p_player, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_ClickDelegate___ctor(
        CombineResultEffectComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A6089C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A60854;
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
  if ( (byte_4BCB53F & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, isDecide);
    byte_4BCB53F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BCB540 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v3);
    byte_4BCB540 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.afterSkillList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int64_t v8; // x19
  System_Collections_Generic_List_object__o *afterSkillList; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4BCB542 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4BCB542 = 1;
  }
  v8 = sub_1C1AE20(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        *(_DWORD *)(v8 + 20) = lv,
        (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList) == 0LL)
    || (items = afterSkillList->fields._items,
        v18 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_1C1AE30(afterSkillList, v10);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v8,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
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
  int64_t v8; // x19
  System_Collections_Generic_List_object__o *beforeSkillList; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4BCB541 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4BCB541 = 1;
  }
  v8 = sub_1C1AE20(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        *(_DWORD *)(v8 + 20) = lv,
        (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList) == 0LL)
    || (items = beforeSkillList->fields._items,
        v18 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_1C1AE30(beforeSkillList, v10);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v8,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4BCB544 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_4BCB544 = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1C1AE30(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4BCB545 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C1ABD4(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
                                                                       method);
    byte_4BCB545 = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1C1AE30(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4BCB543 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_4BCB543 = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1C1AE30(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_MessageDelegate___ctor(
        CombineResultEffectComponent_MessageDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A60920;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A60900;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A608B8;
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
  return (System_IAsyncResult_o *)sub_1C1AB88(this, &v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCB546 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultEffectComponent___c_TypeInfo, v1);
    byte_4BCB546 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)CombineResultEffectComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, 0LL);
  return voiceData->fields.additionalPerformances;
}


bool __fastcall CombineResultEffectComponent___c___GetVoiceEffectPrefab_b__149_1(
        CombineResultEffectComponent___c_o *this,
        ServantVoicePerformance_o *performanceData,
        const MethodInfo *method)
{
  if ( !performanceData )
    sub_1C1AE30(this, 0LL);
  return !System_String__IsNullOrEmpty(performanceData->fields.assetName, 0LL);
}


int32_t __fastcall CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__105_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C1AE30(this, a);
  return System_Int32__CompareTo_63845656((_DWORD)a + 24, b->fields.priority, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BCB547 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultEffectComponent_TypeInfo, assetData);
    byte_4BCB547 = 1;
  }
  if ( assetData )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = assetData;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int64_t)assetData,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v15; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v16; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v17; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v18; // x8
  struct CombineResultEffectComponent_o *v19; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__4; // x22
  CommonUI_o *v22; // x20
  const MethodInfo *v23; // x3
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_4BCB548 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)sub_1C1ABD4(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__,
                                                                      v5);
    byte_4BCB548 = 1;
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
  UnityEngine_Object__DestroyImmediate_70794600(effect, 0LL);
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v15->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[3].fields.__9__4 = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this[3].fields.__9__4, 0LL, v9, v10, v11, v12, v13, v14);
  v16 = v2->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v16->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0LL);
  v17 = v2->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v17->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[4].fields.CS___8__locals1 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = v2->fields.CS___8__locals1;
    if ( v18 )
    {
      v19 = v18->fields.__4__this;
      if ( v19 )
      {
        baseUsrSvtData = v19->fields.baseUsrSvtData;
        _9__4 = v2->fields.__9__4;
        v22 = (CommonUI_o *)this;
        if ( !_9__4 )
        {
          _9__4 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C1AE20(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__4,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__,
            v23);
          v2->fields.__9__4 = _9__4;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v2->fields.__9__4, (int64_t)_9__4, v24, v25, v26, v27, v28, v29);
        }
        if ( v22 )
        {
          CommonUI__OpenCombineLimit(v22, baseUsrSvtData, _9__4, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, decide);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct CombineResultEffectComponent_o *v15; // x8

  v3 = this;
  if ( (byte_4BCB549 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)sub_1C1ABD4(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
                                                                      v6);
    byte_4BCB549 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__7 = v3->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
      0LL);
    v3->fields.__9__7 = _9__7;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v3->fields.__9__7, (int64_t)_9__7, v9, v10, v11, v12, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__7,
                                                                    (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v15 = v3->fields.__4__this;
  if ( !v15 || !this )
LABEL_11:
    sub_1C1AE30(this, decide);
  CardServantFlagRequest__beginRequest(
    (CardServantFlagRequest_o *)this,
    v15->fields.targetSvtId,
    v15->fields.targetFlagId,
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
  if ( (byte_4BCB54A & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineResultEffectComponent___c__DisplayClass169_0_o *)sub_1C1ABD4(
                                                                      &ServantCharaGraphEXOpenManager_TypeInfo,
                                                                      v3);
    byte_4BCB54A = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v11, 0LL);
  limitCount = v2->fields.limitCount;
  v10 = v8;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v10, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass169_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1C1AE30(this, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BCB54B & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDcd);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_CombineResultEffectComponent___c__DisplayClass175_0__ProfileChangeDecideAction_b__1__, v6);
    byte_4BCB54B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass175_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !v10 )
    sub_1C1AE30(Instance, v8);
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

  if ( (byte_4BCB54C & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BCB54C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v8 )
LABEL_10:
    sub_1C1AE30(Instance, v5);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}