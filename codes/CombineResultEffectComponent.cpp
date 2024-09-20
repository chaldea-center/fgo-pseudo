void __fastcall CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_HashSet_T__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A5EA46 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_17269/*"bit_result02"*/);
    sub_1B885B0(&StringLiteral_17270/*"bit_result03"*/);
    sub_1B885B0(&StringLiteral_17271/*"bit_result04"*/);
    sub_1B885B0(&StringLiteral_17268/*"bit_result01"*/);
    byte_4A5EA46 = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 3LL);
  if ( !v3 )
    goto LABEL_12;
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  v8 = StringLiteral_17268/*"bit_result01"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_17268/*"bit_result01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_11;
  v11 = StringLiteral_17269/*"bit_result02"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_17269/*"bit_result02"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), v11, v9, v10);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_11;
  v14 = StringLiteral_17270/*"bit_result03"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_17270/*"bit_result03"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), v14, v12, v13);
  this->fields.startAniName = (struct System_String_array *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.startAniName, v7, v15, v16);
  v17 = StringLiteral_17271/*"bit_result04"*/;
  this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_17271/*"bit_result04"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.LimitAnimName, v17, v18, v19);
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_BB5310;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentFigureCollectList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterFigureCollectList, (int32_t)v23, v24, v25);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v3 = sub_1B88658(int___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_12;
  v4 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
LABEL_11:
    sub_1B88814(v3, v4);
  *(_DWORD *)(v3 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ChangeCardEffectLvList, v3, v26, v27);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v28 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v28,
    (const MethodInfo_33B4D00 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v28 )
LABEL_12:
    sub_1B8880C(v3, v4);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    1,
    (const MethodInfo_33B5F04 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    10,
    (const MethodInfo_33B5F04 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    26,
    (const MethodInfo_33B5F04 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    19,
    (const MethodInfo_33B5F04 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v28,
    24,
    (const MethodInfo_33B5F04 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.limitUpKinds, (int32_t)v28, v29, v30);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Component_o *transform; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5E9F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4A5E9F8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)Component_object, v4, v5);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B8880C(0LL, v7);
  v8 = UnityEngine_Component__GetComponent_object_(
         transform,
         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineResStatus, (int32_t)v8, v9, v10);
}


bool __fastcall CombineResultEffectComponent__CheckCombineLimit(
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

  if ( (byte_4A5EA0C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA0C = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v9 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
  HighestData = ServantLvDetailMaster__GetHighestData(v9, Rarity, oldLv, 0LL);
  Instance = ServantLvDetailMaster__GetHighestData(v9, Rarity, currentLv, 0LL);
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
    sub_1B8880C(Instance, v8);
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
    sub_1B8880C(0LL, method);
  return LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0LL);
}


bool __fastcall CombineResultEffectComponent__CheckSaintGraphProfileChange(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4A5EA43 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5EA43 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v7);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0

  if ( (byte_4A5EA40 & 1) == 0 )
  {
    sub_1B885B0(&System_GC_TypeInfo);
    byte_4A5EA40 = 1;
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
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62753100(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_17:
    sub_1B8880C(svtResultInfoWindow, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtResultInfoWindow, 0, 0LL);
}


void __fastcall CombineResultEffectComponent__CloseLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  LimitCountSealDialogComponent_o *limitCountSealDialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A5EA42 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1B885B0(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_0__);
    byte_4A5EA42 = 1;
  }
  v3 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_1B8880C(v7, v8);
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v6, 0LL);
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
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Component_o *v28; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v30; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  struct System_Int32_array *v34; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v36; // x26
  StandFigureCollect_o *v37; // x27
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v47; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5EA24 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StandFigureCollect_TypeInfo);
    byte_4A5EA24 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v13 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v13,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_object )
    goto LABEL_47;
  v15 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                svtId,
                                imageLimitCount,
                                0LL);
  if ( !v15 )
    goto LABEL_47;
  v16 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v15, svtId, (int32_t)Instance, 2, 0LL);
  if ( !Instance
    || (v17 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_37977456(
                                    gameObject,
                                    svtId,
                                    v16,
                                    1,
                                    faceType,
                                    1,
                                    0LL,
                                    0,
                                    -1,
                                    0LL);
      if ( Instance )
      {
        v47 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v49 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v49, 0LL, v47, 0LL);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v53 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v49,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                v55 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v55[4] = (Il2CppClass *)v49;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v49, v50, v51);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1B8880C(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v17,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v18 )
      break;
    current = (SvtMultiPortraitEntity_o *)v58.fields._current;
    if ( !v58.fields._current )
      sub_1B8880C(v18, v19);
    klass_high = HIDWORD(v58.fields._current[2].klass);
    if ( klass_high >= 1 )
      v22 = klass_high + 1;
    else
      v22 = 1;
    if ( !StandFigureNode )
      sub_1B8880C(v18, v19);
    v23 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v23,
                         current->fields.portraitImageId,
                         1,
                         faceType,
                         v22,
                         0LL,
                         0,
                         -1,
                         0LL);
    v28 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B8880C(0LL, v25);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v26,
      v27);
    transform = UnityEngine_Component__get_transform(v28, 0LL);
    if ( !transform )
      sub_1B8880C(0LL, v30);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v32 = UnityEngine_Component__get_gameObject(v28, 0LL);
      v34 = current->fields.commonPosition;
      if ( !v34 )
        sub_1B8880C(v32, v33);
      max_length = v34->max_length;
      if ( max_length == 1 )
        sub_1B88814(v32, v33);
      if ( !max_length )
        sub_1B88814(v32, v33);
      GameObjectExtensions__AddLocalPosition_33725056(v32, (float)v34->m_Items[1], (float)v34->m_Items[2], 0LL);
    }
    v36 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v37 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v37, current, (UIStandFigureR_o *)v28, 0LL);
    if ( !v36 )
      sub_1B8880C(v38, v39);
    v42 = v36->fields._items;
    v43 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v36->fields._version;
    if ( !v42 )
      sub_1B8880C(v38, v39);
    v44 = v36->fields._size;
    if ( (unsigned int)v44 >= v42->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)v37,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v36->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)v37;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v37, v40, v41);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Component_o *v38; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v40; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  struct System_Int32_array *v44; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v46; // x29
  StandFigureCollect_o *v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v57; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  int32_t svtId; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4A5EA1B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StandFigureCollect_TypeInfo);
    byte_4A5EA1B = 1;
  }
  memset(&v70, 0, sizeof(v70));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v16 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v16,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v19 = (SvtMultiPortraitMaster_o *)Instance;
  v21 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v71.fields.currentCryptoKey = v21;
  *(_QWORD *)&v71.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v71, 0LL);
  if ( !MasterData_object )
    goto LABEL_61;
  v22 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                (int32_t)Instance,
                                imageLimitCount,
                                0LL);
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
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v19, svtId, v24, overwriteType, 0LL);
  if ( !Instance
    || (v26 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_37977456(
                                     gameObject,
                                     svtId,
                                     v24,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v25 & 1,
                                     friendshipNum,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_37978368(
                                     gameObject,
                                     svtId,
                                     v24,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     0,
                                     friendshipNum,
                                     0LL));
      v57 = (UIStandFigureR_o *)Instance;
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
          v59 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v59, 0LL, v57, 0LL);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v63 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v59,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
              }
              else
              {
                v65 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v65[4] = (Il2CppClass *)v59;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1B8880C(Instance, v15);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    v26,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v70 = v69;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v27 )
      break;
    current = (SvtMultiPortraitEntity_o *)v70.fields._current;
    if ( !v70.fields._current )
      sub_1B8880C(v27, v28);
    klass_high = HIDWORD(v70.fields._current[2].klass);
    if ( klass_high >= 1 )
      v31 = klass_high + 1;
    else
      v31 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1B8880C(v27, v28);
      v32 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v32,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v31,
                           0LL,
                           v25 & 1,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_1B8880C(v27, v28);
      v37 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v37,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v31,
                           0LL,
                           0LL);
    }
    v38 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B8880C(0LL, v34);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v35,
      v36);
    transform = UnityEngine_Component__get_transform(v38, 0LL);
    if ( !transform )
      sub_1B8880C(0LL, v40);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v42 = UnityEngine_Component__get_gameObject(v38, 0LL);
      v44 = current->fields.commonPosition;
      if ( !v44 )
        sub_1B8880C(v42, v43);
      max_length = v44->max_length;
      if ( max_length == 1 )
        sub_1B88814(v42, v43);
      if ( !max_length )
        sub_1B88814(v42, v43);
      GameObjectExtensions__AddLocalPosition_33725056(v42, (float)v44->m_Items[1], (float)v44->m_Items[2], 0LL);
    }
    v46 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v47 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v47, current, (UIStandFigureR_o *)v38, 0LL);
    if ( !v46 )
      sub_1B8880C(v48, v49);
    v52 = v46->fields._items;
    v53 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v46->fields._version;
    if ( !v52 )
      sub_1B8880C(v48, v49);
    v54 = v46->fields._size;
    if ( (unsigned int)v54 >= v52->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v47,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v46->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)v47;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v47, v50, v51);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall CombineResultEffectComponent__DestroySvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x0
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

  if ( (byte_4A5EA3F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EA3F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    currentFigureCollectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v4 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1B8880C(v4, v5);
    monitor = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v9 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v9 )
        sub_1B8880C(0LL, v8);
      UIStandFigureR__ReleaseCharacter(v9, 0LL);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_1B8880C(0LL, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v13 = this->fields.currentFigureCollectList;
  if ( !v13 )
    goto LABEL_40;
  size = v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0LL);
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    currentFigureCollectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v16 )
      break;
    v18 = v29.fields._current;
    if ( !v29.fields._current )
      sub_1B8880C(v16, v17);
    v19 = (UnityEngine_Object_o *)v29.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    {
      v21 = (UIStandFigureR_o *)v18[1].monitor;
      if ( !v21 )
        sub_1B8880C(0LL, v20);
      UIStandFigureR__ReleaseCharacter(v21, 0LL);
      v23 = (UnityEngine_Component_o *)v18[1].monitor;
      if ( !v23 )
        sub_1B8880C(0LL, v22);
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(v24, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1B8880C(currentFigureCollectList, method);
  v26 = afterFigureCollectList->fields._size;
  v27 = afterFigureCollectList->fields._version + 1;
  afterFigureCollectList->fields._size = 0;
  afterFigureCollectList->fields._version = v27;
  if ( v26 >= 1 )
    System_Array__Clear((System_Array_o *)afterFigureCollectList->fields._items, 0, v26, 0LL);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_1B8880C(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5EA2E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__EndLoad_b__146_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EA2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__146_0__, 0LL);
  if ( !v5 )
    sub_1B8880C(v8, v9);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0LL);
}


void __fastcall CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  CombineResultEffectComponent_o *v4; // x19
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v7; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v14; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v17; // x20
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  int32_t v20; // w20
  CombineResultEffectComponent_o *v21; // x0
  int32_t v22; // w21
  const MethodInfo *v23; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v24; // x22
  System_Action_o *v25; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v4 = this;
  if ( (byte_4A5EA37 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__);
    sub_1B885B0(&Method_CombineResultEffectComponent__EndPlay_b__156_0__);
    sub_1B885B0(&Method_CombineResultEffectComponent__EndPlay_b__156_1__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1B885B0(&StringLiteral_22552/*"playVoice"*/);
    byte_4A5EA37 = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( (int)playCnt < v4->fields.maxPlayCnt )
  {
    playVoiceList = v4->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
        sub_1B88814(this, method);
      v7 = playVoiceList->m_Items[playCnt];
      if ( v7 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v4,
          (System_String_o *)StringLiteral_22552/*"playVoice"*/,
          v7->fields.delay,
          0LL);
        return;
      }
    }
LABEL_33:
    sub_1B8880C(this, method);
  }
  if ( v4->fields.player )
    CombineResultEffectComponent__stopVoice(v4, method);
  v4->fields.playCnt = 0;
  v4->fields.playVoiceList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.playVoiceList, 0, v2, v3);
  this = (CombineResultEffectComponent_o *)v4->fields.limitUpKinds;
  if ( !this )
    goto LABEL_33;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_Int32Enum___Contains(
                                             (System_Collections_Generic_HashSet_T__o *)this,
                                             v4->fields.kind,
                                             (const MethodInfo_33B53F4 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
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
    v18 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v18;
    *(_QWORD *)&v26.fields.fakeValue = v17;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                               v26,
                                               0LL);
    v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseUsrSvtData;
    if ( !v19 )
      goto LABEL_33;
    v20 = (int)this;
    v21 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v19[6],
                                              0LL);
    v22 = (_DWORD)v21 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v21, v20, (_DWORD)v21 + 1, v23) )
    {
      v24 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1B887FC(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v24,
        (Il2CppObject *)v4,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)v4, Method_CombineResultEffectComponent__EndPlay_b__156_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v20, v22, v24, v25, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v4->fields.limitUpResultCheck;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)v4, Method_CombineResultEffectComponent__EndPlay_b__156_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_33;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v9, 1, 0LL);
    }
  }
  else if ( v4->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v4, method);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v4, v10) )
    {
      this = (CombineResultEffectComponent_o *)v4->fields.touchInfo;
      if ( !this )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v4->fields.costumeId;
      v14 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v14->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v4, v11);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v4, v4->fields.skillShowIndex, v12);
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
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5EA3C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__FadeoutProcess_b__165_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EA3C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v5 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__165_0__,
        0LL);
      if ( !Instance )
        sub_1B8880C(v8, v9);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v7, 0LL);
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

  if ( (byte_4A5EA23 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5EA23 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1B8880C(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1B88814(v6, *(_QWORD *)&svtId);
    if ( ServantIdsIgnoreFormChange->m_Items[v9 + 1] == svtId )
      break;
    if ( max_length == ++v9 )
      return 0;
  }
  return limit != 0;
}


System_String_o *__fastcall CombineResultEffectComponent__GetNameFromMessageId(
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

  if ( (byte_4A5EA3D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA3D = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
    if ( !v10 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v10, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_21:
      sub_1B8880C(Instance, v8);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  if ( !v15 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v15,
          (Il2CppObject **)&v18,
          (int32_t)Instance,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v18;
  if ( !v18 )
    goto LABEL_21;
  return ServantEntity__getName(v18, -1, -1, 0LL);
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

  if ( (byte_4A5EA1E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4A5EA1E = 1;
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
    sub_1B8880C(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B8880C(0LL, transformCount);
  UserServantEntity__GetTransformedServantInfo(baseUsrSvtData, &transformInfo, transformCount, 0LL);
  return transformInfo;
}


void __fastcall CombineResultEffectComponent__InitChangeInfoOnCostume(
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
  const MethodInfo *v16; // x3
  il2cpp_array_size_t i; // w20
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

  if ( (byte_4A5EA31 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA31 = 1;
  }
  v28 = 0LL;
  skillInfoList = 0LL;
  v26 = 0LL;
  tdInfo = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
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
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
                if ( !v11 )
                  goto LABEL_52;
                v12 = *(_OWORD *)(v11 + 32);
                v13 = Instance;
                *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
                *(_OWORD *)&v23.fields.fakeValue = v12;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v23, 0LL);
                if ( v13 == Instance )
                  break;
                if ( v7 == v8 )
                  goto LABEL_20;
                if ( (unsigned int)++v8 >= *(_DWORD *)(v6 + 24) )
LABEL_18:
                  sub_1B88814(Instance, id);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v11;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, v11, v14, v15);
            }
LABEL_20:
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
                  v18 = skillInfoList->m_Items[i];
                  if ( !v18 || !v28 )
                    goto LABEL_52;
                  if ( i >= v28->max_length )
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
                    if ( i >= v28->max_length )
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
    sub_1B8880C(Instance, id);
  }
}


void __fastcall CombineResultEffectComponent__InitCombineEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Transform_o *v7; // x20
  const MethodInfo *v8; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_4A5EA0E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__InitCombineEffect_b__112_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11354/*"ResultEffect"*/);
    byte_4A5EA0E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11354/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_21;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effect, (int32_t)Value, v5, v6);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  v7 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A55CE6 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v7 )
    goto LABEL_21;
  UnityEngine_Transform__set_localScale(v7, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__112_0__,
      0LL);
    if ( v12 )
    {
      CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, v14, 0LL);
      return;
    }
LABEL_21:
    sub_1B8880C(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v8);
  if ( this->fields.kind == 6 )
    CombineResultEffectComponent__loadBoxGachaEffect(this, v15);
  else
    CombineResultEffectComponent__SetResultServantVoiceData(this, v15);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
  v4 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(npInfoAddManager, 0LL);
  return v4 >= 1 && this->fields.tdShowIndex < v4;
}


