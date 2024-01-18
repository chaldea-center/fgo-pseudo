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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_String_array *v21; // x20
  __int64 v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x0
  __int64 v52; // x0

  if ( (byte_4186274 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v4);
    sub_B2C35C(&int___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v7);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_16797/*"bit_result02"*/, v9);
    sub_B2C35C(&StringLiteral_16798/*"bit_result03"*/, v10);
    sub_B2C35C(&StringLiteral_16799/*"bit_result04"*/, v11);
    sub_B2C35C(&StringLiteral_16796/*"bit_result01"*/, v12);
    byte_4186274 = 1;
  }
  v13 = sub_B2C374(string___TypeInfo, 3LL);
  if ( !v13 )
    sub_B2C434(0LL, v14);
  v21 = (struct System_String_array *)v13;
  v22 = StringLiteral_16796/*"bit_result01"*/;
  if ( StringLiteral_16796/*"bit_result01"*/ )
  {
    v22 = sub_B2C41C(StringLiteral_16796/*"bit_result01"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_22;
    v23 = (System_Int32_array **)StringLiteral_16796/*"bit_result01"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_20;
  v21->m_Items[0] = (System_String_o *)v23;
  sub_B2C2F8((BattleServantConfConponent_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
  v22 = StringLiteral_16797/*"bit_result02"*/;
  if ( StringLiteral_16797/*"bit_result02"*/ )
  {
    v22 = sub_B2C41C(StringLiteral_16797/*"bit_result02"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_22;
    v30 = (System_Int32_array **)StringLiteral_16797/*"bit_result02"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_20;
  v21->m_Items[1] = (System_String_o *)v30;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  v22 = StringLiteral_16798/*"bit_result03"*/;
  if ( !StringLiteral_16798/*"bit_result03"*/ )
  {
    v37 = 0LL;
LABEL_18:
    if ( v21->max_length > 2 )
    {
      v21->m_Items[2] = (System_String_o *)v37;
      sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
      this->fields.startAniName = v21;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.startAniName,
        (System_Int32_array **)v21,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      v44 = (System_Int32_array **)StringLiteral_16799/*"bit_result04"*/;
      this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_16799/*"bit_result04"*/;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.LimitAnimName, v44, v45, v46, v47, v48, v49, v50);
      *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
      *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_31A04C0;
      JUMPOUT(0x150AEBCLL);
    }
LABEL_20:
    v51 = sub_B2C460(v22);
    sub_B2C400(v51, 0LL);
  }
  v22 = sub_B2C41C(StringLiteral_16798/*"bit_result03"*/, v21->obj.klass->_1.element_class);
  if ( v22 )
  {
    v37 = (System_Int32_array **)StringLiteral_16798/*"bit_result03"*/;
    goto LABEL_18;
  }
LABEL_22:
  v52 = sub_B2C454();
  sub_B2C400(v52, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  WebViewObject_o *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4186226 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v3);
    byte_4186226 = 1;
  }
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fsm,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v12);
  v13 = UnityEngine_Component__GetComponent_WebViewObject_(
          transform,
          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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

  if ( (byte_418623A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, *(_QWORD *)&oldLv);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418623A = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !Instance )
    return (char)Instance;
  v10 = (ServantLvDetailMaster_o *)Instance;
  Instance = this->fields.baseUsrSvtData;
  if ( !Instance )
    goto LABEL_14;
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
  HighestData = ServantLvDetailMaster__GetHighestData(v10, Rarity, oldLv, 0LL);
  Instance = ServantLvDetailMaster__GetHighestData(v10, Rarity, currentLv, 0LL);
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
    sub_B2C434(Instance, v9);
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
    sub_B2C434(0LL, method);
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
  ServantCommentMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1

  if ( (byte_4186271 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    byte_4186271 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v8);
  return ServantCommentMaster__IsOpenImageLimitProfile(Master_WarQuestSelectionMaster, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *svtResultInfoWindow; // x0

  if ( (byte_418626E & 1) == 0 )
  {
    sub_B2C35C(&System_GC_TypeInfo, method);
    byte_418626E = 1;
  }
  this->fields.skillShowIndex = 0;
  this->fields.tdShowIndex = 0;
  CombineResultEffectComponent__DestroySvtFigure(this, method);
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0LL) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_18;
    SvtCombineResultWindowComponent__Close((SvtCombineResultWindowComponent_o *)svtResultInfoWindow, 0LL);
  }
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtResultInfoWindow, 0LL) )
  {
    svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
    if ( !svtResultInfoWindow )
      goto LABEL_18;
    SkillUpResultWindowComponent__Close((SkillUpResultWindowComponent_o *)svtResultInfoWindow, 0LL);
  }
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43492776(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_18:
    sub_B2C434(svtResultInfoWindow, v3);
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

  if ( (byte_4186270 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_B2C35C(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__, v4);
    byte_4186270 = 1;
  }
  v5 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B2C364(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_B2C434(v9, v10);
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
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x25
  SvtMultiPortraitMaster_o *v24; // x24
  int32_t v25; // w20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v26; // x24
  _BOOL8 v27; // x0
  __int64 v28; // x1
  SvtMultiPortraitEntity_o *current; // x24
  int klass; // w8
  int32_t v31; // w25
  UnityEngine_GameObject_o *v32; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Component_o *v41; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v43; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v45; // x0
  __int64 v46; // x1
  struct System_Int32_array *v47; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v49; // x26
  StandFigureCollect_o *v50; // x27
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x0
  __int64 v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v56; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x19
  StandFigureCollect_o *v58; // x21
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4186252 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&StandFigureCollect_TypeInfo, v18);
    byte_4186252 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v22 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v22,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  v24 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                imageLimitCount,
                                0LL);
  if ( !v24 )
    goto LABEL_40;
  v25 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v24, svtId, (int32_t)Instance, 0LL);
  if ( !Instance
    || (v26 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_27085276(
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
          afterFigureCollectList = this->fields.afterFigureCollectList;
          v58 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v58, 0LL, v56, 0LL);
          if ( afterFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_40:
    sub_B2C434(Instance, v21);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    v26,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v27 )
      break;
    current = (SvtMultiPortraitEntity_o *)v61.fields.current;
    if ( !v61.fields.current )
      sub_B2C434(v27, v28);
    klass = (int)v61.fields.current[2].klass;
    if ( klass >= 1 )
      v31 = klass + 1;
    else
      v31 = 1;
    if ( !StandFigureNode )
      sub_B2C434(v27, v28);
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
    v41 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B2C434(0LL, v34);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    transform = UnityEngine_Component__get_transform(v41, 0LL);
    if ( !transform )
      sub_B2C434(0LL, v43);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v45 = UnityEngine_Component__get_gameObject(v41, 0LL);
      v47 = current->fields.commonPosition;
      if ( !v47 )
        sub_B2C434(v45, v46);
      max_length = v47->max_length;
      if ( max_length == 1 )
      {
        v53 = sub_B2C460(v45);
        sub_B2C400(v53, 0LL);
      }
      if ( !max_length )
      {
        v54 = sub_B2C460(v45);
        sub_B2C400(v54, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_31326896(v45, (float)v47->m_Items[1], (float)v47->m_Items[2], 0LL);
    }
    v49 = this->fields.afterFigureCollectList;
    v50 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v50, current, (UIStandFigureR_o *)v41, 0LL);
    if ( !v49 )
      sub_B2C434(v51, v52);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v49,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__CreateBaseFigurePrefab(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        int32_t imageLimitCount,
        int32_t friendshipNum,
        System_String_o *nodeName,
        bool ignoreFormChangeCheck,
        const MethodInfo *method)
{
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
  UnityEngine_Component_o *StandFigureNode; // x23
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  DataManager_o *v25; // x22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v28; // x27
  __int64 v29; // x22
  __int64 v30; // x24
  int32_t v31; // w24
  const MethodInfo *v32; // x3
  int32_t v33; // w25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v34; // x22
  unsigned int v35; // w26
  _BOOL8 v36; // x0
  __int64 v37; // x1
  SvtMultiPortraitEntity_o *current; // x27
  int klass; // w8
  int32_t v40; // w28
  UnityEngine_GameObject_o *v41; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *v51; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v53; // x1
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  struct System_Int32_array *v57; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v59; // x22
  StandFigureCollect_o *v60; // x25
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x0
  __int64 v64; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v66; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x19
  StandFigureCollect_o *v68; // x21
  char v69; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4186249 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&formId);
    sub_B2C35C(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&StandFigureCollect_TypeInfo, v21);
    byte_4186249 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v25 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v25,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_54;
  v28 = (SvtMultiPortraitMaster_o *)Instance;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v30;
  *(_QWORD *)&v73.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v73, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  v31 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                MasterData_WarQuestSelectionMaster,
                                (int32_t)Instance,
                                imageLimitCount,
                                0LL);
  v33 = (int)Instance;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v31,
                                  (int32_t)Instance,
                                  v32);
    v69 = (char)Instance;
    if ( !v28 )
      goto LABEL_54;
  }
  else
  {
    v69 = 0;
    if ( !v28 )
      goto LABEL_54;
  }
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v28, v31, v33, 0LL);
  if ( !Instance
    || (v34 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_27085276(
                                     gameObject,
                                     v31,
                                     v33,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v69 & 1,
                                     friendshipNum,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_27086196(
                                     gameObject,
                                     v31,
                                     v33,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     0,
                                     friendshipNum,
                                     0LL));
      v66 = (UIStandFigureR_o *)Instance;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          currentFigureCollectList = this->fields.currentFigureCollectList;
          v68 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
          StandFigureCollect___ctor(v68, 0LL, v66, 0LL);
          if ( currentFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_54:
    sub_B2C434(Instance, v24);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v71,
    v34,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v35 = ignoreFormChangeCheck | ((unsigned int)formId >> 31);
  v72 = v71;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v72,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v36 )
      break;
    current = (SvtMultiPortraitEntity_o *)v72.fields.current;
    if ( !v72.fields.current )
      sub_B2C434(v36, v37);
    klass = (int)v72.fields.current[2].klass;
    if ( klass >= 1 )
      v40 = klass + 1;
    else
      v40 = 1;
    if ( v35 )
    {
      if ( !StandFigureNode )
        sub_B2C434(v36, v37);
      v41 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v41,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v40,
                           0LL,
                           v69 & 1,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_B2C434(v36, v37);
      v50 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v50,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v40,
                           0LL,
                           0LL);
    }
    v51 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B2C434(0LL, v43);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    transform = UnityEngine_Component__get_transform(v51, 0LL);
    if ( !transform )
      sub_B2C434(0LL, v53);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v55 = UnityEngine_Component__get_gameObject(v51, 0LL);
      v57 = current->fields.commonPosition;
      if ( !v57 )
        sub_B2C434(v55, v56);
      max_length = v57->max_length;
      if ( max_length == 1 )
      {
        v63 = sub_B2C460(v55);
        sub_B2C400(v63, 0LL);
      }
      if ( !max_length )
      {
        v64 = sub_B2C460(v55);
        sub_B2C400(v64, 0LL);
      }
      GameObjectExtensions__AddLocalPosition_31326896(v55, (float)v57->m_Items[1], (float)v57->m_Items[2], 0LL);
    }
    v59 = this->fields.currentFigureCollectList;
    v60 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v60, current, (UIStandFigureR_o *)v51, 0LL);
    if ( !v59 )
      sub_B2C434(v61, v62);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v59,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v72,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  __int64 v13; // x1
  UIStandFigureR_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Object_o *gameObject; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x24
  UnityEngine_Object_o *v21; // x20
  __int64 v22; // x1
  UIStandFigureR_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Component_o *v25; // x0
  UnityEngine_Object_o *v26; // x20
  int v27; // w20
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  int v29[2]; // [xsp+20h] [xbp-60h]
  int v30; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418626D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418626D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v31 = v28;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v31,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B2C434(v9, v10);
    monitor = (UnityEngine_Object_o *)v31.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v14 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v14 )
        sub_B2C434(0LL, v13);
      UIStandFigureR__ReleaseCharacter(v14, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_B2C434(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
    }
  }
  v29[0] = 88;
  v30 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v30 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentFigureCollectList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v31 = v28;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v18 )
      break;
    v20 = v31.fields.current;
    if ( !v31.fields.current )
      sub_B2C434(v18, v19);
    v21 = (UnityEngine_Object_o *)v31.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      v23 = (UIStandFigureR_o *)v20[1].monitor;
      if ( !v23 )
        sub_B2C434(0LL, v22);
      UIStandFigureR__ReleaseCharacter(v23, 0LL);
      v25 = (UnityEngine_Component_o *)v20[1].monitor;
      if ( !v25 )
        sub_B2C434(0LL, v24);
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v25, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(v26, 0LL);
    }
  }
  v29[0] = 187;
  v27 = ++v30;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v27 && v29[v27 - 1] == 187 )
    v30 = v27 - 1;
  currentFigureCollectList = this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
LABEL_43:
    sub_B2C434(currentFigureCollectList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentFigureCollectList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_B2C434(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418625C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_CombineResultEffectComponent__EndLoad_b__144_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418625C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__144_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v9, 0LL);
}


void __fastcall CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CombineResultEffectComponent_o *v8; // x19
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
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v26; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v29; // x20
  __int64 v30; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v31; // x8
  int32_t v32; // w20
  CombineResultEffectComponent_o *v33; // x0
  int32_t v34; // w21
  const MethodInfo *v35; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v36; // x22
  System_Action_o *v37; // x23
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v8 = this;
  if ( (byte_4186265 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v9);
    sub_B2C35C(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v10);
    sub_B2C35C(&Method_CombineResultEffectComponent__EndPlay_b__154_0__, v11);
    sub_B2C35C(&Method_CombineResultEffectComponent__EndPlay_b__154_1__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v15);
    this = (CombineResultEffectComponent_o *)sub_B2C35C(&StringLiteral_21493/*"playVoice"*/, v16);
    byte_4186265 = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
      {
        v38 = sub_B2C460(this);
        sub_B2C400(v38, 0LL);
      }
      v19 = playVoiceList->m_Items[playCnt];
      if ( v19 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_21493/*"playVoice"*/,
          v19->fields.delay,
          0LL);
        return;
      }
    }
LABEL_35:
    sub_B2C434(this, method);
  }
  if ( v8->fields.player )
    CombineResultEffectComponent__stopVoice(v8, method);
  v8->fields.playCnt = 0;
  v8->fields.playVoiceList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  this = (CombineResultEffectComponent_o *)v8->fields.limitUpKinds;
  if ( !this )
    goto LABEL_35;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                             (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this,
                                             v8->fields.kind,
                                             (const MethodInfo_2D87A7C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8->fields.isLimitUpSuppression )
      goto LABEL_13;
    kind = v8->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_13;
    baseUsrSvtData = v8->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_35;
    v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v39.fields.currentCryptoKey = v30;
    *(_QWORD *)&v39.fields.fakeValue = v29;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               v39,
                                               0LL);
    v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v8->fields.baseUsrSvtData;
    if ( !v31 )
      goto LABEL_35;
    v32 = (int)this;
    v33 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v31[6],
                                              0LL);
    v34 = (_DWORD)v33 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v33, v32, (_DWORD)v33 + 1, v35) )
    {
      v36 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_B2C42C(ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v36,
        (Il2CppObject *)v8,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__154_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v32, v34, v36, v37, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v8->fields.limitUpResultCheck;
      v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v21, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__154_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_35;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v21, 1, 0LL);
    }
  }
  else if ( v8->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v8, method);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v8, v22) )
    {
      this = (CombineResultEffectComponent_o *)v8->fields.touchInfo;
      if ( !this )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v8->fields.costumeId;
      v26 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v26->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v8, v23);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v8, v8->fields.skillShowIndex, v24);
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
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_418626A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418626A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v8 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__,
        0LL);
      if ( !Instance )
        sub_B2C434(v11, v12);
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v10, 0LL);
    }
  }
  else if ( callbackFunc )
  {
    CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
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
  unsigned int v9; // w10
  __int64 v11; // x0

  if ( (byte_4186251 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4186251 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_B2C434(v6, *(_QWORD *)&svtId);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v11 = sub_B2C460(v6);
      sub_B2C400(v11, 0LL);
    }
    if ( ServantIdsIgnoreFormChange->m_Items[v9 + 1] == svtId )
      break;
    if ( (int)++v9 >= max_length )
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
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x19
  __int64 v21; // x20
  __int64 v22; // x21
  ServantEntity_o *v23; // [xsp+0h] [xbp-30h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_418626B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&messageId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_418626B = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_23;
    v15 = (ServantCostumeMaster_o *)Instance;
    v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v25.fields.currentCryptoKey = v17;
    *(_QWORD *)&v25.fields.fakeValue = v16;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v25, 0LL);
    if ( !v15 )
      goto LABEL_23;
    if ( ServantCostumeMaster__TryGetEntity(v15, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_23:
      sub_B2C434(Instance, v13);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = this->fields.resUsrSvtData;
  if ( !v19 )
    goto LABEL_23;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v22;
  *(_QWORD *)&v26.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v26, 0LL);
  if ( !v20 )
    goto LABEL_23;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v20,
          (WarEntity_o **)&v23,
          (int32_t)Instance,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v23;
  if ( !v23 )
    goto LABEL_23;
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

  if ( (byte_418624C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, fmsString);
    byte_418624C = 1;
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
    sub_B2C434(fsm, fmsString);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
  __int64 v9; // x23
  int64_t v10; // x20
  unsigned int v11; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v13; // q1
  __int64 v14; // x21
  __int128 v15; // q0
  int64_t v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v24; // x8
  SkillInfo_o *v25; // x9
  SkillInfo_o *v26; // x8
  bool v27; // w8
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v32; // [xsp+68h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *v34; // [xsp+78h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_418625F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418625F = 1;
  }
  skillInfoList = 0LL;
  tdInfo = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
          if ( Instance )
          {
            v9 = *(_QWORD *)(Instance + 24);
            v10 = Instance;
            if ( (int)v9 >= 1 )
            {
              v11 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_54;
                v13 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v14 = *(_QWORD *)(v10 + 8LL * (int)v11 + 32);
                *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v31.fields.fakeValue = v13;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v30 = v31;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
                if ( !v14 )
                  goto LABEL_54;
                v15 = *(_OWORD *)(v14 + 32);
                v16 = Instance;
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
                *(_OWORD *)&v29.fields.fakeValue = v15;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v29, 0LL);
                if ( v16 == Instance )
                  break;
                if ( (int)++v11 >= (int)v9 )
                  goto LABEL_21;
                if ( v11 >= *(_DWORD *)(v10 + 24) )
                {
LABEL_55:
                  v28 = sub_B2C460(Instance);
                  sub_B2C400(v28, 0LL);
                }
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v14;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
                (System_Int32_array **)v14,
                v17,
                v18,
                v19,
                v20,
                v21,
                v22);
            }
LABEL_21:
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
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    Instance = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
                    break;
                  if ( !skillInfoList )
                    goto LABEL_54;
                  if ( i >= skillInfoList->max_length )
                    goto LABEL_55;
                  v24 = skillInfoList->m_Items[i];
                  if ( !v24 || !v34 )
                    goto LABEL_54;
                  if ( i >= v34->max_length )
                    goto LABEL_55;
                  v25 = v34->m_Items[i];
                  if ( !v25 )
                    goto LABEL_54;
                  id = (unsigned int)v24->fields.id;
                  if ( *(_QWORD *)&v24->fields.id != *(_QWORD *)&v25->fields.id )
                  {
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_54;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      id,
                      v24->fields.lv,
                      0LL);
                    if ( !v34 )
                      goto LABEL_54;
                    if ( i >= v34->max_length )
                      goto LABEL_55;
                    v26 = v34->m_Items[i];
                    if ( !v26 )
                      goto LABEL_54;
                    Instance = (int64_t)this->fields.costumeSkillInfoManager;
                    if ( !Instance )
                      goto LABEL_54;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      (CombineResultEffectComponent_CostumeSkillInfoManager_o *)Instance,
                      v26->fields.id,
                      v26->fields.lv,
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
                        v27 = 0;
LABEL_52:
                        this->fields.treasureDeviceEnabled = v27;
                        return;
                      }
                      if ( tdInfo && v32 )
                      {
                        v27 = tdInfo->fields.id != v32->fields.id || tdInfo->fields.lv != v32->fields.lv;
                        goto LABEL_52;
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
LABEL_54:
    sub_B2C434(Instance, id);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Transform_o *transform; // x20
  int v16; // s0
  const MethodInfo *v19; // x1
  int32_t kind; // w8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x1

  if ( (byte_418623C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_11485/*"ResultEffect"*/, v6);
    byte_418623C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_20;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_20;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11485/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_20;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.bgCollider;
  if ( !fsm )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)fsm, 0, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.touchInfo;
  if ( !fsm )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  kind = this->fields.kind;
  if ( kind == 16 || kind == 14 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v22 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
    v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v24, 0LL);
      return;
    }
