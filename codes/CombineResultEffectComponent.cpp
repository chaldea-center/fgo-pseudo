void __fastcall CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x0
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x20
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_List_object__o *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x20
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  System_Collections_Generic_HashSet_T__o *v90; // x20
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7

  if ( (byte_4B19B97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v12, v13);
    sub_1BCA7E0(&string___TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_17440/*"bit_result02"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17441/*"bit_result03"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_17442/*"bit_result04"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_17439/*"bit_result01"*/, v22, v23);
    byte_4B19B97 = 1;
  }
  v24 = sub_1BCA888(string___TypeInfo, 3LL);
  if ( !v24 )
    goto LABEL_12;
  v32 = v24;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_11;
  v33 = StringLiteral_17439/*"bit_result01"*/;
  *(_QWORD *)(v24 + 32) = StringLiteral_17439/*"bit_result01"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 32), v33, v26, v27, v28, v29, v30, v31);
  if ( *(_DWORD *)(v32 + 24) <= 1u )
    goto LABEL_11;
  v40 = StringLiteral_17440/*"bit_result02"*/;
  *(_QWORD *)(v32 + 40) = StringLiteral_17440/*"bit_result02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 40), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v32 + 24) <= 2u )
    goto LABEL_11;
  v47 = StringLiteral_17441/*"bit_result03"*/;
  *(_QWORD *)(v32 + 48) = StringLiteral_17441/*"bit_result03"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 48), v47, v41, v42, v43, v44, v45, v46);
  this->fields.startAniName = (struct System_String_array *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.startAniName, v32, v48, v49, v50, v51, v52, v53);
  v54 = StringLiteral_17442/*"bit_result04"*/;
  this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_17442/*"bit_result04"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.LimitAnimName, v54, v55, v56, v57, v58, v59, v60);
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_BD34E0;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v64 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                       v61,
                                                       v62,
                                                       v63);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v64;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentFigureCollectList,
    (int64_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v74 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                       v71,
                                                       v72,
                                                       v73);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v74;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.afterFigureCollectList,
    (int64_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v24 = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v24 )
    goto LABEL_12;
  v25 = v24;
  if ( !*(_DWORD *)(v24 + 24) )
LABEL_11:
    sub_1BCAA44(v24, v25);
  *(_DWORD *)(v24 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ChangeCardEffectLvList, v24, v81, v82, v83, v84, v85, v86);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v90 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo,
                                                     v87,
                                                     v88,
                                                     v89);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v90,
    (const MethodInfo_3456D28 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v90 )
LABEL_12:
    sub_1BCAA3C(v24, v25);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v90,
    1,
    (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v90,
    10,
    (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v90,
    26,
    (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v90,
    19,
    (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v90,
    24,
    (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v90;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.limitUpKinds, (int64_t)v90, v91, v92, v93, v94, v95, v96);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19B49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v4, v5);
    byte_4B19B49 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)Component_object, v7, v8, v9, v10, v11, v12);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v14);
  v15 = UnityEngine_Component__GetComponent_object_(
          transform,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.combineResStatus, (int64_t)v15, v16, v17, v18, v19, v20, v21);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineResultEffectComponent__CheckCombineLimit(
        CombineResultEffectComponent_o *this,
        int32_t oldLv,
        int32_t currentLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  void *Instance; // x0
  __int64 v10; // x1
  ServantLvDetailMaster_o *v11; // x22
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v14; // w8

  if ( (byte_4B19B5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, *(_QWORD *)&oldLv, *(_QWORD *)&currentLv);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B19B5D = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v11 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
  HighestData = ServantLvDetailMaster__GetHighestData(v11, Rarity, oldLv, 0LL);
  Instance = ServantLvDetailMaster__GetHighestData(v11, Rarity, currentLv, 0LL);
  if ( Instance && !HighestData )
    goto LABEL_12;
  if ( HighestData )
  {
    if ( Instance )
    {
      if ( HighestData->fields.frameType == *((_DWORD *)Instance + 6) )
        goto LABEL_11;
LABEL_12:
      v14 = *((_DWORD *)Instance + 5);
      LOBYTE(Instance) = 1;
      this->fields.combineLimitLv = v14;
      return (char)Instance;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v10);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4B19B94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B19B94 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0

  if ( (byte_4B19B91 & 1) == 0 )
  {
    sub_1BCA7E0(&System_GC_TypeInfo, method, v2);
    byte_4B19B91 = 1;
  }
  this->fields.skillShowIndex = 0;
  this->fields.tdShowIndex = 0;
  CombineResultEffectComponent__DestroySvtFigure(this, method);
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_17;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !svtResultInfoWindow )
    goto LABEL_17;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0LL) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_17;
    SvtCombineResultWindowComponent__Close((SvtCombineResultWindowComponent_o *)svtResultInfoWindow, 0LL);
  }
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_17;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !svtResultInfoWindow )
    goto LABEL_17;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0LL) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_17;
    SkillUpResultWindowComponent__Close((SkillUpResultWindowComponent_o *)svtResultInfoWindow, 0LL);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v4);
  System_GC__Collect_63447616(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_17:
    sub_1BCAA3C(svtResultInfoWindow, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 0, 0LL);
}


void __fastcall CombineResultEffectComponent__CloseLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  LimitCountSealDialogComponent_o *limitCountSealDialog; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B19B93 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v4, v5);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_0__, v6, v7);
    byte_4B19B93 = 1;
  }
  v8 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_1BCAA3C(v15, v16);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Component_o *StandFigureNode; // x22
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  DataManager_o *v31; // x24
  Il2CppObject *MasterData_object; // x25
  SvtMultiPortraitMaster_o *v33; // x24
  int32_t v34; // w23
  System_Collections_Generic_List_object__o *v35; // x24
  _BOOL8 v36; // x0
  __int64 v37; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w8
  int32_t v40; // w25
  UnityEngine_GameObject_o *v41; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Component_o *v50; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x1
  struct System_Int32_array *v59; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v61; // x26
  StandFigureCollect_o *v62; // x27
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v76; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  StandFigureCollect_o *v81; // x20
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  Il2CppClass **v91; // x0
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B19B75 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      *(_QWORD *)&svtId,
      *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&StandFigureCollect_TypeInfo, v26, v27);
    byte_4B19B75 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v31 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v31,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_object )
    goto LABEL_47;
  v33 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                svtId,
                                imageLimitCount,
                                0LL);
  if ( !v33 )
    goto LABEL_47;
  v34 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v33, svtId, (int32_t)Instance, 2, 0LL);
  if ( !Instance
    || (v35 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_38693360(
                                    gameObject,
                                    svtId,
                                    v34,
                                    1,
                                    faceType,
                                    1,
                                    0LL,
                                    0,
                                    -1,
                                    0LL);
      if ( Instance )
      {
        v76 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v81 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v78, v79, v80);
          StandFigureCollect___ctor(v81, 0LL, v76, 0LL);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v89 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v81,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
              }
              else
              {
                v91 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v91[4] = (Il2CppClass *)v81;
                sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v81, v82, v83, v84, v85, v86, v87);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1BCAA3C(Instance, v30);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    v35,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v94 = v93;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v36 )
      break;
    current = (SvtMultiPortraitEntity_o *)v94.fields._current;
    if ( !v94.fields._current )
      sub_1BCAA3C(v36, v37);
    klass_high = HIDWORD(v94.fields._current[2].klass);
    if ( klass_high >= 1 )
      v40 = klass_high + 1;
    else
      v40 = 1;
    if ( !StandFigureNode )
      sub_1BCAA3C(v36, v37);
    v41 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v41,
                         current->fields.portraitImageId,
                         1,
                         faceType,
                         v40,
                         0LL,
                         0,
                         -1,
                         0LL);
    v50 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1BCAA3C(0LL, v43);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    transform = UnityEngine_Component__get_transform(v50, 0LL);
    if ( !transform )
      sub_1BCAA3C(0LL, v52);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v57 = UnityEngine_Component__get_gameObject(v50, 0LL);
      v59 = current->fields.commonPosition;
      if ( !v59 )
        sub_1BCAA3C(v57, v58);
      max_length = v59->max_length;
      if ( max_length == 1 )
        sub_1BCAA44(v57, v58);
      if ( !max_length )
        sub_1BCAA44(v57, v58);
      GameObjectExtensions__AddLocalPosition_34331980(v57, (float)v59->m_Items[1], (float)v59->m_Items[2], 0LL);
    }
    v61 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v62 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v53, v54, v55);
    StandFigureCollect___ctor(v62, current, (UIStandFigureR_o *)v50, 0LL);
    if ( !v61 )
      sub_1BCAA3C(v63, v64);
    v71 = v61->fields._items;
    v72 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v61->fields._version;
    if ( !v71 )
      sub_1BCAA3C(v63, v64);
    v73 = v61->fields._size;
    if ( (unsigned int)v73 >= v71->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v61,
        (Il2CppObject *)v62,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = &v71->obj.klass + v73;
      v61->fields._size = v73 + 1;
      v74[4] = (Il2CppClass *)v62;
      sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v62, v65, v66, v67, v68, v69, v70);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Component_o *StandFigureNode; // x23
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  DataManager_o *v36; // x24
  Il2CppObject *MasterData_object; // x22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v39; // x28
  __int64 v40; // x24
  __int64 v41; // x26
  int32_t v42; // w26
  const MethodInfo *v43; // x3
  int32_t v44; // w25
  char v45; // w26
  System_Collections_Generic_List_object__o *v46; // x22
  _BOOL8 v47; // x0
  __int64 v48; // x1
  SvtMultiPortraitEntity_o *current; // x27
  int klass_high; // w8
  int32_t v51; // w28
  UnityEngine_GameObject_o *v52; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Component_o *v62; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v69; // x0
  __int64 v70; // x1
  struct System_Int32_array *v71; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v73; // x29
  StandFigureCollect_o *v74; // x22
  __int64 v75; // x0
  __int64 v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v88; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  StandFigureCollect_o *v93; // x20
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_Object_array *items; // x8
  _QWORD *v101; // x9
  __int64 size; // x10
  Il2CppClass **v103; // x0
  int32_t svtId; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_4B19B6C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      *(_QWORD *)&formId,
      *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&StandFigureCollect_TypeInfo, v31, v32);
    byte_4B19B6C = 1;
  }
  memset(&v108, 0, sizeof(v108));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v36 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v36,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v39 = (SvtMultiPortraitMaster_o *)Instance;
  v41 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
  *(_QWORD *)&v109.fields.currentCryptoKey = v41;
  *(_QWORD *)&v109.fields.fakeValue = v40;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v109, 0LL);
  if ( !MasterData_object )
    goto LABEL_61;
  v42 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                (int32_t)Instance,
                                imageLimitCount,
                                0LL);
  v44 = (int)Instance;
  svtId = v42;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v42,
                                  (int32_t)Instance,
                                  v43);
    v45 = (char)Instance;
  }
  else
  {
    v45 = 0;
  }
  if ( !v39 )
    goto LABEL_61;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v39, svtId, v44, overwriteType, 0LL);
  if ( !Instance
    || (v46 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_38693360(
                                     gameObject,
                                     svtId,
                                     v44,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v45 & 1,
                                     friendshipNum,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_38694272(
                                     gameObject,
                                     svtId,
                                     v44,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     0,
                                     friendshipNum,
                                     0LL));
      v88 = (UIStandFigureR_o *)Instance;
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
          v93 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v90, v91, v92);
          StandFigureCollect___ctor(v93, 0LL, v88, 0LL);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v101 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v93,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
              }
              else
              {
                v103 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v103[4] = (Il2CppClass *)v93;
                sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 4), (int64_t)v93, v94, v95, v96, v97, v98, v99);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1BCAA3C(Instance, v35);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v107,
    v46,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v108 = v107;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v108,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v47 )
      break;
    current = (SvtMultiPortraitEntity_o *)v108.fields._current;
    if ( !v108.fields._current )
      sub_1BCAA3C(v47, v48);
    klass_high = HIDWORD(v108.fields._current[2].klass);
    if ( klass_high >= 1 )
      v51 = klass_high + 1;
    else
      v51 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1BCAA3C(v47, v48);
      v52 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v52,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v51,
                           0LL,
                           v45 & 1,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_1BCAA3C(v47, v48);
      v61 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v61,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v51,
                           0LL,
                           0LL);
    }
    v62 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1BCAA3C(0LL, v54);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    transform = UnityEngine_Component__get_transform(v62, 0LL);
    if ( !transform )
      sub_1BCAA3C(0LL, v64);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v69 = UnityEngine_Component__get_gameObject(v62, 0LL);
      v71 = current->fields.commonPosition;
      if ( !v71 )
        sub_1BCAA3C(v69, v70);
      max_length = v71->max_length;
      if ( max_length == 1 )
        sub_1BCAA44(v69, v70);
      if ( !max_length )
        sub_1BCAA44(v69, v70);
      GameObjectExtensions__AddLocalPosition_34331980(v69, (float)v71->m_Items[1], (float)v71->m_Items[2], 0LL);
    }
    v73 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v74 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v65, v66, v67);
    StandFigureCollect___ctor(v74, current, (UIStandFigureR_o *)v62, 0LL);
    if ( !v73 )
      sub_1BCAA3C(v75, v76);
    v83 = v73->fields._items;
    v84 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v73->fields._version;
    if ( !v83 )
      sub_1BCAA3C(v75, v76);
    v85 = v73->fields._size;
    if ( (unsigned int)v85 >= v83->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v73,
        (Il2CppObject *)v74,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = &v83->obj.klass + v85;
      v73->fields._size = v85 + 1;
      v86[4] = (Il2CppClass *)v74;
      sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 4), (int64_t)v74, v77, v78, v79, v80, v81, v82);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v108,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall CombineResultEffectComponent__DestroySvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x25
  UnityEngine_Object_o *monitor; // x20
  __int64 v19; // x1
  UIStandFigureR_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v25; // x8
  int32_t size; // w2
  int v27; // w9
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x24
  UnityEngine_Object_o *v31; // x20
  __int64 v32; // x1
  UIStandFigureR_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_Component_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x8
  int32_t v39; // w2
  int v40; // w9
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19B90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B19B90 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    currentFigureCollectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v15 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1BCAA3C(v15, v16);
    monitor = (UnityEngine_Object_o *)v42.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v20 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v20 )
        sub_1BCAA3C(0LL, v19);
      UIStandFigureR__ReleaseCharacter(v20, 0LL);
      v22 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v22 )
        sub_1BCAA3C(0LL, v21);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v25 = this->fields.currentFigureCollectList;
  if ( !v25 )
    goto LABEL_40;
  size = v25->fields._size;
  v27 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v27;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v25->fields._items, 0, size, 0LL);
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    currentFigureCollectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v28 )
      break;
    v30 = v42.fields._current;
    if ( !v42.fields._current )
      sub_1BCAA3C(v28, v29);
    v31 = (UnityEngine_Object_o *)v42.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
    {
      v33 = (UIStandFigureR_o *)v30[1].monitor;
      if ( !v33 )
        sub_1BCAA3C(0LL, v32);
      UIStandFigureR__ReleaseCharacter(v33, 0LL);
      v35 = (UnityEngine_Component_o *)v30[1].monitor;
      if ( !v35 )
        sub_1BCAA3C(0LL, v34);
      v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v35, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
      UnityEngine_Object__DestroyImmediate_70154432(v37, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1BCAA3C(currentFigureCollectList, method);
  v39 = afterFigureCollectList->fields._size;
  v40 = afterFigureCollectList->fields._version + 1;
  afterFigureCollectList->fields._size = 0;
  afterFigureCollectList->fields._version = v40;
  if ( v39 >= 1 )
    System_Array__Clear((System_Array_o *)afterFigureCollectList->fields._items, 0, v39, 0LL);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_1BCAA3C(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B19B7F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__EndLoad_b__146_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19B7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__146_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadein(v15, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CombineResultEffectComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v27; // x8
  __int64 v28; // x2
  __int64 v29; // x3
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v36; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v39; // x20
  __int64 v40; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  int32_t v42; // w20
  CombineResultEffectComponent_o *v43; // x0
  int32_t v44; // w21
  const MethodInfo *v45; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v8 = this;
  if ( (byte_4B19B88 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v11, v12);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__EndPlay_b__156_0__, v13, v14);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__EndPlay_b__156_1__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v21, v22);
    this = (CombineResultEffectComponent_o *)sub_1BCA7E0(&StringLiteral_22794/*"playVoice"*/, v23, v24);
    byte_4B19B88 = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
        sub_1BCAA44(this, method);
      v27 = playVoiceList->m_Items[playCnt];
      if ( v27 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_22794/*"playVoice"*/,
          v27->fields.delay,
          0LL);
        return;
      }
    }
LABEL_33:
    sub_1BCAA3C(this, method);
  }
  if ( v8->fields.player )
    CombineResultEffectComponent__stopVoice(v8, method);
  v8->fields.playCnt = 0;
  v8->fields.playVoiceList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  this = (CombineResultEffectComponent_o *)v8->fields.limitUpKinds;
  if ( !this )
    goto LABEL_33;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_Int32Enum___Contains(
                                             (System_Collections_Generic_HashSet_T__o *)this,
                                             v8->fields.kind,
                                             (const MethodInfo_345741C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8->fields.isLimitUpSuppression )
      goto LABEL_13;
    kind = v8->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_13;
    baseUsrSvtData = v8->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_33;
    v40 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v51.fields.currentCryptoKey = v40;
    *(_QWORD *)&v51.fields.fakeValue = v39;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v51,
                                               0LL);
    v41 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v8->fields.baseUsrSvtData;
    if ( !v41 )
      goto LABEL_33;
    v42 = (int)this;
    v43 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v41[6],
                                              0LL);
    v44 = (_DWORD)v43 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v43, v42, (_DWORD)v43 + 1, v45) )
    {
      v46 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1BCAA2C(
                                                                    ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo,
                                                                    method,
                                                                    v28,
                                                                    v29);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v46,
        (Il2CppObject *)v8,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
      System_Action___ctor(v50, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__156_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v42, v44, v46, v50, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v8->fields.limitUpResultCheck;
      v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v28, v29);
      System_Action___ctor(v31, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__156_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_33;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v31, 1, 0LL);
    }
  }
  else if ( v8->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v8, method);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v8, v32) )
    {
      this = (CombineResultEffectComponent_o *)v8->fields.touchInfo;
      if ( !this )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v8->fields.costumeId;
      v36 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
        v36 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v36->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v8, v33);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v8, v8->fields.skillShowIndex, v34);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B19B8D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__FadeoutProcess_b__165_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19B8D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
        v15 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
      v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__165_0__,
        0LL);
      if ( !Instance )
        sub_1BCAA3C(v18, v19);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
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

  if ( (byte_4B19B74 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limit);
    byte_4B19B74 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1BCAA3C(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1BCAA44(v6, *(_QWORD *)&svtId);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantCostumeMaster_o *v20; // x20
  __int64 v21; // x21
  __int64 v22; // x22
  struct UserServantEntity_o *v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x19
  __int64 v26; // x20
  __int64 v27; // x21
  ServantEntity_o *v28; // [xsp+0h] [xbp-40h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B19B8E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantCostumeMaster___,
      *(_QWORD *)&messageId,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B19B8E = 1;
  }
  v28 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_21;
    v20 = (ServantCostumeMaster_o *)Instance;
    v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v30.fields.currentCryptoKey = v22;
    *(_QWORD *)&v30.fields.fakeValue = v21;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v30, 0LL);
    if ( !v20 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v20, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_21:
      sub_1BCAA3C(Instance, v18);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = this->fields.resUsrSvtData;
  if ( !v24 )
    goto LABEL_21;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v27 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v31.fields.currentCryptoKey = v27;
  *(_QWORD *)&v31.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL);
  if ( !v25 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v25,
          (Il2CppObject **)&v28,
          (int32_t)Instance,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v28;
  if ( !v28 )
    goto LABEL_21;
  return ServantEntity__getName(v28, -1, -1, 0LL);
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

  if ( (byte_4B19B6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, fmsString, method);
    byte_4B19B6F = 1;
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
    sub_1BCAA3C(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, *(_QWORD *)&transformCount);
  UserServantEntity__GetTransformedServantInfo(baseUsrSvtData, &transformInfo, transformCount, 0LL);
  return transformInfo;
}


void __fastcall CombineResultEffectComponent__InitChangeInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t Instance; // x0
  __int64 id; // x1
  __int64 v14; // x8
  int64_t v15; // x20
  int v16; // w23
  int v17; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v19; // q1
  int64_t v20; // x21
  __int128 v21; // q0
  int64_t v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v30; // x8
  SkillInfo_o *v31; // x9
  SkillInfo_o *v32; // x8
  bool v33; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v37; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v39; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_4B19B82 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B19B82 = 1;
  }
  v39 = 0LL;
  skillInfoList = 0LL;
  v37 = 0LL;
  tdInfo = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
          if ( Instance )
          {
            v14 = *(_QWORD *)(Instance + 24);
            v15 = Instance;
            v16 = v14 - 1;
            if ( (int)v14 >= 1 )
            {
              v17 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_52;
                v19 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v20 = *(_QWORD *)(v15 + 8LL * v17 + 32);
                *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v36.fields.fakeValue = v19;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, id);
                v35 = v36;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL);
                if ( !v20 )
                  goto LABEL_52;
                v21 = *(_OWORD *)(v20 + 32);
                v22 = Instance;
                *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
                *(_OWORD *)&v34.fields.fakeValue = v21;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
                if ( v22 == Instance )
                  break;
                if ( v16 == v17 )
                  goto LABEL_20;
                if ( (unsigned int)++v17 >= *(_DWORD *)(v15 + 24) )