bool __fastcall CombineResultEffectComponent__IsShowSkillInfoOnCostume(
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
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5EA38 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA38 = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v4 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, method);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)costumeSkillInfoManager;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                                        v12,
                                                                                        0LL);
  if ( !v6 )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v6,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_1B8880C(costumeSkillInfoManager, method);
  v9 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)costumeSkillInfoManager, 30, 0LL);
  return v4 >= 1 && !v9 && this->fields.skillShowIndex < v4;
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
    sub_1B8880C(0LL, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A5EA45 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5469/*"END_ANIMATION"*/);
    byte_4A5EA45 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1B8880C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5469/*"END_ANIMATION"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__OpenLimitCountSealDialog(
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
  if ( (byte_4A5EA41 & 1) == 0 )
  {
    sub_1B885B0(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1B885B0(&StringLiteral_8247/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4A5EA41 = 1;
  }
  monitor = v2[12].monitor;
  if ( !monitor )
    goto LABEL_14;
  v5 = monitor[10];
  v4 = monitor[11];
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v5;
  *(_QWORD *)&v14.fields.fakeValue = v4;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[12].monitor;
  if ( !v6 )
    goto LABEL_14;
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6[6], 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_14;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v7,
                                    v8 + 1,
                                    0LL);
  v10 = (LimitCountSealDialogComponent_o *)v2[9].monitor;
  v11 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8247/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v13 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1B887FC(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v13,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !v10 )
LABEL_14:
    sub_1B8880C(this, method);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v10, v12, v11, v13, 0LL);
}


bool __fastcall CombineResultEffectComponent__OpenNotification(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 AscensionAfterDialogId; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
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

  if ( (byte_4A5EA3E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CombineResultEffectComponent___c__DisplayClass167_0__OpenNotification_b__0__);
    sub_1B885B0(&CombineResultEffectComponent___c__DisplayClass167_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11550/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA3E = 1;
  }
  v3 = sub_1B887FC(CombineResultEffectComponent___c__DisplayClass167_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_28;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
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
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v17, *(_DWORD *)(v3 + 24), 0LL);
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
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
          v23 = *(_DWORD *)(v3 + 24);
          v24 = v22;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v24, v23, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v19,
                                                *(_DWORD *)(v3 + 24),
                                                v25);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = System_Int32__ToString((int32_t)&v33, 0LL);
          v29 = System_String__Concat_61707032((System_String_o *)StringLiteral_11550/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v28, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v30 = LocalizationManager__Get(v29, 0LL);
          v31 = System_String__Format(v30, NameFromMessageId, 0LL);
          v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v32,
            (Il2CppObject *)v3,
            Method_CombineResultEffectComponent___c__DisplayClass167_0__OpenNotification_b__0__,
            0LL);
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
              0LL,
              0.0,
              0LL);
            return v8;
          }
        }
      }
    }
LABEL_28:
    sub_1B8880C(AscensionAfterDialogId, v5);
  }
  return v8;
}


void __fastcall CombineResultEffectComponent__ProfileChangeDecideAction(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v11; // x21
  CommonUI_o *UserId; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Master_object; // x23
  CommonUI_o *v19; // x22
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v21; // x20
  CommonUI_o *v22; // x22
  ServantStatusDialog_EndDelegate_o *v23; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5EA44 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__0__);
    sub_1B885B0(&CombineResultEffectComponent___c__DisplayClass173_0_TypeInfo);
    byte_4A5EA44 = 1;
  }
  entity = 0LL;
  v11 = sub_1B887FC(CombineResultEffectComponent___c__DisplayClass173_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = UserId;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v19 )
      {
        CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          UserId = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( UserId )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)UserId, 0, 0LL);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v21 = entity;
            v22 = (CommonUI_o *)Instance;
            v23 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v23,
              (Il2CppObject *)v11,
              Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_30505968(v22, 33, v21, limitCount, v23, 0LL);
              return;
            }
          }
        }
      }
LABEL_20:
      sub_1B8880C(UserId, v13);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_20;
  CommonUI__CloseConfirmDialog_30494572(UserId, *(System_Action_o **)(v11 + 24), 0LL);
}


void __fastcall CombineResultEffectComponent__ReleaseVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5EA3A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4A5EA3A = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v2, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v6);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields.asstName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetAfterLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  UnityEngine_Component_o *StandFigureNode; // x21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
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
  __int64 v27; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Component_o *v35; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v37; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x0
  __int64 v42; // x1
  float v43; // s0
  float v44; // s1
  float v45; // s2
  struct System_Int32_array *v46; // x8
  il2cpp_array_size_t max_length; // w9
  int v48; // s11
  int v49; // s12
  float v50; // s9
  float v51; // s10
  float v52; // s8
  UnityEngine_Transform_o *v53; // x0
  __int64 v54; // x1
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v56; // x28
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  const MethodInfo *v65; // x2
  UnityEngine_GameObject_o *v66; // x0
  UIStandFigureR_o *v67; // x23
  System_Collections_Generic_List_object__o *v68; // x21
  StandFigureCollect_o *v69; // x22
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  int32_t masterDataBytes; // w21
  float FadeTime; // s8
  int32_t m_CancellationTokenSource_high; // w22
  int32_t v80; // w20
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+30h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EA21 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StandFigureCollect_TypeInfo);
    sub_1B885B0(&StringLiteral_8407/*"LimitUpResSvtNodeName"*/);
    byte_4A5EA21 = 1;
  }
  entity = 0LL;
  memset(&v83, 0, sizeof(v83));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8407/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v7 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_75;
  v10 = (ServantLimitAddMaster_o *)Instance;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v85.fields.currentCryptoKey = v12;
  *(_QWORD *)&v85.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v85, 0LL);
  v13 = this->fields.resUsrSvtData;
  if ( !v13 )
    goto LABEL_75;
  v14 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v13->fields.limitCount,
                                0LL);
  if ( !v10 )
    goto LABEL_75;
  v15 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v10, &entity, v14, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_75;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v15 = LimitCountUpResultServantLimitCount;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_75;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v14,
                                 v15,
                                 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v14, ServantLimitCountSealAfter, 0LL);
  v18 = this->fields.resUsrSvtData;
  if ( !v18 )
    goto LABEL_75;
  v19 = (int)Instance;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v21;
  *(_QWORD *)&v86.fields.fakeValue = v20;
  v22 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v86, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v22, (int32_t)v22, v19, v23);
  if ( !MasterData_object )