LABEL_20:
    sub_B2C434(fsm, method);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v19);
  if ( this->fields.kind == 6 )
    CombineResultEffectComponent__loadBoxGachaEffect(this, v25);
  else
    CombineResultEffectComponent__SetResultServantVoiceData(this, v25);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  bool v13; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4186266 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4186266 = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)costumeSkillInfoManager;
  v12 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v12;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                        v16,
                                                                                        0LL);
  if ( !v10 )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v10,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_B2C434(costumeSkillInfoManager, method);
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
    sub_B2C434(0LL, method);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4186273 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5477/*"END_ANIMATION"*/, method);
    byte_4186273 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_B2C434(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5477/*"END_ANIMATION"*/, 0LL);
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
  Il2CppClass *klass; // x8
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
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
  if ( (byte_418626F & 1) == 0 )
  {
    sub_B2C35C(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CombineResultEffectComponent_o *)sub_B2C35C(&StringLiteral_8388/*"LIMIT_COUNT_SEALED_TITLE"*/, v8);
    byte_418626F = 1;
  }
  klass = v2[12].klass;
  if ( !klass )
    goto LABEL_17;
  declaringType = klass->_1.declaringType;
  parent = klass->_1.parent;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = declaringType;
  *(_QWORD *)&v20.fields.fakeValue = parent;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[12].klass;
  if ( !v12 )
    goto LABEL_17;
  v13 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12[6], 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_17;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)this,
                                    v13,
                                    v14 + 1,
                                    0LL);
  v16 = (LimitCountSealDialogComponent_o *)v2[9].klass;
  v17 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8388/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v19 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_B2C42C(LimitCountSealDialogComponent_CallbackFunc_TypeInfo);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v19,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !v16 )
LABEL_17:
    sub_B2C434(this, method);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
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
  CommonUI_o *Instance; // x20
  System_String_o *v40; // x0
  System_String_o *v41; // x22
  System_String_o *v42; // x0
  System_String_o *v43; // x21
  System_Action_o *v44; // x23
  int v45; // [xsp+3Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_418626C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__, v7);
    sub_B2C35C(&CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_11666/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418626C = 1;
  }
  v45 = 0;
  v11 = sub_B2C42C(CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass165_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass165_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_33;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
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
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v46.fields.currentCryptoKey = v25;
      *(_QWORD *)&v46.fields.fakeValue = v24;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
      *(_DWORD *)(v11 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v11 + 24) = this->fields.costumeId;
      v26 = this->fields.resUsrSvtData;
      if ( v26 )
      {
        v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v47.fields.currentCryptoKey = v28;
        *(_QWORD *)&v47.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
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
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v48.fields.currentCryptoKey = v33;
          *(_QWORD *)&v48.fields.fakeValue = v32;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
          v35 = *(_DWORD *)(v11 + 24);
          v36 = v34;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          }
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v36, v35, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v31,
                                                *(_DWORD *)(v11 + 24),
                                                v37);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v40 = System_Int32__ToString((int32_t)&v45, 0LL);
          v41 = System_String__Concat_44305532((System_String_o *)StringLiteral_11666/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v40, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v42 = LocalizationManager__Get(v41, 0LL);
          v43 = System_String__Format(v42, NameFromMessageId, 0LL);
          v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v11,
            Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v20 = 1;
            CommonUI__OpenNotificationDialog(
              Instance,
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
              0LL);
            return v20;
          }
        }
      }
    }
LABEL_33:
    sub_B2C434(AscensionAfterDialogId, v13);
  }
  return v20;
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x24
  CommonUI_o *v34; // x22
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *v36; // x20
  CommonUI_o *v37; // x22
  ServantStatusDialog_EndDelegate_o *v38; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186272 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__, v16);
    sub_B2C35C(&CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo, v17);
    byte_4186272 = 1;
  }
  entity = 0LL;
  v18 = sub_B2C42C(CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass171_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass171_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_23;
  *(_QWORD *)(v18 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)finishCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = (CommonUI_o *)NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, (int64_t)UserId, svtId, 0LL) )
    {
      UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = UserId;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v34 )
      {
        CommonUI__maskFadein(v34, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          UserId = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( UserId )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)UserId, 0, 0LL);
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v36 = entity;
            v37 = (CommonUI_o *)Instance;
            v38 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v38,
              (Il2CppObject *)v18,
              Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v37 )
            {
              CommonUI__OpenServantStatusDialog_17983580(v37, 33, v36, limitCount, v38, 0LL);
              return;
            }
          }
        }
      }
LABEL_23:
      sub_B2C434(UserId, v20);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_17971588(UserId, *(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall CombineResultEffectComponent__ReleaseVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SoundManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4186268 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    byte_4186268 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v10);
    SoundManager__ReleaseAudioAssetStorage(Instance, this->fields.asstName, 0LL);
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
  SvtMultiPortraitMaster_o *MasterData_WarQuestSelectionMaster; // x25
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v42; // x25
  _BOOL8 v43; // x0
  __int64 v44; // x1
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x1
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
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
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x27
  StandFigureCollect_o *v77; // x28
  __int64 v78; // x0
  __int64 v79; // x1
  const MethodInfo *v80; // x2
  __int64 v81; // x0
  __int64 v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  UIStandFigureR_o *v84; // x21
  struct System_Collections_Generic_List_StandFigureCollect__o *v85; // x22
  StandFigureCollect_o *v86; // x23
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  int32_t saveDataMapList; // w21
  float FadeTime; // s8
  int32_t datalist_high; // w22
  __int64 v91; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v92; // x24
  StandFigureCollect_o *v93; // x8
  __int64 v94; // x0
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+40h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418624F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v12);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&StandFigureCollect_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_8526/*"LimitUpResSvtNodeName"*/, v20);
    byte_418624F = 1;
  }
  entity = 0LL;
  memset(&v97, 0, sizeof(v97));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8526/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  v24 = Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_WarQuestSelectionMaster = (SvtMultiPortraitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     v24,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v24,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_74;
  v27 = (ServantLimitAddMaster_o *)Instance;
  v29 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v99.fields.currentCryptoKey = v29;
  *(_QWORD *)&v99.fields.fakeValue = v28;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v99, 0LL);
  v30 = this->fields.resUsrSvtData;
  if ( !v30 )
    goto LABEL_74;
  v31 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v30->fields.limitCount,
                                0LL);
  if ( !v27 )
    goto LABEL_74;
  v32 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v27, &entity, v31, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_74;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v32 = LimitCountUpResultServantLimitCount;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_74;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v31,
                                 v32,
                                 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v31, ServantLimitCountSealAfter, 0LL);
  v35 = this->fields.resUsrSvtData;
  if ( !v35 )
    goto LABEL_74;
  v36 = (int)Instance;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v100.fields.currentCryptoKey = v38;
  *(_QWORD *)&v100.fields.fakeValue = v37;
  v39 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v100, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v39, (int32_t)v39, v36, v40);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_74:
    sub_B2C434(Instance, v23);
  v41 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                MasterData_WarQuestSelectionMaster,
                                v31,
                                v36,
                                0LL);
  if ( Instance
    && (v42 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v96,
      v42,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v97 = v96;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v97,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v43 )
        break;
      if ( !StandFigureNode )
        sub_B2C434(v43, v44);
      current = (SvtMultiPortraitEntity_o *)v97.fields.current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_B2C434(gameObject, v47);
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
      v56 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_B2C434(0LL, v49);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (System_Int32_array **)current,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      transform = UnityEngine_Component__get_transform(v56, 0LL);
      if ( !transform )
        sub_B2C434(0LL, v58);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v60 = UnityEngine_Component__get_transform(v56, 0LL);
        if ( !v60 )
          sub_B2C434(0LL, v61);
        *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Transform__get_localPosition(v60, 0LL);
        v67 = current->fields.commonPosition;
        if ( !v67 )
          sub_B2C434(v62, v63);
        max_length = v67->max_length;
        if ( !max_length )
        {
          v82 = sub_B2C460(v62);
          sub_B2C400(v82, 0LL);
        }
        if ( max_length == 1 )
        {
          v81 = sub_B2C460(v62);
          sub_B2C400(v81, 0LL);
        }
        v70 = v67->m_Items[1];
        v69 = v67->m_Items[2];
        v71 = v64;
        v72 = v65;
        v73 = v66;
        v74 = UnityEngine_Component__get_transform(v56, 0LL);
        if ( !v74 )
          sub_B2C434(0LL, v75);
        v101.fields.x = v71 + (float)v70;
        v101.fields.y = v72 + (float)v69;
        v101.fields.z = v73;
        UnityEngine_Transform__set_localPosition(v74, v101, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v56,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = this->fields.afterFigureCollectList;
      v77 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
      StandFigureCollect___ctor(v77, current, (UIStandFigureR_o *)v56, 0LL);
      if ( !afterFigureCollectList )
        sub_B2C434(v78, v79);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v97,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_74;
    v83 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_27085276(
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
      goto LABEL_74;
    v84 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_74;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v85 = this->fields.afterFigureCollectList;
    v86 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v86, 0LL, v84, 0LL);
    if ( !v85 )
      goto LABEL_74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v85,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v80);
  saveDataMapList = 0;
  FadeTime = 0.0;
  datalist_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      v94 = sub_B2C460(LimitUpSvtVoiceList);
      sub_B2C400(v94, 0LL);
    }
    Instance = (DataManager_o *)LimitUpSvtVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_74;
    datalist_high = HIDWORD(Instance->fields.datalist);
    saveDataMapList = (int32_t)Instance->fields.saveDataMapList;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                                (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Instance >= 1 )
  {
    v91 = 0LL;
    while ( 1 )
    {
      v92 = this->fields.afterFigureCollectList;
      if ( !v92 )
        break;
      if ( v92->fields._size <= (unsigned int)v91 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v93 = v92->fields._items->m_Items[v91];
      if ( !v93 )
        break;
      Instance = (DataManager_o *)v93->fields._standFigure_k__BackingField;
      if ( !Instance )
        break;
      UIStandFigureR__SetFace_40495504((UIStandFigureR_o *)Instance, datalist_high, saveDataMapList, 0LL, FadeTime, 0LL);
      Instance = (DataManager_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                                    (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
      if ( (int)++v91 >= (int)Instance )
        return;
    }
    goto LABEL_74;
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CombineRootComponent_c *v28; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_4186238 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, usrSvtData);
    sub_B2C35C(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__, v13);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v14);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    byte_4186238 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    *(System_String_array ***)&currentSkillId,
    *(System_String_array ***)&currentSkillLv,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v28 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v28 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v28->static_fields->COMBINE_ASSET_PATH;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v30, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t FigureImageLimitCount; // w0
  const MethodInfo *v7; // x6

  if ( (byte_4186248 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2733/*"BaseSvtNodeName"*/, *(_QWORD *)&formId);
    byte_4186248 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_B2C434(0LL, *(_QWORD *)&formId);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_2733/*"BaseSvtNodeName"*/,
    0,
    v7);
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
  const MethodInfo *v12; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_418624D & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_B2C35C(&StringLiteral_8525/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_418624D = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_12:
    sub_B2C434(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8525/*"LimitUpBaseSvtNodeName"*/,
    1,
    v12);
}


void __fastcall CombineResultEffectComponent__SetCardParam(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
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
  void *resUsrSvtData; // x0
  System_String_o *v41; // x20
  UnityEngine_Transform_o *transform; // x0
  UIExtrusionLabel_o *v43; // x20
  System_String_o *v44; // x20
  UnityEngine_Transform_o *v45; // x0
  UIExtrusionLabel_o *v46; // x20
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x20
  __int64 v49; // x21
  struct UserServantEntity_o *v50; // x8
  int32_t v51; // w20
  int32_t v52; // w21
  struct UserServantEntity_o *v53; // x8
  struct UserServantEntity_o *v54; // x8
  int32_t v55; // w20
  int32_t v56; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v58; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  float v61; // s8
  _BOOL4 v62; // w20
  __int64 v63; // x23
  int32_t v64; // w20
  int32_t v65; // w21
  int v66; // w22
  _DWORD *v67; // x25
  __int64 *v68; // x24
  __int64 *v69; // x8
  __int64 *v70; // x8
  __int64 *v71; // x8
  System_String_o *v72; // x20
  UnityEngine_Transform_o *v73; // x0
  UIExtrusionLabel_o *v74; // x20
  System_String_o *v75; // x20
  UnityEngine_Transform_o *v76; // x0
  UIExtrusionLabel_o *v77; // x20
  struct UserServantEntity_o *v78; // x8
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x2
  __int64 v83; // x26
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x28
  StandFigureCollect_o *v85; // x8
  int32_t v86; // w1
  System_String_o *v87; // x20
  UnityEngine_Transform_o *v88; // x0
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v93; // x9
  struct System_String_array *startAniName; // x8
  int v95; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v97; // w2
  CombineResultEffectComponent_o *v98; // x0
  System_String_o *v99; // x1
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x2
  bool v103; // w2
  CombineResultEffectComponent_o *v104; // x0
  System_String_o *v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 *v112; // x8
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v113; // x20
  EventDelegate_Callback_o *v114; // x22
  EventDelegate_o *v115; // x21
  const MethodInfo *v116; // x2
  System_String_o *v117; // x20
  UnityEngine_Transform_o *v118; // x0
  UnityEngine_Component_o *v119; // x20
  float Value; // s0
  float v121; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v123; // x20
  System_Int32_array **v124; // x1
  BattleServantConfConponent_o *v125; // x0
  const MethodInfo *v126; // x2
  struct System_String_array *v127; // x8
  int v128; // w9
  System_Int32_array **v129; // x20
  const MethodInfo *v130; // x2
  __int64 v131; // x22
  float FadeTime; // s0
  System_Int32_array **v133; // x20
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  const MethodInfo *v140; // x1
  __int64 v141; // x0
  __int64 v142; // [xsp+8h] [xbp-68h] BYREF
  __int64 v143; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186240 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent__SetCardParam_b__115_0__, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v6);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UILabel___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v8);
    sub_B2C35C(&EventDelegate_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v10);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_4322/*"CostumeName"*/, v15);
    sub_B2C35C(&StringLiteral_2733/*"BaseSvtNodeName"*/, v16);
    sub_B2C35C(&StringLiteral_16801/*"bit_result_120"*/, v17);
    sub_B2C35C(&StringLiteral_16808/*"bit_result_extraskill02"*/, v18);
    sub_B2C35C(&StringLiteral_16817/*"bit_result_nobledeliverance"*/, v19);
    sub_B2C35C(&StringLiteral_12336/*"START_ANIMATION"*/, v20);
    sub_B2C35C(&StringLiteral_16805/*"bit_result_command_card_exceed"*/, v21);
    sub_B2C35C(&StringLiteral_16814/*"bit_result_limitbreak"*/, v22);
    sub_B2C35C(&StringLiteral_16809/*"bit_result_friendship_exceed"*/, v23);
    sub_B2C35C(&StringLiteral_11441/*"ResMaxLvExceedNodeName"*/, v24);
    sub_B2C35C(&StringLiteral_16822/*"bit_result_skillrank"*/, v25);
    sub_B2C35C(&StringLiteral_16803/*"bit_result_advent02"*/, v26);
    sub_B2C35C(&StringLiteral_16812/*"bit_result_grail_02"*/, v27);
    sub_B2C35C(&StringLiteral_16823/*"bit_result_skillup"*/, v28);
    sub_B2C35C(&StringLiteral_4451/*"CrtMaxLvExceedNodeName"*/, v29);
    sub_B2C35C(&StringLiteral_16818/*"bit_result_powerup"*/, v30);
    sub_B2C35C(&StringLiteral_13036/*"StartAnimationName"*/, v31);
    sub_B2C35C(&StringLiteral_16811/*"bit_result_grail_01"*/, v32);
    sub_B2C35C(&StringLiteral_16802/*"bit_result_advent01"*/, v33);
    sub_B2C35C(&StringLiteral_16807/*"bit_result_extraskill01"*/, v34);
    sub_B2C35C(&StringLiteral_16821/*"bit_result_skilldeliverance"*/, v35);
    sub_B2C35C(&StringLiteral_16824/*"bit_result_skinchange01"*/, v36);
    sub_B2C35C(&StringLiteral_4452/*"CrtMaxLvNodeName"*/, v37);
    sub_B2C35C(&StringLiteral_11442/*"ResMaxLvNodeName"*/, v38);
    sub_B2C35C(&StringLiteral_13176/*"SvtEqCardScale"*/, v39);
    byte_4186240 = 1;
  }
  v143 = 0LL;
  v142 = 0LL;
  switch ( this->fields.kind )
  {
    case 0:
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = (void *)UserServantEntity__isLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( ((unsigned __int8)resUsrSvtData & 1) == 0 )
        goto LABEL_98;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_179;
      v93 = this->fields.resUsrSvtData;
      if ( !v93 )
        goto LABEL_179;
      if ( baseUsrSvtData->fields.exp != v93->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_172;
      }
LABEL_98:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_179;
      v95 = this->fields.successInfo - 1;
      if ( v95 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v95];
LABEL_172:
        resUsrSvtData = this->fields.fsm;
        if ( resUsrSvtData )
        {
          v133 = (System_Int32_array **)*p_LimitAnimName;
          resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
          if ( resUsrSvtData )
          {
            resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                              (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                              0LL);
            if ( resUsrSvtData )
            {
              *((_QWORD *)resUsrSvtData + 7) = v133;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56),
                v133,
                v134,
                v135,
                v136,
                v137,
                v138,
                v139);
              CombineResultEffectComponent__SetLevelUpSvtFigure(this, v140);
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
                    goto LABEL_169;
                  }
                }
              }
            }
          }
        }