LABEL_18:
                  sub_1BCAA44(Instance, id);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v20;
              sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, v20, v23, v24, v25, v26, v27, v28);
            }
LABEL_20:
            Instance = (int64_t)this->fields.baseUsrSvtData;
            if ( Instance )
            {
              UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
              Instance = (int64_t)this->fields.resUsrSvtData;
              if ( Instance )
              {
                UserServantEntity__getSkillInfo((UserServantEntity_o *)Instance, &v39, -1, -1, 1, 0, -1, 0LL);
                for ( i = 0; ; ++i )
                {
                  Instance = (int64_t)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, id);
                    Instance = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
                    break;
                  if ( !skillInfoList )
                    goto LABEL_52;
                  if ( i >= skillInfoList->max_length )
                    goto LABEL_18;
                  v30 = skillInfoList->m_Items[i];
                  if ( !v30 || !v39 )
                    goto LABEL_52;
                  if ( i >= v39->max_length )
                    goto LABEL_18;
                  v31 = v39->m_Items[i];
                  if ( !v31 )
                    goto LABEL_52;
                  id = (unsigned int)v30->fields.id;
                  if ( *(_QWORD *)&v30->fields.id != *(_QWORD *)&v31->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v30->fields.lv,
                      0LL);
                    if ( !v39 )
                      goto LABEL_52;
                    if ( i >= v39->max_length )
                      goto LABEL_18;
                    v32 = v39->m_Items[i];
                    if ( !v32 )
                      goto LABEL_52;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v32->fields.id,
                      v32->fields.lv,
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
                    UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Instance, &v37, -1, -1, 0, 0LL);
                    Instance = (int64_t)this->fields.baseUsrSvtData;
                    if ( Instance )
                    {
                      Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
                      if ( (Instance & 1) == 0 )
                      {
                        v33 = 0;
LABEL_50:
                        this->fields.treasureDeviceEnabled = v33;
                        return;
                      }
                      if ( tdInfo && v37 )
                      {
                        v33 = tdInfo->fields.id != v37->fields.id || tdInfo->fields.lv != v37->fields.lv;
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
    sub_1BCAA3C(Instance, id);
  }
}


void __fastcall CombineResultEffectComponent__InitCombineEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  PlayMakerFSM_o *fsm; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x20
  const MethodInfo *v22; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  AvalonSceneManager_c *v28; // x8
  CommonUI_o *v29; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x1

  if ( (byte_4B19B5F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__InitCombineEffect_b__112_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_11491/*"ResultEffect"*/, v10, v11);
    byte_4B19B5F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11491/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_21;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effect, (int64_t)Value, v14, v15, v16, v17, v18, v19);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  v21 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4B109C6 )
  {
    fsm = (PlayMakerFSM_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v20);
    byte_4B109C6 = 1;
  }
  if ( !v21 )
    goto LABEL_21;
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.bgCollider;
  if ( !fsm )
    goto LABEL_21;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)fsm, 0, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.touchInfo;
  if ( !fsm )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  kind = this->fields.kind;
  if ( kind == 16 || kind == 14 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = AvalonSceneManager_TypeInfo;
    v29 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v25);
      v28 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
    v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    System_Action___ctor(
      v31,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__112_0__,
      0LL);
    if ( v29 )
    {
      CommonUI__maskFadein(v29, DEFAULT_FADE_TIME, v31, 0LL);
      return;
    }
LABEL_21:
    sub_1BCAA3C(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v22);
  if ( this->fields.kind == 6 )
    CombineResultEffectComponent__loadBoxGachaEffect(this, v32);
  else
    CombineResultEffectComponent__SetResultServantVoiceData(this, v32);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
  v4 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(npInfoAddManager, 0LL);
  return v4 >= 1 && this->fields.tdShowIndex < v4;
}


bool __fastcall CombineResultEffectComponent__IsShowSkillInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  CombineResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x0
  int v13; // w20
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  bool v18; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B19B89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B19B89 = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v13 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)costumeSkillInfoManager;
  v17 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                                        v21,
                                                                                        0LL);
  if ( !v15 )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v15,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_1BCAA3C(costumeSkillInfoManager, method);
  v18 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)costumeSkillInfoManager, 30, 0LL);
  return v13 >= 1 && !v18 && this->fields.skillShowIndex < v13;
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
    sub_1BCAA3C(0LL, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B19B96 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5545/*"END_ANIMATION"*/, method, v2);
    byte_4B19B96 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1BCAA3C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5545/*"END_ANIMATION"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__OpenLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *monitor; // x8
  __int64 v17; // x20
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  int32_t v20; // w20
  __int64 v21; // x1
  int32_t v22; // w21
  System_String_o *LimitCountSealedDialogMessage; // x0
  __int64 v24; // x1
  LimitCountSealDialogComponent_o *v25; // x21
  System_String_o *v26; // x20
  System_String_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  LimitCountSealDialogComponent_CallbackFunc_o *v31; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v3 = (Il2CppObject *)this;
  if ( (byte_4B19B92 & 1) == 0 )
  {
    sub_1BCA7E0(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    this = (CombineResultEffectComponent_o *)sub_1BCA7E0(&StringLiteral_8373/*"LIMIT_COUNT_SEALED_TITLE"*/, v14, v15);
    byte_4B19B92 = 1;
  }
  monitor = v3[12].monitor;
  if ( !monitor )
    goto LABEL_14;
  v18 = monitor[10];
  v17 = monitor[11];
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v32.fields.currentCryptoKey = v18;
  *(_QWORD *)&v32.fields.fakeValue = v17;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
  v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3[12].monitor;
  if ( !v19 )
    goto LABEL_14;
  v20 = (int)this;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19[6], 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_14;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v20,
                                    v22 + 1,
                                    0LL);
  v25 = (LimitCountSealDialogComponent_o *)v3[9].monitor;
  v26 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8373/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v31 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          LimitCountSealDialogComponent_CallbackFunc_TypeInfo,
                                                          v28,
                                                          v29,
                                                          v30);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v31,
    v3,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !v25 )
LABEL_14:
    sub_1BCAA3C(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v25, v27, v26, v31, 0LL);
}


bool __fastcall CombineResultEffectComponent__OpenNotification(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x19
  __int64 AscensionAfterDialogId; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool v30; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v34; // x21
  __int64 v35; // x22
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x21
  __int64 v38; // x22
  int32_t v39; // w0
  struct UserServantEntity_o *v40; // x8
  int32_t v41; // w21
  __int64 v42; // x22
  __int64 v43; // x23
  int32_t v44; // w0
  __int64 v45; // x1
  int32_t v46; // w22
  int32_t v47; // w23
  const MethodInfo *v48; // x3
  Il2CppObject *NameFromMessageId; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v51; // x0
  __int64 v52; // x1
  System_String_o *v53; // x22
  System_String_o *v54; // x0
  System_String_o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Action_o *v59; // x23
  int v60; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4B19B8F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_CombineResultEffectComponent___c__DisplayClass167_0__OpenNotification_b__0__, v13, v14);
    sub_1BCA7E0(&CombineResultEffectComponent___c__DisplayClass167_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_11688/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B19B8F = 1;
  }
  v21 = sub_1BCAA2C(CombineResultEffectComponent___c__DisplayClass167_0_TypeInfo, method, v2, v3);
  CombineResultEffectComponent___c__DisplayClass167_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass167_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_28;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v30 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v35 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v34 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
      *(_QWORD *)&v61.fields.currentCryptoKey = v35;
      *(_QWORD *)&v61.fields.fakeValue = v34;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
      *(_DWORD *)(v21 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v21 + 24) = this->fields.costumeId;
      v36 = this->fields.resUsrSvtData;
      if ( v36 )
      {
        v38 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
        *(_QWORD *)&v62.fields.currentCryptoKey = v38;
        *(_QWORD *)&v62.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v62, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v39, *(_DWORD *)(v21 + 24), 0LL);
        v60 = AscensionAfterDialogId;
        if ( (_DWORD)AscensionAfterDialogId == -1 )
          return 0;
        v40 = this->fields.resUsrSvtData;
        if ( v40 )
        {
          v41 = AscensionAfterDialogId;
          v43 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
          *(_QWORD *)&v63.fields.currentCryptoKey = v43;
          *(_QWORD *)&v63.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v63, 0LL);
          v46 = *(_DWORD *)(v21 + 24);
          v47 = v44;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v45);
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v47, v46, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v41,
                                                *(_DWORD *)(v21 + 24),
                                                v48);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v51 = System_Int32__ToString((int32_t)&v60, 0LL);
          v53 = System_String__Concat_62401220((System_String_o *)StringLiteral_11688/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v51, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
          v54 = LocalizationManager__Get(v53, 0LL);
          v55 = System_String__Format(v54, NameFromMessageId, 0LL);
          v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v56, v57, v58);
          System_Action___ctor(
            v59,
            (Il2CppObject *)v21,
            Method_CombineResultEffectComponent___c__DisplayClass167_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v30 = 1;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v55,
              v59,
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
            return v30;
          }
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(AscensionAfterDialogId, v23);
  }
  return v30;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x21
  CommonUI_o *UserId; // x0
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
  __int64 v40; // x1
  __int64 v41; // x1
  Il2CppObject *Master_object; // x23
  CommonUI_o *v43; // x22
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v45; // x20
  CommonUI_o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  ServantStatusDialog_EndDelegate_o *v50; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19B95 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__0__, v21, v22);
    sub_1BCA7E0(&CombineResultEffectComponent___c__DisplayClass173_0_TypeInfo, v23, v24);
    byte_4B19B95 = 1;
  }
  entity = 0LL;
  v25 = sub_1BCAA2C(
          CombineResultEffectComponent___c__DisplayClass173_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount,
          isDecide);
  CombineResultEffectComponent___c__DisplayClass173_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass173_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_20;
  *(_QWORD *)(v25 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)finishCallback, v34, v35, v36, v37, v38, v39);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
    UserId = (CommonUI_o *)NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_20;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           (int64_t)UserId,
           svtId,
           0LL) )
    {
      UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = UserId;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v27);
      if ( v43 )
      {
        CommonUI__maskFadein(v43, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          UserId = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( UserId )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)UserId, 0, 0LL);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v45 = entity;
            v46 = (CommonUI_o *)Instance;
            v50 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v47,
                                                         v48,
                                                         v49);
            ServantStatusDialog_EndDelegate___ctor(
              v50,
              (Il2CppObject *)v25,
              Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v46 )
            {
              CommonUI__OpenServantStatusDialog_30778268(v46, 33, v45, limitCount, v50, 0LL);
              return;
            }
          }
        }
      }
LABEL_20:
      sub_1BCAA3C(UserId, v27);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_20;
  CommonUI__CloseConfirmDialog_30766896(UserId, *(System_Action_o **)(v25 + 24), 0LL);
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

  if ( (byte_4B19B8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method, v2);
    byte_4B19B8B = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields.asstName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetAfterLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Component_o *StandFigureNode; // x21
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  DataManager_o *v41; // x22
  Il2CppObject *MasterData_object; // x25
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v44; // x24
  __int64 v45; // x22
  __int64 v46; // x23
  struct UserServantEntity_o *v47; // x8
  int32_t v48; // w22
  int32_t v49; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  __int64 v51; // x1
  int32_t ServantLimitCountSealAfter; // w23
  struct UserServantEntity_o *v53; // x8
  int32_t v54; // w23
  __int64 v55; // x24
  __int64 v56; // x26
  CombineResultEffectComponent_o *v57; // x0
  const MethodInfo *v58; // x3
  char v59; // w24
  System_Collections_Generic_List_object__o *v60; // x25
  _BOOL8 v61; // x0
  __int64 v62; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v65; // x1
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  UnityEngine_Component_o *v74; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v76; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x0
  __int64 v81; // x1
  float v82; // s0
  float v83; // s1
  float v84; // s2
  struct System_Int32_array *v85; // x8
  il2cpp_array_size_t max_length; // w9
  int v87; // s11
  int v88; // s12
  float v89; // s9
  float v90; // s10
  float v91; // s8
  UnityEngine_Transform_o *v92; // x0
  __int64 v93; // x1
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  StandFigureCollect_o *v98; // x28
  __int64 v99; // x0
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  Il2CppClass **v110; // x0
  const MethodInfo *v111; // x2
  UnityEngine_GameObject_o *v112; // x0
  UIStandFigureR_o *v113; // x23
  System_Collections_Generic_List_object__o *v114; // x21
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  StandFigureCollect_o *v118; // x22
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  int32_t masterDataBytes; // w21
  float FadeTime; // s8
  int32_t m_CancellationTokenSource_high; // w22
  int32_t v133; // w20
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+30h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19B72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v20, v21);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&StandFigureCollect_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_8532/*"LimitUpResSvtNodeName"*/, v36, v37);
    byte_4B19B72 = 1;
  }
  entity = 0LL;
  memset(&v136, 0, sizeof(v136));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8532/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v41 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v41,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v41,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_75;
  v44 = (ServantLimitAddMaster_o *)Instance;
  v46 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
  *(_QWORD *)&v138.fields.currentCryptoKey = v46;
  *(_QWORD *)&v138.fields.fakeValue = v45;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v138, 0LL);
  v47 = this->fields.resUsrSvtData;
  if ( !v47 )
    goto LABEL_75;
  v48 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v47->fields.limitCount,
                                0LL);
  if ( !v44 )
    goto LABEL_75;
  v49 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v44, &entity, v48, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_75;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v49 = LimitCountUpResultServantLimitCount;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_75;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v48,
                                 v49,
                                 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v51);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v48, ServantLimitCountSealAfter, 0LL);
  v53 = this->fields.resUsrSvtData;
  if ( !v53 )
    goto LABEL_75;
  v54 = (int)Instance;
  v56 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
  v55 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
  *(_QWORD *)&v139.fields.currentCryptoKey = v56;
  *(_QWORD *)&v139.fields.fakeValue = v55;
  v57 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v139, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v57, (int32_t)v57, v54, v58);
  if ( !MasterData_object )
LABEL_75:
    sub_1BCAA3C(Instance, v40);
  v59 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v48,
                                v54,
                                2,
                                0LL);
  if ( Instance
    && (v60 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v135,
      v60,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v136 = v135;
    while ( 1 )
    {
      v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v136,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v61 )
        break;
      if ( !StandFigureNode )
        sub_1BCAA3C(v61, v62);
      current = (SvtMultiPortraitEntity_o *)v136.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_1BCAA3C(gameObject, v65);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           gameObject,
                           current->fields.portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v59 & 1,
                           -1,
                           0LL);
      v74 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1BCAA3C(0LL, v67);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (int64_t)current,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      transform = UnityEngine_Component__get_transform(v74, 0LL);
      if ( !transform )
        sub_1BCAA3C(0LL, v76);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v78 = UnityEngine_Component__get_transform(v74, 0LL);
        if ( !v78 )
          sub_1BCAA3C(0LL, v79);
        *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Transform__get_localPosition(v78, 0LL);
        v85 = current->fields.commonPosition;
        if ( !v85 )
          sub_1BCAA3C(v80, v81);
        max_length = v85->max_length;
        if ( !max_length )
          sub_1BCAA44(v80, v81);
        if ( max_length == 1 )
          sub_1BCAA44(v80, v81);
        v88 = v85->m_Items[1];
        v87 = v85->m_Items[2];
        v89 = v82;
        v90 = v83;
        v91 = v84;
        v92 = UnityEngine_Component__get_transform(v74, 0LL);
        if ( !v92 )
          sub_1BCAA3C(0LL, v93);
        v140.fields.x = v89 + (float)v88;
        v140.fields.y = v90 + (float)v87;
        v140.fields.z = v91;
        UnityEngine_Transform__set_localPosition(v92, v140, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v74,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v98 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v95, v96, v97);
      StandFigureCollect___ctor(v98, current, (UIStandFigureR_o *)v74, 0LL);
      if ( !afterFigureCollectList )
        sub_1BCAA3C(v99, v100);
      items = afterFigureCollectList->fields._items;
      v108 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1BCAA3C(v99, v100);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v98,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v110[4] = (Il2CppClass *)v98;
        sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 4), (int64_t)v98, v101, v102, v103, v104, v105, v106);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v136,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_75;
    v112 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_38693360(
                                  v112,
                                  v48,
                                  v54,
                                  1,
                                  0,
                                  1,
                                  0LL,
                                  v59 & 1,
                                  -1,
                                  0LL);
    if ( !Instance )
      goto LABEL_75;
    v113 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_75;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v114 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v118 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v115, v116, v117);
    StandFigureCollect___ctor(v118, 0LL, v113, 0LL);
    if ( !v114 )
      goto LABEL_75;
    v125 = v114->fields._items;
    v126 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v114->fields._version;
    if ( !v125 )
      goto LABEL_75;
    v127 = v114->fields._size;
    if ( (unsigned int)v127 >= v125->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v114,
        (Il2CppObject *)v118,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
    }
    else
    {
      v128 = &v125->obj.klass + v127;
      v114->fields._size = v127 + 1;
      v128[4] = (Il2CppClass *)v118;
      sub_1BCA784((PartyOrganizationUtility_o *)(v128 + 4), (int64_t)v118, v119, v120, v121, v122, v123, v124);
    }
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v111);
  masterDataBytes = 0;
  FadeTime = 0.0;
  m_CancellationTokenSource_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1BCAA44(LimitUpSvtVoiceList, v40);
    Instance = (DataManager_o *)LimitUpSvtVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_75;
    m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
    masterDataBytes = (int32_t)Instance->fields.masterDataBytes;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0LL);
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v133 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v133,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( !Instance )
        break;
      UIStandFigureR__SetFace_41776260(
        (UIStandFigureR_o *)Instance,
        m_CancellationTokenSource_high,
        masterDataBytes,
        0LL,
        FadeTime,
        0LL);
      if ( ++v133 >= System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                       (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
        return;
    }
    goto LABEL_75;
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  CombineRootComponent_c *v34; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v36; // x21
  __int64 v37; // x1

  if ( (byte_4B19B5B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, usrSvtData, *(_QWORD *)&currentSkillId);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__108_0__, v13, v14);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v15, v16);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18);
    byte_4B19B5B = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    *(int64_t *)&currentSkillId,
    currentSkillLv,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v25, v26, v27, v28, v29, v30);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v34 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v31);
    v34 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v34->static_fields->COMBINE_ASSET_PATH;
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v31, v32, v33);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__108_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v36, 1, 0LL);
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

  if ( (byte_4B19B6B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3205/*"BaseSvtNodeName"*/, *(_QWORD *)&formId, *(_QWORD *)&overwriteType);
    byte_4B19B6B = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1BCAA3C(0LL, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3205/*"BaseSvtNodeName"*/,
    0,
    overwriteType,
    v9);
}


void __fastcall CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineResultEffectComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v11; // x8
  int32_t v12; // w20
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v3 = this;
  if ( (byte_4B19B70 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    this = (CombineResultEffectComponent_o *)sub_1BCA7E0(&StringLiteral_8531/*"LimitUpBaseSvtNodeName"*/, v6, v7);
    byte_4B19B70 = 1;
  }
  baseUsrSvtData = v3->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v10 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  v11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.baseUsrSvtData;
  if ( !v11 )
LABEL_10:
    sub_1BCAA3C(this, method);
  v12 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v13);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v12, v14, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v3,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8531/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v16);
}