LABEL_75:
    sub_1B8880C(Instance, v6);
  v24 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v14,
                                v19,
                                2,
                                0LL);
  if ( Instance
    && (v25 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v82,
      v25,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v83 = v82;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v83,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v26 )
        break;
      if ( !StandFigureNode )
        sub_1B8880C(v26, v27);
      current = (SvtMultiPortraitEntity_o *)v83.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_1B8880C(gameObject, v30);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           gameObject,
                           current->fields.portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v24 & 1,
                           -1,
                           0LL);
      v35 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1B8880C(0LL, v32);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (int32_t)current,
        v33,
        v34);
      transform = UnityEngine_Component__get_transform(v35, 0LL);
      if ( !transform )
        sub_1B8880C(0LL, v37);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v39 = UnityEngine_Component__get_transform(v35, 0LL);
        if ( !v39 )
          sub_1B8880C(0LL, v40);
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition(v39, 0LL);
        v46 = current->fields.commonPosition;
        if ( !v46 )
          sub_1B8880C(v41, v42);
        max_length = v46->max_length;
        if ( !max_length )
          sub_1B88814(v41, v42);
        if ( max_length == 1 )
          sub_1B88814(v41, v42);
        v49 = v46->m_Items[1];
        v48 = v46->m_Items[2];
        v50 = v43;
        v51 = v44;
        v52 = v45;
        v53 = UnityEngine_Component__get_transform(v35, 0LL);
        if ( !v53 )
          sub_1B8880C(0LL, v54);
        v87.fields.x = v50 + (float)v49;
        v87.fields.y = v51 + (float)v48;
        v87.fields.z = v52;
        UnityEngine_Transform__set_localPosition(v53, v87, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v35,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v56 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v56, current, (UIStandFigureR_o *)v35, 0LL);
      if ( !afterFigureCollectList )
        sub_1B8880C(v57, v58);
      items = afterFigureCollectList->fields._items;
      v62 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1B8880C(v57, v58);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v56,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v56;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v56, v59, v60);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v83,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_75;
    v66 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_37977456(
                                  v66,
                                  v14,
                                  v19,
                                  1,
                                  0,
                                  1,
                                  0LL,
                                  v24 & 1,
                                  -1,
                                  0LL);
    if ( !Instance )
      goto LABEL_75;
    v67 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_75;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v68 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v69 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v69, 0LL, v67, 0LL);
    if ( !v68 )
      goto LABEL_75;
    v72 = v68->fields._items;
    v73 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v68->fields._version;
    if ( !v72 )
      goto LABEL_75;
    v74 = v68->fields._size;
    if ( (unsigned int)v74 >= v72->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v68,
        (Il2CppObject *)v69,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v72->obj.klass + v74;
      v68->fields._size = v74 + 1;
      v75[4] = (Il2CppClass *)v69;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v69, v70, v71);
    }
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v65);
  masterDataBytes = 0;
  FadeTime = 0.0;
  m_CancellationTokenSource_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1B88814(LimitUpSvtVoiceList, v6);
    Instance = (DataManager_o *)LimitUpSvtVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_75;
    m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
    masterDataBytes = (int32_t)Instance->fields.masterDataBytes;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0LL);
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v80 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v80,
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( !Instance )
        break;
      UIStandFigureR__SetFace_41048928(
        (UIStandFigureR_o *)Instance,
        m_CancellationTokenSource_high,
        masterDataBytes,
        0LL,
        FadeTime,
        0LL);
      if ( ++v80 >= System_Linq_Enumerable__Count_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                      (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  CombineRootComponent_c *v15; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4A5EA0A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__108_0__);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4A5EA0A = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    currentSkillId,
    currentSkillLv);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
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
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__108_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v17, 1, 0LL);
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

  if ( (byte_4A5EA1A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3182/*"BaseSvtNodeName"*/);
    byte_4A5EA1A = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1B8880C(0LL, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
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


void __fastcall CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(
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
  if ( (byte_4A5EA1F & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1B885B0(&StringLiteral_8406/*"LimitUpBaseSvtNodeName"*/);
    byte_4A5EA1F = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1B8880C(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8406/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v10);
}


void __fastcall CombineResultEffectComponent__SetCardParam(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  void *resUsrSvtData; // x0
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
  float v25; // s8
  _BOOL4 v26; // w20
  __int64 v27; // x23
  int32_t v28; // w20
  unsigned int v29; // w22
  int32_t v30; // w0
  __int64 *v31; // x24
  __int64 *v32; // x8
  __int64 *v33; // x8
  System_String_o *v34; // x20
  UnityEngine_Transform_o *v35; // x0
  UIExtrusionLabel_o *v36; // x20
  System_String_o *v37; // x20
  UnityEngine_Transform_o *v38; // x0
  UIExtrusionLabel_o *v39; // x20
  struct UserServantEntity_o *v40; // x8
  const MethodInfo *v41; // x2
  __int64 *v42; // x20
  __int64 *v43; // x8
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  unsigned __int64 v46; // x21
  __int64 v47; // x27
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v49; // x9
  struct System_String_array *startAniName; // x8
  int v51; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v53; // w2
  CombineResultEffectComponent_o *v54; // x0
  System_String_o *v55; // x1
  bool v56; // w2
  CombineResultEffectComponent_o *v57; // x0
  System_String_o *v58; // x1
  System_String_o *v59; // x20
  UnityEngine_Transform_o *v60; // x0
  UnityEngine_Component_o *v61; // x20
  float Value; // s0
  float v63; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 *v68; // x8
  __int64 v69; // x1
  ServantStatusBattleListViewItem_o *v70; // x0
  System_String_o *v71; // x20
  UnityEngine_Transform_o *v72; // x0
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x2
  Il2CppObject *v79; // x21
  EventDelegate_Callback_o *v80; // x22
  EventDelegate_o *v81; // x20
  int32_t v82; // w2
  int32_t v83; // w3
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  const MethodInfo *v88; // x3
  const MethodInfo *v89; // x2
  __int64 v90; // x20
  struct System_String_array *v91; // x8
  int v92; // w9
  const MethodInfo *v93; // x2
  __int64 v94; // x21
  float FadeTime; // s0
  struct System_String_o *v96; // x20
  int32_t v97; // w2
  int32_t v98; // w3
  const MethodInfo *v99; // x1
  __int64 v100; // [xsp+8h] [xbp-68h] BYREF
  __int64 v101; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EA12 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__SetCardParam_b__116_0__);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_4783/*"CostumeName"*/);
    sub_1B885B0(&StringLiteral_3182/*"BaseSvtNodeName"*/);
    sub_1B885B0(&StringLiteral_17273/*"bit_result_120"*/);
    sub_1B885B0(&StringLiteral_17280/*"bit_result_extraskill02"*/);
    sub_1B885B0(&StringLiteral_17289/*"bit_result_nobledeliverance"*/);
    sub_1B885B0(&StringLiteral_12228/*"START_ANIMATION"*/);
    sub_1B885B0(&StringLiteral_17277/*"bit_result_command_card_exceed"*/);
    sub_1B885B0(&StringLiteral_17286/*"bit_result_limitbreak"*/);
    sub_1B885B0(&StringLiteral_17281/*"bit_result_friendship_exceed"*/);
    sub_1B885B0(&StringLiteral_11324/*"ResMaxLvExceedNodeName"*/);
    sub_1B885B0(&StringLiteral_17294/*"bit_result_skillrank"*/);
    sub_1B885B0(&StringLiteral_17275/*"bit_result_advent02"*/);
    sub_1B885B0(&StringLiteral_17284/*"bit_result_grail_02"*/);
    sub_1B885B0(&StringLiteral_17295/*"bit_result_skillup"*/);
    sub_1B885B0(&StringLiteral_4922/*"CrtMaxLvExceedNodeName"*/);
    sub_1B885B0(&StringLiteral_17290/*"bit_result_powerup"*/);
    sub_1B885B0(&StringLiteral_12947/*"StartAnimationName"*/);
    sub_1B885B0(&StringLiteral_17283/*"bit_result_grail_01"*/);
    sub_1B885B0(&StringLiteral_17274/*"bit_result_advent01"*/);
    sub_1B885B0(&StringLiteral_17279/*"bit_result_extraskill01"*/);
    sub_1B885B0(&StringLiteral_17293/*"bit_result_skilldeliverance"*/);
    sub_1B885B0(&StringLiteral_17296/*"bit_result_skinchange01"*/);
    sub_1B885B0(&StringLiteral_4923/*"CrtMaxLvNodeName"*/);
    sub_1B885B0(&StringLiteral_11325/*"ResMaxLvNodeName"*/);
    sub_1B885B0(&StringLiteral_13095/*"SvtEqCardScale"*/);
    byte_4A5EA12 = 1;
  }
  v101 = 0LL;
  v100 = 0LL;
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
      v49 = this->fields.resUsrSvtData;
      if ( !v49 )
        goto LABEL_182;
      if ( baseUsrSvtData->fields.exp != v49->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_175;
      }
LABEL_86:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_182;
      v51 = this->fields.successInfo - 1;
      if ( v51 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v51];
LABEL_175:
        resUsrSvtData = this->fields.fsm;
        if ( resUsrSvtData )
        {
          v96 = *p_LimitAnimName;
          resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
          if ( resUsrSvtData )
          {
            resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                              (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                              0LL);
            if ( resUsrSvtData )
            {
              *((_QWORD *)resUsrSvtData + 7) = v96;
              sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56), (int32_t)v96, v97, v98);
              CombineResultEffectComponent__SetLevelUpSvtFigure(this, v99);
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
        sub_1B8880C(resUsrSvtData, method);
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
                        (System_String_o *)StringLiteral_4923/*"CrtMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v5 = (System_String_o *)resUsrSvtData;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(transform, v5, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_182;
      v7 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v101) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v101 + 4, 0LL);
      if ( !v7 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v7, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11325/*"ResMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v8 = (System_String_o *)resUsrSvtData;
      v9 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v9, v8, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      v10 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v101) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v101, 0LL);
      if ( !v10 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v10, (System_String_o *)resUsrSvtData, 0LL);
      v11 = this->fields.baseUsrSvtData;
      if ( !v11 )
        goto LABEL_182;
      v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v102.fields.currentCryptoKey = v13;
      *(_QWORD *)&v102.fields.fakeValue = v12;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v102, 0LL);
      v14 = this->fields.baseUsrSvtData;
      if ( !v14 )
        goto LABEL_182;
      v15 = (int)resUsrSvtData;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14->fields.limitCount, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      resUsrSvtData = (void *)ImageLimitCount__GetImageLimitCount(v15, v16, 0LL);
      v17 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)resUsrSvtData;
      if ( !v17 )
        goto LABEL_182;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v17->fields.svtId,
                                0LL);
      v18 = this->fields.resUsrSvtData;
      if ( !v18 )
        goto LABEL_182;
      v19 = (int)resUsrSvtData;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v19, v20, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      v25 = 0.0;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v26 = resSvtNameData != 0LL;
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
        CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v22);
        CombineResultEffectComponent__setBaseSvtGraphCard(this, v26, v44);
        CombineResultEffectComponent__setResultSvtGraphCard(this, v26, v45);
        v31 = &StringLiteral_17275/*"bit_result_advent02"*/;
LABEL_159:
        resUsrSvtData = this->fields.fsm;
        if ( !resUsrSvtData )
          goto LABEL_182;
        v90 = *v31;
        goto LABEL_161;
      }
      if ( this->fields.isLimitUpSuppression || !CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v22) )
      {
LABEL_27:
        v27 = 0LL;
        v28 = 0;
        v29 = 0;
        goto LABEL_28;
      }
      resUsrSvtData = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v93);
      if ( !resUsrSvtData )
        goto LABEL_182;
      if ( *((_DWORD *)resUsrSvtData + 6) )
      {
        v94 = *((_QWORD *)resUsrSvtData + 4);
        if ( !v94 )
          goto LABEL_182;
        v29 = *(_DWORD *)(v94 + 28);
        v28 = *(_DWORD *)(v94 + 56);
        FadeTime = ServantVoiceData__GetFadeTime(*((ServantVoiceData_o **)resUsrSvtData + 4), 0LL);
        v27 = *(_QWORD *)(v94 + 32);
        v25 = FadeTime;
LABEL_28:
        v30 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( v27 )
        {
          v31 = &StringLiteral_17274/*"bit_result_advent01"*/;
          if ( v30 != *(_DWORD *)(v27 + 24) || v30 <= 0 )
            goto LABEL_159;
        }
        else if ( v30 < 1 )
        {
          v31 = &StringLiteral_17274/*"bit_result_advent01"*/;
          goto LABEL_159;
        }
        v31 = &StringLiteral_17274/*"bit_result_advent01"*/;
        v46 = 0LL;
        if ( v30 <= 1 )
          v47 = 1LL;
        else
          v47 = (unsigned int)v30;
        while ( 1 )
        {
          resUsrSvtData = this->fields.currentFigureCollectList;
          if ( !resUsrSvtData )
            goto LABEL_182;
          resUsrSvtData = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)resUsrSvtData,
                            v46,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !resUsrSvtData )
            goto LABEL_182;
          resUsrSvtData = (void *)*((_QWORD *)resUsrSvtData + 3);
          if ( v27 )
          {
            if ( v46 >= *(unsigned int *)(v27 + 24) )
              goto LABEL_183;
            if ( !resUsrSvtData )
              goto LABEL_182;
            LODWORD(method) = *(_DWORD *)(v27 + 32 + 4 * v46);
          }
          else
          {
            method = (const MethodInfo *)v29;
            if ( !resUsrSvtData )
              goto LABEL_182;
          }
          UIStandFigureR__SetFace_41048928((UIStandFigureR_o *)resUsrSvtData, (int32_t)method, v28, 0LL, v25, 0LL);
          if ( v47 == ++v46 )
            goto LABEL_159;
        }
      }
      goto LABEL_183;
    case 2:
      v53 = 1;
      v54 = this;
      v55 = (System_String_o *)StringLiteral_17295/*"bit_result_skillup"*/;
      goto LABEL_92;
    case 3:
      v33 = &StringLiteral_17293/*"bit_result_skilldeliverance"*/;
      goto LABEL_91;
    case 4:
      v56 = 1;
      v57 = this;
      v58 = (System_String_o *)StringLiteral_17295/*"bit_result_skillup"*/;
      goto LABEL_96;
    case 5:
      v32 = &StringLiteral_17289/*"bit_result_nobledeliverance"*/;
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
                        (System_String_o *)StringLiteral_3182/*"BaseSvtNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v59 = (System_String_o *)resUsrSvtData;
      v60 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v60, v59, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_182;
      v61 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13095/*"SvtEqCardScale"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)resUsrSvtData, 0LL);
      if ( !v61 )
        goto LABEL_182;
      v63 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v61, 0LL);
      resUsrSvtData = CharaGraphManager__CreateTexturePrefab_37906304(
                        gameObject,
                        this->fields.resUsrSvtData,
                        10,
                        0LL,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v65 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v103.fields.z = 0.0;
      v103.fields.x = -50.0;
      v103.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)resUsrSvtData, v103, 0LL);
      resUsrSvtData = UnityEngine_Component__get_transform(v65, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v104.fields.x = v63;
      v104.fields.y = v63;
      v104.fields.z = v63;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)resUsrSvtData, v104, 0LL);
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
        v43 = (__int64 *)&this->fields.LimitAnimName;
      }
      else
      {
        v91 = this->fields.startAniName;
        if ( !v91 )
          goto LABEL_182;
        v92 = this->fields.successInfo - 1;
        if ( v92 >= v91->max_length )
LABEL_183:
          sub_1B88814(resUsrSvtData, method);
        v43 = (__int64 *)&v91->m_Items[v92];
      }
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
LABEL_157:
      v90 = *v43;
      goto LABEL_161;
    case 7:
    case 0x15:
      v33 = &StringLiteral_17294/*"bit_result_skillrank"*/;
LABEL_91:
      v55 = (System_String_o *)*v33;
      v54 = this;
      v53 = 0;
LABEL_92:
      CombineResultEffectComponent__SetCardParam_Skill(v54, v55, v53, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v32 = &StringLiteral_17294/*"bit_result_skillrank"*/;
LABEL_95:
      v58 = (System_String_o *)*v32;
      v57 = this;
      v56 = 0;
LABEL_96:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v57, v58, v56, v2);
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
                        (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v68 = &StringLiteral_17295/*"bit_result_skillup"*/;
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
                        (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v68 = &StringLiteral_17290/*"bit_result_powerup"*/;
LABEL_122:
      v69 = *v68;
      *((_QWORD *)resUsrSvtData + 7) = *v68;
      v70 = (ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56);
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
                        (System_String_o *)StringLiteral_4922/*"CrtMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v34 = (System_String_o *)resUsrSvtData;
      v35 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v35, v34, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_182;
      v36 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v100) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v100 + 4, 0LL);
      if ( !v36 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v36, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11324/*"ResMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v37 = (System_String_o *)resUsrSvtData;
      v38 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v38, v37, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      v39 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v100) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v100, 0LL);
      if ( !v39 )
        goto LABEL_182;
      UIExtrusionLabel__set_text(v39, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_182;
      if ( *((_DWORD *)resUsrSvtData + 74) )
        goto LABEL_53;
      v40 = this->fields.resUsrSvtData;
      if ( !v40 )
        goto LABEL_182;
      if ( v40->fields.exceedCount >= 1 )
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
        v42 = &StringLiteral_17286/*"bit_result_limitbreak"*/;
LABEL_144:
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v41);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v89);
        goto LABEL_145;
      }
      if ( this->fields.isChangeCardImg )
      {
        v42 = &StringLiteral_17284/*"bit_result_grail_02"*/;
        goto LABEL_144;
      }
      v42 = &StringLiteral_17283/*"bit_result_grail_01"*/;
LABEL_145:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v90 = *v42;
LABEL_161:
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      *((_QWORD *)resUsrSvtData + 7) = v90;
      v70 = (ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56);
      LODWORD(v69) = v90;
LABEL_164:
      sub_1B88554(v70, v69, v66, v67);