LABEL_179:
        sub_B2C434(resUsrSvtData, method);
      }
      goto LABEL_180;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, method);
      resUsrSvtData = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4452/*"CrtMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v41 = (System_String_o *)resUsrSvtData;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(transform, v41, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v43 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v143) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v143 + 4, 0LL);
      if ( !v43 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v43, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11442/*"ResMaxLvNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v44 = (System_String_o *)resUsrSvtData;
      v45 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v45, v44, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v46 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v143) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v143, 0LL);
      if ( !v46 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v46, (System_String_o *)resUsrSvtData, 0LL);
      v47 = this->fields.baseUsrSvtData;
      if ( !v47 )
        goto LABEL_179;
      v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
      v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v144.fields.currentCryptoKey = v49;
      *(_QWORD *)&v144.fields.fakeValue = v48;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v144, 0LL);
      v50 = this->fields.baseUsrSvtData;
      if ( !v50 )
        goto LABEL_179;
      v51 = (int)resUsrSvtData;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v50->fields.limitCount, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      resUsrSvtData = (void *)ImageLimitCount__GetImageLimitCount(v51, v52, 0LL);
      v53 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)resUsrSvtData;
      if ( !v53 )
        goto LABEL_179;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v53->fields.svtId,
                                0LL);
      v54 = this->fields.resUsrSvtData;
      if ( !v54 )
        goto LABEL_179;
      v55 = (int)resUsrSvtData;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54->fields.limitCount, 0LL);
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v55, v56, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      v61 = 0.0;
      this->fields.currentImgLimitCnt = ImageLimitCount;
      v62 = resSvtNameData != 0LL;
      if ( isLimitUpSuppression )
        goto LABEL_29;
      if ( this->fields.oldImgLimitCnt != ImageLimitCount )
        goto LABEL_69;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)resUsrSvtData, 0LL) )
      {
LABEL_69:
        this->fields.isChangeCardImg = 1;
        CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v58);
        CombineResultEffectComponent__setBaseSvtGraphCard(this, v62, v81);
        CombineResultEffectComponent__setResultSvtGraphCard(this, v62, v82);
        v68 = &StringLiteral_16803/*"bit_result_advent02"*/;
LABEL_154:
        resUsrSvtData = this->fields.fsm;
        if ( !resUsrSvtData )
          goto LABEL_179;
        v129 = (System_Int32_array **)*v68;
        goto LABEL_165;
      }
      if ( this->fields.isLimitUpSuppression || !CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v58) )
      {
LABEL_29:
        v63 = 0LL;
        v64 = 0;
        v65 = 0;
        goto LABEL_30;
      }
      resUsrSvtData = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v130);
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( *((_DWORD *)resUsrSvtData + 6) )
      {
        v131 = *((_QWORD *)resUsrSvtData + 4);
        if ( !v131 )
          goto LABEL_179;
        v65 = *(_DWORD *)(v131 + 28);
        v64 = *(_DWORD *)(v131 + 56);
        FadeTime = ServantVoiceData__GetFadeTime(*((ServantVoiceData_o **)resUsrSvtData + 4), 0LL);
        v63 = *(_QWORD *)(v131 + 32);
        v61 = FadeTime;
LABEL_30:
        resUsrSvtData = (void *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                                  (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        v66 = (int)resUsrSvtData;
        if ( v63 )
        {
          v67 = (_DWORD *)(v63 + 24);
          v68 = &StringLiteral_16802/*"bit_result_advent01"*/;
          if ( (_DWORD)resUsrSvtData != *(_DWORD *)(v63 + 24) || (int)resUsrSvtData <= 0 )
            goto LABEL_154;
        }
        else
        {
          if ( (int)resUsrSvtData < 1 )
          {
            v68 = &StringLiteral_16802/*"bit_result_advent01"*/;
            goto LABEL_154;
          }
          v67 = (_DWORD *)&off_18;
        }
        v68 = &StringLiteral_16802/*"bit_result_advent01"*/;
        v83 = 0LL;
        while ( 1 )
        {
          currentFigureCollectList = this->fields.currentFigureCollectList;
          if ( !currentFigureCollectList )
            goto LABEL_179;
          if ( currentFigureCollectList->fields._size <= (unsigned int)v83 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v85 = currentFigureCollectList->fields._items->m_Items[v83];
          if ( !v85 )
            goto LABEL_179;
          resUsrSvtData = v85->fields._standFigure_k__BackingField;
          if ( v63 )
          {
            if ( (unsigned int)v83 >= *v67 )
              goto LABEL_180;
            if ( !resUsrSvtData )
              goto LABEL_179;
            v86 = *(_DWORD *)(v63 + 32 + 4 * v83);
          }
          else
          {
            if ( !resUsrSvtData )
              goto LABEL_179;
            v86 = v65;
          }
          UIStandFigureR__SetFace_40495504((UIStandFigureR_o *)resUsrSvtData, v86, v64, 0LL, v61, 0LL);
          if ( (int)++v83 >= v66 )
            goto LABEL_154;
        }
      }
      goto LABEL_180;
    case 2:
      v97 = 1;
      v98 = this;
      v99 = (System_String_o *)StringLiteral_16823/*"bit_result_skillup"*/;
      goto LABEL_108;
    case 3:
      v71 = &StringLiteral_16821/*"bit_result_skilldeliverance"*/;
      goto LABEL_107;
    case 4:
      v103 = 1;
      v104 = this;
      v105 = (System_String_o *)StringLiteral_16823/*"bit_result_skillup"*/;
      goto LABEL_125;
    case 5:
      v69 = &StringLiteral_16817/*"bit_result_nobledeliverance"*/;
      goto LABEL_124;
    case 6:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_2733/*"BaseSvtNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v117 = (System_String_o *)resUsrSvtData;
      v118 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v118, v117, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_179;
      v119 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13176/*"SvtEqCardScale"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)resUsrSvtData, 0LL);
      if ( !v119 )
        goto LABEL_179;
      v121 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v119, 0LL);
      resUsrSvtData = CharaGraphManager__CreateTexturePrefab_25402380(
                        gameObject,
                        this->fields.resUsrSvtData,
                        10,
                        0LL,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v123 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v145.fields.x = -50.0;
      v145.fields.y = 92.0;
      v145.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)resUsrSvtData, v145, 0LL);
      resUsrSvtData = UnityEngine_Component__get_transform(v123, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v146.fields.x = v121;
      v146.fields.y = v121;
      v146.fields.z = v121;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)resUsrSvtData, v146, 0LL);
      resUsrSvtData = this->fields.svtResultInfoWindow;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resUsrSvtData, 1, 0LL);
      resUsrSvtData = this->fields.svtResultInfoWindow;
      if ( !resUsrSvtData )
        goto LABEL_179;
      SvtCombineResultWindowComponent__setBefSvtEqResultState(
        (SvtCombineResultWindowComponent_o *)resUsrSvtData,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        this->fields.normalExp,
        this->fields.addTotalExp,
        0LL);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = (void *)UserServantEntity__isLevelMax((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
      {
        v70 = (__int64 *)&this->fields.LimitAnimName;
      }
      else
      {
        v127 = this->fields.startAniName;
        if ( !v127 )
          goto LABEL_179;
        v128 = this->fields.successInfo - 1;
        if ( v128 >= v127->max_length )
        {
LABEL_180:
          v141 = sub_B2C460(resUsrSvtData);
          sub_B2C400(v141, 0LL);
        }
        v70 = (__int64 *)&v127->m_Items[v128];
      }
LABEL_163:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
LABEL_164:
      v129 = (System_Int32_array **)*v70;
LABEL_165:
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      *((_QWORD *)resUsrSvtData + 7) = v129;
      v125 = (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56);
      v124 = v129;
LABEL_168:
      sub_B2C2F8(v125, v124, v106, v107, v108, v109, v110, v111);
LABEL_169:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resUsrSvtData, (System_String_o *)StringLiteral_12336/*"START_ANIMATION"*/, 0LL);
      return;
    case 7:
    case 0x15:
      v71 = &StringLiteral_16822/*"bit_result_skillrank"*/;
LABEL_107:
      v99 = (System_String_o *)*v71;
      v98 = this;
      v97 = 0;
LABEL_108:
      CombineResultEffectComponent__SetCardParam_Skill(v98, v99, v97, v3);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v69 = &StringLiteral_16822/*"bit_result_skillrank"*/;
LABEL_124:
      v105 = (System_String_o *)*v69;
      v104 = this;
      v103 = 0;
LABEL_125:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v104, v105, v103, v3);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v112 = &StringLiteral_16823/*"bit_result_skillup"*/;
      goto LABEL_147;
    case 0xB:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v112 = &StringLiteral_16818/*"bit_result_powerup"*/;
LABEL_147:
      v124 = (System_Int32_array **)*v112;
      *((_QWORD *)resUsrSvtData + 7) = *v112;
      v125 = (BattleServantConfConponent_o *)((char *)resUsrSvtData + 56);
      goto LABEL_168;
    case 0xC:
    case 0x16:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4451/*"CrtMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v72 = (System_String_o *)resUsrSvtData;
      v73 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v73, v72, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v74 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v142) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v142 + 4, 0LL);
      if ( !v74 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v74, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_11441/*"ResMaxLvExceedNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v75 = (System_String_o *)resUsrSvtData;
      v76 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v76, v75, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v77 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v142) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v142, 0LL);
      if ( !v77 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v77, (System_String_o *)resUsrSvtData, 0LL);
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      if ( *((_DWORD *)resUsrSvtData + 74) )
        goto LABEL_57;
      v78 = this->fields.resUsrSvtData;
      if ( !v78 )
        goto LABEL_179;
      if ( v78->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_57:
      resUsrSvtData = (void *)UserServantEntity__getFrameType((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      if ( (_DWORD)resUsrSvtData != UserServantEntity__getFrameType(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      resUsrSvtData = this->fields.baseUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = (void *)UserServantEntity__getRarityIcon((UserServantEntity_o *)resUsrSvtData, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      if ( (_DWORD)resUsrSvtData != UserServantEntity__getRarityIcon(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v79);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v80);
        v70 = &StringLiteral_16814/*"bit_result_limitbreak"*/;
      }
      else if ( this->fields.isChangeCardImg )
      {
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v79);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v126);
        v70 = &StringLiteral_16812/*"bit_result_grail_02"*/;
      }
      else
      {
        v70 = &StringLiteral_16811/*"bit_result_grail_01"*/;
      }
      goto LABEL_163;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v70 = &StringLiteral_16809/*"bit_result_friendship_exceed"*/;
      goto LABEL_164;
    case 0xF:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_4322/*"CostumeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v87 = (System_String_o *)resUsrSvtData;
      v88 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v88, v87, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !resUsrSvtData )
        goto LABEL_179;
      UILabel__set_text((UILabel_o *)resUsrSvtData, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v89);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v90);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v91);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v70 = &StringLiteral_16824/*"bit_result_skinchange01"*/;
      goto LABEL_164;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v70 = &StringLiteral_16805/*"bit_result_command_card_exceed"*/;
      goto LABEL_164;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v100);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v101);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v102);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_179;
      v70 = &StringLiteral_16801/*"bit_result_120"*/;
      goto LABEL_164;
    case 0x19:
      resUsrSvtData = this->fields.effect;
      if ( !resUsrSvtData )
        goto LABEL_179;
      resUsrSvtData = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_179;
      v113 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
               (UnityEngine_GameObject_o *)resUsrSvtData,
               (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v114 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v114,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__115_0__,
        0LL);
      v115 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
      EventDelegate___ctor_29723424(v115, v114, 0LL);
      if ( !v113 )
        goto LABEL_179;
      resUsrSvtData = v113->fields.callbackQueue;
      if ( !resUsrSvtData )
        goto LABEL_179;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resUsrSvtData,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v115,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v116);
      resUsrSvtData = this->fields.fsm;
      v70 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_16808/*"bit_result_extraskill02"*/ : &StringLiteral_16807/*"bit_result_extraskill01"*/);
      if ( !resUsrSvtData )
        goto LABEL_179;
      goto LABEL_164;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  char *effect; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v15; // x21
  EventDelegate_Callback_o *v16; // x23
  EventDelegate_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4186243 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, startName);
    sub_B2C35C(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__, v7);
    sub_B2C35C(&EventDelegate_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_B2C35C(&StringLiteral_12336/*"START_ANIMATION"*/, v11);
    sub_B2C35C(&StringLiteral_13036/*"StartAnimationName"*/, v12);
    byte_4186243 = 1;
  }
  CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  if ( isSkip )
  {
    effect = (char *)this->fields.effect;
    if ( !effect
      || (effect = (char *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL)) == 0LL
      || (v15 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  (UnityEngine_GameObject_o *)effect,
                  (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___),
          v16 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo),
          EventDelegate_Callback___ctor(
            v16,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__,
            0LL),
          v17 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo),
          EventDelegate___ctor_29723424(v17, v16, 0LL),
          !v15)
      || (effect = (char *)v15->fields.callbackQueue) == 0LL )
    {
LABEL_14:
      sub_B2C434(effect, v13);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effect,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  effect = (char *)this->fields.fsm;
  if ( !effect )
    goto LABEL_14;
  effect = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL);
  if ( !effect )
    goto LABEL_14;
  effect = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                     (HutongGames_PlayMaker_FsmVariables_o *)effect,
                     (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                     0LL);
  if ( !effect )
    goto LABEL_14;
  *((_QWORD *)effect + 7) = startName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(effect + 56),
    (System_Int32_array **)startName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  effect = (char *)this->fields.fsm;
  if ( !effect )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12336/*"START_ANIMATION"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  char *effect; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v14; // x21
  EventDelegate_Callback_o *v15; // x23
  EventDelegate_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4186244 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, startName);
    sub_B2C35C(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__, v7);
    sub_B2C35C(&EventDelegate_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_B2C35C(&StringLiteral_12336/*"START_ANIMATION"*/, v11);
    sub_B2C35C(&StringLiteral_13036/*"StartAnimationName"*/, v12);
    byte_4186244 = 1;
  }
  if ( isSkip )
  {
    effect = (char *)this->fields.effect;
    if ( !effect )
      goto LABEL_17;
    effect = (char *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)effect, 0LL);
    if ( !effect )
      goto LABEL_17;
    v14 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
            (UnityEngine_GameObject_o *)effect,
            (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v15 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__,
      0LL);
    v16 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
    EventDelegate___ctor_29723424(v16, v15, 0LL);
    if ( !v14 )
      goto LABEL_17;
    effect = (char *)v14->fields.callbackQueue;
    if ( !effect )
      goto LABEL_17;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)effect,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  if ( this->fields.kind == 18 )
    CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(this, (const MethodInfo *)startName);
  else
    CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  effect = (char *)this->fields.fsm;
  if ( !effect
    || (effect = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effect, 0LL)) == 0LL
    || (effect = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                           (HutongGames_PlayMaker_FsmVariables_o *)effect,
                           (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                           0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(effect + 56),
          (System_Int32_array **)startName,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (effect = (char *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B2C434(effect, startName);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12336/*"START_ANIMATION"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCombineLimit(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        bool autoFadeout,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  CombineRootComponent_c *v30; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v32; // x21

  if ( (byte_418623B & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, baseData);
    sub_B2C35C(&Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__, v12);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v13);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_418623B = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    (System_String_array **)callback,
    (System_String_array **)autoFadeout,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(gameObject, v29);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v30 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v30 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v30->static_fields->EXCEED_ASSET_PATH;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  CombineRootComponent_c *v32; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v35; // x20
  UnityEngine_Transform_o *transform; // x21
  int v37; // s0

  if ( (byte_4186235 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, userServantEntity);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_16805/*"bit_result_command_card_exceed"*/, v16);
    sub_B2C35C(&StringLiteral_11485/*"ResultEffect"*/, v17);
    sub_B2C35C(&StringLiteral_12341/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v18);
    byte_4186235 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)userServantEntity,
    *(System_String_array ***)&cardIndex,
    *(System_String_array ***)&exceedCount,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  v32 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v32 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v32->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16805/*"bit_result_command_card_exceed"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v35 = (UnityEngine_GameObject_o *)effectAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0LL);
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v37, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11485/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v35,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B2C434(effectAssetData, v31);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12341/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v40; // x1

  if ( (byte_418622F & 1) == 0 )
  {
    sub_B2C35C(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo, userSvtEntity);
    sub_B2C35C(&StringLiteral_12344/*"START_COSTUME_EFFECT"*/, v13);
    byte_418622F = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)userSvtEntity,
    *(System_String_array ***)&costumeId,
    (System_String_array **)costumeName,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeName,
    (System_Int32_array **)costumeName,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.setResUsrSvtData = 0;
  v32 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B2C42C(CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v32, 0LL);
  this->fields.costumeSkillInfoManager = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeSkillInfoManager,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B2C434(gameObject, v40);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12344/*"START_COSTUME_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  CombineRootComponent_c *v30; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_Transform_o *transform; // x21
  int v35; // s0

  if ( (byte_4186233 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, userSvtData);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_16809/*"bit_result_friendship_exceed"*/, v14);
    sub_B2C35C(&StringLiteral_11485/*"ResultEffect"*/, v15);
    sub_B2C35C(&StringLiteral_12347/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v16);
    byte_4186233 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)userSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.setResUsrSvtData = 0;
  v30 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v30 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v30->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16809/*"bit_result_friendship_exceed"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v33 = (UnityEngine_GameObject_o *)effectAssetData;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0LL);
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v35, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11485/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v33,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B2C434(effectAssetData, v29);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12347/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x0
  __int64 v29; // x1
  CombineRootComponent_c *v30; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v32; // x21

  if ( (byte_4186234 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, userSvtData);
    sub_B2C35C(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__, v12);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v13);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_4186234 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)userSvtData,
    *(System_String_array ***)&oldFriendShipRank,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v29);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v30 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v30 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v30->static_fields->COMBINE_ASSET_PATH;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1

  if ( (byte_4186229 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12346/*"START_FRIENDSHIPUP_EFFECT"*/, usrSvtData);
    byte_4186229 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    *(System_String_array ***)&oldFriendShipRank,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B2C434(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12346/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
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
  ServantScriptEntity_o *Entity_28845876; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  BattleServantConfConponent_o *p_playVoiceList; // x0
  const MethodInfo *v25; // x2
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v27; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v29; // x0
  const MethodInfo *v30; // x2
  struct UserServantEntity_o *v31; // x8
  CombineResultEffectComponent_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x21
  System_String_o *v40; // x0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v42; // x21
  const MethodInfo *v43; // x2
  struct UserServantEntity_o *v44; // x8
  CombineResultEffectComponent_o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x21
  System_String_o *v53; // x0
  ServantVoiceEntity_o *v54; // x20
  UserServantEntity_o *v55; // x21
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x0
  __int64 v64; // x0
  int name; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v2 = this;
  if ( (byte_418624A & 1) == 0 )
  {
    sub_B2C35C(&CombineResultFormManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantScriptMaster___, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (CombineResultEffectComponent_o *)sub_B2C35C(&string___TypeInfo, v6);
    byte_418624A = 1;
  }
  name = 0;
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_51;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v66.fields.currentCryptoKey = v9;
  *(_QWORD *)&v66.fields.fakeValue = v8;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v66, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_51;
  v10 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v10, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_51;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_51;
  Entity_28845876 = ServantScriptMaster__GetEntity_28845876((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_28845876 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_28845876, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_51;
      combineVoiceId = v2->fields.combineVoiceId;
      method = (const MethodInfo *)v2->fields.baseUsrSvtData;
LABEL_20:
      v16 = ServantVoiceEntity__lotteryLevelUpVoice_31413028(
              (ServantVoiceEntity_o *)this,
              (UserServantEntity_o *)method,
              combineVoiceId,
              0LL);
LABEL_21:
      v23 = (System_Int32_array **)v16;
      p_playVoiceList = (BattleServantConfConponent_o *)&v2->fields.playVoiceList;
      v2->fields.playVoiceList = (struct ServantVoiceData_array *)v23;
      goto LABEL_22;
    }
    method = (const MethodInfo *)v2->fields.baseUsrSvtData;
    if ( method )
    {
      name = (int)method[3].name;
      resUsrSvtData = v2->fields.resUsrSvtData;
      if ( resUsrSvtData )
      {
        combineVoiceId = v2->fields.combineVoiceId;
        if ( combineVoiceId )
        {
          this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
          if ( !this )
            goto LABEL_51;
          goto LABEL_20;
        }
        if ( System_Int32__Equals_38381340((int32_t)&name, resUsrSvtData->fields.lv, 0LL) )
        {
          v29 = v2;
          form = 0;
LABEL_26:
          CombineResultEffectComponent__SetBaseSvtFigure(v29, form, v25);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_B2C374(string___TypeInfo, 1LL);
        v31 = v2->fields.baseUsrSvtData;
        if ( v31 )
        {
          v32 = this;
          *(_QWORD *)&v67.fields.currentCryptoKey = &v31->fields.svtId;
          *(_QWORD *)&v67.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v67, v30);
          if ( v32 )
          {
            v39 = (System_Int32_array **)this;
            if ( this )
            {
              this = (CombineResultEffectComponent_o *)sub_B2C41C(this, v32->klass->_1.element_class);
              if ( !this )
                goto LABEL_53;
            }
            if ( !LODWORD(v32->fields.svtResultInfoWindow) )
              goto LABEL_52;
            v32->fields.skillResultInfoWindow = (struct SkillUpResultWindowComponent_o *)v39;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v32->fields.skillResultInfoWindow,
              v39,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            v40 = System_String__Concat_44385656((System_String_array *)v32, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_35342280(v40, 0LL) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v42 = v2->fields.baseUsrSvtData;
              if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              }
              v16 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v42, 0LL);
              goto LABEL_21;
            }
            this = (CombineResultEffectComponent_o *)sub_B2C374(string___TypeInfo, 1LL);
            v44 = v2->fields.baseUsrSvtData;
            if ( v44 )
            {
              v45 = this;
              *(_QWORD *)&v68.fields.currentCryptoKey = &v44->fields.svtId;
              *(_QWORD *)&v68.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v68, v43);
              if ( v45 )
              {
                v52 = (System_Int32_array **)this;
                if ( !this
                  || (this = (CombineResultEffectComponent_o *)sub_B2C41C(this, v45->klass->_1.element_class)) != 0LL )
                {
                  if ( !LODWORD(v45->fields.svtResultInfoWindow) )
                    goto LABEL_52;
                  v45->fields.skillResultInfoWindow = (struct SkillUpResultWindowComponent_o *)v52;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v45->fields.skillResultInfoWindow,
                    v52,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51);
                  v53 = System_String__Concat_44385656((System_String_array *)v45, 0LL);
                  UnityEngine_PlayerPrefs__SetInt(v53, 1, 0LL);
                  v54 = v2->fields.svtVoiceEntity;
                  v55 = v2->fields.baseUsrSvtData;
                  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                  }
                  v56 = (System_Int32_array **)CombineResultFormManager__lotteryCombineResultInit(v54, v55, 0LL);
                  v2->fields.playVoiceList = (struct ServantVoiceData_array *)v56;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v2->fields.playVoiceList,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60,
                    v61,
                    v62);
                  playVoiceList = v2->fields.playVoiceList;
                  if ( playVoiceList )
                  {
LABEL_23:
                    if ( playVoiceList->max_length )
                    {
                      v27 = playVoiceList->m_Items[0];
                      if ( !v27 )
                        goto LABEL_51;
                      form = v27->fields.form;
                      v29 = v2;
                      goto LABEL_26;
                    }
LABEL_52:
                    v63 = sub_B2C460(this);
                    sub_B2C400(v63, 0LL);
                  }
                  this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                  if ( !this )
                    goto LABEL_51;
                  v23 = (System_Int32_array **)ServantVoiceEntity__lotteryLevelUpVoice_31413028(
                                                 (ServantVoiceEntity_o *)this,
                                                 v2->fields.baseUsrSvtData,
                                                 v2->fields.combineVoiceId,
                                                 0LL);
                  v2->fields.playVoiceList = (struct ServantVoiceData_array *)v23;
                  p_playVoiceList = (BattleServantConfConponent_o *)&v2->fields.playVoiceList;
LABEL_22:
                  sub_B2C2F8(p_playVoiceList, v23, v17, v18, v19, v20, v21, v22);
                  playVoiceList = v2->fields.playVoiceList;
                  if ( !playVoiceList )
                    goto LABEL_51;
                  goto LABEL_23;
                }
LABEL_53:
                v64 = sub_B2C454();
                sub_B2C400(v64, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B2C434(this, method);
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
  DataManager_o *LimitUpSvtVoiceList; // x0
  __int64 v10; // x1
  int32_t entries_high; // w20
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v14; // x21
  __int64 v15; // x22
  struct UserServantEntity_o *v16; // x8
  int32_t v17; // w21
  int32_t v18; // w22
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v21; // x5
  __int64 v22; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4186250 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_8526/*"LimitUpResSvtNodeName"*/, v8);
    byte_4186250 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = (DataManager_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  entries_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LODWORD(LimitUpSvtVoiceList->fields.datalist) )
    {
      v22 = sub_B2C460(LimitUpSvtVoiceList);
      sub_B2C400(v22, 0LL);
    }
    lookup = LimitUpSvtVoiceList->fields.lookup;
    if ( !lookup )
      goto LABEL_23;
    entries_high = HIDWORD(lookup->fields.entries);
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_23;
  v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v15;
  *(_QWORD *)&v24.fields.fakeValue = v14;
  LimitUpSvtVoiceList = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
  v16 = this->fields.resUsrSvtData;
  if ( !v16 )
    goto LABEL_23;
  v17 = (int)LimitUpSvtVoiceList;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_23;
  LimitUpSvtVoiceList = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           LimitUpSvtVoiceList,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_23;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v17, v18, 0LL) )
    goto LABEL_19;
  LimitUpSvtVoiceList = (DataManager_o *)entity;
  if ( !entity )
LABEL_23:
    sub_B2C434(LimitUpSvtVoiceList, v10);
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v18 = LimitCountUpResultServantLimitCount;
LABEL_19:
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v17, v18, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v17,
    ImageLimitCount,
    entries_high,
    (System_String_o *)StringLiteral_8526/*"LimitUpResSvtNodeName"*/,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v52; // x1
  __int64 v53; // x21
  __int64 v54; // x22
  int32_t v55; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v57; // x8
  ServantLimitImageMaster_o *v58; // x20
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_418622D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&StringLiteral_12350/*"START_LIMITUP_EFFECT"*/, v20);
    byte_418622D = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    (System_String_array **)baseData,
    *(System_String_array ***)&baseCollectionLimitCnt,
    (System_Boolean_array **)callback,
    (System_Int32_array **)servantChange,
    (System_Int32_array *)autoFadeout,
    *(System_Int32_array **)&displayType);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resSvtNameData,
    (System_Int32_array **)servantChange,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.setResUsrSvtData = 0;
  this->fields.callbackFunc = callback;
  this->fields.displayType = displayType;
  this->fields.autoFadeout = autoFadeout;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.limitUpPlayVoiceLabel,
    (System_Int32_array **)playVoiceLabel,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.limitUpRewardGiftDataList,
    (System_Int32_array **)rewardGiftDataList,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_14;
  v54 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v53 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v54;
  *(_QWORD *)&v62.fields.fakeValue = v53;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v57 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v58 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_QWORD *)&v63.fields.currentCryptoKey = v57;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63, 0LL);
  if ( !v58
    || (gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v58,
                                                   (int32_t)gameObject,
                                                   v55 + 1,
                                                   0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = (unsigned __int8)gameObject & 1,
        !fsm) )
  {
LABEL_14:
    sub_B2C434(gameObject, v52);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12350/*"START_LIMITUP_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetLvExceedCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 Int_35342280; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  System_String_array *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_o *v43; // x0
  const MethodInfo *v44; // x2
  __int64 v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x22
  System_String_o *v53; // x0
  UserServantEntity_o *v54; // x20
  CombineRootComponent_c *v55; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v57; // x20
  UnityEngine_Transform_o *transform; // x21
  int v59; // s0
  __int64 v62; // x0
  __int64 v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4186231 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, usrSvtData);
    sub_B2C35C(&CombineResultFormManager_TypeInfo, v11);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&string___TypeInfo, v15);
    sub_B2C35C(&StringLiteral_12351/*"START_LVEXCEED_EFFECT"*/, v16);
    sub_B2C35C(&StringLiteral_16810/*"bit_result_grail"*/, v17);
    sub_B2C35C(&StringLiteral_11485/*"ResultEffect"*/, v18);
    byte_4186231 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  Int_35342280 = sub_B2C374(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData
    || (v35 = (System_String_array *)Int_35342280,
        *(_QWORD *)&v64.fields.currentCryptoKey = &this->fields.baseUsrSvtData->fields.svtId,
        *(_QWORD *)&v64.fields.fakeValue = 0LL,
        Int_35342280 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v64, v34),
        !v35) )
  {
LABEL_34:
    sub_B2C434(Int_35342280, v33);
  }
  v42 = (System_Int32_array **)Int_35342280;
  if ( Int_35342280 )
  {
    Int_35342280 = sub_B2C41C(Int_35342280, v35->obj.klass->_1.element_class);
    if ( !Int_35342280 )
      goto LABEL_36;
  }
  if ( !v35->max_length )
    goto LABEL_35;
  v35->m_Items[0] = (System_String_o *)v42;
  sub_B2C2F8((BattleServantConfConponent_o *)v35->m_Items, v42, v36, v37, v38, v39, v40, v41);
  v43 = System_String__Concat_44385656(v35, 0LL);
  Int_35342280 = UnityEngine_PlayerPrefs__GetInt_35342280(v43, 0LL);
  if ( (_DWORD)Int_35342280 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_34;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_35342280 = sub_B2C374(string___TypeInfo, 1LL);
      if ( !*p_baseUsrSvtData )
        goto LABEL_34;
      v45 = Int_35342280;
      *(_QWORD *)&v65.fields.currentCryptoKey = &(*p_baseUsrSvtData)->fields.svtId;
      *(_QWORD *)&v65.fields.fakeValue = 0LL;
      Int_35342280 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v65, v44);
      if ( !v45 )
        goto LABEL_34;
      v52 = (System_Int32_array **)Int_35342280;
      if ( !Int_35342280 || (Int_35342280 = sub_B2C41C(Int_35342280, *(_QWORD *)(*(_QWORD *)v45 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v45 + 24) )
        {
          *(_QWORD *)(v45 + 32) = v52;
          sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 32), v52, v46, v47, v48, v49, v50, v51);
          v53 = System_String__Concat_44385656((System_String_array *)v45, 0LL);
          UnityEngine_PlayerPrefs__SetInt(v53, 0, 0LL);
          v54 = *p_baseUsrSvtData;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
          }
          CombineResultFormManager__ResetVoiceList(v54, 0LL);
          goto LABEL_20;
        }