void __fastcall CombineResultEffectComponent__SetCardParam(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  void *resUsrSvtData; // x0
  System_String_o *v76; // x20
  UnityEngine_Transform_o *transform; // x0
  UIExtrusionLabel_o *v78; // x20
  System_String_o *v79; // x20
  UnityEngine_Transform_o *v80; // x0
  UIExtrusionLabel_o *v81; // x20
  struct UserServantEntity_o *v82; // x8
  __int64 v83; // x20
  __int64 v84; // x21
  struct UserServantEntity_o *v85; // x8
  int32_t v86; // w20
  __int64 v87; // x1
  int32_t v88; // w21
  struct UserServantEntity_o *v89; // x8
  struct UserServantEntity_o *v90; // x8
  int32_t v91; // w20
  int32_t v92; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v94; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  float v97; // s8
  _BOOL4 v98; // w20
  __int64 v99; // x23
  int32_t v100; // w20
  unsigned int v101; // w22
  int32_t v102; // w0
  __int64 *v103; // x24
  __int64 *v104; // x8
  __int64 *v105; // x8
  System_String_o *v106; // x20
  UnityEngine_Transform_o *v107; // x0
  UIExtrusionLabel_o *v108; // x20
  System_String_o *v109; // x20
  UnityEngine_Transform_o *v110; // x0
  UIExtrusionLabel_o *v111; // x20
  struct UserServantEntity_o *v112; // x8
  const MethodInfo *v113; // x2
  __int64 *v114; // x20
  __int64 *v115; // x8
  const MethodInfo *v116; // x2
  const MethodInfo *v117; // x2
  unsigned __int64 v118; // x21
  __int64 v119; // x27
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v121; // x9
  struct System_String_array *startAniName; // x8
  int v123; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v125; // w2
  CombineResultEffectComponent_o *v126; // x0
  System_String_o *v127; // x1
  bool v128; // w2
  CombineResultEffectComponent_o *v129; // x0
  System_String_o *v130; // x1
  System_String_o *v131; // x20
  UnityEngine_Transform_o *v132; // x0
  UnityEngine_Component_o *v133; // x20
  float Value; // s0
  float v135; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v137; // x20
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  int64_t *v144; // x8
  int64_t v145; // x1
  PartyOrganizationUtility_o *v146; // x0
  System_String_o *v147; // x20
  UnityEngine_Transform_o *v148; // x0
  const MethodInfo *v149; // x1
  const MethodInfo *v150; // x2
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x2
  const MethodInfo *v153; // x2
  const MethodInfo *v154; // x2
  Il2CppObject *v155; // x21
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  EventDelegate_Callback_o *v159; // x22
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x3
  EventDelegate_o *v163; // x20
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  __int64 v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  __int64 v173; // x8
  const MethodInfo *v174; // x3
  const MethodInfo *v175; // x2
  __int64 v176; // x20
  struct System_String_array *v177; // x8
  int v178; // w9
  const MethodInfo *v179; // x2
  __int64 v180; // x21
  float FadeTime; // s0
  int64_t v182; // x20
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  const MethodInfo *v189; // x1
  __int64 v190; // [xsp+8h] [xbp-68h] BYREF
  __int64 v191; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  UnityEngine_Vector3_o v193; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v194; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19B63 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__SetCardParam_b__116_0__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UILabel___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v11, v12);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v15, v16);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_4851/*"CostumeName"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3205/*"BaseSvtNodeName"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_17444/*"bit_result_120"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17451/*"bit_result_extraskill02"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17460/*"bit_result_nobledeliverance"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12384/*"START_ANIMATION"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_17448/*"bit_result_command_card_exceed"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_17457/*"bit_result_limitbreak"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_17452/*"bit_result_friendship_exceed"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_11461/*"ResMaxLvExceedNodeName"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_17465/*"bit_result_skillrank"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_17446/*"bit_result_advent02"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_17455/*"bit_result_grail_02"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_17466/*"bit_result_skillup"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_4992/*"CrtMaxLvExceedNodeName"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_17461/*"bit_result_powerup"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_13107/*"StartAnimationName"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_17454/*"bit_result_grail_01"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_17445/*"bit_result_advent01"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_17450/*"bit_result_extraskill01"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_17464/*"bit_result_skilldeliverance"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_17467/*"bit_result_skinchange01"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_4993/*"CrtMaxLvNodeName"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_11462/*"ResMaxLvNodeName"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_13257/*"SvtEqCardScale"*/, v73, v74);
    byte_4B19B63 = 1;
  }
  v191 = 0LL;
  v190 = 0LL;
  switch ( this->fields.kind )
  {
    case 0:
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = (void *)UserServantEntity__isLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( ((unsigned __int8)resUsrSvtData & 1) == 0 )
        goto LABEL_86;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_182;
      v121 = this->fields.resUsrSvtData;
      if ( !v121 )
        goto LABEL_182;
      if ( baseUsrSvtData->fields.exp != v121->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_175;
      }
LABEL_86:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_182;
      v123 = this->fields.successInfo - 1;
      if ( v123 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v123];
LABEL_175:
        resUsrSvtData = this->fields.fsm;
        if ( resUsrSvtData )
        {
          v182 = (int64_t)*p_LimitAnimName;
          resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
          if ( resUsrSvtData )
          {
            resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                              (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                              0LL);
            if ( resUsrSvtData )
            {
              *((_QWORD *)resUsrSvtData + 7) = v182;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)((char *)resUsrSvtData + 56),
                v182,
                v183,
                v184,
                v185,
                v186,
                v187,
                v188);
              CombineResultEffectComponent__SetLevelUpSvtFigure(this, v189);
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
                    goto LABEL_165;
                  }
                }
              }
            }
          }
        }
LABEL_182:
        sub_1BCAA3C(resUsrSvtData, method);
      }
      goto LABEL_183;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, method);
      resUsrSvtData = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4993/*"CrtMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v76 = (System_String_o *)resUsrSvtData;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(transform, v76, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_182;
      v78 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v191) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v191 + 4, 0LL);
      if ( !v78 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v78, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11462/*"ResMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v79 = (System_String_o *)resUsrSvtData;
      v80 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v80, v79, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      v81 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v191) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v191, 0LL);
      if ( !v81 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v81, (System_String_o *)resUsrSvtData, 0LL);
      v82 = this->fields.baseUsrSvtData;
      if ( !v82 )
        goto LABEL_182;
      v84 = *(_QWORD *)&v82->fields.svtId.fields.currentCryptoKey;
      v83 = *(_QWORD *)&v82->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v192.fields.currentCryptoKey = v84;
      *(_QWORD *)&v192.fields.fakeValue = v83;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v192, 0LL);
      v85 = this->fields.baseUsrSvtData;
      if ( !v85 )
        goto LABEL_182;
      v86 = (int)resUsrSvtData;
      v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v85->fields.limitCount, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v87);
      resUsrSvtData = (void *)ImageLimitCount__GetImageLimitCount(v86, v88, 0LL);
      v89 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)resUsrSvtData;
      if ( !v89 )
        goto LABEL_182;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v89->fields.svtId,
                                0LL);
      v90 = this->fields.resUsrSvtData;
      if ( !v90 )
        goto LABEL_182;
      v91 = (int)resUsrSvtData;
      v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v90->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v91, v92, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      v97 = 0.0;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v98 = resSvtNameData != 0LL;
      if ( isLimitUpSuppression )
        goto LABEL_27;
      if ( this->fields.oldImgLimitCnt != ImageLimitCount )
        goto LABEL_67;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_182;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)resUsrSvtData, 0LL) )
      {
LABEL_67:
        this->fields.isChangeCardImg = 1;
        CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v94);
        CombineResultEffectComponent__setBaseSvtGraphCard(this, v98, v116);
        CombineResultEffectComponent__setResultSvtGraphCard(this, v98, v117);
        v103 = &StringLiteral_17446/*"bit_result_advent02"*/;
LABEL_159:
        resUsrSvtData = this->fields.fsm;
        if ( !resUsrSvtData )
          goto LABEL_182;
        v176 = *v103;
        goto LABEL_161;
      }
      if ( this->fields.isLimitUpSuppression || !CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v94) )
      {
LABEL_27:
        v99 = 0LL;
        v100 = 0;
        v101 = 0;
        goto LABEL_28;
      }
      resUsrSvtData = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v179);
      if ( !resUsrSvtData )
        goto LABEL_182;
      if ( *((_DWORD *)resUsrSvtData + 6) )
      {
        v180 = *((_QWORD *)resUsrSvtData + 4);
        if ( !v180 )
          goto LABEL_182;
        v101 = *(_DWORD *)(v180 + 28);
        v100 = *(_DWORD *)(v180 + 56);
        FadeTime = ServantVoiceData__GetFadeTime(*((ServantVoiceData_o **)resUsrSvtData + 4), 0LL);
        v99 = *(_QWORD *)(v180 + 32);
        v97 = FadeTime;
LABEL_28:
        v102 = System_Linq_Enumerable__Count_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                 (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( v99 )
        {
          v103 = &StringLiteral_17445/*"bit_result_advent01"*/;
          if ( v102 != *(_DWORD *)(v99 + 24) || v102 <= 0 )
            goto LABEL_159;
        }
        else if ( v102 < 1 )
        {
          v103 = &StringLiteral_17445/*"bit_result_advent01"*/;
          goto LABEL_159;
        }
        v103 = &StringLiteral_17445/*"bit_result_advent01"*/;
        v118 = 0LL;
        if ( v102 <= 1 )
          v119 = 1LL;
        else
          v119 = (unsigned int)v102;
        while ( 1 )
        {
          resUsrSvtData = this->fields.currentFigureCollectList;
          if ( !resUsrSvtData )
            goto LABEL_182;
          resUsrSvtData = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)resUsrSvtData,
                            v118,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !resUsrSvtData )
            goto LABEL_182;
          resUsrSvtData = (void *)*((_QWORD *)resUsrSvtData + 3);
          if ( v99 )
          {
            if ( v118 >= *(unsigned int *)(v99 + 24) )
              goto LABEL_183;
            if ( !resUsrSvtData )
              goto LABEL_182;
            LODWORD(method) = *(_DWORD *)(v99 + 32 + 4 * v118);
          }
          else
          {
            method = (const MethodInfo *)v101;
            if ( !resUsrSvtData )
              goto LABEL_182;
          }
          UIStandFigureR__SetFace_41776260((UIStandFigureR_o *)resUsrSvtData, (int32_t)method, v100, 0LL, v97, 0LL);
          if ( v119 == ++v118 )
            goto LABEL_159;
        }
      }
      goto LABEL_183;
    case 2:
      v125 = 1;
      v126 = this;
      v127 = (System_String_o *)StringLiteral_17466/*"bit_result_skillup"*/;
      goto LABEL_92;
    case 3:
      v105 = &StringLiteral_17464/*"bit_result_skilldeliverance"*/;
      goto LABEL_91;
    case 4:
      v128 = 1;
      v129 = this;
      v130 = (System_String_o *)StringLiteral_17466/*"bit_result_skillup"*/;
      goto LABEL_96;
    case 5:
      v104 = &StringLiteral_17460/*"bit_result_nobledeliverance"*/;
      goto LABEL_95;
    case 6:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_3205/*"BaseSvtNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v131 = (System_String_o *)resUsrSvtData;
      v132 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v132, v131, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_182;
      v133 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13257/*"SvtEqCardScale"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)resUsrSvtData, 0LL);
      if ( !v133 )
        goto LABEL_182;
      v135 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v133, 0LL);
      resUsrSvtData = CharaGraphManager__CreateTexturePrefab_38621504(
                        gameObject,
                        this->fields.resUsrSvtData,
                        10,
                        0LL,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v137 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v193.fields.z = 0.0;
      v193.fields.x = -50.0;
      v193.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)resUsrSvtData, v193, 0LL);
      resUsrSvtData = UnityEngine_Component__get_transform(v137, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v194.fields.x = v135;
      v194.fields.y = v135;
      v194.fields.z = v135;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)resUsrSvtData, v194, 0LL);
      resUsrSvtData = this->fields.svtResultInfoWindow;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resUsrSvtData, 1, 0LL);
      resUsrSvtData = this->fields.svtResultInfoWindow;
      if ( !resUsrSvtData )
        goto LABEL_182;
      SvtCombineResultWindowComponent__setBefSvtEqResultState(
        (SvtCombineResultWindowComponent_o *)resUsrSvtData,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        this->fields.normalExp,
        this->fields.addTotalExp,
        0LL);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = (void *)UserServantEntity__isLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
      {
        v115 = (__int64 *)&this->fields.LimitAnimName;
      }
      else
      {
        v177 = this->fields.startAniName;
        if ( !v177 )
          goto LABEL_182;
        v178 = this->fields.successInfo - 1;
        if ( v178 >= v177->max_length )
LABEL_183:
          sub_1BCAA44(resUsrSvtData, method);
        v115 = (__int64 *)&v177->m_Items[v178];
      }
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
LABEL_157:
      v176 = *v115;
      goto LABEL_161;
    case 7:
    case 0x15:
      v105 = &StringLiteral_17465/*"bit_result_skillrank"*/;
LABEL_91:
      v127 = (System_String_o *)*v105;
      v126 = this;
      v125 = 0;
LABEL_92:
      CombineResultEffectComponent__SetCardParam_Skill(v126, v127, v125, v3);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v104 = &StringLiteral_17465/*"bit_result_skillrank"*/;
LABEL_95:
      v130 = (System_String_o *)*v104;
      v129 = this;
      v128 = 0;
LABEL_96:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v129, v130, v128, v3);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v3);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v144 = &StringLiteral_17466/*"bit_result_skillup"*/;
      goto LABEL_122;
    case 0xB:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v3);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v144 = &StringLiteral_17461/*"bit_result_powerup"*/;
LABEL_122:
      v145 = *v144;
      *((_QWORD *)resUsrSvtData + 7) = *v144;
      v146 = (PartyOrganizationUtility_o *)((char *)resUsrSvtData + 56);
      goto LABEL_164;
    case 0xC:
    case 0x16:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 2, v3);
      resUsrSvtData = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4992/*"CrtMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v106 = (System_String_o *)resUsrSvtData;
      v107 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v107, v106, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_182;
      v108 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v190) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v190 + 4, 0LL);
      if ( !v108 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v108, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11461/*"ResMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v109 = (System_String_o *)resUsrSvtData;
      v110 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v110, v109, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      v111 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v190) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v190, 0LL);
      if ( !v111 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v111, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_182;
      if ( *((_DWORD *)resUsrSvtData + 74) )
        goto LABEL_53;
      v112 = this->fields.resUsrSvtData;
      if ( !v112 )
        goto LABEL_182;
      if ( v112->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_53:
      resUsrSvtData = (void *)UserServantEntity__getFrameType((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      if ( (_DWORD)resUsrSvtData != UserServantEntity__getFrameType(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = (void *)UserServantEntity__getRarityIcon((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      if ( (_DWORD)resUsrSvtData != UserServantEntity__getRarityIcon(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        v114 = &StringLiteral_17457/*"bit_result_limitbreak"*/;
LABEL_144:
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v113);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v175);
        goto LABEL_145;
      }
      if ( this->fields.isChangeCardImg )
      {
        v114 = &StringLiteral_17455/*"bit_result_grail_02"*/;
        goto LABEL_144;
      }
      v114 = &StringLiteral_17454/*"bit_result_grail_01"*/;
LABEL_145:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v176 = *v114;
LABEL_161:
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      *((_QWORD *)resUsrSvtData + 7) = v176;
      v146 = (PartyOrganizationUtility_o *)((char *)resUsrSvtData + 56);
      v145 = v176;
LABEL_164:
      sub_1BCA784(v146, v145, v138, v139, v140, v141, v142, v143);
