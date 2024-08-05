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
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x20
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_HashSet_T__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A01D5F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__, method);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v4);
    sub_1B64870(&int___TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v7);
    sub_1B64870(&string___TypeInfo, v8);
    sub_1B64870(&StringLiteral_17202/*"bit_result02"*/, v9);
    sub_1B64870(&StringLiteral_17203/*"bit_result03"*/, v10);
    sub_1B64870(&StringLiteral_17204/*"bit_result04"*/, v11);
    sub_1B64870(&StringLiteral_17201/*"bit_result01"*/, v12);
    byte_4A01D5F = 1;
  }
  v13 = sub_1B64918(string___TypeInfo, 3LL);
  if ( !v13 )
    goto LABEL_12;
  v17 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_11;
  v18 = StringLiteral_17201/*"bit_result01"*/;
  *(_QWORD *)(v13 + 32) = StringLiteral_17201/*"bit_result01"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 32), v18, v15, v16);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_11;
  v21 = StringLiteral_17202/*"bit_result02"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_17202/*"bit_result02"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 40), v21, v19, v20);
  if ( *(_DWORD *)(v17 + 24) <= 2u )
    goto LABEL_11;
  v24 = StringLiteral_17203/*"bit_result03"*/;
  *(_QWORD *)(v17 + 48) = StringLiteral_17203/*"bit_result03"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 48), v24, v22, v23);
  this->fields.startAniName = (struct System_String_array *)v17;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.startAniName, v17, v25, v26);
  v27 = StringLiteral_17204/*"bit_result04"*/;
  this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_17204/*"bit_result04"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.LimitAnimName, v27, v28, v29);
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_BA3E90;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v30 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v30;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.currentFigureCollectList, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v33;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.afterFigureCollectList, (int32_t)v33, v34, v35);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v13 = sub_1B64918(int___TypeInfo, 1LL);
  if ( !v13 )
    goto LABEL_12;
  v14 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
LABEL_11:
    sub_1B64AD4(v13, v14);
  *(_DWORD *)(v13 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v13;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.ChangeCardEffectLvList, v13, v36, v37);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v38 = (System_Collections_Generic_HashSet_T__o *)sub_1B64ABC(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v38,
    (const MethodInfo_3367E0C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v38 )
LABEL_12:
    sub_1B64ACC(v13, v14);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v38,
    1,
    (const MethodInfo_3369010 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v38,
    10,
    (const MethodInfo_3369010 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v38,
    26,
    (const MethodInfo_3369010 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v38,
    19,
    (const MethodInfo_3369010 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v38,
    24,
    (const MethodInfo_3369010 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v38;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.limitUpKinds, (int32_t)v38, v39, v40);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A01D11 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v3);
    byte_4A01D11 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)Component_object, v5, v6);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64ACC(0LL, v8);
  v9 = UnityEngine_Component__GetComponent_object_(
         transform,
         (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.combineResStatus, (int32_t)v9, v10, v11);
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

  if ( (byte_4A01D25 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, *(_QWORD *)&oldLv);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A01D25 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    sub_1B64ACC(Instance, v9);
  }
LABEL_11:
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


bool __fastcall CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct LimitUpResultCheckComponent_o *limitUpResultCheck; // x19
  struct System_Collections_Generic_List_GameObject__o *resInfoList; // x8

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_1B64ACC(this, method);
  if ( (byte_4A01D8B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_4A01D8B = 1;
  }
  resInfoList = limitUpResultCheck->fields.resInfoList;
  return !resInfoList || resInfoList->fields._size <= 0;
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

  if ( (byte_4A01D5C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_1B64870(&DataManager_TypeInfo, v6);
    byte_4A01D5C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1B64ACC(0LL, v8);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0

  if ( (byte_4A01D59 & 1) == 0 )
  {
    sub_1B64870(&System_GC_TypeInfo, method);
    byte_4A01D59 = 1;
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
    SkillUpResultWindowComponent__Close((SkillUpResultWindowComponent_o *)svtResultInfoWindow, v3);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62429636(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_17:
    sub_1B64ACC(svtResultInfoWindow, v3);
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
  const MethodInfo *v11; // x2

  if ( (byte_4A01D5B & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_1B64870(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_0__, v4);
    byte_4A01D5B = 1;
  }
  v5 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64888(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v8 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_1B64ACC(v9, v10);
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v8, v11);
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
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_Component_o *v37; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v39; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x1
  struct System_Int32_array *v43; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v45; // x26
  StandFigureCollect_o *v46; // x27
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v56; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v58; // x20
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A01D3D & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B64870(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64870(&StandFigureCollect_TypeInfo, v18);
    byte_4A01D3D = 1;
  }
  memset(&v67, 0, sizeof(v67));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v22 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v22,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
                                      (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_37612308(
                                    gameObject,
                                    svtId,
                                    v25,
                                    1,
                                    faceType,
                                    1,
                                    0LL,
                                    0,
                                    -1,
                                    0LL);
      if ( Instance )
      {
        v56 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v58 = (StandFigureCollect_o *)sub_1B64ABC(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v58, 0LL, v56, 0LL);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v62 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v58,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v64[4] = (Il2CppClass *)v58;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v58, v59, v60);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1B64ACC(Instance, v21);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    v26,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v67 = v66;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v27 )
      break;
    current = (SvtMultiPortraitEntity_o *)v67.fields._current;
    if ( !v67.fields._current )
      sub_1B64ACC(v27, v28);
    klass_high = HIDWORD(v67.fields._current[2].klass);
    if ( klass_high >= 1 )
      v31 = klass_high + 1;
    else
      v31 = 1;
    if ( !StandFigureNode )
      sub_1B64ACC(v27, v28);
    v32 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v32,
                         current->fields.portraitImageId,
                         1,
                         faceType,
                         v31,
                         0LL,
                         0,
                         -1,
                         0LL);
    v37 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B64ACC(0LL, v34);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v35,
      v36);
    transform = UnityEngine_Component__get_transform(v37, 0LL);
    if ( !transform )
      sub_1B64ACC(0LL, v39);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v41 = UnityEngine_Component__get_gameObject(v37, 0LL);
      v43 = current->fields.commonPosition;
      if ( !v43 )
        sub_1B64ACC(v41, v42);
      max_length = v43->max_length;
      if ( max_length == 1 )
        sub_1B64AD4(v41, v42);
      if ( !max_length )
        sub_1B64AD4(v41, v42);
      GameObjectExtensions__AddLocalPosition_33377432(v41, (float)v43->m_Items[1], (float)v43->m_Items[2], 0LL);
    }
    v45 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v46 = (StandFigureCollect_o *)sub_1B64ABC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v46, current, (UIStandFigureR_o *)v37, 0LL);
    if ( !v45 )
      sub_1B64ACC(v47, v48);
    v51 = v45->fields._items;
    v52 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v45->fields._version;
    if ( !v51 )
      sub_1B64ACC(v47, v48);
    v53 = v45->fields._size;
    if ( (unsigned int)v53 >= v51->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v45,
        (Il2CppObject *)v46,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v51->obj.klass + v53;
      v45->fields._size = v53 + 1;
      v54[4] = (Il2CppClass *)v46;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v46, v49, v50);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *v48; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v50; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v52; // x0
  __int64 v53; // x1
  struct System_Int32_array *v54; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v56; // x29
  StandFigureCollect_o *v57; // x22
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v67; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  int32_t svtId; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4A01D34 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&formId);
    sub_1B64870(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v13);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v19);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B64870(&StandFigureCollect_TypeInfo, v22);
    byte_4A01D34 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v26 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v26,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v29 = (SvtMultiPortraitMaster_o *)Instance;
  v31 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v81.fields.currentCryptoKey = v31;
  *(_QWORD *)&v81.fields.fakeValue = v30;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v81, 0LL);
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
                                      (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_37612308(
                                     gameObject,
                                     svtId,
                                     v34,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v35 & 1,
                                     friendshipNum,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_37667884(
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
                                     0LL));
      v67 = (UIStandFigureR_o *)Instance;
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
          v69 = (StandFigureCollect_o *)sub_1B64ABC(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v69, 0LL, v67, 0LL);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v73 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v69,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
              }
              else
              {
                v75 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v75[4] = (Il2CppClass *)v69;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v69, v70, v71);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1B64ACC(Instance, v25);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    v36,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v37 )
      break;
    current = (SvtMultiPortraitEntity_o *)v80.fields._current;
    if ( !v80.fields._current )
      sub_1B64ACC(v37, v38);
    klass_high = HIDWORD(v80.fields._current[2].klass);
    if ( klass_high >= 1 )
      v41 = klass_high + 1;
    else
      v41 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1B64ACC(v37, v38);
      v42 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v42,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v41,
                           0LL,
                           v35 & 1,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_1B64ACC(v37, v38);
      v47 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v47,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v41,
                           0LL,
                           0LL);
    }
    v48 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B64ACC(0LL, v44);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v45,
      v46);
    transform = UnityEngine_Component__get_transform(v48, 0LL);
    if ( !transform )
      sub_1B64ACC(0LL, v50);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v52 = UnityEngine_Component__get_gameObject(v48, 0LL);
      v54 = current->fields.commonPosition;
      if ( !v54 )
        sub_1B64ACC(v52, v53);
      max_length = v54->max_length;
      if ( max_length == 1 )
        sub_1B64AD4(v52, v53);
      if ( !max_length )
        sub_1B64AD4(v52, v53);
      GameObjectExtensions__AddLocalPosition_33377432(v52, (float)v54->m_Items[1], (float)v54->m_Items[2], 0LL);
    }
    v56 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v57 = (StandFigureCollect_o *)sub_1B64ABC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v57, current, (UIStandFigureR_o *)v48, 0LL);
    if ( !v56 )
      sub_1B64ACC(v58, v59);
    v62 = v56->fields._items;
    v63 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v56->fields._version;
    if ( !v62 )
      sub_1B64ACC(v58, v59);
    v64 = v56->fields._size;
    if ( (unsigned int)v64 >= v62->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        (Il2CppObject *)v57,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    }
    else
    {
      v65 = &v62->obj.klass + v64;
      v56->fields._size = v64 + 1;
      v65[4] = (Il2CppClass *)v57;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v57, v60, v61);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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

  if ( (byte_4A01D58 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    byte_4A01D58 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    currentFigureCollectList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v34,
           (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1B64ACC(v9, v10);
    monitor = (UnityEngine_Object_o *)v34.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v14 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v14 )
        sub_1B64ACC(0LL, v13);
      UIStandFigureR__ReleaseCharacter(v14, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_1B64ACC(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69136104(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v21 )
      break;
    v23 = v34.fields._current;
    if ( !v34.fields._current )
      sub_1B64ACC(v21, v22);
    v24 = (UnityEngine_Object_o *)v34.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      v26 = (UIStandFigureR_o *)v23[1].monitor;
      if ( !v26 )
        sub_1B64ACC(0LL, v25);
      UIStandFigureR__ReleaseCharacter(v26, 0LL);
      v28 = (UnityEngine_Component_o *)v23[1].monitor;
      if ( !v28 )
        sub_1B64ACC(0LL, v27);
      v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69136104(v29, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1B64ACC(currentFigureCollectList, method);
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

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_1B64ACC(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
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

  if ( (byte_4A01D47 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v3);
    sub_1B64870(&Method_CombineResultEffectComponent__EndLoad_b__146_0__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A01D47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__146_0__, 0LL);
  if ( !v8 )
    sub_1B64ACC(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  CombineResultEffectComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v15; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3
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
  System_Action_o *v34; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v4 = this;
  if ( (byte_4A01D50 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&BalanceConfig_TypeInfo, v5);
    sub_1B64870(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v6);
    sub_1B64870(&Method_CombineResultEffectComponent__EndPlay_b__156_0__, v7);
    sub_1B64870(&Method_CombineResultEffectComponent__EndPlay_b__156_1__, v8);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v9);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B64870(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v11);
    this = (CombineResultEffectComponent_o *)sub_1B64870(&StringLiteral_22464/*"playVoice"*/, v12);
    byte_4A01D50 = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( (int)playCnt < v4->fields.maxPlayCnt )
  {
    playVoiceList = v4->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
        sub_1B64AD4(this, method);
      v15 = playVoiceList->m_Items[playCnt];
      if ( v15 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v4,
          (System_String_o *)StringLiteral_22464/*"playVoice"*/,
          v15->fields.delay,
          0LL);
        return;
      }
    }
LABEL_33:
    sub_1B64ACC(this, method);
  }
  if ( v4->fields.player )
    CombineResultEffectComponent__stopVoice(v4, method);
  v4->fields.playCnt = 0;
  v4->fields.playVoiceList = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.playVoiceList, 0, v2, v3);
  this = (CombineResultEffectComponent_o *)v4->fields.limitUpKinds;
  if ( !this )
    goto LABEL_33;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_Int32Enum___Contains(
                                             (System_Collections_Generic_HashSet_T__o *)this,
                                             v4->fields.kind,
                                             (const MethodInfo_3368500 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v4->fields.isLimitUpSuppression )
      goto LABEL_13;
    kind = v4->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_13;
    baseUsrSvtData = v4->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_33;
    v27 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v27;
    *(_QWORD *)&v35.fields.fakeValue = v26;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                               v35,
                                               0LL);
    v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseUsrSvtData;
    if ( !v28 )
      goto LABEL_33;
    v29 = (int)this;
    v30 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                              v28[6],
                                              0LL);
    v31 = (_DWORD)v30 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v30, v29, (_DWORD)v30 + 1, v32) )
    {
      v33 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1B64ABC(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v33,
        (Il2CppObject *)v4,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v34 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v34, (Il2CppObject *)v4, Method_CombineResultEffectComponent__EndPlay_b__156_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v29, v31, v33, v34, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v4->fields.limitUpResultCheck;
      v17 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)v4, Method_CombineResultEffectComponent__EndPlay_b__156_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_33;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v17, 1, v18);
    }
  }
  else if ( v4->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v4, method);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v4, v19) )
    {
      this = (CombineResultEffectComponent_o *)v4->fields.touchInfo;
      if ( !this )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v4->fields.costumeId;
      v23 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v23 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v23->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v4, v20);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v4, v4->fields.skillShowIndex, v21);
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

  if ( (byte_4A01D55 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v3);
    sub_1B64870(&Method_CombineResultEffectComponent__FadeoutProcess_b__165_0__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A01D55 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v8 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
      v10 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__165_0__,
        0LL);
      if ( !Instance )
        sub_1B64ACC(v11, v12);
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

  if ( (byte_4A01D3C & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4A01D3C = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1B64ACC(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1B64AD4(v6, *(_QWORD *)&svtId);
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

  if ( (byte_4A01D56 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&messageId);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64870(&StringLiteral_1/*""*/, v11);
    byte_4A01D56 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v25, 0LL);
    if ( !v15 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v15, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_21:
      sub_1B64ACC(Instance, v13);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v26, 0LL);
  if ( !v20 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v20,
          (Il2CppObject **)&v23,
          (int32_t)Instance,
          (const MethodInfo_30D61D4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v23;
  if ( !v23 )
    goto LABEL_21;
  return ServantEntity__getName(v23, -1, -1, 0LL);
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

  if ( (byte_4A01D37 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIPanel___, fmsString);
    byte_4A01D37 = 1;
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
    sub_1B64ACC(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B64ACC(0LL, transformCount);
  UserServantEntity__GetTransformedServantInfo(baseUsrSvtData, &transformInfo, transformCount, 0LL);
  return transformInfo;
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
  __int64 v15; // x21
  __int128 v16; // q0
  int64_t v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x3
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v22; // x8
  SkillInfo_o *v23; // x9
  const MethodInfo *v24; // x3
  SkillInfo_o *v25; // x8
  bool v26; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v30; // [xsp+60h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v32; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-48h] BYREF

  if ( (byte_4A01D4A & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A01D4A = 1;
  }
  v32 = 0LL;
  skillInfoList = 0LL;
  v30 = 0LL;
  tdInfo = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v29.fields.fakeValue = v14;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v28 = v29;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v28, 0LL);
                if ( !v15 )
                  goto LABEL_52;
                v16 = *(_OWORD *)(v15 + 32);
                v17 = Instance;
                *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
                *(_OWORD *)&v27.fields.fakeValue = v16;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v27, 0LL);
                if ( v17 == Instance )
                  break;
                if ( v11 == v12 )
                  goto LABEL_20;
                if ( (unsigned int)++v12 >= *(_DWORD *)(v10 + 24) )
LABEL_18:
                  sub_1B64AD4(Instance, id);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v15;
              sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, v15, v18, v19);
            }
LABEL_20:
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
                    goto LABEL_52;
                  if ( i >= skillInfoList->max_length )
                    goto LABEL_18;
                  v22 = skillInfoList->m_Items[i];
                  if ( !v22 || !v32 )
                    goto LABEL_52;
                  if ( i >= v32->max_length )
                    goto LABEL_18;
                  v23 = v32->m_Items[i];
                  if ( !v23 )
                    goto LABEL_52;
                  id = (unsigned int)v22->fields.id;
                  if ( *(_QWORD *)&v22->fields.id != *(_QWORD *)&v23->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v22->fields.lv,
                      v20);
                    if ( !v32 )
                      goto LABEL_52;
                    if ( i >= v32->max_length )
                      goto LABEL_18;
                    v25 = v32->m_Items[i];
                    if ( !v25 )
                      goto LABEL_52;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_52;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v25->fields.id,
                      v25->fields.lv,
                      v24);
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
LABEL_50:
                        this->fields.treasureDeviceEnabled = v26;
                        return;
                      }
                      if ( tdInfo && v30 )
                      {
                        v26 = tdInfo->fields.id != v30->fields.id || tdInfo->fields.lv != v30->fields.lv;
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
    sub_1B64ACC(Instance, id);
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
  int32_t v10; // w3
  UnityEngine_Transform_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x1

  if ( (byte_4A01D27 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v3);
    sub_1B64870(&Method_CombineResultEffectComponent__InitCombineEffect_b__112_0__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&StringLiteral_11303/*"ResultEffect"*/, v6);
    byte_4A01D27 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11303/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_21;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.effect, (int32_t)Value, v9, v10);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  v11 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_49F9206 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9206 = 1;
  }
  if ( !v11 )
    goto LABEL_21;
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    v16 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__112_0__,
      0LL);
    if ( v16 )
    {
      CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_21:
    sub_1B64ACC(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v12);
  if ( this->fields.kind == 6 )
    CombineResultEffectComponent__loadBoxGachaEffect(this, v19);
  else
    CombineResultEffectComponent__SetResultServantVoiceData(this, v19);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return !CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(this, method);
}


bool __fastcall CombineResultEffectComponent__IsShowNextNpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  int v4; // w0

  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    sub_1B64ACC(0LL, method);
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

  if ( (byte_4A01D51 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A01D51 = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, method);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                                        v16,
                                                                                        0LL);
  if ( !v10 )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v10,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_30D61D4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_1B64ACC(costumeSkillInfoManager, method);
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
    sub_1B64ACC(0LL, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A01D5E & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5443/*"END_ANIMATION"*/, method);
    byte_4A01D5E = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1B64ACC(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5443/*"END_ANIMATION"*/, 0LL);
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
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v2 = (Il2CppObject *)this;
  if ( (byte_4A01D5A & 1) == 0 )
  {
    sub_1B64870(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&LocalizationManager_TypeInfo, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CombineResultEffectComponent_o *)sub_1B64870(&StringLiteral_8210/*"LIMIT_COUNT_SEALED_TITLE"*/, v8);
    byte_4A01D5A = 1;
  }
  monitor = v2[12].monitor;
  if ( !monitor )
    goto LABEL_14;
  v11 = monitor[10];
  v10 = monitor[11];
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v11;
  *(_QWORD *)&v22.fields.fakeValue = v10;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v22, 0LL);
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[12].monitor;
  if ( !v12 )
    goto LABEL_14;
  v13 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v12[6], 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_14;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v13,
                                    v14 + 1,
                                    0LL);
  v16 = (LimitCountSealDialogComponent_o *)v2[9].monitor;
  v17 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8210/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v19 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1B64ABC(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v19,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    v20);
  if ( !v16 )