LABEL_165:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resUsrSvtData, (System_String_o *)StringLiteral_12228/*"START_ANIMATION"*/, 0LL);
      return;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v43 = &StringLiteral_17281/*"bit_result_friendship_exceed"*/;
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
                        (System_String_o *)StringLiteral_4783/*"CostumeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v71 = (System_String_o *)resUsrSvtData;
      v72 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v72, v71, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !resUsrSvtData )
        goto LABEL_182;
      UILabel__set_text((UILabel_o *)resUsrSvtData, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v73);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v74);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v75);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v43 = &StringLiteral_17296/*"bit_result_skinchange01"*/;
      goto LABEL_157;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v43 = &StringLiteral_17277/*"bit_result_command_card_exceed"*/;
      goto LABEL_157;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v76);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v77);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v78);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v43 = &StringLiteral_17273/*"bit_result_120"*/;
      goto LABEL_157;
    case 0x19:
      resUsrSvtData = this->fields.effect;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v79 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)resUsrSvtData,
              (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v80 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v80,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__116_0__,
        0LL);
      v81 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
      EventDelegate___ctor_46786736(v81, v80, 0LL);
      if ( !v79 )
        goto LABEL_182;
      resUsrSvtData = v79[2].klass;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v84 = *((_QWORD *)resUsrSvtData + 2);
      v85 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++*((_DWORD *)resUsrSvtData + 7);
      if ( !v84 )
        goto LABEL_182;
      v86 = *((int *)resUsrSvtData + 6);
      if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resUsrSvtData,
          (Il2CppObject *)v81,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = v84 + 8 * v86;
        *((_DWORD *)resUsrSvtData + 6) = v86 + 1;
        *(_QWORD *)(v87 + 32) = v81;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v87 + 32), (int32_t)v81, v82, v83);
      }
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v88);
      resUsrSvtData = this->fields.fsm;
      v43 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17280/*"bit_result_extraskill02"*/ : &StringLiteral_17279/*"bit_result_extraskill01"*/);
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
  int *effect; // x0
  Il2CppObject *v9; // x22
  EventDelegate_Callback_o *v10; // x23
  EventDelegate_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  __int64 v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5EA15 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__119_0__);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&StringLiteral_12228/*"START_ANIMATION"*/);
    sub_1B885B0(&StringLiteral_12947/*"StartAnimationName"*/);
    byte_4A5EA15 = 1;
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
    v9 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)effect,
           (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v10 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__119_0__,
      0LL);
    v11 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46786736(v11, v10, 0LL);
    if ( !v9
      || (effect = (int *)v9[2].klass) == 0LL
      || (v14 = *((_QWORD *)effect + 2),
          v15 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v14) )
    {
LABEL_17:
      sub_1B8880C(effect, v7);
    }
    v16 = effect[6];
    if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v11,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = v14 + 8 * v16;
      effect[6] = v16 + 1;
      *(_QWORD *)(v17 + 32) = v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v11, v12, v13);
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
                    (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                    0LL);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(effect + 14), (int32_t)startName, v18, v19);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12228/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetCardParam_TreasureDvc(
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
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x8
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5EA16 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__120_0__);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&StringLiteral_12228/*"START_ANIMATION"*/);
    sub_1B885B0(&StringLiteral_12947/*"StartAnimationName"*/);
    byte_4A5EA16 = 1;
  }
  if ( isSkip )
  {
    effect = (int *)this->fields.effect;
    if ( !effect )
      goto LABEL_20;
    effect = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL);
    if ( !effect )
      goto LABEL_20;
    v8 = UnityEngine_GameObject__AddComponent_object_(
           (UnityEngine_GameObject_o *)effect,
           (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v9 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__120_0__,
      0LL);
    v10 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46786736(v10, v9, 0LL);
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
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = v13 + 8 * v15;
      effect[6] = v15 + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
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
                          (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                          0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(effect + 14), (int32_t)startName, v17, v18),
        (effect = (int *)this->fields.fsm) == 0LL) )
  {
LABEL_20:
    sub_1B8880C(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12228/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetCombineLimit(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        bool autoFadeout,
        const MethodInfo *method)
{
  int32_t v9; // w2
  char v10; // w3
  int32_t v11; // w2
  char v12; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  CombineRootComponent_c *v15; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4A5EA0D & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__SetCombineLimit_b__111_0__);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EA0D = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)callback,
    autoFadeout);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(gameObject, v14);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v15 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v15 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v15->static_fields->EXCEED_ASSET_PATH;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__111_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v17, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__SetCommandCardExceedInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  AssetData_o *effectAssetData; // x0
  __int64 v16; // x1
  CombineRootComponent_c *v17; // x0
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_Transform_o *v20; // x21

  if ( (byte_4A5EA07 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17277/*"bit_result_command_card_exceed"*/);
    sub_1B885B0(&StringLiteral_11354/*"ResultEffect"*/);
    sub_1B885B0(&StringLiteral_12233/*"START_COMMAND_CARD_EXCEED_EFFECT"*/);
    byte_4A5EA07 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    cardIndex,
    exceedCount);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  if ( !userServantEntity )
    goto LABEL_18;
  this->fields.displayCount = UserServantEntity__GetTransformCount(userServantEntity, 0, 0LL);
  v17 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v17 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v17->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_18;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17277/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48635516,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v19 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v20 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE6 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11354/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v19,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(effectAssetData, v16);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12233/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetCostumeCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t costumeId,
        System_String_o *costumeName,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v17; // x20
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1

  if ( (byte_4A5EA01 & 1) == 0 )
  {
    sub_1B885B0(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12237/*"START_COSTUME_EFFECT"*/);
    byte_4A5EA01 = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    costumeId,
    (int32_t)costumeName);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeName, (int32_t)costumeName, v11, v12);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v15, v16);
  this->fields.setResUsrSvtData = 0;
  v17 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1B887FC(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v17, v18);
  this->fields.costumeSkillInfoManager = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v17, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B8880C(gameObject, v22);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12237/*"START_COSTUME_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  CombineRootComponent_c *v12; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Transform_o *v16; // x21

  if ( (byte_4A5EA05 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17281/*"bit_result_friendship_exceed"*/);
    sub_1B885B0(&StringLiteral_11354/*"ResultEffect"*/);
    sub_1B885B0(&StringLiteral_12240/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4A5EA05 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v7, v8);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
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
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17281/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48635516,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v15 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v16 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE6 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11354/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v15,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(effectAssetData, v11);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12240/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  CombineRootComponent_c *v15; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4A5EA06 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__104_0__);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EA06 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    oldFriendShipRank,
    (int32_t)callback);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v14);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v15 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v15 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v15->static_fields->COMBINE_ASSET_PATH;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__104_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v17, 1, 0LL);
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

  if ( (byte_4A5E9FB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12239/*"START_FRIENDSHIPUP_EFFECT"*/);
    byte_4A5E9FB = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    oldFriendShipRank,
    (int32_t)callback);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B8880C(gameObject, v14);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12239/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLevelUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_o *v2; // x19
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  ServantScriptEntity_o *Entity_39736036; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct ServantVoiceData_array *v15; // x1
  ServantStatusBattleListViewItem_o *p_playVoiceList; // x0
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
  int32_t v27; // w3
  System_String_o *v28; // x0
  const MethodInfo *v29; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v31; // x21
  const MethodInfo *v32; // x2
  struct UserServantEntity_o *v33; // x8
  CombineResultEffectComponent_o *v34; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x0
  const MethodInfo *v39; // x2
  ServantVoiceEntity_o *v40; // x20
  UserServantEntity_o *v41; // x21
  ServantVoiceData_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  ServantVoiceData_array *v45; // x0
  int v46; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v2 = this;
  if ( (byte_4A5EA1C & 1) == 0 )
  {
    sub_1B885B0(&CombineResultFormManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantScriptMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1B885B0(&string___TypeInfo);
    byte_4A5EA1C = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v47, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_48;
  v6 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v6, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_39736036 = ServantScriptMaster__GetEntity_39736036((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_39736036 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_39736036, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v2->fields.combineVoiceId;
      method = (const MethodInfo *)v2->fields.baseUsrSvtData;
LABEL_19:
      v12 = ServantVoiceEntity__lotteryLevelUpVoice_39775156(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0LL);
LABEL_20:
      v15 = v12;
      p_playVoiceList = (ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList;
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
        if ( System_Int32__Equals_62512140((int32_t)&v46, resUsrSvtData->fields.lv, 0LL) )
        {
          v21 = v2;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v21, form, 1, v17);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1B88658(string___TypeInfo, 1LL);
        v23 = v2->fields.baseUsrSvtData;
        if ( v23 )
        {
          v24 = this;
          p_svtId = &v23->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v48.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v48, v22);
          if ( v24 )
          {
            if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v24->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->fields.svtResultInfoWindow, (int32_t)this, v26, v27);
            v28 = System_String__Concat_61720560((System_String_array *)v24, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_69417088(v28, 0LL) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v31 = v2->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v12 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v31, v29);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1B88658(string___TypeInfo, 1LL);
            v33 = v2->fields.baseUsrSvtData;
            if ( v33 )
            {
              v34 = this;
              v35 = &v33->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v49.fields.currentCryptoKey = v35;
              *(_QWORD *)&v49.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v49, v32);
              if ( v34 )
              {
                if ( !LODWORD(v34->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v34->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&v34->fields.svtResultInfoWindow,
                  (int32_t)this,
                  v36,
                  v37);
                v38 = System_String__Concat_61720560((System_String_array *)v34, 0LL);
                UnityEngine_PlayerPrefs__SetInt(v38, 1, 0LL);
                v40 = v2->fields.svtVoiceEntity;
                v41 = v2->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v42 = CombineResultFormManager__lotteryCombineResultInit(v40, v41, v39);
                v2->fields.playVoiceList = v42;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList, (int32_t)v42, v43, v44);
                playVoiceList = v2->fields.playVoiceList;
                if ( playVoiceList )
                {
LABEL_22:
                  if ( playVoiceList->max_length )
                  {
                    v19 = playVoiceList->m_Items[0];
                    if ( !v19 )
                      goto LABEL_48;
                    form = v19->fields.form;
                    v21 = v2;
                    goto LABEL_25;
                  }
LABEL_49:
                  sub_1B88814(this, method);
                }
                this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v45 = ServantVoiceEntity__lotteryLevelUpVoice_39775156(
                        (ServantVoiceEntity_o *)this,
                        v2->fields.baseUsrSvtData,
                        v2->fields.combineVoiceId,
                        0LL);
                LODWORD(v15) = (_DWORD)v45;
                v2->fields.playVoiceList = v45;
                p_playVoiceList = (ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList;
LABEL_21:
                sub_1B88554(p_playVoiceList, (int32_t)v15, v13, v14);
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
    sub_1B8880C(this, method);
  }
}


void __fastcall CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
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
  int32_t ImageLimitCount; // w0
  const MethodInfo *v17; // x5
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A5EA22 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_8407/*"LimitUpResSvtNodeName"*/);
    byte_4A5EA22 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = (DataManager_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v7 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.m_CancellationTokenSource) )
      sub_1B88814(LimitUpSvtVoiceList, v6);
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
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  LimitUpSvtVoiceList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
  v12 = this->fields.resUsrSvtData;
  if ( !v12 )
    goto LABEL_21;
  v13 = (int)LimitUpSvtVoiceList;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = (DataManager_o *)DataManager__GetMasterData_object_(
                                           LimitUpSvtVoiceList,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v13, v14, 0LL) )
    goto LABEL_18;
  LimitUpSvtVoiceList = (DataManager_o *)entity;
  if ( !entity )
LABEL_21:
    sub_1B8880C(LimitUpSvtVoiceList, v6);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v14 = LimitCountUpResultServantLimitCount;
LABEL_18:
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v13, v14, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v13,
    ImageLimitCount,
    v7,
    (System_String_o *)StringLiteral_8407/*"LimitUpResSvtNodeName"*/,
    v17);
}


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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 v31; // x21
  __int64 v32; // x22
  int32_t v33; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v35; // x8
  ServantLimitImageMaster_o *v36; // x20
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_4A5E9FF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12243/*"START_LIMITUP_EFFECT"*/);
    byte_4A5E9FF = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    baseCollectionLimitCnt);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resSvtNameData, (int32_t)servantChange, v19, v20);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.limitUpPlayVoiceLabel,
    (int32_t)playVoiceLabel,
    v25,
    v26);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.limitUpRewardGiftDataList,
    (int32_t)rewardGiftDataList,
    v27,
    v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_13;
  v32 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v32;
  *(_QWORD *)&v39.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v35 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v36 = (ServantLimitImageMaster_o *)MasterData_object;
  *(_QWORD *)&v40.fields.currentCryptoKey = v35;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
  if ( !v36
    || (gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v36,
                                                   (int32_t)gameObject,
                                                   v33 + 1,
                                                   0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = (unsigned __int8)gameObject & 1,
        !fsm) )
  {
LABEL_13:
    sub_1B8880C(gameObject, v30);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12243/*"START_LIMITUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLvExceedCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 Int_69417088; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1
  UserServantEntity_o *v27; // x20
  CombineRootComponent_c *v28; // x0
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *v30; // x20
  UnityEngine_Transform_o *v31; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A5EA03 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&CombineResultFormManager_TypeInfo);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_12244/*"START_LVEXCEED_EFFECT"*/);
    sub_1B885B0(&StringLiteral_17282/*"bit_result_grail"*/);
    sub_1B885B0(&StringLiteral_11354/*"ResultEffect"*/);
    byte_4A5EA03 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v8, v9);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  Int_69417088 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v15 = Int_69417088;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v32.fields.fakeValue = 0LL;
  Int_69417088 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v32, v14);
  if ( !v15 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v15 + 32) = Int_69417088;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 32), Int_69417088, v17, v18);
  v19 = System_String__Concat_61720560((System_String_array *)v15, 0LL);
  Int_69417088 = UnityEngine_PlayerPrefs__GetInt_69417088(v19, 0LL);
  if ( (_DWORD)Int_69417088 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_69417088 = sub_1B88658(string___TypeInfo, 1LL);
      if ( *p_baseUsrSvtData )
      {
        v21 = Int_69417088;
        v22 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v33.fields.currentCryptoKey = v22;
        *(_QWORD *)&v33.fields.fakeValue = 0LL;
        Int_69417088 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v33, v20);
        if ( v21 )
        {
          if ( *(_DWORD *)(v21 + 24) )
          {
            *(_QWORD *)(v21 + 32) = Int_69417088;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), Int_69417088, v23, v24);
            v25 = System_String__Concat_61720560((System_String_array *)v21, 0LL);
            UnityEngine_PlayerPrefs__SetInt(v25, 0, 0LL);
            v27 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v27, v26);
            goto LABEL_19;
          }
LABEL_34:
          sub_1B88814(Int_69417088, v13);
        }
      }
LABEL_33:
      sub_1B8880C(Int_69417088, v13);
    }
  }