LABEL_165:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resUsrSvtData, (System_String_o *)StringLiteral_12384/*"START_ANIMATION"*/, 0LL);
      return;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v3);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v115 = &StringLiteral_17452/*"bit_result_friendship_exceed"*/;
      goto LABEL_157;
    case 0xF:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4851/*"CostumeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v147 = (System_String_o *)resUsrSvtData;
      v148 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v148, v147, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !resUsrSvtData )
        goto LABEL_182;
      UILabel__set_text((UILabel_o *)resUsrSvtData, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v149);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v150);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v151);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v115 = &StringLiteral_17467/*"bit_result_skinchange01"*/;
      goto LABEL_157;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v3);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v115 = &StringLiteral_17448/*"bit_result_command_card_exceed"*/;
      goto LABEL_157;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v152);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v153);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v154);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v115 = &StringLiteral_17444/*"bit_result_120"*/;
      goto LABEL_157;
    case 0x19:
      resUsrSvtData = this->fields.effect;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v155 = UnityEngine_GameObject__AddComponent_object_(
               (UnityEngine_GameObject_o *)resUsrSvtData,
               (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v159 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v156, v157, v158);
      EventDelegate_Callback___ctor(
        v159,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__116_0__,
        0LL);
      v163 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v160, v161, v162);
      EventDelegate___ctor_47348668(v163, v159, 0LL);
      if ( !v155 )
        goto LABEL_182;
      resUsrSvtData = v155[2].klass;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v170 = *((_QWORD *)resUsrSvtData + 2);
      v171 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++*((_DWORD *)resUsrSvtData + 7);
      if ( !v170 )
        goto LABEL_182;
      v172 = *((int *)resUsrSvtData + 6);
      if ( (unsigned int)v172 >= *(_DWORD *)(v170 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resUsrSvtData,
          (Il2CppObject *)v163,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
      }
      else
      {
        v173 = v170 + 8 * v172;
        *((_DWORD *)resUsrSvtData + 6) = v172 + 1;
        *(_QWORD *)(v173 + 32) = v163;
        sub_1BCA784((PartyOrganizationUtility_o *)(v173 + 32), (int64_t)v163, v164, v165, v166, v167, v168, v169);
      }
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v174);
      resUsrSvtData = this->fields.fsm;
      v115 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17451/*"bit_result_extraskill02"*/ : &StringLiteral_17450/*"bit_result_extraskill01"*/);
      if ( !resUsrSvtData )
        goto LABEL_182;
      goto LABEL_157;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  int *effect; // x0
  Il2CppObject *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  EventDelegate_Callback_o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  EventDelegate_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B19B66 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, startName, isSkip);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__119_0__, v7, v8);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12384/*"START_ANIMATION"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_13107/*"StartAnimationName"*/, v17, v18);
    byte_4B19B66 = 1;
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
    v21 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)effect,
            (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v25 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v22, v23, v24);
    EventDelegate_Callback___ctor(
      v25,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__119_0__,
      0LL);
    v29 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v26, v27, v28);
    EventDelegate___ctor_47348668(v29, v25, 0LL);
    if ( !v21
      || (effect = (int *)v21[2].klass) == 0LL
      || (v36 = *((_QWORD *)effect + 2),
          v37 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v36) )
    {
LABEL_17:
      sub_1BCAA3C(effect, v19);
    }
    v38 = effect[6];
    if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v29,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = v36 + 8 * v38;
      effect[6] = v38 + 1;
      *(_QWORD *)(v39 + 32) = v29;
      sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v29, v30, v31, v32, v33, v34, v35);
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
                    (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                    0LL);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1BCA784((PartyOrganizationUtility_o *)(effect + 14), (int64_t)startName, v40, v41, v42, v43, v44, v45);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12384/*"START_ANIMATION"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCardParam_TreasureDvc(
        CombineResultEffectComponent_o *this,
        System_String_o *startName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int *effect; // x0
  Il2CppObject *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  EventDelegate_Callback_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  EventDelegate_o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B19B67 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, startName, isSkip);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__120_0__, v7, v8);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12384/*"START_ANIMATION"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_13107/*"StartAnimationName"*/, v17, v18);
    byte_4B19B67 = 1;
  }
  if ( isSkip )
  {
    effect = (int *)this->fields.effect;
    if ( !effect )
      goto LABEL_20;
    effect = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL);
    if ( !effect )
      goto LABEL_20;
    v20 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)effect,
            (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v24 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v21, v22, v23);
    EventDelegate_Callback___ctor(
      v24,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__120_0__,
      0LL);
    v28 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v25, v26, v27);
    EventDelegate___ctor_47348668(v28, v24, 0LL);
    if ( !v20 )
      goto LABEL_20;
    effect = (int *)v20[2].klass;
    if ( !effect )
      goto LABEL_20;
    v35 = *((_QWORD *)effect + 2);
    v36 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++effect[7];
    if ( !v35 )
      goto LABEL_20;
    v37 = effect[6];
    if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v28,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = v35 + 8 * v37;
      effect[6] = v37 + 1;
      *(_QWORD *)(v38 + 32) = v28;
      sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)v28, v29, v30, v31, v32, v33, v34);
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
                          (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                          0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_1BCA784((PartyOrganizationUtility_o *)(effect + 14), (int64_t)startName, v39, v40, v41, v42, v43, v44),
        (effect = (int *)this->fields.fsm) == 0LL) )
  {
LABEL_20:
    sub_1BCAA3C(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12384/*"START_ANIMATION"*/, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t v20; // x2
  char v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  char v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  CombineRootComponent_c *v37; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v39; // x21
  __int64 v40; // x1

  if ( (byte_4B19B5E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, baseData, callback);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__SetCombineLimit_b__111_0__, v12, v13);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v14, v15);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    byte_4B19B5E = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    (int64_t)callback,
    autoFadeout,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v26, v27, v28, v29, v30, v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v33);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v37 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v34);
    v37 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v37->static_fields->EXCEED_ASSET_PATH;
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v34, v35, v36);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__111_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v40);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v39, 1, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
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
  AssetData_o *effectAssetData; // x0
  __int64 v38; // x1
  CombineRootComponent_c *v39; // x0
  __int64 v40; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *v42; // x20
  __int64 v43; // x2
  UnityEngine_Transform_o *v44; // x21

  if ( (byte_4B19B58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, userServantEntity, *(_QWORD *)&cardIndex);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_17448/*"bit_result_command_card_exceed"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11491/*"ResultEffect"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12389/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v23, v24);
    byte_4B19B58 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v25, v26, v27, v28, v29, v30);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  if ( !userServantEntity )
    goto LABEL_18;
  this->fields.displayCount = UserServantEntity__GetTransformCount(userServantEntity, 0, 0LL);
  v39 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v38);
    v39 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v39->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_18;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17448/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49237568,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v42 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v44 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C6 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v38, v43);
    byte_4B109C6 = 1;
  }
  if ( !v44
    || (UnityEngine_Transform__set_localScale(v44, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11491/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v42,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(effectAssetData, v38);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12389/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
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
  __int64 v14; // x2
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v36; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1

  if ( (byte_4B19B52 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo, userSvtEntity, *(_QWORD *)&costumeId);
    sub_1BCA7E0(&StringLiteral_12393/*"START_COSTUME_EFFECT"*/, v13, v14);
    byte_4B19B52 = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v21, v22, v23, v24, v25, v26);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.setResUsrSvtData = 0;
  v36 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1BCAA2C(
                                                                    CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo,
                                                                    v33,
                                                                    v34,
                                                                    v35);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v36, 0LL);
  this->fields.costumeSkillInfoManager = v36;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.costumeSkillInfoManager,
    (int64_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v44);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12393/*"START_COSTUME_EFFECT"*/, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
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
  __int64 v35; // x1
  CombineRootComponent_c *v36; // x0
  AssetData_o *effectAssetData; // x0
  __int64 v38; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *v40; // x20
  __int64 v41; // x2
  UnityEngine_Transform_o *v42; // x21

  if ( (byte_4B19B56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, userSvtData, callback);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_17452/*"bit_result_friendship_exceed"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11491/*"ResultEffect"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12396/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v21, v22);
    byte_4B19B56 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v23, v24, v25, v26, v27, v28);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.setResUsrSvtData = 0;
  v36 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v35);
    v36 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v36->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17452/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49237568,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v40 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v42 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C6 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v35, v41);
    byte_4B109C6 = 1;
  }
  if ( !v42
    || (UnityEngine_Transform__set_localScale(v42, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11491/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v40,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(effectAssetData, v35);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12396/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  CombineRootComponent_c *v37; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v39; // x21
  __int64 v40; // x1

  if ( (byte_4B19B57 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, userSvtData, *(_QWORD *)&oldFriendShipRank);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__104_0__, v12, v13);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v14, v15);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    byte_4B19B57 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v20, v21, v22, v23, v24, v25);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v33);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v37 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v34);
    v37 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v37->static_fields->COMBINE_ASSET_PATH;
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v34, v35, v36);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__104_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v40);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v39, 1, 0LL);
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

  if ( (byte_4B19B4C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12395/*"START_FRIENDSHIPUP_EFFECT"*/, usrSvtData, *(_QWORD *)&oldFriendShipRank);
    byte_4B19B4C = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    *(int64_t *)&oldFriendShipRank,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v18, v19, v20, v21, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12395/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLevelUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineResultEffectComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v13; // x20
  __int64 v14; // x21
  int32_t v15; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  ServantScriptEntity_o *Entity_40550276; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  ServantVoiceData_array *v28; // x1
  PartyOrganizationUtility_o *p_playVoiceList; // x0
  const MethodInfo *v30; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v32; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v34; // x0
  const MethodInfo *v35; // x2
  struct UserServantEntity_o *v36; // x8
  CombineResultEffectComponent_o *v37; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_String_o *v45; // x0
  __int64 v46; // x1
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v48; // x21
  const MethodInfo *v49; // x2
  struct UserServantEntity_o *v50; // x8
  CombineResultEffectComponent_o *v51; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_String_o *v59; // x0
  __int64 v60; // x1
  ServantVoiceEntity_o *v61; // x20
  UserServantEntity_o *v62; // x21
  ServantVoiceData_array *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int v70; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  v3 = this;
  if ( (byte_4B19B6D & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantScriptMaster___, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    this = (CombineResultEffectComponent_o *)sub_1BCA7E0(&string___TypeInfo, v10, v11);
    byte_4B19B6D = 1;
  }
  baseUsrSvtData = v3->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  v14 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v71.fields.currentCryptoKey = v14;
  *(_QWORD *)&v71.fields.fakeValue = v13;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v71, 0LL);
  if ( !v3->fields.baseUsrSvtData )
    goto LABEL_48;
  v15 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v3->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v15, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_40550276 = ServantScriptMaster__GetEntity_40550276((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_40550276 && v3->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_40550276, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v3->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v3->fields.combineVoiceId;
      method = (const MethodInfo *)v3->fields.baseUsrSvtData;
LABEL_19:
      v21 = ServantVoiceEntity__lotteryLevelUpVoice_40589396(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0LL);
LABEL_20:
      v28 = v21;
      p_playVoiceList = (PartyOrganizationUtility_o *)&v3->fields.playVoiceList;
      v3->fields.playVoiceList = v28;
      goto LABEL_21;
    }
    method = (const MethodInfo *)v3->fields.baseUsrSvtData;
    if ( method )
    {
      v70 = *(_DWORD *)&method[2].slot;
      resUsrSvtData = v3->fields.resUsrSvtData;
      if ( resUsrSvtData )
      {
        combineVoiceId = v3->fields.combineVoiceId;
        if ( combineVoiceId )
        {
          this = (CombineResultEffectComponent_o *)v3->fields.svtVoiceEntity;
          if ( !this )
            goto LABEL_48;
          goto LABEL_19;
        }
        if ( System_Int32__Equals_63206656((int32_t)&v70, resUsrSvtData->fields.lv, 0LL) )
        {
          v34 = v3;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v34, form, 1, v30);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1BCA888(string___TypeInfo, 1LL);
        v36 = v3->fields.baseUsrSvtData;
        if ( v36 )
        {
          v37 = this;
          p_svtId = &v36->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v72.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v72.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v72, v35);
          if ( v37 )
          {
            if ( !LODWORD(v37->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v37->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v37->fields.svtResultInfoWindow,
              (int64_t)this,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            v45 = System_String__Concat_62414748((System_String_array *)v37, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_70111952(v45, 0LL) == 1 )
            {
              svtVoiceEntity = v3->fields.svtVoiceEntity;
              v48 = v3->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v46);
              v21 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v48, 0LL);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1BCA888(string___TypeInfo, 1LL);
            v50 = v3->fields.baseUsrSvtData;
            if ( v50 )
            {
              v51 = this;
              v52 = &v50->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
              *(_QWORD *)&v73.fields.currentCryptoKey = v52;
              *(_QWORD *)&v73.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v73, v49);
              if ( v51 )
              {
                if ( !LODWORD(v51->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v51->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v51->fields.svtResultInfoWindow,
                  (int64_t)this,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57,
                  v58);
                v59 = System_String__Concat_62414748((System_String_array *)v51, 0LL);
                UnityEngine_PlayerPrefs__SetInt(v59, 1, 0LL);
                v61 = v3->fields.svtVoiceEntity;
                v62 = v3->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v60);
                v63 = CombineResultFormManager__lotteryCombineResultInit(v61, v62, 0LL);
                v3->fields.playVoiceList = v63;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v3->fields.playVoiceList,
                  (int64_t)v63,
                  v64,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69);
                playVoiceList = v3->fields.playVoiceList;
                if ( playVoiceList )
                {
LABEL_22:
                  if ( playVoiceList->max_length )
                  {
                    v32 = playVoiceList->m_Items[0];
                    if ( !v32 )
                      goto LABEL_48;
                    form = v32->fields.form;
                    v34 = v3;
                    goto LABEL_25;
                  }
LABEL_49:
                  sub_1BCAA44(this, method);
                }
                this = (CombineResultEffectComponent_o *)v3->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v28 = ServantVoiceEntity__lotteryLevelUpVoice_40589396(
                        (ServantVoiceEntity_o *)this,
                        v3->fields.baseUsrSvtData,
                        v3->fields.combineVoiceId,
                        0LL);
                v3->fields.playVoiceList = v28;
                p_playVoiceList = (PartyOrganizationUtility_o *)&v3->fields.playVoiceList;
LABEL_21:
                sub_1BCA784(p_playVoiceList, (int64_t)v28, v22, v23, v24, v25, v26, v27);
                playVoiceList = v3->fields.playVoiceList;
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
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *LimitUpSvtVoiceList; // x0
  __int64 v14; // x1
  int32_t v15; // w20
  __int64 v16; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w21
  int32_t v22; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v25; // x5
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B19B73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace, method);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_8532/*"LimitUpResSvtNodeName"*/, v11, v12);
    byte_4B19B73 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = (DataManager_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v15 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.m_CancellationTokenSource) )
      sub_1BCAA44(LimitUpSvtVoiceList, v14);
    v16 = *(_QWORD *)&LimitUpSvtVoiceList->fields._DispLog;
    if ( !v16 )
      goto LABEL_21;
    v15 = *(_DWORD *)(v16 + 28);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_21;
  v19 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  LimitUpSvtVoiceList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  v20 = this->fields.resUsrSvtData;
  if ( !v20 )
    goto LABEL_21;
  v21 = (int)LimitUpSvtVoiceList;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = (DataManager_o *)DataManager__GetMasterData_object_(
                                           LimitUpSvtVoiceList,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v21, v22, 0LL) )
    goto LABEL_18;
  LimitUpSvtVoiceList = (DataManager_o *)entity;
  if ( !entity )
LABEL_21:
    sub_1BCAA3C(LimitUpSvtVoiceList, v14);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v22 = LimitCountUpResultServantLimitCount;
LABEL_18:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v14);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v21, v22, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v21,
    ImageLimitCount,
    v15,
    (System_String_o *)StringLiteral_8532/*"LimitUpResSvtNodeName"*/,
    v25);
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v56; // x1
  __int64 v57; // x21
  __int64 v58; // x22
  int32_t v59; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v61; // x8
  ServantLimitImageMaster_o *v62; // x20
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_4B19B50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&kind, baseData);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&StringLiteral_12399/*"START_LIMITUP_EFFECT"*/, v23, v24);
    byte_4B19B50 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resSvtNameData,
    (int64_t)servantChange,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v37, v38, v39, v40, v41, v42);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.limitUpPlayVoiceLabel,
    (int64_t)playVoiceLabel,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.limitUpRewardGiftDataList,
    (int64_t)rewardGiftDataList,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_13;
  v58 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v57 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
  *(_QWORD *)&v65.fields.currentCryptoKey = v58;
  *(_QWORD *)&v65.fields.fakeValue = v57;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v65, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v61 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v66.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v62 = (ServantLimitImageMaster_o *)MasterData_object;
  *(_QWORD *)&v66.fields.currentCryptoKey = v61;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v62
    || (gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v62,
                                                   (int32_t)gameObject,
                                                   v59 + 1,
                                                   0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = (unsigned __int8)gameObject & 1,
        !fsm) )
  {
LABEL_13:
    sub_1BCAA3C(gameObject, v56);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12399/*"START_LIMITUP_EFFECT"*/, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t Int_70111952; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  int64_t v45; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_String_o *v53; // x0
  const MethodInfo *v54; // x2
  int64_t v55; // x21
  __int64 v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *v63; // x0
  __int64 v64; // x1
  UserServantEntity_o *v65; // x20
  CombineRootComponent_c *v66; // x0
  __int64 v67; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *v69; // x20
  __int64 v70; // x2
  UnityEngine_Transform_o *v71; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4B19B54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, usrSvtData, callback);
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&string___TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_12400/*"START_LVEXCEED_EFFECT"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17453/*"bit_result_grail"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11491/*"ResultEffect"*/, v27, v28);
    byte_4B19B54 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v36, v37, v38, v39, v40, v41);
  Int_70111952 = sub_1BCA888(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v45 = Int_70111952;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
  *(_QWORD *)&v72.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v72.fields.fakeValue = 0LL;
  Int_70111952 = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v72, v44);
  if ( !v45 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v45 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v45 + 32) = Int_70111952;
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 32), Int_70111952, v47, v48, v49, v50, v51, v52);
  v53 = System_String__Concat_62414748((System_String_array *)v45, 0LL);
  Int_70111952 = UnityEngine_PlayerPrefs__GetInt_70111952(v53, 0LL);
  if ( (_DWORD)Int_70111952 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_70111952 = sub_1BCA888(string___TypeInfo, 1LL);
      if ( *p_baseUsrSvtData )
      {
        v55 = Int_70111952;
        v56 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
        *(_QWORD *)&v73.fields.currentCryptoKey = v56;
        *(_QWORD *)&v73.fields.fakeValue = 0LL;
        Int_70111952 = (int64_t)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v73, v54);
        if ( v55 )
        {
          if ( *(_DWORD *)(v55 + 24) )
          {
            *(_QWORD *)(v55 + 32) = Int_70111952;
            sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 32), Int_70111952, v57, v58, v59, v60, v61, v62);
            v63 = System_String__Concat_62414748((System_String_array *)v55, 0LL);
            UnityEngine_PlayerPrefs__SetInt(v63, 0, 0LL);
            v65 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v64);
            CombineResultFormManager__ResetVoiceList(v65, 0LL);
            goto LABEL_19;
          }
LABEL_34:
          sub_1BCAA44(Int_70111952, v43);
        }
      }
LABEL_33:
      sub_1BCAA3C(Int_70111952, v43);
    }
  }
LABEL_19:
  v66 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v43);
    v66 = CombineRootComponent_TypeInfo;
  }
  Int_70111952 = (int64_t)v66->static_fields->effectAssetData;
  if ( !Int_70111952 )
    goto LABEL_33;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)Int_70111952,
                              (System_String_o *)StringLiteral_17453/*"bit_result_grail"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
  Int_70111952 = (int64_t)UnityEngine_Object__Instantiate_object_(
                            Object_object__49237568,
                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_70111952 )
    goto LABEL_33;
  v69 = (UnityEngine_GameObject_o *)Int_70111952;
  Int_70111952 = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_70111952, 0LL);
  v71 = (UnityEngine_Transform_o *)Int_70111952;
  if ( !byte_4B109C6 )
  {
    Int_70111952 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v43, v70);
    byte_4B109C6 = 1;
  }
  if ( !v71 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v71, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Int_70111952 = (int64_t)this->fields.fsm;
  if ( !Int_70111952 )
    goto LABEL_33;
  Int_70111952 = (int64_t)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_70111952, 0LL);
  if ( !Int_70111952 )
    goto LABEL_33;
  Int_70111952 = (int64_t)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_70111952,
                            (System_String_o *)StringLiteral_11491/*"ResultEffect"*/,
                            0LL);
  if ( !Int_70111952 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_70111952, v69, 0LL);
  Int_70111952 = (int64_t)this->fields.fsm;
  if ( !Int_70111952 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_70111952, (System_String_o *)StringLiteral_12400/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
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
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  CombineRootComponent_c *v36; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  __int64 v39; // x1

  if ( (byte_4B19B55 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, usrSvtData, callback);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__102_0__, v11, v12);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    byte_4B19B55 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v25, v26, v27, v28, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v32);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v36 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v33);
    v36 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v36->static_fields->EXCEED_ASSET_PATH;
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v33, v34, v35);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__102_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v39);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v38, 1, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  char *gameObject; // x0
  __int64 v50; // x1
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  System_String_o *v53; // x23
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v55; // x21
  UnityEngine_Transform_o *v56; // x0
  int *v57; // x21
  System_String_o *v58; // x22
  UnityEngine_Transform_o *v59; // x0
  UnityEngine_ParticleSystem_o *v60; // x22
  float v61; // s0
  const MethodInfo *v62; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v64; // x4
  struct ServantChangeEntity_o *v65; // x8
  int32_t v66; // w3
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x1
  UnityEngine_ParticleSystem_MinMaxCurve_o v74; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v75; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v76; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v78; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v79; // 0:x0.8
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19B51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, before, after);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&StringLiteral_11463/*"ResNameNodeName"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_12401/*"START_NAME_REVEAL_EFFECT"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_9487/*"NameRevealCrossFade"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_4994/*"CrtNameNodeName"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_17458/*"bit_result_name_reveal"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_13107/*"StartAnimationName"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_9488/*"NameRevealParticleNodeName"*/, v34, v35);
    byte_4B19B51 = 1;
  }
  v76 = 0LL;
  m_ParticleSystem = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.crtSvtNameData,
    (int64_t)before,
    (int64_t)after,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.resSvtNameData = after;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resSvtNameData, (int64_t)after, v37, v38, v39, v40, v41, v42);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v43, v44, v45, v46, v47, v48);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12401/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4994/*"CrtNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v53 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v53, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11463/*"ResNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v55 = (System_String_o *)gameObject;
  v56 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v56, v55, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v57 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9488/*"NameRevealParticleNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v58 = (System_String_o *)gameObject;
  v59 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v59, v58, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v60 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v76 = UnityEngine_ParticleSystem__get_shape(v60, 0LL).fields.m_ParticleSystem;
  v61 = (float)((float)v57[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v75, 0, sizeof(v75));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v75, v61, 0LL);
  v78.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v74 = v75;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v78, &v74, 0LL);
  v80.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v79.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v76;
  v80.fields.x = (float)((float)v57[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v80.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v79, v80, 0LL);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v62);
  v65 = this->fields.crtSvtNameData;
  if ( !v65 )
    goto LABEL_40;
  v66 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v65->fields.svtId, v65->fields.limitCount, v66, v64);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_1BCAA3C(gameObject, v50);
  }
  v73 = StringLiteral_17458/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17458/*"bit_result_name_reveal"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(gameObject + 56), v73, v67, v68, v69, v70, v71, v72);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9487/*"NameRevealCrossFade"*/,
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
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
  __int64 v47; // x1
  ServantTreasureDeviceAddMaster_o *Master_object; // x0
  __int64 v49; // x1
  ServantTreasureDeviceAddMaster_o *v50; // x22
  __int64 v51; // x25
  __int64 v52; // x26
  int32_t v53; // w25
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x25
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v58; // x26
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x22
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x26
  __int64 v70; // x27
  ServantTreasureDeviceAddMaster_o *v71; // x23
  int32_t v72; // w0
  __int64 v73; // x8
  int32_t v74; // w24
  __int64 v75; // x2
  int32_t v76; // w26
  ServantTreasureDeviceAddEntity_o *EnableEntityBeforeClearQuest; // x23
  __int64 v78; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v80; // x8
  __int64 v81; // x8
  int32_t TransformCount; // w0
  int32_t v83; // w25
  int32_t i; // w26
  __int64 v85; // x2
  TerminalPramsManager_c *v86; // x0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v87; // x28
  int32_t id; // w29
  int32_t v89; // w3
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v90; // x0
  int32_t v91; // w1
  int32_t v92; // w2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v93; // x28
  int32_t v94; // w29
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v95; // x28
  int32_t v96; // w29
  __int64 v97; // x26
  struct System_Int32_array *v98; // x8
  struct System_Int32_array *v99; // x8
  __int64 v100; // x8
  __int64 v101; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  TreasureDvcInfo_o *v104; // [xsp+0h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_4B19B4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, *(_QWORD *)&kind, usrSvtData);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_12402/*"START_NOBLEUP_EFFECT"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_13597/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_13598/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v33, v34);
    byte_4B19B4B = 1;
  }
  v104 = 0LL;
  tdInfo = 0LL;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)usrSvtData,
    targetId,
    *(System_String_o **)&targetLv,
    (BattleSetupInfo_o *)callback,
    *(FollowerInfo_o **)&targetIdOld,
    *(PartyListViewItem_o **)&targetLvOld);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v35, v36, v37, v38, v39, v40);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v41, v42, v43, v44, v45, v46);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v50 = Master_object;
  v52 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49);
  *(_QWORD *)&v106.fields.currentCryptoKey = v52;
  *(_QWORD *)&v106.fields.fakeValue = v51;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v106, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                        usrSvtData->fields.limitCount,
                                                        0LL);
  if ( !v50 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v50, v53, (int32_t)Master_object, 0, 0, 0LL);
  v58 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1BCAA2C(
                                                                      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo,
                                                                      v55,
                                                                      v56,
                                                                      v57);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v58, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.npInfoAddManager, (int64_t)v58, v60, v61, v62, v63, v64, v65);
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66);
      v67 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v70 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v69 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v71 = (ServantTreasureDeviceAddMaster_o *)v67;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v68);
      *(_QWORD *)&v107.fields.currentCryptoKey = v70;
      *(_QWORD *)&v107.fields.fakeValue = v69;
      v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v107, 0LL);
      v73 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v108.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v74 = v72;
      *(_QWORD *)&v108.fields.currentCryptoKey = v73;
      v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v108, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49);
      if ( !byte_4B12DC3 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v49, v75);
        byte_4B12DC3 = 1;
      }
      Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49);
        Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v71 )
        goto LABEL_72;
      EnableEntityBeforeClearQuest = ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
                                       v71,
                                       v74,
                                       v76,
                                       *(_DWORD *)&Master_object[2].fields._MasterName_k__BackingField->fields._firstChar,
                                       0LL);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        if ( EnableEntityBeforeClearQuest )
        {
          v78 = 8LL;
          while ( 1 )
          {
            treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
            if ( !treasureDeviceIds )
              break;
            if ( v78 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&treasureDeviceIds->obj.klass + v78),
              targetLv,
              0,
              0LL);
            v80 = EnableEntity->fields.treasureDeviceIds;
            if ( !v80 )
              break;
            if ( v78 - 8 >= (unsigned __int64)v80->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&v80->obj.klass + v78),
              targetLv,
              0,
              0LL);
            Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                  (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
            v81 = v78 - 7;
            ++v78;
            if ( v81 >= (int)Master_object )
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
                                                            (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        v97 = 8LL;
        while ( 1 )
        {
          v98 = EnableEntity->fields.treasureDeviceIds;
          if ( !v98 )
            break;
          if ( v97 - 8 >= (unsigned __int64)v98->max_length )
            goto LABEL_73;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v98->obj.klass + v97),
            targetLvOld,
            0,
            0LL);
          v99 = EnableEntity->fields.treasureDeviceIds;
          if ( !v99 )
            break;
          if ( v97 - 8 >= (unsigned __int64)v99->max_length )
LABEL_73:
            sub_1BCAA44(Master_object, v49);
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v99->obj.klass + v97),
            targetLv,
            0,
            0LL);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
          v100 = v97 - 7;
          ++v97;
          if ( v100 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1BCAA3C(Master_object, v49);
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
      v83 = TransformCount;
      for ( i = 0; v83 != i; ++i )
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
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49);
          if ( !byte_4B12DC3 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v49, v85);
            byte_4B12DC3 = 1;
          }
          v86 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49);
            v86 = TerminalPramsManager_TypeInfo;
          }
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                                usrSvtData,
                                                                &v104,
                                                                i,
                                                                v86->static_fields->_QuestId_k__BackingField,
                                                                -1,
                                                                0,
                                                                0LL);
          if ( !v104 )
            goto LABEL_72;
          v87 = *p_npInfoAddManager;
          id = v104->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
          if ( !v87 )
            goto LABEL_72;
          v89 = (int)Master_object;
          v90 = v87;
          v91 = id;
          v92 = targetLv;
        }
        else
        {
          if ( !tdInfo )
            goto LABEL_72;
          v93 = *p_npInfoAddManager;
          v94 = tdInfo->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
          if ( !v93 )
            goto LABEL_72;
          v89 = (int)Master_object;
          v90 = v93;
          v91 = v94;
          v92 = targetLvOld;
        }
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(v90, v91, v92, v89, 0LL);
        if ( !tdInfo )
          goto LABEL_72;
        v95 = *p_npInfoAddManager;
        v96 = tdInfo->fields.id;
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                              usrSvtData,
                                                              i,
                                                              0LL);
        if ( !v95 )
          goto LABEL_72;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          v95,
          v96,
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v101);
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13597/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0LL);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13598/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0LL);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12402/*"START_NOBLEUP_EFFECT"*/, 0LL);
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

  if ( (byte_4B19B53 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12405/*"START_POWERUP_EFFECT"*/, usrSvtData, callback);
    byte_4B19B53 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)usrSvtData,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v17, v18, v19, v20, v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v24);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12405/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t kind; // w9
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  struct ServantChangeEntity_o *resSvtNameData; // x8
  int32_t voiceSvtId; // w1
  int32_t LimitCountByImageLimitCostumeIn; // w2
  bool v13; // w3
  CombineResultEffectComponent_o *v14; // x0
  struct ServantChangeEntity_o *v15; // x8
  int32_t CardImageLimitCount; // w0
  __int64 v17; // x1
  int32_t v18; // w20
  const MethodInfo *v19; // x1

  if ( (byte_4B19B65 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B19B65 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v18 = CardImageLimitCount;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v17);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v18, 0LL);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 1, 0LL);
        resSvtNameData = this->fields.resSvtNameData;
        if ( resSvtNameData )
          voiceSvtId = resSvtNameData->fields.svtVoiceId;
        else
          voiceSvtId = -1;
        LimitCountByImageLimitCostumeIn = -1;
        v13 = 1;
        v14 = this;
        goto LABEL_31;
      }