LABEL_14:
    sub_1B64ACC(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v16, v18, v17, v19, v21);
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
  int32_t v15; // w3
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

  if ( (byte_4A01D57 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&LocalizationManager_TypeInfo, v3);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64870(&ServantCharaGraphEXOpenManager_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_CombineResultEffectComponent___c__DisplayClass167_0__OpenNotification_b__0__, v7);
    sub_1B64870(&CombineResultEffectComponent___c__DisplayClass167_0_TypeInfo, v8);
    sub_1B64870(&StringLiteral_11498/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v9);
    sub_1B64870(&StringLiteral_1/*""*/, v10);
    byte_4A01D57 = 1;
  }
  v11 = sub_1B64ABC(CombineResultEffectComponent___c__DisplayClass167_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_28;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
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
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v42, 0LL);
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
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v43, 0LL);
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
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v44, 0LL);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v36 = System_Int32__ToString((int32_t)&v41, 0LL);
          v37 = System_String__Concat_61383576((System_String_o *)StringLiteral_11498/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v36, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v38 = LocalizationManager__Get(v37, 0LL);
          v39 = System_String__Format(v38, NameFromMessageId, 0LL);
          v40 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v40,
            (Il2CppObject *)v11,
            Method_CombineResultEffectComponent___c__DisplayClass167_0__OpenNotification_b__0__,
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
    sub_1B64ACC(AscensionAfterDialogId, v13);
  }
  return v16;
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
  CommonUI_o *UserId; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *Master_object; // x23
  CommonUI_o *v26; // x22
  const MethodInfo *v27; // x2
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v29; // x20
  CommonUI_o *v30; // x22
  ServantStatusDialog_EndDelegate_o *v31; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A01D5D & 1) == 0 )
  {
    sub_1B64870(&AvalonSceneManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64870(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_1B64870(&DataManager_TypeInfo, v12);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_1B64870(&NetworkManager_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B64870(&Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__0__, v16);
    sub_1B64870(&CombineResultEffectComponent___c__DisplayClass173_0_TypeInfo, v17);
    byte_4A01D5D = 1;
  }
  entity = 0LL;
  v18 = sub_1B64ABC(CombineResultEffectComponent___c__DisplayClass173_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_20;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 24) = finishCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)finishCallback, v23, v24);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = UserId;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v26 )
      {
        CommonUI__maskFadein(v26, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          UserId = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( UserId )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)UserId, 0, v27);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v29 = entity;
            v30 = (CommonUI_o *)Instance;
            v31 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v31,
              (Il2CppObject *)v18,
              Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v30 )
            {
              CommonUI__OpenServantStatusDialog_30358972(v30, 33, v29, limitCount, v31, 0LL);
              return;
            }
          }
        }
      }
LABEL_20:
      sub_1B64ACC(UserId, v20);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_20;
  CommonUI__CloseConfirmDialog_30347596(UserId, *(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall CombineResultEffectComponent__ReleaseVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A01D53 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    byte_4A01D53 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v2, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1B64ACC(0LL, v6);
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
  __int64 v23; // x1
  DataManager_o *v24; // x22
  Il2CppObject *MasterData_object; // x25
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v27; // x24
  __int64 v28; // x22
  __int64 v29; // x23
  struct UserServantEntity_o *v30; // x8
  int32_t v31; // w22
  int32_t v32; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w23
  struct UserServantEntity_o *v35; // x8
  int32_t v36; // w23
  __int64 v37; // x24
  __int64 v38; // x26
  CombineResultEffectComponent_o *v39; // x0
  const MethodInfo *v40; // x3
  char v41; // w24
  System_Collections_Generic_List_object__o *v42; // x25
  _BOOL8 v43; // x0
  __int64 v44; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x1
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  UnityEngine_Component_o *v52; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v54; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x0
  __int64 v59; // x1
  float v60; // s0
  float v61; // s1
  float v62; // s2
  struct System_Int32_array *v63; // x8
  il2cpp_array_size_t max_length; // w9
  int v65; // s11
  int v66; // s12
  float v67; // s9
  float v68; // s10
  float v69; // s8
  UnityEngine_Transform_o *v70; // x0
  __int64 v71; // x1
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v73; // x28
  __int64 v74; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  const MethodInfo *v82; // x2
  UnityEngine_GameObject_o *v83; // x0
  UIStandFigureR_o *v84; // x23
  System_Collections_Generic_List_object__o *v85; // x21
  StandFigureCollect_o *v86; // x22
  int32_t v87; // w2
  int32_t v88; // w3
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  int32_t masterDataBytes; // w21
  float FadeTime; // s8
  int32_t m_CancellationTokenSource_high; // w22
  int32_t v97; // w20
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+30h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01D3A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_1B64870(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v8);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v12);
    sub_1B64870(&ImageLimitCount_TypeInfo, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v16);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B64870(&StandFigureCollect_TypeInfo, v19);
    sub_1B64870(&StringLiteral_8369/*"LimitUpResSvtNodeName"*/, v20);
    byte_4A01D3A = 1;
  }
  entity = 0LL;
  memset(&v100, 0, sizeof(v100));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8369/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v24 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v24,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v24,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_75;
  v27 = (ServantLimitAddMaster_o *)Instance;
  v29 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v102.fields.currentCryptoKey = v29;
  *(_QWORD *)&v102.fields.fakeValue = v28;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v102, 0LL);
  v30 = this->fields.resUsrSvtData;
  if ( !v30 )
    goto LABEL_75;
  v31 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                v30->fields.limitCount,
                                0LL);
  if ( !v27 )
    goto LABEL_75;
  v32 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v27, &entity, v31, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_75;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v32 = LimitCountUpResultServantLimitCount;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_75;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v31,
                                 v32,
                                 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v31, ServantLimitCountSealAfter, 0LL);
  v35 = this->fields.resUsrSvtData;
  if ( !v35 )
    goto LABEL_75;
  v36 = (int)Instance;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v38;
  *(_QWORD *)&v103.fields.fakeValue = v37;
  v39 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v103, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v39, (int32_t)v39, v36, v40);
  if ( !MasterData_object )