LABEL_35:
        v62 = sub_B2C460(Int_35342280);
        sub_B2C400(v62, 0LL);
      }
LABEL_36:
      v63 = sub_B2C454();
      sub_B2C400(v63, 0LL);
    }
  }
LABEL_20:
  v55 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v55 = CombineRootComponent_TypeInfo;
  }
  Int_35342280 = (__int64)v55->static_fields->effectAssetData;
  if ( !Int_35342280 )
    goto LABEL_34;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)Int_35342280,
                                                                               (System_String_o *)StringLiteral_16810/*"bit_result_grail"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Int_35342280 = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                            Object_WarBoardWaitTimeSetting,
                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_35342280 )
    goto LABEL_34;
  v57 = (UnityEngine_GameObject_o *)Int_35342280;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_35342280, 0LL);
  *(UnityEngine_Vector3_o *)&v59 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v59, 0LL);
  Int_35342280 = (__int64)this->fields.fsm;
  if ( !Int_35342280 )
    goto LABEL_34;
  Int_35342280 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_35342280, 0LL);
  if ( !Int_35342280 )
    goto LABEL_34;
  Int_35342280 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_35342280,
                            (System_String_o *)StringLiteral_11485/*"ResultEffect"*/,
                            0LL);
  if ( !Int_35342280 )
    goto LABEL_34;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_35342280, v57, 0LL);
  Int_35342280 = (__int64)this->fields.fsm;
  if ( !Int_35342280 )
    goto LABEL_34;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_35342280, (System_String_o *)StringLiteral_12351/*"START_LVEXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLvExceedInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x0
  __int64 v28; // x1
  CombineRootComponent_c *v29; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  if ( (byte_4186232 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, usrSvtData);
    sub_B2C35C(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__, v11);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v12);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4186232 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v28);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v29 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v29 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v29->static_fields->EXCEED_ASSET_PATH;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
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
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  UnityEngine_ParticleSystem_MinMaxCurve_o v62; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v63; // [xsp+28h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *v64; // [xsp+48h] [xbp-38h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v66; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v67; // 0:x0.8
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418622E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, before);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_11443/*"ResNameNodeName"*/, v16);
    sub_B2C35C(&StringLiteral_12352/*"START_NAME_REVEAL_EFFECT"*/, v17);
    sub_B2C35C(&StringLiteral_9408/*"NameRevealCrossFade"*/, v18);
    sub_B2C35C(&StringLiteral_4453/*"CrtNameNodeName"*/, v19);
    sub_B2C35C(&StringLiteral_16815/*"bit_result_name_reveal"*/, v20);
    sub_B2C35C(&StringLiteral_13036/*"StartAnimationName"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    sub_B2C35C(&StringLiteral_9409/*"NameRevealParticleNodeName"*/, v23);
    byte_418622E = 1;
  }
  m_ParticleSystem = 0LL;
  v64 = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.crtSvtNameData,
    (System_Int32_array **)before,
    (System_String_array **)after,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resSvtNameData = after;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resSvtNameData,
    (System_Int32_array **)after,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12352/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                         (System_String_o *)StringLiteral_4453/*"CrtNameNodeName"*/,
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
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11443/*"ResNameNodeName"*/,
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
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_9409/*"NameRevealParticleNodeName"*/,
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
  gameObject = (char *)UnityEngine_Component__GetComponent_WebViewObject_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v48 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v64 = UnityEngine_ParticleSystem__get_shape(v48, 0LL).fields.m_ParticleSystem;
  v49 = (float)((float)v45[40] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v63, 0, sizeof(v63));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v63, v49, 0LL);
  v66.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v62 = v63;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v66, &v62, 0LL);
  v68.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v67.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v64;
  v68.fields.x = (float)((float)v45[40] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
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
                               (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_B2C434(gameObject, v38);
  }
  v61 = (System_Int32_array **)StringLiteral_16815/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_16815/*"bit_result_name_reveal"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(gameObject + 56), v61, v55, v56, v57, v58, v59, v60);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9408/*"NameRevealCrossFade"*/,
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  ServantTreasureDeviceAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v38; // x1
  ServantTreasureDeviceAddMaster_o *v39; // x24
  __int64 v40; // x25
  __int64 v41; // x26
  int32_t v42; // w0
  __int64 v43; // x8
  int32_t v44; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v46; // x25
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v56; // x8
  __int64 v57; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4186228 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&DataManager_TypeInfo, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_12353/*"START_NOBLEUP_EFFECT"*/, v22);
    sub_B2C35C(&StringLiteral_13449/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v23);
    sub_B2C35C(&StringLiteral_13450/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v24);
    byte_4186228 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)usrSvtData,
    *(System_String_array ***)&targetId,
    *(System_Boolean_array ***)&targetLv,
    (System_Int32_array **)callback,
    *(System_Int32_array **)&targetIdOld,
    *(System_Int32_array **)&targetLvOld);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_32;
  v39 = Master_WarQuestSelectionMaster;
  v41 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v41;
  *(_QWORD *)&v61.fields.fakeValue = v40;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61, 0LL);
  v43 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v62.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
  v44 = v42;
  *(_QWORD *)&v62.fields.currentCryptoKey = v43;
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                         v62,
                                                                         0LL);
  if ( !v39 )
    goto LABEL_32;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   v39,
                   v44,
                   (int32_t)Master_WarQuestSelectionMaster,
                   0,
                   0LL);
  v46 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_B2C42C(Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v46, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v46;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.npInfoAddManager,
    (System_Int32_array **)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( EnableEntity )
  {
    Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
    if ( !*p_npInfoAddManager )
      goto LABEL_32;
    Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(
      (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
      EnableEntity,
      0LL);
    Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                           (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
    if ( (int)Master_WarQuestSelectionMaster >= 1 )
    {
      v54 = 8LL;
      while ( 1 )
      {
        treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
        if ( !treasureDeviceIds )
          break;
        if ( v54 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
          goto LABEL_33;
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
          (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
          *((_DWORD *)&treasureDeviceIds->obj.klass + v54),
          targetLvOld,
          0LL);
        v56 = EnableEntity->fields.treasureDeviceIds;
        if ( !v56 )
          break;
        if ( v54 - 8 >= (unsigned __int64)v56->max_length )
        {
LABEL_33:
          v60 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v60, 0LL);
        }
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_WarQuestSelectionMaster,
          *((_DWORD *)&v56->obj.klass + v54),
          targetLv,
          0LL);
        Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                               (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
        v57 = v54 - 7;
        ++v54;
        if ( v57 >= (int)Master_WarQuestSelectionMaster )
          goto LABEL_22;
      }
LABEL_32:
      sub_B2C434(Master_WarQuestSelectionMaster, v38);
    }
LABEL_22:
    ++this->fields.tdShowIndex;
  }
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)this->fields.unSummon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, kind == 27, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_13449/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                                         0LL);
  if ( !unSummonLabel )
    goto LABEL_32;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_13450/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                                         0LL);
  if ( !unSummonDetail )
    goto LABEL_32;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_12353/*"START_NOBLEUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetPowerUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1

  if ( (byte_4186230 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12356/*"START_POWERUP_EFFECT"*/, usrSvtData);
    byte_4186230 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B2C434(gameObject, v24);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12356/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t kind; // w8
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

  if ( (byte_4186242 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4186242 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    Instance = (CommonUI_o *)this->fields.resUsrSvtData;
    if ( !Instance )
      goto LABEL_33;
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
    if ( CardImageLimitCount < 11 )
    {
      LimitCountByImageLimitCostumeIn = -1;
    }
    else
    {
      v15 = CardImageLimitCount;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        goto LABEL_32;
      }
LABEL_33:
      sub_B2C434(Instance, v6);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
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
LABEL_32:
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v16; // x20
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x21
  UserServantEntity_o *v20; // x21
  UserServantEntity_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UserServantEntity_o *v28; // x8
  __int64 v29; // x21
  __int64 v30; // x22
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
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
  UserServantEntity_o *v50; // x20
  UserServantEntity_o *v51; // x21
  struct UserServantEntity_o **p_resUsrSvtData; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct UserServantEntity_o *v59; // x21
  __int64 v60; // x19
  __int64 v61; // x20
  int32_t v62; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  v2 = this;
  if ( (byte_4186241 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    this = (CombineResultEffectComponent_o *)sub_B2C35C(&UserServantEntity_TypeInfo, v10);
    byte_4186241 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_53;
    v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v66.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v65 = v66;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v65, 0LL) < 1 )
    {
      v50 = v2->fields.baseUsrSvtData;
      v51 = (UserServantEntity_o *)sub_B2C42C(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21638868(v51, v50, 0LL);
      p_resUsrSvtData = &v2->fields.resUsrSvtData;
      v2->fields.resUsrSvtData = v51;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields.resUsrSvtData,
        (System_Int32_array **)v51,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      if ( (v2->fields.kind | 0x10) != 26 )
        return;
      v59 = *p_resUsrSvtData;
      if ( *p_resUsrSvtData )
      {
        v61 = *(_QWORD *)&v59->fields.limitCount.fields.currentCryptoKey;
        v60 = *(_QWORD *)&v59->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v70.fields.currentCryptoKey = v61;
        *(_QWORD *)&v70.fields.fakeValue = v60;
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v70, 0LL);
        v59->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v62 + 1, 0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        v13 = v2->fields.baseUsrSvtData;
        if ( v13 )
        {
          v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
          v15 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
          *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v66.fields.fakeValue = v14;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v64 = v66;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                     &v64,
                                                     0LL);
          if ( v15 )
          {
            v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                       v15,
                                                       &v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_53;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v17 = v2->fields.baseUsrSvtData;
              if ( !v17 )
                goto LABEL_53;
              v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
              v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
              *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v66.fields.fakeValue = v18;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v63 = v66;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                         &v63,
                                                         0LL);
              if ( !v19 )
                goto LABEL_53;
              this = (CombineResultEffectComponent_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                         v19,
                                                         &v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v20 = v2->fields.baseUsrSvtData;
                v21 = (UserServantEntity_o *)sub_B2C42C(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_21638868(v21, v20, 0LL);
                v2->fields.resUsrSvtData = v21;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v2->fields.resUsrSvtData,
                  (System_Int32_array **)v21,
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
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v68.fields.currentCryptoKey = v30;
              *(_QWORD *)&v68.fields.fakeValue = v29;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                         v68,
                                                         0LL);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v32 = (UserServantEntity_o *)sub_B2C42C(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_21638868(v32, resUsrSvtData, 0LL);
                v2->fields.resUsrSvtData = v32;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v2->fields.resUsrSvtData,
                  (System_Int32_array **)v32,
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
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v69.fields.currentCryptoKey = v42;
                  *(_QWORD *)&v69.fields.fakeValue = v41;
                  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v69, 0LL);
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
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v16 )
                        {
                          v47 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                     (*v16)[5],
                                                                     0LL);
                          if ( *v16 )
                          {
                            v48 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
                                    HIDWORD(v49->fields.svtResultInfoWindow),
                                    0LL);
                                  if ( *v16 )
                                  {
                                    *(_DWORD *)&(*v16)[16].fields.inited = afterAtk[1];
                                    if ( *v16 )
                                    {
                                      (*v16)[16].fields.fakeValue = afterAtk[0];
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
LABEL_53:
    sub_B2C434(this, method);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  void *Instance; // x0
  __int64 v39; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v40; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x23
  int32_t v42; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x28
  __int64 v44; // x10
  int v45; // w8
  int v46; // w8
  System_Comparison_T__o *v47; // x24
  const MethodInfo *v48; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x8
  int v50; // w24
  TerminalSceneComponent_c *v51; // x0
  struct CombineResultEffectComponent_MessageDelegate_o **p_messageCallback; // x21
  int size; // w8
  __int64 v54; // x20
  __int64 v55; // x8
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  __int64 v69; // x8
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-68h]
  struct CombineResultEffectComponent_MessageDelegate_o *v71; // [xsp+18h] [xbp-58h]

  if ( (byte_4186236 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_B2C35C(&Method_System_Comparison_ServantTreasureDvcEntity___ctor__, v15);
    sub_B2C35C(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v22);
    sub_B2C35C(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v23);
    sub_B2C35C(&ServantTreasureDvcEntity_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v26);
    sub_B2C35C(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__, v27);
    sub_B2C35C(&CombineResultEffectComponent___c_TypeInfo, v28);
    sub_B2C35C(&StringLiteral_12357/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v29);
    sub_B2C35C(&StringLiteral_16825/*"bit_result_ultimate_anim"*/, v30);
    sub_B2C35C(&StringLiteral_13036/*"StartAnimationName"*/, v31);
    byte_4186236 = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&phase,
    (System_String_array **)msgCallBack,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.messageCallback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.messageCallback, 0LL, v32, v33, v34, v35, v36, v37);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  p_callbackFunc = &this->fields.callbackFunc;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_67;
  v71 = msgCallBack;
  v40 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)Instance + 4);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v40 )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         v40,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   v40,
                   v42,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v44 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v44
        || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v44 - 8) != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      v45 = *((_DWORD *)Instance + 9);
      if ( v45 >= 1 && v45 == questId )
      {
        v46 = *((_DWORD *)Instance + 10);
        if ( v46 < 1 || v46 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v41 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v41,
              v43,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
          }
        }
      }
      if ( ++v42 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      v40,
                      (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_19;
    }
LABEL_67:
    sub_B2C434(Instance, v39);
  }
LABEL_19:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( (BYTE3(CombineResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v47 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v47 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      j_il2cpp_runtime_class_init_0(Instance);
    sub_B2C42C(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    JUMPOUT(0x150AEA4LL);
  }
  if ( !v41 )
    goto LABEL_67;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v41,
    v47,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  if ( v41->fields._size < 1 )
  {
    v50 = 0;
  }
  else
  {
    v49 = v41->fields._items->m_Items[0];
    if ( !v49 )
      goto LABEL_67;
    v50 = 1;
    this->fields.targetSvtId = v49->fields.missionTargetId;
  }
  Instance = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*((_QWORD *)Instance + 23) + 504LL) || (size = v41->fields._size, size < 1) )
  {
LABEL_36:
    if ( !v50 )
    {
LABEL_64:
      if ( *p_callbackFunc )
        CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
      return;
    }
  }
  else
  {
    v54 = 4LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)(v54 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v55 = *((_QWORD *)&v41->fields._items->obj.klass + v54);
      if ( !v55 )
        goto LABEL_67;
      Instance = (void *)CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *(_DWORD *)(v55 + 16), v48);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      size = v41->fields._size;
      if ( (int)++v54 - 4 >= size )
        goto LABEL_36;
    }
    if ( v41->fields._size <= (unsigned int)(v54 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v69 = *((_QWORD *)&v41->fields._items->obj.klass + v54);
    if ( !v69 )
      goto LABEL_67;
    this->fields.targetSvtId = *(_DWORD *)(v69 + 16);
    if ( !v50 )
      goto LABEL_64;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v39);
    byte_4183C65 = 1;
  }
  v51 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    p_messageCallback = &this->fields.messageCallback;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v51 = TerminalSceneComponent_TypeInfo;
    }
  }
  else
  {
    p_messageCallback = &this->fields.messageCallback;
  }
  Instance = v51->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_67;
  TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
  this->fields.messageCallback = v71;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_messageCallback,
    (System_Int32_array **)v71,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Instance = this->fields.fsm;
  if ( !Instance )
    goto LABEL_67;
  Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_67;
  Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
               (HutongGames_PlayMaker_FsmVariables_o *)Instance,
               (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
               0LL);
  if ( !Instance )
    goto LABEL_67;
  v68 = (System_Int32_array **)StringLiteral_16825/*"bit_result_ultimate_anim"*/;
  *((_QWORD *)Instance + 7) = StringLiteral_16825/*"bit_result_ultimate_anim"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)Instance + 56), v68, v62, v63, v64, v65, v66, v67);
  Instance = this->fields.fsm;
  if ( !Instance )
    goto LABEL_67;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12357/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSecretTreasureDeviceInfoForSvtGet(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x21
  const MethodInfo *v15; // x2
  BalanceConfig_c *v16; // x0
  __int64 v17; // x1
  char *fsm; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1

  if ( (byte_4186237 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&StringLiteral_12357/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v11);
    sub_B2C35C(&StringLiteral_16825/*"bit_result_ultimate_anim"*/, v12);
    sub_B2C35C(&StringLiteral_13036/*"StartAnimationName"*/, v13);
    byte_4186237 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  if ( v16->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v15) )
  {
    if ( *p_callbackFunc )
      CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
  }
  else
  {
    fsm = (char *)this->fields.fsm;
    this->fields.targetSvtId = svtId;
    if ( !fsm
      || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                          (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v25 = (System_Int32_array **)StringLiteral_16825/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_16825/*"bit_result_ultimate_anim"*/,
          sub_B2C2F8((BattleServantConfConponent_o *)(fsm + 56), v25, v19, v20, v21, v22, v23, v24),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_B2C434(fsm, v17);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12357/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_4186227 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&StringLiteral_12359/*"START_SKILLUP_EFFECT"*/, v17);
    sub_B2C35C(&StringLiteral_12248/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v18);
    sub_B2C35C(&StringLiteral_12249/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v19);
    byte_4186227 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)usrSvtData,
    *(System_String_array ***)&targetId,
    *(System_Boolean_array ***)&targetLv,
    (System_Int32_array **)callback,
    *(System_Int32_array **)&targetIdOld,
    *(System_Int32_array **)&targetLvOld);
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.unSummon;
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, kind == 21, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12248/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12249/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_B2C434(gameObject, v27);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12359/*"START_SKILLUP_EFFECT"*/, 0LL);
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
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  __int64 v15; // x1
  StandFigureCollect_o *v16; // x8
  struct ServantVoiceData_array *v17; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v19; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  __int64 v22; // x8
  int v23; // w20
  __int64 v24; // x25
  StandFigureCollect_o *v25; // x8
  __int64 v26; // x0

  if ( (byte_418625D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    byte_418625D = 1;
  }
  standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                                                      (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)standFigure_k__BackingField < 2 )
  {
    if ( standFigureCollects )
    {
      if ( !standFigureCollects->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v16 = standFigureCollects->fields._items->m_Items[0];
      if ( v16 )
      {
        standFigure_k__BackingField = v16->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetFace_40495504(standFigure_k__BackingField, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_B2C434(standFigure_k__BackingField, v15);
  }
  v17 = this->fields.playVoiceList;
  if ( !v17 )
    goto LABEL_29;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v17->max_length )
  {
LABEL_27:
    v26 = sub_B2C460(standFigure_k__BackingField);
    sub_B2C400(v26, 0LL);
  }
  v19 = v17->m_Items[playCnt];
  if ( !v19 )
    goto LABEL_29;
  multiFace = v19->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v19->fields.multiForm;
    if ( multiForm )
    {
      v22 = *(_QWORD *)&multiFace->max_length;
      v23 = (int)standFigure_k__BackingField;
      if ( (_DWORD)standFigure_k__BackingField == (_DWORD)v22
        && (_DWORD)standFigure_k__BackingField == multiForm->max_length )
      {
        if ( (_DWORD)v22 )
        {
          v24 = 0LL;
          do
          {
            if ( (unsigned int)v24 >= multiForm->max_length )
              break;
            if ( !standFigureCollects )
              goto LABEL_29;
            if ( standFigureCollects->fields._size <= (unsigned int)v24 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v25 = standFigureCollects->fields._items->m_Items[v24];
            if ( !v25 )
              goto LABEL_29;
            standFigure_k__BackingField = v25->fields._standFigure_k__BackingField;
            if ( !standFigure_k__BackingField )
              goto LABEL_29;
            UIStandFigureR__SetFace_40495504(
              standFigure_k__BackingField,
              multiFace->m_Items[v24 + 1],
              multiForm->m_Items[v24 + 1],
              0LL,
              fadeTime,
              0LL);
            if ( (int)v24 + 1 >= v23 )
              return;
            ++v24;
          }
          while ( (unsigned int)v24 < multiFace->max_length );
        }
        goto LABEL_27;
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
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1

  if ( (byte_418622A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12361/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_418622A = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    *(System_String_array ***)&infoIdx,
    (System_String_array **)baseData,
    *(System_Boolean_array ***)&baseCollectionLv,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v7);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.combineVoiceId, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B2C434(gameObject, v33);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12361/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_22017372(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_418622B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12361/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_418622B = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    *(System_String_array ***)&infoIdx,
    (System_String_array **)baseData,
    (System_Boolean_array **)resData,
    *(System_Int32_array ***)&svtId,
    (System_Int32_array *)voiceId,
    (System_Int32_array *)statusDisp);
  this->fields.resUsrSvtData = resData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
    (System_Int32_array **)resData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_7;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineVoiceId,
    (System_Int32_array **)voiceId,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.combineStatusDisp = statusDisp;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_B2C434(gameObject, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12361/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1

  if ( (byte_418622C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12361/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_418622C = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    *(System_String_array ***)&infoIdx,
    *(System_String_array ***)&normalExp,
    *(System_Boolean_array ***)&addExp,
    (System_Int32_array **)baseData,
    *(System_Int32_array **)&baseCollectionLv,
    (System_Int32_array *)callback);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B2C434(gameObject, v30);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12361/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v6; // x21

  if ( (byte_4186263 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__, v3);
    byte_4186263 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_B2C434(bgCollider, method);
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
  void *bgCollider; // x0
  _DWORD *v7; // x22
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x8
  ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t v11; // w22
  int32_t v12; // w23
  System_Action_o *v13; // x25

  if ( (byte_4186261 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__, v5);
    byte_4186261 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  bgCollider = this->fields.npInfoAddManager;
  if ( !bgCollider )
    goto LABEL_11;
  bgCollider = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(
                 (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
                 index,
                 0LL);
  if ( !this->fields.npInfoAddManager )
    goto LABEL_11;
  v7 = bgCollider;
  bgCollider = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(
                 this->fields.npInfoAddManager,
                 index,
                 0LL);
  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager
    || !v7
    || !bgCollider
    || (tdAddEntity_k__BackingField = npInfoAddManager->fields._tdAddEntity_k__BackingField,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v11 = v7[7],
        v12 = *((_DWORD *)bgCollider + 7),
        v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_B2C434(bgCollider, *(_QWORD *)&index);
  }
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    tdAddEntity_k__BackingField,
    index,
    v11,
    v12,
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
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v9; // w21
  int32_t v10; // w22
  int32_t v11; // w23
  int32_t v12; // w24
  System_String_o *costumeName; // x25
  System_Action_o *v14; // x26

  if ( (byte_4186262 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__, v5);
    byte_4186262 = 1;
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
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v9 = v7[4];
  v10 = v7[5];
  v11 = *((_DWORD *)bgCollider + 4);
  v12 = *((_DWORD *)bgCollider + 5);
  costumeName = this->fields.costumeName;
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B2C434(bgCollider, *(_QWORD *)&index);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v9,
    v10,
    v11,
    v12,
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

  if ( (byte_4186260 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4186260 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B2C434(bgCollider, method);
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v11; // x21
  UserServantEntity_o *Entity; // x21
  int32_t id; // w21
  int32_t lv; // w22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v16; // w23
  int32_t v17; // w24
  System_Action_o *v18; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v21; // [xsp+48h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-38h] BYREF

  if ( (byte_4186264 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4186264 = 1;
  }
  tdInfo = 0LL;
  v21 = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_15;
  bgCollider = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)bgCollider;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v19, 0LL);
  if ( !v11 )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v11,
             bgCollider,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_15;
  bgCollider = UserServantEntity__getTreasureDeviceInfo(Entity, &v21, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v21
    || (id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v16 = v21->fields.id,
        v17 = v21->fields.lv,
        v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_15:
    sub_B2C434(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v16, v17, v18, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__169_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418627E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__, v3);
    byte_418627E = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_B2C434(v6, v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__169_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent__EndDisp(this, method);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__144_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418627C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&StringLiteral_5484/*"END_LOAD"*/, v3);
    byte_418627C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_B2C434(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5484/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__154_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418627D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent__EndPlay_b__154_2__, v3);
    byte_418627D = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__154_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_B2C434(v6, v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v5, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__163_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B2C434(0LL, method);
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___InitCombineEffect_b__111_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4186279 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5484/*"END_LOAD"*/, method);
    byte_4186279 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5484/*"END_LOAD"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *transform; // x21
  int v16; // s0

  if ( (byte_4186277 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_12351/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_B2C35C(&StringLiteral_16806/*"bit_result_extraskill"*/, v9);
    sub_B2C35C(&StringLiteral_11485/*"ResultEffect"*/, v10);
    byte_4186277 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16806/*"bit_result_extraskill"*/,
                                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v14 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11485/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v14, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B2C434(fsm, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12351/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array *v12; // x21
  System_String_o *v13; // x0
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  System_String_o *v23; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_Transform_o *transform; // x21
  int v27; // s0
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_4186278 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_11485/*"ResultEffect"*/, v9);
    sub_B2C35C(&StringLiteral_12340/*"START_COMBINE_LIMIT"*/, v10);
    sub_B2C35C(&StringLiteral_16800/*"bit_result_"*/, v11);
    byte_4186278 = 1;
  }
  if ( data )
  {
    v12 = (System_String_array *)sub_B2C374(string___TypeInfo, 1LL);
    v13 = System_Int32__ToString((int)this + 320, 0LL);
    fsm = (UnityEngine_GameObject_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_16800/*"bit_result_"*/, v13, 0LL);
    if ( !v12 )
      goto LABEL_20;
    v22 = (System_Int32_array **)fsm;
    if ( fsm )
    {
      fsm = (UnityEngine_GameObject_o *)sub_B2C41C(fsm, v12->obj.klass->_1.element_class);
      if ( !fsm )
      {
        v31 = sub_B2C454();
        sub_B2C400(v31, 0LL);
      }
    }
    if ( !v12->max_length )
    {
      v30 = sub_B2C460(fsm);
      sub_B2C400(v30, 0LL);
    }
    v12->m_Items[0] = (System_String_o *)v22;
    sub_B2C2F8((BattleServantConfConponent_o *)v12->m_Items, v22, v16, v17, v18, v19, v20, v21);
    v23 = System_String__Concat_44385656(v12, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 v23,
                                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_20;
    v25 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11485/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v25, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_20:
      sub_B2C434(fsm, v15);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12340/*"START_COMBINE_LIMIT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *transform; // x21
  int v16; // s0

  if ( (byte_4186276 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_16809/*"bit_result_friendship_exceed"*/, v8);
    sub_B2C35C(&StringLiteral_11485/*"ResultEffect"*/, v9);
    sub_B2C35C(&StringLiteral_12347/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v10);
    byte_4186276 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16809/*"bit_result_friendship_exceed"*/,
                                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v14 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11485/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v14, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B2C434(fsm, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12347/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *fsm; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *transform; // x21
  int v16; // s0

  if ( (byte_4186275 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_12351/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_B2C35C(&StringLiteral_16814/*"bit_result_limitbreak"*/, v9);
    sub_B2C35C(&StringLiteral_11485/*"ResultEffect"*/, v10);
    byte_4186275 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16814/*"bit_result_limitbreak"*/,
                                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fsm = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fsm )
      goto LABEL_16;
    v14 = fsm;
    transform = UnityEngine_GameObject__get_transform(fsm, 0LL);
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
    fsm = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !fsm
      || (fsm = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
      || (fsm = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                              (System_String_o *)StringLiteral_11485/*"ResultEffect"*/,
                                              0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, v14, 0LL),
          (fsm = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)fsm, 0, 0LL), (fsm = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B2C434(fsm, v13);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12351/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B2C434(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__149_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B2C434(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B2C434(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__148_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B2C434(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B2C434(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__113_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_418627A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5484/*"END_LOAD"*/, method);
    byte_418627A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5484/*"END_LOAD"*/, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v23; // x22
  __int64 v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UserServantEntity_o *v31; // x21
  System_Int32_array **callbackFunc; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CommonUI_o *v47; // x22
  CombineResultEffectComponent_ClickDelegate_o *v48; // x25
  CombineResultEffectComponent_ClickDelegate_o *v49; // x0

  if ( (byte_418627B & 1) == 0 )
  {
    sub_B2C35C(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__, v8);
    sub_B2C35C(&CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo, v9);
    sub_B2C35C(&UserServantEntity_TypeInfo, v10);
    byte_418627B = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35315108(effect, 0LL);
  this->fields.effect = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v12, v13, v14, v15, v16, v17);
  CombineResultEffectComponent__Close(this, v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       this->fields.targetSvtId,
                       0LL);
  if ( EntityDefinitely )
  {
    v23 = EntityDefinitely;
    v24 = sub_B2C42C(CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo);
    CombineResultEffectComponent___c__DisplayClass143_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass143_2_o *)v24,
      0LL);
    if ( v24 )
    {
      *(_QWORD *)(v24 + 24) = this;
      sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
      v31 = (UserServantEntity_o *)sub_B2C42C(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21639176(v31, v23, 0LL);
      callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
      *(_QWORD *)(v24 + 16) = callbackFunc;
      sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 16), callbackFunc, v33, v34, v35, v36, v37, v38);
      this->fields.callbackFunc = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v39, v40, v41, v42, v43, v44);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v31 )
      {
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v31->fields.treasureDeviceLv1;
        v47 = (CommonUI_o *)Instance;
        v48 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B2C42C(CombineResultEffectComponent_ClickDelegate_TypeInfo);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v48,
          (Il2CppObject *)v24,
          Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__,
          0LL);
        if ( v47 )
        {
          CommonUI__OpenNobleCombineResult(
            v47,
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
LABEL_19:
    sub_B2C434(Instance, v20);
  }
  v49 = this->fields.callbackFunc;
  if ( v49 )
    CombineResultEffectComponent_ClickDelegate__Invoke(v49, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B2C434(0LL, method);
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineResultEffectComponent__checkSecretTreasureDeviceData(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  ServantFlagEntity_o *v9; // x8
  struct System_Int32_array *args; // x9
  struct System_Int32_array *v11; // x8
  int32_t v12; // w8
  bool result; // w0
  __int64 v14; // x0
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186239 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4186239 = 1;
  }
  svtFlagEntity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_29308316(
          (ServantFlagReleaseMaster_o *)Instance,
          svtId,
          &svtFlagEntity,
          0LL) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_15:
    v12 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_16;
  }
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v9 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_17;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v9->fields.args;
  if ( !args )
    goto LABEL_17;
  if ( args->max_length <= 1 )
    goto LABEL_18;
  this->fields.targetId = args->m_Items[2];
  v11 = v9->fields.args;
  if ( !v11 )
LABEL_17:
    sub_B2C434(Instance, v8);
  if ( !v11->max_length )
  {
LABEL_18:
    v14 = sub_B2C460(Instance);
    sub_B2C400(v14, 0LL);
  }
  v12 = v11->m_Items[1];
  result = 1;
LABEL_16:
  this->fields.targetIdOld = v12;
  return result;
}


void __fastcall CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *bgCollider; // x0
  const MethodInfo *v4; // x1
  int32_t kind; // w8
  const MethodInfo *v6; // x2
  int32_t v7; // w20
  int32_t v8; // w0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4186269 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186269 = 1;
  }
  bgCollider = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_44;
  if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)bgCollider, 0LL) )
  {
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v4) )
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v6);
        bgCollider = this->fields.costumeSkillInfoManager;
        v7 = this->fields.skillShowIndex + 1;
        this->fields.skillShowIndex = v7;
        if ( bgCollider )
        {
          v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(bgCollider, 0LL);
          goto LABEL_21;
        }
        goto LABEL_44;
      }
      kind = this->fields.kind;
    }
    if ( kind > 14 )
    {
      if ( kind != 27 )
      {
        if ( kind == 15 )
        {
          if ( this->fields.treasureDeviceEnabled )
          {
            CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, v4);
            this->fields.treasureDeviceEnabled = 0;
            goto LABEL_32;
          }
          goto LABEL_36;
        }
LABEL_24:
        if ( (unsigned int)kind <= 0x1A && ((1 << kind) & 0x4080402) != 0 )
        {
          if ( CombineResultEffectComponent__IsShowLimitUpInfo(this, v4) )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v11);
            bgCollider = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)this->fields.limitUpResultCheck;
            if ( !bgCollider )
              goto LABEL_44;
            if ( LimitUpResultCheckComponent__CheckFinishedResultLimitUp(
                   (LimitUpResultCheckComponent_o *)bgCollider,
                   0LL) )
            {
              goto LABEL_32;
            }
            return;
          }
          kind = this->fields.kind;
        }
        if ( !kind )
          CombineResultEffectComponent__stopVoice(this, v4);
LABEL_36:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( this->fields.kind != 24 )
          CombineResultEffectComponent__ReleaseVoiceData(this, v12);
        if ( !CombineResultEffectComponent__OpenNotification(this, v12) )
          CombineResultEffectComponent__FadeoutProcess(this, v13);
        return;
      }
    }
    else if ( kind != 4 && kind != 8 )
    {
      goto LABEL_24;
    }
    if ( CombineResultEffectComponent__IsShowNextNpInfo(this, v4) )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v10);
      bgCollider = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)this->fields.npInfoAddManager;
      v7 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v7;
      if ( bgCollider )
      {
        v8 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(
               (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)bgCollider,
               0LL);
LABEL_21:
        if ( v7 < v8 )
          return;
LABEL_32:
        CombineResultEffectComponent__EndDisp(this, v9);
        return;
      }
LABEL_44:
      sub_B2C434(bgCollider, method);
    }
    kind = this->fields.kind;
    goto LABEL_24;
  }
}


void __fastcall CombineResultEffectComponent__endloadEffect(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleServantConfConponent_o *static_fields; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_418623E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v10);
    sub_B2C35C(&Method_CombineResultEffectComponent__endloadEffect_b__113_0__, v11);
    sub_B2C35C(&CombineResultEffectComponent_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_418623E = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)CombineResultEffectComponent_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B2C2F8(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__113_0__, 0LL);
    if ( !Instance )
      sub_B2C434(v19, v20);
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v18, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v20; // x21
  __int64 v21; // x22
  int32_t v22; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v24; // x8
  ServantVoiceMaster_o *v25; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4186246 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4186246 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.asstName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.playVoiceList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v11, v12, v13, v14, v15, v16);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v21 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v21;
  *(_QWORD *)&v41.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v22, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v24 = this->fields.resUsrSvtData) == 0LL)
    || (v25 = (ServantVoiceMaster_o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      v24->fields.limitCount,
                                      0LL),
        !v25) )
  {
LABEL_13:
    sub_B2C434(Instance, v18);
  }
  Entity = ServantVoiceMaster__getEntity(v25, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtVoiceEntity,
    (System_Int32_array **)Entity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
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
  ServantVoiceData_array *result; // x0

  if ( (byte_418625A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    byte_418625A = 1;
  }
  if ( !this->fields.isChangeCardImg )
    return 0LL;
  result = (ServantVoiceData_array *)this->fields.svtVoiceEntity;
  if ( result )
  {
    result = (ServantVoiceData_array *)ServantVoiceEntity__getCostumeCombineVoiceList(
                                         (ServantVoiceEntity_o *)result,
                                         this->fields.costumeId,
                                         0LL);
    if ( result )
    {
      if ( (int)result->max_length >= 1 )
        return (ServantVoiceData_array *)result->bounds[4];
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CombineResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x19
  int v12; // s0
  UnityEngine_Transform_o *v15; // x19
  int v16; // s0

  if ( (byte_418623F & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, parentTr);
    sub_B2C35C(&CombineResultEffectComponent_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418623F = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_12:
    sub_B2C434(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
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
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  ServantVoiceData_array *result; // x0
  struct UserServantEntity_o *v10; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4186259 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4186259 = 1;
  }
  if ( this->fields.isChangeCardImg )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_22;
    resUsrSvtData = (UserServantEntity_o *)UserServantEntity__isLimitCountMax(resUsrSvtData, 0LL);
    svtVoiceEntity = this->fields.svtVoiceEntity;
    if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
    {
      if ( svtVoiceEntity )
      {
        result = (ServantVoiceData_array *)ServantVoiceEntity__getCntStopVoiceList(
                                             this->fields.svtVoiceEntity,
                                             this->fields.displayType,
                                             isPlayVoice,
                                             this->fields.genderType,
                                             this->fields.limitUpPlayVoiceLabel,
                                             0LL);
        if ( !result )
          return result;
        goto LABEL_18;
      }
      return 0LL;
    }
    if ( !svtVoiceEntity )
      return 0LL;
    v10 = this->fields.resUsrSvtData;
    if ( !v10 )
LABEL_22:
      sub_B2C434(resUsrSvtData, isPlayVoice);
    v12 = *(_QWORD *)&v10->fields.limitCount.fields.currentCryptoKey;
    v11 = *(_QWORD *)&v10->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v12;
    *(_QWORD *)&v14.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
    result = (ServantVoiceData_array *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                         svtVoiceEntity,
                                         v13,
                                         this->fields.limitUpPlayVoiceLabel,
                                         this->fields.genderType,
                                         0LL);
    if ( result )
    {
LABEL_18:
      if ( (int)result->max_length >= 1 )
        return (ServantVoiceData_array *)result->bounds[4];
      return 0LL;
    }
  }
  else
  {
    result = (ServantVoiceData_array *)this->fields.svtVoiceEntity;
    if ( result )
    {
      result = (ServantVoiceData_array *)ServantVoiceEntity__getLimitCntUpVoiceList(
                                           (ServantVoiceEntity_o *)result,
                                           this->fields.genderType,
                                           this->fields.limitUpPlayVoiceLabel,
                                           0LL);
      if ( result )
        goto LABEL_18;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__getSvtVoiceData(
        CombineResultEffectComponent_o *this,
        int32_t voiceId,
        int32_t costumeId,
        bool isLimitUp,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w22
  int SvtVoiceId; // w21
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserServantEntity_o *Master_WarQuestSelectionMaster; // x0
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
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v9 = costumeId;
  SvtVoiceId = voiceId;
  if ( (byte_4186245 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&voiceId);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4186245 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    0LL,
    *(System_String_array ***)&costumeId,
    (System_String_array **)isLimitUp,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.playVoiceList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v16, v17, v18, v19, v20, v21);
  if ( SvtVoiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_29;
    v26 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v49.fields.currentCryptoKey = v26;
    *(_QWORD *)&v49.fields.fakeValue = v25;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v49, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v27, 0LL);
  }
  if ( v9 <= 0 )
  {
    Master_WarQuestSelectionMaster = this->fields.resUsrSvtData;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_29;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_19216120(
                                 Master_WarQuestSelectionMaster->fields.limitCount,
                                 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_WarQuestSelectionMaster, 0, 0LL);
    v9 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v29 = this->fields.resUsrSvtData;
  if ( !v29 )
    goto LABEL_29;
  v30 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v32;
  *(_QWORD *)&v50.fields.fakeValue = v31;
  Master_WarQuestSelectionMaster = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                            v50,
                                                            0LL);
  if ( !v30
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v30,
                                       (int32_t)Master_WarQuestSelectionMaster,
                                       v9,
                                       0LL),
        (Master_WarQuestSelectionMaster = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_WarQuestSelectionMaster = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_29:
    sub_B2C434(Master_WarQuestSelectionMaster, v23);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_WarQuestSelectionMaster,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtVoiceEntity,
    (System_Int32_array **)Entity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
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

  if ( (byte_418623D & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent_endloadEffect__, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5834/*"Effect/Combine"*/, v5);
    byte_418623D = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5834/*"Effect/Combine"*/, v6, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__loadVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v7; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4186247 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent_EndLoad__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_4186247 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v7 = (SoundManager_o *)Instance;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v7 )
      sub_B2C434(v9, v10);
    SoundManager__LoadAudioAssetStorage(v7, asstName, v8, 1, 0LL);
  }
  else
  {
    CombineResultEffectComponent__EndLoad(this, method);
  }
}


void __fastcall CombineResultEffectComponent__playVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CombineResultEffectComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v15; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  int32_t svtResultInfoWindow_high; // w21
  int32_t commandCardExceedResultWindow; // w20
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
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0

  v8 = this;
  if ( (byte_418625E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineResultEffectComponent_EndPlay__, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v10);
    this = (CombineResultEffectComponent_o *)sub_B2C35C(&SoundManager_TypeInfo, v11);
    byte_418625E = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_24;
    playCnt = v8->fields.playCnt;
    max_length = playVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v15 = playVoiceList->m_Items[playCnt];
      if ( !v15 )
        goto LABEL_24;
      id = (System_Int32_array **)v15->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      v17 = v8->fields.playVoiceList;
      if ( !v17 )
        goto LABEL_24;
      v18 = v8->fields.playCnt;
      if ( (unsigned int)v18 < v17->max_length )
      {
        this = (CombineResultEffectComponent_o *)v17->m_Items[v18];
        if ( this )
        {
          svtResultInfoWindow_high = HIDWORD(this->fields.svtResultInfoWindow);
          commandCardExceedResultWindow = (int32_t)this->fields.commandCardExceedResultWindow;
          FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
          currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.currentFigureCollectList;
          if ( currentFigureCollectList )
          {
            v23 = FadeTime;
            if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                   currentFigureCollectList,
                   (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
              {
                afterFigureCollectList = v8->fields.afterFigureCollectList;
              }
              else
              {
                afterFigureCollectList = v8->fields.currentFigureCollectList;
              }
              CombineResultEffectComponent__SetStandFigureFace(
                v8,
                svtResultInfoWindow_high,
                v23,
                v24,
                v25,
                afterFigureCollectList,
                commandCardExceedResultWindow,
                v26);
            }
          }
          asstName = v8->fields.asstName;
          vcName = v8->fields.vcName;
          volume = v8->fields.volume;
          v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v31, (Il2CppObject *)v8, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v32 = (System_Int32_array **)SoundManager__playVoice_24786800(asstName, vcName, volume, v31, 0LL);
          v8->fields.player = (struct SePlayer_o *)v32;
          sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.player, v32, v33, v34, v35, v36, v37, v38);
          ++v8->fields.playCnt;
          return;
        }
LABEL_24:
        sub_B2C434(this, method);
      }
    }
    v39 = sub_B2C460(this);
    sub_B2C400(v39, 0LL);
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
  const MethodInfo *v12; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_418624B & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_B2C35C(&StringLiteral_2733/*"BaseSvtNodeName"*/, v4);
    byte_418624B = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_12:
    sub_B2C434(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_2733/*"BaseSvtNodeName"*/,
    0,
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
  PlayMakerFSM_o *fsm; // x0
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
  int v27; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186255 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_3889/*"CardScale"*/, v8);
    sub_B2C35C(&StringLiteral_2732/*"BaseSvtCardNodeName"*/, v9);
    byte_4186255 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2732/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3889/*"CardScale"*/,
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
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v17;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                            v20->fields.limitCount,
                            0LL);
  if ( !v21 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v19, (int32_t)fsm, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v13 )
    goto LABEL_25;
  v23 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_25402508(
                            gameObject,
                            this->fields.baseUsrSvtData,
                            v23,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v25 = (UnityEngine_Component_o *)fsm,
        v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL),
        !v26)
    || (UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v25, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B2C434(fsm, *(_QWORD *)&changeNameType);
  }
  v31.fields.x = v18;
  v31.fields.y = v18;
  v31.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v31, 0LL);
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
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4186253 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8526/*"LimitUpResSvtNodeName"*/, v3);
    byte_4186253 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
    {
      v14 = sub_B2C460(CostumeSvtVoiceList);
      sub_B2C400(v14, 0LL);
    }
    v6 = CostumeSvtVoiceList->m_Items[0];
    if ( !v6 )
LABEL_14:
      sub_B2C434(CostumeSvtVoiceList, v5);
    face = v6->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_14;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  CostumeSvtVoiceList = (ServantVoiceData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                    v15,
                                                    0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_14;
  v11 = (int)CostumeSvtVoiceList;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v11,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8526/*"LimitUpResSvtNodeName"*/,
    v13);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_B2C434(0LL, method);
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
  const MethodInfo *v12; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v2 = this;
  if ( (byte_418624E & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_B2C35C(&StringLiteral_8525/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_418624E = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_12:
    sub_B2C434(this, method);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8[6], 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8525/*"LimitUpBaseSvtNodeName"*/,
    1,
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
  __int64 v14; // x0

  if ( (byte_4186254 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&StringLiteral_8525/*"LimitUpBaseSvtNodeName"*/, v7);
    byte_4186254 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      v14 = sub_B2C460(LimitUpSvtVoiceList);
      sub_B2C400(v14, 0LL);
    }
    v10 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v10 )
      sub_B2C434(LimitUpSvtVoiceList, v9);
    face = v10->fields.face;
  }
  else
  {
    face = 0;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCnt, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    svtId,
    ImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8525/*"LimitUpBaseSvtNodeName"*/,
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Transform_o *v25; // x19
  int v26; // s0
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186257 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3889/*"CardScale"*/, *(_QWORD *)&svtId);
    sub_B2C35C(&StringLiteral_2732/*"BaseSvtCardNodeName"*/, v9);
    byte_4186257 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2732/*"BaseSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3889/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v13 )
    goto LABEL_16;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nameRevealCard,
    (System_Int32_array **)TexturePrefab,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm
    || (v25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL),
        !v25)
    || (UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v26, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B2C434(fsm, *(_QWORD *)&svtId);
  }
  v29.fields.x = v15;
  v29.fields.y = v15;
  v29.fields.z = v15;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v29, 0LL);
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
  int v17; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186258 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3889/*"CardScale"*/, *(_QWORD *)&changeNameType);
    sub_B2C35C(&StringLiteral_11486/*"ResultSvtCardNodeName"*/, v5);
    byte_4186258 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11486/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v7 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v7, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v9 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_16;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3889/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  if ( !v9 )
    goto LABEL_16;
  v11 = Value;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_16;
  v13 = (UnityEngine_GameObject_o *)fsm;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(resUsrSvtData, 0, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_25402508(
                            v13,
                            resUsrSvtData,
                            FigureImageLimitCount,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v15 = (UnityEngine_Component_o *)fsm,
        v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL),
        !v16)
    || (UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_B2C434(fsm, *(_QWORD *)&changeNameType);
  }
  v20.fields.x = v11;
  v20.fields.y = v11;
  v20.fields.z = v11;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v20, 0LL);
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
  PlayMakerFSM_o *fsm; // x0
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
  int v27; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186256 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_3889/*"CardScale"*/, v8);
    sub_B2C35C(&StringLiteral_11486/*"ResultSvtCardNodeName"*/, v9);
    byte_4186256 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11486/*"ResultSvtCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v11 = (System_String_o *)fsm;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v11, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v13 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3889/*"CardScale"*/,
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
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v17;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.resUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                            v20->fields.limitCount,
                            0LL);
  if ( !v21 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, v19, (int32_t)fsm, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v13 )
    goto LABEL_25;
  v23 = (int)fsm;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_25402508(
                            gameObject,
                            this->fields.resUsrSvtData,
                            v23,
                            10,
                            0LL,
                            changeNameType,
                            0LL);
  if ( !fsm
    || (v25 = (UnityEngine_Component_o *)fsm,
        v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL),
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL),
        !v26)
    || (UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v25, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B2C434(fsm, *(_QWORD *)&changeNameType);
  }
  v31.fields.x = v18;
  v31.fields.y = v18;
  v31.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v31, 0LL);
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
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t kind; // w8
  SkillUpResultWindowComponent_o *v62; // x20
  UserServantEntity_o *v63; // x21
  int32_t v64; // w22
  int32_t v65; // w23
  System_Action_o *v66; // x24
  const MethodInfo *v67; // x2
  struct UserServantEntity_o *v68; // x8
  System_String_array *v69; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x21
  System_String_o *v77; // x0
  const MethodInfo *v78; // x2
  struct UserServantEntity_o *v79; // x8
  System_String_array *v80; // x20
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x21
  System_String_o *v88; // x0
  UserServantEntity_o *v89; // x20
  MethodInfo *v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct ServantVoiceData_array **p_playVoiceList; // x20
  struct ServantVoiceData_array **v97; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v103; // x20
  System_Action_o *v104; // x24
  struct UserServantEntity_o *v105; // x8
  int32_t targetIdOld; // w26
  int32_t targetLvOld; // w25
  __int64 v108; // x27
  __int64 v109; // x28
  int32_t v110; // w6
  bool v111; // w8
  __int64 v112; // x20
  __int64 v113; // x20
  ServantSkillMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_int__o *v115; // x20
  __int64 v116; // x28
  int32_t v117; // w22
  struct UserServantEntity_o *v118; // x8
  __int64 v119; // x23
  __int64 v120; // x24
  int v121; // w9
  signed int v122; // w10
  __int64 v123; // x8
  __int64 v124; // x23
  struct UserServantEntity_o *v125; // x8
  __int64 v126; // x23
  __int64 v127; // x24
  int32_t v128; // w0
  UserServantEntity_o *v129; // x8
  UserServantCollectionMaster_o *v130; // x23
  struct UserServantEntity_o *v131; // x8
  int64_t v132; // x24
  __int64 v133; // x25
  __int64 v134; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v136; // x23
  struct UserServantEntity_o *v137; // x8
  __int64 v138; // x23
  __int64 v139; // x24
  _BOOL8 v140; // x0
  __int64 v141; // x1
  Il2CppObject *current; // x21
  int64_t UserId; // x0
  __int64 v144; // x1
  struct UserServantEntity_o *v145; // x8
  int64_t v146; // x23
  int32_t v147; // w24
  __int64 v148; // x25
  __int64 v149; // x26
  int32_t v150; // w3
  bool isRelease; // w28
  CommonUI_o *v152; // x20
  AvalonSceneManager_c *v153; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v155; // x0
  __int64 *v156; // x8
  struct ServantVoiceData_array *v157; // x8
  struct UserServantEntity_o *v158; // x8
  __int64 v159; // x20
  __int64 v160; // x21
  struct UserServantEntity_o *v161; // x8
  int v162; // w21
  int v163; // w20
  struct UserServantEntity_o *v164; // x8
  __int64 v165; // x22
  __int64 v166; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v167; // x21
  int32_t v168; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v170; // w8
  SkillUpResultWindowComponent_o *v171; // x20
  UserServantEntity_o *v172; // x21
  System_Action_o *v173; // x22
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  struct UserServantEntity_o *v181; // x8
  __int64 v182; // x27
  __int64 v183; // x28
  SkillUpResultWindowComponent_o *v184; // x20
  UserServantEntity_o *v185; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v187; // x23
  struct UserServantEntity_o **p_baseUsrSvtData; // x22
  struct UserServantEntity_o *v189; // x8
  __int128 v190; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v191; // x20
  struct UserServantEntity_o *v192; // x0
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  struct SvtCombineResultWindowComponent_o *v199; // x20
  struct UserServantEntity_o *v200; // x21
  int32_t v201; // w22
  System_Action_o *v202; // x23
  SvtCombineResultWindowComponent_o *v203; // x0
  UserServantEntity_o *v204; // x1
  int32_t v205; // w2
  System_Action_o *v206; // x3
  System_Action_o *v207; // x4
  CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v209; // x21
  QuestEntity_o *v210; // x22
  ServantEntity_o *v211; // x21
  BalanceConfig_c *v212; // x8
  System_String_o *v213; // x22
  Il2CppObject *Name; // x0
  System_String_o *v215; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v217; // x21
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v219; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v220; // x21
  struct UserServantEntity_o *v221; // x0
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v229; // w21
  const MethodInfo *v230; // x1
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v238; // x3
  __int64 v239; // x22
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  System_Int32_array **callbackFunc; // x1
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  __int64 v259; // x23
  System_Action_o *v260; // x24
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  Il2CppObject *v267; // x21
  CombineResultEffectComponent_ClickDelegate_o *v268; // x22
  System_String_array **v269; // x2
  System_String_array **v270; // x3
  System_Boolean_array **v271; // x4
  System_Int32_array **v272; // x5
  System_Int32_array *v273; // x6
  System_Int32_array *v274; // x7
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v276; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v278; // x23
  System_Action_o *v279; // x24
  System_String_o *v280; // x23
  Il2CppObject *v281; // x22
  Il2CppObject *v282; // x0
  AvalonSceneManager_c *v283; // x8
  System_Action_o *v284; // x21
  __int64 v285; // x0
  __int64 v286; // x0
  SkillUpResultWindowComponent_o *v287; // x21
  int32_t v288; // w22
  int32_t v289; // w23
  System_Action_o *v290; // x24
  struct UserServantEntity_o *v291; // x8
  int32_t v292; // w25
  int32_t v293; // w19
  __int64 v294; // x26
  __int64 v295; // x27
  int32_t v296; // w26
  char isDispLv; // [xsp+10h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v298; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v299; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v300; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v301; // [xsp+80h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int32_t v303; // [xsp+B8h] [xbp-58h]
  int32_t lv; // [xsp+BCh] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v305; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v306; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v307; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v308; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v309; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v310; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v311; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v312; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v313; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v314; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v315; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v316; // 0:x0.16

  if ( (byte_418625B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&BalanceConfig_TypeInfo, v4);
    sub_B2C35C(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_CombineResultEffectComponent_EndDisp__, v6);
    sub_B2C35C(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__, v7);
    sub_B2C35C(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__, v8);
    sub_B2C35C(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__, v9);
    sub_B2C35C(&Method_CombineResultEffectComponent_clickNext__, v10);
    sub_B2C35C(&CombineResultFormManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int___, v20);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B2C35C(&LocalizationManager_TypeInfo, v30);
    sub_B2C35C(&NetworkManager_TypeInfo, v31);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v34);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v36);
    sub_B2C35C(&string___TypeInfo, v37);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v38);
    sub_B2C35C(&Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__, v39);
    sub_B2C35C(&CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo, v40);
    sub_B2C35C(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__, v41);
    sub_B2C35C(&CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo, v42);
    sub_B2C35C(&StringLiteral_10888/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v43);
    sub_B2C35C(&StringLiteral_10889/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v44);
    sub_B2C35C(&StringLiteral_1/*""*/, v45);
    byte_418625B = 1;
  }
  lv = 0;
  entity = 0LL;
  memset(&v301, 0, sizeof(v301));
  v46 = sub_B2C42C(CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo);
  CombineResultEffectComponent___c__DisplayClass143_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass143_0_o *)v46,
    0LL);
  if ( v46 )
  {
    *(_QWORD *)(v46 + 24) = this;
    sub_B2C2F8((BattleServantConfConponent_o *)(v46 + 24), (System_Int32_array **)this, v49, v50, v51, v52, v53, v54);
    kind = this->fields.kind;
    switch ( kind )
    {
      case 0:
        if ( this->fields.setResUsrSvtData )
        {
          p_baseUsrSvtData = &this->fields.baseUsrSvtData;
        }
        else
        {
          Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          p_baseUsrSvtData = &this->fields.baseUsrSvtData;
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            break;
          v219 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v220 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          *(_OWORD *)&v300.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v300.fields.fakeValue = v219;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v299 = v300;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v299, 0LL);
          if ( !v220 )
            break;
          v221 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v220,
                   Instance,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          this->fields.resUsrSvtData = v221;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
            (System_Int32_array **)v221,
            v222,
            v223,
            v224,
            v225,
            v226,
            v227);
        }
        if ( !*p_baseUsrSvtData )
          break;
        lv = (*p_baseUsrSvtData)->fields.lv;
        resUsrSvtData = this->fields.resUsrSvtData;
        if ( !resUsrSvtData )
          break;
        v229 = resUsrSvtData->fields.lv;
        if ( !System_Int32__Equals_38381340((int32_t)&lv, v229, 0LL) )
        {
          if ( this->fields.asstName )
          {
            if ( this->fields.svtVoiceEntity )
            {
              playVoiceList = this->fields.playVoiceList;
              if ( playVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
                CombineResultEffectComponent__playVoice(this, v230);
              }
            }
          }
        }
        *(_QWORD *)(v46 + 16) = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)(v46 + 16), 0LL, v231, v232, v233, v234, v235, v236);
        if ( CombineResultEffectComponent__CheckCombineLimit(this, lv, v229, v238) )
        {
          v239 = sub_B2C42C(CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo);
          CombineResultEffectComponent___c__DisplayClass143_1___ctor(
            (CombineResultEffectComponent___c__DisplayClass143_1_o *)v239,
            0LL);
          if ( !v239 )
            break;
          *(_QWORD *)(v239 + 24) = v46;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v239 + 24),
            (System_Int32_array **)v46,
            v240,
            v241,
            v242,
            v243,
            v244,
            v245);
          callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
          *(_QWORD *)(v239 + 16) = callbackFunc;
          sub_B2C2F8((BattleServantConfConponent_o *)(v239 + 16), callbackFunc, v247, v248, v249, v250, v251, v252);
          this->fields.callbackFunc = 0LL;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            0LL,
            v253,
            v254,
            v255,
            v256,
            v257,
            v258);
          v259 = *(_QWORD *)(v239 + 24);
          v260 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v260,
            (Il2CppObject *)v239,
            Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__,
            0LL);
          if ( !v259 )
            break;
          *(_QWORD *)(v259 + 16) = v260;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v259 + 16),
            (System_Int32_array **)v260,
            v261,
            v262,
            v263,
            v264,
            v265,
            v266);
          v267 = *(Il2CppObject **)(v239 + 24);
          v268 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B2C42C(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          CombineResultEffectComponent_ClickDelegate___ctor(
            v268,
            v267,
            Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__,
            0LL);
          this->fields.callbackFunc = v268;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)v268,
            v269,
            v270,
            v271,
            v272,
            v273,
            v274);
        }
        if ( !this->fields.combineStatusDisp )
        {
LABEL_211:
          CombineResultEffectComponent__EndDisp(this, v48);
          return;
        }
        svtResultInfoWindow = this->fields.svtResultInfoWindow;
        v276 = this->fields.resUsrSvtData;
        baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
        v278 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v278, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v279 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v279, (Il2CppObject *)this, Method_CombineResultEffectComponent_clickNext__, 0LL);
        if ( !svtResultInfoWindow )
          break;
        v203 = svtResultInfoWindow;
        v204 = v276;
        v205 = baseUsrSvtCollictionLv;
        v206 = v278;
        v207 = v279;