LABEL_32:
      sub_1BCAA3C(Instance, v8);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    v15 = this->fields.resSvtNameData;
    if ( v15 )
      voiceSvtId = v15->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    LimitCountByImageLimitCostumeIn = this->fields.costumeId;
  }
  v14 = this;
  v13 = 0;
LABEL_31:
  CombineResultEffectComponent__getSvtVoiceData(v14, voiceSvtId, LimitCountByImageLimitCostumeIn, v13, v9);
  CombineResultEffectComponent__loadVoiceData(this, v19);
}


void __fastcall CombineResultEffectComponent__SetResultUserServantData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineResultEffectComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v21; // q1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v28; // x20
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  UserServantEntity_o *v34; // x21
  UserServantEntity_o *v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct UserServantEntity_o *v42; // x8
  __int64 v43; // x21
  __int64 v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct UserServantEntity_o *v56; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x24
  __int64 v58; // x21
  __int64 v59; // x22
  int32_t v60; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // kr00_16
  struct UserServantEntity_o *v62; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v64; // x21
  int32_t v65; // w22
  CombineResultEffectComponent_o *v66; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  UserServantEntity_o *v68; // x20
  UserServantEntity_o *v69; // x21
  PartyOrganizationUtility_o *p_resUsrSvtData; // x19
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  PartyOrganizationUtility_c *klass; // x21
  void *typeMetadataHandle; // x19
  void *generic_class; // x20
  int32_t v80; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v3 = this;
  if ( (byte_4B19B64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    this = (CombineResultEffectComponent_o *)sub_1BCA7E0(&UserServantEntity_TypeInfo, v18, v19);
    byte_4B19B64 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v3->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v3->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_46;
    v21 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v84.fields.fakeValue = v21;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    v83 = v84;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v83, 0LL) < 1 )
    {
      v68 = v3->fields.baseUsrSvtData;
      v69 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, v22, v23, v24);
      UserServantEntity___ctor_40923816(v69, v68, 0LL);
      v3->fields.resUsrSvtData = v69;
      p_resUsrSvtData = (PartyOrganizationUtility_o *)&v3->fields.resUsrSvtData;
      sub_1BCA784(p_resUsrSvtData, (int64_t)v69, v71, v72, v73, v74, v75, v76);
      if ( (p_resUsrSvtData[-1].fields._WaveBattleRestartWave_k__BackingField | 0x10) != 26 )
        return;
      klass = p_resUsrSvtData->klass;
      if ( p_resUsrSvtData->klass )
      {
        generic_class = klass->_1.generic_class;
        typeMetadataHandle = klass->_1.typeMetadataHandle;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v88.fields.currentCryptoKey = generic_class;
        *(_QWORD *)&v88.fields.fakeValue = typeMetadataHandle;
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v88, 0LL);
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&klass->_1.generic_class = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                                         v80 + 1,
                                                                                         0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v25 = v3->fields.baseUsrSvtData;
        if ( v25 )
        {
          v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
          v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
          *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v84.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
          v82 = v84;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                     &v82,
                                                     0LL);
          if ( v27 )
          {
            v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v3->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v27,
                                                       (Il2CppObject **)&v3->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v29 = v3->fields.baseUsrSvtData;
              if ( !v29 )
                goto LABEL_46;
              v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
              v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
              *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v84.fields.fakeValue = v30;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
              v81 = v84;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                         &v81,
                                                         0LL);
              if ( !v31 )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v31,
                                                         (Il2CppObject **)&v3->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v34 = v3->fields.baseUsrSvtData;
                v35 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, method, v32, v33);
                UserServantEntity___ctor_40923816(v35, v34, 0LL);
                v3->fields.resUsrSvtData = v35;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v3->fields.resUsrSvtData,
                  (int64_t)v35,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41);
              }
            }
            if ( v3->fields.kind != 19 )
              return;
            v42 = v3->fields.baseUsrSvtData;
            if ( v42 )
            {
              v44 = *(_QWORD *)&v42->fields.limitCount.fields.currentCryptoKey;
              v43 = *(_QWORD *)&v42->fields.limitCount.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
              *(_QWORD *)&v86.fields.currentCryptoKey = v44;
              *(_QWORD *)&v86.fields.fakeValue = v43;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                         v86,
                                                         0LL);
              if ( v3->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v3->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v3->fields.resUsrSvtData;
                v49 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, v45, v46, v47);
                UserServantEntity___ctor_40923816(v49, resUsrSvtData, 0LL);
                v3->fields.resUsrSvtData = v49;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v3->fields.resUsrSvtData,
                  (int64_t)v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55);
                v56 = v3->fields.baseUsrSvtData;
                if ( v56 )
                {
                  v57 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.resUsrSvtData;
                  v59 = *(_QWORD *)&v56->fields.limitCount.fields.currentCryptoKey;
                  v58 = *(_QWORD *)&v56->fields.limitCount.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
                  *(_QWORD *)&v87.fields.currentCryptoKey = v59;
                  *(_QWORD *)&v87.fields.fakeValue = v58;
                  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v87, 0LL);
                  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v60 + 1, 0LL);
                  method = *(const MethodInfo **)&v61.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v61.fields.currentCryptoKey;
                  if ( v57 )
                  {
                    v57[6] = v61;
                    v62 = v3->fields.baseUsrSvtData;
                    if ( v62 )
                    {
                      hp = v62->fields.hp;
                      afterAtk[0] = v62->fields.atk;
                      afterAtk[1] = hp;
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v28 )
                        {
                          v64 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                     (*v28)[5],
                                                                     0LL);
                          if ( *v28 )
                          {
                            v65 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                       (*v28)[6],
                                                                       0LL);
                            if ( v64 )
                            {
                              this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                         v64,
                                                                         v65,
                                                                         (int32_t)this,
                                                                         0LL);
                              if ( this )
                              {
                                v66 = this;
                                this = (CombineResultEffectComponent_o *)v3->fields.combineResStatus;
                                if ( this )
                                {
                                  CheckCombineResStatus__getCombineResStatus(
                                    (CheckCombineResStatus_o *)this,
                                    &afterAtk[1],
                                    afterAtk,
                                    v3->fields.resUsrSvtData,
                                    HIDWORD(v66->fields.m_CancellationTokenSource),
                                    0LL);
                                  v67 = *v28;
                                  if ( *v28 )
                                  {
                                    *(_DWORD *)&v67[16].fields.inited = afterAtk[1];
                                    v67[16].fields.fakeValue = afterAtk[0];
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
    sub_1BCAA3C(this, method);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  void *Instance; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_ObjectModel_Collection_T__o *v59; // x26
  System_Collections_Generic_List_object__o *v60; // x23
  __int64 v61; // x2
  __int64 v62; // x3
  int32_t v63; // w27
  Il2CppObject *v64; // x28
  __int64 methodPtr_low; // x10
  int v66; // w8
  int v67; // w8
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  System_Comparison_T__o *v78; // x24
  Il2CppObject *v79; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x2
  int v88; // w20
  BalanceConfig_c *v89; // x0
  TerminalSceneComponent_c *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x1
  int32_t v104; // w24
  const MethodInfo *v105; // x2
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-78h]
  struct CombineResultEffectComponent_MessageDelegate_o *v107; // [xsp+18h] [xbp-68h]

  if ( (byte_4B19B59 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v31, v32);
    sub_1BCA7E0(&ServantTreasureDvcEntity_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__106_0__, v39, v40);
    sub_1BCA7E0(&CombineResultEffectComponent___c_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_12406/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_17468/*"bit_result_ultimate_anim"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_13107/*"StartAnimationName"*/, v47, v48);
    byte_4B19B59 = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    *(int64_t *)&phase,
    (int32_t)msgCallBack,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.messageCallback = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.messageCallback, 0LL, v49, v50, v51, v52, v53, v54);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v107 = msgCallBack;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_59;
  v59 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 4);
  v60 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo,
                                                       v56,
                                                       v57,
                                                       v58);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v59 )
    goto LABEL_59;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v59,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v63 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v59,
                   v63,
                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v64 = (Il2CppObject *)Instance;
      methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      v66 = *((_DWORD *)Instance + 9);
      if ( v66 >= 1 && v66 == questId )
      {
        v67 = *((_DWORD *)Instance + 10);
        if ( v67 < 1 || v67 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v60 )
              break;
            items = v60->fields._items;
            v75 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v60->fields._version;
            if ( !items )
              break;
            size = v60->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v60,
                v64,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
            }
            else
            {
              v77 = &items->obj.klass + size;
              v60->fields._size = size + 1;
              v77[4] = (Il2CppClass *)v64;
              sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v64, v68, v69, v70, v71, v72, v73);
            }
          }
        }
      }
      if ( ++v63 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v59,
                      (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_22;
    }
LABEL_59:
    sub_1BCAA3C(Instance, v56);
  }
LABEL_22:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo, v56);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v78 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v78 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v56);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v79 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v78 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantTreasureDvcEntity__TypeInfo, v56, v61, v62);
    System_Comparison_object____ctor(
      v78,
      v79,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__106_0__,
      0LL);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v78;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__106_0, (int64_t)v78, v81, v82, v83, v84, v85, v86);
  }
  if ( !v60 )
    goto LABEL_59;
  System_Collections_Generic_List_object___Sort_56244000(
    v60,
    v78,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v88 = v60->fields._size;
  if ( v88 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v60,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_59;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v89 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v56);
    v89 = BalanceConfig_TypeInfo;
  }
  if ( !v89->static_fields->CloseSecretTreasureDeviceQuestClear && v60->fields._size >= 1 )
  {
    v104 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v60,
                   v104,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_59;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v105) )
        break;
      if ( ++v104 >= v60->fields._size )
        goto LABEL_35;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v60,
                 v104,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_59;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_35:
  if ( v88 < 1 )
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
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v56);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v56, v87);
      byte_4B10F83 = 1;
    }
    v90 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v56);
      v90 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v90->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_59;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
    this->fields.messageCallback = v107;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.messageCallback,
      (int64_t)v107,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_59;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_59;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                 0LL);
    if ( !Instance )
      goto LABEL_59;
    v103 = StringLiteral_17468/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17468/*"bit_result_ultimate_anim"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)((char *)Instance + 56), v103, v97, v98, v99, v100, v101, v102);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_59;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12406/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x22
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  BalanceConfig_c *v20; // x0
  __int64 v21; // x1
  char *fsm; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1

  if ( (byte_4B19B5A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, callback);
    sub_1BCA7E0(&StringLiteral_12406/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17468/*"bit_result_ultimate_anim"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13107/*"StartAnimationName"*/, v15, v16);
    byte_4B19B5A = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v20 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
    v20 = BalanceConfig_TypeInfo;
  }
  if ( v20->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v19) )
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
                          (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v29 = StringLiteral_17468/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17468/*"bit_result_ultimate_anim"*/,
          sub_1BCA784((PartyOrganizationUtility_o *)(fsm + 56), v29, v23, v24, v25, v26, v27, v28),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_1BCAA3C(fsm, v21);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12406/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_4B19B4A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&kind, usrSvtData);
    sub_1BCA7E0(&StringLiteral_12408/*"START_SKILLUP_EFFECT"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12301/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12302/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v21, v22);
    byte_4B19B4A = 1;
  }
  this->fields.baseUsrSvtData = usrSvtData;
  this->fields.kind = kind;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v23, v24, v25, v26, v27, v28);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(gameObject, v30);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12408/*"START_SKILLUP_EFFECT"*/, 0LL);
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
  __int64 v14; // x2
  UIStandFigureR_o *Item; // x0
  __int64 v16; // x1
  struct ServantVoiceData_array *v17; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v19; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  unsigned __int64 v22; // x20
  __int64 v23; // x27
  int32_t v24; // w21
  int32_t v25; // w22

  if ( (byte_4B19B80 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, *(_QWORD *)&faceType, *(_QWORD *)&playCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13, v14);
    byte_4B19B80 = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_41776260(Item, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(Item, v16);
  }
  v17 = this->fields.playVoiceList;
  if ( !v17 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v17->max_length )
LABEL_23:
    sub_1BCAA44(Item, v16);
  v19 = v17->m_Items[playCnt];
  if ( !v19 )
    goto LABEL_25;
  multiFace = v19->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v19->fields.multiForm;
    if ( multiForm )
    {
      if ( (_DWORD)Item == (unsigned int)*(_QWORD *)&multiFace->max_length && (_DWORD)Item == multiForm->max_length )
      {
        if ( (unsigned int)*(_QWORD *)&multiFace->max_length )
        {
          v22 = 0LL;
          v23 = (unsigned int)Item - 1LL;
          do
          {
            if ( v22 >= multiForm->max_length )
              break;
            if ( !standFigureCollects )
              goto LABEL_25;
            v24 = multiFace->m_Items[v22 + 1];
            v25 = multiForm->m_Items[v22 + 1];
            Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)standFigureCollects,
                                         v22,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_41776260(Item, v24, v25, 0LL, fadeTime, 0LL);
            if ( v23 == v22 )
              return;
            ++v22;
          }
          while ( v22 < multiFace->max_length );
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1

  if ( (byte_4B19B4D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12410/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind, *(_QWORD *)&infoIdx);
    byte_4B19B4D = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.combineVoiceId, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.autoFadeout = 0;
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v26, v27, v28, v29, v30, v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v33);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12410/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_45744540(
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B19B4E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12410/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind, *(_QWORD *)&infoIdx);
    byte_4B19B4E = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUsrSvtData,
    (int64_t)baseData,
    *(int64_t *)&infoIdx,
    (int32_t)baseData,
    (System_String_o *)resData,
    *(BattleSetupInfo_o **)&svtId,
    (FollowerInfo_o *)voiceId,
    (PartyListViewItem_o *)statusDisp);
  this->fields.resUsrSvtData = resData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, (int64_t)resData, v19, v20, v21, v22, v23, v24);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_7;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.combineVoiceId,
    (int64_t)voiceId,
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v33, v34, v35, v36, v37, v38);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_1BCAA3C(gameObject, v26);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12410/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1

  if ( (byte_4B19B4F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12410/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind, *(_QWORD *)&infoIdx);
    byte_4B19B4F = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v23, v24, v25, v26, v27, v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v30);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12410/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x21

  if ( (byte_4B19B86 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__153_0__, v4, v5);
    byte_4B19B86 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__153_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_1BCAA3C(bgCollider, method);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v11, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Collider_o *bgCollider; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x21
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x23
  int32_t kind; // w25
  System_Action_o *v16; // x24
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19B84 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__151_0__, v5, v6);
    byte_4B19B84 = 1;
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
    sub_1BCAA44(bgCollider, *(_QWORD *)&index);
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
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&index, v8, v9);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__151_0__, 0LL);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1BCAA3C(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    index,
    titleText,
    kind == 8,
    v16,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowSkillChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  void *bgCollider; // x0
  _DWORD *v8; // x22
  __int64 v9; // x2
  __int64 v10; // x3
  int32_t v11; // w23
  int32_t v12; // w24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v14; // w21
  int32_t v15; // w22
  System_String_o *costumeName; // x25
  System_Action_o *v17; // x26

  if ( (byte_4B19B85 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__152_0__, v5, v6);
    byte_4B19B85 = 1;
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
  v8 = bgCollider;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
                 this->fields.costumeSkillInfoManager,
                 index,
                 0LL);
  if ( !v8 )
    goto LABEL_10;
  if ( !bgCollider )
    goto LABEL_10;
  v11 = *((_DWORD *)bgCollider + 4);
  v12 = *((_DWORD *)bgCollider + 5);
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v14 = v8[4];
  v15 = v8[5];
  costumeName = this->fields.costumeName;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&index, v9, v10);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__152_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1BCAA3C(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v14,
    v15,
    v11,
    v12,
    costumeName,
    v17,
    0LL);
}