LABEL_75:
    sub_1B64ACC(Instance, v23);
  v41 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v31,
                                v36,
                                2,
                                0LL);
  if ( Instance
    && (v42 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v99,
      v42,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v100 = v99;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v100,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v43 )
        break;
      if ( !StandFigureNode )
        sub_1B64ACC(v43, v44);
      current = (SvtMultiPortraitEntity_o *)v100.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_1B64ACC(gameObject, v47);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           gameObject,
                           current->fields.portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v41 & 1,
                           -1,
                           0LL);
      v52 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1B64ACC(0LL, v49);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (int32_t)current,
        v50,
        v51);
      transform = UnityEngine_Component__get_transform(v52, 0LL);
      if ( !transform )
        sub_1B64ACC(0LL, v54);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v56 = UnityEngine_Component__get_transform(v52, 0LL);
        if ( !v56 )
          sub_1B64ACC(0LL, v57);
        *(UnityEngine_Vector3_o *)&v60 = UnityEngine_Transform__get_localPosition(v56, 0LL);
        v63 = current->fields.commonPosition;
        if ( !v63 )
          sub_1B64ACC(v58, v59);
        max_length = v63->max_length;
        if ( !max_length )
          sub_1B64AD4(v58, v59);
        if ( max_length == 1 )
          sub_1B64AD4(v58, v59);
        v66 = v63->m_Items[1];
        v65 = v63->m_Items[2];
        v67 = v60;
        v68 = v61;
        v69 = v62;
        v70 = UnityEngine_Component__get_transform(v52, 0LL);
        if ( !v70 )
          sub_1B64ACC(0LL, v71);
        v104.fields.x = v67 + (float)v66;
        v104.fields.y = v68 + (float)v65;
        v104.fields.z = v69;
        UnityEngine_Transform__set_localPosition(v70, v104, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v52,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v73 = (StandFigureCollect_o *)sub_1B64ABC(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v73, current, (UIStandFigureR_o *)v52, 0LL);
      if ( !afterFigureCollectList )
        sub_1B64ACC(v74, v75);
      items = afterFigureCollectList->fields._items;
      v79 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1B64ACC(v74, v75);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v73,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v81[4] = (Il2CppClass *)v73;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v73, v76, v77);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v100,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_75;
    v83 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_37612308(
                                  v83,
                                  v31,
                                  v36,
                                  1,
                                  0,
                                  1,
                                  0LL,
                                  v41 & 1,
                                  -1,
                                  0LL);
    if ( !Instance )
      goto LABEL_75;
    v84 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_75;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v85 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v86 = (StandFigureCollect_o *)sub_1B64ABC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v86, 0LL, v84, 0LL);
    if ( !v85 )
      goto LABEL_75;
    v89 = v85->fields._items;
    v90 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v85->fields._version;
    if ( !v89 )
      goto LABEL_75;
    v91 = v85->fields._size;
    if ( (unsigned int)v91 >= v89->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v85,
        (Il2CppObject *)v86,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
    }
    else
    {
      v92 = &v89->obj.klass + v91;
      v85->fields._size = v91 + 1;
      v92[4] = (Il2CppClass *)v86;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v92 + 4), (int32_t)v86, v87, v88);
    }
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v82);
  masterDataBytes = 0;
  FadeTime = 0.0;
  m_CancellationTokenSource_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1B64AD4(LimitUpSvtVoiceList, v23);
    Instance = (DataManager_o *)LimitUpSvtVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_75;
    m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
    masterDataBytes = (int32_t)Instance->fields.masterDataBytes;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0LL);
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_2E57F90 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v97 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v97,
                                    (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( !Instance )
        break;
      UIStandFigureR__SetFace_40651432(
        (UIStandFigureR_o *)Instance,
        m_CancellationTokenSource_high,
        masterDataBytes,
        0LL,
        FadeTime,
        0LL);
      if ( ++v97 >= System_Linq_Enumerable__Count_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                      (const MethodInfo_2E57F90 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
        return;
    }
    goto LABEL_75;
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  CombineRootComponent_c *v18; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_4A01D23 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, usrSvtData);
    sub_1B64870(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__108_0__, v11);
    sub_1B64870(&CombineRootComponent_TypeInfo, v12);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    byte_4A01D23 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    currentSkillId,
    currentSkillLv);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v14, v15);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v16, v17);
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
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__108_0__,
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

  if ( (byte_4A01D33 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3161/*"BaseSvtNodeName"*/, *(_QWORD *)&formId);
    byte_4A01D33 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1B64ACC(0LL, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3161/*"BaseSvtNodeName"*/,
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
  if ( (byte_4A01D38 & 1) == 0 )
  {
    sub_1B64870(&ImageLimitCount_TypeInfo, method);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B64870(&StringLiteral_8368/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_4A01D38 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B64ACC(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8368/*"LimitUpBaseSvtNodeName"*/,
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
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  void *resUsrSvtData; // x0
  System_String_o *v40; // x20
  UnityEngine_Transform_o *transform; // x0
  UIExtrusionLabel_o *v42; // x20
  System_String_o *v43; // x20
  UnityEngine_Transform_o *v44; // x0
  UIExtrusionLabel_o *v45; // x20
  struct UserServantEntity_o *v46; // x8
  __int64 v47; // x20
  __int64 v48; // x21
  struct UserServantEntity_o *v49; // x8
  int32_t v50; // w20
  int32_t v51; // w21
  struct UserServantEntity_o *v52; // x8
  struct UserServantEntity_o *v53; // x8
  int32_t v54; // w20
  int32_t v55; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v57; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  float v60; // s8
  _BOOL4 v61; // w20
  __int64 v62; // x23
  int32_t v63; // w20
  unsigned int v64; // w22
  int32_t v65; // w0
  __int64 *v66; // x24
  __int64 *v67; // x8
  __int64 *v68; // x8
  System_String_o *v69; // x20
  UnityEngine_Transform_o *v70; // x0
  UIExtrusionLabel_o *v71; // x20
  System_String_o *v72; // x20
  UnityEngine_Transform_o *v73; // x0
  UIExtrusionLabel_o *v74; // x20
  struct UserServantEntity_o *v75; // x8
  const MethodInfo *v76; // x2
  __int64 *v77; // x20
  __int64 *v78; // x8
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  unsigned __int64 v81; // x21
  __int64 v82; // x27
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v84; // x9
  struct System_String_array *startAniName; // x8
  int v86; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v88; // w2
  CombineResultEffectComponent_o *v89; // x0
  System_String_o *v90; // x1
  bool v91; // w2
  CombineResultEffectComponent_o *v92; // x0
  System_String_o *v93; // x1
  System_String_o *v94; // x20
  UnityEngine_Transform_o *v95; // x0
  UnityEngine_Component_o *v96; // x20
  float Value; // s0
  float v98; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v100; // x20
  int32_t v101; // w2
  int32_t v102; // w3
  __int64 *v103; // x8
  __int64 v104; // x1
  ServantStatusBattleListViewItem_o *v105; // x0
  System_String_o *v106; // x20
  UnityEngine_Transform_o *v107; // x0
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x2
  const MethodInfo *v110; // x2
  const MethodInfo *v111; // x2
  const MethodInfo *v112; // x2
  const MethodInfo *v113; // x2
  Il2CppObject *v114; // x21
  EventDelegate_Callback_o *v115; // x22
  EventDelegate_o *v116; // x20
  int32_t v117; // w2
  int32_t v118; // w3
  __int64 v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  __int64 v122; // x8
  const MethodInfo *v123; // x3
  const MethodInfo *v124; // x2
  __int64 v125; // x20
  struct System_String_array *v126; // x8
  int v127; // w9
  const MethodInfo *v128; // x2
  __int64 v129; // x21
  float FadeTime; // s0
  struct System_String_o *v131; // x20
  int32_t v132; // w2
  int32_t v133; // w3
  const MethodInfo *v134; // x1
  __int64 v135; // [xsp+8h] [xbp-68h] BYREF
  __int64 v136; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01D2B & 1) == 0 )
  {
    sub_1B64870(&EventDelegate_Callback_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent__SetCardParam_b__116_0__, v4);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v5);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UILabel___, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v7);
    sub_1B64870(&EventDelegate_TypeInfo, v8);
    sub_1B64870(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B64870(&ImageLimitCount_TypeInfo, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B64870(&StringLiteral_4760/*"CostumeName"*/, v14);
    sub_1B64870(&StringLiteral_3161/*"BaseSvtNodeName"*/, v15);
    sub_1B64870(&StringLiteral_17206/*"bit_result_120"*/, v16);
    sub_1B64870(&StringLiteral_17213/*"bit_result_extraskill02"*/, v17);
    sub_1B64870(&StringLiteral_17222/*"bit_result_nobledeliverance"*/, v18);
    sub_1B64870(&StringLiteral_12176/*"START_ANIMATION"*/, v19);
    sub_1B64870(&StringLiteral_17210/*"bit_result_command_card_exceed"*/, v20);
    sub_1B64870(&StringLiteral_17219/*"bit_result_limitbreak"*/, v21);
    sub_1B64870(&StringLiteral_17214/*"bit_result_friendship_exceed"*/, v22);
    sub_1B64870(&StringLiteral_11273/*"ResMaxLvExceedNodeName"*/, v23);
    sub_1B64870(&StringLiteral_17227/*"bit_result_skillrank"*/, v24);
    sub_1B64870(&StringLiteral_17208/*"bit_result_advent02"*/, v25);
    sub_1B64870(&StringLiteral_17217/*"bit_result_grail_02"*/, v26);
    sub_1B64870(&StringLiteral_17228/*"bit_result_skillup"*/, v27);
    sub_1B64870(&StringLiteral_4899/*"CrtMaxLvExceedNodeName"*/, v28);
    sub_1B64870(&StringLiteral_17223/*"bit_result_powerup"*/, v29);
    sub_1B64870(&StringLiteral_12887/*"StartAnimationName"*/, v30);
    sub_1B64870(&StringLiteral_17216/*"bit_result_grail_01"*/, v31);
    sub_1B64870(&StringLiteral_17207/*"bit_result_advent01"*/, v32);
    sub_1B64870(&StringLiteral_17212/*"bit_result_extraskill01"*/, v33);
    sub_1B64870(&StringLiteral_17226/*"bit_result_skilldeliverance"*/, v34);
    sub_1B64870(&StringLiteral_17229/*"bit_result_skinchange01"*/, v35);
    sub_1B64870(&StringLiteral_4900/*"CrtMaxLvNodeName"*/, v36);
    sub_1B64870(&StringLiteral_11274/*"ResMaxLvNodeName"*/, v37);
    sub_1B64870(&StringLiteral_13035/*"SvtEqCardScale"*/, v38);
    byte_4A01D2B = 1;
  }
  v136 = 0LL;
  v135 = 0LL;
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
      v84 = this->fields.resUsrSvtData;
      if ( !v84 )
        goto LABEL_182;
      if ( baseUsrSvtData->fields.exp != v84->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_175;
      }
LABEL_86:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_182;
      v86 = this->fields.successInfo - 1;
      if ( v86 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v86];
LABEL_175:
        resUsrSvtData = this->fields.fsm;
        if ( resUsrSvtData )
        {
          v131 = *p_LimitAnimName;
          resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
          if ( resUsrSvtData )
          {
            resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                              (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                              0LL);
            if ( resUsrSvtData )
            {
              *((_QWORD *)resUsrSvtData + 7) = v131;
              sub_1B64814((ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56), (int32_t)v131, v132, v133);
              CombineResultEffectComponent__SetLevelUpSvtFigure(this, v134);
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
        sub_1B64ACC(resUsrSvtData, method);
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
                        (System_String_o *)StringLiteral_4900/*"CrtMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v40 = (System_String_o *)resUsrSvtData;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(transform, v40, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_182;
      v42 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v136) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v136 + 4, 0LL);
      if ( !v42 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v42, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11274/*"ResMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v43 = (System_String_o *)resUsrSvtData;
      v44 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v44, v43, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      v45 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v136) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v136, 0LL);
      if ( !v45 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v45, (System_String_o *)resUsrSvtData, 0LL);
      v46 = this->fields.baseUsrSvtData;
      if ( !v46 )
        goto LABEL_182;
      v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v137.fields.currentCryptoKey = v48;
      *(_QWORD *)&v137.fields.fakeValue = v47;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v137, 0LL);
      v49 = this->fields.baseUsrSvtData;
      if ( !v49 )
        goto LABEL_182;
      v50 = (int)resUsrSvtData;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v49->fields.limitCount, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      resUsrSvtData = (void *)ImageLimitCount__GetImageLimitCount(v50, v51, 0LL);
      v52 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)resUsrSvtData;
      if ( !v52 )
        goto LABEL_182;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                v52->fields.svtId,
                                0LL);
      v53 = this->fields.resUsrSvtData;
      if ( !v53 )
        goto LABEL_182;
      v54 = (int)resUsrSvtData;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v53->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v54, v55, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      v60 = 0.0;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v61 = resSvtNameData != 0LL;
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
        CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v57);
        CombineResultEffectComponent__setBaseSvtGraphCard(this, v61, v79);
        CombineResultEffectComponent__setResultSvtGraphCard(this, v61, v80);
        v66 = &StringLiteral_17208/*"bit_result_advent02"*/;
LABEL_159:
        resUsrSvtData = this->fields.fsm;
        if ( !resUsrSvtData )
          goto LABEL_182;
        v125 = *v66;
        goto LABEL_161;
      }
      if ( this->fields.isLimitUpSuppression || !CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v57) )
      {
LABEL_27:
        v62 = 0LL;
        v63 = 0;
        v64 = 0;
        goto LABEL_28;
      }
      resUsrSvtData = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v128);
      if ( !resUsrSvtData )
        goto LABEL_182;
      if ( *((_DWORD *)resUsrSvtData + 6) )
      {
        v129 = *((_QWORD *)resUsrSvtData + 4);
        if ( !v129 )
          goto LABEL_182;
        v64 = *(_DWORD *)(v129 + 28);
        v63 = *(_DWORD *)(v129 + 56);
        FadeTime = ServantVoiceData__GetFadeTime(*((ServantVoiceData_o **)resUsrSvtData + 4), 0LL);
        v62 = *(_QWORD *)(v129 + 32);
        v60 = FadeTime;
LABEL_28:
        v65 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_2E57F90 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( v62 )
        {
          v66 = &StringLiteral_17207/*"bit_result_advent01"*/;
          if ( v65 != *(_DWORD *)(v62 + 24) || v65 <= 0 )
            goto LABEL_159;
        }
        else if ( v65 < 1 )
        {
          v66 = &StringLiteral_17207/*"bit_result_advent01"*/;
          goto LABEL_159;
        }
        v66 = &StringLiteral_17207/*"bit_result_advent01"*/;
        v81 = 0LL;
        if ( v65 <= 1 )
          v82 = 1LL;
        else
          v82 = (unsigned int)v65;
        while ( 1 )
        {
          resUsrSvtData = this->fields.currentFigureCollectList;
          if ( !resUsrSvtData )
            goto LABEL_182;
          resUsrSvtData = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)resUsrSvtData,
                            v81,
                            (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !resUsrSvtData )
            goto LABEL_182;
          resUsrSvtData = (void *)*((_QWORD *)resUsrSvtData + 3);
          if ( v62 )
          {
            if ( v81 >= *(unsigned int *)(v62 + 24) )
              goto LABEL_183;
            if ( !resUsrSvtData )
              goto LABEL_182;
            LODWORD(method) = *(_DWORD *)(v62 + 32 + 4 * v81);
          }
          else
          {
            method = (const MethodInfo *)v64;
            if ( !resUsrSvtData )
              goto LABEL_182;
          }
          UIStandFigureR__SetFace_40651432((UIStandFigureR_o *)resUsrSvtData, (int32_t)method, v63, 0LL, v60, 0LL);
          if ( v82 == ++v81 )
            goto LABEL_159;
        }
      }
      goto LABEL_183;
    case 2:
      v88 = 1;
      v89 = this;
      v90 = (System_String_o *)StringLiteral_17228/*"bit_result_skillup"*/;
      goto LABEL_92;
    case 3:
      v68 = &StringLiteral_17226/*"bit_result_skilldeliverance"*/;
      goto LABEL_91;
    case 4:
      v91 = 1;
      v92 = this;
      v93 = (System_String_o *)StringLiteral_17228/*"bit_result_skillup"*/;
      goto LABEL_96;
    case 5:
      v67 = &StringLiteral_17222/*"bit_result_nobledeliverance"*/;
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
                        (System_String_o *)StringLiteral_3161/*"BaseSvtNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v94 = (System_String_o *)resUsrSvtData;
      v95 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v95, v94, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_182;
      v96 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13035/*"SvtEqCardScale"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)resUsrSvtData, 0LL);
      if ( !v96 )
        goto LABEL_182;
      v98 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v96, 0LL);
      resUsrSvtData = CharaGraphManager__CreateTexturePrefab_37595860(
                        gameObject,
                        this->fields.resUsrSvtData,
                        10,
                        0LL,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v100 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v138.fields.z = 0.0;
      v138.fields.x = -50.0;
      v138.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)resUsrSvtData, v138, 0LL);
      resUsrSvtData = UnityEngine_Component__get_transform(v100, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v139.fields.x = v98;
      v139.fields.y = v98;
      v139.fields.z = v98;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)resUsrSvtData, v139, 0LL);
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
        v78 = (__int64 *)&this->fields.LimitAnimName;
      }
      else
      {
        v126 = this->fields.startAniName;
        if ( !v126 )
          goto LABEL_182;
        v127 = this->fields.successInfo - 1;
        if ( v127 >= v126->max_length )
LABEL_183:
          sub_1B64AD4(resUsrSvtData, method);
        v78 = (__int64 *)&v126->m_Items[v127];
      }
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
LABEL_157:
      v125 = *v78;
      goto LABEL_161;
    case 7:
    case 0x15:
      v68 = &StringLiteral_17227/*"bit_result_skillrank"*/;
LABEL_91:
      v90 = (System_String_o *)*v68;
      v89 = this;
      v88 = 0;
LABEL_92:
      CombineResultEffectComponent__SetCardParam_Skill(v89, v90, v88, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v67 = &StringLiteral_17227/*"bit_result_skillrank"*/;
LABEL_95:
      v93 = (System_String_o *)*v67;
      v92 = this;
      v91 = 0;
LABEL_96:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v92, v93, v91, v2);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v103 = &StringLiteral_17228/*"bit_result_skillup"*/;
      goto LABEL_122;
    case 0xB:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v103 = &StringLiteral_17223/*"bit_result_powerup"*/;
LABEL_122:
      v104 = *v103;
      *((_QWORD *)resUsrSvtData + 7) = *v103;
      v105 = (ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56);
      goto LABEL_164;
    case 0xC:
    case 0x16:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 2, v2);
      resUsrSvtData = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4899/*"CrtMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v69 = (System_String_o *)resUsrSvtData;
      v70 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v70, v69, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_182;
      v71 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v135) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v135 + 4, 0LL);
      if ( !v71 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v71, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11273/*"ResMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v72 = (System_String_o *)resUsrSvtData;
      v73 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v73, v72, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      v74 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v135) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v135, 0LL);
      if ( !v74 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v74, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_182;
      if ( *((_DWORD *)resUsrSvtData + 74) )
        goto LABEL_53;
      v75 = this->fields.resUsrSvtData;
      if ( !v75 )
        goto LABEL_182;
      if ( v75->fields.exceedCount >= 1 )
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
        v77 = &StringLiteral_17219/*"bit_result_limitbreak"*/;
LABEL_144:
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v76);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v124);
        goto LABEL_145;
      }
      if ( this->fields.isChangeCardImg )
      {
        v77 = &StringLiteral_17217/*"bit_result_grail_02"*/;
        goto LABEL_144;
      }
      v77 = &StringLiteral_17216/*"bit_result_grail_01"*/;
LABEL_145:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v125 = *v77;
LABEL_161:
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      *((_QWORD *)resUsrSvtData + 7) = v125;
      v105 = (ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56);
      LODWORD(v104) = v125;
LABEL_164:
      sub_1B64814(v105, v104, v101, v102);