LABEL_210:
        SvtCombineResultWindowComponent__setAfterSvtResultState(v203, v204, v205, v206, v207, 0LL);
        return;
      case 1:
      case 10:
      case 19:
      case 26:
        Instance = sub_B2C374(string___TypeInfo, 1LL);
        v68 = this->fields.baseUsrSvtData;
        if ( !v68 )
          break;
        v69 = (System_String_array *)Instance;
        *(_QWORD *)&v305.fields.currentCryptoKey = &v68->fields.svtId;
        *(_QWORD *)&v305.fields.fakeValue = 0LL;
        Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v305, v67);
        if ( !v69 )
          break;
        v76 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B2C41C(Instance, v69->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_229;
        }
        if ( !v69->max_length )
          goto LABEL_226;
        v69->m_Items[0] = (System_String_o *)v76;
        sub_B2C2F8((BattleServantConfConponent_o *)v69->m_Items, v76, v70, v71, v72, v73, v74, v75);
        v77 = System_String__Concat_44385656(v69, 0LL);
        if ( UnityEngine_PlayerPrefs__GetInt_35342280(v77, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
          goto LABEL_23;
        Instance = sub_B2C374(string___TypeInfo, 1LL);
        v79 = this->fields.baseUsrSvtData;
        if ( !v79 )
          break;
        v80 = (System_String_array *)Instance;
        *(_QWORD *)&v306.fields.currentCryptoKey = &v79->fields.svtId;
        *(_QWORD *)&v306.fields.fakeValue = 0LL;
        Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v306, v78);
        if ( !v80 )
          break;
        v87 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B2C41C(Instance, v80->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_229:
            v286 = sub_B2C454();
            sub_B2C400(v286, 0LL);
          }
        }
        if ( !v80->max_length )
          goto LABEL_226;
        v80->m_Items[0] = (System_String_o *)v87;
        sub_B2C2F8((BattleServantConfConponent_o *)v80->m_Items, v87, v81, v82, v83, v84, v85, v86);
        v88 = System_String__Concat_44385656(v80, 0LL);
        UnityEngine_PlayerPrefs__SetInt(v88, 0, 0LL);
        v89 = this->fields.baseUsrSvtData;
        if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        }
        CombineResultFormManager__ResetVoiceList(v89, 0LL);