LABEL_19:
  v28 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v28 = CombineRootComponent_TypeInfo;
  }
  Int_69417088 = (__int64)v28->static_fields->effectAssetData;
  if ( !Int_69417088 )
    goto LABEL_33;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              (AssetData_o *)Int_69417088,
                              (System_String_o *)StringLiteral_17282/*"bit_result_grail"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_69417088 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__48635516,
                            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_69417088 )
    goto LABEL_33;
  v30 = (UnityEngine_GameObject_o *)Int_69417088;
  Int_69417088 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_69417088, 0LL);
  v31 = (UnityEngine_Transform_o *)Int_69417088;
  if ( !byte_4A55CE6 )
  {
    Int_69417088 = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v31 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Int_69417088 = (__int64)this->fields.fsm;
  if ( !Int_69417088 )
    goto LABEL_33;
  Int_69417088 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_69417088, 0LL);
  if ( !Int_69417088 )
    goto LABEL_33;
  Int_69417088 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_69417088,
                            (System_String_o *)StringLiteral_11354/*"ResultEffect"*/,
                            0LL);
  if ( !Int_69417088 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_69417088, v30, 0LL);
  Int_69417088 = (__int64)this->fields.fsm;
  if ( !Int_69417088 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_69417088, (System_String_o *)StringLiteral_12244/*"START_LVEXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLvExceedInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  CombineRootComponent_c *v13; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21

  if ( (byte_4A5EA04 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__102_0__);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EA04 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v13 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v13 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v13->static_fields->EXCEED_ASSET_PATH;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__102_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v15, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__SetNameRevealInfo(
        CombineResultEffectComponent_o *this,
        ServantChangeEntity_o *before,
        ServantChangeEntity_o *after,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
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
  const MethodInfo *v27; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v29; // x4
  struct ServantChangeEntity_o *v30; // x8
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  UnityEngine_ParticleSystem_MinMaxCurve_o v35; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v36; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v37; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v39; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v40; // 0:x0.8
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EA00 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11326/*"ResNameNodeName"*/);
    sub_1B885B0(&StringLiteral_12245/*"START_NAME_REVEAL_EFFECT"*/);
    sub_1B885B0(&StringLiteral_9355/*"NameRevealCrossFade"*/);
    sub_1B885B0(&StringLiteral_4924/*"CrtNameNodeName"*/);
    sub_1B885B0(&StringLiteral_17287/*"bit_result_name_reveal"*/);
    sub_1B885B0(&StringLiteral_12947/*"StartAnimationName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_9356/*"NameRevealParticleNodeName"*/);
    byte_4A5EA00 = 1;
  }
  v37 = 0LL;
  m_ParticleSystem = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (int32_t)after,
    (int32_t)callback);
  this->fields.resSvtNameData = after;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resSvtNameData, (int32_t)after, v10, v11);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12245/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4924/*"CrtNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v18 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v18, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11326/*"ResNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v20 = (System_String_o *)gameObject;
  v21 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v21, v20, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v22 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9356/*"NameRevealParticleNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v23 = (System_String_o *)gameObject;
  v24 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v24, v23, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v25 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v37 = UnityEngine_ParticleSystem__get_shape(v25, 0LL).fields.m_ParticleSystem;
  v26 = (float)((float)v22[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v36, 0, sizeof(v36));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v36, v26, 0LL);
  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v35 = v36;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v39, &v35, 0LL);
  v41.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v37;
  v41.fields.x = (float)((float)v22[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v41.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v40, v41, 0LL);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v27);
  v30 = this->fields.crtSvtNameData;
  if ( !v30 )
    goto LABEL_40;
  v31 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v30->fields.svtId, v30->fields.limitCount, v31, v29);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_1B8880C(gameObject, v15);
  }
  v34 = StringLiteral_17287/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17287/*"bit_result_name_reveal"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(gameObject + 56), v34, v32, v33);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9355/*"NameRevealCrossFade"*/,
    this->fields.NAME_REVEAL_INVOKE_TIME,
    0LL);
}


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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
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
  int32_t v31; // w3
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

  if ( (byte_4A5E9FA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12246/*"START_NOBLEUP_EFFECT"*/);
    sub_1B885B0(&StringLiteral_13434/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/);
    sub_1B885B0(&StringLiteral_13435/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/);
    byte_4A5E9FA = 1;
  }
  v65 = 0LL;
  tdInfo = 0LL;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    targetId);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v23 = Master_object;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v25;
  *(_QWORD *)&v67.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v67, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                        usrSvtData->fields.limitCount,
                                                        0LL);
  if ( !v23 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v23, v26, (int32_t)Master_object, 0, 0, 0LL);
  v28 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1B887FC(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v28, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.npInfoAddManager, (int32_t)v28, v30, v31);
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
      v32 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v35 = (ServantTreasureDeviceAddMaster_o *)v32;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v68.fields.currentCryptoKey = v34;
      *(_QWORD *)&v68.fields.fakeValue = v33;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v68, 0LL);
      v37 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v69.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v38 = v36;
      *(_QWORD *)&v69.fields.currentCryptoKey = v37;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v69, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC0 = 1;
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
                                       0LL);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        if ( EnableEntityBeforeClearQuest )
        {
          v41 = 8LL;
          while ( 1 )
          {
            treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
            if ( !treasureDeviceIds )
              break;
            if ( v41 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&treasureDeviceIds->obj.klass + v41),
              targetLv,
              0,
              0LL);
            v43 = EnableEntity->fields.treasureDeviceIds;
            if ( !v43 )
              break;
            if ( v41 - 8 >= (unsigned __int64)v43->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&v43->obj.klass + v41),
              targetLv,
              0,
              0LL);
            Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                  (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
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
                                                            (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        v59 = 8LL;
        while ( 1 )
        {
          v60 = EnableEntity->fields.treasureDeviceIds;
          if ( !v60 )
            break;
          if ( v59 - 8 >= (unsigned __int64)v60->max_length )
            goto LABEL_73;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v60->obj.klass + v59),
            targetLvOld,
            0,
            0LL);
          v61 = EnableEntity->fields.treasureDeviceIds;
          if ( !v61 )
            break;
          if ( v59 - 8 >= (unsigned __int64)v61->max_length )
LABEL_73:
            sub_1B88814(Master_object, v22);
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v61->obj.klass + v59),
            targetLv,
            0,
            0LL);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
          v62 = v59 - 7;
          ++v59;
          if ( v62 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1B8880C(Master_object, v22);
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
                                                              0LL);
        if ( kind == 8 )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A57DC0 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57DC0 = 1;
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
                                                                0LL);
          if ( !v65 )
            goto LABEL_72;
          v49 = *p_npInfoAddManager;
          id = v65->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
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
                                                                0LL);
          if ( !v55 )
            goto LABEL_72;
          v51 = (int)Master_object;
          v52 = v55;
          v53 = v56;
          v54 = targetLvOld;
        }
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(v52, v53, v54, v51, 0LL);
        if ( !tdInfo )
          goto LABEL_72;
        v57 = *p_npInfoAddManager;
        v58 = tdInfo->fields.id;
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                              usrSvtData,
                                                              i,
                                                              0LL);
        if ( !v57 )
          goto LABEL_72;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          v57,
          v58,
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
                                                        (System_String_o *)StringLiteral_13434/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0LL);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13435/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0LL);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12246/*"START_NOBLEUP_EFFECT"*/, 0LL);
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

  if ( (byte_4A5EA02 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12249/*"START_POWERUP_EFFECT"*/);
    byte_4A5EA02 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B8880C(gameObject, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12249/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
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

  if ( (byte_4A5EA14 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EA14 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v14 = CardImageLimitCount;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        goto LABEL_31;
      }
LABEL_32:
      sub_1B8880C(Instance, v5);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
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
LABEL_31:
  CombineResultEffectComponent__getSvtVoiceData(v11, voiceSvtId, LimitCountByImageLimitCostumeIn, v10, v6);
  CombineResultEffectComponent__loadVoiceData(this, v15);
}


void __fastcall CombineResultEffectComponent__SetResultUserServantData(
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
  struct UserServantEntity_o *v16; // x8
  __int64 v17; // x21
  __int64 v18; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserServantEntity_o *v23; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v24; // x24
  __int64 v25; // x21
  __int64 v26; // x22
  int32_t v27; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr00_16
  struct UserServantEntity_o *v29; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v31; // x21
  int32_t v32; // w22
  CombineResultEffectComponent_o *v33; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x8
  UserServantEntity_o *v35; // x20
  UserServantEntity_o *v36; // x21
  ServantStatusBattleListViewItem_o *p_resUsrSvtData; // x19
  int32_t v38; // w2
  int32_t v39; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
  void *typeMetadataHandle; // x19
  void *generic_class; // x20
  int32_t v43; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v2 = this;
  if ( (byte_4A5EA13 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CombineResultEffectComponent_o *)sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5EA13 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_46;
    v4 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v47.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v46 = v47;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v46, 0LL) < 1 )
    {
      v35 = v2->fields.baseUsrSvtData;
      v36 = (UserServantEntity_o *)sub_1B887FC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_40192384(v36, v35, 0LL);
      v2->fields.resUsrSvtData = v36;
      p_resUsrSvtData = (ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData;
      sub_1B88554(p_resUsrSvtData, (int32_t)v36, v38, v39);
      if ( (p_resUsrSvtData[-1].fields.dispLimitCount.fields.fakeValue | 0x10) != 26 )
        return;
      klass = p_resUsrSvtData->klass;
      if ( p_resUsrSvtData->klass )
      {
        generic_class = klass->_1.generic_class;
        typeMetadataHandle = klass->_1.typeMetadataHandle;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = generic_class;
        *(_QWORD *)&v51.fields.fakeValue = typeMetadataHandle;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&klass->_1.generic_class = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                                         v43 + 1,
                                                                                         0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v5 = v2->fields.baseUsrSvtData;
        if ( v5 )
        {
          v6 = *(_OWORD *)&v5->fields.id.fields.fakeValue;
          v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
          *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v5->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v47.fields.fakeValue = v6;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v45 = v47;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                     &v45,
                                                     0LL);
          if ( v7 )
          {
            v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v7,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v9 = v2->fields.baseUsrSvtData;
              if ( !v9 )
                goto LABEL_46;
              v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
              v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
              *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v47.fields.fakeValue = v10;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v44 = v47;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                         &v44,
                                                         0LL);
              if ( !v11 )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v11,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v12 = v2->fields.baseUsrSvtData;
                v13 = (UserServantEntity_o *)sub_1B887FC(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_40192384(v13, v12, 0LL);
                v2->fields.resUsrSvtData = v13;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData, (int32_t)v13, v14, v15);
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
              *(_QWORD *)&v49.fields.currentCryptoKey = v18;
              *(_QWORD *)&v49.fields.fakeValue = v17;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                         v49,
                                                         0LL);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v20 = (UserServantEntity_o *)sub_1B887FC(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_40192384(v20, resUsrSvtData, 0LL);
                v2->fields.resUsrSvtData = v20;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData, (int32_t)v20, v21, v22);
                v23 = v2->fields.baseUsrSvtData;
                if ( v23 )
                {
                  v24 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                  v26 = *(_QWORD *)&v23->fields.limitCount.fields.currentCryptoKey;
                  v25 = *(_QWORD *)&v23->fields.limitCount.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v50.fields.currentCryptoKey = v26;
                  *(_QWORD *)&v50.fields.fakeValue = v25;
                  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50, 0LL);
                  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v27 + 1, 0LL);
                  method = *(const MethodInfo **)&v28.fields.fakeValue;
                  this = *(CombineResultEffectComponent_o **)&v28.fields.currentCryptoKey;
                  if ( v24 )
                  {
                    v24[6] = v28;
                    v29 = v2->fields.baseUsrSvtData;
                    if ( v29 )
                    {
                      hp = v29->fields.hp;
                      afterAtk[0] = v29->fields.atk;
                      afterAtk[1] = hp;
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v8 )
                        {
                          v31 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                     (*v8)[5],
                                                                     0LL);
                          if ( *v8 )
                          {
                            v32 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                       (*v8)[6],
                                                                       0LL);
                            if ( v31 )
                            {
                              this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                         v31,
                                                                         v32,
                                                                         (int32_t)this,
                                                                         0LL);
                              if ( this )
                              {
                                v33 = this;
                                this = (CombineResultEffectComponent_o *)v2->fields.combineResStatus;
                                if ( this )
                                {
                                  CheckCombineResStatus__getCombineResStatus(
                                    (CheckCombineResStatus_o *)this,
                                    &afterAtk[1],
                                    afterAtk,
                                    v2->fields.resUsrSvtData,
                                    HIDWORD(v33->fields.m_CancellationTokenSource),
                                    0LL);
                                  v34 = *v8;
                                  if ( *v8 )
                                  {
                                    *(_DWORD *)&v34[16].fields.inited = afterAtk[1];
                                    v34[16].fields.fakeValue = afterAtk[0];
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
    sub_1B8880C(this, method);
  }
}


void __fastcall CombineResultEffectComponent__SetSecretTreasureDeviceInfoForQuestClear(
        CombineResultEffectComponent_o *this,
        int32_t questId,
        int32_t phase,
        CombineResultEffectComponent_MessageDelegate_o *msgCallBack,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  void *Instance; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *v15; // x26
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w27
  Il2CppObject *v18; // x28
  __int64 methodPtr_low; // x10
  int v20; // w8
  int v21; // w8
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x24
  Il2CppObject *v29; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // w20
  BalanceConfig_c *v34; // x0
  TerminalSceneComponent_c *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  int32_t v41; // w24
  const MethodInfo *v42; // x2
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-78h]
  struct CombineResultEffectComponent_MessageDelegate_o *v44; // [xsp+18h] [xbp-68h]

  if ( (byte_4A5EA08 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_1B885B0(&ServantTreasureDvcEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__106_0__);
    sub_1B885B0(&CombineResultEffectComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_12250/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1B885B0(&StringLiteral_17297/*"bit_result_ultimate_anim"*/);
    sub_1B885B0(&StringLiteral_12947/*"StartAnimationName"*/);
    byte_4A5EA08 = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    phase,
    (int32_t)msgCallBack);
  this->fields.messageCallback = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, 0, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v44 = msgCallBack;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_59;
  v15 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 4);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v15 )
    goto LABEL_59;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v15,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v15,
                   v17,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v18 = (Il2CppObject *)Instance;
      methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      v20 = *((_DWORD *)Instance + 9);
      if ( v20 >= 1 && v20 == questId )
      {
        v21 = *((_DWORD *)Instance + 10);
        if ( v21 < 1 || v21 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v25 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v18,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v18;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v18, v22, v23);
            }
          }
        }
      }
      if ( ++v17 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v15,
                      (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_22;
    }
LABEL_59:
    sub_1B8880C(Instance, v14);
  }
LABEL_22:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v28 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    System_Comparison_object____ctor(
      v28,
      v29,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__106_0__,
      0LL);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)v28, v31, v32);
  }
  if ( !v16 )
    goto LABEL_59;
  System_Collections_Generic_List_object___Sort_55571192(
    v16,
    v28,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v33 = v16->fields._size;
  if ( v33 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v16,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_59;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v34 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  if ( !v34->static_fields->CloseSecretTreasureDeviceQuestClear && v16->fields._size >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v16,
                   v41,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_59;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v42) )
        break;
      if ( ++v41 >= v16->fields._size )
        goto LABEL_35;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v16,
                 v41,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_59;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_35:
  if ( v33 < 1 )
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
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    v35 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v35 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v35->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_59;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
    this->fields.messageCallback = v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, (int32_t)v44, v36, v37);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_59;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_59;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                 0LL);
    if ( !Instance )
      goto LABEL_59;
    v40 = StringLiteral_17297/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17297/*"bit_result_ultimate_anim"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)Instance + 56), v40, v38, v39);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_59;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12250/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__SetSecretTreasureDeviceInfoForSvtGet(
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
  int32_t v13; // w3
  int32_t v14; // w1

  if ( (byte_4A5EA09 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&StringLiteral_12250/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/);
    sub_1B885B0(&StringLiteral_17297/*"bit_result_ultimate_anim"*/);
    sub_1B885B0(&StringLiteral_12947/*"StartAnimationName"*/);
    byte_4A5EA09 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
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
                          (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v14 = StringLiteral_17297/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17297/*"bit_result_ultimate_anim"*/,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(fsm + 56), v14, v12, v13),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_1B8880C(fsm, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12250/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
  }
}


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
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_4A5E9F9 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12252/*"START_SKILLUP_EFFECT"*/);
    sub_1B885B0(&StringLiteral_12145/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/);
    sub_1B885B0(&StringLiteral_12146/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/);
    byte_4A5E9F9 = 1;
  }
  this->fields.baseUsrSvtData = usrSvtData;
  this->fields.kind = kind;
  sub_1B88554(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(gameObject, v20);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12252/*"START_SKILLUP_EFFECT"*/, 0LL);
}


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

  if ( (byte_4A5EA2F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4A5EA2F = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_41048928(Item, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_1B8880C(Item, v14);
  }
  v15 = this->fields.playVoiceList;
  if ( !v15 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v15->max_length )
LABEL_23:
    sub_1B88814(Item, v14);
  v17 = v15->m_Items[playCnt];
  if ( !v17 )
    goto LABEL_25;
  multiFace = v17->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v17->fields.multiForm;
    if ( multiForm )
    {
      if ( (_DWORD)Item == (unsigned int)*(_QWORD *)&multiFace->max_length && (_DWORD)Item == multiForm->max_length )
      {
        if ( (unsigned int)*(_QWORD *)&multiFace->max_length )
        {
          v20 = 0LL;
          v21 = (unsigned int)Item - 1LL;
          do
          {
            if ( v20 >= multiForm->max_length )
              break;
            if ( !standFigureCollects )
              goto LABEL_25;
            v22 = multiFace->m_Items[v20 + 1];
            v23 = multiForm->m_Items[v20 + 1];
            Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)standFigureCollects,
                                         v20,
                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_41048928(Item, v22, v23, 0LL, fadeTime, 0LL);
            if ( v21 == v20 )
              return;
            ++v20;
          }
          while ( v20 < multiFace->max_length );
        }
        goto LABEL_23;
      }
    }
  }
}


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

  if ( (byte_4A5E9FC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12254/*"START_SVTCOMBINE_EFFECT"*/);
    byte_4A5E9FC = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (int32_t)baseData);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineVoiceId, 0, v15, v16);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B8880C(gameObject, v20);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12254/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_44938024(
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

  if ( (byte_4A5E9FD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12254/*"START_SVTCOMBINE_EFFECT"*/);
    byte_4A5E9FD = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (int32_t)baseData);
  this->fields.resUsrSvtData = resData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v19, v20);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_7;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineVoiceId, (int32_t)voiceId, v23, v24);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v25, v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_1B8880C(gameObject, v22);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12254/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


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

  if ( (byte_4A5E9FE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12254/*"START_SVTCOMBINE_EFFECT"*/);
    byte_4A5E9FE = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, infoIdx, normalExp);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B8880C(gameObject, v22);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12254/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21

  if ( (byte_4A5EA35 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__153_0__);
    byte_4A5EA35 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__153_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_1B8880C(bgCollider, method);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowNpChangeInfo(
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

  if ( (byte_4A5EA33 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__151_0__);
    byte_4A5EA33 = 1;
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
    sub_1B88814(bgCollider, *(_QWORD *)&index);
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
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__151_0__, 0LL);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1B8880C(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    index,
    titleText,
    kind == 8,
    v12,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowSkillChangeInfo(
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

  if ( (byte_4A5EA34 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__152_0__);
    byte_4A5EA34 = 1;
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
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__152_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1B8880C(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v12,
    v13,
    v9,
    v10,
    costumeName,
    v15,
    0LL);
}


void __fastcall CombineResultEffectComponent__ShowSkillChangeMessage(
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

  if ( (byte_4A5EA32 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__150_0__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EA32 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
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
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1B8880C(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v8, v9, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(
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

  if ( (byte_4A5EA36 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__155_0__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA36 = 1;
  }
  v16 = 0LL;
  tdInfo = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
  if ( !v6 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v6,
             bgCollider,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_14;
  bgCollider = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v16, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v16
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v11 = v16->fields.id,
        v12 = v16->fields.lv,
        v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__155_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1B8880C(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v11, v12, v13, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__171_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5EA50 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_1__);
    byte_4A5EA50 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_1B8880C(v5, v6);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__146_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5EA4E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_5476/*"END_LOAD"*/);
    byte_4A5EA4E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_1B8880C(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5476/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__156_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5EA4F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__EndPlay_b__156_2__);
    byte_4A5EA4F = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__156_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_1B8880C(v5, v6);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v4, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__165_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5EA4B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5476/*"END_LOAD"*/);
    byte_4A5EA4B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5476/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___SetAppendSkillCombineInfo_b__108_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4A5EA49 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12244/*"START_LVEXCEED_EFFECT"*/);
    sub_1B885B0(&StringLiteral_17278/*"bit_result_extraskill"*/);
    sub_1B885B0(&StringLiteral_11354/*"ResultEffect"*/);
    byte_4A5EA49 = 1;
  }
  if ( data )
  {
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                data,
                                (System_String_o *)StringLiteral_17278/*"bit_result_extraskill"*/,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48635516,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11354/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B8880C(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12244/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetCombineLimit_b__111_0(
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
  System_String_o *v11; // x0
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *v14; // x21

  if ( (byte_4A5EA4A & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_11354/*"ResultEffect"*/);
    sub_1B885B0(&StringLiteral_12232/*"START_COMBINE_LIMIT"*/);
    sub_1B885B0(&StringLiteral_17272/*"bit_result_"*/);
    byte_4A5EA4A = 1;
  }
  if ( data )
  {
    v5 = sub_1B88658(string___TypeInfo, 1LL);
    v6 = System_Int32__ToString((int)this + 328, 0LL);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_61707032(
                                              (System_String_o *)StringLiteral_17272/*"bit_result_"*/,
                                              v6,
                                              0LL);
    if ( !v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1B88814(transform, v8);
    *(_QWORD *)(v5 + 32) = transform;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)transform, v9, v10);
    v11 = System_String__Concat_61720560((System_String_array *)v5, 0LL);
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                data,
                                v11,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48635516,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v14 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11354/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v13, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_19:
      sub_1B8880C(transform, v8);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12232/*"START_COMBINE_LIMIT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__104_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4A5EA48 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_17281/*"bit_result_friendship_exceed"*/);
    sub_1B885B0(&StringLiteral_11354/*"ResultEffect"*/);
    sub_1B885B0(&StringLiteral_12240/*"START_FRIENDSHIP_EXCEED_EFFECT"*/);
    byte_4A5EA48 = 1;
  }
  if ( data )
  {
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                data,
                                (System_String_o *)StringLiteral_17281/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48635516,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11354/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B8880C(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12240/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__102_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21

  if ( (byte_4A5EA47 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12244/*"START_LVEXCEED_EFFECT"*/);
    sub_1B885B0(&StringLiteral_17286/*"bit_result_limitbreak"*/);
    sub_1B885B0(&StringLiteral_11354/*"ResultEffect"*/);
    byte_4A5EA47 = 1;
  }
  if ( data )
  {
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                data,
                                (System_String_o *)StringLiteral_17286/*"bit_result_limitbreak"*/,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48635516,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v9 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11354/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v8, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B8880C(transform, v7);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12244/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B8880C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B8880C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__152_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B8880C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B8880C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__155_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B8880C(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__114_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A5EA4C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5476/*"END_LOAD"*/);
    byte_4A5EA4C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5476/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__145_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effect; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v11; // x22
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  UserServantEntity_o *v15; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  CommonUI_o *v21; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v24; // x25
  const MethodInfo *v25; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *v26; // x8

  if ( (byte_4A5EA4D & 1) == 0 )
  {
    sub_1B885B0(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__6__);
    sub_1B885B0(&CombineResultEffectComponent___c__DisplayClass145_2_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5EA4D = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69459568(effect, 0LL);
  this->fields.effect = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effect, 0, v4, v5);
  CombineResultEffectComponent__Close(this, v6);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v11 = EntityDefinitely;
    v12 = sub_1B887FC(CombineResultEffectComponent___c__DisplayClass145_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 24) = this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v13, v14);
      v15 = (UserServantEntity_o *)sub_1B887FC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_40192616(v15, v11, 0LL);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v12 + 16) = callbackFunc;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)callbackFunc, v17, v18);
      this->fields.callbackFunc = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v19, v20);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v15 )
      {
        v21 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v15->fields.treasureDeviceLv1;
        v24 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B887FC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)v12,
          Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__6__,
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
            0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1B8880C(Instance, v8);
  }
  v26 = this->fields.callbackFunc;
  if ( v26 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v26->fields.m_target)(
      v26->fields.original_method_info,
      1LL,
      *(_QWORD *)&v26->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__145_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B8880C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


bool __fastcall CombineResultEffectComponent__checkSecretTreasureDeviceData(
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

  if ( (byte_4A5EA0B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA0B = 1;
  }
  svtFlagEntity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_39674080(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0LL) )
  {
LABEL_13:
    v10 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(Instance, v6);
  }
  Instance = (Il2CppObject *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0LL);
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
  if ( args->max_length <= 1 )
    sub_1B88814(Instance, v6);
  result = 1;
  this->fields.targetId = args->m_Items[2];
  v10 = args->m_Items[1];
LABEL_14:
  this->fields.targetIdOld = v10;
  return result;
}


void __fastcall CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
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
  int32_t TransformCount; // w0
  int32_t displayCount; // w9
  int32_t v15; // w8
  int32_t v16; // w21
  System_Int32_array *v17; // x20
  int32_t TransformedSameSlotSkillId; // w0
  int32_t v19; // w8
  int32_t v20; // w22
  UserServantEntity_o *baseUsrSvtData; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Action_o *v25; // x24
  int32_t v26; // w0
  int32_t v27; // w9
  int32_t v28; // w8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  TransformServantInfo_o *v33; // [xsp+30h] [xbp-50h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A5EA3B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1B885B0(&Method_CombineResultEffectComponent_clickNext__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5EA3B = 1;
  }
  v33 = 0LL;
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
      CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v5);
      bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
      v6 = this->fields.skillShowIndex + 1;
      this->fields.skillShowIndex = v6;
      if ( bgCollider )
      {
        v7 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
               (CombineResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
               method);
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
        CombineResultEffectComponent__EndDisp(this, v8);
        return;
      }
      goto LABEL_59;
    }
  }
  if ( (unsigned int)kind <= 0x1B && ((1 << kind) & 0x8000110) != 0 )
  {
    if ( CombineResultEffectComponent__IsShowNextNpInfo(this, method) )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v9);
      bgCollider = (UnityEngine_Collider_o *)this->fields.npInfoAddManager;
      v6 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v6;
      if ( bgCollider )
      {
        v7 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
               (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
               0LL);
LABEL_17:
        if ( v6 < v7 )
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
      v10 = Method_CombineResultEffectComponent_clickNext__;
      if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B885C8(Method_CombineResultEffectComponent_clickNext__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v12);
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
    v15 = TransformCount;
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    this->fields.displayCount = displayCount - 1;
    if ( !bgCollider )
      goto LABEL_65;
    v16 = v15 - displayCount;
    bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                             (UserServantEntity_o *)bgCollider,
                                             v15 - displayCount,
                                             -1,
                                             -1,
                                             1,
                                             -1,
                                             0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_65;
    v17 = (System_Int32_array *)bgCollider;
    TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                   this->fields.baseUsrSvtData,
                                   this->fields.targetId,
                                   v16 - 1,
                                   v16,
                                   0LL);
    v19 = this->fields.kind;
    this->fields.targetId = TransformedSameSlotSkillId;
    if ( v19 == 7 )
    {
      v20 = TransformedSameSlotSkillId;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC0 = 1;
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
                                   v20,
                                   *(_DWORD *)(*(_QWORD *)&bgCollider[7].fields.m_CachedPtr + 20LL),
                                   v16,
                                   0LL);
    }
    bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
    if ( bgCollider )
    {
      UserServantEntity__GetTransformedServantInfo((UserServantEntity_o *)bgCollider, &transformInfo, v16, 0LL);
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( transformInfo )
      {
        if ( skillResultInfoWindow )
        {
          SkillUpResultWindowComponent__OpenSkillUpResultInfo(
            skillResultInfoWindow,
            targetId,
            targetLv,
            v25,
            this->fields.targetIdOld,
            this->fields.targetLvOld,
            transformInfo->fields.svtId,
            v17,
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
    sub_1B8880C(bgCollider, method);
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
      v26 = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0LL);
      v27 = this->fields.displayCount;
      v28 = v26;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v27 - 1;
      if ( bgCollider )
      {
        bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                 (UserServantEntity_o *)bgCollider,
                                                 &v33,
                                                 v28 - v27,
                                                 0LL);
        if ( v33 )
        {
          bgCollider = (UnityEngine_Collider_o *)this->fields.commandCardExceedResultWindow;
          if ( bgCollider )
          {
            CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
              (CommandCardExceedResultWindowComponent_o *)bgCollider,
              this->fields.baseUsrSvtData,
              this->fields.commandCardIndex,
              this->fields.commandCardExceedCount,
              v33->fields.svtId,
              v33->fields.titleText,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_65;
  }
LABEL_59:
  v29 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_1B885C8(Method_CombineResultEffectComponent_clickNext__);
  v30 = (System_Reflection_MethodBase_o *)sub_1B88594(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
  if ( this->fields.kind != 24 )
    CombineResultEffectComponent__ReleaseVoiceData(this, v31);
  if ( !CombineResultEffectComponent__OpenNotification(this, v31) )
    CombineResultEffectComponent__FadeoutProcess(this, v32);
}


void __fastcall CombineResultEffectComponent__endloadEffect(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A5EA10 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent__endloadEffect_b__114_0__);
    sub_1B885B0(&CombineResultEffectComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EA10 = 1;
  }
  if ( data )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = AvalonSceneManager_TypeInfo;
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v7 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__114_0__, 0LL);
    if ( !v8 )
      sub_1B8880C(v11, v12);
    CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
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
  int32_t v18; // w3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5EA18 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA18 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.asstName, 0, v2, v3);
  this->fields.playVoiceList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v5, v6);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v11;
  *(_QWORD *)&v23.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v12, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v14 = this->fields.resUsrSvtData) == 0LL)
    || (v15 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                     v14->fields.limitCount,
                                     0LL),
        !v15) )
  {
LABEL_12:
    sub_1B8880C(Instance, v8);
  }
  Entity = ServantVoiceMaster__getEntity(v15, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v17, v18);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v21, v22);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_4A5EA2C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4A5EA2C = 1;
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
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48635516; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4A5EA11 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&CombineResultEffectComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EA11 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48635516,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE1 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE6 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1B8880C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceData_array *__fastcall CombineResultEffectComponent__getLimitUpSvtVoiceList(
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

  if ( (byte_4A5EA2B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5EA2B = 1;
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
    v9 = this->fields.resUsrSvtData;
    if ( !v9 )
LABEL_20:
      sub_1B8880C(resUsrSvtData, isPlayVoice);
    v11 = *(_QWORD *)&v9->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&v9->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
    CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                                                      svtVoiceEntity,
                                                                      v12,
                                                                      this->fields.limitUpPlayVoiceLabel,
                                                                      this->fields.genderType,
                                                                      0LL);
    if ( !CntStopVoiceList )
      return 0LL;
  }
  else
  {
    v8 = this->fields.svtVoiceEntity;
    if ( !v8 )
      return 0LL;
    CntStopVoiceList = (System_Collections_Generic_List_object__o *)ServantVoiceEntity__getLimitCntUpVoiceList(
                                                                      v8,
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
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return 0LL;
}


void __fastcall CombineResultEffectComponent__getSvtVoiceData(
        CombineResultEffectComponent_o *this,
        int32_t voiceId,
        int32_t costumeId,
        bool isLimitUp,
        const MethodInfo *method)
{
  int v6; // w22
  int32_t v9; // w2
  char v10; // w3
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
  char v25; // w3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v28; // w2
  char v29; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v6 = costumeId;
  if ( (byte_4A5EA17 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA17 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.asstName, 0, costumeId, isLimitUp);
  this->fields.playVoiceList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v9, v10);
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
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
    voiceId = ServantVoiceMaster__getSvtVoiceId(v16, 0LL);
  }
  if ( v6 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_41109412(Master_object->fields.limitCount, 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0LL);
    v6 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
  if ( !v19
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v19,
                                       (int32_t)Master_object,
                                       v6,
                                       0LL),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_26:
    sub_1B8880C(Master_object, v12);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             voiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v24, v25);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v28, v29);
  }
}