LABEL_165:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resUsrSvtData, (System_String_o *)StringLiteral_12176/*"START_ANIMATION"*/, 0LL);
      return;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v78 = &StringLiteral_17214/*"bit_result_friendship_exceed"*/;
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
                        (System_String_o *)StringLiteral_4760/*"CostumeName"*/,
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
                        (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !resUsrSvtData )
        goto LABEL_182;
      UILabel__set_text((UILabel_o *)resUsrSvtData, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v108);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v109);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v110);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v78 = &StringLiteral_17229/*"bit_result_skinchange01"*/;
      goto LABEL_157;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v78 = &StringLiteral_17210/*"bit_result_command_card_exceed"*/;
      goto LABEL_157;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v111);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v112);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v113);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v78 = &StringLiteral_17206/*"bit_result_120"*/;
      goto LABEL_157;
    case 0x19:
      resUsrSvtData = this->fields.effect;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v114 = UnityEngine_GameObject__AddComponent_object_(
               (UnityEngine_GameObject_o *)resUsrSvtData,
               (const MethodInfo_2E8A0CC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v115 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v115,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__116_0__,
        0LL);
      v116 = (EventDelegate_o *)sub_1B64ABC(EventDelegate_TypeInfo);
      EventDelegate___ctor_46517468(v116, v115, 0LL);
      if ( !v114 )
        goto LABEL_182;
      resUsrSvtData = v114[2].klass;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v119 = *((_QWORD *)resUsrSvtData + 2);
      v120 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++*((_DWORD *)resUsrSvtData + 7);
      if ( !v119 )
        goto LABEL_182;
      v121 = *((int *)resUsrSvtData + 6);
      if ( (unsigned int)v121 >= *(_DWORD *)(v119 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resUsrSvtData,
          (Il2CppObject *)v116,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
      }
      else
      {
        v122 = v119 + 8 * v121;
        *((_DWORD *)resUsrSvtData + 6) = v121 + 1;
        *(_QWORD *)(v122 + 32) = v116;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v122 + 32), (int32_t)v116, v117, v118);
      }
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v123);
      resUsrSvtData = this->fields.fsm;
      v78 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17213/*"bit_result_extraskill02"*/ : &StringLiteral_17212/*"bit_result_extraskill01"*/);
      if ( !resUsrSvtData )
        goto LABEL_182;
      goto LABEL_157;
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
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A01D2E & 1) == 0 )
  {
    sub_1B64870(&EventDelegate_Callback_TypeInfo, startName);
    sub_1B64870(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__119_0__, v7);
    sub_1B64870(&EventDelegate_TypeInfo, v8);
    sub_1B64870(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1B64870(&StringLiteral_12176/*"START_ANIMATION"*/, v11);
    sub_1B64870(&StringLiteral_12887/*"StartAnimationName"*/, v12);
    byte_4A01D2E = 1;
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
            (const MethodInfo_2E8A0CC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v16 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v16,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__119_0__,
      0LL);
    v17 = (EventDelegate_o *)sub_1B64ABC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46517468(v17, v16, 0LL);
    if ( !v15
      || (effect = (int *)v15[2].klass) == 0LL
      || (v20 = *((_QWORD *)effect + 2),
          v21 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v20) )
    {
LABEL_17:
      sub_1B64ACC(effect, v13);
    }
    v22 = effect[6];
    if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v17,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = v20 + 8 * v22;
      effect[6] = v22 + 1;
      *(_QWORD *)(v23 + 32) = v17;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v17, v18, v19);
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
                    (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                    0LL);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(effect + 14), (int32_t)startName, v24, v25);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12176/*"START_ANIMATION"*/, 0LL);
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
  int32_t v18; // w3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A01D2F & 1) == 0 )
  {
    sub_1B64870(&EventDelegate_Callback_TypeInfo, startName);
    sub_1B64870(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__120_0__, v7);
    sub_1B64870(&EventDelegate_TypeInfo, v8);
    sub_1B64870(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1B64870(&StringLiteral_12176/*"START_ANIMATION"*/, v11);
    sub_1B64870(&StringLiteral_12887/*"StartAnimationName"*/, v12);
    byte_4A01D2F = 1;
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
            (const MethodInfo_2E8A0CC *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v15 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__120_0__,
      0LL);
    v16 = (EventDelegate_o *)sub_1B64ABC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46517468(v16, v15, 0LL);
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
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = v19 + 8 * v21;
      effect[6] = v21 + 1;
      *(_QWORD *)(v22 + 32) = v16;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v16, v17, v18);
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
                          (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                          0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(effect + 14), (int32_t)startName, v23, v24),
        (effect = (int *)this->fields.fsm) == 0LL) )
  {
LABEL_20:
    sub_1B64ACC(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12176/*"START_ANIMATION"*/, 0LL);
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
  int32_t v13; // w2
  char v14; // w3
  int32_t v15; // w2
  char v16; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  CombineRootComponent_c *v19; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_4A01D26 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, baseData);
    sub_1B64870(&Method_CombineResultEffectComponent__SetCombineLimit_b__111_0__, v9);
    sub_1B64870(&CombineRootComponent_TypeInfo, v10);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4A01D26 = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)callback,
    autoFadeout);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64ACC(gameObject, v18);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v19 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v19 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v19->static_fields->EXCEED_ASSET_PATH;
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__111_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v21, 1, 0LL);
}


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
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  AssetData_o *effectAssetData; // x0
  __int64 v22; // x1
  CombineRootComponent_c *v23; // x0
  Il2CppObject *Object_object__48356600; // x20
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_Transform_o *v26; // x21

  if ( (byte_4A01D20 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, userServantEntity);
    sub_1B64870(&CombineRootComponent_TypeInfo, v11);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v13);
    sub_1B64870(&StringLiteral_17210/*"bit_result_command_card_exceed"*/, v14);
    sub_1B64870(&StringLiteral_11303/*"ResultEffect"*/, v15);
    sub_1B64870(&StringLiteral_12181/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v16);
    byte_4A01D20 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    cardIndex,
    exceedCount);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v19, v20);
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
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17210/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48356600,
                                     (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v25 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v26 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F9206 )
  {
    effectAssetData = (AssetData_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v22);
    byte_49F9206 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11303/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v25,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_18:
    sub_1B64ACC(effectAssetData, v22);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12181/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v18; // x20
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1

  if ( (byte_4A01D1A & 1) == 0 )
  {
    sub_1B64870(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo, userSvtEntity);
    sub_1B64870(&StringLiteral_12185/*"START_COSTUME_EFFECT"*/, v11);
    byte_4A01D1A = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    costumeId,
    (int32_t)costumeName);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.costumeName, (int32_t)costumeName, v12, v13);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v14, v15);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v16, v17);
  this->fields.setResUsrSvtData = 0;
  v18 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1B64ABC(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v18, v19);
  this->fields.costumeSkillInfoManager = v18;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v18, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64ACC(gameObject, v23);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12185/*"START_COSTUME_EFFECT"*/, 0LL);
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
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  CombineRootComponent_c *v18; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48356600; // x20
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_Transform_o *v22; // x21

  if ( (byte_4A01D1E & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, userSvtData);
    sub_1B64870(&CombineRootComponent_TypeInfo, v7);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&StringLiteral_17214/*"bit_result_friendship_exceed"*/, v10);
    sub_1B64870(&StringLiteral_11303/*"ResultEffect"*/, v11);
    sub_1B64870(&StringLiteral_12188/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v12);
    byte_4A01D1E = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v15, v16);
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
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17214/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48356600,
                                     (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v21 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v22 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F9206 )
  {
    effectAssetData = (AssetData_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F9206 = 1;
  }
  if ( !v22
    || (UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11303/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v21,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_1B64ACC(effectAssetData, v17);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12188/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  CombineRootComponent_c *v19; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_4A01D1F & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, userSvtData);
    sub_1B64870(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__104_0__, v9);
    sub_1B64870(&CombineRootComponent_TypeInfo, v10);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4A01D1F = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    oldFriendShipRank,
    (int32_t)callback);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v18);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v19 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v19 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v19->static_fields->COMBINE_ASSET_PATH;
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__104_0__,
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
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1

  if ( (byte_4A01D14 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12187/*"START_FRIENDSHIPUP_EFFECT"*/, usrSvtData);
    byte_4A01D14 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    oldFriendShipRank,
    (int32_t)callback);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64ACC(gameObject, v14);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12187/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
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
  ServantScriptEntity_o *Entity_39410992; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct ServantVoiceData_array *v19; // x1
  ServantStatusBattleListViewItem_o *p_playVoiceList; // x0
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
  int32_t v31; // w3
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v35; // x21
  const MethodInfo *v36; // x2
  struct UserServantEntity_o *v37; // x8
  CombineResultEffectComponent_o *v38; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x0
  const MethodInfo *v43; // x2
  ServantVoiceEntity_o *v44; // x20
  UserServantEntity_o *v45; // x21
  ServantVoiceData_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  ServantVoiceData_array *v49; // x0
  int v50; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v2 = this;
  if ( (byte_4A01D35 & 1) == 0 )
  {
    sub_1B64870(&CombineResultFormManager_TypeInfo, method);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantScriptMaster___, v3);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (CombineResultEffectComponent_o *)sub_1B64870(&string___TypeInfo, v6);
    byte_4A01D35 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v9;
  *(_QWORD *)&v51.fields.fakeValue = v8;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v51, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_48;
  v10 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v10, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_39410992 = ServantScriptMaster__GetEntity_39410992((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_39410992 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_39410992, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v2->fields.combineVoiceId;
      method = (const MethodInfo *)v2->fields.baseUsrSvtData;
LABEL_19:
      v16 = ServantVoiceEntity__lotteryLevelUpVoice_39449732(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0LL);
LABEL_20:
      v19 = v16;
      p_playVoiceList = (ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList;
      v2->fields.playVoiceList = v19;
      goto LABEL_21;
    }
    method = (const MethodInfo *)v2->fields.baseUsrSvtData;
    if ( method )
    {
      v50 = *(_DWORD *)&method[2].slot;
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
        if ( System_Int32__Equals_62188676((int32_t)&v50, resUsrSvtData->fields.lv, 0LL) )
        {
          v25 = v2;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v25, form, 1, v21);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1B64918(string___TypeInfo, 1LL);
        v27 = v2->fields.baseUsrSvtData;
        if ( v27 )
        {
          v28 = this;
          p_svtId = &v27->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v52.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v52.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v52, v26);
          if ( v28 )
          {
            if ( !LODWORD(v28->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v28->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1B64814((ServantStatusBattleListViewItem_o *)&v28->fields.svtResultInfoWindow, (int32_t)this, v30, v31);
            v32 = System_String__Concat_61397104((System_String_array *)v28, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_69093624(v32, 0LL) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v35 = v2->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v16 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v35, v33);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1B64918(string___TypeInfo, 1LL);
            v37 = v2->fields.baseUsrSvtData;
            if ( v37 )
            {
              v38 = this;
              v39 = &v37->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v53.fields.currentCryptoKey = v39;
              *(_QWORD *)&v53.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v53, v36);
              if ( v38 )
              {
                if ( !LODWORD(v38->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v38->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1B64814(
                  (ServantStatusBattleListViewItem_o *)&v38->fields.svtResultInfoWindow,
                  (int32_t)this,
                  v40,
                  v41);
                v42 = System_String__Concat_61397104((System_String_array *)v38, 0LL);
                UnityEngine_PlayerPrefs__SetInt(v42, 1, 0LL);
                v44 = v2->fields.svtVoiceEntity;
                v45 = v2->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v46 = CombineResultFormManager__lotteryCombineResultInit(v44, v45, v43);
                v2->fields.playVoiceList = v46;
                sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList, (int32_t)v46, v47, v48);
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
                  sub_1B64AD4(this, method);
                }
                this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v49 = ServantVoiceEntity__lotteryLevelUpVoice_39449732(
                        (ServantVoiceEntity_o *)this,
                        v2->fields.baseUsrSvtData,
                        v2->fields.combineVoiceId,
                        0LL);
                LODWORD(v19) = (_DWORD)v49;
                v2->fields.playVoiceList = v49;
                p_playVoiceList = (ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList;
LABEL_21:
                sub_1B64814(p_playVoiceList, (int32_t)v19, v17, v18);
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
    sub_1B64ACC(this, method);
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

  if ( (byte_4A01D3B & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_1B64870(&ImageLimitCount_TypeInfo, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B64870(&StringLiteral_8369/*"LimitUpResSvtNodeName"*/, v8);
    byte_4A01D3B = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v11 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !*((_DWORD *)LimitUpSvtVoiceList + 6) )
      sub_1B64AD4(LimitUpSvtVoiceList, v10);
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
  LimitUpSvtVoiceList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
  v16 = this->fields.resUsrSvtData;
  if ( !v16 )
    goto LABEL_21;
  v17 = (int)LimitUpSvtVoiceList;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v16->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = DataManager__GetMasterData_object_(
                          (DataManager_o *)LimitUpSvtVoiceList,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v17, v18, 0LL) )
    goto LABEL_18;
  LimitUpSvtVoiceList = entity;
  if ( !entity )
LABEL_21:
    sub_1B64ACC(LimitUpSvtVoiceList, v10);
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
    (System_String_o *)StringLiteral_8369/*"LimitUpResSvtNodeName"*/,
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
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  __int64 v34; // x21
  __int64 v35; // x22
  int32_t v36; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v38; // x8
  ServantLimitImageMaster_o *v39; // x20
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_4A01D18 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&kind);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B64870(&StringLiteral_12191/*"START_LIMITUP_EFFECT"*/, v21);
    byte_4A01D18 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    baseCollectionLimitCnt);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resSvtNameData, (int32_t)servantChange, v22, v23);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v24, v25);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v26, v27);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.limitUpPlayVoiceLabel,
    (int32_t)playVoiceLabel,
    v28,
    v29);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.limitUpRewardGiftDataList,
    (int32_t)rewardGiftDataList,
    v30,
    v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_13;
  v35 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v34 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v35;
  *(_QWORD *)&v42.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v42, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v38 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v43.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v39 = (ServantLimitImageMaster_o *)MasterData_object;
  *(_QWORD *)&v43.fields.currentCryptoKey = v38;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v43, 0LL);
  if ( !v39
    || (gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v39,
                                                   (int32_t)gameObject,
                                                   v36 + 1,
                                                   0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = (unsigned __int8)gameObject & 1,
        !fsm) )
  {
LABEL_13:
    sub_1B64ACC(gameObject, v33);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12191/*"START_LIMITUP_EFFECT"*/, 0LL);
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
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 Int_69093624; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  __int64 v24; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x21
  __int64 v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x0
  const MethodInfo *v35; // x1
  UserServantEntity_o *v36; // x20
  CombineRootComponent_c *v37; // x0
  Il2CppObject *Object_object__48356600; // x20
  UnityEngine_GameObject_o *v39; // x20
  UnityEngine_Transform_o *v40; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4A01D1C & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, usrSvtData);
    sub_1B64870(&CombineResultFormManager_TypeInfo, v7);
    sub_1B64870(&CombineRootComponent_TypeInfo, v8);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&string___TypeInfo, v12);
    sub_1B64870(&StringLiteral_12192/*"START_LVEXCEED_EFFECT"*/, v13);
    sub_1B64870(&StringLiteral_17215/*"bit_result_grail"*/, v14);
    sub_1B64870(&StringLiteral_11303/*"ResultEffect"*/, v15);
    byte_4A01D1C = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  Int_69093624 = sub_1B64918(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v24 = Int_69093624;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v41.fields.fakeValue = 0LL;
  Int_69093624 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v41, v23);
  if ( !v24 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v24 + 32) = Int_69093624;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 32), Int_69093624, v26, v27);
  v28 = System_String__Concat_61397104((System_String_array *)v24, 0LL);
  Int_69093624 = UnityEngine_PlayerPrefs__GetInt_69093624(v28, 0LL);
  if ( (_DWORD)Int_69093624 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_69093624 = sub_1B64918(string___TypeInfo, 1LL);
      if ( *p_baseUsrSvtData )
      {
        v30 = Int_69093624;
        v31 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v42.fields.currentCryptoKey = v31;
        *(_QWORD *)&v42.fields.fakeValue = 0LL;
        Int_69093624 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v42, v29);
        if ( v30 )
        {
          if ( *(_DWORD *)(v30 + 24) )
          {
            *(_QWORD *)(v30 + 32) = Int_69093624;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 32), Int_69093624, v32, v33);
            v34 = System_String__Concat_61397104((System_String_array *)v30, 0LL);
            UnityEngine_PlayerPrefs__SetInt(v34, 0, 0LL);
            v36 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v36, v35);
            goto LABEL_19;
          }
LABEL_34:
          sub_1B64AD4(Int_69093624, v22);
        }
      }
LABEL_33:
      sub_1B64ACC(Int_69093624, v22);
    }
  }