LABEL_23:
        Instance = (__int64)this->fields.limitUpResultCheck;
        if ( !Instance )
          break;
        LimitUpResultCheckComponent__checkResultLimitUp(
          (LimitUpResultCheckComponent_o *)Instance,
          this->fields.kind,
          this->fields.baseUsrSvtData,
          this->fields.resUsrSvtData,
          this->fields.baseUsrSvtCollectionLimitCnt,
          this->fields.limitUpRewardGiftDataList,
          0LL);
        p_playVoiceList = &this->fields.playVoiceList;
        if ( this->fields.isLimitUpSuppression )
        {
          this->fields.playVoiceList = 0LL;
          v97 = &this->fields.playVoiceList;
          LimitUpSvtVoiceList = 0LL;
        }
        else
        {
          LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v90);
          this->fields.playVoiceList = LimitUpSvtVoiceList;
          v97 = &this->fields.playVoiceList;
        }
        sub_B2C2F8(
          (BattleServantConfConponent_o *)v97,
          (System_Int32_array **)LimitUpSvtVoiceList,
          (System_String_array **)v90,
          v91,
          v92,
          v93,
          v94,
          v95);
        v157 = *p_playVoiceList;
        if ( *p_playVoiceList )
        {
LABEL_130:
          if ( this->fields.asstName )
          {
            this->fields.maxPlayCnt = *(_QWORD *)&v157->max_length;
            CombineResultEffectComponent__playVoice(this, v48);
          }
          return;
        }
        v158 = this->fields.baseUsrSvtData;
        if ( !v158 )
          break;
        v160 = *(_QWORD *)&v158->fields.limitCount.fields.currentCryptoKey;
        v159 = *(_QWORD *)&v158->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v313.fields.currentCryptoKey = v160;
        *(_QWORD *)&v313.fields.fakeValue = v159;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v313, 0LL);
        v161 = this->fields.baseUsrSvtData;
        v162 = Instance == 2;
        if ( !v161 )
          break;
        v163 = Instance;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v161->fields.limitCount, 0LL) != 3 )
          goto LABEL_124;
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        v164 = this->fields.baseUsrSvtData;
        if ( v164 )
        {
          v166 = *(_QWORD *)&v164->fields.svtId.fields.currentCryptoKey;
          v165 = *(_QWORD *)&v164->fields.svtId.fields.fakeValue;
          v167 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1016LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v314.fields.currentCryptoKey = v166;
          *(_QWORD *)&v314.fields.fakeValue = v165;
          v168 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v314, 0LL);
          v162 = (v163 == 2) | System_Linq_Enumerable__Contains_int_(
                                 v167,
                                 v168,
                                 (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_124:
          isLimitUpSuppression = this->fields.isLimitUpSuppression;
          if ( this->fields.isLimitUpSuppression )
          {
            v170 = this->fields.kind;
            isLimitUpSuppression = v170 != 10 && v170 != 26;
          }
          if ( (isLimitUpSuppression & v162) != 0 )
          {
            CombineResultEffectComponent__OpenLimitCountSealDialog(this, v48);
            return;
          }
          limitUpResultCheck = this->fields.limitUpResultCheck;
          v217 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v217,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__,
            0LL);
          if ( limitUpResultCheck )
          {
            LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v217, 1, 0LL);
            return;
          }
        }
        break;
      case 2:
      case 3:
        Instance = (__int64)this->fields.baseUsrSvtData;
        if ( !Instance )
          break;
        SkillIdList = UserServantEntity__getSkillIdList((UserServantEntity_o *)Instance, -1, -1, 1, 0LL);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v103 = SkillIdList;
        v104 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v104, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v105 = this->fields.baseUsrSvtData;
        if ( !v105 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v109 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
        v108 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v307.fields.currentCryptoKey = v109;
        *(_QWORD *)&v307.fields.fakeValue = v108;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v307, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v110 = Instance;
        v111 = this->fields.kind == 3;
        isDispLv = 0;
        goto LABEL_142;
      case 4:
      case 5:
      case 8:
      case 18:
      case 27:
        v62 = this->fields.skillResultInfoWindow;
        v63 = this->fields.baseUsrSvtData;
        v64 = this->fields.targetId;
        v65 = this->fields.targetLv;
        v66 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v66, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v62 )
          break;
        SkillUpResultWindowComponent__OpenNpUpResultInfo_23822288(
          v62,
          v63,
          v64,
          v65,
          v66,
          this->fields.targetIdOld,
          this->fields.targetLvOld,
          this->fields.kind,
          0LL);
        return;
      case 6:
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        v189 = this->fields.baseUsrSvtData;
        if ( !v189 )
          break;
        v190 = *(_OWORD *)&v189->fields.id.fields.fakeValue;
        v191 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
        *(_OWORD *)&v300.fields.currentCryptoKey = *(_OWORD *)&v189->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v300.fields.fakeValue = v190;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v298 = v300;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v298, 0LL);
        if ( !v191 )
          break;
        v192 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 v191,
                 Instance,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.resUsrSvtData = v192;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
          (System_Int32_array **)v192,
          v193,
          v194,
          v195,
          v196,
          v197,
          v198);
        v199 = this->fields.svtResultInfoWindow;
        v200 = this->fields.resUsrSvtData;
        v201 = this->fields.baseUsrSvtCollictionLv;
        v202 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v202, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v199 )
          break;
        v203 = v199;
        v204 = v200;
        v205 = v201;
        v206 = v202;
        v207 = 0LL;
        goto LABEL_210;
      case 7:
      case 21:
        v112 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v112 + 306) & 1) == 0 )
          sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v113 = **(_QWORD **)(v112 + 192);
        if ( (*(_BYTE *)(v113 + 306) & 1) == 0 )
          sub_AC505C(v113);
        Instance = **(_QWORD **)(v113 + 184);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        v115 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v115,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        v116 = 0LL;
        v117 = 1;