void __fastcall CombineResultEffectComponent__loadBoxGachaEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4A5EA0F & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent_endloadEffect__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_5835/*"Effect/Combine"*/);
    byte_4A5EA0F = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5835/*"Effect/Combine"*/, v3, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__loadVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A5EA19 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent_EndLoad__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4A5EA19 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v5 = (SoundManager_o *)Instance;
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v5 )
      sub_1B8880C(v7, v8);
    SoundManager__LoadAudioAssetStorage(v5, asstName, v6, 1, 0LL);
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
  int32_t v27; // w3

  v4 = this;
  if ( (byte_4A5EA30 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent_EndPlay__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    this = (CombineResultEffectComponent_o *)sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5EA30 = 1;
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
      v8 = playVoiceList->m_Items[playCnt];
      if ( !v8 )
        goto LABEL_23;
      id = v8->fields.id;
      v4->fields.vcName = id;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
      v10 = v4->fields.playVoiceList;
      if ( !v10 )
        goto LABEL_23;
      v11 = v4->fields.playCnt;
      if ( (unsigned int)v11 < v10->max_length )
      {
        this = (CombineResultEffectComponent_o *)v10->m_Items[v11];
        if ( this )
        {
          m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
          friendshipExceedResultWindow = (int32_t)this->fields.friendshipExceedResultWindow;
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
          currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.currentFigureCollectList;
          if ( currentFigureCollectList )
          {
            v16 = FadeTime;
            if ( System_Linq_Enumerable__Any_object_(
                   currentFigureCollectList,
                   (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                     (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                     (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
          v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v24, (Il2CppObject *)v4, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v25 = SoundManager__playVoice_38702940(asstName, vcName, volume, v24, 0LL);
          v4->fields.player = v25;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.player, (int32_t)v25, v26, v27);
          ++v4->fields.playCnt;
          return;
        }
LABEL_23:
        sub_1B8880C(this, method);
      }
    }
    sub_1B88814(this, method);
  }
}


void __fastcall CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(
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
  if ( (byte_4A5EA1D & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1B885B0(&StringLiteral_3182/*"BaseSvtNodeName"*/);
    byte_4A5EA1D = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1B8880C(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3182/*"BaseSvtNodeName"*/,
    0,
    1,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setBaseSvtGraphCard(
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v20; // x19
  UnityEngine_Transform_o *v21; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EA27 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_4384/*"CardScale"*/);
    sub_1B885B0(&StringLiteral_3181/*"BaseSvtCardNodeName"*/);
    byte_4A5EA27 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3181/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4384/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v13 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v12;
  *(_QWORD *)&v22.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.baseUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                            v15->fields.limitCount,
                            0LL);
  if ( !v16 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, (int32_t)fsm, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v14, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v8 )
    goto LABEL_25;
  v18 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_37906428(
                            gameObject,
                            this->fields.baseUsrSvtData,
                            v18,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  v20 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v21 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A55CE1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v21
    || (UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v20, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_1B8880C(fsm, *(_QWORD *)&changeNameType);
  }
  v23.fields.x = v13;
  v23.fields.y = v13;
  v23.fields.z = v13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v23, 0LL);
}


void __fastcall CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ServantVoiceData_array *CostumeSvtVoiceList; // x0
  __int64 v4; // x1
  ServantVoiceData_o *v5; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v12; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5EA25 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_8407/*"LimitUpResSvtNodeName"*/);
    byte_4A5EA25 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
      sub_1B88814(CostumeSvtVoiceList, v4);
    v5 = CostumeSvtVoiceList->m_Items[0];
    if ( !v5 )
LABEL_13:
      sub_1B8880C(CostumeSvtVoiceList, v4);
    face = v5->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  CostumeSvtVoiceList = (ServantVoiceData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v13,
                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_13;
  v10 = (int)CostumeSvtVoiceList;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v10,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8407/*"LimitUpResSvtNodeName"*/,
    v12);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(effect, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__setLimitUpBaseSvtFigure(
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
  if ( (byte_4A5EA20 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent_o *)sub_1B885B0(&StringLiteral_8406/*"LimitUpBaseSvtNodeName"*/);
    byte_4A5EA20 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  v6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v6 )
LABEL_10:
    sub_1B8880C(this, method);
  v7 = (int)this;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v7, v8, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8406/*"LimitUpBaseSvtNodeName"*/,
    1,
    2,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setNameRevealSvtFigure(
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

  if ( (byte_4A5EA26 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&StringLiteral_8406/*"LimitUpBaseSvtNodeName"*/);
    byte_4A5EA26 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1B88814(LimitUpSvtVoiceList, v8);
    v9 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v9 )
      sub_1B8880C(LimitUpSvtVoiceList, v8);
    face = v9->fields.face;
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
    (System_String_o *)StringLiteral_8406/*"LimitUpBaseSvtNodeName"*/,
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
  UnityEngine_Transform_o *v20; // x19
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EA29 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4384/*"CardScale"*/);
    sub_1B885B0(&StringLiteral_3181/*"BaseSvtCardNodeName"*/);
    byte_4A5EA29 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3181/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_18;
  v10 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v10, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_18;
  v12 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4384/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v12 )
    goto LABEL_18;
  v14 = Value;
  gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nameRevealCard, (int32_t)TexturePrefab, v18, v19);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v20 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A55CE1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_18:
    sub_1B8880C(fsm, *(_QWORD *)&svtId);
  }
  v21.fields.x = v14;
  v21.fields.y = v14;
  v21.fields.z = v14;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultCostumeSvtGraphCard(
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
  UserServantEntity_o *resUsrSvtData; // x20
  UnityEngine_GameObject_o *v12; // x21
  int32_t FigureImageLimitCount; // w0
  UnityEngine_Component_o *v14; // x19
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EA2A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4384/*"CardScale"*/);
    sub_1B885B0(&StringLiteral_11355/*"ResultSvtCardNodeName"*/);
    byte_4A5EA2A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11355/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_18;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_18;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4384/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v10 = Value;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v8, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_18;
  v12 = (UnityEngine_GameObject_o *)fsm;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(resUsrSvtData, 0, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_37906428(
                            v12,
                            resUsrSvtData,
                            FigureImageLimitCount,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm )
    goto LABEL_18;
  v14 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v15 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A55CE1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v15
    || (UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v14, 0LL)) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(fsm, *(_QWORD *)&changeNameType);
  }
  v16.fields.x = v10;
  v16.fields.y = v10;
  v16.fields.z = v10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v16, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v14, 1.89, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultSvtGraphCard(
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v20; // x19
  UnityEngine_Transform_o *v21; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EA28 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_4384/*"CardScale"*/);
    sub_1B885B0(&StringLiteral_11355/*"ResultSvtCardNodeName"*/);
    byte_4A5EA28 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11355/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v6 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v6, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v8 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4384/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v13 = Value;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v12;
  *(_QWORD *)&v22.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = this->fields.resUsrSvtData;
  if ( !v15 )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                            v15->fields.limitCount,
                            0LL);
  if ( !v16 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v14, (int32_t)fsm, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v14, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v8 )
    goto LABEL_25;
  v18 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_37906428(
                            gameObject,
                            this->fields.resUsrSvtData,
                            v18,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  v20 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v21 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A55CE1 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v21
    || (UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v20, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_1B8880C(fsm, *(_QWORD *)&changeNameType);
  }
  v23.fields.x = v13;
  v23.fields.y = v13;
  v23.fields.z = v13;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v23, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v20, 1.89, 0LL);
}


void __fastcall CombineResultEffectComponent__setSkillResultInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 Instance; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2
  int32_t v9; // w3
  SkillUpResultWindowComponent_o *v10; // x20
  UserServantEntity_o *v11; // x21
  int32_t v12; // w22
  int32_t v13; // w23
  System_Action_o *v14; // x24
  const MethodInfo *v15; // x2
  struct UserServantEntity_o *v16; // x8
  __int64 v17; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x0
  const MethodInfo *v22; // x2
  struct UserServantEntity_o *v23; // x8
  __int64 v24; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x0
  const MethodInfo *v29; // x1
  UserServantEntity_o *v30; // x20
  const MethodInfo *v31; // x2
  int32_t v32; // w3
  struct ServantVoiceData_array **p_playVoiceList; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v39; // x20
  System_Action_o *v40; // x24
  int32_t targetIdOld; // w25
  int32_t targetLvOld; // w26
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  int32_t v45; // w27
  int32_t v46; // w28
  __int64 v47; // x0
  __int64 v48; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *v50; // x20
  __int64 v51; // x28
  int32_t v52; // w22
  struct UserServantEntity_o *v53; // x8
  __int64 v54; // x23
  __int64 v55; // x24
  int v56; // w8
  int v57; // w9
  __int64 v58; // x23
  struct UserServantEntity_o *v59; // x8
  __int64 v60; // x23
  __int64 v61; // x24
  int32_t v62; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  int32_t v66; // w22
  Il2CppObject *v67; // x23
  struct UserServantEntity_o *v68; // x8
  int64_t v69; // x24
  __int64 v70; // x25
  __int64 v71; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v73; // x23
  struct UserServantEntity_o *v74; // x8
  __int64 v75; // x23
  __int64 v76; // x24
  _BOOL8 v77; // x0
  __int64 v78; // x1
  Il2CppObject *current; // x21
  int64_t UserId; // x0
  __int64 v81; // x1
  struct UserServantEntity_o *v82; // x8
  int64_t v83; // x23
  int32_t v84; // w24
  __int64 v85; // x25
  __int64 v86; // x26
  int32_t v87; // w3
  int v88; // w21
  struct ServantVoiceData_array *v89; // x8
  struct UserServantEntity_o *v90; // x8
  __int64 v91; // x20
  __int64 v92; // x21
  struct UserServantEntity_o *v93; // x8
  int v94; // w21
  int v95; // w20
  struct UserServantEntity_o *v96; // x8
  __int64 v97; // x22
  __int64 v98; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x21
  int32_t v100; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v102; // w8
  SkillUpResultWindowComponent_o *v103; // x20
  UserServantEntity_o *v104; // x21
  System_Action_o *v105; // x22
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  Il2CppObject *v110; // x20
  Il2CppObject *v111; // x21
  Il2CppObject *v112; // x20
  BalanceConfig_c *v113; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v115; // x21
  Il2CppObject *Name; // x0
  System_String_o *v117; // x0
  System_Int32_array *v118; // x20
  SkillUpResultWindowComponent_o *v119; // x21
  int32_t v120; // w22
  int32_t v121; // w23
  System_Action_o *v122; // x24
  struct UserServantEntity_o *v123; // x8
  int32_t v124; // w26
  int32_t v125; // w25
  __int64 v126; // x27
  __int64 v127; // x28
  SkillUpResultWindowComponent_o *v128; // x20
  UserServantEntity_o *v129; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v131; // x23
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v133; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v134; // x21
  Il2CppObject *v135; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  struct UserServantEntity_o *v138; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t lv; // w21
  const MethodInfo *v141; // x1
  int32_t v142; // w2
  int32_t v143; // w3
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v145; // x3
  __int64 v146; // x22
  int32_t v147; // w2
  int32_t v148; // w3
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v150; // w2
  int32_t v151; // w3
  int32_t v152; // w2
  int32_t v153; // w3
  __int64 v154; // x23
  System_Action_o *v155; // x24
  int32_t v156; // w2
  int32_t v157; // w3
  Il2CppObject *v158; // x21
  CombineResultEffectComponent_ClickDelegate_o *v159; // x22
  const MethodInfo *v160; // x3
  int32_t v161; // w2
  int32_t v162; // w3
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v164; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v166; // x23
  System_Action_o *v167; // x24
  SvtCombineResultWindowComponent_o *v168; // x0
  UserServantEntity_o *v169; // x1
  int32_t v170; // w2
  System_Action_o *v171; // x3
  System_Action_o *v172; // x4
  struct UserServantEntity_o *v173; // x8
  __int128 v174; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v175; // x20
  Il2CppObject *v176; // x0
  int32_t v177; // w2
  int32_t v178; // w3
  struct SvtCombineResultWindowComponent_o *v179; // x20
  struct UserServantEntity_o *v180; // x21
  int32_t v181; // w22
  System_Action_o *v182; // x23
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v184; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  Il2CppObject *v187; // x20
  AvalonSceneManager_c *v188; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v190; // x0
  __int64 *v191; // x8
  bool v192; // w28
  const MethodInfo *v193; // x2
  const MethodInfo *v194; // x2
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v196; // x21
  System_String_o *v197; // x22
  Il2CppObject *v198; // x21
  Il2CppObject *v199; // x0
  AvalonSceneManager_c *v200; // x8
  System_Action_o *v201; // x21
  bool kind; // [xsp+0h] [xbp-120h]
  bool methoda; // [xsp+8h] [xbp-118h]
  System_String_o *dispBattleName; // [xsp+18h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v207; // [xsp+70h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v208; // [xsp+90h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A8h] [xbp-78h] BYREF
  int32_t oldLv; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v220; // 0:x0.16

  if ( (byte_4A5EA2D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent_EndDisp__);
    sub_1B885B0(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_0__);
    sub_1B885B0(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_1__);
    sub_1B885B0(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_5__);
    sub_1B885B0(&Method_CombineResultEffectComponent_clickNext__);
    sub_1B885B0(&CombineResultFormManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent___c__DisplayClass145_0__setSkillResultInfo_b__3__);
    sub_1B885B0(&CombineResultEffectComponent___c__DisplayClass145_0_TypeInfo);
    sub_1B885B0(&Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__2__);
    sub_1B885B0(&CombineResultEffectComponent___c__DisplayClass145_1_TypeInfo);
    sub_1B885B0(&StringLiteral_10824/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/);
    sub_1B885B0(&StringLiteral_10825/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA2D = 1;
  }
  oldLv = 0;
  entity = 0LL;
  memset(&v208, 0, sizeof(v208));
  v3 = sub_1B887FC(CombineResultEffectComponent___c__DisplayClass145_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_212;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_155;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_212;
      v133 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v134 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v207.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v207.fields.fakeValue = v133;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v206 = v207;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v206, 0LL);
      if ( !v134 )
        goto LABEL_212;
      v135 = DataMasterBase_object__object__long___GetEntity(
               v134,
               Instance,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v135;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)v135, v136, v137);
LABEL_155:
      v138 = this->fields.baseUsrSvtData;
      if ( !v138 )
        goto LABEL_212;
      oldLv = v138->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_212;
      lv = resUsrSvtData->fields.lv;
      if ( !System_Int32__Equals_62512140((int32_t)&oldLv, lv, 0LL) )
      {
        if ( this->fields.asstName )
        {
          if ( this->fields.svtVoiceEntity )
          {
            playVoiceList = this->fields.playVoiceList;
            if ( playVoiceList )
            {
              this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
              CombineResultEffectComponent__playVoice(this, v141);
            }
          }
        }
      }
      *(_QWORD *)(v3 + 16) = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), 0, v142, v143);
      if ( !CombineResultEffectComponent__CheckCombineLimit(this, oldLv, lv, v145) )
        goto LABEL_166;
      v146 = sub_1B887FC(CombineResultEffectComponent___c__DisplayClass145_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v146, 0LL);
      if ( !v146 )
        goto LABEL_212;
      *(_QWORD *)(v146 + 24) = v3;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v146 + 24), v3, v147, v148);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v146 + 16) = callbackFunc;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v146 + 16), (int32_t)callbackFunc, v150, v151);
      this->fields.callbackFunc = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v152, v153);
      v154 = *(_QWORD *)(v146 + 24);
      v155 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v155,
        (Il2CppObject *)v146,
        Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__2__,
        0LL);
      if ( !v154 )
        goto LABEL_212;
      *(_QWORD *)(v154 + 16) = v155;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 16), (int32_t)v155, v156, v157);
      v158 = *(Il2CppObject **)(v146 + 24);
      v159 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B887FC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v159,
        v158,
        Method_CombineResultEffectComponent___c__DisplayClass145_0__setSkillResultInfo_b__3__,
        v160);
      this->fields.callbackFunc = v159;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)v159, v161, v162);