LABEL_19:
  v37 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v37 = CombineRootComponent_TypeInfo;
  }
  Int_69093624 = (__int64)v37->static_fields->effectAssetData;
  if ( !Int_69093624 )
    goto LABEL_33;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              (AssetData_o *)Int_69093624,
                              (System_String_o *)StringLiteral_17215/*"bit_result_grail"*/,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_69093624 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__48356600,
                            (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_69093624 )
    goto LABEL_33;
  v39 = (UnityEngine_GameObject_o *)Int_69093624;
  Int_69093624 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_69093624, 0LL);
  v40 = (UnityEngine_Transform_o *)Int_69093624;
  if ( !byte_49F9206 )
  {
    Int_69093624 = sub_1B64870(&UnityEngine_Vector3_TypeInfo, v22);
    byte_49F9206 = 1;
  }
  if ( !v40 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Int_69093624 = (__int64)this->fields.fsm;
  if ( !Int_69093624 )
    goto LABEL_33;
  Int_69093624 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_69093624, 0LL);
  if ( !Int_69093624 )
    goto LABEL_33;
  Int_69093624 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_69093624,
                            (System_String_o *)StringLiteral_11303/*"ResultEffect"*/,
                            0LL);
  if ( !Int_69093624 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_69093624, v39, 0LL);
  Int_69093624 = (__int64)this->fields.fsm;
  if ( !Int_69093624 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_69093624, (System_String_o *)StringLiteral_12192/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  CombineRootComponent_c *v17; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_4A01D1D & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, usrSvtData);
    sub_1B64870(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__102_0__, v7);
    sub_1B64870(&CombineRootComponent_TypeInfo, v8);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4A01D1D = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v16);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v17 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v17 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v17->static_fields->EXCEED_ASSET_PATH;
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__102_0__,
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
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
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
  int32_t v45; // w3
  int32_t v46; // w1
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v48; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v49; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v51; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v52; // 0:x0.8
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01D19 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, before);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B64870(&StringLiteral_11275/*"ResNameNodeName"*/, v13);
    sub_1B64870(&StringLiteral_12193/*"START_NAME_REVEAL_EFFECT"*/, v14);
    sub_1B64870(&StringLiteral_9315/*"NameRevealCrossFade"*/, v15);
    sub_1B64870(&StringLiteral_4901/*"CrtNameNodeName"*/, v16);
    sub_1B64870(&StringLiteral_17220/*"bit_result_name_reveal"*/, v17);
    sub_1B64870(&StringLiteral_12887/*"StartAnimationName"*/, v18);
    sub_1B64870(&StringLiteral_1/*""*/, v19);
    sub_1B64870(&StringLiteral_9316/*"NameRevealParticleNodeName"*/, v20);
    byte_4A01D19 = 1;
  }
  v49 = 0LL;
  m_ParticleSystem = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (int32_t)after,
    (int32_t)callback);
  this->fields.resSvtNameData = after;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resSvtNameData, (int32_t)after, v22, v23);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12193/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4901/*"CrtNameNodeName"*/,
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
                         (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11275/*"ResNameNodeName"*/,
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
                         (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_9316/*"NameRevealParticleNodeName"*/,
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
                         (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
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
                               (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_1B64ACC(gameObject, v27);
  }
  v46 = StringLiteral_17220/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17220/*"bit_result_name_reveal"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(gameObject + 56), v46, v44, v45);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9315/*"NameRevealCrossFade"*/,
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
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
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
  int32_t v40; // w3
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

  if ( (byte_4A01D13 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, *(_QWORD *)&kind);
    sub_1B64870(&DataManager_TypeInfo, v17);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_int___, v18);
    sub_1B64870(&LocalizationManager_TypeInfo, v19);
    sub_1B64870(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v20);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v22);
    sub_1B64870(&StringLiteral_12194/*"START_NOBLEUP_EFFECT"*/, v23);
    sub_1B64870(&StringLiteral_13369/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v24);
    sub_1B64870(&StringLiteral_13370/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v25);
    byte_4A01D13 = 1;
  }
  v74 = 0LL;
  tdInfo = 0LL;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    targetId);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v26, v27);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v28, v29);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v32 = Master_object;
  v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v34;
  *(_QWORD *)&v76.fields.fakeValue = v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v76, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                        usrSvtData->fields.limitCount,
                                                        0LL);
  if ( !v32 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v32, v35, (int32_t)Master_object, 0, 0LL);
  v37 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1B64ABC(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v37, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v37;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.npInfoAddManager, (int32_t)v37, v39, v40);
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
      v41 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v43 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v44 = (ServantTreasureDeviceAddMaster_o *)v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v77.fields.currentCryptoKey = v43;
      *(_QWORD *)&v77.fields.fakeValue = v42;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v77, 0LL);
      v46 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v78.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v47 = v45;
      *(_QWORD *)&v78.fields.currentCryptoKey = v46;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v78, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB134 )
      {
        sub_1B64870(&TerminalPramsManager_TypeInfo, v31);
        byte_49FB134 = 1;
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
                                       Master_object[2].fields._MasterName_k__BackingField->fields._stringLength,
                                       0LL);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
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
                                                                  (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
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
                                                            (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
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
            sub_1B64AD4(Master_object, v31);
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
                                                                (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
          v71 = v68 - 7;
          ++v68;
          if ( v71 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1B64ACC(Master_object, v31);
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
          if ( !byte_49FB134 )
          {
            sub_1B64870(&TerminalPramsManager_TypeInfo, v31);
            byte_49FB134 = 1;
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
                                                        (System_String_o *)StringLiteral_13369/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0LL);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13370/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0LL);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12194/*"START_NOBLEUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetPowerUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  if ( (byte_4A01D1B & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12197/*"START_POWERUP_EFFECT"*/, usrSvtData);
    byte_4A01D1B = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64ACC(gameObject, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12197/*"START_POWERUP_EFFECT"*/, 0LL);
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

  if ( (byte_4A01D2D & 1) == 0 )
  {
    sub_1B64870(&ImageLimitCount_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A01D2D = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B64ACC(Instance, v6);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  int32_t v23; // w3
  struct UserServantEntity_o *v24; // x8
  __int64 v25; // x21
  __int64 v26; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
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
  ServantStatusBattleListViewItem_o *p_resUsrSvtData; // x19
  int32_t v46; // w2
  int32_t v47; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
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
  if ( (byte_4A01D2C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    this = (CombineResultEffectComponent_o *)sub_1B64870(&UserServantEntity_TypeInfo, v10);
    byte_4A01D2C = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v54, 0LL) < 1 )
    {
      v43 = v2->fields.baseUsrSvtData;
      v44 = (UserServantEntity_o *)sub_1B64ABC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_39863300(v44, v43, 0LL);
      v2->fields.resUsrSvtData = v44;
      p_resUsrSvtData = (ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData;
      sub_1B64814(p_resUsrSvtData, (int32_t)v44, v46, v47);
      if ( (p_resUsrSvtData[-1].fields.dispLimitCount.fields.fakeValue | 0x10) != 26 )
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
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v59, 0LL);
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&klass->_1.generic_class = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                                         v51 + 1,
                                                                                         0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(
                                                     &v53,
                                                     0LL);
          if ( v15 )
          {
            v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v15,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_30D6380 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(
                                                         &v52,
                                                         0LL);
              if ( !v19 )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v19,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_30D6380 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v20 = v2->fields.baseUsrSvtData;
                v21 = (UserServantEntity_o *)sub_1B64ABC(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_39863300(v21, v20, 0LL);
                v2->fields.resUsrSvtData = v21;
                sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData, (int32_t)v21, v22, v23);
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
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                         v57,
                                                         0LL);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v28 = (UserServantEntity_o *)sub_1B64ABC(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_39863300(v28, resUsrSvtData, 0LL);
                v2->fields.resUsrSvtData = v28;
                sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData, (int32_t)v28, v29, v30);
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
                  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v58, 0LL);
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
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v16 )
                        {
                          v39 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                     (*v16)[5],
                                                                     0LL);
                          if ( *v16 )
                          {
                            v40 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
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
    sub_1B64ACC(this, method);
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
  int32_t v29; // w2
  int32_t v30; // w3
  void *Instance; // x0
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_T__o *v33; // x26
  System_Collections_Generic_List_object__o *v34; // x23
  int32_t v35; // w27
  Il2CppObject *v36; // x28
  __int64 methodPtr_low; // x10
  int v38; // w8
  int v39; // w8
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Comparison_T__o *v46; // x24
  Il2CppObject *v47; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  int v51; // w20
  BalanceConfig_c *v52; // x0
  TerminalSceneComponent_c *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w1
  int32_t v59; // w24
  const MethodInfo *v60; // x2
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-78h]
  struct CombineResultEffectComponent_MessageDelegate_o *v62; // [xsp+18h] [xbp-68h]

  if ( (byte_4A01D21 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v11);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12);
    sub_1B64870(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v19);
    sub_1B64870(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v20);
    sub_1B64870(&ServantTreasureDvcEntity_TypeInfo, v21);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v23);
    sub_1B64870(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__106_0__, v24);
    sub_1B64870(&CombineResultEffectComponent___c_TypeInfo, v25);
    sub_1B64870(&StringLiteral_12198/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v26);
    sub_1B64870(&StringLiteral_17230/*"bit_result_ultimate_anim"*/, v27);
    sub_1B64870(&StringLiteral_12887/*"StartAnimationName"*/, v28);
    byte_4A01D21 = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    phase,
    (int32_t)msgCallBack);
  this->fields.messageCallback = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, 0, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v62 = msgCallBack;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_59;
  v33 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 4);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v33 )
    goto LABEL_59;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v33,
         (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v33,
                   v35,
                   (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v36 = (Il2CppObject *)Instance;
      methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      v38 = *((_DWORD *)Instance + 9);
      if ( v38 >= 1 && v38 == questId )
      {
        v39 = *((_DWORD *)Instance + 10);
        if ( v39 < 1 || v39 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v34 )
              break;
            items = v34->fields._items;
            v43 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v34->fields._version;
            if ( !items )
              break;
            size = v34->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v36,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = &items->obj.klass + size;
              v34->fields._size = size + 1;
              v45[4] = (Il2CppClass *)v36;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v36, v40, v41);
            }
          }
        }
      }
      if ( ++v35 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v33,
                      (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_22;
    }
LABEL_59:
    sub_1B64ACC(Instance, v32);
  }