void __fastcall CombineResultEffectComponent__ShowSkillChangeMessage(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B19B83 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__150_0__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    byte_4B19B83 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_9;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1BCAA3C(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v13, v17, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x20
  __int128 v16; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  Il2CppObject *Entity; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t id; // w21
  int32_t lv; // w22
  int32_t v24; // w23
  int32_t v25; // w24
  System_Action_o *v26; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v29; // [xsp+40h] [xbp-50h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B19B87 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__155_0__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B19B87 = 1;
  }
  v29 = 0LL;
  tdInfo = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v16 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v27 = v28;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v27, 0LL);
  if ( !v17 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v17,
             bgCollider,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_14;
  bgCollider = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v29, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v29
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v24 = v29->fields.id,
        v25 = v29->fields.lv,
        v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v19, v20),
        System_Action___ctor(
          v26,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__155_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1BCAA3C(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v24, v25, v26, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__171_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B19BA1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_1__, v5, v6);
    byte_4B19BA1 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_1BCAA3C(v9, v10);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v8, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__146_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B19B9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_5552/*"END_LOAD"*/, v4, v5);
    byte_4B19B9F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_1BCAA3C(Instance, v7);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5552/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__156_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B19BA0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__EndPlay_b__156_2__, v5, v6);
    byte_4B19BA0 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__156_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_1BCAA3C(v9, v10);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v8, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__165_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___InitCombineEffect_b__112_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B19B9C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5552/*"END_LOAD"*/, method, v2);
    byte_4B19B9C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5552/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___SetAppendSkillCombineInfo_b__108_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x20
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x21

  if ( (byte_4B19B9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_12400/*"START_LVEXCEED_EFFECT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17449/*"bit_result_extraskill"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11491/*"ResultEffect"*/, v15, v16);
    byte_4B19B9A = 1;
  }
  if ( data )
  {
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                data,
                                (System_String_o *)StringLiteral_17449/*"bit_result_extraskill"*/,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49237568,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v21 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v22);
      byte_4B109C6 = 1;
    }
    if ( !v23 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11491/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v21, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1BCAA3C(transform, v20);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12400/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetCombineLimit_b__111_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  System_String_o *v20; // x0
  UnityEngine_GameObject_o *transform; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *v29; // x0
  __int64 v30; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *v32; // x20
  __int64 v33; // x2
  UnityEngine_Transform_o *v34; // x21

  if ( (byte_4B19B9B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_11491/*"ResultEffect"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12388/*"START_COMBINE_LIMIT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17443/*"bit_result_"*/, v17, v18);
    byte_4B19B9B = 1;
  }
  if ( data )
  {
    v19 = sub_1BCA888(string___TypeInfo, 1LL);
    v20 = System_Int32__ToString((int)this + 328, 0LL);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                              (System_String_o *)StringLiteral_17443/*"bit_result_"*/,
                                              v20,
                                              0LL);
    if ( !v19 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v19 + 24) )
      sub_1BCAA44(transform, v22);
    *(_QWORD *)(v19 + 32) = transform;
    sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)transform, v23, v24, v25, v26, v27, v28);
    v29 = System_String__Concat_62414748((System_String_array *)v19, 0LL);
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                data,
                                v29,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49237568,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v32 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v34 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v22, v33);
      byte_4B109C6 = 1;
    }
    if ( !v34 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11491/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v32, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_19:
      sub_1BCAA3C(transform, v22);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12388/*"START_COMBINE_LIMIT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__104_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x20
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x21

  if ( (byte_4B19B99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_17452/*"bit_result_friendship_exceed"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11491/*"ResultEffect"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12396/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v15, v16);
    byte_4B19B99 = 1;
  }
  if ( data )
  {
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                data,
                                (System_String_o *)StringLiteral_17452/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49237568,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v21 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v22);
      byte_4B109C6 = 1;
    }
    if ( !v23 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11491/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v21, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1BCAA3C(transform, v20);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12396/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__102_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x20
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x21

  if ( (byte_4B19B98 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_12400/*"START_LVEXCEED_EFFECT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17457/*"bit_result_limitbreak"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11491/*"ResultEffect"*/, v15, v16);
    byte_4B19B98 = 1;
  }
  if ( data )
  {
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                data,
                                (System_String_o *)StringLiteral_17457/*"bit_result_limitbreak"*/,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49237568,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v21 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v22);
      byte_4B109C6 = 1;
    }
    if ( !v23 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11491/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v21, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1BCAA3C(transform, v20);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12400/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__152_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__155_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__114_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B19B9D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5552/*"END_LOAD"*/, method, v2);
    byte_4B19B9D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5552/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__145_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *effect; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  UserServantCollectionEntity_o *v36; // x22
  __int64 v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  UserServantEntity_o *v47; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x2
  __int64 v62; // x3
  CommonUI_o *v63; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v66; // x25
  struct CombineResultEffectComponent_ClickDelegate_o *v67; // x8

  if ( (byte_4B19B9E & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__6__, v14, v15);
    sub_1BCA7E0(&CombineResultEffectComponent___c__DisplayClass145_2_TypeInfo, v16, v17);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v18, v19);
    byte_4B19B9E = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__DestroyImmediate_70154432(effect, 0LL);
  this->fields.effect = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effect, 0LL, v21, v22, v23, v24, v25, v26);
  CombineResultEffectComponent__Close(this, v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_17;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       this->fields.targetSvtId,
                       0LL);
  if ( EntityDefinitely )
  {
    v36 = EntityDefinitely;
    v37 = sub_1BCAA2C(CombineResultEffectComponent___c__DisplayClass145_2_TypeInfo, v33, v34, v35);
    CombineResultEffectComponent___c__DisplayClass145_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass145_2_o *)v37,
      0LL);
    if ( v37 )
    {
      *(_QWORD *)(v37 + 24) = this;
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)this, v38, v39, v40, v41, v42, v43);
      v47 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, v44, v45, v46);
      UserServantEntity___ctor_40924048(v47, v36, 0LL);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v37 + 16) = callbackFunc;
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)callbackFunc, v49, v50, v51, v52, v53, v54);
      this->fields.callbackFunc = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v55, v56, v57, v58, v59, v60);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v47 )
      {
        v63 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v47->fields.treasureDeviceLv1;
        v66 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                                CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                v29,
                                                                v61,
                                                                v62);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v66,
          (Il2CppObject *)v37,
          Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__6__,
          0LL);
        if ( v63 )
        {
          CommonUI__OpenNobleCombineResult(
            v63,
            18,
            v47,
            targetId,
            treasureDeviceLv1,
            v66,
            this->fields.targetIdOld,
            v47->fields.treasureDeviceLv1,
            0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(Instance, v29);
  }
  v67 = this->fields.callbackFunc;
  if ( v67 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v67->fields.m_target)(
      v67->fields.original_method_info,
      1LL,
      *(_QWORD *)&v67->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__145_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  ServantFlagEntity_o *v11; // x8
  struct System_Int32_array *args; // x8
  bool result; // w0
  int32_t v14; // w8
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19B5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B19B5C = 1;
  }
  svtFlagEntity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_40400676(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0LL) )
  {
LABEL_13:
    v14 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v10);
  }
  Instance = (Il2CppObject *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_13;
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v11 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_15;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v11->fields.args;
  if ( !args )
    goto LABEL_15;
  if ( args->max_length <= 1 )
    sub_1BCAA44(Instance, v10);
  result = 1;
  this->fields.targetId = args->m_Items[2];
  v14 = args->m_Items[1];
LABEL_14:
  this->fields.targetIdOld = v14;
  return result;
}


void __fastcall CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Collider_o *bgCollider; // x0
  int32_t kind; // w8
  const MethodInfo *v12; // x2
  int32_t v13; // w20
  int32_t v14; // w0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1
  int32_t TransformCount; // w0
  int32_t displayCount; // w9
  int32_t v22; // w8
  int32_t v23; // w21
  System_Int32_array *v24; // x20
  int32_t TransformedSameSlotSkillId; // w0
  __int64 v26; // x2
  int32_t v27; // w8
  int32_t v28; // w22
  UserServantEntity_o *baseUsrSvtData; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x24
  int32_t v37; // w0
  int32_t v38; // w9
  int32_t v39; // w8
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  TransformServantInfo_o *v44; // [xsp+30h] [xbp-50h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B19B8C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_EndDisp__, v4, v5);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_clickNext__, v6, v7);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B19B8C = 1;
  }
  v44 = 0LL;
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
      CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v12);
      bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
      v13 = this->fields.skillShowIndex + 1;
      this->fields.skillShowIndex = v13;
      if ( bgCollider )
      {
        v14 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
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
        CombineResultEffectComponent__EndDisp(this, v15);
        return;
      }
      goto LABEL_59;
    }
  }
  if ( (unsigned int)kind <= 0x1B && ((1 << kind) & 0x8000110) != 0 )
  {
    if ( CombineResultEffectComponent__IsShowNextNpInfo(this, method) )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v16);
      bgCollider = (UnityEngine_Collider_o *)this->fields.npInfoAddManager;
      v13 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v13;
      if ( bgCollider )
      {
        v14 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
                (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
                0LL);
LABEL_17:
        if ( v13 < v14 )
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
      v17 = Method_CombineResultEffectComponent_clickNext__;
      if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1BCA7F8(Method_CombineResultEffectComponent_clickNext__);
      v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
      CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v19);
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
    v22 = TransformCount;
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    this->fields.displayCount = displayCount - 1;
    if ( !bgCollider )
      goto LABEL_65;
    v23 = v22 - displayCount;
    bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                             (UserServantEntity_o *)bgCollider,
                                             v22 - displayCount,
                                             -1,
                                             -1,
                                             1,
                                             -1,
                                             0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_65;
    v24 = (System_Int32_array *)bgCollider;
    TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                   this->fields.baseUsrSvtData,
                                   this->fields.targetId,
                                   v23 - 1,
                                   v23,
                                   0LL);
    v27 = this->fields.kind;
    this->fields.targetId = TransformedSameSlotSkillId;
    if ( v27 == 7 )
    {
      v28 = TransformedSameSlotSkillId;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_4B12DC3 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v26);
        byte_4B12DC3 = 1;
      }
      bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !baseUsrSvtData )
        goto LABEL_65;
      this->fields.targetIdOld = UserServantEntity__GetTransformedOldSkillId(
                                   baseUsrSvtData,
                                   v28,
                                   *(_DWORD *)(*(_QWORD *)&bgCollider[7].fields.m_CachedPtr + 20LL),
                                   v23,
                                   0LL);
    }
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    if ( bgCollider )
    {
      UserServantEntity__GetTransformedServantInfo((UserServantEntity_o *)bgCollider, &transformInfo, v23, 0LL);
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
      System_Action___ctor(v36, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( transformInfo )
      {
        if ( skillResultInfoWindow )
        {
          SkillUpResultWindowComponent__OpenSkillUpResultInfo(
            skillResultInfoWindow,
            targetId,
            targetLv,
            v36,
            this->fields.targetIdOld,
            this->fields.targetLvOld,
            transformInfo->fields.svtId,
            v24,
            this->fields.kind == 3,
            1,
            0,
            transformInfo->fields.titleText,
            0LL);
          return;
        }
      }
    }
LABEL_65:
    sub_1BCAA3C(bgCollider, method);
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
      v37 = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0LL);
      v38 = this->fields.displayCount;
      v39 = v37;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v38 - 1;
      if ( bgCollider )
      {
        bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                 (UserServantEntity_o *)bgCollider,
                                                 &v44,
                                                 v39 - v38,
                                                 0LL);
        if ( v44 )
        {
          bgCollider = (UnityEngine_Collider_o *)this->fields.commandCardExceedResultWindow;
          if ( bgCollider )
          {
            CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
              (CommandCardExceedResultWindowComponent_o *)bgCollider,
              this->fields.baseUsrSvtData,
              this->fields.commandCardIndex,
              this->fields.commandCardExceedCount,
              v44->fields.svtId,
              v44->fields.titleText,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_65;
  }
LABEL_59:
  v40 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v40 = (_QWORD *)sub_1BCA7F8(Method_CombineResultEffectComponent_clickNext__);
  v41 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v40, v40[4]);
  OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
  if ( this->fields.kind != 24 )
    CombineResultEffectComponent__ReleaseVoiceData(this, v42);
  if ( !CombineResultEffectComponent__OpenNotification(this, v42) )
    CombineResultEffectComponent__FadeoutProcess(this, v43);
}


void __fastcall CombineResultEffectComponent__endloadEffect(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1

  if ( (byte_4B19B61 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__endloadEffect_b__114_0__, v12, v13);
    sub_1BCA7E0(&CombineResultEffectComponent_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    byte_4B19B61 = 1;
  }
  if ( data )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int64_t)data,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = AvalonSceneManager_TypeInfo;
    v23 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v19);
      v22 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__114_0__, 0LL);
    if ( !v23 )
      sub_1BCAA3C(v26, v27);
    CommonUI__maskFadein(v23, DEFAULT_FADE_TIME, v25, 0LL);
  }
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v22; // x21
  __int64 v23; // x22
  int32_t v24; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v26; // x8
  ServantVoiceMaster_o *v27; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B19B69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B19B69 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.asstName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.playVoiceList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playVoiceList, 0LL, v13, v14, v15, v16, v17, v18);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v23 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v43.fields.currentCryptoKey = v23;
  *(_QWORD *)&v43.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v43, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v24, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v26 = this->fields.resUsrSvtData) == 0LL)
    || (v27 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                     v26->fields.limitCount,
                                     0LL),
        !v27) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v20);
  }
  Entity = ServantVoiceMaster__getEntity(v27, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtVoiceEntity, (int64_t)Entity, v29, v30, v31, v32, v33, v34);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.asstName,
      (int64_t)VoiceAssetName,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_4B19B7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v4, v5);
    byte_4B19B7D = 1;
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
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  }
  else
  {
    return 0LL;
  }
}


UnityEngine_GameObject_o *__fastcall CombineResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetData_o *effectAssetData; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__49237568; // x19
  UnityEngine_GameObject_o *v14; // x19
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x20

  if ( (byte_4B19B62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, parentTr, method);
    sub_1BCA7E0(&CombineResultEffectComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B19B62 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              effectAssetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49237568,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v14 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v16 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C1 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C6 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v17);
    byte_4B109C6 = 1;
  }
  if ( !v18 )
LABEL_15:
    sub_1BCAA3C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceData_array *__fastcall CombineResultEffectComponent__getLimitUpSvtVoiceList(
        CombineResultEffectComponent_o *this,
        bool isPlayVoice,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UserServantEntity_o *resUsrSvtData; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x21
  System_Collections_Generic_List_object__o *CntStopVoiceList; // x0
  ServantVoiceEntity_o *v12; // x0
  struct UserServantEntity_o *v13; // x8
  __int64 v14; // x20
  __int64 v15; // x22
  int32_t v16; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B19B7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    byte_4B19B7C = 1;
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
    v13 = this->fields.resUsrSvtData;
    if ( !v13 )
LABEL_20:
      sub_1BCAA3C(resUsrSvtData, isPlayVoice);
    v15 = *(_QWORD *)&v13->fields.limitCount.fields.currentCryptoKey;
    v14 = *(_QWORD *)&v13->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isPlayVoice);
    *(_QWORD *)&v18.fields.currentCryptoKey = v15;
    *(_QWORD *)&v18.fields.fakeValue = v14;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v18, 0LL);
    CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                                                      svtVoiceEntity,
                                                                      v16,
                                                                      this->fields.limitUpPlayVoiceLabel,
                                                                      this->fields.genderType,
                                                                      0LL);
    if ( !CntStopVoiceList )
      return 0LL;
  }
  else
  {
    v12 = this->fields.svtVoiceEntity;
    if ( !v12 )
      return 0LL;
    CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getLimitCntUpVoiceList(
                                                                      v12,
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
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t v20; // x2
  char v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UserServantEntity_o *Master_object; // x0
  __int64 v27; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v29; // x21
  __int64 v30; // x24
  int32_t v31; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v33; // x8
  ServantLimitImageMaster_o *v34; // x23
  __int64 v35; // x24
  __int64 v36; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  int64_t v39; // x2
  char v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x1
  int64_t v47; // x2
  char v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  v9 = costumeId;
  SvtVoiceId = voiceId;
  if ( (byte_4B19B68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&voiceId, *(_QWORD *)&costumeId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B19B68 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    0LL,
    *(int64_t *)&costumeId,
    isLimitUp,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.playVoiceList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playVoiceList, 0LL, v20, v21, v22, v23, v24, v25);
  if ( SvtVoiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_26;
    v30 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    *(_QWORD *)&v53.fields.currentCryptoKey = v30;
    *(_QWORD *)&v53.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v31, 0LL);
  }
  if ( v9 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_41845724(Master_object->fields.limitCount, 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0LL);
    v9 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v33 = this->fields.resUsrSvtData;
  if ( !v33 )
    goto LABEL_26;
  v34 = (ServantLimitImageMaster_o *)Master_object;
  v36 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
  *(_QWORD *)&v54.fields.currentCryptoKey = v36;
  *(_QWORD *)&v54.fields.fakeValue = v35;
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
  if ( !v34
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v34,
                                       (int32_t)Master_object,
                                       v9,
                                       0LL),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_26:
    sub_1BCAA3C(Master_object, v27);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtVoiceEntity, (int64_t)Entity, v39, v40, v41, v42, v43, v44);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.asstName,
      (int64_t)VoiceAssetName,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
}


void __fastcall CombineResultEffectComponent__loadBoxGachaEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  __int64 v12; // x1

  if ( (byte_4B19B60 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_endloadEffect__, v5, v6);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5947/*"Effect/Combine"*/, v9, v10);
    byte_4B19B60 = 1;
  }
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5947/*"Effect/Combine"*/, v11, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__loadVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B19B6A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_EndLoad__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6, v7);
    byte_4B19B6A = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v10 = (SoundManager_o *)Instance;
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v10 )
      sub_1BCAA3C(v15, v16);
    SoundManager__LoadAudioAssetStorage(v10, asstName, v14, 1, 0LL);
  }
  else
  {
    CombineResultEffectComponent__EndLoad(this, method);
  }
}


void __fastcall CombineResultEffectComponent__playVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CombineResultEffectComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v18; // x8
  int64_t id; // x1
  struct ServantVoiceData_array *v20; // x8
  __int64 v21; // x9
  int32_t m_CancellationTokenSource_high; // w21
  int32_t friendshipExceedResultWindow; // w20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
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
  __int64 v38; // x1
  SePlayer_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  v8 = this;
  if ( (byte_4B19B81 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_EndPlay__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v11, v12);
    this = (CombineResultEffectComponent_o *)sub_1BCA7E0(&SoundManager_TypeInfo, v13, v14);
    byte_4B19B81 = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_23;
    playCnt = v8->fields.playCnt;
    max_length = playVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v18 = playVoiceList->m_Items[playCnt];
      if ( !v18 )
        goto LABEL_23;
      id = (int64_t)v18->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      v20 = v8->fields.playVoiceList;
      if ( !v20 )
        goto LABEL_23;
      v21 = v8->fields.playCnt;
      if ( (unsigned int)v21 < v20->max_length )
      {
        this = (CombineResultEffectComponent_o *)v20->m_Items[v21];
        if ( this )
        {
          m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
          friendshipExceedResultWindow = (int32_t)this->fields.friendshipExceedResultWindow;
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
          currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.currentFigureCollectList;
          if ( currentFigureCollectList )
          {
            v29 = FadeTime;
            if ( System_Linq_Enumerable__Any_object_(
                   currentFigureCollectList,
                   (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
                v29,
                v30,
                v31,
                afterFigureCollectList,
                friendshipExceedResultWindow,
                v32);
            }
          }
          asstName = v8->fields.asstName;
          vcName = v8->fields.vcName;
          volume = v8->fields.volume;
          v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
          System_Action___ctor(v37, (Il2CppObject *)v8, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v38);
          v39 = SoundManager__playVoice_39419392(asstName, vcName, volume, v37, 0LL);
          v8->fields.player = v39;
          sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.player, (int64_t)v39, v40, v41, v42, v43, v44, v45);
          ++v8->fields.playCnt;
          return;
        }
LABEL_23:
        sub_1BCAA3C(this, method);
      }
    }
    sub_1BCAA44(this, method);
  }
}


void __fastcall CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineResultEffectComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v11; // x8
  int32_t v12; // w20
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v3 = this;
  if ( (byte_4B19B6E & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    this = (CombineResultEffectComponent_o *)sub_1BCA7E0(&StringLiteral_3205/*"BaseSvtNodeName"*/, v6, v7);
    byte_4B19B6E = 1;
  }
  baseUsrSvtData = v3->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v10 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  v11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.baseUsrSvtData;
  if ( !v11 )
LABEL_10:
    sub_1BCAA3C(this, method);
  v12 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v13);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v12, v14, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v3,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3205/*"BaseSvtNodeName"*/,
    0,
    1,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setBaseSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 fsm; // x0
  System_String_o *v16; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v18; // x21
  float Value; // s0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  float v23; // s8
  int32_t v24; // w22
  struct UserServantEntity_o *v25; // x8
  ServantLimitImageMaster_o *v26; // x23
  __int64 v27; // x1
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v29; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v31; // x19
  __int64 v32; // x2
  UnityEngine_Transform_o *v33; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19B78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType, method);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_4451/*"CardScale"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3204/*"BaseSvtCardNodeName"*/, v13, v14);
    byte_4B19B78 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3204/*"BaseSvtCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v16 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v16, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v18 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4451/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  v22 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v23 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&changeNameType);
  *(_QWORD *)&v34.fields.currentCryptoKey = v22;
  *(_QWORD *)&v34.fields.fakeValue = v21;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v34, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v25 = this->fields.baseUsrSvtData;
  if ( !v25 )
    goto LABEL_25;
  v26 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25->fields.limitCount, 0LL);
  if ( !v26 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v26, v24, fsm, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v27);
  fsm = ImageLimitCount__GetCardImageLimitCount(v24, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v18 )
    goto LABEL_25;
  v29 = fsm;
  gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_38621628(
                   gameObject,
                   this->fields.baseUsrSvtData,
                   v29,
                   10,
                   0LL,
                   changeNameType,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  v31 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v33 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4B109C1 )
  {
    fsm = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType, v32);
    byte_4B109C1 = 1;
  }
  if ( !v33
    || (UnityEngine_Transform__set_localPosition(v33, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v31, 0LL)) == 0) )
  {
LABEL_25:
    sub_1BCAA3C(fsm, *(_QWORD *)&changeNameType);
  }
  v35.fields.x = v23;
  v35.fields.y = v23;
  v35.fields.z = v23;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v35, 0LL);
}


void __fastcall CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantVoiceData_array *CostumeSvtVoiceList; // x0
  __int64 v7; // x1
  ServantVoiceData_o *v8; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v15; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B19B76 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8532/*"LimitUpResSvtNodeName"*/, v4, v5);
    byte_4B19B76 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
      sub_1BCAA44(CostumeSvtVoiceList, v7);
    v8 = CostumeSvtVoiceList->m_Items[0];
    if ( !v8 )