LABEL_166:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_186:
        CombineResultEffectComponent__EndDisp(this, v5);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v164 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v166 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v166, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v167 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v167, (Il2CppObject *)this, (intptr_t)Method_CombineResultEffectComponent_clickNext__, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_212;
      v168 = svtResultInfoWindow;
      v169 = v164;
      v170 = baseUsrSvtCollictionLv;
      v171 = v166;
      v172 = v167;
LABEL_176:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v168, v169, v170, v171, v172, 0LL);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1B88658(string___TypeInfo, 1LL);
      v16 = this->fields.baseUsrSvtData;
      if ( !v16 )
        goto LABEL_212;
      v17 = Instance;
      p_svtId = &v16->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v211.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v211.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v211, v15);
      if ( !v17 )
        goto LABEL_212;
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_213;
      *(_QWORD *)(v17 + 32) = Instance;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), Instance, v19, v20);
      v21 = System_String__Concat_61720560((System_String_array *)v17, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt_69417088(v21, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
        goto LABEL_22;
      Instance = sub_1B88658(string___TypeInfo, 1LL);
      v23 = this->fields.baseUsrSvtData;
      if ( !v23 )
        goto LABEL_212;
      v24 = Instance;
      v25 = &v23->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v212.fields.currentCryptoKey = v25;
      *(_QWORD *)&v212.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v212, v22);
      if ( !v24 )
        goto LABEL_212;
      if ( !*(_DWORD *)(v24 + 24) )
        goto LABEL_213;
      *(_QWORD *)(v24 + 32) = Instance;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 32), Instance, v26, v27);
      v28 = System_String__Concat_61720560((System_String_array *)v24, 0LL);
      UnityEngine_PlayerPrefs__SetInt(v28, 0, 0LL);
      v30 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      CombineResultFormManager__ResetVoiceList(v30, v29);
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
        LODWORD(LimitUpSvtVoiceList) = 0;
      }
      else
      {
        LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v31);
        p_playVoiceList = &this->fields.playVoiceList;
        this->fields.playVoiceList = LimitUpSvtVoiceList;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_playVoiceList, (int32_t)LimitUpSvtVoiceList, (int32_t)v31, v32);
      v89 = this->fields.playVoiceList;
      if ( !v89 )
      {
        v90 = this->fields.baseUsrSvtData;
        if ( v90 )
        {
          v92 = *(_QWORD *)&v90->fields.limitCount.fields.currentCryptoKey;
          v91 = *(_QWORD *)&v90->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v218.fields.currentCryptoKey = v92;
          *(_QWORD *)&v218.fields.fakeValue = v91;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v218, 0LL);
          v93 = this->fields.baseUsrSvtData;
          v94 = Instance == 2;
          if ( v93 )
          {
            v95 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v93->fields.limitCount, 0LL) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v96 = this->fields.baseUsrSvtData;
              if ( !v96 )
                goto LABEL_212;
              v98 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
              v97 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
              v99 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1032LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v219.fields.currentCryptoKey = v98;
              *(_QWORD *)&v219.fields.fakeValue = v97;
              v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v219, 0LL);
              v94 = (v95 == 2) | System_Linq_Enumerable__Contains_int_(
                                   v99,
                                   v100,
                                   (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              v102 = this->fields.kind;
              isLimitUpSuppression = v102 != 10 && v102 != 26;
            }
            if ( (v94 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, v5);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v196 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v196,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__145_5__,
              0LL);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v196, 1, 0LL);
              return;
            }
          }
        }
        goto LABEL_212;
      }