LABEL_22:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v46 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v46 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v47 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v46 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      v46,
      v47,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__106_0__,
      0LL);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v46;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)v46, v49, v50);
  }
  if ( !v34 )
    goto LABEL_59;
  System_Collections_Generic_List_object___Sort_55252244(
    v34,
    v46,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v51 = v34->fields._size;
  if ( v51 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v34,
                 0,
                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_59;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v52 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v52 = BalanceConfig_TypeInfo;
  }
  if ( !v52->static_fields->CloseSecretTreasureDeviceQuestClear && v34->fields._size >= 1 )
  {
    v59 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v34,
                   v59,
                   (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_59;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v60) )
        break;
      if ( ++v59 >= v34->fields._size )
        goto LABEL_35;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v34,
                 v59,
                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_59;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_35:
  if ( v51 < 1 )
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
    if ( !byte_49F97AD )
    {
      sub_1B64870(&TerminalSceneComponent_TypeInfo, v32);
      byte_49F97AD = 1;
    }
    v53 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v53 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v53->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_59;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
    this->fields.messageCallback = v62;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, (int32_t)v62, v54, v55);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_59;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_59;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                 0LL);
    if ( !Instance )
      goto LABEL_59;
    v58 = StringLiteral_17230/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17230/*"bit_result_ultimate_anim"*/;
    sub_1B64814((ServantStatusBattleListViewItem_o *)((char *)Instance + 56), v58, v56, v57);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_59;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12198/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  int32_t v16; // w3
  int32_t v17; // w1

  if ( (byte_4A01D22 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64870(&StringLiteral_12198/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v7);
    sub_1B64870(&StringLiteral_17230/*"bit_result_ultimate_anim"*/, v8);
    sub_1B64870(&StringLiteral_12887/*"StartAnimationName"*/, v9);
    byte_4A01D22 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
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
                          (System_String_o *)StringLiteral_12887/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v17 = StringLiteral_17230/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17230/*"bit_result_ultimate_anim"*/,
          sub_1B64814((ServantStatusBattleListViewItem_o *)(fsm + 56), v17, v15, v16),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_1B64ACC(fsm, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12198/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_4A01D12 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&StringLiteral_12200/*"START_SKILLUP_EFFECT"*/, v17);
    sub_1B64870(&StringLiteral_12093/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v18);
    sub_1B64870(&StringLiteral_12094/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v19);
    byte_4A01D12 = 1;
  }
  this->fields.baseUsrSvtData = usrSvtData;
  this->fields.kind = kind;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    targetId);
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v20, v21);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12093/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_1B64ACC(gameObject, v23);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12200/*"START_SKILLUP_EFFECT"*/, 0LL);
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

  if ( (byte_4A01D48 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_1B64870(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    byte_4A01D48 = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_2E57F90 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_40651432(Item, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_1B64ACC(Item, v15);
  }
  v16 = this->fields.playVoiceList;
  if ( !v16 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
LABEL_23:
    sub_1B64AD4(Item, v15);
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
                                         (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_40651432(Item, v23, v24, 0LL, fadeTime, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1

  if ( (byte_4A01D15 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12202/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_4A01D15 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (int32_t)baseData);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.combineVoiceId, 0, v15, v16);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64ACC(gameObject, v20);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12202/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_44571348(
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A01D16 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12202/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_4A01D16 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (int32_t)baseData);
  this->fields.resUsrSvtData = resData;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v19, v20);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_7;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.combineVoiceId, (int32_t)voiceId, v23, v24);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v25, v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_1B64ACC(gameObject, v22);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12202/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1

  if ( (byte_4A01D17 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12202/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_4A01D17 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, infoIdx, normalExp);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64ACC(gameObject, v22);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12202/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4A01D4E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__153_0__, v3);
    byte_4A01D4E = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v6 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__153_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_1B64ACC(bgCollider, method);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v6, 0, v7);
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
  const MethodInfo *v14; // x6
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A01D4C & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1B64870(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__151_0__, v5);
    byte_4A01D4C = 1;
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
    sub_1B64AD4(bgCollider, *(_QWORD *)&index);
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
  v13 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__151_0__, 0LL);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1B64ACC(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    index,
    titleText,
    kind == 8,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowSkillChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *bgCollider; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  _DWORD *v9; // x22
  int32_t v10; // w23
  int32_t v11; // w24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v13; // w21
  int32_t v14; // w22
  System_String_o *costumeName; // x25
  System_Action_o *v16; // x26
  const MethodInfo *v17; // x7

  if ( (byte_4A01D4D & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1B64870(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__152_0__, v5);
    byte_4A01D4D = 1;
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
                 v7);
  if ( !this->fields.costumeSkillInfoManager )
    goto LABEL_10;
  v9 = bgCollider;
  bgCollider = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
                 this->fields.costumeSkillInfoManager,
                 index,
                 v8);
  if ( !v9 )
    goto LABEL_10;
  if ( !bgCollider )
    goto LABEL_10;
  v10 = *((_DWORD *)bgCollider + 4);
  v11 = *((_DWORD *)bgCollider + 5);
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v13 = v9[4];
  v14 = v9[5];
  costumeName = this->fields.costumeName;
  v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__152_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1B64ACC(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v13,
    v14,
    v10,
    v11,
    costumeName,
    v16,
    v17);
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
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A01D4B & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__150_0__, v3);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4A01D4B = 1;
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
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v13, 0LL);
  v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1B64ACC(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v10, v11, v12);
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
  const MethodInfo *v19; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v22; // [xsp+40h] [xbp-50h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4A01D4F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__155_0__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A01D4F = 1;
  }
  v22 = 0LL;
  tdInfo = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v20, 0LL);
  if ( !v11 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v11,
             bgCollider,
             (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_14;
  bgCollider = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v22, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v22
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v16 = v22->fields.id,
        v17 = v22->fields.lv,
        v18 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__155_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1B64ACC(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v16, v17, v18, v19);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__171_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4A01D69 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_1__, v3);
    byte_4A01D69 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v5 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_1B64ACC(v6, v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 1, v8);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__146_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A01D67 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B64870(&StringLiteral_5450/*"END_LOAD"*/, v3);
    byte_4A01D67 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_1B64ACC(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5450/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__156_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4A01D68 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent__EndPlay_b__156_2__, v3);
    byte_4A01D68 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v5 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__156_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_1B64ACC(v6, v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 1, v8);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__165_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B64ACC(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___InitCombineEffect_b__112_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A01D64 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5450/*"END_LOAD"*/, method);
    byte_4A01D64 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5450/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___SetAppendSkillCombineInfo_b__108_0(
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
  Il2CppObject *Object_object__48356600; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4A01D62 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, data);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&StringLiteral_12192/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_1B64870(&StringLiteral_17211/*"bit_result_extraskill"*/, v9);
    sub_1B64870(&StringLiteral_11303/*"ResultEffect"*/, v10);
    byte_4A01D62 = 1;
  }
  if ( data )
  {
    Object_object__48356600 = AssetData__GetObject_object__48356600(
                                data,
                                (System_String_o *)StringLiteral_17211/*"bit_result_extraskill"*/,
                                (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48356600,
                                              (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F9206 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v13);
      byte_49F9206 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11303/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B64ACC(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12192/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetCombineLimit_b__111_0(
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
  int32_t v17; // w3
  System_String_o *v18; // x0
  Il2CppObject *Object_object__48356600; // x20
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_Transform_o *v21; // x21

  if ( (byte_4A01D63 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, data);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&string___TypeInfo, v8);
    sub_1B64870(&StringLiteral_11303/*"ResultEffect"*/, v9);
    sub_1B64870(&StringLiteral_12180/*"START_COMBINE_LIMIT"*/, v10);
    sub_1B64870(&StringLiteral_17205/*"bit_result_"*/, v11);
    byte_4A01D63 = 1;
  }
  if ( data )
  {
    v12 = sub_1B64918(string___TypeInfo, 1LL);
    v13 = System_Int32__ToString((int)this + 328, 0LL);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_61383576(
                                              (System_String_o *)StringLiteral_17205/*"bit_result_"*/,
                                              v13,
                                              0LL);
    if ( !v12 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v12 + 24) )
      sub_1B64AD4(transform, v15);
    *(_QWORD *)(v12 + 32) = transform;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)transform, v16, v17);
    v18 = System_String__Concat_61397104((System_String_array *)v12, 0LL);
    Object_object__48356600 = AssetData__GetObject_object__48356600(
                                data,
                                v18,
                                (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48356600,
                                              (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v20 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v21 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F9206 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v15);
      byte_49F9206 = 1;
    }
    if ( !v21 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11303/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v20, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_19:
      sub_1B64ACC(transform, v15);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12180/*"START_COMBINE_LIMIT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__104_0(
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
  Il2CppObject *Object_object__48356600; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4A01D61 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, data);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&StringLiteral_17214/*"bit_result_friendship_exceed"*/, v8);
    sub_1B64870(&StringLiteral_11303/*"ResultEffect"*/, v9);
    sub_1B64870(&StringLiteral_12188/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v10);
    byte_4A01D61 = 1;
  }
  if ( data )
  {
    Object_object__48356600 = AssetData__GetObject_object__48356600(
                                data,
                                (System_String_o *)StringLiteral_17214/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48356600,
                                              (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F9206 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v13);
      byte_49F9206 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11303/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B64ACC(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12188/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__102_0(
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
  Il2CppObject *Object_object__48356600; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4A01D60 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, data);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&StringLiteral_12192/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_1B64870(&StringLiteral_17219/*"bit_result_limitbreak"*/, v9);
    sub_1B64870(&StringLiteral_11303/*"ResultEffect"*/, v10);
    byte_4A01D60 = 1;
  }
  if ( data )
  {
    Object_object__48356600 = AssetData__GetObject_object__48356600(
                                data,
                                (System_String_o *)StringLiteral_17219/*"bit_result_limitbreak"*/,
                                (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48356600,
                                              (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F9206 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v13);
      byte_49F9206 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11303/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v14, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B64ACC(transform, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12192/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64ACC(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64ACC(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__152_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64ACC(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64ACC(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__155_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64ACC(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__114_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A01D65 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_5450/*"END_LOAD"*/, method);
    byte_4A01D65 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64ACC(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5450/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__145_0(
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
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v19; // x22
  __int64 v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  UserServantEntity_o *v23; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  CommonUI_o *v29; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v32; // x25
  const MethodInfo *v33; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *v34; // x8

  if ( (byte_4A01D66 & 1) == 0 )
  {
    sub_1B64870(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_1B64870(&NetworkManager_TypeInfo, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B64870(&Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__6__, v8);
    sub_1B64870(&CombineResultEffectComponent___c__DisplayClass145_2_TypeInfo, v9);
    sub_1B64870(&UserServantEntity_TypeInfo, v10);
    byte_4A01D66 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69136104(effect, 0LL);
  this->fields.effect = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.effect, 0, v12, v13);
  CombineResultEffectComponent__Close(this, v14);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    v19 = EntityDefinitely;
    v20 = sub_1B64ABC(CombineResultEffectComponent___c__DisplayClass145_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 24) = this;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)this, v21, v22);
      v23 = (UserServantEntity_o *)sub_1B64ABC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_39863532(v23, v19, 0LL);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v20 + 16) = callbackFunc;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)callbackFunc, v25, v26);
      this->fields.callbackFunc = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v27, v28);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v23 )
      {
        v29 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v23->fields.treasureDeviceLv1;
        v32 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64ABC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v32,
          (Il2CppObject *)v20,
          Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__6__,
          v33);
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
LABEL_17:
    sub_1B64ACC(Instance, v16);
  }
  v34 = this->fields.callbackFunc;
  if ( v34 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v34->fields.m_target)(
      v34->fields.original_method_info,
      1LL,
      *(_QWORD *)&v34->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__145_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B64ACC(this, method);
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

  if ( (byte_4A01D24 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, *(_QWORD *)&svtId);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A01D24 = 1;
  }
  svtFlagEntity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_39349252(
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B64ACC(Instance, v8);
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
    sub_1B64AD4(Instance, v8);
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
  const MethodInfo *v16; // x1
  int32_t v17; // w0
  int32_t v18; // w9
  int32_t v19; // w8
  int32_t v20; // w21
  System_Int32_array *v21; // x20
  int32_t TransformedSameSlotSkillId; // w0
  int32_t v23; // w8
  int32_t v24; // w22
  UserServantEntity_o *baseUsrSvtData; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Action_o *v29; // x24
  int32_t TransformCount; // w0
  int32_t displayCount; // w9
  int32_t v32; // w8
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // [xsp+20h] [xbp-60h]
  TransformServantInfo_o *v38; // [xsp+30h] [xbp-50h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A01D54 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent_EndDisp__, v3);
    sub_1B64870(&Method_CombineResultEffectComponent_clickNext__, v4);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v5);
    byte_4A01D54 = 1;
  }
  v38 = 0LL;
  transformInfo = 0LL;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_64;
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
                method);
        goto LABEL_17;
      }
      goto LABEL_64;
    }
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      if ( this->fields.treasureDeviceEnabled )
      {
        CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, method);
        this->fields.treasureDeviceEnabled = 0;
LABEL_31:
        CombineResultEffectComponent__EndDisp(this, v11);
        return;
      }
      goto LABEL_58;
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
        goto LABEL_31;
      }
      goto LABEL_64;
    }
    kind = this->fields.kind;
  }
  if ( (unsigned int)kind > 0x1A || ((1 << kind) & 0x4080402) == 0 )
  {
LABEL_24:
    if ( kind > 6 )
    {
      if ( kind == 20 )
      {
        if ( this->fields.displayCount >= 1 )
        {
          bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
          if ( bgCollider )
          {
            TransformCount = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0LL);
            displayCount = this->fields.displayCount;
            v32 = TransformCount;
            bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
            this->fields.displayCount = displayCount - 1;
            if ( bgCollider )
            {
              bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                       (UserServantEntity_o *)bgCollider,
                                                       &v38,
                                                       v32 - displayCount,
                                                       0LL);
              if ( v38 )
              {
                bgCollider = (UnityEngine_Collider_o *)this->fields.commandCardExceedResultWindow;
                if ( bgCollider )
                {
                  CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
                    (CommandCardExceedResultWindowComponent_o *)bgCollider,
                    this->fields.baseUsrSvtData,
                    this->fields.commandCardIndex,
                    this->fields.commandCardExceedCount,
                    v38->fields.svtId,
                    v38->fields.titleText,
                    0LL);
                  return;
                }
              }
            }
          }
          goto LABEL_64;
        }
        goto LABEL_58;
      }
      if ( kind != 7 )
      {
LABEL_58:
        v33 = Method_CombineResultEffectComponent_clickNext__;
        if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
          v33 = (_QWORD *)sub_1B64888(Method_CombineResultEffectComponent_clickNext__);
        v34 = (System_Reflection_MethodBase_o *)sub_1B64854(v33, v33[4]);
        OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
        if ( this->fields.kind != 24 )
          CombineResultEffectComponent__ReleaseVoiceData(this, v35);
        if ( !CombineResultEffectComponent__OpenNotification(this, v35) )
          CombineResultEffectComponent__FadeoutProcess(this, v36);
        return;
      }
    }
    else if ( (unsigned int)(kind - 2) >= 2 )
    {
      if ( !kind )
        CombineResultEffectComponent__stopVoice(this, method);
      goto LABEL_58;
    }
    if ( this->fields.displayCount >= 1 )
    {
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( !bgCollider )
        goto LABEL_64;
      v17 = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0LL);
      v18 = this->fields.displayCount;
      v19 = v17;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v18 - 1;
      if ( !bgCollider )
        goto LABEL_64;
      v20 = v19 - v18;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               (UserServantEntity_o *)bgCollider,
                                               v19 - v18,
                                               -1,
                                               -1,
                                               1,
                                               -1,
                                               0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_64;
      v21 = (System_Int32_array *)bgCollider;
      TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                     this->fields.baseUsrSvtData,
                                     this->fields.targetId,
                                     v20 - 1,
                                     v20,
                                     0LL);
      v23 = this->fields.kind;
      this->fields.targetId = TransformedSameSlotSkillId;
      if ( v23 == 7 )
      {
        v24 = TransformedSameSlotSkillId;
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FB134 )
        {
          sub_1B64870(&TerminalPramsManager_TypeInfo, method);
          byte_49FB134 = 1;
        }
        bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          bgCollider = (UnityEngine_Collider_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !baseUsrSvtData )
          goto LABEL_64;
        this->fields.targetIdOld = UserServantEntity__GetTransformedOldSkillId(
                                     baseUsrSvtData,
                                     v24,
                                     *(_DWORD *)(*(_QWORD *)&bgCollider[7].fields.m_CachedPtr + 16LL),
                                     v20,
                                     0LL);
      }
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( bgCollider )
      {
        UserServantEntity__GetTransformedServantInfo((UserServantEntity_o *)bgCollider, &transformInfo, v20, 0LL);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v29 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(v29, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( transformInfo )
        {
          if ( skillResultInfoWindow )
          {
            SkillUpResultWindowComponent__OpenSkillUpResultInfo(
              skillResultInfoWindow,
              targetId,
              targetLv,
              v29,
              this->fields.targetIdOld,
              this->fields.targetLvOld,
              transformInfo->fields.svtId,
              v21,
              this->fields.kind == 3,
              1,
              0,
              transformInfo->fields.titleText,
              v37);
            return;
          }
        }
      }
LABEL_64:
      sub_1B64ACC(bgCollider, method);
    }
    goto LABEL_58;
  }
  if ( CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(this, method) )
  {
    kind = this->fields.kind;
    goto LABEL_24;
  }
  v13 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B64888(Method_CombineResultEffectComponent_clickNext__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B64854(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v15);
  if ( CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(this, v16) )
    goto LABEL_31;
}


void __fastcall CombineResultEffectComponent__endloadEffect(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4A01D29 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, data);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v6);
    sub_1B64870(&Method_CombineResultEffectComponent__endloadEffect_b__114_0__, v7);
    sub_1B64870(&CombineResultEffectComponent_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4A01D29 = 1;
  }
  if ( data )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__114_0__, 0LL);
    if ( !v12 )
      sub_1B64ACC(v15, v16);
    CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, v14, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
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
  int32_t v20; // w3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A01D31 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantVoiceMaster___, method);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A01D31 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.asstName, 0, v2, v3);
  this->fields.playVoiceList = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v7, v8);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v13;
  *(_QWORD *)&v25.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v25, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v14, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v16 = this->fields.resUsrSvtData) == 0LL)
    || (v17 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                     v16->fields.limitCount,
                                     0LL),
        !v17) )
  {
LABEL_12:
    sub_1B64ACC(Instance, v10);
  }
  Entity = ServantVoiceMaster__getEntity(v17, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v19, v20);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v23, v24);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_4A01D45 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    byte_4A01D45 = 1;
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
                                       (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48356600; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4A01D2A & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, parentTr);
    sub_1B64870(&CombineResultEffectComponent_TypeInfo, v5);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    byte_4A01D2A = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48356600,
                                     (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F9201 )
  {
    effectAssetData = (AssetData_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_49F9201 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F9206 )
  {
    effectAssetData = (AssetData_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_49F9206 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1B64ACC(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  ServantVoiceEntity_o *svtVoiceEntity; // x21
  System_Collections_Generic_List_object__o *CntStopVoiceList; // x0
  ServantVoiceEntity_o *v10; // x0
  struct UserServantEntity_o *v11; // x8
  __int64 v12; // x20
  __int64 v13; // x22
  int32_t v14; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A01D44 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4A01D44 = 1;
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
      sub_1B64ACC(resUsrSvtData, isPlayVoice);
    v13 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v13;
    *(_QWORD *)&v16.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v16, 0LL);
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
                                       (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  char v14; // w3
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
  char v29; // w3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v32; // w2
  char v33; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v6 = costumeId;
  SvtVoiceId = voiceId;
  if ( (byte_4A01D30 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&voiceId);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_1B64870(&DataManager_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A01D30 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.asstName, 0, costumeId, isLimitUp);
  this->fields.playVoiceList = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v13, v14);
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
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v34, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v20, 0LL);
  }
  if ( v6 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_40703828(Master_object->fields.limitCount, 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0LL);
    v6 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v35, 0LL);
  if ( !v23
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v23,
                                       (int32_t)Master_object,
                                       v6,
                                       0LL),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_26:
    sub_1B64ACC(Master_object, v16);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v28, v29);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v32, v33);
  }
}


void __fastcall CombineResultEffectComponent__loadBoxGachaEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4A01D28 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent_endloadEffect__, v3);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B64870(&StringLiteral_5809/*"Effect/Combine"*/, v5);
    byte_4A01D28 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5809/*"Effect/Combine"*/, v6, 1, 0LL);
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

  if ( (byte_4A01D32 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent_EndLoad__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_4A01D32 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v7 = (SoundManager_o *)Instance;
    v8 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v7 )
      sub_1B64ACC(v9, v10);
    SoundManager__LoadAudioAssetStorage(v7, asstName, v8, 1, 0LL);
  }
  else
  {
    CombineResultEffectComponent__EndLoad(this, method);
  }
}