LABEL_59:
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v117 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v118 = this->fields.baseUsrSvtData;
          if ( v118 )
          {
            v120 = *(_QWORD *)&v118->fields.svtId.fields.currentCryptoKey;
            v119 = *(_QWORD *)&v118->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v308.fields.currentCryptoKey = v120;
            *(_QWORD *)&v308.fields.fakeValue = v119;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v308, 0LL);
            if ( MasterData_WarQuestSelectionMaster )
            {
              Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                    MasterData_WarQuestSelectionMaster,
                                    Instance,
                                    v117,
                                    0LL);
              if ( Instance )
              {
                v121 = *(_DWORD *)(Instance + 24);
                if ( v121 < 1 )
                {
LABEL_51:
                  v125 = this->fields.baseUsrSvtData;
                  if ( !v125 )
                    break;
                  v127 = *(_QWORD *)&v125->fields.svtId.fields.currentCryptoKey;
                  v126 = *(_QWORD *)&v125->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v309.fields.currentCryptoKey = v127;
                  *(_QWORD *)&v309.fields.fakeValue = v126;
                  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v309, 0LL);
                  Instance = (__int64)ServantSkillMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v128,
                                        v117,
                                        1,
                                        0LL);
                  v123 = Instance;
                  v124 = v116;
                  if ( Instance )
                  {
LABEL_56:
                    if ( !v115 )
                      break;
                    System_Collections_Generic_List_int___Add(
                      v115,
                      *(_DWORD *)(v123 + 28),
                      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                    v116 = v124;
                  }
                  ++v117;
                  goto LABEL_59;
                }
                v122 = 0;
                while ( 1 )
                {
                  if ( v122 >= (unsigned int)v121 )
                  {
LABEL_226:
                    v285 = sub_B2C460(Instance);
                    sub_B2C400(v285, 0LL);
                  }
                  v123 = *(_QWORD *)(Instance + 8LL * v122 + 32);
                  if ( !v123 )
                    break;
                  v124 = *(_QWORD *)(Instance + 8LL * v122 + 32);
                  if ( *(_DWORD *)(v123 + 28) == this->fields.targetId )
                    goto LABEL_56;
                  if ( ++v122 >= v121 )
                    goto LABEL_51;
                }
              }
            }
          }
        }
        else
        {
          if ( this->fields.kind == 7 )
          {
            Instance = (__int64)this->fields.baseUsrSvtData;
            if ( !Instance )
              break;
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            v129 = this->fields.baseUsrSvtData;
            v303 = Instance;
            if ( !v129 )
              break;
            Instance = UserServantEntity__IsHeroine(v129, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              v130 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              v131 = this->fields.baseUsrSvtData;
              if ( !v131 )
                break;
              v132 = Instance;
              v134 = *(_QWORD *)&v131->fields.svtId.fields.currentCryptoKey;
              v133 = *(_QWORD *)&v131->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v310.fields.currentCryptoKey = v134;
              *(_QWORD *)&v310.fields.fakeValue = v133;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v310, 0LL);
              if ( !v130 )
                break;
              Instance = UserServantCollectionMaster__TryGetEntity(v130, &entity, v132, Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)entity;
                if ( !entity )
                  break;
                costumeIds = entity->fields.costumeIds;
                if ( !costumeIds )
                  break;
                if ( *(_QWORD *)&costumeIds->max_length )
                {
                  v136 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
                  Instance = System_Linq_Enumerable__Any_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v136,
                               (const MethodInfo_173832C *)Method_System_Linq_Enumerable_Any_int___);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v136, 0LL);
                    v303 = Instance;
                  }
                }
              }
            }
            v137 = this->fields.baseUsrSvtData;
            if ( !v137 )
              break;
            v139 = *(_QWORD *)&v137->fields.svtId.fields.currentCryptoKey;
            v138 = *(_QWORD *)&v137->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v311.fields.currentCryptoKey = v139;
            *(_QWORD *)&v311.fields.fakeValue = v138;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v311, 0LL);
            if ( !v116 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  *(_DWORD *)(v116 + 20),
                                  this->fields.targetIdOld,
                                  0LL);
            if ( !Instance )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v300,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            v301.fields.current = (Il2CppObject *)v300.fields.fakeValue;
            *(_OWORD *)&v301.fields.list = *(_OWORD *)&v300.fields.currentCryptoKey;
            while ( 1 )
            {
              v140 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v301,
                       (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
              if ( !v140 )
                break;
              current = v301.fields.current;
              if ( !v301.fields.current )
                sub_B2C434(v140, v141);
              if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v301.fields.current, 0, 0LL) )
              {
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                UserId = NetworkManager__get_UserId(0LL);
                v145 = this->fields.baseUsrSvtData;
                if ( !v145 )
                  sub_B2C434(UserId, v144);
                v146 = UserId;
                v147 = v145->fields.lv;
                v149 = *(_QWORD *)&v145->fields.limitCount.fields.currentCryptoKey;
                v148 = *(_QWORD *)&v145->fields.limitCount.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v312.fields.currentCryptoKey = v149;
                *(_QWORD *)&v312.fields.fakeValue = v148;
                v150 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v312, 0LL);
                if ( ServantSkillEntity__isUse(
                       (ServantSkillEntity_o *)current,
                       v146,
                       v147,
                       v150,
                       v303,
                       -1,
                       -1,
                       -1LL,
                       0LL) )
                {
                  isRelease = 1;
                  goto LABEL_183;
                }
              }
            }
            isRelease = 0;