LABEL_13:
      sub_1BCAA3C(CostumeSvtVoiceList, v7);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  CostumeSvtVoiceList = (ServantVoiceData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v16,
                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_13;
  v13 = (int)CostumeSvtVoiceList;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v13,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8532/*"LimitUpResSvtNodeName"*/,
    v15);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(effect, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__setLimitUpBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineResultEffectComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v11; // x8
  int32_t v12; // w20
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v3 = this;
  if ( (byte_4B19B71 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    this = (CombineResultEffectComponent_o *)sub_1BCA7E0(&StringLiteral_8531/*"LimitUpBaseSvtNodeName"*/, v6, v7);
    byte_4B19B71 = 1;
  }
  baseUsrSvtData = v3->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  v10 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  v11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.baseUsrSvtData;
  if ( !v11 )
LABEL_10:
    sub_1BCAA3C(this, method);
  v12 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v13);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v12, v14, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v3,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8531/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setNameRevealSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  __int64 v10; // x1
  ServantVoiceData_o *v11; // x8
  int32_t face; // w22
  int32_t ImageLimitCount; // w2
  const MethodInfo *v14; // x5

  if ( (byte_4B19B77 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&StringLiteral_8531/*"LimitUpBaseSvtNodeName"*/, v7, v8);
    byte_4B19B77 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1BCAA44(LimitUpSvtVoiceList, v10);
    v11 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v11 )
      sub_1BCAA3C(LimitUpSvtVoiceList, v10);
    face = v11->fields.face;
  }
  else
  {
    face = 0;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCnt, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    svtId,
    ImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8531/*"LimitUpBaseSvtNodeName"*/,
    v14);
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
  __int64 v10; // x2
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v12; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v14; // x23
  float Value; // s0
  float v16; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  struct UICharaGraphTexture_o **p_nameRevealCard; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x19
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19B7A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4451/*"CardScale"*/, *(_QWORD *)&svtId, *(_QWORD *)&limitCnt);
    sub_1BCA7E0(&StringLiteral_3204/*"BaseSvtCardNodeName"*/, v9, v10);
    byte_4B19B7A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3204/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_18;
  v12 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v12, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_18;
  v14 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4451/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v14 )
    goto LABEL_18;
  v16 = Value;
  gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.nameRevealCard,
    (int64_t)TexturePrefab,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4B109C1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&svtId, v26);
    byte_4B109C1 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_18:
    sub_1BCAA3C(fsm, *(_QWORD *)&svtId);
  }
  v28.fields.x = v16;
  v28.fields.y = v16;
  v28.fields.z = v16;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultCostumeSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *fsm; // x0
  System_String_o *v8; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v10; // x21
  float Value; // s0
  float v12; // s8
  UserServantEntity_o *resUsrSvtData; // x20
  UnityEngine_GameObject_o *v14; // x21
  int32_t FigureImageLimitCount; // w0
  UnityEngine_Component_o *v16; // x19
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19B7B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4451/*"CardScale"*/, *(_QWORD *)&changeNameType, method);
    sub_1BCA7E0(&StringLiteral_11492/*"ResultSvtCardNodeName"*/, v5, v6);
    byte_4B19B7B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11492/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_18;
  v8 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v8, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_18;
  v10 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4451/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v10 )
    goto LABEL_18;
  v12 = Value;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_18;
  v14 = (UnityEngine_GameObject_o *)fsm;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(resUsrSvtData, 0, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_38621628(
                            v14,
                            resUsrSvtData,
                            FigureImageLimitCount,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  v16 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v18 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4B109C1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType, v17);
    byte_4B109C1 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v16, 0LL)) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(fsm, *(_QWORD *)&changeNameType);
  }
  v19.fields.x = v12;
  v19.fields.y = v12;
  v19.fields.z = v12;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v19, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v16, 1.89, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 fsm; // x0
  System_String_o *v16; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v18; // x21
  float Value; // s0
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  float v23; // s8
  int32_t v24; // w22
  struct UserServantEntity_o *v25; // x8
  ServantLimitImageMaster_o *v26; // x23
  __int64 v27; // x1
  int32_t ServantLimitCountSealAfter; // w23
  int32_t v29; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v31; // x19
  __int64 v32; // x2
  UnityEngine_Transform_o *v33; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19B79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType, method);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_4451/*"CardScale"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11492/*"ResultSvtCardNodeName"*/, v13, v14);
    byte_4B19B79 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11492/*"ResultSvtCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v16 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, v16, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v18 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4451/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v23 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&changeNameType);
  *(_QWORD *)&v34.fields.currentCryptoKey = v22;
  *(_QWORD *)&v34.fields.fakeValue = v21;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v34, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v25 = this->fields.resUsrSvtData;
  if ( !v25 )
    goto LABEL_25;
  v26 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25->fields.limitCount, 0LL);
  if ( !v26 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v26, v24, fsm, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v27);
  fsm = ImageLimitCount__GetCardImageLimitCount(v24, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v18 )
    goto LABEL_25;
  v29 = fsm;
  gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_38621628(
                   gameObject,
                   this->fields.resUsrSvtData,
                   v29,
                   10,
                   0LL,
                   changeNameType,
                   0LL);
  if ( !fsm )
    goto LABEL_25;
  v31 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v33 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4B109C1 )
  {
    fsm = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType, v32);
    byte_4B109C1 = 1;
  }
  if ( !v33
    || (UnityEngine_Transform__set_localPosition(v33, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v31, 0LL)) == 0) )
  {
LABEL_25:
    sub_1BCAA3C(fsm, *(_QWORD *)&changeNameType);
  }
  v35.fields.x = v23;
  v35.fields.y = v23;
  v35.fields.z = v23;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v35, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v31, 1.89, 0LL);
}


void __fastcall CombineResultEffectComponent__setSkillResultInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  int64_t v91; // x20
  __int64 Instance; // x0
  const MethodInfo *v93; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  const MethodInfo *v100; // x2
  __int64 v101; // x3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  long double v106; // q0
  SkillUpResultWindowComponent_o *v107; // x20
  UserServantEntity_o *v108; // x21
  int32_t v109; // w22
  int32_t v110; // w23
  System_Action_o *v111; // x24
  const MethodInfo *v112; // x2
  struct UserServantEntity_o *v113; // x8
  __int64 v114; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  System_String_o *v122; // x0
  const MethodInfo *v123; // x2
  struct UserServantEntity_o *v124; // x8
  __int64 v125; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v126; // x21
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  System_String_o *v133; // x0
  __int64 v134; // x1
  UserServantEntity_o *v135; // x20
  const MethodInfo *v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct ServantVoiceData_array **p_playVoiceList; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v148; // x20
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  System_Action_o *v152; // x24
  int32_t targetIdOld; // w25
  int32_t targetLvOld; // w26
  const MethodInfo *v155; // x2
  const MethodInfo *v156; // x2
  int32_t v157; // w27
  int32_t v158; // w28
  __int64 v159; // x0
  __int64 v160; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x3
  System_Collections_Generic_List_int__o *v165; // x20
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x28
  int32_t v169; // w22
  struct UserServantEntity_o *v170; // x8
  __int64 v171; // x23
  __int64 v172; // x24
  int v173; // w8
  int v174; // w9
  __int64 v175; // x23
  struct UserServantEntity_o *v176; // x8
  __int64 v177; // x23
  __int64 v178; // x24
  int32_t v179; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v181; // x9
  __int64 size; // x10
  int32_t v183; // w22
  __int64 v184; // x1
  Il2CppObject *v185; // x23
  struct UserServantEntity_o *v186; // x8
  int64_t v187; // x24
  __int64 v188; // x25
  __int64 v189; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v191; // x23
  struct UserServantEntity_o *v192; // x8
  __int64 v193; // x23
  __int64 v194; // x24
  _BOOL8 v195; // x0
  __int64 v196; // x1
  Il2CppObject *current; // x21
  __int64 v198; // x1
  int64_t UserId; // x0
  __int64 v200; // x1
  struct UserServantEntity_o *v201; // x8
  int64_t v202; // x23
  int32_t v203; // w24
  __int64 v204; // x25
  __int64 v205; // x26
  int32_t v206; // w3
  int v207; // w21
  struct ServantVoiceData_array *v208; // x8
  struct UserServantEntity_o *v209; // x8
  __int64 v210; // x20
  __int64 v211; // x21
  struct UserServantEntity_o *v212; // x8
  int v213; // w21
  int v214; // w20
  __int64 v215; // x2
  __int64 v216; // x3
  struct UserServantEntity_o *v217; // x8
  __int64 v218; // x22
  __int64 v219; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v220; // x21
  int32_t v221; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v223; // w8
  SkillUpResultWindowComponent_o *v224; // x20
  UserServantEntity_o *v225; // x21
  System_Action_o *v226; // x22
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  __int64 v235; // x2
  Il2CppObject *v236; // x20
  Il2CppObject *v237; // x21
  __int64 v238; // x1
  Il2CppObject *v239; // x20
  BalanceConfig_c *v240; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v242; // x21
  Il2CppObject *Name; // x0
  System_String_o *v244; // x0
  __int64 v245; // x2
  __int64 v246; // x3
  System_Int32_array *v247; // x20
  SkillUpResultWindowComponent_o *v248; // x21
  int32_t v249; // w22
  int32_t v250; // w23
  System_Action_o *v251; // x24
  struct UserServantEntity_o *v252; // x8
  int32_t v253; // w26
  int32_t v254; // w25
  __int64 v255; // x27
  __int64 v256; // x28
  SkillUpResultWindowComponent_o *v257; // x20
  UserServantEntity_o *v258; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v260; // x23
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v262; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v263; // x21
  Il2CppObject *v264; // x0
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  struct UserServantEntity_o *v271; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t lv; // w21
  const MethodInfo *v274; // x1
  int64_t v275; // x2
  int32_t v276; // w3
  System_String_o *v277; // x4
  BattleSetupInfo_o *v278; // x5
  FollowerInfo_o *v279; // x6
  PartyListViewItem_o *v280; // x7
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v282; // x3
  __int64 v283; // x2
  __int64 v284; // x3
  __int64 v285; // x22
  int64_t v286; // x2
  int32_t v287; // w3
  System_String_o *v288; // x4
  BattleSetupInfo_o *v289; // x5
  FollowerInfo_o *v290; // x6
  PartyListViewItem_o *v291; // x7
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  int64_t v299; // x2
  int32_t v300; // w3
  System_String_o *v301; // x4
  BattleSetupInfo_o *v302; // x5
  FollowerInfo_o *v303; // x6
  PartyListViewItem_o *v304; // x7
  __int64 v305; // x23
  __int64 v306; // x1
  __int64 v307; // x2
  __int64 v308; // x3
  System_Action_o *v309; // x24
  int64_t v310; // x2
  int32_t v311; // w3
  System_String_o *v312; // x4
  BattleSetupInfo_o *v313; // x5
  FollowerInfo_o *v314; // x6
  PartyListViewItem_o *v315; // x7
  Il2CppObject *v316; // x21
  __int64 v317; // x1
  __int64 v318; // x2
  __int64 v319; // x3
  CombineResultEffectComponent_ClickDelegate_o *v320; // x22
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v328; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v330; // x23
  __int64 v331; // x1
  __int64 v332; // x2
  __int64 v333; // x3
  System_Action_o *v334; // x24
  SvtCombineResultWindowComponent_o *v335; // x0
  UserServantEntity_o *v336; // x1
  int32_t v337; // w2
  System_Action_o *v338; // x3
  System_Action_o *v339; // x4
  struct UserServantEntity_o *v340; // x8
  __int128 v341; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v342; // x20
  Il2CppObject *v343; // x0
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  struct SvtCombineResultWindowComponent_o *v350; // x20
  struct UserServantEntity_o *v351; // x21
  int32_t v352; // w22
  __int64 v353; // x1
  __int64 v354; // x2
  __int64 v355; // x3
  System_Action_o *v356; // x23
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v358; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  __int64 v361; // x1
  __int64 v362; // x2
  __int64 v363; // x3
  Il2CppObject *v364; // x20
  AvalonSceneManager_c *v365; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v367; // x0
  __int64 *v368; // x8
  bool v369; // w28
  const MethodInfo *v370; // x2
  const MethodInfo *v371; // x2
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v373; // x21
  System_String_o *v374; // x22
  Il2CppObject *v375; // x21
  Il2CppObject *v376; // x0
  __int64 v377; // x1
  __int64 v378; // x2
  __int64 v379; // x3
  AvalonSceneManager_c *v380; // x8
  System_Action_o *v381; // x21
  bool kind; // [xsp+0h] [xbp-120h]
  bool methoda; // [xsp+8h] [xbp-118h]
  System_String_o *dispBattleName; // [xsp+18h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v385; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v386; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v387; // [xsp+70h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v388; // [xsp+90h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A8h] [xbp-78h] BYREF
  int32_t oldLv; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v391; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v393; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v394; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16

  if ( (byte_4B19B7E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_EndDisp__, v11, v12);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_0__, v13, v14);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_1__, v15, v16);
    sub_1BCA7E0(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_5__, v17, v18);
    sub_1BCA7E0(&Method_CombineResultEffectComponent_clickNext__, v19, v20);
    sub_1BCA7E0(&CombineResultFormManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v31, v32);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v33, v34);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v35, v36);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v37, v38);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, v39, v40);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v55, v56);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v57, v58);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v59, v60);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v61, v62);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63, v64);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v65, v66);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v67, v68);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v69, v70);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v71, v72);
    sub_1BCA7E0(&string___TypeInfo, v73, v74);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v75, v76);
    sub_1BCA7E0(&Method_CombineResultEffectComponent___c__DisplayClass145_0__setSkillResultInfo_b__3__, v77, v78);
    sub_1BCA7E0(&CombineResultEffectComponent___c__DisplayClass145_0_TypeInfo, v79, v80);
    sub_1BCA7E0(&Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__2__, v81, v82);
    sub_1BCA7E0(&CombineResultEffectComponent___c__DisplayClass145_1_TypeInfo, v83, v84);
    sub_1BCA7E0(&StringLiteral_10960/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_10961/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v89, v90);
    byte_4B19B7E = 1;
  }
  oldLv = 0;
  entity = 0LL;
  memset(&v388, 0, sizeof(v388));
  v91 = sub_1BCAA2C(CombineResultEffectComponent___c__DisplayClass145_0_TypeInfo, method, v2, v3);
  CombineResultEffectComponent___c__DisplayClass145_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass145_0_o *)v91,
    0LL);
  if ( !v91 )
    goto LABEL_212;
  *(_QWORD *)(v91 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 24), (int64_t)this, v94, v95, v96, v97, v98, v99);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_155;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_212;
      v262 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v263 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v387.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v387.fields.fakeValue = v262;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v93);
      v386 = v387;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v386, 0LL);
      if ( !v263 )
        goto LABEL_212;
      v264 = DataMasterBase_object__object__long___GetEntity(
               v263,
               Instance,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v264;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.resUsrSvtData,
        (int64_t)v264,
        v265,
        v266,
        v267,
        v268,
        v269,
        v270);
LABEL_155:
      v271 = this->fields.baseUsrSvtData;
      if ( !v271 )
        goto LABEL_212;
      oldLv = v271->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_212;
      lv = resUsrSvtData->fields.lv;
      if ( !System_Int32__Equals_63206656((int32_t)&oldLv, lv, 0LL) )
      {
        if ( this->fields.asstName )
        {
          if ( this->fields.svtVoiceEntity )
          {
            playVoiceList = this->fields.playVoiceList;
            if ( playVoiceList )
            {
              this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
              CombineResultEffectComponent__playVoice(this, v274);
            }
          }
        }
      }
      *(_QWORD *)(v91 + 16) = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 16), 0LL, v275, v276, v277, v278, v279, v280);
      if ( !CombineResultEffectComponent__CheckCombineLimit(this, oldLv, lv, v282) )
        goto LABEL_166;
      v285 = sub_1BCAA2C(CombineResultEffectComponent___c__DisplayClass145_1_TypeInfo, v93, v283, v284);
      CombineResultEffectComponent___c__DisplayClass145_1___ctor(
        (CombineResultEffectComponent___c__DisplayClass145_1_o *)v285,
        0LL);
      if ( !v285 )
        goto LABEL_212;
      *(_QWORD *)(v285 + 24) = v91;
      sub_1BCA784((PartyOrganizationUtility_o *)(v285 + 24), v91, v286, v287, v288, v289, v290, v291);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v285 + 16) = callbackFunc;
      sub_1BCA784((PartyOrganizationUtility_o *)(v285 + 16), (int64_t)callbackFunc, v293, v294, v295, v296, v297, v298);
      this->fields.callbackFunc = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v299, v300, v301, v302, v303, v304);
      v305 = *(_QWORD *)(v285 + 24);
      v309 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v306, v307, v308);
      System_Action___ctor(
        v309,
        (Il2CppObject *)v285,
        Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__2__,
        0LL);
      if ( !v305 )
        goto LABEL_212;
      *(_QWORD *)(v305 + 16) = v309;
      sub_1BCA784((PartyOrganizationUtility_o *)(v305 + 16), (int64_t)v309, v310, v311, v312, v313, v314, v315);
      v316 = *(Il2CppObject **)(v285 + 24);
      v320 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                               CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                               v317,
                                                               v318,
                                                               v319);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v320,
        v316,
        Method_CombineResultEffectComponent___c__DisplayClass145_0__setSkillResultInfo_b__3__,
        0LL);
      this->fields.callbackFunc = v320;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)v320,
        v321,
        v322,
        v323,
        v324,
        v325,
        v326);
LABEL_166:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_186:
        CombineResultEffectComponent__EndDisp(this, v93);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v328 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v330 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v283, v284);
      System_Action___ctor(v330, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v334 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v331, v332, v333);
      System_Action___ctor(v334, (Il2CppObject *)this, (intptr_t)Method_CombineResultEffectComponent_clickNext__, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_212;
      v335 = svtResultInfoWindow;
      v336 = v328;
      v337 = baseUsrSvtCollictionLv;
      v338 = v330;
      v339 = v334;
LABEL_176:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v335, v336, v337, v338, v339, 0LL);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1BCA888(string___TypeInfo, 1LL);
      v113 = this->fields.baseUsrSvtData;
      if ( !v113 )
        goto LABEL_212;
      v114 = Instance;
      p_svtId = &v113->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
      *(_QWORD *)&v391.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v391.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v391, v112);
      if ( !v114 )
        goto LABEL_212;
      if ( !*(_DWORD *)(v114 + 24) )
        goto LABEL_213;
      *(_QWORD *)(v114 + 32) = Instance;
      sub_1BCA784((PartyOrganizationUtility_o *)(v114 + 32), Instance, v116, v117, v118, v119, v120, v121);
      v122 = System_String__Concat_62414748((System_String_array *)v114, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt_70111952(v122, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
        goto LABEL_22;
      Instance = sub_1BCA888(string___TypeInfo, 1LL);
      v124 = this->fields.baseUsrSvtData;
      if ( !v124 )
        goto LABEL_212;
      v125 = Instance;
      v126 = &v124->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
      *(_QWORD *)&v392.fields.currentCryptoKey = v126;
      *(_QWORD *)&v392.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v392, v123);
      if ( !v125 )
        goto LABEL_212;
      if ( !*(_DWORD *)(v125 + 24) )
        goto LABEL_213;
      *(_QWORD *)(v125 + 32) = Instance;
      sub_1BCA784((PartyOrganizationUtility_o *)(v125 + 32), Instance, v127, v128, v129, v130, v131, v132);
      v133 = System_String__Concat_62414748((System_String_array *)v125, 0LL);
      UnityEngine_PlayerPrefs__SetInt(v133, 0, 0LL);
      v135 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo, v134);
      CombineResultFormManager__ResetVoiceList(v135, 0LL);
LABEL_22:
      Instance = (__int64)this->fields.limitUpResultCheck;
      if ( !Instance )
        goto LABEL_212;
      LimitUpResultCheckComponent__checkResultLimitUp(
        (LimitUpResultCheckComponent_o *)Instance,
        this->fields.kind,
        this->fields.baseUsrSvtData,
        this->fields.resUsrSvtData,
        this->fields.baseUsrSvtCollectionLimitCnt,
        this->fields.limitUpRewardGiftDataList,
        0LL);
      if ( this->fields.isLimitUpSuppression )
      {
        p_playVoiceList = &this->fields.playVoiceList;
        this->fields.playVoiceList = 0LL;
        LimitUpSvtVoiceList = 0LL;
      }
      else
      {
        LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v136);
        p_playVoiceList = &this->fields.playVoiceList;
        this->fields.playVoiceList = LimitUpSvtVoiceList;
      }
      sub_1BCA784(
        (PartyOrganizationUtility_o *)p_playVoiceList,
        (int64_t)LimitUpSvtVoiceList,
        (int64_t)v136,
        v137,
        v138,
        v139,
        v140,
        v141);
      v208 = this->fields.playVoiceList;
      if ( !v208 )
      {
        v209 = this->fields.baseUsrSvtData;
        if ( v209 )
        {
          v211 = *(_QWORD *)&v209->fields.limitCount.fields.currentCryptoKey;
          v210 = *(_QWORD *)&v209->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
          *(_QWORD *)&v398.fields.currentCryptoKey = v211;
          *(_QWORD *)&v398.fields.fakeValue = v210;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v398, 0LL);
          v212 = this->fields.baseUsrSvtData;
          v213 = Instance == 2;
          if ( v212 )
          {
            v214 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v212->fields.limitCount, 0LL) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v93);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v217 = this->fields.baseUsrSvtData;
              if ( !v217 )
                goto LABEL_212;
              v219 = *(_QWORD *)&v217->fields.svtId.fields.currentCryptoKey;
              v218 = *(_QWORD *)&v217->fields.svtId.fields.fakeValue;
              v220 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1040LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
              *(_QWORD *)&v399.fields.currentCryptoKey = v219;
              *(_QWORD *)&v399.fields.fakeValue = v218;
              v221 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v399, 0LL);
              v213 = (v214 == 2) | System_Linq_Enumerable__Contains_int_(
                                     v220,
                                     v221,
                                     (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              v223 = this->fields.kind;
              isLimitUpSuppression = v223 != 10 && v223 != 26;
            }
            if ( (v213 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, v93);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v373 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v215, v216);
            System_Action___ctor(
              v373,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__145_5__,
              0LL);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v373, 1, 0LL);
              return;
            }
          }
        }
        goto LABEL_212;
      }
LABEL_118:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&v208->max_length;
        CombineResultEffectComponent__playVoice(this, v93);
      }
      break;
    case 2:
    case 3:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_212;
      SkillIdList = UserServantEntity__getSkillIdList((UserServantEntity_o *)Instance, -1, -1, 1, -1, 0LL);
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v148 = SkillIdList;
      v152 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v149, v150, v151);
      System_Action___ctor(v152, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v155);
      if ( !Instance )
        goto LABEL_212;
      v157 = *(_DWORD *)(Instance + 16);
      v158 = this->fields.kind;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v156);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_212;
      dispBattleName = *(System_String_o **)(Instance + 24);
      methoda = 1;
      kind = v158 == 3;
      goto LABEL_195;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v107 = this->fields.skillResultInfoWindow;
      v108 = this->fields.baseUsrSvtData;
      v109 = this->fields.targetId;
      v110 = this->fields.targetLv;
      v111 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v100, v101);
      System_Action___ctor(v111, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v107 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_45821424(
        v107,
        v108,
        v109,
        v110,
        v111,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        this->fields.npInfoAddManager,
        this->fields.kind,
        0LL);
      return;
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v340 = this->fields.baseUsrSvtData;
      if ( !v340 )
        goto LABEL_212;
      v341 = *(_OWORD *)&v340->fields.id.fields.fakeValue;
      v342 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v387.fields.currentCryptoKey = *(_OWORD *)&v340->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v387.fields.fakeValue = v341;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v93);
      v385 = v387;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v385, 0LL);
      if ( !v342 )
        goto LABEL_212;
      v343 = DataMasterBase_object__object__long___GetEntity(
               v342,
               Instance,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v343;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.resUsrSvtData,
        (int64_t)v343,
        v344,
        v345,
        v346,
        v347,
        v348,
        v349);
      v350 = this->fields.svtResultInfoWindow;
      v351 = this->fields.resUsrSvtData;
      v352 = this->fields.baseUsrSvtCollictionLv;
      v356 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v353, v354, v355);
      System_Action___ctor(v356, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v350 )
        goto LABEL_212;
      v335 = v350;
      v336 = v351;
      v337 = v352;
      v338 = v356;
      v339 = 0LL;
      goto LABEL_176;
    case 7:
    case 0x15:
      v159 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v159 + 309) & 1) == 0 )
        v159 = sub_1C1C6BC(v106);
      v160 = *(_QWORD *)(*(_QWORD *)(v159 + 192) + 16LL);
      if ( (*(_BYTE *)(v160 + 309) & 1) == 0 )
        v160 = sub_1C1C6BC(v106);
      Instance = **(_QWORD **)(v160 + 184);
      if ( !Instance )
        goto LABEL_212;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v165 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v162,
                                                         v163,
                                                         v164);
      System_Collections_Generic_List_int____ctor(
        v165,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      v168 = 0LL;
      v169 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v93);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v169 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v170 = this->fields.baseUsrSvtData;
          if ( !v170 )
            goto LABEL_212;
          v172 = *(_QWORD *)&v170->fields.svtId.fields.currentCryptoKey;
          v171 = *(_QWORD *)&v170->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
          *(_QWORD *)&v393.fields.currentCryptoKey = v172;
          *(_QWORD *)&v393.fields.fakeValue = v171;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v393, 0LL);
          if ( !MasterData_object )
            goto LABEL_212;
          Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                (ServantSkillMaster_o *)MasterData_object,
                                Instance,
                                v169,
                                0LL);
          if ( !Instance )
            goto LABEL_212;
          v173 = *(_DWORD *)(Instance + 24);
          if ( v173 < 1 )
          {
LABEL_50:
            v176 = this->fields.baseUsrSvtData;
            if ( !v176 )
              goto LABEL_212;
            v178 = *(_QWORD *)&v176->fields.svtId.fields.currentCryptoKey;
            v177 = *(_QWORD *)&v176->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
            *(_QWORD *)&v394.fields.currentCryptoKey = v178;
            *(_QWORD *)&v394.fields.fakeValue = v177;
            v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v394, 0LL);
            Instance = (__int64)ServantSkillMaster__GetEntity(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  v179,
                                  v169,
                                  1,
                                  0LL);
            if ( Instance )
            {
              v93 = (const MethodInfo *)*(unsigned int *)(Instance + 28);
              v175 = v168;
LABEL_55:
              if ( !v165 )
                goto LABEL_212;
              items = v165->fields._items;
              v181 = Method_System_Collections_Generic_List_int__Add__;
              ++v165->fields._version;
              if ( !items )
                goto LABEL_212;
              size = v165->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v165,
                  (int32_t)v93,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
              }
              else
              {
                v165->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v93;
              }
            }
            else
            {
              v175 = v168;
            }
            ++v169;
            v168 = v175;
            continue;
          }
          v174 = 0;
          while ( 1 )
          {
            if ( v173 == v174 )
LABEL_213:
              sub_1BCAA44(Instance, v93);
            v175 = *(_QWORD *)(Instance + 8LL * v174 + 32);
            if ( !v175 )
              break;
            v93 = (const MethodInfo *)*(unsigned int *)(v175 + 28);
            if ( (_DWORD)v93 == this->fields.targetId )
              goto LABEL_55;
            if ( v173 == ++v174 )
              goto LABEL_50;
          }
LABEL_212:
          sub_1BCAA3C(Instance, v93);
        }
        break;
      }
      if ( this->fields.kind == 7 )
      {
        Instance = (__int64)this->fields.baseUsrSvtData;
        if ( !Instance )
          goto LABEL_212;
        Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
        if ( !this->fields.baseUsrSvtData )
          goto LABEL_212;
        v183 = Instance;
        Instance = UserServantEntity__IsHeroine(this->fields.baseUsrSvtData, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_212;
          v185 = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v184);
          Instance = NetworkManager__get_UserId(0LL);
          v186 = this->fields.baseUsrSvtData;
          if ( !v186 )
            goto LABEL_212;
          v187 = Instance;
          v189 = *(_QWORD *)&v186->fields.svtId.fields.currentCryptoKey;
          v188 = *(_QWORD *)&v186->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
          *(_QWORD *)&v395.fields.currentCryptoKey = v189;
          *(_QWORD *)&v395.fields.fakeValue = v188;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v395, 0LL);
          if ( !v185 )
            goto LABEL_212;
          Instance = UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)v185,
                       &entity,
                       v187,
                       Instance,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)entity;
            if ( !entity )
              goto LABEL_212;
            costumeIds = entity->fields.costumeIds;
            if ( !costumeIds )
              goto LABEL_212;
            if ( *(_QWORD *)&costumeIds->max_length )
            {
              v191 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
              Instance = System_Linq_Enumerable__Any_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v191,
                           (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
              if ( (Instance & 1) != 0 )
              {
                Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v191, 0LL);
                v183 = Instance;
              }
            }
          }
        }
        v192 = this->fields.baseUsrSvtData;
        if ( !v192 )
          goto LABEL_212;
        v194 = *(_QWORD *)&v192->fields.svtId.fields.currentCryptoKey;
        v193 = *(_QWORD *)&v192->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
        *(_QWORD *)&v396.fields.currentCryptoKey = v194;
        *(_QWORD *)&v396.fields.fakeValue = v193;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v396, 0LL);
        if ( !v168 )
          goto LABEL_212;
        if ( !MasterData_object )
          goto LABEL_212;
        Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              *(_DWORD *)(v168 + 20),
                              this->fields.targetIdOld,
                              0LL);
        if ( !Instance )
          goto LABEL_212;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v387,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
        *(_OWORD *)&v388.fields._list = *(_OWORD *)&v387.fields.currentCryptoKey;
        v388.fields._current = (Il2CppObject *)v387.fields.fakeValue;
        while ( 1 )
        {
          v195 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v388,
                   (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
          if ( !v195 )
            break;
          current = v388.fields._current;
          if ( !v388.fields._current )
            sub_1BCAA3C(v195, v196);
          if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v388.fields._current, 0, 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v198);
            UserId = NetworkManager__get_UserId(0LL);
            v201 = this->fields.baseUsrSvtData;
            if ( !v201 )
              sub_1BCAA3C(UserId, v200);
            v202 = UserId;
            v203 = v201->fields.lv;
            v205 = *(_QWORD *)&v201->fields.limitCount.fields.currentCryptoKey;
            v204 = *(_QWORD *)&v201->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v200);
            *(_QWORD *)&v397.fields.currentCryptoKey = v205;
            *(_QWORD *)&v397.fields.fakeValue = v204;
            v206 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v397, 0LL);
            if ( ServantSkillEntity__isUse((ServantSkillEntity_o *)current, v202, v203, v206, v183, -1, -1, -1LL, 0LL) )
            {
              v207 = 1;
              goto LABEL_189;
            }
          }
        }
        v207 = 0;
LABEL_189:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v388,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
        v369 = v207 != 0;
      }
      else
      {
        v369 = 0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v152 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v166, v167);
      System_Action___ctor(v152, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v370);
      if ( !Instance )
        goto LABEL_212;
      if ( !v165 )
        goto LABEL_212;
      v157 = *(_DWORD *)(Instance + 16);
      v148 = System_Collections_Generic_List_int___ToArray(
               v165,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v371);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_212;
      methoda = v369;
      kind = 0;
      dispBattleName = *(System_String_o **)(Instance + 24);
LABEL_195:
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        skillResultInfoWindow,
        targetId,
        targetLv,
        v152,
        targetIdOld,
        targetLvOld,
        v157,
        v148,
        kind,
        methoda,
        0,
        dispBattleName,
        0LL);
      break;
    case 9:
      v257 = this->fields.skillResultInfoWindow;
      v258 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v260 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v100, v101);
      System_Action___ctor(v260, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v257 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v257, v258, oldFriendShipRank, v260, 0LL);
      return;
    case 0xB:
      v224 = this->fields.skillResultInfoWindow;
      v225 = this->fields.baseUsrSvtData;
      v226 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v100, v101);
      System_Action___ctor(v226, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v224 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v224, v225, v226, 0LL);
      return;
    case 0xC:
    case 0xE:
    case 0x16:
    case 0x18:
      goto LABEL_186;
    case 0xD:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_212;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        0LL);
      goto LABEL_186;
    case 0xF:
      CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v93);
      this->fields.playVoiceList = CostumeSvtVoiceList;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.playVoiceList,
        (int64_t)CostumeSvtVoiceList,
        v228,
        v229,
        v230,
        v231,
        v232,
        v233);
      v208 = this->fields.playVoiceList;
      if ( v208 )
        goto LABEL_118;
      goto LABEL_186;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_181;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_205;
      this->fields.messageCallback = 0LL;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.messageCallback,
        0LL,
        (int64_t)v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      v236 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v93);
      if ( !byte_4B12DC3 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v93, v235);
        byte_4B12DC3 = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v93);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v236 )
        goto LABEL_212;
      v237 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v236,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_212;
      v239 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v240 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v238);
        v240 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v240->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v238);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10961/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
        if ( !v239 )
          goto LABEL_212;
        v242 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v239, -1, -1, 0LL);
        v244 = System_String__Format(v242, Name, 0LL);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10960/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
        if ( !v237 )
          goto LABEL_212;
        v374 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v237, 0LL);
        if ( !v239 )
          goto LABEL_212;
        v375 = (Il2CppObject *)Instance;
        v376 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v239, -1, -1, 0LL);
        v244 = System_String__Format_62415592(v374, v375, v376, 0LL);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))messageCallback->fields.m_target)(
        messageCallback->fields.original_method_info,
        v244,
        *(_QWORD *)&messageCallback->fields.extra_arg);
LABEL_205:
      if ( !this->fields.callbackFunc )
        return;
      v364 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v380 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v377);
        v380 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v380->static_fields->DEFAULT_FADE_TIME;
      v367 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v377, v378, v379);
      v368 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__145_1__;
LABEL_209:
      v381 = v367;
      System_Action___ctor(v367, (Il2CppObject *)this, *v368, 0LL);
      if ( !v364 )
        goto LABEL_212;
      CommonUI__maskFadeout((CommonUI_o *)v364, 1, DEFAULT_FADE_TIME, v381, 0LL);
      return;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_205;
LABEL_181:
      v364 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v365 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v361);
        v365 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v365->static_fields->DEFAULT_FADE_TIME;
      v367 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v361, v362, v363);
      v368 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__145_0__;
      goto LABEL_209;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v358 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v100);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_212;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v358,
        commandCardIndex,
        commandCardExceedCount,
        0,
        *(System_String_o **)(Instance + 24),
        0LL);
      goto LABEL_186;
    case 0x17:
      Instance = (__int64)this->fields.friendshipExceedResultWindow;
      if ( !Instance )
        goto LABEL_212;
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_45684228(
        (FriendshipExceedResultWindowComponent_o *)Instance,
        this->fields.baseUsrSvtData,
        this->fields.oldFriendShipRank,
        0LL);
      goto LABEL_186;
    case 0x19:
      Instance = (__int64)this->fields.baseUsrSvtData;
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_212;
      v247 = *(System_Int32_array **)(Instance + 16);
      v248 = this->fields.skillResultInfoWindow;
      v249 = this->fields.targetId;
      v250 = this->fields.targetLv;
      v251 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v245, v246);
      System_Action___ctor(v251, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v252 = this->fields.baseUsrSvtData;
      if ( !v252 )
        goto LABEL_212;
      v253 = this->fields.targetIdOld;
      v254 = this->fields.targetLvOld;
      v256 = *(_QWORD *)&v252->fields.svtId.fields.currentCryptoKey;
      v255 = *(_QWORD *)&v252->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93);
      *(_QWORD *)&v400.fields.currentCryptoKey = v256;
      *(_QWORD *)&v400.fields.fakeValue = v255;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v400, 0LL);
      if ( !v248 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v248,
        v249,
        v250,
        v251,
        v253,
        v254,
        Instance,
        v247,
        this->fields.targetLvOld == 0,
        1,
        1,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL);
      return;
    default:
      return;
  }
}


void __fastcall CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  PartyOrganizationUtility_o *p_player; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B19B8A & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B19B8A = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = (PartyOrganizationUtility_o *)&this->fields.player;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    p_player->klass = 0LL;
    sub_1BCA784(p_player, 0LL, v7, v8, v9, v10, v11, v12);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11468;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11420;
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
  if ( (byte_4B19BA2 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B19BA2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B19BA3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__,
      method,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v4, v5);
    byte_4B19BA3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo,
                                                      v6,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.afterSkillList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t v9; // x19
  System_Collections_Generic_List_object__o *afterSkillList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B19BA5 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7, v8);
    byte_4B19BA5 = 1;
  }
  v9 = sub_1BCAA2C(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = id,
        *(_DWORD *)(v9 + 20) = lv,
        (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList) == 0LL)
    || (items = afterSkillList->fields._items,
        v19 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_1BCAA3C(afterSkillList, v11);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v9,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), v9, v12, v13, v14, v15, v16, v17);
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
  __int64 v8; // x2
  int64_t v9; // x19
  System_Collections_Generic_List_object__o *beforeSkillList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B19BA4 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7, v8);
    byte_4B19BA4 = 1;
  }
  v9 = sub_1BCAA2C(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = id,
        *(_DWORD *)(v9 + 20) = lv,
        (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList) == 0LL)
    || (items = beforeSkillList->fields._items,
        v19 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_1BCAA3C(beforeSkillList, v11);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v9,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), v9, v12, v13, v14, v15, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4B19BA7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index,
      method);
    byte_4B19BA7 = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v3; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v3 = this;
  if ( (byte_4B19BA8 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1BCA7E0(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
                                                                       method,
                                                                       v2);
    byte_4B19BA8 = 1;
  }
  afterSkillList = v3->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1BCAA3C(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4B19BA6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index,
      method);
    byte_4B19BA6 = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A114EC;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A114CC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11484;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19BA9 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent___c_TypeInfo, v1, v2);
    byte_4B19BA9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CombineResultEffectComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CombineResultEffectComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall CombineResultEffectComponent___c___ctor(
        CombineResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__106_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return System_Int32__CompareTo_63206508((_DWORD)a + 24, b->fields.priority, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass145_0___ctor(
        CombineResultEffectComponent___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass145_0___setSkillResultInfo_b__3(
        CombineResultEffectComponent___c__DisplayClass145_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass145_1___ctor(
        CombineResultEffectComponent___c__DisplayClass145_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass145_1___setSkillResultInfo_b__2(
        CombineResultEffectComponent___c__DisplayClass145_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineResultEffectComponent___c__DisplayClass145_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v19; // x8
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v20; // x8
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v21; // x8
  __int64 v22; // x2
  __int64 v23; // x3
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v24; // x8
  struct CombineResultEffectComponent_o *v25; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__4; // x22
  CommonUI_o *v28; // x20
  const MethodInfo *v29; // x3
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v3 = this;
  if ( (byte_4B19BAA & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)sub_1BCA7E0(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__4__,
                                                                      v8,
                                                                      v9);
    byte_4B19BAA = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_24;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  effect = (UnityEngine_Object_o *)_4__this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__DestroyImmediate_70154432(effect, 0LL);
  v19 = v3->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v19->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[4].monitor = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this[4].monitor, 0LL, v13, v14, v15, v16, v17, v18);
  v20 = v3->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v20->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0LL);
  v21 = v3->fields.CS___8__locals1;
  if ( !v21 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v21->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[5].klass )
  {
    this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = v3->fields.CS___8__locals1;
    if ( v24 )
    {
      v25 = v24->fields.__4__this;
      if ( v25 )
      {
        baseUsrSvtData = v25->fields.baseUsrSvtData;
        _9__4 = v3->fields.__9__4;
        v28 = (CommonUI_o *)this;
        if ( !_9__4 )
        {
          _9__4 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                                    CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                    method,
                                                                    v22,
                                                                    v23);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__4,
            (Il2CppObject *)v3,
            Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__4__,
            v29);
          v3->fields.__9__4 = _9__4;
          sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__4, (int64_t)_9__4, v30, v31, v32, v33, v34, v35);
        }
        if ( v28 )
        {
          CommonUI__OpenCombineLimit(v28, baseUsrSvtData, _9__4, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(this, method);
  }
  if ( this[9].monitor )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
    callback = v3->fields.callback;
    if ( !callback )
      goto LABEL_24;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___c__DisplayClass145_1___setSkillResultInfo_b__4(
        CombineResultEffectComponent___c__DisplayClass145_1_o *this,
        bool decide,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *CS___8__locals1; // x8
  CombineResultEffectComponent___c__DisplayClass145_1_o *v4; // x19
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v4 = this,
        (this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)CS___8__locals1->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, decide);
  }
  LODWORD(this[8].monitor) = 0;
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass145_2___ctor(
        CombineResultEffectComponent___c__DisplayClass145_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___c__DisplayClass145_2___setSkillResultInfo_b__6(
        CombineResultEffectComponent___c__DisplayClass145_2_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineResultEffectComponent___c__DisplayClass145_2_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct CombineResultEffectComponent_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__7; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct CombineResultEffectComponent_o *v19; // x8

  v4 = this;
  if ( (byte_4B19BAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    this = (CombineResultEffectComponent___c__DisplayClass145_2_o *)sub_1BCA7E0(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__7__,
                                                                      v9,
                                                                      v10);
    byte_4B19BAB = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__7 = v4->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     decide,
                                                     method,
                                                     v3);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)v4,
      Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__7__,
      0LL);
    v4->fields.__9__7 = _9__7;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__7, (int64_t)_9__7, v13, v14, v15, v16, v17, v18);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, decide);
  this = (CombineResultEffectComponent___c__DisplayClass145_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__7,
                                                                    (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v19 = v4->fields.__4__this;
  if ( !v19 || !this )
LABEL_11:
    sub_1BCAA3C(this, decide);
  CardServantFlagRequest__beginRequest(
    (CardServantFlagRequest_o *)this,
    v19->fields.targetSvtId,
    v19->fields.targetFlagId,
    0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass145_2___setSkillResultInfo_b__7(
        CombineResultEffectComponent___c__DisplayClass145_2_o *this,
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


void __fastcall CombineResultEffectComponent___c__DisplayClass167_0___ctor(
        CombineResultEffectComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass167_0___OpenNotification_b__0(
        CombineResultEffectComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineResultEffectComponent___c__DisplayClass167_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  __int64 v11; // x1
  int32_t limitCount; // w20
  int32_t v13; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v3 = this;
  if ( (byte_4B19BAC & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    this = (CombineResultEffectComponent___c__DisplayClass167_0_o *)sub_1BCA7E0(
                                                                      &ServantCharaGraphEXOpenManager_TypeInfo,
                                                                      v4,
                                                                      v5);
    byte_4B19BAC = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  resUsrSvtData = _4__this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_11;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  limitCount = v3->fields.limitCount;
  v13 = v10;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v11);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v13, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass167_0_o *)v3->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1BCAA3C(this, method);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass173_0___ctor(
        CombineResultEffectComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___c__DisplayClass173_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass173_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B19BAD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDcd, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__1__, v8, v9);
    byte_4B19BAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v18, v19, v20, v21, v22, v23);
  }
  if ( !v15 )
    sub_1BCAA3C(Instance, v11);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass173_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v10; // x20

  if ( (byte_4B19BAE & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B19BAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  Instance = (Il2CppObject *)_4__this->fields.limitUpResultCheck;
  if ( !Instance )
    goto LABEL_10;
  LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 1, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
  if ( !v10 )
LABEL_10:
    sub_1BCAA3C(Instance, v7);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}