void __fastcall CombineResultEffectComponent__playVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v30; // w3

  v4 = this;
  if ( (byte_4A01D49 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_CombineResultEffectComponent_EndPlay__, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v6);
    this = (CombineResultEffectComponent_o *)sub_1B64870(&SoundManager_TypeInfo, v7);
    byte_4A01D49 = 1;
  }
  if ( v4->fields.asstName && v4->fields.maxPlayCnt )
  {
    playVoiceList = v4->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_23;
    playCnt = v4->fields.playCnt;
    max_length = playVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v11 = playVoiceList->m_Items[playCnt];
      if ( !v11 )
        goto LABEL_23;
      id = v11->fields.id;
      v4->fields.vcName = id;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
      v13 = v4->fields.playVoiceList;
      if ( !v13 )
        goto LABEL_23;
      v14 = v4->fields.playCnt;
      if ( (unsigned int)v14 < v13->max_length )
      {
        this = (CombineResultEffectComponent_o *)v13->m_Items[v14];
        if ( this )
        {
          m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
          friendshipExceedResultWindow = (int32_t)this->fields.friendshipExceedResultWindow;
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
          currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.currentFigureCollectList;
          if ( currentFigureCollectList )
          {
            v19 = FadeTime;
            if ( System_Linq_Enumerable__Any_object_(
                   currentFigureCollectList,
                   (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                     (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                     (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
          v27 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(v27, (Il2CppObject *)v4, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v28 = SoundManager__playVoice_38391544(asstName, vcName, volume, v27, 0LL);
          v4->fields.player = v28;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.player, (int32_t)v28, v29, v30);
          ++v4->fields.playCnt;
          return;
        }
LABEL_23:
        sub_1B64ACC(this, method);
      }
    }
    sub_1B64AD4(this, method);
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
  if ( (byte_4A01D36 & 1) == 0 )
  {
    sub_1B64870(&ImageLimitCount_TypeInfo, method);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B64870(&StringLiteral_3161/*"BaseSvtNodeName"*/, v4);
    byte_4A01D36 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B64ACC(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3161/*"BaseSvtNodeName"*/,
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

  if ( (byte_4A01D40 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_1B64870(&ImageLimitCount_TypeInfo, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B64870(&StringLiteral_4362/*"CardScale"*/, v8);
    sub_1B64870(&StringLiteral_3160/*"BaseSvtCardNodeName"*/, v9);
    byte_4A01D40 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3160/*"BaseSvtCardNodeName"*/,
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
                   (System_String_o *)StringLiteral_4362/*"CardScale"*/,
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
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v27, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v20->fields.limitCount, 0LL);
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
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_37595984(
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
  if ( !byte_49F9201 )
  {
    fsm = sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_49F9201 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v25, 0LL)) == 0) )
  {
LABEL_25:
    sub_1B64ACC(fsm, *(_QWORD *)&changeNameType);
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
  ServantVoiceData_array *CostumeSvtVoiceList; // x0
  __int64 v5; // x1
  ServantVoiceData_o *v6; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v13; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A01D3E & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B64870(&StringLiteral_8369/*"LimitUpResSvtNodeName"*/, v3);
    byte_4A01D3E = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
      sub_1B64AD4(CostumeSvtVoiceList, v5);
    v6 = CostumeSvtVoiceList->m_Items[0];
    if ( !v6 )
LABEL_13:
      sub_1B64ACC(CostumeSvtVoiceList, v5);
    face = v6->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  CostumeSvtVoiceList = (ServantVoiceData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                    v14,
                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_13;
  v11 = (int)CostumeSvtVoiceList;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v11,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8369/*"LimitUpResSvtNodeName"*/,
    v13);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1B64ACC(0LL, method);
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
  if ( (byte_4A01D39 & 1) == 0 )
  {
    sub_1B64870(&ImageLimitCount_TypeInfo, method);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B64870(&StringLiteral_8368/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_4A01D39 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B64ACC(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8368/*"LimitUpBaseSvtNodeName"*/,
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

  if ( (byte_4A01D3F & 1) == 0 )
  {
    sub_1B64870(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64870(&StringLiteral_8368/*"LimitUpBaseSvtNodeName"*/, v7);
    byte_4A01D3F = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1B64AD4(LimitUpSvtVoiceList, v9);
    v10 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v10 )
      sub_1B64ACC(LimitUpSvtVoiceList, v9);
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
    (System_String_o *)StringLiteral_8368/*"LimitUpBaseSvtNodeName"*/,
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
  int32_t v20; // w3
  UnityEngine_Transform_o *v21; // x19
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01D42 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_4362/*"CardScale"*/, *(_QWORD *)&svtId);
    sub_1B64870(&StringLiteral_3160/*"BaseSvtCardNodeName"*/, v9);
    byte_4A01D42 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3160/*"BaseSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_4362/*"CardScale"*/,
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.nameRevealCard, (int32_t)TexturePrefab, v19, v20);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v21 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_49F9201 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&svtId);
    byte_49F9201 = 1;
  }
  if ( !v21
    || (UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_18:
    sub_1B64ACC(fsm, *(_QWORD *)&svtId);
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

  if ( (byte_4A01D43 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_4362/*"CardScale"*/, *(_QWORD *)&changeNameType);
    sub_1B64870(&StringLiteral_11304/*"ResultSvtCardNodeName"*/, v5);
    byte_4A01D43 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11304/*"ResultSvtCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_4362/*"CardScale"*/,
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
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_37595984(
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
  if ( !byte_49F9201 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_49F9201 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_18:
    sub_1B64ACC(fsm, *(_QWORD *)&changeNameType);
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

  if ( (byte_4A01D41 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_1B64870(&ImageLimitCount_TypeInfo, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B64870(&StringLiteral_4362/*"CardScale"*/, v8);
    sub_1B64870(&StringLiteral_11304/*"ResultSvtCardNodeName"*/, v9);
    byte_4A01D41 = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11304/*"ResultSvtCardNodeName"*/,
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
                   (System_String_o *)StringLiteral_4362/*"CardScale"*/,
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
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v27, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.resUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v20->fields.limitCount, 0LL);
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
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_37595984(
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
  if ( !byte_49F9201 )
  {
    fsm = sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&changeNameType);
    byte_49F9201 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v25, 0LL)) == 0) )
  {
LABEL_25:
    sub_1B64ACC(fsm, *(_QWORD *)&changeNameType);
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
  __int64 v46; // x20
  __int64 Instance; // x0
  const MethodInfo *v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  const MethodInfo *v51; // x2
  int32_t v52; // w3
  SkillUpResultWindowComponent_o *v53; // x20
  UserServantEntity_o *v54; // x21
  int32_t v55; // w22
  int32_t v56; // w23
  System_Action_o *v57; // x24
  const MethodInfo *v58; // x2
  struct UserServantEntity_o *v59; // x8
  __int64 v60; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x0
  const MethodInfo *v65; // x6
  const MethodInfo *v66; // x2
  struct UserServantEntity_o *v67; // x8
  __int64 v68; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v69; // x21
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x0
  const MethodInfo *v73; // x1
  UserServantEntity_o *v74; // x20
  const MethodInfo *v75; // x2
  int32_t v76; // w3
  struct ServantVoiceData_array **p_playVoiceList; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v83; // x20
  System_Action_o *v84; // x24
  int32_t targetIdOld; // w25
  int32_t targetLvOld; // w26
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x2
  int32_t v89; // w27
  int32_t v90; // w28
  __int64 v91; // x0
  __int64 v92; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v94; // x20
  __int64 v95; // x28
  int32_t v96; // w22
  struct UserServantEntity_o *v97; // x8
  __int64 v98; // x23
  __int64 v99; // x24
  int v100; // w8
  int v101; // w9
  __int64 v102; // x23
  struct UserServantEntity_o *v103; // x8
  __int64 v104; // x23
  __int64 v105; // x24
  int32_t v106; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  int32_t v110; // w22
  Il2CppObject *v111; // x23
  struct UserServantEntity_o *v112; // x8
  int64_t v113; // x24
  __int64 v114; // x25
  __int64 v115; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v117; // x23
  struct UserServantEntity_o *v118; // x8
  __int64 v119; // x23
  __int64 v120; // x24
  _BOOL8 v121; // x0
  __int64 v122; // x1
  Il2CppObject *current; // x21
  int64_t UserId; // x0
  __int64 v125; // x1
  struct UserServantEntity_o *v126; // x8
  int64_t v127; // x23
  int32_t v128; // w24
  __int64 v129; // x25
  __int64 v130; // x26
  int32_t v131; // w3
  int v132; // w21
  struct ServantVoiceData_array *v133; // x8
  struct UserServantEntity_o *v134; // x8
  __int64 v135; // x20
  __int64 v136; // x21
  struct UserServantEntity_o *v137; // x8
  int v138; // w21
  int v139; // w20
  struct UserServantEntity_o *v140; // x8
  __int64 v141; // x22
  __int64 v142; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v143; // x21
  int32_t v144; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v146; // w8
  SkillUpResultWindowComponent_o *v147; // x20
  UserServantEntity_o *v148; // x21
  System_Action_o *v149; // x22
  const MethodInfo *v150; // x3
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  Il2CppObject *v155; // x20
  Il2CppObject *v156; // x21
  Il2CppObject *v157; // x20
  BalanceConfig_c *v158; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v160; // x21
  Il2CppObject *Name; // x0
  System_String_o *v162; // x0
  System_Int32_array *v163; // x20
  SkillUpResultWindowComponent_o *v164; // x21
  int32_t v165; // w22
  int32_t v166; // w23
  System_Action_o *v167; // x24
  struct UserServantEntity_o *v168; // x8
  int32_t v169; // w26
  int32_t v170; // w25
  __int64 v171; // x27
  __int64 v172; // x28
  SkillUpResultWindowComponent_o *v173; // x20
  UserServantEntity_o *v174; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v176; // x23
  const MethodInfo *v177; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v179; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v180; // x21
  Il2CppObject *v181; // x0
  int32_t v182; // w2
  int32_t v183; // w3
  struct UserServantEntity_o *v184; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t lv; // w21
  const MethodInfo *v187; // x1
  int32_t v188; // w2
  int32_t v189; // w3
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v191; // x3
  __int64 v192; // x22
  int32_t v193; // w2
  int32_t v194; // w3
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v196; // w2
  int32_t v197; // w3
  int32_t v198; // w2
  int32_t v199; // w3
  __int64 v200; // x23
  System_Action_o *v201; // x24
  int32_t v202; // w2
  int32_t v203; // w3
  Il2CppObject *v204; // x21
  CombineResultEffectComponent_ClickDelegate_o *v205; // x22
  const MethodInfo *v206; // x3
  int32_t v207; // w2
  int32_t v208; // w3
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v210; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v212; // x23
  System_Action_o *v213; // x24
  SvtCombineResultWindowComponent_o *v214; // x0
  UserServantEntity_o *v215; // x1
  int32_t v216; // w2
  System_Action_o *v217; // x3
  System_Action_o *v218; // x4
  struct UserServantEntity_o *v219; // x8
  __int128 v220; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v221; // x20
  Il2CppObject *v222; // x0
  int32_t v223; // w2
  int32_t v224; // w3
  struct SvtCombineResultWindowComponent_o *v225; // x20
  struct UserServantEntity_o *v226; // x21
  int32_t v227; // w22
  System_Action_o *v228; // x23
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v230; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  Il2CppObject *v233; // x20
  AvalonSceneManager_c *v234; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v236; // x0
  __int64 *v237; // x8
  bool v238; // w28
  const MethodInfo *v239; // x2
  const MethodInfo *v240; // x2
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v242; // x21
  const MethodInfo *v243; // x3
  System_String_o *v244; // x22
  Il2CppObject *v245; // x21
  Il2CppObject *v246; // x0
  AvalonSceneManager_c *v247; // x8
  System_Action_o *v248; // x21
  bool kind; // [xsp+0h] [xbp-120h]
  const MethodInfo *isRelease; // [xsp+8h] [xbp-118h]
  char isReleasea; // [xsp+8h] [xbp-118h]
  System_String_o *dispBattleName; // [xsp+18h] [xbp-108h]
  const MethodInfo *v253; // [xsp+20h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v254; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v255; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v256; // [xsp+70h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v257; // [xsp+90h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A8h] [xbp-78h] BYREF
  int32_t oldLv; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v260; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v261; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v262; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v265; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v266; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v267; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v268; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v269; // 0:x0.16

  if ( (byte_4A01D46 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v3);
    sub_1B64870(&BalanceConfig_TypeInfo, v4);
    sub_1B64870(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v5);
    sub_1B64870(&Method_CombineResultEffectComponent_EndDisp__, v6);
    sub_1B64870(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_0__, v7);
    sub_1B64870(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_1__, v8);
    sub_1B64870(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_5__, v9);
    sub_1B64870(&Method_CombineResultEffectComponent_clickNext__, v10);
    sub_1B64870(&CombineResultFormManager_TypeInfo, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantSkillMaster___, v14);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v17);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_int___, v20);
    sub_1B64870(&Method_System_Linq_Enumerable_Contains_int___, v21);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v22);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v23);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v24);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v26);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v27);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_1B64870(&LocalizationManager_TypeInfo, v30);
    sub_1B64870(&NetworkManager_TypeInfo, v31);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v34);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_1B64870(&string___TypeInfo, v37);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v38);
    sub_1B64870(&Method_CombineResultEffectComponent___c__DisplayClass145_0__setSkillResultInfo_b__3__, v39);
    sub_1B64870(&CombineResultEffectComponent___c__DisplayClass145_0_TypeInfo, v40);
    sub_1B64870(&Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__2__, v41);
    sub_1B64870(&CombineResultEffectComponent___c__DisplayClass145_1_TypeInfo, v42);
    sub_1B64870(&StringLiteral_10773/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v43);
    sub_1B64870(&StringLiteral_10774/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v44);
    sub_1B64870(&StringLiteral_1/*""*/, v45);
    byte_4A01D46 = 1;
  }
  oldLv = 0;
  entity = 0LL;
  memset(&v257, 0, sizeof(v257));
  v46 = sub_1B64ABC(CombineResultEffectComponent___c__DisplayClass145_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  if ( !v46 )
    goto LABEL_212;
  *(_QWORD *)(v46 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v46 + 24), (int32_t)this, v49, v50);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_155;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_212;
      v179 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v180 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v256.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v256.fields.fakeValue = v179;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v255 = v256;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v255, 0LL);
      if ( !v180 )
        goto LABEL_212;
      v181 = DataMasterBase_object__object__long___GetEntity(
               v180,
               Instance,
               (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v181;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)v181, v182, v183);
LABEL_155:
      v184 = this->fields.baseUsrSvtData;
      if ( !v184 )
        goto LABEL_212;
      oldLv = v184->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_212;
      lv = resUsrSvtData->fields.lv;
      if ( !System_Int32__Equals_62188676((int32_t)&oldLv, lv, 0LL) )
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
      *(_QWORD *)(v46 + 16) = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v46 + 16), 0, v188, v189);
      if ( !CombineResultEffectComponent__CheckCombineLimit(this, oldLv, lv, v191) )
        goto LABEL_166;
      v192 = sub_1B64ABC(CombineResultEffectComponent___c__DisplayClass145_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v192, 0LL);
      if ( !v192 )
        goto LABEL_212;
      *(_QWORD *)(v192 + 24) = v46;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v192 + 24), v46, v193, v194);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v192 + 16) = callbackFunc;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v192 + 16), (int32_t)callbackFunc, v196, v197);
      this->fields.callbackFunc = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v198, v199);
      v200 = *(_QWORD *)(v192 + 24);
      v201 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        v201,
        (Il2CppObject *)v192,
        Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__2__,
        0LL);
      if ( !v200 )
        goto LABEL_212;
      *(_QWORD *)(v200 + 16) = v201;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v200 + 16), (int32_t)v201, v202, v203);
      v204 = *(Il2CppObject **)(v192 + 24);
      v205 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64ABC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v205,
        v204,
        Method_CombineResultEffectComponent___c__DisplayClass145_0__setSkillResultInfo_b__3__,
        v206);
      this->fields.callbackFunc = v205;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)v205, v207, v208);
LABEL_166:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_186:
        CombineResultEffectComponent__EndDisp(this, v48);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v210 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v212 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v212, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v213 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v213, (Il2CppObject *)this, (intptr_t)Method_CombineResultEffectComponent_clickNext__, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_212;
      v214 = svtResultInfoWindow;
      v215 = v210;
      v216 = baseUsrSvtCollictionLv;
      v217 = v212;
      v218 = v213;
LABEL_176:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v214, v215, v216, v217, v218, 0LL);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1B64918(string___TypeInfo, 1LL);
      v59 = this->fields.baseUsrSvtData;
      if ( !v59 )
        goto LABEL_212;
      v60 = Instance;
      p_svtId = &v59->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v260.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v260.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v260, v58);
      if ( !v60 )
        goto LABEL_212;
      if ( !*(_DWORD *)(v60 + 24) )
        goto LABEL_213;
      *(_QWORD *)(v60 + 32) = Instance;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v60 + 32), Instance, v62, v63);
      v64 = System_String__Concat_61397104((System_String_array *)v60, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt_69093624(v64, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
        goto LABEL_22;
      Instance = sub_1B64918(string___TypeInfo, 1LL);
      v67 = this->fields.baseUsrSvtData;
      if ( !v67 )
        goto LABEL_212;
      v68 = Instance;
      v69 = &v67->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v261.fields.currentCryptoKey = v69;
      *(_QWORD *)&v261.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v261, v66);
      if ( !v68 )
        goto LABEL_212;
      if ( !*(_DWORD *)(v68 + 24) )
        goto LABEL_213;
      *(_QWORD *)(v68 + 32) = Instance;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v68 + 32), Instance, v70, v71);
      v72 = System_String__Concat_61397104((System_String_array *)v68, 0LL);
      UnityEngine_PlayerPrefs__SetInt(v72, 0, 0LL);
      v74 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      CombineResultFormManager__ResetVoiceList(v74, v73);
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
        v65);
      if ( this->fields.isLimitUpSuppression )
      {
        p_playVoiceList = &this->fields.playVoiceList;
        this->fields.playVoiceList = 0LL;
        LODWORD(LimitUpSvtVoiceList) = 0;
      }
      else
      {
        LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v75);
        p_playVoiceList = &this->fields.playVoiceList;
        this->fields.playVoiceList = LimitUpSvtVoiceList;
      }
      sub_1B64814((ServantStatusBattleListViewItem_o *)p_playVoiceList, (int32_t)LimitUpSvtVoiceList, (int32_t)v75, v76);
      v133 = this->fields.playVoiceList;
      if ( !v133 )
      {
        v134 = this->fields.baseUsrSvtData;
        if ( v134 )
        {
          v136 = *(_QWORD *)&v134->fields.limitCount.fields.currentCryptoKey;
          v135 = *(_QWORD *)&v134->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v267.fields.currentCryptoKey = v136;
          *(_QWORD *)&v267.fields.fakeValue = v135;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v267, 0LL);
          v137 = this->fields.baseUsrSvtData;
          v138 = Instance == 2;
          if ( v137 )
          {
            v139 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v137->fields.limitCount, 0LL) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v140 = this->fields.baseUsrSvtData;
              if ( !v140 )
                goto LABEL_212;
              v142 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
              v141 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
              v143 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1048LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v268.fields.currentCryptoKey = v142;
              *(_QWORD *)&v268.fields.fakeValue = v141;
              v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v268, 0LL);
              v138 = (v139 == 2) | System_Linq_Enumerable__Contains_int_(
                                     v143,
                                     v144,
                                     (const MethodInfo_2E54F84 *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              v146 = this->fields.kind;
              isLimitUpSuppression = v146 != 10 && v146 != 26;
            }
            if ( (v138 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, v48);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v242 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(
              v242,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__145_5__,
              0LL);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v242, 1, v243);
              return;
            }
          }
        }
        goto LABEL_212;
      }