LABEL_183:
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v301,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
          }
          else
          {
            isRelease = 0;
          }
          v287 = this->fields.skillResultInfoWindow;
          v288 = this->fields.targetId;
          v289 = this->fields.targetLv;
          v290 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v290, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
          v291 = this->fields.baseUsrSvtData;
          if ( v291 )
          {
            v292 = this->fields.targetIdOld;
            v293 = this->fields.targetLvOld;
            v295 = *(_QWORD *)&v291->fields.svtId.fields.currentCryptoKey;
            v294 = *(_QWORD *)&v291->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v316.fields.currentCryptoKey = v295;
            *(_QWORD *)&v316.fields.fakeValue = v294;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v316, 0LL);
            if ( v115 )
            {
              v296 = Instance;
              Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                                    v115,
                                    (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v287 )
              {
                SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                  v287,
                  v288,
                  v289,
                  v290,
                  v292,
                  v293,
                  v296,
                  (System_Int32_array *)Instance,
                  0,
                  isRelease,
                  0,
                  0LL);
                return;
              }
            }
          }
        }
        break;
      case 9:
        v184 = this->fields.skillResultInfoWindow;
        v185 = this->fields.baseUsrSvtData;
        oldFriendShipRank = this->fields.oldFriendShipRank;
        v187 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v187, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v184 )
          break;
        SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v184, v185, oldFriendShipRank, v187, 0LL);
        return;
      case 11:
        v171 = this->fields.skillResultInfoWindow;
        v172 = this->fields.baseUsrSvtData;
        v173 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v173, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v171 )
          break;
        SkillUpResultWindowComponent__OpenPowerUpResultInfo(v171, v172, v173, 0LL);
        return;
      case 12:
      case 14:
      case 22:
      case 24:
        goto LABEL_211;
      case 13:
        Instance = (__int64)this->fields.friendshipExceedResultWindow;
        if ( !Instance )
          break;
        FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
          (FriendshipExceedResultWindowComponent_o *)Instance,
          this->fields.baseUsrSvtData,
          0LL);
        goto LABEL_211;
      case 15:
        CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v48);
        this->fields.playVoiceList = CostumeSvtVoiceList;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.playVoiceList,
          (System_Int32_array **)CostumeSvtVoiceList,
          v175,
          v176,
          v177,
          v178,
          v179,
          v180);
        v157 = this->fields.playVoiceList;
        if ( v157 )
          goto LABEL_130;
        goto LABEL_211;
      case 16:
      case 17:
        if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        {
          v152 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v153 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v153 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v153->static_fields->DEFAULT_FADE_TIME;
          v155 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          v156 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__;
        }
        else
        {
          if ( kind == 16 )
          {
            messageCallback = this->fields.messageCallback;
            if ( messageCallback )
            {
              this->fields.messageCallback = 0LL;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.messageCallback,
                0LL,
                v55,
                v56,
                v57,
                v58,
                v59,
                v60);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              v209 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4183C7A )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v48);
                byte_4183C7A = 1;
              }
              Instance = (__int64)TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (__int64)TerminalPramsManager_TypeInfo;
              }
              if ( !v209 )
                break;
              v210 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v209,
                                        *(_DWORD *)(*(_QWORD *)(Instance + 184) + 16LL),
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !Instance )
                break;
              v211 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                          this->fields.targetSvtId,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v212 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v212 = BalanceConfig_TypeInfo;
              }
              if ( v212->static_fields->CloseSecretTreasureDeviceQuestClear )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10889/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
                if ( !v211 )
                  break;
                v213 = (System_String_o *)Instance;
                Name = (Il2CppObject *)ServantEntity__getName(v211, -1, -1, 0LL);
                v215 = System_String__Format(v213, Name, 0LL);
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10888/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
                if ( !v210 )
                  break;
                v280 = (System_String_o *)Instance;
                Instance = (__int64)QuestEntity__getQuestName(v210, 0LL);
                if ( !v211 )
                  break;
                v281 = (Il2CppObject *)Instance;
                v282 = (Il2CppObject *)ServantEntity__getName(v211, -1, -1, 0LL);
                v215 = System_String__Format_44301068(v280, v281, v282, 0LL);
              }
              CombineResultEffectComponent_MessageDelegate__Invoke(messageCallback, v215, 0LL);
            }
          }
          if ( !this->fields.callbackFunc )
            return;
          v152 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v283 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v283 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v283->static_fields->DEFAULT_FADE_TIME;
          v155 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          v156 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__;
        }
        v284 = v155;
        System_Action___ctor(v155, (Il2CppObject *)this, *v156, 0LL);
        if ( v152 )
        {
          CommonUI__maskFadeout(v152, 1, DEFAULT_FADE_TIME, v284, 0LL);
          return;
        }
        break;
      case 20:
        Instance = (__int64)this->fields.commandCardExceedResultWindow;
        if ( !Instance )
          break;
        CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
          (CommandCardExceedResultWindowComponent_o *)Instance,
          this->fields.baseUsrSvtData,
          this->fields.commandCardIndex,
          this->fields.commandCardExceedCount,
          0LL);
        goto LABEL_211;
      case 23:
        Instance = (__int64)this->fields.friendshipExceedResultWindow;
        if ( !Instance )
          break;
        FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_29844136(
          (FriendshipExceedResultWindowComponent_o *)Instance,
          this->fields.baseUsrSvtData,
          this->fields.oldFriendShipRank,
          0LL);
        goto LABEL_211;
      case 25:
        Instance = (__int64)this->fields.baseUsrSvtData;
        if ( !Instance )
          break;
        Instance = (__int64)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Instance, 0LL);
        if ( !Instance )
          break;
        v103 = *(System_Int32_array **)(Instance + 16);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v104 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v104, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v181 = this->fields.baseUsrSvtData;
        if ( !v181 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v183 = *(_QWORD *)&v181->fields.svtId.fields.currentCryptoKey;
        v182 = *(_QWORD *)&v181->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v315.fields.currentCryptoKey = v183;
        *(_QWORD *)&v315.fields.fakeValue = v182;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v315, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v110 = Instance;
        v111 = this->fields.targetLvOld == 0;
        isDispLv = 1;
LABEL_142:
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          targetId,
          targetLv,
          v104,
          targetIdOld,
          targetLvOld,
          v110,
          v103,
          v111,
          1,
          isDispLv,
          0LL);
        return;
      default:
        return;
    }
  }
  sub_B2C434(Instance, v48);
}


void __fastcall CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  BattleServantConfConponent_o *p_player; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4186267 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186267 = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = (BattleServantConfConponent_o *)&this->fields.player;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    p_player->klass = 0LL;
    sub_B2C2F8(p_player, 0LL, v6, v7, v8, v9, v10, v11);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CombineResultEffectComponent_ClickDelegate__BeginInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_4184F21 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_4184F21 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_ClickDelegate__Invoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CombineResultEffectComponent_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CombineResultEffectComponent_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CombineResultEffectComponent_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CombineResultEffectComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_4184F22 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v3);
    byte_4184F22 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v4;
  sub_B2C2F8(&this->fields, v4);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v5;
  sub_B2C2F8(&this->fields.afterSkillList, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x0
  __int64 v10; // x1

  if ( (byte_4184F24 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4184F24 = 1;
  }
  v8 = sub_B2C42C(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id, *(_DWORD *)(v8 + 20) = lv, (afterSkillList = this->fields.afterSkillList) == 0LL) )
  {
    sub_B2C434(afterSkillList, v10);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x0
  __int64 v10; // x1

  if ( (byte_4184F23 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_4184F23 = 1;
  }
  v8 = sub_B2C42C(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id, *(_DWORD *)(v8 + 20) = lv, (beforeSkillList = this->fields.beforeSkillList) == 0LL) )
  {
    sub_B2C434(beforeSkillList, v10);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v4; // x20
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x20

  v4 = this;
  if ( (byte_4184F26 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B2C35C(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
                                                                       *(_QWORD *)&index);
    byte_4184F26 = 1;
  }
  afterSkillList = v4->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B2C434(this, *(_QWORD *)&index);
  if ( afterSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return afterSkillList->fields._items->m_Items[index];
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_4184F27 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B2C35C(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
                                                                       method);
    byte_4184F27 = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B2C434(this, method);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v4; // x20
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x20

  v4 = this;
  if ( (byte_4184F25 & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B2C35C(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
                                                                       *(_QWORD *)&index);
    byte_4184F25 = 1;
  }
  beforeSkillList = v4->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_B2C434(this, *(_QWORD *)&index);
  if ( beforeSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return beforeSkillList->fields._items->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_MessageDelegate___ctor(
        CombineResultEffectComponent_MessageDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall CombineResultEffectComponent_MessageDelegate__BeginInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)message;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__Invoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CombineResultEffectComponent_MessageDelegate_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  CombineResultEffectComponent_MessageDelegate_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  CombineResultEffectComponent_MessageDelegate_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CombineResultEffectComponent_MessageDelegate_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, message, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = message->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(message, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(message, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = message->klass;
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(message, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(message, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(message, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, message, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, message, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                message,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, message, v31);
    }
  }
}


void __fastcall CombineResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184F1B & 1) == 0 )
  {
    sub_B2C35C(&CombineResultEffectComponent___c_TypeInfo, v1);
    byte_4184F1B = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CombineResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall CombineResultEffectComponent___c___ctor(
        CombineResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__105_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return System_Int32__CompareTo_38381180((_DWORD)a + 24, b->fields.priority, 0LL);
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
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v9; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v10; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v11; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v12; // x8
  struct CombineResultEffectComponent_o *v13; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  __int64 _9__4; // x22
  CommonUI_o *v16; // x20
  __int64 v17; // x9
  const MethodInfo *v18; // x2

  v2 = this;
  if ( (byte_4184F1C & 1) == 0 )
  {
    sub_B2C35C(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)sub_B2C35C(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__,
                                                                      v5);
    byte_4184F1C = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_25;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  effect = (UnityEngine_Object_o *)_4__this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_35315108(effect, 0LL);
  v9 = v2->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  this[4].klass = 0LL;
  sub_B2C2F8(&this[4], 0LL);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v10->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, 0LL);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_25;
  this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v11->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  if ( this[4].fields.__9__4 )
  {
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = v2->fields.CS___8__locals1;
    if ( v12 )
    {
      v13 = v12->fields.__4__this;
      if ( v13 )
      {
        baseUsrSvtData = v13->fields.baseUsrSvtData;
        _9__4 = (__int64)v2->fields.__9__4;
        v16 = (CommonUI_o *)this;
        if ( !_9__4 )
        {
          _9__4 = sub_B2C42C(CombineResultEffectComponent_ClickDelegate_TypeInfo);
          v17 = *(_QWORD *)Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)(_9__4 + 40) = Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)(_9__4 + 16) = v17;
          *(_QWORD *)(_9__4 + 32) = v2;
          sub_B2C2F8(_9__4 + 32, v2);
          v2->fields.__9__4 = (struct CombineResultEffectComponent_ClickDelegate_o *)_9__4;
          sub_B2C2F8(&v2->fields.__9__4, _9__4);
        }
        if ( v16 )
        {
          CommonUI__OpenCombineLimit(v16, baseUsrSvtData, (CombineResultEffectComponent_ClickDelegate_o *)_9__4, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B2C434(this, method);
  }
  if ( this[9].klass )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
    this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v2->fields.callback;
    if ( !this )
      goto LABEL_25;
    CombineResultEffectComponent_ClickDelegate__Invoke((CombineResultEffectComponent_ClickDelegate_o *)this, 1, v18);
  }
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_1___setSkillResultInfo_b__4(
        CombineResultEffectComponent___c__DisplayClass143_1_o *this,
        bool decide,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v5; // x8
  CombineResultEffectComponent___c__DisplayClass143_1_o *v6; // x19
  const MethodInfo *v7; // x2
  CombineResultEffectComponent_ClickDelegate_o *callback; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (_4__this->fields.combineLimitLv = 0, v5 = this->fields.CS___8__locals1, v6 = this, !v5)
    || (this = (CombineResultEffectComponent___c__DisplayClass143_1_o *)v5->fields.__4__this) == 0LL )
  {
    sub_B2C434(this, decide);
  }
  CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, 0LL);
  callback = v6->fields.callback;
  if ( callback )
    CombineResultEffectComponent_ClickDelegate__Invoke(callback, 1, v7);
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
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _BYTE *monitor; // x8
  NetworkManager_ResultCallbackFunc_o *klass; // x20
  _DWORD *v9; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_4184F1D & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)sub_B2C35C(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
                                                                      v6);
    byte_4184F1D = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_12;
  monitor[316] = 0;
  klass = (NetworkManager_ResultCallbackFunc_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      klass,
      v3,
      Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v3[2], klass);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (CombineResultEffectComponent___c__DisplayClass143_2_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    klass,
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v9 = v3[1].monitor;
  if ( !v9 || !this )
LABEL_12:
    sub_B2C434(this, decide);
  CardServantFlagRequest__beginRequest((CardServantFlagRequest_o *)this, v9[77], v9[78], 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_2___setSkillResultInfo_b__7(
        CombineResultEffectComponent___c__DisplayClass143_2_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    CombineResultEffectComponent_ClickDelegate__Invoke(callback, 1, method);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass165_0___ctor(
        CombineResultEffectComponent___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass165_0___OpenNotification_b__0(
        CombineResultEffectComponent___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent___c__DisplayClass165_0_o *v2; // x19
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
  if ( (byte_4184F1E & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineResultEffectComponent___c__DisplayClass165_0_o *)sub_B2C35C(
                                                                      &ServantCharaGraphEXOpenManager_TypeInfo,
                                                                      v3);
    byte_4184F1E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  resUsrSvtData = _4__this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v7 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
  limitCount = v2->fields.limitCount;
  v10 = v8;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v10, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass165_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_B2C434(this, method);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ctor(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21

  if ( (byte_4184F1F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDcd);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__, v6);
    byte_4184F1F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v9 )
    sub_B2C434(Instance, v8);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v7; // x20

  if ( (byte_4184F20 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4184F20 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  Instance = (CommonUI_o *)_4__this->fields.limitUpResultCheck;
  if ( !Instance )
    goto LABEL_11;
  LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7 )
LABEL_11:
    sub_B2C434(Instance, v5);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}