LABEL_118:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&v89->max_length;
        CombineResultEffectComponent__playVoice(this, v5);
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
      v39 = SkillIdList;
      v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v43);
      if ( !Instance )
        goto LABEL_212;
      v45 = *(_DWORD *)(Instance + 16);
      v46 = this->fields.kind;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v44);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_212;
      dispBattleName = *(System_String_o **)(Instance + 24);
      methoda = 1;
      kind = v46 == 3;
      goto LABEL_195;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v10 = this->fields.skillResultInfoWindow;
      v11 = this->fields.baseUsrSvtData;
      v12 = this->fields.targetId;
      v13 = this->fields.targetLv;
      v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v10 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_45014852(
        v10,
        v11,
        v12,
        v13,
        v14,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        this->fields.npInfoAddManager,
        this->fields.kind,
        0LL);
      return;
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v173 = this->fields.baseUsrSvtData;
      if ( !v173 )
        goto LABEL_212;
      v174 = *(_OWORD *)&v173->fields.id.fields.fakeValue;
      v175 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v207.fields.currentCryptoKey = *(_OWORD *)&v173->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v207.fields.fakeValue = v174;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v205 = v207;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v205, 0LL);
      if ( !v175 )
        goto LABEL_212;
      v176 = DataMasterBase_object__object__long___GetEntity(
               v175,
               Instance,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v176;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)v176, v177, v178);
      v179 = this->fields.svtResultInfoWindow;
      v180 = this->fields.resUsrSvtData;
      v181 = this->fields.baseUsrSvtCollictionLv;
      v182 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v182, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v179 )
        goto LABEL_212;
      v168 = v179;
      v169 = v180;
      v170 = v181;
      v171 = v182;
      v172 = 0LL;
      goto LABEL_176;
    case 7:
    case 0x15:
      v47 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
        v47 = sub_1BDA48C(v47);
      v48 = *(_QWORD *)(*(_QWORD *)(v47 + 192) + 16LL);
      if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
        v48 = sub_1BDA48C(v48);
      Instance = **(_QWORD **)(v48 + 184);
      if ( !Instance )
        goto LABEL_212;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v50 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v50,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      v51 = 0LL;
      v52 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v52 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v53 = this->fields.baseUsrSvtData;
          if ( !v53 )
            goto LABEL_212;
          v55 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
          v54 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v213.fields.currentCryptoKey = v55;
          *(_QWORD *)&v213.fields.fakeValue = v54;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v213, 0LL);
          if ( !MasterData_object )
            goto LABEL_212;
          Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                (ServantSkillMaster_o *)MasterData_object,
                                Instance,
                                v52,
                                0LL);
          if ( !Instance )
            goto LABEL_212;
          v56 = *(_DWORD *)(Instance + 24);
          if ( v56 < 1 )
          {
LABEL_50:
            v59 = this->fields.baseUsrSvtData;
            if ( !v59 )
              goto LABEL_212;
            v61 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
            v60 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v214.fields.currentCryptoKey = v61;
            *(_QWORD *)&v214.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v214, 0LL);
            Instance = (__int64)ServantSkillMaster__GetEntity(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  v62,
                                  v52,
                                  1,
                                  0LL);
            if ( Instance )
            {
              v5 = (const MethodInfo *)*(unsigned int *)(Instance + 28);
              v58 = v51;
LABEL_55:
              if ( !v50 )
                goto LABEL_212;
              items = v50->fields._items;
              v64 = Method_System_Collections_Generic_List_int__Add__;
              ++v50->fields._version;
              if ( !items )
                goto LABEL_212;
              size = v50->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v50,
                  (int32_t)v5,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
              }
              else
              {
                v50->fields._size = size + 1;
                items->m_Items[size + 1] = (int)v5;
              }
            }
            else
            {
              v58 = v51;
            }
            ++v52;
            v51 = v58;
            continue;
          }
          v57 = 0;
          while ( 1 )
          {
            if ( v56 == v57 )
LABEL_213:
              sub_1B88814(Instance, v5);
            v58 = *(_QWORD *)(Instance + 8LL * v57 + 32);
            if ( !v58 )
              break;
            v5 = (const MethodInfo *)*(unsigned int *)(v58 + 28);
            if ( (_DWORD)v5 == this->fields.targetId )
              goto LABEL_55;
            if ( v56 == ++v57 )
              goto LABEL_50;
          }
LABEL_212:
          sub_1B8880C(Instance, v5);
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
        v66 = Instance;
        Instance = UserServantEntity__IsHeroine(this->fields.baseUsrSvtData, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_212;
          v67 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          v68 = this->fields.baseUsrSvtData;
          if ( !v68 )
            goto LABEL_212;
          v69 = Instance;
          v71 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
          v70 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v215.fields.currentCryptoKey = v71;
          *(_QWORD *)&v215.fields.fakeValue = v70;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v215, 0LL);
          if ( !v67 )
            goto LABEL_212;
          Instance = UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)v67,
                       &entity,
                       v69,
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
              v73 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
              Instance = System_Linq_Enumerable__Any_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                           (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
              if ( (Instance & 1) != 0 )
              {
                Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v73, 0LL);
                v66 = Instance;
              }
            }
          }
        }
        v74 = this->fields.baseUsrSvtData;
        if ( !v74 )
          goto LABEL_212;
        v76 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
        v75 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v216.fields.currentCryptoKey = v76;
        *(_QWORD *)&v216.fields.fakeValue = v75;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v216, 0LL);
        if ( !v51 )
          goto LABEL_212;
        if ( !MasterData_object )
          goto LABEL_212;
        Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              *(_DWORD *)(v51 + 20),
                              this->fields.targetIdOld,
                              0LL);
        if ( !Instance )
          goto LABEL_212;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v207,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
        *(_OWORD *)&v208.fields._list = *(_OWORD *)&v207.fields.currentCryptoKey;
        v208.fields._current = (Il2CppObject *)v207.fields.fakeValue;
        while ( 1 )
        {
          v77 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v208,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
          if ( !v77 )
            break;
          current = v208.fields._current;
          if ( !v208.fields._current )
            sub_1B8880C(v77, v78);
          if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v208.fields._current, 0, 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            v82 = this->fields.baseUsrSvtData;
            if ( !v82 )
              sub_1B8880C(UserId, v81);
            v83 = UserId;
            v84 = v82->fields.lv;
            v86 = *(_QWORD *)&v82->fields.limitCount.fields.currentCryptoKey;
            v85 = *(_QWORD *)&v82->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v217.fields.currentCryptoKey = v86;
            *(_QWORD *)&v217.fields.fakeValue = v85;
            v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v217, 0LL);
            if ( ServantSkillEntity__isUse((ServantSkillEntity_o *)current, v83, v84, v87, v66, -1, -1, -1LL, 0LL) )
            {
              v88 = 1;
              goto LABEL_189;
            }
          }
        }
        v88 = 0;
LABEL_189:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v208,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
        v192 = v88 != 0;
      }
      else
      {
        v192 = 0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v193);
      if ( !Instance )
        goto LABEL_212;
      if ( !v50 )
        goto LABEL_212;
      v45 = *(_DWORD *)(Instance + 16);
      v39 = System_Collections_Generic_List_int___ToArray(
              v50,
              (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v194);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_212;
      methoda = v192;
      kind = 0;
      dispBattleName = *(System_String_o **)(Instance + 24);
LABEL_195:
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        skillResultInfoWindow,
        targetId,
        targetLv,
        v40,
        targetIdOld,
        targetLvOld,
        v45,
        v39,
        kind,
        methoda,
        0,
        dispBattleName,
        0LL);
      break;
    case 9:
      v128 = this->fields.skillResultInfoWindow;
      v129 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v131 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v131, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v128 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v128, v129, oldFriendShipRank, v131, 0LL);
      return;
    case 0xB:
      v103 = this->fields.skillResultInfoWindow;
      v104 = this->fields.baseUsrSvtData;
      v105 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v105, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v103 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v103, v104, v105, 0LL);
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
      CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v5);
      this->fields.playVoiceList = CostumeSvtVoiceList;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList,
        (int32_t)CostumeSvtVoiceList,
        v107,
        v108);
      v89 = this->fields.playVoiceList;
      if ( v89 )
        goto LABEL_118;
      goto LABEL_186;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_181;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_205;
      this->fields.messageCallback = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, 0, (int32_t)v8, v9);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      v110 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC0 = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v110 )
        goto LABEL_212;
      v111 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v110,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
               (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_212;
      v112 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v113 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v113 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v113->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10825/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
        if ( !v112 )
          goto LABEL_212;
        v115 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v112, -1, -1, 0LL);
        v117 = System_String__Format(v115, Name, 0LL);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10824/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
        if ( !v111 )
          goto LABEL_212;
        v197 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v111, 0LL);
        if ( !v112 )
          goto LABEL_212;
        v198 = (Il2CppObject *)Instance;
        v199 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v112, -1, -1, 0LL);
        v117 = System_String__Format_61721404(v197, v198, v199, 0LL);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))messageCallback->fields.m_target)(
        messageCallback->fields.original_method_info,
        v117,
        *(_QWORD *)&messageCallback->fields.extra_arg);
LABEL_205:
      if ( !this->fields.callbackFunc )
        return;
      v187 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v200 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v200 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v200->static_fields->DEFAULT_FADE_TIME;
      v190 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v191 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__145_1__;
LABEL_209:
      v201 = v190;
      System_Action___ctor(v190, (Il2CppObject *)this, *v191, 0LL);
      if ( !v187 )
        goto LABEL_212;
      CommonUI__maskFadeout((CommonUI_o *)v187, 1, DEFAULT_FADE_TIME, v201, 0LL);
      return;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_205;
LABEL_181:
      v187 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v188 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v188 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v188->static_fields->DEFAULT_FADE_TIME;
      v190 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v191 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__145_0__;
      goto LABEL_209;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v184 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v8);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_212;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v184,
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
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_44877872(
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
      v118 = *(System_Int32_array **)(Instance + 16);
      v119 = this->fields.skillResultInfoWindow;
      v120 = this->fields.targetId;
      v121 = this->fields.targetLv;
      v122 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v122, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v123 = this->fields.baseUsrSvtData;
      if ( !v123 )
        goto LABEL_212;
      v124 = this->fields.targetIdOld;
      v125 = this->fields.targetLvOld;
      v127 = *(_QWORD *)&v123->fields.svtId.fields.currentCryptoKey;
      v126 = *(_QWORD *)&v123->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v220.fields.currentCryptoKey = v127;
      *(_QWORD *)&v220.fields.fakeValue = v126;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v220, 0LL);
      if ( !v119 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        v119,
        v120,
        v121,
        v122,
        v124,
        v125,
        Instance,
        v118,
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
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  ServantStatusBattleListViewItem_o *p_player; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5EA39 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5EA39 = 1;
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
    sub_1B88554(p_player, 0, v6, v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D2D5C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2D14;
}


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
  if ( (byte_4A5EA51 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5EA51 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EA52 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
    byte_4A5EA52 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterSkillList, (int32_t)v6, v7, v8);
}


void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4A5EA54 & 1) == 0 )
  {
    sub_1B885B0(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4A5EA54 = 1;
  }
  v7 = sub_1B887FC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList) == 0LL)
    || (items = afterSkillList->fields._items,
        v13 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_1B8880C(afterSkillList, v9);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), v7, v10, v11);
  }
}


void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4A5EA53 & 1) == 0 )
  {
    sub_1B885B0(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
    byte_4A5EA53 = 1;
  }
  v7 = sub_1B887FC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = id,
        *(_DWORD *)(v7 + 20) = lv,
        (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList) == 0LL)
    || (items = beforeSkillList->fields._items,
        v13 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_1B8880C(beforeSkillList, v9);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v7,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), v7, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_4A5EA56 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4A5EA56 = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1B8880C(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4A5EA57 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__);
    byte_4A5EA57 = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1B8880C(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_4A5EA55 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
    byte_4A5EA55 = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1B8880C(0LL, *(_QWORD *)&index);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D2DE0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D2DC0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2D78;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EA58 & 1) == 0 )
  {
    sub_1B885B0(&CombineResultEffectComponent___c_TypeInfo);
    byte_4A5EA58 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return System_Int32__CompareTo_62511992((_DWORD)a + 24, b->fields.priority, 0LL);
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
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v8; // x8
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v9; // x8
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v10; // x8
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v11; // x8
  struct CombineResultEffectComponent_o *v12; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__4; // x22
  CommonUI_o *v15; // x20
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  int32_t v18; // w3
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_4A5EA59 & 1) == 0 )
  {
    sub_1B885B0(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)sub_1B885B0(&Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__4__);
    byte_4A5EA59 = 1;
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
  UnityEngine_Object__DestroyImmediate_69459568(effect, 0LL);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[4].monitor = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this[4].monitor, 0, v6, v7);
  v9 = v2->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, method);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v10->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[5].klass )
  {
    this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = v2->fields.CS___8__locals1;
    if ( v11 )
    {
      v12 = v11->fields.__4__this;
      if ( v12 )
      {
        baseUsrSvtData = v12->fields.baseUsrSvtData;
        _9__4 = v2->fields.__9__4;
        v15 = (CommonUI_o *)this;
        if ( !_9__4 )
        {
          _9__4 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B887FC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__4,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__4__,
            v16);
          v2->fields.__9__4 = _9__4;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v17, v18);
        }
        if ( v15 )
        {
          CommonUI__OpenCombineLimit(v15, baseUsrSvtData, _9__4, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, decide);
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
  struct CombineResultEffectComponent_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__7; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  struct CombineResultEffectComponent_o *v8; // x8

  v3 = this;
  if ( (byte_4A5EA5A & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardServantFlagRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass145_2_o *)sub_1B885B0(&Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__7__);
    byte_4A5EA5A = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__7 = v3->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__7__,
      0LL);
    v3->fields.__9__7 = _9__7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__7, (int32_t)_9__7, v6, v7);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass145_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__7,
                                                                    (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v8 = v3->fields.__4__this;
  if ( !v8 || !this )
LABEL_11:
    sub_1B8880C(this, decide);
  CardServantFlagRequest__beginRequest(
    (CardServantFlagRequest_o *)this,
    v8->fields.targetSvtId,
    v8->fields.targetFlagId,
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
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  int32_t limitCount; // w20
  int32_t v9; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v2 = this;
  if ( (byte_4A5EA5B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CombineResultEffectComponent___c__DisplayClass167_0_o *)sub_1B885B0(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4A5EA5B = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  limitCount = v2->fields.limitCount;
  v9 = v7;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v9, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass167_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1B8880C(this, method);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, method);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass173_0___ctor(
        CombineResultEffectComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass173_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass173_0_o *this,
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

  if ( (byte_4A5EA5C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__1__);
    byte_4A5EA5C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v7 )
    sub_1B8880C(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass173_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v6; // x20

  if ( (byte_4A5EA5D & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EA5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  Instance = (Il2CppObject *)_4__this->fields.limitUpResultCheck;
  if ( !Instance )
    goto LABEL_10;
  LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_10:
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}