LABEL_118:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&v133->max_length;
        CombineResultEffectComponent__playVoice(this, v48);
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
      v83 = SkillIdList;
      v84 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v84, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v87);
      if ( !Instance )
        goto LABEL_212;
      v89 = *(_DWORD *)(Instance + 16);
      v90 = this->fields.kind;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v88);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_212;
      dispBattleName = *(System_String_o **)(Instance + 24);
      isReleasea = 1;
      kind = v90 == 3;
      goto LABEL_195;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v53 = this->fields.skillResultInfoWindow;
      v54 = this->fields.baseUsrSvtData;
      v55 = this->fields.targetId;
      v56 = this->fields.targetLv;
      v57 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v57, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v53 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_44611272(
        v53,
        v54,
        v55,
        v56,
        v57,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        this->fields.npInfoAddManager,
        this->fields.kind,
        isRelease);
      return;
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v219 = this->fields.baseUsrSvtData;
      if ( !v219 )
        goto LABEL_212;
      v220 = *(_OWORD *)&v219->fields.id.fields.fakeValue;
      v221 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v256.fields.currentCryptoKey = *(_OWORD *)&v219->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v256.fields.fakeValue = v220;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v254 = v256;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v254, 0LL);
      if ( !v221 )
        goto LABEL_212;
      v222 = DataMasterBase_object__object__long___GetEntity(
               v221,
               Instance,
               (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v222;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)v222, v223, v224);
      v225 = this->fields.svtResultInfoWindow;
      v226 = this->fields.resUsrSvtData;
      v227 = this->fields.baseUsrSvtCollictionLv;
      v228 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v228, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v225 )
        goto LABEL_212;
      v214 = v225;
      v215 = v226;
      v216 = v227;
      v217 = v228;
      v218 = 0LL;
      goto LABEL_176;
    case 7:
    case 0x15:
      v91 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v91 + 309) & 1) == 0 )
        v91 = sub_1BB674C(v91);
      v92 = *(_QWORD *)(*(_QWORD *)(v91 + 192) + 16LL);
      if ( (*(_BYTE *)(v92 + 309) & 1) == 0 )
        v92 = sub_1BB674C(v92);
      Instance = **(_QWORD **)(v92 + 184);
      if ( !Instance )
        goto LABEL_212;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v94 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v94,
        (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
      v95 = 0LL;
      v96 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v96 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v97 = this->fields.baseUsrSvtData;
          if ( !v97 )
            goto LABEL_212;
          v99 = *(_QWORD *)&v97->fields.svtId.fields.currentCryptoKey;
          v98 = *(_QWORD *)&v97->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v262.fields.currentCryptoKey = v99;
          *(_QWORD *)&v262.fields.fakeValue = v98;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v262, 0LL);
          if ( !MasterData_object )
            goto LABEL_212;
          Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                (ServantSkillMaster_o *)MasterData_object,
                                Instance,
                                v96,
                                0LL);
          if ( !Instance )
            goto LABEL_212;
          v100 = *(_DWORD *)(Instance + 24);
          if ( v100 < 1 )
          {
LABEL_50:
            v103 = this->fields.baseUsrSvtData;
            if ( !v103 )
              goto LABEL_212;
            v105 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
            v104 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v263.fields.currentCryptoKey = v105;
            *(_QWORD *)&v263.fields.fakeValue = v104;
            v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v263, 0LL);
            Instance = (__int64)ServantSkillMaster__GetEntity(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  v106,
                                  v96,
                                  1,
                                  0LL);
            if ( Instance )
            {
              v48 = (const MethodInfo *)*(unsigned int *)(Instance + 28);
              v102 = v95;
LABEL_55:
              if ( !v94 )
                goto LABEL_212;
              items = v94->fields._items;
              v108 = Method_System_Collections_Generic_List_int__Add__;
              ++v94->fields._version;
              if ( !items )
                goto LABEL_212;
              size = v94->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v94,
                  (int32_t)v48,
                  *(const MethodInfo_34921B8 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
              }
              else
              {
                v94->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v48;
              }
            }
            else
            {
              v102 = v95;
            }
            ++v96;
            v95 = v102;
            continue;
          }
          v101 = 0;
          while ( 1 )
          {
            if ( v100 == v101 )
LABEL_213:
              sub_1B64AD4(Instance, v48);
            v102 = *(_QWORD *)(Instance + 8LL * v101 + 32);
            if ( !v102 )
              break;
            v48 = (const MethodInfo *)*(unsigned int *)(v102 + 28);
            if ( (_DWORD)v48 == this->fields.targetId )
              goto LABEL_55;
            if ( v100 == ++v101 )
              goto LABEL_50;
          }
LABEL_212:
          sub_1B64ACC(Instance, v48);
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
        v110 = Instance;
        Instance = UserServantEntity__IsHeroine(this->fields.baseUsrSvtData, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_212;
          v111 = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          v112 = this->fields.baseUsrSvtData;
          if ( !v112 )
            goto LABEL_212;
          v113 = Instance;
          v115 = *(_QWORD *)&v112->fields.svtId.fields.currentCryptoKey;
          v114 = *(_QWORD *)&v112->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v264.fields.currentCryptoKey = v115;
          *(_QWORD *)&v264.fields.fakeValue = v114;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v264, 0LL);
          if ( !v111 )
            goto LABEL_212;
          Instance = UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)v111,
                       &entity,
                       v113,
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
              v117 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
              Instance = System_Linq_Enumerable__Any_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v117,
                           (const MethodInfo_2E48840 *)Method_System_Linq_Enumerable_Any_int___);
              if ( (Instance & 1) != 0 )
              {
                Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v117, 0LL);
                v110 = Instance;
              }
            }
          }
        }
        v118 = this->fields.baseUsrSvtData;
        if ( !v118 )
          goto LABEL_212;
        v120 = *(_QWORD *)&v118->fields.svtId.fields.currentCryptoKey;
        v119 = *(_QWORD *)&v118->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v265.fields.currentCryptoKey = v120;
        *(_QWORD *)&v265.fields.fakeValue = v119;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v265, 0LL);
        if ( !v95 )
          goto LABEL_212;
        if ( !MasterData_object )
          goto LABEL_212;
        Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              *(_DWORD *)(v95 + 20),
                              this->fields.targetIdOld,
                              0LL);
        if ( !Instance )
          goto LABEL_212;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v256,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
        *(_OWORD *)&v257.fields._list = *(_OWORD *)&v256.fields.currentCryptoKey;
        v257.fields._current = (Il2CppObject *)v256.fields.fakeValue;
        while ( 1 )
        {
          v121 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v257,
                   (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
          if ( !v121 )
            break;
          current = v257.fields._current;
          if ( !v257.fields._current )
            sub_1B64ACC(v121, v122);
          if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v257.fields._current, 0, 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            v126 = this->fields.baseUsrSvtData;
            if ( !v126 )
              sub_1B64ACC(UserId, v125);
            v127 = UserId;
            v128 = v126->fields.lv;
            v130 = *(_QWORD *)&v126->fields.limitCount.fields.currentCryptoKey;
            v129 = *(_QWORD *)&v126->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v266.fields.currentCryptoKey = v130;
            *(_QWORD *)&v266.fields.fakeValue = v129;
            v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v266, 0LL);
            if ( ServantSkillEntity__isUse((ServantSkillEntity_o *)current, v127, v128, v131, v110, -1, -1, -1LL, 0LL) )
            {
              v132 = 1;
              goto LABEL_189;
            }
          }
        }
        v132 = 0;
LABEL_189:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v257,
          (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
        v238 = v132 != 0;
      }
      else
      {
        v238 = 0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v84 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v84, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v239);
      if ( !Instance )
        goto LABEL_212;
      if ( !v94 )
        goto LABEL_212;
      v89 = *(_DWORD *)(Instance + 16);
      v83 = System_Collections_Generic_List_int___ToArray(
              v94,
              (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v240);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_212;
      isReleasea = v238;
      kind = 0;
      dispBattleName = *(System_String_o **)(Instance + 24);
LABEL_195:
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        skillResultInfoWindow,
        targetId,
        targetLv,
        v84,
        targetIdOld,
        targetLvOld,
        v89,
        v83,
        kind,
        isReleasea,
        0,
        dispBattleName,
        v253);
      break;
    case 9:
      v173 = this->fields.skillResultInfoWindow;
      v174 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v176 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v176, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v173 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v173, v174, oldFriendShipRank, v176, v177);
      return;
    case 0xB:
      v147 = this->fields.skillResultInfoWindow;
      v148 = this->fields.baseUsrSvtData;
      v149 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v149, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v147 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v147, v148, v149, v150);
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
      CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v48);
      this->fields.playVoiceList = CostumeSvtVoiceList;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList,
        (int32_t)CostumeSvtVoiceList,
        v152,
        v153);
      v133 = this->fields.playVoiceList;
      if ( v133 )
        goto LABEL_118;
      goto LABEL_186;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_181;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_205;
      this->fields.messageCallback = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, 0, (int32_t)v51, v52);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      v155 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB134 )
      {
        sub_1B64870(&TerminalPramsManager_TypeInfo, v48);
        byte_49FB134 = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v155 )
        goto LABEL_212;
      v156 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v155,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 16LL),
               (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_212;
      v157 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v158 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v158 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v158->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10774/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
        if ( !v157 )
          goto LABEL_212;
        v160 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v157, -1, -1, 0LL);
        v162 = System_String__Format(v160, Name, 0LL);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10773/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
        if ( !v156 )
          goto LABEL_212;
        v244 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v156, 0LL);
        if ( !v157 )
          goto LABEL_212;
        v245 = (Il2CppObject *)Instance;
        v246 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v157, -1, -1, 0LL);
        v162 = System_String__Format_61397948(v244, v245, v246, 0LL);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))messageCallback->fields.m_target)(
        messageCallback->fields.original_method_info,
        v162,
        *(_QWORD *)&messageCallback->fields.extra_arg);
LABEL_205:
      if ( !this->fields.callbackFunc )
        return;
      v233 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v247 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v247 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v247->static_fields->DEFAULT_FADE_TIME;
      v236 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      v237 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__145_1__;
LABEL_209:
      v248 = v236;
      System_Action___ctor(v236, (Il2CppObject *)this, *v237, 0LL);
      if ( !v233 )
        goto LABEL_212;
      CommonUI__maskFadeout((CommonUI_o *)v233, 1, DEFAULT_FADE_TIME, v248, 0LL);
      return;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_205;
LABEL_181:
      v233 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v234 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v234 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v234->static_fields->DEFAULT_FADE_TIME;
      v236 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      v237 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__145_0__;
      goto LABEL_209;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v230 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v51);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_212;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v230,
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
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_44511316(
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
      v163 = *(System_Int32_array **)(Instance + 16);
      v164 = this->fields.skillResultInfoWindow;
      v165 = this->fields.targetId;
      v166 = this->fields.targetLv;
      v167 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v167, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v168 = this->fields.baseUsrSvtData;
      if ( !v168 )
        goto LABEL_212;
      v169 = this->fields.targetIdOld;
      v170 = this->fields.targetLvOld;
      v172 = *(_QWORD *)&v168->fields.svtId.fields.currentCryptoKey;
      v171 = *(_QWORD *)&v168->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v269.fields.currentCryptoKey = v172;
      *(_QWORD *)&v269.fields.fakeValue = v171;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v269, 0LL);
      if ( !v164 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v164,
        v165,
        v166,
        v167,
        v169,
        v170,
        Instance,
        v163,
        this->fields.targetLvOld == 0,
        1,
        1,
        (System_String_o *)StringLiteral_1/*""*/,
        v253);
      return;
    default:
      return;
  }
}


void __fastcall CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  ServantStatusBattleListViewItem_o *p_player; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A01D52 & 1) == 0 )
  {
    sub_1B64870(&SoundManager_TypeInfo, method);
    byte_4A01D52 = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = (ServantStatusBattleListViewItem_o *)&this->fields.player;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    p_player->klass = 0LL;
    sub_1B64814(p_player, 0, v6, v7);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0CF0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0CA8;
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
  if ( (byte_4A01D6A & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, isDecide);
    byte_4A01D6A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  int32_t v6; // w3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A01D6B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v3);
    byte_4A01D6B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.afterSkillList, (int32_t)v7, v8, v9);
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
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A01D6D & 1) == 0 )
  {
    sub_1B64870(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_1B64870(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4A01D6D = 1;
  }
  v8 = sub_1B64ABC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
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
    sub_1B64ACC(afterSkillList, v10);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v8,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v8;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 4), v8, v11, v12);
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
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A01D6C & 1) == 0 )
  {
    sub_1B64870(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_1B64870(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4A01D6C = 1;
  }
  v8 = sub_1B64ABC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
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
    sub_1B64ACC(beforeSkillList, v10);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v8,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v8;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 4), v8, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4A01D6F & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_4A01D6F = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1B64ACC(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4A01D70 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1B64870(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
                                                                       method);
    byte_4A01D70 = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1B64ACC(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4A01D6E & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_4A01D6E = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1B64ACC(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19B0D74;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19B0D54;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0D0C;
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
  return (System_IAsyncResult_o *)sub_1B64824(this, &v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  int32_t v4; // w3

  if ( (byte_4A01D71 & 1) == 0 )
  {
    sub_1B64870(&CombineResultEffectComponent___c_TypeInfo, v1);
    byte_4A01D71 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64ACC(this, a);
  return System_Int32__CompareTo_62188528((_DWORD)a + 24, b->fields.priority, 0LL);
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
  CombineResultEffectComponent___c__DisplayClass145_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v11; // x8
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v12; // x8
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v13; // x8
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v14; // x8
  struct CombineResultEffectComponent_o *v15; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__4; // x22
  CommonUI_o *v18; // x20
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  int32_t v21; // w3
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_4A01D72 & 1) == 0 )
  {
    sub_1B64870(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)sub_1B64870(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__4__,
                                                                      v5);
    byte_4A01D72 = 1;
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
  UnityEngine_Object__DestroyImmediate_69136104(effect, 0LL);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v11->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[4].monitor = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this[4].monitor, 0, v9, v10);
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v12->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, method);
  v13 = v2->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v13->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[5].klass )
  {
    this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          _9__4 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64ABC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__4,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__4__,
            v19);
          v2->fields.__9__4 = _9__4;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v20, v21);
        }
        if ( v18 )
        {
          CommonUI__OpenCombineLimit(v18, baseUsrSvtData, _9__4, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1B64ACC(this, method);
  }
  if ( this[9].monitor )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, method);
    callback = v2->fields.callback;
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
    sub_1B64ACC(this, decide);
  }
  LODWORD(this[8].monitor) = 0;
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, (const MethodInfo *)decide);
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
  CombineResultEffectComponent___c__DisplayClass145_2_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__7; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct CombineResultEffectComponent_o *v11; // x8

  v3 = this;
  if ( (byte_4A01D73 & 1) == 0 )
  {
    sub_1B64870(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide);
    sub_1B64870(&NetworkManager_TypeInfo, v4);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    this = (CombineResultEffectComponent___c__DisplayClass145_2_o *)sub_1B64870(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__7__,
                                                                      v6);
    byte_4A01D73 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__7 = v3->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__7__,
      0LL);
    v3->fields.__9__7 = _9__7;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v3->fields.__9__7, (int32_t)_9__7, v9, v10);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass145_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__7,
                                                                    (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v11 = v3->fields.__4__this;
  if ( !v11 || !this )
LABEL_11:
    sub_1B64ACC(this, decide);
  CardServantFlagRequest__beginRequest(
    (CardServantFlagRequest_o *)this,
    v11->fields.targetSvtId,
    v11->fields.targetFlagId,
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
  CombineResultEffectComponent___c__DisplayClass167_0_o *v2; // x19
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
  if ( (byte_4A01D74 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineResultEffectComponent___c__DisplayClass167_0_o *)sub_1B64870(
                                                                      &ServantCharaGraphEXOpenManager_TypeInfo,
                                                                      v3);
    byte_4A01D74 = 1;
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v11, 0LL);
  limitCount = v2->fields.limitCount;
  v10 = v8;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v10, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass167_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1B64ACC(this, method);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A01D75 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDcd);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__1__, v6);
    byte_4A01D75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !v10 )
    sub_1B64ACC(Instance, v8);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass173_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v8; // x20

  if ( (byte_4A01D76 & 1) == 0 )
  {
    sub_1B64870(&AvalonSceneManager_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A01D76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v8 )
LABEL_10:
    sub_1B64ACC(Instance, v5);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}