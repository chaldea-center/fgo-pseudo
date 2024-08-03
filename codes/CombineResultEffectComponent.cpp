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
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_object__o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_HashSet_T__o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_49FFC5D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v7);
    sub_1B640C8(&string___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_17200/*"bit_result02"*/, v9);
    sub_1B640C8(&StringLiteral_17201/*"bit_result03"*/, v10);
    sub_1B640C8(&StringLiteral_17202/*"bit_result04"*/, v11);
    sub_1B640C8(&StringLiteral_17199/*"bit_result01"*/, v12);
    byte_49FFC5D = 1;
  }
  v13 = sub_1B64170(string___TypeInfo, 3LL);
  if ( !v13 )
    goto LABEL_12;
  v17 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_11;
  v18 = StringLiteral_17199/*"bit_result01"*/;
  *(_QWORD *)(v13 + 32) = StringLiteral_17199/*"bit_result01"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), v18, v15, v16);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_11;
  v21 = StringLiteral_17200/*"bit_result02"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_17200/*"bit_result02"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), v21, v19, v20);
  if ( *(_DWORD *)(v17 + 24) <= 2u )
    goto LABEL_11;
  v24 = StringLiteral_17201/*"bit_result03"*/;
  *(_QWORD *)(v17 + 48) = StringLiteral_17201/*"bit_result03"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 48), v24, v22, v23);
  this->fields.startAniName = (struct System_String_array *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.startAniName, v17, v25, v26);
  v27 = StringLiteral_17202/*"bit_result04"*/;
  this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_17202/*"bit_result04"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.LimitAnimName, v27, v28, v29);
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_BA3B20;
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentFigureCollectList, (int32_t)v32, v33, v34);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.afterFigureCollectList, (int32_t)v37, v38, v39);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v13 = sub_1B64170(int___TypeInfo, 1LL);
  if ( !v13 )
    goto LABEL_12;
  v14 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
LABEL_11:
    sub_1B6432C(v13, v14);
  *(_DWORD *)(v13 + 32) = 100;
  this->fields.ChangeCardEffectLvList = (struct System_Int32_array *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ChangeCardEffectLvList, v13, v40, v41);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  this->fields.autoFadeout = 1;
  v44 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo,
                                                     v42,
                                                     v43);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v44,
    (const MethodInfo_3365B30 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v44 )
LABEL_12:
    sub_1B64324(v13);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v44,
    1,
    (const MethodInfo_3366D34 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v44,
    10,
    (const MethodInfo_3366D34 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v44,
    26,
    (const MethodInfo_3366D34 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v44,
    19,
    (const MethodInfo_3366D34 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    v44,
    24,
    (const MethodInfo_3366D34 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.limitUpKinds, (int32_t)v44, v45, v46);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FFC0F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v3);
    byte_49FFC0F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)Component_object, v5, v6);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
  v8 = UnityEngine_Component__GetComponent_object_(
         transform,
         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineResStatus, (int32_t)v8, v9, v10);
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
  ServantLvDetailMaster_o *v9; // x22
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v12; // w8

  if ( (byte_49FFC23 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, *(_QWORD *)&oldLv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFC23 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    sub_1B64324(Instance);
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
    sub_1B64324(this);
  if ( (byte_49FFC89 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_49FFC89 = 1;
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

  if ( (byte_49FFC5A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    byte_49FFC5A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return ServantCommentMaster__IsOpenImageLimitProfile((ServantCommentMaster_o *)Master_object, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *svtResultInfoWindow; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49FFC57 & 1) == 0 )
  {
    sub_1B640C8(&System_GC_TypeInfo, method);
    byte_49FFC57 = 1;
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
    SkillUpResultWindowComponent__Close((SkillUpResultWindowComponent_o *)svtResultInfoWindow, v4);
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62421456(0LL);
  svtResultInfoWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !svtResultInfoWindow )
LABEL_17:
    sub_1B64324(svtResultInfoWindow);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_49FFC59 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_1B640C8(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_0__, v4);
    byte_49FFC59 = 1;
  }
  v5 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_1B64324(v11);
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v10, v12);
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
  DataManager_o *v21; // x24
  Il2CppObject *MasterData_object; // x25
  SvtMultiPortraitMaster_o *v23; // x24
  int32_t v24; // w23
  System_Collections_Generic_List_object__o *v25; // x24
  _BOOL8 v26; // x0
  SvtMultiPortraitEntity_o *current; // x24
  int klass_high; // w8
  int32_t v29; // w25
  UnityEngine_GameObject_o *v30; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Component_o *v34; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x1
  struct System_Int32_array *v41; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v43; // x26
  StandFigureCollect_o *v44; // x27
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v53; // x21
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  StandFigureCollect_o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FFC3B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&StandFigureCollect_TypeInfo, v18);
    byte_49FFC3B = 1;
  }
  memset(&v66, 0, sizeof(v66));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  v21 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v21,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_object )
    goto LABEL_47;
  v23 = (SvtMultiPortraitMaster_o *)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                svtId,
                                imageLimitCount,
                                0LL);
  if ( !v23 )
    goto LABEL_47;
  v24 = (int)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v23, svtId, (int32_t)Instance, 2, 0LL);
  if ( !Instance
    || (v25 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_37607928(
                                    gameObject,
                                    svtId,
                                    v24,
                                    1,
                                    faceType,
                                    1,
                                    0LL,
                                    0,
                                    -1,
                                    0LL);
      if ( Instance )
      {
        v53 = (UIStandFigureR_o *)Instance;
        Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)Instance,
            this->fields.standBasePosition,
            0LL);
          afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
          v57 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v55, v56);
          StandFigureCollect___ctor(v57, 0LL, v53, 0LL);
          if ( afterFigureCollectList )
          {
            items = afterFigureCollectList->fields._items;
            v61 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++afterFigureCollectList->fields._version;
            if ( items )
            {
              size = afterFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  afterFigureCollectList,
                  (Il2CppObject *)v57,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
              }
              else
              {
                v63 = &items->obj.klass + size;
                afterFigureCollectList->fields._size = size + 1;
                v63[4] = (Il2CppClass *)v57;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v57, v58, v59);
              }
              return;
            }
          }
        }
      }
    }
LABEL_47:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    v25,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v66 = v65;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v26 )
      break;
    current = (SvtMultiPortraitEntity_o *)v66.fields._current;
    if ( !v66.fields._current )
      sub_1B64324(v26);
    klass_high = HIDWORD(v66.fields._current[2].klass);
    if ( klass_high >= 1 )
      v29 = klass_high + 1;
    else
      v29 = 1;
    if ( !StandFigureNode )
      sub_1B64324(v26);
    v30 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v30,
                         current->fields.portraitImageId,
                         1,
                         faceType,
                         v29,
                         0LL,
                         0,
                         -1,
                         0LL);
    v34 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B64324(0LL);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v32,
      v33);
    transform = UnityEngine_Component__get_transform(v34, 0LL);
    if ( !transform )
      sub_1B64324(0LL);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v39 = UnityEngine_Component__get_gameObject(v34, 0LL);
      v41 = current->fields.commonPosition;
      if ( !v41 )
        sub_1B64324(v39);
      max_length = v41->max_length;
      if ( max_length == 1 )
        sub_1B6432C(v39, v40);
      if ( !max_length )
        sub_1B6432C(v39, v40);
      GameObjectExtensions__AddLocalPosition_33376396(v39, (float)v41->m_Items[1], (float)v41->m_Items[2], 0LL);
    }
    v43 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v44 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v36, v37);
    StandFigureCollect___ctor(v44, current, (UIStandFigureR_o *)v34, 0LL);
    if ( !v43 )
      sub_1B64324(v45);
    v48 = v43->fields._items;
    v49 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v43->fields._version;
    if ( !v48 )
      sub_1B64324(v45);
    v50 = v43->fields._size;
    if ( (unsigned int)v50 >= v48->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v43,
        (Il2CppObject *)v44,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &v48->obj.klass + v50;
      v43->fields._size = v50 + 1;
      v51[4] = (Il2CppClass *)v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v44, v46, v47);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  DataManager_o *v25; // x24
  Il2CppObject *MasterData_object; // x22
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v28; // x28
  __int64 v29; // x24
  __int64 v30; // x26
  int32_t v31; // w26
  const MethodInfo *v32; // x3
  int32_t v33; // w25
  char v34; // w26
  System_Collections_Generic_List_object__o *v35; // x22
  _BOOL8 v36; // x0
  SvtMultiPortraitEntity_o *current; // x27
  int klass_high; // w8
  int32_t v39; // w28
  UnityEngine_GameObject_o *v40; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Component_o *v45; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  struct System_Int32_array *v52; // x8
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_List_object__o *v54; // x29
  StandFigureCollect_o *v55; // x22
  __int64 v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *v64; // x21
  System_Collections_Generic_List_object__o *currentFigureCollectList; // x19
  __int64 v66; // x1
  __int64 v67; // x2
  StandFigureCollect_o *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  int32_t svtId; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_49FFC32 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&formId);
    sub_1B640C8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v19);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&StandFigureCollect_TypeInfo, v22);
    byte_49FFC32 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  v25 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_61;
  v28 = (SvtMultiPortraitMaster_o *)Instance;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v80.fields.currentCryptoKey = v30;
  *(_QWORD *)&v80.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v80, 0LL);
  if ( !MasterData_object )
    goto LABEL_61;
  v31 = (int)Instance;
  Instance = (DataManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                (ServantLimitImageMaster_o *)MasterData_object,
                                (int32_t)Instance,
                                imageLimitCount,
                                0LL);
  v33 = (int)Instance;
  svtId = v31;
  if ( ignoreFormChangeCheck )
  {
    Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(
                                  (CombineResultEffectComponent_o *)Instance,
                                  v31,
                                  (int32_t)Instance,
                                  v32);
    v34 = (char)Instance;
  }
  else
  {
    v34 = 0;
  }
  if ( !v28 )
    goto LABEL_61;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(v28, svtId, v33, overwriteType, 0LL);
  if ( !Instance
    || (v35 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) == 0) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      Instance = (DataManager_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                 ? StandFigureManager__CreateRenderPrefab_37607928(
                                     gameObject,
                                     svtId,
                                     v33,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     v34 & 1,
                                     friendshipNum,
                                     0LL)
                                 : StandFigureManager__CreateRenderPrefab_37663504(
                                     gameObject,
                                     svtId,
                                     v33,
                                     formId,
                                     1,
                                     0,
                                     1,
                                     0LL,
                                     0,
                                     friendshipNum,
                                     0LL));
      v64 = (UIStandFigureR_o *)Instance;
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
          v68 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v66, v67);
          StandFigureCollect___ctor(v68, 0LL, v64, 0LL);
          if ( currentFigureCollectList )
          {
            items = currentFigureCollectList->fields._items;
            v72 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
            ++currentFigureCollectList->fields._version;
            if ( items )
            {
              size = currentFigureCollectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  currentFigureCollectList,
                  (Il2CppObject *)v68,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
              }
              else
              {
                v74 = &items->obj.klass + size;
                currentFigureCollectList->fields._size = size + 1;
                v74[4] = (Il2CppClass *)v68;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v68, v69, v70);
              }
              return;
            }
          }
        }
      }
    }
LABEL_61:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    v35,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v36 )
      break;
    current = (SvtMultiPortraitEntity_o *)v79.fields._current;
    if ( !v79.fields._current )
      sub_1B64324(v36);
    klass_high = HIDWORD(v79.fields._current[2].klass);
    if ( klass_high >= 1 )
      v39 = klass_high + 1;
    else
      v39 = 1;
    if ( ignoreFormChangeCheck | ((unsigned int)formId >> 31) )
    {
      if ( !StandFigureNode )
        sub_1B64324(v36);
      v40 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v40,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v39,
                           0LL,
                           v34 & 1,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_1B64324(v36);
      v44 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v44,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v39,
                           0LL,
                           0LL);
    }
    v45 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B64324(0LL);
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v42,
      v43);
    transform = UnityEngine_Component__get_transform(v45, 0LL);
    if ( !transform )
      sub_1B64324(0LL);
    UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v50 = UnityEngine_Component__get_gameObject(v45, 0LL);
      v52 = current->fields.commonPosition;
      if ( !v52 )
        sub_1B64324(v50);
      max_length = v52->max_length;
      if ( max_length == 1 )
        sub_1B6432C(v50, v51);
      if ( !max_length )
        sub_1B6432C(v50, v51);
      GameObjectExtensions__AddLocalPosition_33376396(v50, (float)v52->m_Items[1], (float)v52->m_Items[2], 0LL);
    }
    v54 = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
    v55 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v47, v48);
    StandFigureCollect___ctor(v55, current, (UIStandFigureR_o *)v45, 0LL);
    if ( !v54 )
      sub_1B64324(v56);
    v59 = v54->fields._items;
    v60 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v54->fields._version;
    if ( !v59 )
      sub_1B64324(v56);
    v61 = v54->fields._size;
    if ( (unsigned int)v61 >= v59->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v54,
        (Il2CppObject *)v55,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = &v59->obj.klass + v61;
      v54->fields._size = v61 + 1;
      v62[4] = (Il2CppClass *)v55;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v55, v57, v58);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  Il2CppObject *current; // x25
  UnityEngine_Object_o *monitor; // x20
  UIStandFigureR_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  _BOOL8 v18; // x0
  Il2CppObject *v19; // x24
  UnityEngine_Object_o *v20; // x20
  UIStandFigureR_o *v21; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_Object_o *v23; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x8
  int32_t v25; // w2
  int v26; // w9
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FFC56 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FFC56 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    currentFigureCollectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v28,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v9 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_1B64324(v9);
    monitor = (UnityEngine_Object_o *)v28.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v12 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v12 )
        sub_1B64324(0LL);
      UIStandFigureR__ReleaseCharacter(v12, 0LL);
      v13 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v13 )
        sub_1B64324(0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v15 = this->fields.currentFigureCollectList;
  if ( !v15 )
    goto LABEL_40;
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
  currentFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    currentFigureCollectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v18 )
      break;
    v19 = v28.fields._current;
    if ( !v28.fields._current )
      sub_1B64324(v18);
    v20 = (UnityEngine_Object_o *)v28.fields._current[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      v21 = (UIStandFigureR_o *)v19[1].monitor;
      if ( !v21 )
        sub_1B64324(0LL);
      UIStandFigureR__ReleaseCharacter(v21, 0LL);
      v22 = (UnityEngine_Component_o *)v19[1].monitor;
      if ( !v22 )
        sub_1B64324(0LL);
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(v23, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
LABEL_40:
    sub_1B64324(currentFigureCollectList);
  v25 = afterFigureCollectList->fields._size;
  v26 = afterFigureCollectList->fields._version + 1;
  afterFigureCollectList->fields._size = 0;
  afterFigureCollectList->fields._version = v26;
  if ( v25 >= 1 )
    System_Array__Clear((System_Array_o *)afterFigureCollectList->fields._items, 0, v25, 0LL);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_1B64324(bgCollider);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_49FFC45 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_CombineResultEffectComponent__EndLoad_b__146_0__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FFC45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__146_0__, 0LL);
  if ( !v10 )
    sub_1B64324(v13);
  CommonUI__maskFadein(v10, DEFAULT_FADE_TIME, v12, 0LL);
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
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
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
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v4 = this;
  if ( (byte_49FFC4E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v5);
    sub_1B640C8(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v6);
    sub_1B640C8(&Method_CombineResultEffectComponent__EndPlay_b__156_0__, v7);
    sub_1B640C8(&Method_CombineResultEffectComponent__EndPlay_b__156_1__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v11);
    this = (CombineResultEffectComponent_o *)sub_1B640C8(&StringLiteral_22461/*"playVoice"*/, v12);
    byte_49FFC4E = 1;
  }
  playCnt = v4->fields.playCnt;
  if ( (int)playCnt < v4->fields.maxPlayCnt )
  {
    playVoiceList = v4->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
        sub_1B6432C(this, method);
      v15 = playVoiceList->m_Items[playCnt];
      if ( v15 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v4,
          (System_String_o *)StringLiteral_22461/*"playVoice"*/,
          v15->fields.delay,
          0LL);
        return;
      }
    }
LABEL_33:
    sub_1B64324(this);
  }
  if ( v4->fields.player )
    CombineResultEffectComponent__stopVoice(v4, method);
  v4->fields.playCnt = 0;
  v4->fields.playVoiceList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.playVoiceList, 0, v2, v3);
  this = (CombineResultEffectComponent_o *)v4->fields.limitUpKinds;
  if ( !this )
    goto LABEL_33;
  this = (CombineResultEffectComponent_o *)System_Collections_Generic_HashSet_Int32Enum___Contains(
                                             (System_Collections_Generic_HashSet_T__o *)this,
                                             v4->fields.kind,
                                             (const MethodInfo_3366224 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__);
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
    v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v30;
    *(_QWORD *)&v40.fields.fakeValue = v29;
    this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                               v40,
                                               0LL);
    v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseUsrSvtData;
    if ( !v31 )
      goto LABEL_33;
    v32 = (int)this;
    v33 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v31[6],
                                              0LL);
    v34 = (_DWORD)v33 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v33, v32, (_DWORD)v33 + 1, v35) )
    {
      v36 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_1B64314(
                                                                    ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo,
                                                                    v16,
                                                                    v17);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v36,
        (Il2CppObject *)v4,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
      System_Action___ctor(v39, (Il2CppObject *)v4, Method_CombineResultEffectComponent__EndPlay_b__156_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v32, v34, v36, v39, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v4->fields.limitUpResultCheck;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)v4, Method_CombineResultEffectComponent__EndPlay_b__156_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_33;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v19, 1, v20);
    }
  }
  else if ( v4->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v4, v16);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v4, v21) )
    {
      this = (CombineResultEffectComponent_o *)v4->fields.touchInfo;
      if ( !this )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      costumeId = v4->fields.costumeId;
      v26 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v26->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v4, v23);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v4, v4->fields.skillShowIndex, v24);
        ++v4->fields.skillShowIndex;
      }
    }
    else
    {
      CombineResultEffectComponent__EndDisp(v4, v22);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_49FFC53 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_CombineResultEffectComponent__FadeoutProcess_b__165_0__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FFC53 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v10 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
      v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
      System_Action___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__165_0__,
        0LL);
      if ( !Instance )
        sub_1B64324(v13);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v12, 0LL);
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

  if ( (byte_49FFC3A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_49FFC3A = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_1B64324(v6);
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( max_length == v9 )
      sub_1B6432C(v6, *(_QWORD *)&svtId);
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
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantCostumeMaster_o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  struct UserServantEntity_o *v18; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x19
  __int64 v20; // x20
  __int64 v21; // x21
  ServantEntity_o *v22; // [xsp+0h] [xbp-40h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_49FFC54 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&messageId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49FFC54 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( messageId == 2 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_21;
    v14 = (ServantCostumeMaster_o *)Instance;
    v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = v16;
    *(_QWORD *)&v24.fields.fakeValue = v15;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v24, 0LL);
    if ( !v14 )
      goto LABEL_21;
    if ( ServantCostumeMaster__TryGetEntity(v14, &entity, (int32_t)Instance, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
        return ServantCostumeEntity__getShortName(entity, 0LL);
LABEL_21:
      sub_1B64324(Instance);
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = this->fields.resUsrSvtData;
  if ( !v18 )
    goto LABEL_21;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v21;
  *(_QWORD *)&v25.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v25, 0LL);
  if ( !v19 )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v19,
          (Il2CppObject **)&v22,
          (int32_t)Instance,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)v22;
  if ( !v22 )
    goto LABEL_21;
  return ServantEntity__getName(v22, -1, -1, 0LL);
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

  if ( (byte_49FFC35 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, fmsString);
    byte_49FFC35 = 1;
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
    sub_1B64324(fsm);
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)fsm,
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B64324(0LL);
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
  __int64 v8; // x8
  int64_t v9; // x20
  int v10; // w23
  int v11; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v13; // q1
  __int64 v14; // x21
  __int128 v15; // q0
  int64_t v16; // x22
  __int64 id; // x1
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

  if ( (byte_49FFC48 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFC48 = 1;
  }
  v32 = 0LL;
  skillInfoList = 0LL;
  v30 = 0LL;
  tdInfo = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 30, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
          if ( Instance )
          {
            v8 = *(_QWORD *)(Instance + 24);
            v9 = Instance;
            v10 = v8 - 1;
            if ( (int)v8 >= 1 )
            {
              v11 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_52;
                v13 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v14 = *(_QWORD *)(v9 + 8LL * v11 + 32);
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v29.fields.fakeValue = v13;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v28 = v29;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v28, 0LL);
                if ( !v14 )
                  goto LABEL_52;
                v15 = *(_OWORD *)(v14 + 32);
                v16 = Instance;
                *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
                *(_OWORD *)&v27.fields.fakeValue = v15;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v27, 0LL);
                if ( v16 == Instance )
                  break;
                if ( v10 == v11 )
                  goto LABEL_20;
                if ( (unsigned int)++v11 >= *(_DWORD *)(v9 + 24) )
LABEL_18:
                  sub_1B6432C(Instance, id);
              }
              this->fields.resUsrSvtData = (struct UserServantEntity_o *)v14;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, v14, v18, v19);
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
    sub_1B64324(Instance);
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
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x20
  const MethodInfo *v13; // x1
  int32_t kind; // w8
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x1

  if ( (byte_49FFC25 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_CombineResultEffectComponent__InitCombineEffect_b__112_0__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_11300/*"ResultEffect"*/, v6);
    byte_49FFC25 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11300/*"ResultEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_21;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effect, (int32_t)Value, v9, v10);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_21;
  fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  v12 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_49F7116 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_49F7116 = 1;
  }
  if ( !v12 )
    goto LABEL_21;
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    v19 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(
      v21,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__112_0__,
      0LL);
    if ( v19 )
    {
      CommonUI__maskFadein(v19, DEFAULT_FADE_TIME, v21, 0LL);
      return;
    }
LABEL_21:
    sub_1B64324(fsm);
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v13);
  if ( this->fields.kind == 6 )
    CombineResultEffectComponent__loadBoxGachaEffect(this, v22);
  else
    CombineResultEffectComponent__SetResultServantVoiceData(this, v22);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FFC4F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFC4F = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, method);
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)DataManager__GetMasterData_object_(
                                                                                        (DataManager_o *)costumeSkillInfoManager,
                                                                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                                        v16,
                                                                                        0LL);
  if ( !v10 )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v10,
          &entity,
          (int32_t)costumeSkillInfoManager,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)entity;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  costumeSkillInfoManager = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !costumeSkillInfoManager )
LABEL_19:
    sub_1B64324(costumeSkillInfoManager);
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
    sub_1B64324(0LL);
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49FFC5C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5443/*"END_ANIMATION"*/, method);
    byte_49FFC5C = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_1B64324(0LL);
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
  __int64 v19; // x1
  __int64 v20; // x2
  LimitCountSealDialogComponent_CallbackFunc_o *v21; // x23
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v2 = (Il2CppObject *)this;
  if ( (byte_49FFC58 & 1) == 0 )
  {
    sub_1B640C8(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CombineResultEffectComponent_o *)sub_1B640C8(&StringLiteral_8209/*"LIMIT_COUNT_SEALED_TITLE"*/, v8);
    byte_49FFC58 = 1;
  }
  monitor = v2[12].monitor;
  if ( !monitor )
    goto LABEL_14;
  v11 = monitor[10];
  v10 = monitor[11];
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v24, 0LL);
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2[12].monitor;
  if ( !v12 )
    goto LABEL_14;
  v13 = (int)this;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12[6], 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CombineResultEffectComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8209/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v21 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_1B64314(
                                                          LimitCountSealDialogComponent_CallbackFunc_TypeInfo,
                                                          v19,
                                                          v20);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v21,
    v2,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    v22);
  if ( !v16 )
LABEL_14:
    sub_1B64324(this);
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(v16, v18, v17, v21, v23);
}


bool __fastcall CombineResultEffectComponent__OpenNotification(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 AscensionAfterDialogId; // x0
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
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x23
  int v43; // [xsp+3Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_49FFC55 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_CombineResultEffectComponent___c__DisplayClass167_0__OpenNotification_b__0__, v8);
    sub_1B640C8(&CombineResultEffectComponent___c__DisplayClass167_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_11495/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49FFC55 = 1;
  }
  v12 = sub_1B64314(CombineResultEffectComponent___c__DisplayClass167_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_28;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
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
      *(_QWORD *)&v44.fields.currentCryptoKey = v21;
      *(_QWORD *)&v44.fields.fakeValue = v20;
      AscensionAfterDialogId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
      *(_DWORD *)(v12 + 24) = AscensionAfterDialogId;
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v12 + 24) = this->fields.costumeId;
      v22 = this->fields.resUsrSvtData;
      if ( v22 )
      {
        v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v45.fields.currentCryptoKey = v24;
        *(_QWORD *)&v45.fields.fakeValue = v23;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v25, *(_DWORD *)(v12 + 24), 0LL);
        v43 = AscensionAfterDialogId;
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
          *(_QWORD *)&v46.fields.currentCryptoKey = v29;
          *(_QWORD *)&v46.fields.fakeValue = v28;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
          v31 = *(_DWORD *)(v12 + 24);
          v32 = v30;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v32, v31, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v27,
                                                *(_DWORD *)(v12 + 24),
                                                v33);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v36 = System_Int32__ToString((int32_t)&v43, 0LL);
          v37 = System_String__Concat_61375396((System_String_o *)StringLiteral_11495/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v36, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v38 = LocalizationManager__Get(v37, 0LL);
          v39 = System_String__Format(v38, NameFromMessageId, 0LL);
          v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v40, v41);
          System_Action___ctor(
            v42,
            (Il2CppObject *)v12,
            Method_CombineResultEffectComponent___c__DisplayClass167_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v16 = 1;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v39,
              v42,
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
    sub_1B64324(AscensionAfterDialogId);
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *Master_object; // x23
  CommonUI_o *v25; // x22
  const MethodInfo *v26; // x2
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v28; // x20
  CommonUI_o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  ServantStatusDialog_EndDelegate_o *v32; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FFC5B & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__0__, v16);
    sub_1B640C8(&CombineResultEffectComponent___c__DisplayClass173_0_TypeInfo, v17);
    byte_49FFC5B = 1;
  }
  entity = 0LL;
  v18 = sub_1B64314(
          CombineResultEffectComponent___c__DisplayClass173_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_20;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v18 + 24) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)finishCallback, v22, v23);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v25 = UserId;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v25 )
      {
        CommonUI__maskFadein(v25, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          UserId = (CommonUI_o *)this->fields.limitUpResultCheck;
          if ( UserId )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)UserId, 0, v26);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v28 = entity;
            v29 = (CommonUI_o *)Instance;
            v32 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v30, v31);
            ServantStatusDialog_EndDelegate___ctor(
              v32,
              (Il2CppObject *)v18,
              Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v29 )
            {
              CommonUI__OpenServantStatusDialog_30357004(v29, 33, v28, limitCount, v32, 0LL);
              return;
            }
          }
        }
      }
LABEL_20:
      sub_1B64324(UserId);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_20;
  CommonUI__CloseConfirmDialog_30345628(UserId, *(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall CombineResultEffectComponent__ReleaseVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  Il2CppObject *Instance; // x0

  if ( (byte_49FFC51 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    byte_49FFC51 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v2, v3);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
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
  DataManager_o *v23; // x22
  Il2CppObject *MasterData_object; // x25
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v26; // x24
  __int64 v27; // x22
  __int64 v28; // x23
  struct UserServantEntity_o *v29; // x8
  int32_t v30; // w22
  int32_t v31; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w23
  struct UserServantEntity_o *v34; // x8
  int32_t v35; // w23
  __int64 v36; // x24
  __int64 v37; // x26
  CombineResultEffectComponent_o *v38; // x0
  const MethodInfo *v39; // x3
  char v40; // w24
  System_Collections_Generic_List_object__o *v41; // x25
  _BOOL8 v42; // x0
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  UnityEngine_Component_o *v48; // x26
  UnityEngine_Transform_o *transform; // x0
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  float v54; // s0
  float v55; // s1
  float v56; // s2
  struct System_Int32_array *v57; // x8
  il2cpp_array_size_t max_length; // w9
  int v59; // s11
  int v60; // s12
  float v61; // s9
  float v62; // s10
  float v63; // s8
  UnityEngine_Transform_o *v64; // x0
  System_Collections_Generic_List_object__o *afterFigureCollectList; // x27
  __int64 v66; // x1
  __int64 v67; // x2
  StandFigureCollect_o *v68; // x28
  __int64 v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  const MethodInfo *v76; // x2
  UnityEngine_GameObject_o *v77; // x0
  UIStandFigureR_o *v78; // x23
  System_Collections_Generic_List_object__o *v79; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  StandFigureCollect_o *v82; // x22
  int32_t v83; // w2
  int32_t v84; // w3
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  __int64 v90; // x1
  int32_t masterDataBytes; // w21
  float FadeTime; // s8
  int32_t m_CancellationTokenSource_high; // w22
  int32_t v94; // w20
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+30h] [xbp-B0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFC38 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v12);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&StandFigureCollect_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_8368/*"LimitUpResSvtNodeName"*/, v20);
    byte_49FFC38 = 1;
  }
  entity = 0LL;
  memset(&v97, 0, sizeof(v97));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8368/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v23 = Instance;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_object = DataManager__GetMasterData_object_(
                        v23,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v23,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_75;
  v26 = (ServantLimitAddMaster_o *)Instance;
  v28 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v99.fields.currentCryptoKey = v28;
  *(_QWORD *)&v99.fields.fakeValue = v27;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v99, 0LL);
  v29 = this->fields.resUsrSvtData;
  if ( !v29 )
    goto LABEL_75;
  v30 = (int)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                v29->fields.limitCount,
                                0LL);
  if ( !v26 )
    goto LABEL_75;
  v31 = (int)Instance;
  if ( ServantLimitAddMaster__TryGetEntity(v26, &entity, v30, (int32_t)Instance, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_75;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v31 = LimitCountUpResultServantLimitCount;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_75;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v30,
                                 v31,
                                 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v30, ServantLimitCountSealAfter, 0LL);
  v34 = this->fields.resUsrSvtData;
  if ( !v34 )
    goto LABEL_75;
  v35 = (int)Instance;
  v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v100.fields.currentCryptoKey = v37;
  *(_QWORD *)&v100.fields.fakeValue = v36;
  v38 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v100, 0LL);
  Instance = (DataManager_o *)CombineResultEffectComponent__GetIsIgnoreFormChange(v38, (int32_t)v38, v35, v39);
  if ( !MasterData_object )
LABEL_75:
    sub_1B64324(Instance);
  v40 = (char)Instance;
  Instance = (DataManager_o *)SvtMultiPortraitMaster__GetEntityListOrderBy(
                                (SvtMultiPortraitMaster_o *)MasterData_object,
                                v30,
                                v35,
                                2,
                                0LL);
  if ( Instance
    && (v41 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (DataManager_o *)System_Linq_Enumerable__Any_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                      (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v96,
      v41,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v97 = v96;
    while ( 1 )
    {
      v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v97,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
      if ( !v42 )
        break;
      if ( !StandFigureNode )
        sub_1B64324(v42);
      current = (SvtMultiPortraitEntity_o *)v97.fields._current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_1B64324(gameObject);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           gameObject,
                           current->fields.portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v40 & 1,
                           -1,
                           0LL);
      v48 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_1B64324(0LL);
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (int32_t)current,
        v46,
        v47);
      transform = UnityEngine_Component__get_transform(v48, 0LL);
      if ( !transform )
        sub_1B64324(0LL);
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v51 = UnityEngine_Component__get_transform(v48, 0LL);
        if ( !v51 )
          sub_1B64324(0LL);
        *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Transform__get_localPosition(v51, 0LL);
        v57 = current->fields.commonPosition;
        if ( !v57 )
          sub_1B64324(v52);
        max_length = v57->max_length;
        if ( !max_length )
          sub_1B6432C(v52, v53);
        if ( max_length == 1 )
          sub_1B6432C(v52, v53);
        v60 = v57->m_Items[1];
        v59 = v57->m_Items[2];
        v61 = v54;
        v62 = v55;
        v63 = v56;
        v64 = UnityEngine_Component__get_transform(v48, 0LL);
        if ( !v64 )
          sub_1B64324(0LL);
        v101.fields.x = v61 + (float)v60;
        v101.fields.y = v62 + (float)v59;
        v101.fields.z = v63;
        UnityEngine_Transform__set_localPosition(v64, v101, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v48,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
      v68 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v66, v67);
      StandFigureCollect___ctor(v68, current, (UIStandFigureR_o *)v48, 0LL);
      if ( !afterFigureCollectList )
        sub_1B64324(v69);
      items = afterFigureCollectList->fields._items;
      v73 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++afterFigureCollectList->fields._version;
      if ( !items )
        sub_1B64324(v69);
      size = afterFigureCollectList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          afterFigureCollectList,
          (Il2CppObject *)v68,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        afterFigureCollectList->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v68;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v68, v70, v71);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v97,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_75;
    v77 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    Instance = (DataManager_o *)StandFigureManager__CreateRenderPrefab_37607928(
                                  v77,
                                  v30,
                                  v35,
                                  1,
                                  0,
                                  1,
                                  0LL,
                                  v40 & 1,
                                  -1,
                                  0LL);
    if ( !Instance )
      goto LABEL_75;
    v78 = (UIStandFigureR_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_75;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, this->fields.standBasePosition, 0LL);
    v79 = (System_Collections_Generic_List_object__o *)this->fields.afterFigureCollectList;
    v82 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v80, v81);
    StandFigureCollect___ctor(v82, 0LL, v78, 0LL);
    if ( !v79 )
      goto LABEL_75;
    v85 = v79->fields._items;
    v86 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v79->fields._version;
    if ( !v85 )
      goto LABEL_75;
    v87 = v79->fields._size;
    if ( (unsigned int)v87 >= v85->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v79,
        (Il2CppObject *)v82,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &v85->obj.klass + v87;
      v79->fields._size = v87 + 1;
      v88[4] = (Il2CppClass *)v82;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v88 + 4), (int32_t)v82, v83, v84);
    }
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v76);
  masterDataBytes = 0;
  FadeTime = 0.0;
  m_CancellationTokenSource_high = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1B6432C(LimitUpSvtVoiceList, v90);
    Instance = (DataManager_o *)LimitUpSvtVoiceList->m_Items[0];
    if ( !Instance )
      goto LABEL_75;
    m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
    masterDataBytes = (int32_t)Instance->fields.masterDataBytes;
    FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)Instance, 0LL);
  }
  if ( System_Linq_Enumerable__Count_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v94 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.afterFigureCollectList;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v94,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)Instance->fields.m_CancellationTokenSource;
      if ( !Instance )
        break;
      UIStandFigureR__SetFace_40646300(
        (UIStandFigureR_o *)Instance,
        m_CancellationTokenSource_high,
        masterDataBytes,
        0LL,
        FadeTime,
        0LL);
      if ( ++v94 >= System_Linq_Enumerable__Count_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                      (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
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
  __int64 v18; // x1
  __int64 v19; // x2
  CombineRootComponent_c *v20; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_49FFC21 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, usrSvtData);
    sub_1B640C8(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__108_0__, v11);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v12);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    byte_49FFC21 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    currentSkillId,
    currentSkillLv);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v14, v15);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v16, v17);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v20 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v20 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v20->static_fields->COMBINE_ASSET_PATH;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__108_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v22, 1, 0LL);
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

  if ( (byte_49FFC31 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3162/*"BaseSvtNodeName"*/, *(_QWORD *)&formId);
    byte_49FFC31 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_1B64324(0LL);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_3162/*"BaseSvtNodeName"*/,
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
  if ( (byte_49FFC36 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B640C8(&StringLiteral_8367/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_49FFC36 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B64324(this);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8367/*"LimitUpBaseSvtNodeName"*/,
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
  int32_t v64; // w22
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
  __int64 v83; // x1
  int32_t v84; // w1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v86; // x9
  struct System_String_array *startAniName; // x8
  int v88; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v90; // w2
  CombineResultEffectComponent_o *v91; // x0
  System_String_o *v92; // x1
  bool v93; // w2
  CombineResultEffectComponent_o *v94; // x0
  System_String_o *v95; // x1
  System_String_o *v96; // x20
  UnityEngine_Transform_o *v97; // x0
  UnityEngine_Component_o *v98; // x20
  float Value; // s0
  float v100; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v102; // x20
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 *v105; // x8
  __int64 v106; // x1
  ServantStatusBattleListViewItem_o *v107; // x0
  System_String_o *v108; // x20
  UnityEngine_Transform_o *v109; // x0
  const MethodInfo *v110; // x1
  const MethodInfo *v111; // x2
  const MethodInfo *v112; // x2
  const MethodInfo *v113; // x2
  const MethodInfo *v114; // x2
  const MethodInfo *v115; // x2
  Il2CppObject *v116; // x21
  __int64 v117; // x1
  __int64 v118; // x2
  EventDelegate_Callback_o *v119; // x22
  __int64 v120; // x1
  __int64 v121; // x2
  EventDelegate_o *v122; // x20
  int32_t v123; // w2
  int32_t v124; // w3
  __int64 v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  __int64 v128; // x8
  const MethodInfo *v129; // x3
  const MethodInfo *v130; // x2
  __int64 v131; // x20
  struct System_String_array *v132; // x8
  int v133; // w9
  const MethodInfo *v134; // x2
  __int64 v135; // x21
  float FadeTime; // s0
  struct System_String_o *v137; // x20
  int32_t v138; // w2
  int32_t v139; // w3
  const MethodInfo *v140; // x1
  __int64 v141; // [xsp+8h] [xbp-68h] BYREF
  __int64 v142; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFC29 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent__SetCardParam_b__116_0__, v4);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UILabel___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v7);
    sub_1B640C8(&EventDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_4760/*"CostumeName"*/, v14);
    sub_1B640C8(&StringLiteral_3162/*"BaseSvtNodeName"*/, v15);
    sub_1B640C8(&StringLiteral_17204/*"bit_result_120"*/, v16);
    sub_1B640C8(&StringLiteral_17211/*"bit_result_extraskill02"*/, v17);
    sub_1B640C8(&StringLiteral_17220/*"bit_result_nobledeliverance"*/, v18);
    sub_1B640C8(&StringLiteral_12173/*"START_ANIMATION"*/, v19);
    sub_1B640C8(&StringLiteral_17208/*"bit_result_command_card_exceed"*/, v20);
    sub_1B640C8(&StringLiteral_17217/*"bit_result_limitbreak"*/, v21);
    sub_1B640C8(&StringLiteral_17212/*"bit_result_friendship_exceed"*/, v22);
    sub_1B640C8(&StringLiteral_11270/*"ResMaxLvExceedNodeName"*/, v23);
    sub_1B640C8(&StringLiteral_17225/*"bit_result_skillrank"*/, v24);
    sub_1B640C8(&StringLiteral_17206/*"bit_result_advent02"*/, v25);
    sub_1B640C8(&StringLiteral_17215/*"bit_result_grail_02"*/, v26);
    sub_1B640C8(&StringLiteral_17226/*"bit_result_skillup"*/, v27);
    sub_1B640C8(&StringLiteral_4899/*"CrtMaxLvExceedNodeName"*/, v28);
    sub_1B640C8(&StringLiteral_17221/*"bit_result_powerup"*/, v29);
    sub_1B640C8(&StringLiteral_12883/*"StartAnimationName"*/, v30);
    sub_1B640C8(&StringLiteral_17214/*"bit_result_grail_01"*/, v31);
    sub_1B640C8(&StringLiteral_17205/*"bit_result_advent01"*/, v32);
    sub_1B640C8(&StringLiteral_17210/*"bit_result_extraskill01"*/, v33);
    sub_1B640C8(&StringLiteral_17224/*"bit_result_skilldeliverance"*/, v34);
    sub_1B640C8(&StringLiteral_17227/*"bit_result_skinchange01"*/, v35);
    sub_1B640C8(&StringLiteral_4900/*"CrtMaxLvNodeName"*/, v36);
    sub_1B640C8(&StringLiteral_11271/*"ResMaxLvNodeName"*/, v37);
    sub_1B640C8(&StringLiteral_13031/*"SvtEqCardScale"*/, v38);
    byte_49FFC29 = 1;
  }
  v142 = 0LL;
  v141 = 0LL;
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
      v86 = this->fields.resUsrSvtData;
      if ( !v86 )
        goto LABEL_182;
      if ( baseUsrSvtData->fields.exp != v86->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_175;
      }
LABEL_86:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_182;
      v88 = this->fields.successInfo - 1;
      if ( v88 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v88];
LABEL_175:
        resUsrSvtData = this->fields.fsm;
        if ( resUsrSvtData )
        {
          v137 = *p_LimitAnimName;
          resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
          if ( resUsrSvtData )
          {
            resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                              (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                              (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                              0LL);
            if ( resUsrSvtData )
            {
              *((_QWORD *)resUsrSvtData + 7) = v137;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56), (int32_t)v137, v138, v139);
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
                    goto LABEL_165;
                  }
                }
              }
            }
          }
        }
LABEL_182:
        sub_1B64324(resUsrSvtData);
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
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_182;
      v42 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v142) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v142 + 4, 0LL);
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
                        (System_String_o *)StringLiteral_11271/*"ResMaxLvNodeName"*/,
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
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      v45 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v142) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v142, 0LL);
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
      *(_QWORD *)&v143.fields.currentCryptoKey = v48;
      *(_QWORD *)&v143.fields.fakeValue = v47;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v143, 0LL);
      v49 = this->fields.baseUsrSvtData;
      if ( !v49 )
        goto LABEL_182;
      v50 = (int)resUsrSvtData;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v49->fields.limitCount, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      resUsrSvtData = (void *)ImageLimitCount__GetImageLimitCount(v50, v51, 0LL);
      v52 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = (int)resUsrSvtData;
      if ( !v52 )
        goto LABEL_182;
      resUsrSvtData = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                v52->fields.svtId,
                                0LL);
      v53 = this->fields.resUsrSvtData;
      if ( !v53 )
        goto LABEL_182;
      v54 = (int)resUsrSvtData;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53->fields.limitCount, 0LL);
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
        v66 = &StringLiteral_17206/*"bit_result_advent02"*/;
LABEL_159:
        resUsrSvtData = this->fields.fsm;
        if ( !resUsrSvtData )
          goto LABEL_182;
        v131 = *v66;
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
      resUsrSvtData = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v134);
      if ( !resUsrSvtData )
        goto LABEL_182;
      if ( *((_DWORD *)resUsrSvtData + 6) )
      {
        v135 = *((_QWORD *)resUsrSvtData + 4);
        if ( !v135 )
          goto LABEL_182;
        v64 = *(_DWORD *)(v135 + 28);
        v63 = *(_DWORD *)(v135 + 56);
        FadeTime = ServantVoiceData__GetFadeTime(*((ServantVoiceData_o **)resUsrSvtData + 4), 0LL);
        v62 = *(_QWORD *)(v135 + 32);
        v60 = FadeTime;
LABEL_28:
        v65 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( v62 )
        {
          v66 = &StringLiteral_17205/*"bit_result_advent01"*/;
          if ( v65 != *(_DWORD *)(v62 + 24) || v65 <= 0 )
            goto LABEL_159;
        }
        else if ( v65 < 1 )
        {
          v66 = &StringLiteral_17205/*"bit_result_advent01"*/;
          goto LABEL_159;
        }
        v66 = &StringLiteral_17205/*"bit_result_advent01"*/;
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
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !resUsrSvtData )
            goto LABEL_182;
          resUsrSvtData = (void *)*((_QWORD *)resUsrSvtData + 3);
          if ( v62 )
          {
            if ( v81 >= *(unsigned int *)(v62 + 24) )
              goto LABEL_183;
            if ( !resUsrSvtData )
              goto LABEL_182;
            v84 = *(_DWORD *)(v62 + 32 + 4 * v81);
          }
          else
          {
            v84 = v64;
            if ( !resUsrSvtData )
              goto LABEL_182;
          }
          UIStandFigureR__SetFace_40646300((UIStandFigureR_o *)resUsrSvtData, v84, v63, 0LL, v60, 0LL);
          if ( v82 == ++v81 )
            goto LABEL_159;
        }
      }
      goto LABEL_183;
    case 2:
      v90 = 1;
      v91 = this;
      v92 = (System_String_o *)StringLiteral_17226/*"bit_result_skillup"*/;
      goto LABEL_92;
    case 3:
      v68 = &StringLiteral_17224/*"bit_result_skilldeliverance"*/;
      goto LABEL_91;
    case 4:
      v93 = 1;
      v94 = this;
      v95 = (System_String_o *)StringLiteral_17226/*"bit_result_skillup"*/;
      goto LABEL_96;
    case 5:
      v67 = &StringLiteral_17220/*"bit_result_nobledeliverance"*/;
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
                        (System_String_o *)StringLiteral_3162/*"BaseSvtNodeName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmString__get_Value(
                        (HutongGames_PlayMaker_FsmString_o *)resUsrSvtData,
                        0LL);
      if ( !this->fields.effect )
        goto LABEL_182;
      v96 = (System_String_o *)resUsrSvtData;
      v97 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v97, v96, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_182;
      v98 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_13031/*"SvtEqCardScale"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      Value = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)resUsrSvtData, 0LL);
      if ( !v98 )
        goto LABEL_182;
      v100 = Value;
      gameObject = UnityEngine_Component__get_gameObject(v98, 0LL);
      resUsrSvtData = CharaGraphManager__CreateTexturePrefab_37591480(
                        gameObject,
                        this->fields.resUsrSvtData,
                        10,
                        0LL,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v102 = (UnityEngine_Component_o *)resUsrSvtData;
      resUsrSvtData = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v144.fields.z = 0.0;
      v144.fields.x = -50.0;
      v144.fields.y = 92.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)resUsrSvtData, v144, 0LL);
      resUsrSvtData = UnityEngine_Component__get_transform(v102, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v145.fields.x = v100;
      v145.fields.y = v100;
      v145.fields.z = v100;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)resUsrSvtData, v145, 0LL);
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
        v132 = this->fields.startAniName;
        if ( !v132 )
          goto LABEL_182;
        v133 = this->fields.successInfo - 1;
        if ( v133 >= v132->max_length )
LABEL_183:
          sub_1B6432C(resUsrSvtData, v83);
        v78 = (__int64 *)&v132->m_Items[v133];
      }
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
LABEL_157:
      v131 = *v78;
      goto LABEL_161;
    case 7:
    case 0x15:
      v68 = &StringLiteral_17225/*"bit_result_skillrank"*/;
LABEL_91:
      v92 = (System_String_o *)*v68;
      v91 = this;
      v90 = 0;
LABEL_92:
      CombineResultEffectComponent__SetCardParam_Skill(v91, v92, v90, v2);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v67 = &StringLiteral_17225/*"bit_result_skillrank"*/;
LABEL_95:
      v95 = (System_String_o *)*v67;
      v94 = this;
      v93 = 0;
LABEL_96:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v94, v95, v93, v2);
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
                        (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v105 = &StringLiteral_17226/*"bit_result_skillup"*/;
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
                        (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v105 = &StringLiteral_17221/*"bit_result_powerup"*/;
LABEL_122:
      v106 = *v105;
      *((_QWORD *)resUsrSvtData + 7) = *v105;
      v107 = (ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56);
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
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_182;
      v71 = (UIExtrusionLabel_o *)resUsrSvtData;
      HIDWORD(v141) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v141 + 4, 0LL);
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
                        (System_String_o *)StringLiteral_11270/*"ResMaxLvExceedNodeName"*/,
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
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_182;
      v74 = (UIExtrusionLabel_o *)resUsrSvtData;
      LODWORD(v141) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      resUsrSvtData = System_Int32__ToString((int32_t)&v141, 0LL);
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
        v77 = &StringLiteral_17217/*"bit_result_limitbreak"*/;
LABEL_144:
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v76);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v130);
        goto LABEL_145;
      }
      if ( this->fields.isChangeCardImg )
      {
        v77 = &StringLiteral_17215/*"bit_result_grail_02"*/;
        goto LABEL_144;
      }
      v77 = &StringLiteral_17214/*"bit_result_grail_01"*/;
LABEL_145:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v131 = *v77;
LABEL_161:
      resUsrSvtData = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)resUsrSvtData,
                        (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                        0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      *((_QWORD *)resUsrSvtData + 7) = v131;
      v107 = (ServantStatusBattleListViewItem_o *)((char *)resUsrSvtData + 56);
      LODWORD(v106) = v131;
LABEL_164:
      sub_1B6406C(v107, v106, v103, v104);
LABEL_165:
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resUsrSvtData, (System_String_o *)StringLiteral_12173/*"START_ANIMATION"*/, 0LL);
      return;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v78 = &StringLiteral_17212/*"bit_result_friendship_exceed"*/;
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
      v108 = (System_String_o *)resUsrSvtData;
      v109 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      resUsrSvtData = TransformHelper__getNodeFromName(v109, v108, 1, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)resUsrSvtData,
                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !resUsrSvtData )
        goto LABEL_182;
      UILabel__set_text((UILabel_o *)resUsrSvtData, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v110);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v111);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v112);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v78 = &StringLiteral_17227/*"bit_result_skinchange01"*/;
      goto LABEL_157;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v2);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v78 = &StringLiteral_17208/*"bit_result_command_card_exceed"*/;
      goto LABEL_157;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v113);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v114);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v115);
      resUsrSvtData = this->fields.fsm;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v78 = &StringLiteral_17204/*"bit_result_120"*/;
      goto LABEL_157;
    case 0x19:
      resUsrSvtData = this->fields.effect;
      if ( !resUsrSvtData )
        goto LABEL_182;
      resUsrSvtData = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resUsrSvtData, 0LL);
      if ( !resUsrSvtData )
        goto LABEL_182;
      v116 = UnityEngine_GameObject__AddComponent_object_(
               (UnityEngine_GameObject_o *)resUsrSvtData,
               (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v119 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v117, v118);
      EventDelegate_Callback___ctor(
        v119,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__116_0__,
        0LL);
      v122 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v120, v121);
      EventDelegate___ctor_46508544(v122, v119, 0LL);
      if ( !v116 )
        goto LABEL_182;
      resUsrSvtData = v116[2].klass;
      if ( !resUsrSvtData )
        goto LABEL_182;
      v125 = *((_QWORD *)resUsrSvtData + 2);
      v126 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++*((_DWORD *)resUsrSvtData + 7);
      if ( !v125 )
        goto LABEL_182;
      v127 = *((int *)resUsrSvtData + 6);
      if ( (unsigned int)v127 >= *(_DWORD *)(v125 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resUsrSvtData,
          (Il2CppObject *)v122,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
      }
      else
      {
        v128 = v125 + 8 * v127;
        *((_DWORD *)resUsrSvtData + 6) = v127 + 1;
        *(_QWORD *)(v128 + 32) = v122;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v128 + 32), (int32_t)v122, v123, v124);
      }
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, 1, v129);
      resUsrSvtData = this->fields.fsm;
      v78 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_17211/*"bit_result_extraskill02"*/ : &StringLiteral_17210/*"bit_result_extraskill01"*/);
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
  int *effect; // x0
  Il2CppObject *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  EventDelegate_Callback_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  EventDelegate_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FFC2C & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, startName);
    sub_1B640C8(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__119_0__, v7);
    sub_1B640C8(&EventDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1B640C8(&StringLiteral_12173/*"START_ANIMATION"*/, v11);
    sub_1B640C8(&StringLiteral_12883/*"StartAnimationName"*/, v12);
    byte_49FFC2C = 1;
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
    v14 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)effect,
            (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v17 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v15, v16);
    EventDelegate_Callback___ctor(
      v17,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_Skill_b__119_0__,
      0LL);
    v20 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v18, v19);
    EventDelegate___ctor_46508544(v20, v17, 0LL);
    if ( !v14
      || (effect = (int *)v14[2].klass) == 0LL
      || (v23 = *((_QWORD *)effect + 2),
          v24 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++effect[7],
          !v23) )
    {
LABEL_17:
      sub_1B64324(effect);
    }
    v25 = effect[6];
    if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)effect,
        (Il2CppObject *)v20,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * v25;
      effect[6] = v25 + 1;
      *(_QWORD *)(v26 + 32) = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v20, v21, v22);
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
                    (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                    0LL);
  if ( !effect )
    goto LABEL_17;
  *((_QWORD *)effect + 7) = startName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(effect + 14), (int32_t)startName, v27, v28);
  effect = (int *)this->fields.fsm;
  if ( !effect )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12173/*"START_ANIMATION"*/, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x2
  EventDelegate_Callback_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  EventDelegate_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FFC2D & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, startName);
    sub_1B640C8(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__120_0__, v7);
    sub_1B640C8(&EventDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1B640C8(&StringLiteral_12173/*"START_ANIMATION"*/, v11);
    sub_1B640C8(&StringLiteral_12883/*"StartAnimationName"*/, v12);
    byte_49FFC2D = 1;
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
            (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v17 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v15, v16);
    EventDelegate_Callback___ctor(
      v17,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__120_0__,
      0LL);
    v20 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v18, v19);
    EventDelegate___ctor_46508544(v20, v17, 0LL);
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
        (Il2CppObject *)v20,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * v25;
      effect[6] = v25 + 1;
      *(_QWORD *)(v26 + 32) = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v20, v21, v22);
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
                          (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                          0LL)) == 0LL
    || (*((_QWORD *)effect + 7) = startName,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(effect + 14), (int32_t)startName, v27, v28),
        (effect = (int *)this->fields.fsm) == 0LL) )
  {
LABEL_20:
    sub_1B64324(effect);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12173/*"START_ANIMATION"*/, 0LL);
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
  __int64 v19; // x2
  CombineRootComponent_c *v20; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_49FFC24 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, baseData);
    sub_1B640C8(&Method_CombineResultEffectComponent__SetCombineLimit_b__111_0__, v9);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v10);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49FFC24 = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)callback,
    autoFadeout);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v20 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v20 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v20->static_fields->EXCEED_ASSET_PATH;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__111_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v22, 1, 0LL);
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
  CombineRootComponent_c *v22; // x0
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *v24; // x20
  __int64 v25; // x1
  UnityEngine_Transform_o *v26; // x21

  if ( (byte_49FFC1E & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, userServantEntity);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_17208/*"bit_result_command_card_exceed"*/, v14);
    sub_1B640C8(&StringLiteral_11300/*"ResultEffect"*/, v15);
    sub_1B640C8(&StringLiteral_12178/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v16);
    byte_49FFC1E = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userServantEntity,
    cardIndex,
    exceedCount);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v19, v20);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  if ( !userServantEntity )
    goto LABEL_18;
  this->fields.displayCount = UserServantEntity__GetTransformCount(userServantEntity, 0, 0LL);
  v22 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v22 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v22->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_18;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17208/*"bit_result_command_card_exceed"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48347676,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_18;
  v24 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v26 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7116 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v25);
    byte_49F7116 = 1;
  }
  if ( !v26
    || (UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11300/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v24,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_18:
    sub_1B64324(effectAssetData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12178/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x2
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v20; // x20
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FFC18 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo, userSvtEntity);
    sub_1B640C8(&StringLiteral_12182/*"START_COSTUME_EFFECT"*/, v11);
    byte_49FFC18 = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtEntity,
    costumeId,
    (int32_t)costumeName);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.costumeName, (int32_t)costumeName, v12, v13);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v14, v15);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v16, v17);
  this->fields.setResUsrSvtData = 0;
  v20 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1B64314(
                                                                    CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo,
                                                                    v18,
                                                                    v19);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v20, v21);
  this->fields.costumeSkillInfoManager = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v20, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12182/*"START_COSTUME_EFFECT"*/, 0LL);
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
  CombineRootComponent_c *v17; // x0
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *v20; // x20
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x21

  if ( (byte_49FFC1C & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, userSvtData);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_17212/*"bit_result_friendship_exceed"*/, v10);
    sub_1B640C8(&StringLiteral_11300/*"ResultEffect"*/, v11);
    sub_1B640C8(&StringLiteral_12185/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v12);
    byte_49FFC1C = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v15, v16);
  this->fields.setResUsrSvtData = 0;
  v17 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v17 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v17->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              effectAssetData,
                              (System_String_o *)StringLiteral_17212/*"bit_result_friendship_exceed"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48347676,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_17;
  v20 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  v22 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7116 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
    byte_49F7116 = 1;
  }
  if ( !v22
    || (UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL)
    || (effectAssetData = (AssetData_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)effectAssetData, 0LL)) == 0LL
    || (effectAssetData = (AssetData_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                           (HutongGames_PlayMaker_FsmVariables_o *)effectAssetData,
                                           (System_String_o *)StringLiteral_11300/*"ResultEffect"*/,
                                           0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)effectAssetData,
          v20,
          0LL),
        (effectAssetData = (AssetData_o *)this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_1B64324(effectAssetData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effectAssetData, (System_String_o *)StringLiteral_12185/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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
  __int64 v19; // x2
  CombineRootComponent_c *v20; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_49FFC1D & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, userSvtData);
    sub_1B640C8(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__104_0__, v9);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v10);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49FFC1D = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)userSvtData,
    oldFriendShipRank,
    (int32_t)callback);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v20 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v20 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v20->static_fields->COMBINE_ASSET_PATH;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__104_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v22, 1, 0LL);
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

  if ( (byte_49FFC12 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12184/*"START_FRIENDSHIPUP_EFFECT"*/, usrSvtData);
    byte_49FFC12 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    oldFriendShipRank,
    (int32_t)callback);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v9, v10);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12184/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
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
  ServantScriptEntity_o *Entity_39406484; // x0
  UserServantEntity_o *v14; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceData_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct ServantVoiceData_array *v20; // x1
  ServantStatusBattleListViewItem_o *p_playVoiceList; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v25; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v27; // x0
  const MethodInfo *v28; // x2
  struct UserServantEntity_o *v29; // x8
  CombineResultEffectComponent_o *v30; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x0
  const MethodInfo *v35; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  UserServantEntity_o *v37; // x21
  const MethodInfo *v38; // x2
  struct UserServantEntity_o *v39; // x8
  CombineResultEffectComponent_o *v40; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x0
  const MethodInfo *v45; // x2
  ServantVoiceEntity_o *v46; // x20
  UserServantEntity_o *v47; // x21
  ServantVoiceData_array *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  ServantVoiceData_array *v51; // x0
  int32_t lv; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v2 = this;
  if ( (byte_49FFC33 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultFormManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantScriptMaster___, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (CombineResultEffectComponent_o *)sub_1B640C8(&string___TypeInfo, v6);
    byte_49FFC33 = 1;
  }
  baseUsrSvtData = v2->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_48;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v9;
  *(_QWORD *)&v53.fields.fakeValue = v8;
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53, 0LL);
  if ( !v2->fields.baseUsrSvtData )
    goto LABEL_48;
  v10 = (int)this;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(v2->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v10, FigureImageLimitCount, 0LL);
  this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !this )
    goto LABEL_48;
  Entity_39406484 = ServantScriptMaster__GetEntity_39406484((ServantScriptMaster_o *)this, Id, 0LL);
  if ( Entity_39406484 && v2->fields.svtVoiceEntity )
  {
    this = (CombineResultEffectComponent_o *)ServantScriptEntity__isMultipleForm(Entity_39406484, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
      if ( !this )
        goto LABEL_48;
      combineVoiceId = v2->fields.combineVoiceId;
      v14 = v2->fields.baseUsrSvtData;
LABEL_19:
      v17 = ServantVoiceEntity__lotteryLevelUpVoice_39445224((ServantVoiceEntity_o *)this, v14, combineVoiceId, 0LL);
LABEL_20:
      v20 = v17;
      p_playVoiceList = (ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList;
      v2->fields.playVoiceList = v20;
      goto LABEL_21;
    }
    v14 = v2->fields.baseUsrSvtData;
    if ( v14 )
    {
      lv = v14->fields.lv;
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
        if ( System_Int32__Equals_62180496((int32_t)&lv, resUsrSvtData->fields.lv, 0LL) )
        {
          v27 = v2;
          form = 0;
LABEL_25:
          CombineResultEffectComponent__SetBaseSvtFigure(v27, form, 1, v23);
          return;
        }
        this = (CombineResultEffectComponent_o *)sub_1B64170(string___TypeInfo, 1LL);
        v29 = v2->fields.baseUsrSvtData;
        if ( v29 )
        {
          v30 = this;
          p_svtId = &v29->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v54.fields.currentCryptoKey = p_svtId;
          *(_QWORD *)&v54.fields.fakeValue = 0LL;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v54, v28);
          if ( v30 )
          {
            if ( !LODWORD(v30->fields.m_CancellationTokenSource) )
              goto LABEL_49;
            v30->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.svtResultInfoWindow, (int32_t)this, v32, v33);
            v34 = System_String__Concat_61388924((System_String_array *)v30, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_69085444(v34, 0LL) == 1 )
            {
              svtVoiceEntity = v2->fields.svtVoiceEntity;
              v37 = v2->fields.baseUsrSvtData;
              if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              v17 = CombineResultFormManager__lotteryCombineResult(svtVoiceEntity, v37, v35);
              goto LABEL_20;
            }
            this = (CombineResultEffectComponent_o *)sub_1B64170(string___TypeInfo, 1LL);
            v39 = v2->fields.baseUsrSvtData;
            if ( v39 )
            {
              v40 = this;
              v41 = &v39->fields.svtId;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v55.fields.currentCryptoKey = v41;
              *(_QWORD *)&v55.fields.fakeValue = 0LL;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v55, v38);
              if ( v40 )
              {
                if ( !LODWORD(v40->fields.m_CancellationTokenSource) )
                  goto LABEL_49;
                v40->fields.svtResultInfoWindow = (struct SvtCombineResultWindowComponent_o *)this;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&v40->fields.svtResultInfoWindow,
                  (int32_t)this,
                  v42,
                  v43);
                v44 = System_String__Concat_61388924((System_String_array *)v40, 0LL);
                UnityEngine_PlayerPrefs__SetInt(v44, 1, 0LL);
                v46 = v2->fields.svtVoiceEntity;
                v47 = v2->fields.baseUsrSvtData;
                if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                v48 = CombineResultFormManager__lotteryCombineResultInit(v46, v47, v45);
                v2->fields.playVoiceList = v48;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList, (int32_t)v48, v49, v50);
                playVoiceList = v2->fields.playVoiceList;
                if ( playVoiceList )
                {
LABEL_22:
                  if ( playVoiceList->max_length )
                  {
                    v25 = playVoiceList->m_Items[0];
                    if ( !v25 )
                      goto LABEL_48;
                    form = v25->fields.form;
                    v27 = v2;
                    goto LABEL_25;
                  }
LABEL_49:
                  sub_1B6432C(this, v22);
                }
                this = (CombineResultEffectComponent_o *)v2->fields.svtVoiceEntity;
                if ( !this )
                  goto LABEL_48;
                v51 = ServantVoiceEntity__lotteryLevelUpVoice_39445224(
                        (ServantVoiceEntity_o *)this,
                        v2->fields.baseUsrSvtData,
                        v2->fields.combineVoiceId,
                        0LL);
                LODWORD(v20) = (_DWORD)v51;
                v2->fields.playVoiceList = v51;
                p_playVoiceList = (ServantStatusBattleListViewItem_o *)&v2->fields.playVoiceList;
LABEL_21:
                sub_1B6406C(p_playVoiceList, (int32_t)v20, v18, v19);
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
    sub_1B64324(this);
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

  if ( (byte_49FFC39 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_8368/*"LimitUpResSvtNodeName"*/, v8);
    byte_49FFC39 = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  v11 = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !*((_DWORD *)LimitUpSvtVoiceList + 6) )
      sub_1B6432C(LimitUpSvtVoiceList, v10);
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
  LimitUpSvtVoiceList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  v16 = this->fields.resUsrSvtData;
  if ( !v16 )
    goto LABEL_21;
  v17 = (int)LimitUpSvtVoiceList;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16->fields.limitCount, 0LL);
  LimitUpSvtVoiceList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  LimitUpSvtVoiceList = DataManager__GetMasterData_object_(
                          (DataManager_o *)LimitUpSvtVoiceList,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !LimitUpSvtVoiceList )
    goto LABEL_21;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)LimitUpSvtVoiceList, &entity, v17, v18, 0LL) )
    goto LABEL_18;
  LimitUpSvtVoiceList = entity;
  if ( !entity )
LABEL_21:
    sub_1B64324(LimitUpSvtVoiceList);
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
    (System_String_o *)StringLiteral_8368/*"LimitUpResSvtNodeName"*/,
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
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v37; // x8
  ServantLimitImageMaster_o *v38; // x20
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v18 = autoFadeout;
  if ( (byte_49FFC16 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&StringLiteral_12188/*"START_LIMITUP_EFFECT"*/, v21);
    byte_49FFC16 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)baseData,
    baseCollectionLimitCnt);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resSvtNameData, (int32_t)servantChange, v22, v23);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v24, v25);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = v18;
  this->fields.displayType = displayType;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v26, v27);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.limitUpPlayVoiceLabel,
    (int32_t)playVoiceLabel,
    v28,
    v29);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_1B6406C(
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
  v34 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v33 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v34;
  *(_QWORD *)&v41.fields.fakeValue = v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v37 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v42.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v38 = (ServantLimitImageMaster_o *)MasterData_object;
  *(_QWORD *)&v42.fields.currentCryptoKey = v37;
  gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v42, 0LL);
  if ( !v38
    || (gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   v38,
                                                   (int32_t)gameObject,
                                                   v35 + 1,
                                                   0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = (unsigned __int8)gameObject & 1,
        !fsm) )
  {
LABEL_13:
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12188/*"START_LIMITUP_EFFECT"*/, 0LL);
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
  __int64 Int_69085444; // x0
  const MethodInfo *v22; // x2
  __int64 v23; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x22
  __int64 v25; // x1
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
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *v39; // x20
  __int64 v40; // x1
  UnityEngine_Transform_o *v41; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_49FFC1A & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, usrSvtData);
    sub_1B640C8(&CombineResultFormManager_TypeInfo, v7);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&string___TypeInfo, v12);
    sub_1B640C8(&StringLiteral_12189/*"START_LVEXCEED_EFFECT"*/, v13);
    sub_1B640C8(&StringLiteral_17213/*"bit_result_grail"*/, v14);
    sub_1B640C8(&StringLiteral_11300/*"ResultEffect"*/, v15);
    byte_49FFC1A = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  Int_69085444 = sub_1B64170(string___TypeInfo, 1LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_33;
  v23 = Int_69085444;
  p_svtId = &this->fields.baseUsrSvtData->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = p_svtId;
  *(_QWORD *)&v42.fields.fakeValue = 0LL;
  Int_69085444 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v42, v22);
  if ( !v23 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v23 + 32) = Int_69085444;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), Int_69085444, v26, v27);
  v28 = System_String__Concat_61388924((System_String_array *)v23, 0LL);
  Int_69085444 = UnityEngine_PlayerPrefs__GetInt_69085444(v28, 0LL);
  if ( (_DWORD)Int_69085444 == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_33;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      Int_69085444 = sub_1B64170(string___TypeInfo, 1LL);
      if ( *p_baseUsrSvtData )
      {
        v30 = Int_69085444;
        v31 = (__int64)&(*p_baseUsrSvtData)->fields.svtId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v43.fields.currentCryptoKey = v31;
        *(_QWORD *)&v43.fields.fakeValue = 0LL;
        Int_69085444 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v43, v29);
        if ( v30 )
        {
          if ( *(_DWORD *)(v30 + 24) )
          {
            *(_QWORD *)(v30 + 32) = Int_69085444;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), Int_69085444, v32, v33);
            v34 = System_String__Concat_61388924((System_String_array *)v30, 0LL);
            UnityEngine_PlayerPrefs__SetInt(v34, 0, 0LL);
            v36 = *p_baseUsrSvtData;
            if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
            CombineResultFormManager__ResetVoiceList(v36, v35);
            goto LABEL_19;
          }
LABEL_34:
          sub_1B6432C(Int_69085444, v25);
        }
      }
LABEL_33:
      sub_1B64324(Int_69085444);
    }
  }
LABEL_19:
  v37 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v37 = CombineRootComponent_TypeInfo;
  }
  Int_69085444 = (__int64)v37->static_fields->effectAssetData;
  if ( !Int_69085444 )
    goto LABEL_33;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              (AssetData_o *)Int_69085444,
                              (System_String_o *)StringLiteral_17213/*"bit_result_grail"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Int_69085444 = (__int64)UnityEngine_Object__Instantiate_object_(
                            Object_object__48347676,
                            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Int_69085444 )
    goto LABEL_33;
  v39 = (UnityEngine_GameObject_o *)Int_69085444;
  Int_69085444 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Int_69085444, 0LL);
  v41 = (UnityEngine_Transform_o *)Int_69085444;
  if ( !byte_49F7116 )
  {
    Int_69085444 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v40);
    byte_49F7116 = 1;
  }
  if ( !v41 )
    goto LABEL_33;
  UnityEngine_Transform__set_localScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Int_69085444 = (__int64)this->fields.fsm;
  if ( !Int_69085444 )
    goto LABEL_33;
  Int_69085444 = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Int_69085444, 0LL);
  if ( !Int_69085444 )
    goto LABEL_33;
  Int_69085444 = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)Int_69085444,
                            (System_String_o *)StringLiteral_11300/*"ResultEffect"*/,
                            0LL);
  if ( !Int_69085444 )
    goto LABEL_33;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Int_69085444, v39, 0LL);
  Int_69085444 = (__int64)this->fields.fsm;
  if ( !Int_69085444 )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Int_69085444, (System_String_o *)StringLiteral_12189/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  __int64 v17; // x2
  CombineRootComponent_c *v18; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_49FFC1B & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, usrSvtData);
    sub_1B640C8(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__102_0__, v7);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v8);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49FFC1B = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v11, v12);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v18 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v18 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v18->static_fields->EXCEED_ASSET_PATH;
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__102_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v20, 1, 0LL);
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
  const MethodInfo *v38; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v40; // x4
  struct ServantChangeEntity_o *v41; // x8
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  UnityEngine_ParticleSystem_MinMaxCurve_o v46; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v47; // [xsp+20h] [xbp-60h] BYREF
  struct UnityEngine_ParticleSystem_o *v48; // [xsp+40h] [xbp-40h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v50; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v51; // 0:x0.8
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFC17 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, before);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&StringLiteral_11272/*"ResNameNodeName"*/, v13);
    sub_1B640C8(&StringLiteral_12190/*"START_NAME_REVEAL_EFFECT"*/, v14);
    sub_1B640C8(&StringLiteral_9313/*"NameRevealCrossFade"*/, v15);
    sub_1B640C8(&StringLiteral_4901/*"CrtNameNodeName"*/, v16);
    sub_1B640C8(&StringLiteral_17218/*"bit_result_name_reveal"*/, v17);
    sub_1B640C8(&StringLiteral_12883/*"StartAnimationName"*/, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    sub_1B640C8(&StringLiteral_9314/*"NameRevealParticleNodeName"*/, v20);
    byte_49FFC17 = 1;
  }
  v48 = 0LL;
  m_ParticleSystem = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.crtSvtNameData,
    (int32_t)before,
    (int32_t)after,
    (int32_t)callback);
  this->fields.resSvtNameData = after;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resSvtNameData, (int32_t)after, v22, v23);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12190/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    gameObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataManager__GetMasterData_object_(
                           (DataManager_o *)gameObject,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (char *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                           (*p_crtSvtNameData)->fields.svtId,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v29 = (System_String_o *)gameObject;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(transform, v29, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
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
                         (System_String_o *)StringLiteral_11272/*"ResNameNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v31 = (System_String_o *)gameObject;
  v32 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v32, v31, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !gameObject )
    goto LABEL_40;
  v33 = (int *)gameObject;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)gameObject, name, 0LL);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                         (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                         (System_String_o *)StringLiteral_9314/*"NameRevealParticleNodeName"*/,
                         0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)gameObject, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v34 = (System_String_o *)gameObject;
  v35 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  gameObject = (char *)TransformHelper__getNodeFromName(v35, v34, 1, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  gameObject = (char *)UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_40;
  v36 = (UnityEngine_ParticleSystem_o *)gameObject;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission((UnityEngine_ParticleSystem_o *)gameObject, 0LL).fields.m_ParticleSystem;
  v48 = UnityEngine_ParticleSystem__get_shape(v36, 0LL).fields.m_ParticleSystem;
  v37 = (float)((float)v33[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v47, 0, sizeof(v47));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v47, v37, 0LL);
  v50.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v46 = v47;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v50, &v46, 0LL);
  v52.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v51.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v48;
  v52.fields.x = (float)((float)v33[42] / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v52.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v51, v52, 0LL);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v38);
  v41 = this->fields.crtSvtNameData;
  if ( !v41 )
    goto LABEL_40;
  v42 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v41->fields.svtId, v41->fields.limitCount, v42, v40);
  gameObject = (char *)this->fields.fsm;
  if ( !gameObject
    || (gameObject = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)gameObject, 0LL)) == 0LL
    || (gameObject = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                               (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                               (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                               0LL)) == 0LL )
  {
LABEL_40:
    sub_1B64324(gameObject);
  }
  v45 = StringLiteral_17218/*"bit_result_name_reveal"*/;
  *((_QWORD *)gameObject + 7) = StringLiteral_17218/*"bit_result_name_reveal"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(gameObject + 56), v45, v43, v44);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9313/*"NameRevealCrossFade"*/,
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
  ServantTreasureDeviceAddMaster_o *v31; // x22
  __int64 v32; // x25
  __int64 v33; // x26
  int32_t v34; // w25
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x25
  __int64 v36; // x1
  __int64 v37; // x2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v38; // x26
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x0
  __int64 v43; // x26
  __int64 v44; // x27
  ServantTreasureDeviceAddMaster_o *v45; // x23
  int32_t v46; // w0
  __int64 v47; // x8
  int32_t v48; // w24
  __int64 v49; // x1
  int32_t v50; // w26
  ServantTreasureDeviceAddEntity_o *EnableEntityBeforeClearQuest; // x23
  __int64 v52; // x1
  __int64 v53; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v55; // x8
  __int64 v56; // x8
  int32_t TransformCount; // w0
  int32_t v58; // w25
  int32_t i; // w26
  __int64 v60; // x1
  TerminalPramsManager_c *v61; // x0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v62; // x28
  int32_t id; // w29
  int32_t v64; // w3
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v65; // x0
  int32_t v66; // w1
  int32_t v67; // w2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v68; // x28
  int32_t v69; // w29
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v70; // x28
  int32_t v71; // w29
  __int64 v72; // x26
  struct System_Int32_array *v73; // x8
  struct System_Int32_array *v74; // x8
  __int64 v75; // x8
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20
  TreasureDvcInfo_o *v78; // [xsp+0h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_49FFC11 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_12191/*"START_NOBLEUP_EFFECT"*/, v23);
    sub_1B640C8(&StringLiteral_13365/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v24);
    sub_1B640C8(&StringLiteral_13366/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v25);
    byte_49FFC11 = 1;
  }
  v78 = 0LL;
  tdInfo = 0LL;
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)usrSvtData,
    targetId);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v26, v27);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v28, v29);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantTreasureDeviceAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_72;
  v31 = Master_object;
  v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v80.fields.currentCryptoKey = v33;
  *(_QWORD *)&v80.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v80, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                        usrSvtData->fields.limitCount,
                                                        0LL);
  if ( !v31 )
    goto LABEL_72;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v31, v34, (int32_t)Master_object, 0, 0LL);
  v38 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_1B64314(
                                                                      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo,
                                                                      v36,
                                                                      v37);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v38, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.npInfoAddManager, (int32_t)v38, v40, v41);
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
      v42 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
      v44 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v43 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v45 = (ServantTreasureDeviceAddMaster_o *)v42;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v81.fields.currentCryptoKey = v44;
      *(_QWORD *)&v81.fields.fakeValue = v43;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v81, 0LL);
      v47 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v82.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
      v48 = v46;
      *(_QWORD *)&v82.fields.currentCryptoKey = v47;
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v82, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9045 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v49);
        byte_49F9045 = 1;
      }
      Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (ServantTreasureDeviceAddMaster_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v45 )
        goto LABEL_72;
      EnableEntityBeforeClearQuest = ServantTreasureDeviceAddMaster__GetEnableEntityBeforeClearQuest(
                                       v45,
                                       v48,
                                       v50,
                                       Master_object[2].fields._MasterName_k__BackingField->fields._stringLength,
                                       0LL);
      Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                            (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        if ( EnableEntityBeforeClearQuest )
        {
          v53 = 8LL;
          while ( 1 )
          {
            treasureDeviceIds = EnableEntityBeforeClearQuest->fields.treasureDeviceIds;
            if ( !treasureDeviceIds )
              break;
            if ( v53 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&treasureDeviceIds->obj.klass + v53),
              targetLv,
              0,
              0LL);
            v55 = EnableEntity->fields.treasureDeviceIds;
            if ( !v55 )
              break;
            if ( v53 - 8 >= (unsigned __int64)v55->max_length )
              goto LABEL_73;
            Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
            if ( !*p_npInfoAddManager )
              break;
            Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
              (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
              *((_DWORD *)&v55->obj.klass + v53),
              targetLv,
              0,
              0LL);
            Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                  (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
            v56 = v53 - 7;
            ++v53;
            if ( v56 >= (int)Master_object )
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
                                                            (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (int)Master_object >= 1 )
      {
        v72 = 8LL;
        while ( 1 )
        {
          v73 = EnableEntity->fields.treasureDeviceIds;
          if ( !v73 )
            break;
          if ( v72 - 8 >= (unsigned __int64)v73->max_length )
            goto LABEL_73;
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v73->obj.klass + v72),
            targetLvOld,
            0,
            0LL);
          v74 = EnableEntity->fields.treasureDeviceIds;
          if ( !v74 )
            break;
          if ( v72 - 8 >= (unsigned __int64)v74->max_length )
LABEL_73:
            sub_1B6432C(Master_object, v52);
          Master_object = (ServantTreasureDeviceAddMaster_o *)*p_npInfoAddManager;
          if ( !*p_npInfoAddManager )
            break;
          Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
            (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)Master_object,
            *((_DWORD *)&v74->obj.klass + v72),
            targetLv,
            0,
            0LL);
          Master_object = (ServantTreasureDeviceAddMaster_o *)System_Linq_Enumerable__Count_int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                                                                (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
          v75 = v72 - 7;
          ++v72;
          if ( v75 >= (int)Master_object )
            goto LABEL_63;
        }
LABEL_72:
        sub_1B64324(Master_object);
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
      v58 = TransformCount;
      for ( i = 0; v58 != i; ++i )
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
          if ( !byte_49F9045 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v60);
            byte_49F9045 = 1;
          }
          v61 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v61 = TerminalPramsManager_TypeInfo;
          }
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                                                                usrSvtData,
                                                                &v78,
                                                                i,
                                                                v61->static_fields->_QuestId_k__BackingField,
                                                                -1,
                                                                0,
                                                                0LL);
          if ( !v78 )
            goto LABEL_72;
          v62 = *p_npInfoAddManager;
          id = v78->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
          if ( !v62 )
            goto LABEL_72;
          v64 = (int)Master_object;
          v65 = v62;
          v66 = id;
          v67 = targetLv;
        }
        else
        {
          if ( !tdInfo )
            goto LABEL_72;
          v68 = *p_npInfoAddManager;
          v69 = tdInfo->fields.id;
          Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                                usrSvtData,
                                                                i,
                                                                0LL);
          if ( !v68 )
            goto LABEL_72;
          v64 = (int)Master_object;
          v65 = v68;
          v66 = v69;
          v67 = targetLvOld;
        }
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(v65, v66, v67, v64, 0LL);
        if ( !tdInfo )
          goto LABEL_72;
        v70 = *p_npInfoAddManager;
        v71 = tdInfo->fields.id;
        Master_object = (ServantTreasureDeviceAddMaster_o *)UserServantEntity__GetTransformedServantId(
                                                              usrSvtData,
                                                              i,
                                                              0LL);
        if ( !v70 )
          goto LABEL_72;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          v70,
          v71,
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
                                                        (System_String_o *)StringLiteral_13365/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/,
                                                        0LL);
  if ( !unSummonLabel )
    goto LABEL_72;
  UILabel__set_text(unSummonLabel, (System_String_o *)Master_object, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  Master_object = (ServantTreasureDeviceAddMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13366/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/,
                                                        0LL);
  if ( !unSummonDetail )
    goto LABEL_72;
  UILabel__set_text(unSummonDetail, (System_String_o *)Master_object, 0LL);
  Master_object = (ServantTreasureDeviceAddMaster_o *)this->fields.fsm;
  if ( !Master_object )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_12191/*"START_NOBLEUP_EFFECT"*/, 0LL);
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

  if ( (byte_49FFC19 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12194/*"START_POWERUP_EFFECT"*/, usrSvtData);
    byte_49FFC19 = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)usrSvtData,
    (int32_t)callback,
    (int32_t)method);
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v7, v8);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12194/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t kind; // w9
  CommonUI_o *Instance; // x0
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

  if ( (byte_49FFC2B & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49FFC2B = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B64324(Instance);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v18; // x20
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  UserServantEntity_o *v24; // x21
  UserServantEntity_o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  struct UserServantEntity_o *v28; // x8
  __int64 v29; // x21
  __int64 v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  struct UserServantEntity_o *v37; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x24
  __int64 v39; // x21
  __int64 v40; // x22
  int32_t v41; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // kr00_16
  struct UserServantEntity_o *v43; // x8
  int32_t hp; // w9
  ServantLimitMaster_o *v45; // x21
  int32_t v46; // w22
  CombineResultEffectComponent_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  UserServantEntity_o *v49; // x20
  UserServantEntity_o *v50; // x21
  ServantStatusBattleListViewItem_o *p_resUsrSvtData; // x19
  int32_t v52; // w2
  int32_t v53; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
  void *typeMetadataHandle; // x19
  void *generic_class; // x20
  int32_t v57; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v2 = this;
  if ( (byte_49FFC2A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    this = (CombineResultEffectComponent_o *)sub_1B640C8(&UserServantEntity_TypeInfo, v10);
    byte_49FFC2A = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !v2->fields.setResUsrSvtData )
  {
    baseUsrSvtData = v2->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_46;
    v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v61.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v60 = v61;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v60, 0LL) < 1 )
    {
      v49 = v2->fields.baseUsrSvtData;
      v50 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v13, v14);
      UserServantEntity___ctor_39858792(v50, v49, 0LL);
      v2->fields.resUsrSvtData = v50;
      p_resUsrSvtData = (ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData;
      sub_1B6406C(p_resUsrSvtData, (int32_t)v50, v52, v53);
      if ( (p_resUsrSvtData[-1].fields.dispLimitCount.fields.fakeValue | 0x10) != 26 )
        return;
      klass = p_resUsrSvtData->klass;
      if ( p_resUsrSvtData->klass )
      {
        generic_class = klass->_1.generic_class;
        typeMetadataHandle = klass->_1.typeMetadataHandle;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v65.fields.currentCryptoKey = generic_class;
        *(_QWORD *)&v65.fields.fakeValue = typeMetadataHandle;
        v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v65, 0LL);
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&klass->_1.generic_class = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                                         v57 + 1,
                                                                                         0LL);
        return;
      }
    }
    else
    {
      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        v15 = v2->fields.baseUsrSvtData;
        if ( v15 )
        {
          v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
          v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v61.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v59 = v61;
          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                     &v59,
                                                     0LL);
          if ( v17 )
          {
            v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v2->fields.resUsrSvtData;
            this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v17,
                                                       (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                       (int64_t)this,
                                                       (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v19 = v2->fields.baseUsrSvtData;
              if ( !v19 )
                goto LABEL_46;
              v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
              v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
              *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v61.fields.fakeValue = v20;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v58 = v61;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                         &v58,
                                                         0LL);
              if ( !v21 )
                goto LABEL_46;
              this = (CombineResultEffectComponent_o *)DataMasterBase_object__object__long___TryGetEntity(
                                                         v21,
                                                         (Il2CppObject **)&v2->fields.resUsrSvtData,
                                                         (int64_t)this,
                                                         (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                v24 = v2->fields.baseUsrSvtData;
                v25 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v22, v23);
                UserServantEntity___ctor_39858792(v25, v24, 0LL);
                v2->fields.resUsrSvtData = v25;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData, (int32_t)v25, v26, v27);
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
              *(_QWORD *)&v63.fields.currentCryptoKey = v30;
              *(_QWORD *)&v63.fields.fakeValue = v29;
              this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                         v63,
                                                         0LL);
              if ( v2->fields.baseUsrSvtData )
              {
                if ( (int)this >= UserServantEntity__getLimitCntMax(v2->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = v2->fields.resUsrSvtData;
                v34 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v31, v32);
                UserServantEntity___ctor_39858792(v34, resUsrSvtData, 0LL);
                v2->fields.resUsrSvtData = v34;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.resUsrSvtData, (int32_t)v34, v35, v36);
                v37 = v2->fields.baseUsrSvtData;
                if ( v37 )
                {
                  v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.resUsrSvtData;
                  v40 = *(_QWORD *)&v37->fields.limitCount.fields.currentCryptoKey;
                  v39 = *(_QWORD *)&v37->fields.limitCount.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v64.fields.currentCryptoKey = v40;
                  *(_QWORD *)&v64.fields.fakeValue = v39;
                  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v64, 0LL);
                  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v41 + 1, 0LL);
                  this = *(CombineResultEffectComponent_o **)&v42.fields.currentCryptoKey;
                  if ( v38 )
                  {
                    v38[6] = v42;
                    v43 = v2->fields.baseUsrSvtData;
                    if ( v43 )
                    {
                      hp = v43->fields.hp;
                      afterAtk[0] = v43->fields.atk;
                      afterAtk[1] = hp;
                      this = (CombineResultEffectComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( this )
                      {
                        this = (CombineResultEffectComponent_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v18 )
                        {
                          v45 = (ServantLimitMaster_o *)this;
                          this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                     (*v18)[5],
                                                                     0LL);
                          if ( *v18 )
                          {
                            v46 = (int)this;
                            this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                       (*v18)[6],
                                                                       0LL);
                            if ( v45 )
                            {
                              this = (CombineResultEffectComponent_o *)ServantLimitMaster__GetEntity(
                                                                         v45,
                                                                         v46,
                                                                         (int32_t)this,
                                                                         0LL);
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
                                    0LL);
                                  v48 = *v18;
                                  if ( *v18 )
                                  {
                                    *(_DWORD *)&v48[16].fields.inited = afterAtk[1];
                                    v48[16].fields.fakeValue = afterAtk[0];
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
    sub_1B64324(this);
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
  __int64 v33; // x2
  System_Collections_ObjectModel_Collection_T__o *v34; // x26
  System_Collections_Generic_List_object__o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t v38; // w27
  Il2CppObject *v39; // x28
  __int64 methodPtr_low; // x10
  int v41; // w8
  int v42; // w8
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Comparison_T__o *v49; // x24
  Il2CppObject *v50; // x25
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x1
  int v55; // w20
  BalanceConfig_c *v56; // x0
  TerminalSceneComponent_c *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w1
  int32_t v63; // w24
  const MethodInfo *v64; // x2
  struct CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-78h]
  struct CombineResultEffectComponent_MessageDelegate_o *v66; // [xsp+18h] [xbp-68h]

  if ( (byte_49FFC1F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12);
    sub_1B640C8(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v20);
    sub_1B640C8(&ServantTreasureDvcEntity_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v23);
    sub_1B640C8(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__106_0__, v24);
    sub_1B640C8(&CombineResultEffectComponent___c_TypeInfo, v25);
    sub_1B640C8(&StringLiteral_12195/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v26);
    sub_1B640C8(&StringLiteral_17228/*"bit_result_ultimate_anim"*/, v27);
    sub_1B640C8(&StringLiteral_12883/*"StartAnimationName"*/, v28);
    byte_49FFC1F = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    phase,
    (int32_t)msgCallBack);
  this->fields.messageCallback = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, 0, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v66 = msgCallBack;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_59;
  v34 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Instance + 4);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !v34 )
    goto LABEL_59;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         v34,
         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   v34,
                   v38,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v39 = (Il2CppObject *)Instance;
      methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      v41 = *((_DWORD *)Instance + 9);
      if ( v41 >= 1 && v41 == questId )
      {
        v42 = *((_DWORD *)Instance + 10);
        if ( v42 < 1 || v42 == phase )
        {
          Instance = (void *)ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Instance, 8, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v35 )
              break;
            items = v35->fields._items;
            v46 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
            ++v35->fields._version;
            if ( !items )
              break;
            size = v35->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v35,
                v39,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &items->obj.klass + size;
              v35->fields._size = size + 1;
              v48[4] = (Il2CppClass *)v39;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v39, v43, v44);
            }
          }
        }
      }
      if ( ++v38 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      v34,
                      (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_22;
    }
LABEL_59:
    sub_1B64324(Instance);
  }
LABEL_22:
  Instance = CombineResultEffectComponent___c_TypeInfo;
  if ( !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    Instance = CombineResultEffectComponent___c_TypeInfo;
  }
  v49 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v49 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = CombineResultEffectComponent___c_TypeInfo;
    }
    v50 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v49 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantTreasureDvcEntity__TypeInfo, v36, v37);
    System_Comparison_object____ctor(
      v49,
      v50,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__106_0__,
      0LL);
    static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)v49;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)v49, v52, v53);
  }
  if ( !v35 )
    goto LABEL_59;
  System_Collections_Generic_List_object___Sort_55243320(
    v35,
    v49,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  v55 = v35->fields._size;
  if ( v55 >= 1 )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 v35,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_59;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
  v56 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v56 = BalanceConfig_TypeInfo;
  }
  if ( !v56->static_fields->CloseSecretTreasureDeviceQuestClear && v35->fields._size >= 1 )
  {
    v63 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v35,
                   v63,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
      if ( !Instance )
        goto LABEL_59;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *((_DWORD *)Instance + 4), v64) )
        break;
      if ( ++v63 >= v35->fields._size )
        goto LABEL_35;
    }
    Instance = System_Collections_Generic_List_object___get_Item(
                 v35,
                 v63,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__);
    if ( !Instance )
      goto LABEL_59;
    this->fields.targetSvtId = *((_DWORD *)Instance + 4);
  }
LABEL_35:
  if ( v55 < 1 )
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
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v54);
      byte_49F76BD = 1;
    }
    v57 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v57 = TerminalSceneComponent_TypeInfo;
    }
    Instance = v57->static_fields->mInstance;
    if ( !Instance )
      goto LABEL_59;
    TerminalSceneComponent__CheckLastPlayBgm((TerminalSceneComponent_o *)Instance, 0LL);
    this->fields.messageCallback = v66;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, (int32_t)v66, v58, v59);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_59;
    Instance = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_59;
    Instance = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                 (HutongGames_PlayMaker_FsmVariables_o *)Instance,
                 (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                 0LL);
    if ( !Instance )
      goto LABEL_59;
    v62 = StringLiteral_17228/*"bit_result_ultimate_anim"*/;
    *((_QWORD *)Instance + 7) = StringLiteral_17228/*"bit_result_ultimate_anim"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)Instance + 56), v62, v60, v61);
    Instance = this->fields.fsm;
    if ( !Instance )
      goto LABEL_59;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12195/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  char *fsm; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1

  if ( (byte_49FFC20 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&StringLiteral_12195/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v7);
    sub_1B640C8(&StringLiteral_17228/*"bit_result_ultimate_anim"*/, v8);
    sub_1B640C8(&StringLiteral_12883/*"StartAnimationName"*/, v9);
    byte_49FFC20 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C(
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
                          (System_String_o *)StringLiteral_12883/*"StartAnimationName"*/,
                          0LL)) == 0LL
      || (v16 = StringLiteral_17228/*"bit_result_ultimate_anim"*/,
          *((_QWORD *)fsm + 7) = StringLiteral_17228/*"bit_result_ultimate_anim"*/,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(fsm + 56), v16, v14, v15),
          (fsm = (char *)this->fields.fsm) == 0LL) )
    {
      sub_1B64324(fsm);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12195/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
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
  UILabel_o *unSummonLabel; // x20
  UILabel_o *unSummonDetail; // x20

  if ( (byte_49FFC10 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&StringLiteral_12197/*"START_SKILLUP_EFFECT"*/, v17);
    sub_1B640C8(&StringLiteral_12090/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v18);
    sub_1B640C8(&StringLiteral_12091/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v19);
    byte_49FFC10 = 1;
  }
  this->fields.baseUsrSvtData = usrSvtData;
  this->fields.kind = kind;
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v20, v21);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12090/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, (System_String_o *)gameObject, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12197/*"START_SKILLUP_EFFECT"*/, 0LL);
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

  if ( (byte_49FFC46 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    byte_49FFC46 = 1;
  }
  Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
                               (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)Item < 2 )
  {
    if ( standFigureCollects )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollects,
                                   0,
                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetFace_40646300(Item, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_1B64324(Item);
  }
  v16 = this->fields.playVoiceList;
  if ( !v16 )
    goto LABEL_25;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v16->max_length )
LABEL_23:
    sub_1B6432C(Item, v15);
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
                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
            if ( !Item )
              goto LABEL_25;
            Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
            if ( !Item )
              goto LABEL_25;
            UIStandFigureR__SetFace_40646300(Item, v23, v24, 0LL, fadeTime, 0LL);
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

  if ( (byte_49FFC13 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12199/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_49FFC13 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (int32_t)baseData);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v13, v14);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineVoiceId, 0, v15, v16);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12199/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_44562424(
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
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_49FFC14 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12199/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_49FFC14 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    infoIdx,
    (int32_t)baseData);
  this->fields.resUsrSvtData = resData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v19, v20);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_7;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineVoiceId, (int32_t)voiceId, v22, v23);
  this->fields.combineStatusDisp = statusDisp;
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12199/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
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

  if ( (byte_49FFC15 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12199/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_49FFC15 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUsrSvtData, (int32_t)baseData, infoIdx, normalExp);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, 0, v17, v18);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_12199/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3

  if ( (byte_49FFC4C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__153_0__, v3);
    byte_49FFC4C = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7),
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__153_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_1B64324(bgCollider);
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v8, 0, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x21
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x23
  int32_t kind; // w25
  System_Action_o *v15; // x24
  const MethodInfo *v16; // x6
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FFC4A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__151_0__, v5);
    byte_49FFC4A = 1;
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
    sub_1B6432C(bgCollider, v7);
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
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CombineResultEffectComponent__ShowNpChangeInfo_b__151_0__, 0LL);
  if ( !skillResultInfoWindow )
LABEL_14:
    sub_1B64324(bgCollider);
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    npInfoAddManager,
    index,
    titleText,
    kind == 8,
    v15,
    v16);
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
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t v12; // w23
  int32_t v13; // w24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v15; // w21
  int32_t v16; // w22
  System_String_o *costumeName; // x25
  System_Action_o *v18; // x26
  const MethodInfo *v19; // x7

  if ( (byte_49FFC4B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__152_0__, v5);
    byte_49FFC4B = 1;
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
  v12 = *((_DWORD *)bgCollider + 4);
  v13 = *((_DWORD *)bgCollider + 5);
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v15 = v9[4];
  v16 = v9[5];
  costumeName = this->fields.costumeName;
  v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__152_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_1B64324(bgCollider);
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    v15,
    v16,
    v12,
    v13,
    costumeName,
    v18,
    v19);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_49FFC49 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__150_0__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_49FFC49 = 1;
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
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1B64324(bgCollider);
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v10, v13, v14);
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
  __int64 v13; // x1
  __int64 v14; // x2
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t id; // w21
  int32_t lv; // w22
  int32_t v18; // w23
  int32_t v19; // w24
  System_Action_o *v20; // x25
  const MethodInfo *v21; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v24; // [xsp+40h] [xbp-50h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49FFC4D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__155_0__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFC4D = 1;
  }
  v24 = 0LL;
  tdInfo = 0LL;
  bgCollider = (int64_t)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  bgCollider = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgCollider )
    goto LABEL_14;
  bgCollider = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)bgCollider,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_14;
  v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)bgCollider;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v22 = v23;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v22, 0LL);
  if ( !v11 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v11,
             bgCollider,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  bgCollider = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_14;
  bgCollider = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v24, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v24
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v18 = v24->fields.id,
        v19 = v24->fields.lv,
        v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__155_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_14:
    sub_1B64324(bgCollider);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v18, v19, v20, v21);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__171_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FFC67 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_1__, v4);
    byte_49FFC67 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__171_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_1B64324(v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v6, 1, v8);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__146_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_49FFC65 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&StringLiteral_5450/*"END_LOAD"*/, v3);
    byte_49FFC65 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.fsm) == 0LL) )
    sub_1B64324(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5450/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__156_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FFC66 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent__EndPlay_b__156_2__, v4);
    byte_49FFC66 = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__156_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_1B64324(v7);
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v6, 1, v8);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__165_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B64324(this);
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

  if ( (byte_49FFC62 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5450/*"END_LOAD"*/, method);
    byte_49FFC62 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
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
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v13; // x20
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_49FFC60 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_12189/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_1B640C8(&StringLiteral_17209/*"bit_result_extraskill"*/, v9);
    sub_1B640C8(&StringLiteral_11300/*"ResultEffect"*/, v10);
    byte_49FFC60 = 1;
  }
  if ( data )
  {
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                data,
                                (System_String_o *)StringLiteral_17209/*"bit_result_extraskill"*/,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48347676,
                                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7116 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v14);
      byte_49F7116 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11300/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v13, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B64324(transform);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12189/*"START_LVEXCEED_EFFECT"*/, 0LL);
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
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *v20; // x20
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x21

  if ( (byte_49FFC61 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&string___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_11300/*"ResultEffect"*/, v9);
    sub_1B640C8(&StringLiteral_12177/*"START_COMBINE_LIMIT"*/, v10);
    sub_1B640C8(&StringLiteral_17203/*"bit_result_"*/, v11);
    byte_49FFC61 = 1;
  }
  if ( data )
  {
    v12 = sub_1B64170(string___TypeInfo, 1LL);
    v13 = System_Int32__ToString((int)this + 328, 0LL);
    transform = (UnityEngine_GameObject_o *)System_String__Concat_61375396(
                                              (System_String_o *)StringLiteral_17203/*"bit_result_"*/,
                                              v13,
                                              0LL);
    if ( !v12 )
      goto LABEL_19;
    if ( !*(_DWORD *)(v12 + 24) )
      sub_1B6432C(transform, v15);
    *(_QWORD *)(v12 + 32) = transform;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)transform, v16, v17);
    v18 = System_String__Concat_61388924((System_String_array *)v12, 0LL);
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                data,
                                v18,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48347676,
                                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_19;
    v20 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v22 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7116 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
      byte_49F7116 = 1;
    }
    if ( !v22 )
      goto LABEL_19;
    UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11300/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v20, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_19:
      sub_1B64324(transform);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12177/*"START_COMBINE_LIMIT"*/, 0LL);
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
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v13; // x20
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_49FFC5F & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_17212/*"bit_result_friendship_exceed"*/, v8);
    sub_1B640C8(&StringLiteral_11300/*"ResultEffect"*/, v9);
    sub_1B640C8(&StringLiteral_12185/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v10);
    byte_49FFC5F = 1;
  }
  if ( data )
  {
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                data,
                                (System_String_o *)StringLiteral_17212/*"bit_result_friendship_exceed"*/,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48347676,
                                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7116 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v14);
      byte_49F7116 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11300/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v13, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B64324(transform);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12185/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
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
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v13; // x20
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_49FFC5E & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_12189/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_1B640C8(&StringLiteral_17217/*"bit_result_limitbreak"*/, v9);
    sub_1B640C8(&StringLiteral_11300/*"ResultEffect"*/, v10);
    byte_49FFC5E = 1;
  }
  if ( data )
  {
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                data,
                                (System_String_o *)StringLiteral_17217/*"bit_result_limitbreak"*/,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48347676,
                                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_17;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7116 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v14);
      byte_49F7116 = 1;
    }
    if ( !v15 )
      goto LABEL_17;
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)transform, 0LL)) == 0LL
      || (transform = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                    (HutongGames_PlayMaker_FsmVariables_o *)transform,
                                                    (System_String_o *)StringLiteral_11300/*"ResultEffect"*/,
                                                    0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)transform, v13, 0LL),
          (transform = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode((CommonUI_o *)transform, 0, 0LL),
          (transform = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
    {
LABEL_17:
      sub_1B64324(transform);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)transform, (System_String_o *)StringLiteral_12189/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64324(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64324(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__152_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64324(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64324(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__155_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1B64324(0LL);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__114_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49FFC63 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5450/*"END_LOAD"*/, method);
    byte_49FFC63 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
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
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UserServantCollectionEntity_o *v20; // x22
  __int64 v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  UserServantEntity_o *v26; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  CommonUI_o *v34; // x22
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CombineResultEffectComponent_ClickDelegate_o *v37; // x25
  const MethodInfo *v38; // x3
  struct CombineResultEffectComponent_ClickDelegate_o *v39; // x8

  if ( (byte_49FFC64 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__6__, v8);
    sub_1B640C8(&CombineResultEffectComponent___c__DisplayClass145_2_TypeInfo, v9);
    sub_1B640C8(&UserServantEntity_TypeInfo, v10);
    byte_49FFC64 = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69127924(effect, 0LL);
  this->fields.effect = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effect, 0, v12, v13);
  CombineResultEffectComponent__Close(this, v14);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v20 = EntityDefinitely;
    v21 = sub_1B64314(CombineResultEffectComponent___c__DisplayClass145_2_TypeInfo, v18, v19);
    System_Object___ctor((Il2CppObject *)v21, 0LL);
    if ( v21 )
    {
      *(_QWORD *)(v21 + 24) = this;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)this, v22, v23);
      v26 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v24, v25);
      UserServantEntity___ctor_39859024(v26, v20, 0LL);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v21 + 16) = callbackFunc;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)callbackFunc, v28, v29);
      this->fields.callbackFunc = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v30, v31);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v26 )
      {
        v34 = (CommonUI_o *)Instance;
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v26->fields.treasureDeviceLv1;
        v37 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64314(
                                                                CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                v32,
                                                                v33);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v37,
          (Il2CppObject *)v21,
          Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__6__,
          v38);
        if ( v34 )
        {
          CommonUI__OpenNobleCombineResult(
            v34,
            18,
            v26,
            targetId,
            treasureDeviceLv1,
            v37,
            this->fields.targetIdOld,
            v26->fields.treasureDeviceLv1,
            0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1B64324(Instance);
  }
  v39 = this->fields.callbackFunc;
  if ( v39 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v39->fields.m_target)(
      v39->fields.original_method_info,
      1LL,
      *(_QWORD *)&v39->fields.extra_arg);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__145_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B64324(this);
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

  if ( (byte_49FFC22 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFC22 = 1;
  }
  svtFlagEntity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_39344744(
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B64324(Instance);
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
    sub_1B6432C(Instance, v8);
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
  const MethodInfo *v7; // x1
  int32_t kind; // w8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  int32_t v11; // w20
  int32_t v12; // w0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  int32_t v19; // w0
  int32_t v20; // w9
  int32_t v21; // w8
  int32_t v22; // w21
  System_Int32_array *v23; // x20
  int32_t TransformedSameSlotSkillId; // w0
  __int64 v25; // x1
  int32_t v26; // w8
  int32_t v27; // w22
  UserServantEntity_o *baseUsrSvtData; // x23
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x24
  int32_t TransformCount; // w0
  int32_t displayCount; // w9
  int32_t v37; // w8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // [xsp+20h] [xbp-60h]
  TransformServantInfo_o *v43; // [xsp+30h] [xbp-50h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_49FFC52 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent_EndDisp__, v3);
    sub_1B640C8(&Method_CombineResultEffectComponent_clickNext__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FFC52 = 1;
  }
  v43 = 0LL;
  transformInfo = 0LL;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_64;
  if ( !UnityEngine_Collider__get_enabled(bgCollider, 0LL) )
    return;
  kind = this->fields.kind;
  if ( kind == 15 )
  {
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v7) )
    {
      CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v9);
      bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
      v11 = this->fields.skillShowIndex + 1;
      this->fields.skillShowIndex = v11;
      if ( bgCollider )
      {
        v12 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
                (CombineResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
                v10);
        goto LABEL_17;
      }
      goto LABEL_64;
    }
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      if ( this->fields.treasureDeviceEnabled )
      {
        CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, v7);
        this->fields.treasureDeviceEnabled = 0;
LABEL_31:
        CombineResultEffectComponent__EndDisp(this, v13);
        return;
      }
      goto LABEL_58;
    }
  }
  if ( (unsigned int)kind <= 0x1B && ((1 << kind) & 0x8000110) != 0 )
  {
    if ( CombineResultEffectComponent__IsShowNextNpInfo(this, v7) )
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
            v37 = TransformCount;
            bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
            this->fields.displayCount = displayCount - 1;
            if ( bgCollider )
            {
              bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedServantInfo(
                                                       (UserServantEntity_o *)bgCollider,
                                                       &v43,
                                                       v37 - displayCount,
                                                       0LL);
              if ( v43 )
              {
                bgCollider = (UnityEngine_Collider_o *)this->fields.commandCardExceedResultWindow;
                if ( bgCollider )
                {
                  CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
                    (CommandCardExceedResultWindowComponent_o *)bgCollider,
                    this->fields.baseUsrSvtData,
                    this->fields.commandCardIndex,
                    this->fields.commandCardExceedCount,
                    v43->fields.svtId,
                    v43->fields.titleText,
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
        v38 = Method_CombineResultEffectComponent_clickNext__;
        if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1B640E0(Method_CombineResultEffectComponent_clickNext__);
        v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v38, v38[4]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
        if ( this->fields.kind != 24 )
          CombineResultEffectComponent__ReleaseVoiceData(this, v40);
        if ( !CombineResultEffectComponent__OpenNotification(this, v40) )
          CombineResultEffectComponent__FadeoutProcess(this, v41);
        return;
      }
    }
    else if ( (unsigned int)(kind - 2) >= 2 )
    {
      if ( !kind )
        CombineResultEffectComponent__stopVoice(this, v7);
      goto LABEL_58;
    }
    if ( this->fields.displayCount >= 1 )
    {
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( !bgCollider )
        goto LABEL_64;
      v19 = UserServantEntity__GetTransformCount((UserServantEntity_o *)bgCollider, 1, 0LL);
      v20 = this->fields.displayCount;
      v21 = v19;
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      this->fields.displayCount = v20 - 1;
      if ( !bgCollider )
        goto LABEL_64;
      v22 = v21 - v20;
      bgCollider = (UnityEngine_Collider_o *)UserServantEntity__GetTransformedSkillIdList(
                                               (UserServantEntity_o *)bgCollider,
                                               v21 - v20,
                                               -1,
                                               -1,
                                               1,
                                               -1,
                                               0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_64;
      v23 = (System_Int32_array *)bgCollider;
      TransformedSameSlotSkillId = UserServantEntity__GetTransformedSameSlotSkillId(
                                     this->fields.baseUsrSvtData,
                                     this->fields.targetId,
                                     v22 - 1,
                                     v22,
                                     0LL);
      v26 = this->fields.kind;
      this->fields.targetId = TransformedSameSlotSkillId;
      if ( v26 == 7 )
      {
        v27 = TransformedSameSlotSkillId;
        baseUsrSvtData = this->fields.baseUsrSvtData;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9045 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v25);
          byte_49F9045 = 1;
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
                                     v27,
                                     *(_DWORD *)(*(_QWORD *)&bgCollider[7].fields.m_CachedPtr + 16LL),
                                     v22,
                                     0LL);
      }
      bgCollider = (UnityEngine_Collider_o *)this->fields.baseUsrSvtData;
      if ( bgCollider )
      {
        UserServantEntity__GetTransformedServantInfo((UserServantEntity_o *)bgCollider, &transformInfo, v22, 0LL);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
        System_Action___ctor(v34, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( transformInfo )
        {
          if ( skillResultInfoWindow )
          {
            SkillUpResultWindowComponent__OpenSkillUpResultInfo(
              skillResultInfoWindow,
              targetId,
              targetLv,
              v34,
              this->fields.targetIdOld,
              this->fields.targetLvOld,
              transformInfo->fields.svtId,
              v23,
              this->fields.kind == 3,
              1,
              0,
              transformInfo->fields.titleText,
              v42);
            return;
          }
        }
      }
LABEL_64:
      sub_1B64324(bgCollider);
    }
    goto LABEL_58;
  }
  if ( CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(this, v7) )
  {
    kind = this->fields.kind;
    goto LABEL_24;
  }
  v15 = Method_CombineResultEffectComponent_clickNext__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_clickNext__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B640E0(Method_CombineResultEffectComponent_clickNext__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
  CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v17);
  if ( CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(this, v18) )
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
  __int64 v11; // x1
  __int64 v12; // x2
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21
  __int64 v17; // x0

  if ( (byte_49FFC27 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v6);
    sub_1B640C8(&Method_CombineResultEffectComponent__endloadEffect_b__114_0__, v7);
    sub_1B640C8(&CombineResultEffectComponent_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_49FFC27 = 1;
  }
  if ( data )
  {
    CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)CombineResultEffectComponent_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    v14 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__114_0__, 0LL);
    if ( !v14 )
      sub_1B64324(v17);
    CommonUI__maskFadein(v14, DEFAULT_FADE_TIME, v16, 0LL);
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
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w0
  int32_t SvtVoiceId; // w21
  struct UserServantEntity_o *v15; // x8
  ServantVoiceMaster_o *v16; // x22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_49FFC2F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFC2F = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.asstName, 0, v2, v3);
  this->fields.playVoiceList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v7, v8);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_12;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v12;
  *(_QWORD *)&v24.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v24, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v13, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v15 = this->fields.resUsrSvtData) == 0LL)
    || (v16 = (ServantVoiceMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                     v15->fields.limitCount,
                                     0LL),
        !v16) )
  {
LABEL_12:
    sub_1B64324(Instance);
  }
  Entity = ServantVoiceMaster__getEntity(v16, 2, SvtVoiceId, (int32_t)Instance, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v18, v19);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v22, v23);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  System_Collections_Generic_List_object__o *CostumeCombineVoiceList; // x0

  if ( (byte_49FFC43 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    byte_49FFC43 = 1;
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
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  Il2CppObject *Object_object__48347676; // x19
  UnityEngine_GameObject_o *v10; // x19
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_49FFC28 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, parentTr);
    sub_1B640C8(&CombineResultEffectComponent_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FFC28 = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48347676,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7111 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_49F7111 = 1;
  }
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v14 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7116 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F7116 = 1;
  }
  if ( !v14 )
LABEL_15:
    sub_1B64324(effectAssetData);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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

  if ( (byte_49FFC42 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_49FFC42 = 1;
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
      sub_1B64324(resUsrSvtData);
    v13 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v13;
    *(_QWORD *)&v16.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
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
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v17; // x21
  __int64 v18; // x24
  int32_t v19; // w0
  int32_t CombineVoiceLimitCount; // w0
  struct UserServantEntity_o *v21; // x8
  ServantLimitImageMaster_o *v22; // x23
  __int64 v23; // x24
  __int64 v24; // x25
  int32_t ServantLimitCountSealAfter; // w22
  struct ServantVoiceEntity_o *Entity; // x0
  int32_t v27; // w2
  char v28; // w3
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  int32_t v31; // w2
  char v32; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v6 = costumeId;
  SvtVoiceId = voiceId;
  if ( (byte_49FFC2E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&voiceId);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FFC2E = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.asstName, 0, costumeId, isLimitUp);
  this->fields.playVoiceList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList, 0, v13, v14);
  if ( SvtVoiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_26;
    v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v18;
    *(_QWORD *)&v33.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v19, 0LL);
  }
  if ( v6 <= 0 )
  {
    Master_object = this->fields.resUsrSvtData;
    if ( !Master_object )
      goto LABEL_26;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_40698696(Master_object->fields.limitCount, 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(Master_object, 0, 0LL);
    v6 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v21 = this->fields.resUsrSvtData;
  if ( !v21 )
    goto LABEL_26;
  v22 = (ServantLimitImageMaster_o *)Master_object;
  v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v24;
  *(_QWORD *)&v34.fields.fakeValue = v23;
  Master_object = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v34, 0LL);
  if ( !v22
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v22,
                                       (int32_t)Master_object,
                                       v6,
                                       0LL),
        (Master_object = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_26:
    sub_1B64324(Master_object);
  }
  Entity = ServantVoiceMaster__getEntity(
             (ServantVoiceMaster_o *)Master_object,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtVoiceEntity, (int32_t)Entity, v27, v28);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v31, v32);
  }
}


void __fastcall CombineResultEffectComponent__loadBoxGachaEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetLoader_LoadEndDataHandler_o *v7; // x20

  if ( (byte_49FFC26 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent_endloadEffect__, v4);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_5809/*"Effect/Combine"*/, v6);
    byte_49FFC26 = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5809/*"Effect/Combine"*/, v7, 1, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_49FFC30 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent_EndLoad__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_49FFC30 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v7 = (SoundManager_o *)Instance;
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v7 )
      sub_1B64324(v11);
    SoundManager__LoadAudioAssetStorage(v7, asstName, v10, 1, 0LL);
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
  __int64 v17; // x1
  __int64 v18; // x2
  float FadeTime; // s0
  System_Collections_Generic_IEnumerable_TSource__o *currentFigureCollectList; // x0
  float v21; // s8
  int32_t v22; // w2
  ServantVoiceData_array *v23; // x3
  const MethodInfo *v24; // x6
  System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x4
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v29; // x22
  SePlayer_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  v4 = this;
  if ( (byte_49FFC47 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CombineResultEffectComponent_EndPlay__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v6);
    this = (CombineResultEffectComponent_o *)sub_1B640C8(&SoundManager_TypeInfo, v7);
    byte_49FFC47 = 1;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.vcName, (int32_t)id, v2, v3);
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
            v21 = FadeTime;
            if ( System_Linq_Enumerable__Any_object_(
                   currentFigureCollectList,
                   (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                     (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.afterFigureCollectList,
                     (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
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
                v21,
                v22,
                v23,
                afterFigureCollectList,
                friendshipExceedResultWindow,
                v24);
            }
          }
          asstName = v4->fields.asstName;
          vcName = v4->fields.vcName;
          volume = v4->fields.volume;
          v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
          System_Action___ctor(v29, (Il2CppObject *)v4, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v30 = SoundManager__playVoice_38387180(asstName, vcName, volume, v29, 0LL);
          v4->fields.player = v30;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.player, (int32_t)v30, v31, v32);
          ++v4->fields.playCnt;
          return;
        }
LABEL_23:
        sub_1B64324(this);
      }
    }
    sub_1B6432C(this, method);
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
  if ( (byte_49FFC34 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B640C8(&StringLiteral_3162/*"BaseSvtNodeName"*/, v4);
    byte_49FFC34 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B64324(this);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_3162/*"BaseSvtNodeName"*/,
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
  __int64 v26; // x1
  UnityEngine_Transform_o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFC3E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_4362/*"CardScale"*/, v8);
    sub_1B640C8(&StringLiteral_3161/*"BaseSvtCardNodeName"*/, v9);
    byte_49FFC3E = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3161/*"BaseSvtCardNodeName"*/,
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
  *(_QWORD *)&v28.fields.currentCryptoKey = v17;
  *(_QWORD *)&v28.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.baseUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20->fields.limitCount, 0LL);
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
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_37591604(
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
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_49F7111 )
  {
    fsm = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v26);
    byte_49F7111 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v25, 0LL)) == 0) )
  {
LABEL_25:
    sub_1B64324(fsm);
  }
  v29.fields.x = v18;
  v29.fields.y = v18;
  v29.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v29, 0LL);
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

  if ( (byte_49FFC3C & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B640C8(&StringLiteral_8368/*"LimitUpResSvtNodeName"*/, v3);
    byte_49FFC3C = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
      sub_1B6432C(CostumeSvtVoiceList, v5);
    v6 = CostumeSvtVoiceList->m_Items[0];
    if ( !v6 )
LABEL_13:
      sub_1B64324(CostumeSvtVoiceList);
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
  CostumeSvtVoiceList = (ServantVoiceData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
    (System_String_o *)StringLiteral_8368/*"LimitUpResSvtNodeName"*/,
    v13);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_1B64324(0LL);
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
  if ( (byte_49FFC37 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    this = (CombineResultEffectComponent_o *)sub_1B640C8(&StringLiteral_8367/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_49FFC37 = 1;
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
  this = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUsrSvtData;
  if ( !v8 )
LABEL_10:
    sub_1B64324(this);
  v9 = (int)this;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8[6], 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v9, v10, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    v2,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8367/*"LimitUpBaseSvtNodeName"*/,
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

  if ( (byte_49FFC3D & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&StringLiteral_8367/*"LimitUpBaseSvtNodeName"*/, v7);
    byte_49FFC3D = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
      sub_1B6432C(LimitUpSvtVoiceList, v9);
    v10 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v10 )
      sub_1B64324(LimitUpSvtVoiceList);
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
    (System_String_o *)StringLiteral_8367/*"LimitUpBaseSvtNodeName"*/,
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
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x19
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFC40 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4362/*"CardScale"*/, *(_QWORD *)&svtId);
    sub_1B640C8(&StringLiteral_3161/*"BaseSvtCardNodeName"*/, v9);
    byte_49FFC40 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3161/*"BaseSvtCardNodeName"*/,
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nameRevealCard, (int32_t)TexturePrefab, v19, v20);
  fsm = (PlayMakerFSM_o *)this->fields.nameRevealCard;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v22 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_49F7111 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
    byte_49F7111 = 1;
  }
  if ( !v22
    || (UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)*p_nameRevealCard) == 0LL)
    || (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL)) == 0LL )
  {
LABEL_18:
    sub_1B64324(fsm);
  }
  v23.fields.x = v15;
  v23.fields.y = v15;
  v23.fields.z = v15;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v23, 0LL);
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
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFC41 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4362/*"CardScale"*/, *(_QWORD *)&changeNameType);
    sub_1B640C8(&StringLiteral_11301/*"ResultSvtCardNodeName"*/, v5);
    byte_49FFC41 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_18;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_11301/*"ResultSvtCardNodeName"*/,
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
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_37591604(
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
  v17 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_49F7111 )
  {
    fsm = (PlayMakerFSM_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_49F7111 = 1;
  }
  if ( !v17
    || (UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_18:
    sub_1B64324(fsm);
  }
  v18.fields.x = v11;
  v18.fields.y = v11;
  v18.fields.z = v11;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v18, 0LL);
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
  __int64 v26; // x1
  UnityEngine_Transform_o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFC3F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_4362/*"CardScale"*/, v8);
    sub_1B640C8(&StringLiteral_11301/*"ResultSvtCardNodeName"*/, v9);
    byte_49FFC3F = 1;
  }
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_11301/*"ResultSvtCardNodeName"*/,
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
  *(_QWORD *)&v28.fields.currentCryptoKey = v17;
  *(_QWORD *)&v28.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_25;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v20 = this->fields.resUsrSvtData;
  if ( !v20 )
    goto LABEL_25;
  v21 = (ServantLimitImageMaster_o *)fsm;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20->fields.limitCount, 0LL);
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
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_37591604(
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
  v27 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_49F7111 )
  {
    fsm = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v26);
    byte_49F7111 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (fsm = (__int64)UnityEngine_Component__get_transform(v25, 0LL)) == 0) )
  {
LABEL_25:
    sub_1B64324(fsm);
  }
  v29.fields.x = v18;
  v29.fields.y = v18;
  v29.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v29, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v25, 1.89, 0LL);
}


void __fastcall CombineResultEffectComponent__setSkillResultInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v47; // x20
  __int64 Instance; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  int32_t v53; // w3
  SkillUpResultWindowComponent_o *v54; // x20
  UserServantEntity_o *v55; // x21
  int32_t v56; // w22
  int32_t v57; // w23
  System_Action_o *v58; // x24
  const MethodInfo *v59; // x2
  struct UserServantEntity_o *v60; // x8
  __int64 v61; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x21
  __int64 v63; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x0
  const MethodInfo *v67; // x6
  const MethodInfo *v68; // x2
  struct UserServantEntity_o *v69; // x8
  __int64 v70; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v71; // x21
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x0
  const MethodInfo *v75; // x1
  UserServantEntity_o *v76; // x20
  const MethodInfo *v77; // x2
  int32_t v78; // w3
  struct ServantVoiceData_array **p_playVoiceList; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *v85; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  System_Action_o *v88; // x24
  int32_t targetIdOld; // w25
  int32_t targetLvOld; // w26
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x2
  int32_t v93; // w27
  int32_t v94; // w28
  __int64 v95; // x0
  __int64 v96; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v98; // x1
  __int64 v99; // x2
  System_Collections_Generic_List_int__o *v100; // x20
  __int64 v101; // x2
  __int64 v102; // x28
  int32_t v103; // w22
  struct UserServantEntity_o *v104; // x8
  __int64 v105; // x23
  __int64 v106; // x24
  int v107; // w8
  int v108; // w9
  __int64 v109; // x23
  struct UserServantEntity_o *v110; // x8
  __int64 v111; // x23
  __int64 v112; // x24
  int32_t v113; // w0
  struct System_Int32_array *items; // x8
  _QWORD *v115; // x9
  __int64 size; // x10
  int32_t v117; // w22
  Il2CppObject *v118; // x23
  struct UserServantEntity_o *v119; // x8
  int64_t v120; // x24
  __int64 v121; // x25
  __int64 v122; // x26
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v124; // x23
  struct UserServantEntity_o *v125; // x8
  __int64 v126; // x23
  __int64 v127; // x24
  _BOOL8 v128; // x0
  Il2CppObject *current; // x21
  int64_t UserId; // x0
  struct UserServantEntity_o *v131; // x8
  int64_t v132; // x23
  int32_t v133; // w24
  __int64 v134; // x25
  __int64 v135; // x26
  int32_t v136; // w3
  int v137; // w21
  struct ServantVoiceData_array *v138; // x8
  struct UserServantEntity_o *v139; // x8
  __int64 v140; // x20
  __int64 v141; // x21
  struct UserServantEntity_o *v142; // x8
  int v143; // w21
  int v144; // w20
  const MethodInfo *v145; // x1
  __int64 v146; // x2
  struct UserServantEntity_o *v147; // x8
  __int64 v148; // x22
  __int64 v149; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v150; // x21
  int32_t v151; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v153; // w8
  SkillUpResultWindowComponent_o *v154; // x20
  UserServantEntity_o *v155; // x21
  System_Action_o *v156; // x22
  const MethodInfo *v157; // x3
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  int32_t v159; // w2
  int32_t v160; // w3
  struct CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x23
  __int64 v162; // x1
  Il2CppObject *v163; // x20
  Il2CppObject *v164; // x21
  Il2CppObject *v165; // x20
  BalanceConfig_c *v166; // x8
  int32_t CloseSecretTreasureDeviceQuestClear; // w22
  System_String_o *v168; // x21
  Il2CppObject *Name; // x0
  System_String_o *v170; // x0
  __int64 v171; // x1
  __int64 v172; // x2
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
  const MethodInfo *v187; // x4
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v189; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v190; // x21
  Il2CppObject *v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  struct UserServantEntity_o *v194; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t lv; // w21
  const MethodInfo *v197; // x1
  int32_t v198; // w2
  int32_t v199; // w3
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v201; // x3
  __int64 v202; // x2
  __int64 v203; // x22
  int32_t v204; // w2
  int32_t v205; // w3
  struct CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x1
  int32_t v207; // w2
  int32_t v208; // w3
  int32_t v209; // w2
  int32_t v210; // w3
  __int64 v211; // x23
  __int64 v212; // x1
  __int64 v213; // x2
  System_Action_o *v214; // x24
  int32_t v215; // w2
  int32_t v216; // w3
  Il2CppObject *v217; // x21
  __int64 v218; // x1
  __int64 v219; // x2
  CombineResultEffectComponent_ClickDelegate_o *v220; // x22
  const MethodInfo *v221; // x3
  int32_t v222; // w2
  int32_t v223; // w3
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v225; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v227; // x23
  __int64 v228; // x1
  __int64 v229; // x2
  System_Action_o *v230; // x24
  SvtCombineResultWindowComponent_o *v231; // x0
  UserServantEntity_o *v232; // x1
  int32_t v233; // w2
  System_Action_o *v234; // x3
  System_Action_o *v235; // x4
  struct UserServantEntity_o *v236; // x8
  __int128 v237; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v238; // x20
  Il2CppObject *v239; // x0
  int32_t v240; // w2
  int32_t v241; // w3
  struct SvtCombineResultWindowComponent_o *v242; // x20
  struct UserServantEntity_o *v243; // x21
  int32_t v244; // w22
  __int64 v245; // x1
  __int64 v246; // x2
  System_Action_o *v247; // x23
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x20
  UserServantEntity_o *v249; // x21
  int32_t commandCardIndex; // w22
  int32_t commandCardExceedCount; // w23
  __int64 v252; // x1
  __int64 v253; // x2
  Il2CppObject *v254; // x20
  AvalonSceneManager_c *v255; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v257; // x0
  __int64 *v258; // x8
  bool v259; // w28
  const MethodInfo *v260; // x2
  const MethodInfo *v261; // x2
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v263; // x21
  const MethodInfo *v264; // x3
  System_String_o *v265; // x22
  Il2CppObject *v266; // x21
  Il2CppObject *v267; // x0
  __int64 v268; // x1
  __int64 v269; // x2
  AvalonSceneManager_c *v270; // x8
  System_Action_o *v271; // x21
  bool kind; // [xsp+0h] [xbp-120h]
  const MethodInfo *isRelease; // [xsp+8h] [xbp-118h]
  char isReleasea; // [xsp+8h] [xbp-118h]
  System_String_o *dispBattleName; // [xsp+18h] [xbp-108h]
  const MethodInfo *v276; // [xsp+20h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v277; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v278; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v279; // [xsp+70h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v280; // [xsp+90h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A8h] [xbp-78h] BYREF
  int32_t oldLv; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v283; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v284; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v285; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v286; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v287; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v288; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v289; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v290; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v291; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v292; // 0:x0.16

  if ( (byte_49FFC44 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&BalanceConfig_TypeInfo, v5);
    sub_1B640C8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_CombineResultEffectComponent_EndDisp__, v7);
    sub_1B640C8(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_0__, v8);
    sub_1B640C8(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_1__, v9);
    sub_1B640C8(&Method_CombineResultEffectComponent__setSkillResultInfo_b__145_5__, v10);
    sub_1B640C8(&Method_CombineResultEffectComponent_clickNext__, v11);
    sub_1B640C8(&CombineResultFormManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v20);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_int___, v21);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v29);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_1B640C8(&LocalizationManager_TypeInfo, v31);
    sub_1B640C8(&NetworkManager_TypeInfo, v32);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v35);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v36);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37);
    sub_1B640C8(&string___TypeInfo, v38);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v39);
    sub_1B640C8(&Method_CombineResultEffectComponent___c__DisplayClass145_0__setSkillResultInfo_b__3__, v40);
    sub_1B640C8(&CombineResultEffectComponent___c__DisplayClass145_0_TypeInfo, v41);
    sub_1B640C8(&Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__2__, v42);
    sub_1B640C8(&CombineResultEffectComponent___c__DisplayClass145_1_TypeInfo, v43);
    sub_1B640C8(&StringLiteral_10772/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v44);
    sub_1B640C8(&StringLiteral_10773/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v45);
    sub_1B640C8(&StringLiteral_1/*""*/, v46);
    byte_49FFC44 = 1;
  }
  oldLv = 0;
  entity = 0LL;
  memset(&v280, 0, sizeof(v280));
  v47 = sub_1B64314(CombineResultEffectComponent___c__DisplayClass145_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !v47 )
    goto LABEL_212;
  *(_QWORD *)(v47 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 24), (int32_t)this, v49, v50);
  switch ( this->fields.kind )
  {
    case 0:
      if ( this->fields.setResUsrSvtData )
        goto LABEL_155;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_212;
      v189 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
      v190 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v279.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v279.fields.fakeValue = v189;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v278 = v279;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v278, 0LL);
      if ( !v190 )
        goto LABEL_212;
      v191 = DataMasterBase_object__object__long___GetEntity(
               v190,
               Instance,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v191;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)v191, v192, v193);
LABEL_155:
      v194 = this->fields.baseUsrSvtData;
      if ( !v194 )
        goto LABEL_212;
      oldLv = v194->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_212;
      lv = resUsrSvtData->fields.lv;
      if ( !System_Int32__Equals_62180496((int32_t)&oldLv, lv, 0LL) )
      {
        if ( this->fields.asstName )
        {
          if ( this->fields.svtVoiceEntity )
          {
            playVoiceList = this->fields.playVoiceList;
            if ( playVoiceList )
            {
              this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
              CombineResultEffectComponent__playVoice(this, v197);
            }
          }
        }
      }
      *(_QWORD *)(v47 + 16) = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 16), 0, v198, v199);
      if ( !CombineResultEffectComponent__CheckCombineLimit(this, oldLv, lv, v201) )
        goto LABEL_166;
      v203 = sub_1B64314(CombineResultEffectComponent___c__DisplayClass145_1_TypeInfo, v51, v202);
      System_Object___ctor((Il2CppObject *)v203, 0LL);
      if ( !v203 )
        goto LABEL_212;
      *(_QWORD *)(v203 + 24) = v47;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v203 + 24), v47, v204, v205);
      callbackFunc = this->fields.callbackFunc;
      *(_QWORD *)(v203 + 16) = callbackFunc;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v203 + 16), (int32_t)callbackFunc, v207, v208);
      this->fields.callbackFunc = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v209, v210);
      v211 = *(_QWORD *)(v203 + 24);
      v214 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v212, v213);
      System_Action___ctor(
        v214,
        (Il2CppObject *)v203,
        Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__2__,
        0LL);
      if ( !v211 )
        goto LABEL_212;
      *(_QWORD *)(v211 + 16) = v214;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v211 + 16), (int32_t)v214, v215, v216);
      v217 = *(Il2CppObject **)(v203 + 24);
      v220 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64314(
                                                               CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                               v218,
                                                               v219);
      CombineResultEffectComponent_ClickDelegate___ctor(
        v220,
        v217,
        Method_CombineResultEffectComponent___c__DisplayClass145_0__setSkillResultInfo_b__3__,
        v221);
      this->fields.callbackFunc = v220;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)v220, v222, v223);
LABEL_166:
      if ( !this->fields.combineStatusDisp )
      {
LABEL_186:
        CombineResultEffectComponent__EndDisp(this, v51);
        return;
      }
      svtResultInfoWindow = this->fields.svtResultInfoWindow;
      v225 = this->fields.resUsrSvtData;
      baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
      v227 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v202);
      System_Action___ctor(v227, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v230 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v228, v229);
      System_Action___ctor(v230, (Il2CppObject *)this, (intptr_t)Method_CombineResultEffectComponent_clickNext__, 0LL);
      if ( !svtResultInfoWindow )
        goto LABEL_212;
      v231 = svtResultInfoWindow;
      v232 = v225;
      v233 = baseUsrSvtCollictionLv;
      v234 = v227;
      v235 = v230;
LABEL_176:
      SvtCombineResultWindowComponent__setAfterSvtResultState(v231, v232, v233, v234, v235, 0LL);
      return;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      Instance = sub_1B64170(string___TypeInfo, 1LL);
      v60 = this->fields.baseUsrSvtData;
      if ( !v60 )
        goto LABEL_212;
      v61 = Instance;
      p_svtId = &v60->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v283.fields.currentCryptoKey = p_svtId;
      *(_QWORD *)&v283.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v283, v59);
      if ( !v61 )
        goto LABEL_212;
      if ( !*(_DWORD *)(v61 + 24) )
        goto LABEL_213;
      *(_QWORD *)(v61 + 32) = Instance;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 32), Instance, v64, v65);
      v66 = System_String__Concat_61388924((System_String_array *)v61, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt_69085444(v66, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
        goto LABEL_22;
      Instance = sub_1B64170(string___TypeInfo, 1LL);
      v69 = this->fields.baseUsrSvtData;
      if ( !v69 )
        goto LABEL_212;
      v70 = Instance;
      v71 = &v69->fields.svtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v284.fields.currentCryptoKey = v71;
      *(_QWORD *)&v284.fields.fakeValue = 0LL;
      Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v284, v68);
      if ( !v70 )
        goto LABEL_212;
      if ( !*(_DWORD *)(v70 + 24) )
        goto LABEL_213;
      *(_QWORD *)(v70 + 32) = Instance;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 32), Instance, v72, v73);
      v74 = System_String__Concat_61388924((System_String_array *)v70, 0LL);
      UnityEngine_PlayerPrefs__SetInt(v74, 0, 0LL);
      v76 = this->fields.baseUsrSvtData;
      if ( !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
      CombineResultFormManager__ResetVoiceList(v76, v75);
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
        v67);
      if ( this->fields.isLimitUpSuppression )
      {
        p_playVoiceList = &this->fields.playVoiceList;
        this->fields.playVoiceList = 0LL;
        LODWORD(LimitUpSvtVoiceList) = 0;
      }
      else
      {
        LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v77);
        p_playVoiceList = &this->fields.playVoiceList;
        this->fields.playVoiceList = LimitUpSvtVoiceList;
      }
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_playVoiceList, (int32_t)LimitUpSvtVoiceList, (int32_t)v77, v78);
      v138 = this->fields.playVoiceList;
      if ( !v138 )
      {
        v139 = this->fields.baseUsrSvtData;
        if ( v139 )
        {
          v141 = *(_QWORD *)&v139->fields.limitCount.fields.currentCryptoKey;
          v140 = *(_QWORD *)&v139->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v290.fields.currentCryptoKey = v141;
          *(_QWORD *)&v290.fields.fakeValue = v140;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v290, 0LL);
          v142 = this->fields.baseUsrSvtData;
          v143 = Instance == 2;
          if ( v142 )
          {
            v144 = Instance;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v142->fields.limitCount, 0LL) == 3 )
            {
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v147 = this->fields.baseUsrSvtData;
              if ( !v147 )
                goto LABEL_212;
              v149 = *(_QWORD *)&v147->fields.svtId.fields.currentCryptoKey;
              v148 = *(_QWORD *)&v147->fields.svtId.fields.fakeValue;
              v150 = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(_QWORD *)(Instance + 184) + 1048LL);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v291.fields.currentCryptoKey = v149;
              *(_QWORD *)&v291.fields.fakeValue = v148;
              v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v291, 0LL);
              v143 = (v144 == 2) | System_Linq_Enumerable__Contains_int_(
                                     v150,
                                     v151,
                                     (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
            }
            isLimitUpSuppression = this->fields.isLimitUpSuppression;
            if ( this->fields.isLimitUpSuppression )
            {
              v153 = this->fields.kind;
              isLimitUpSuppression = v153 != 10 && v153 != 26;
            }
            if ( (v143 & isLimitUpSuppression) != 0 )
            {
              CombineResultEffectComponent__OpenLimitCountSealDialog(this, v145);
              return;
            }
            limitUpResultCheck = this->fields.limitUpResultCheck;
            v263 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v145, v146);
            System_Action___ctor(
              v263,
              (Il2CppObject *)this,
              Method_CombineResultEffectComponent__setSkillResultInfo_b__145_5__,
              0LL);
            if ( limitUpResultCheck )
            {
              LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v263, 1, v264);
              return;
            }
          }
        }
        goto LABEL_212;
      }
LABEL_118:
      if ( this->fields.asstName )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&v138->max_length;
        CombineResultEffectComponent__playVoice(this, v51);
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
      v85 = SkillIdList;
      v88 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v86, v87);
      System_Action___ctor(v88, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v91);
      if ( !Instance )
        goto LABEL_212;
      v93 = *(_DWORD *)(Instance + 16);
      v94 = this->fields.kind;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v92);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_212;
      dispBattleName = *(System_String_o **)(Instance + 24);
      isReleasea = 1;
      kind = v94 == 3;
      goto LABEL_195;
    case 4:
    case 5:
    case 8:
    case 0x12:
    case 0x1B:
      v54 = this->fields.skillResultInfoWindow;
      v55 = this->fields.baseUsrSvtData;
      v56 = this->fields.targetId;
      v57 = this->fields.targetLv;
      v58 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v52);
      System_Action___ctor(v58, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v54 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenNpUpResultInfo_44602348(
        v54,
        v55,
        v56,
        v57,
        v58,
        this->fields.targetIdOld,
        this->fields.targetLvOld,
        this->fields.npInfoAddManager,
        this->fields.kind,
        isRelease);
      return;
    case 6:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      v236 = this->fields.baseUsrSvtData;
      if ( !v236 )
        goto LABEL_212;
      v237 = *(_OWORD *)&v236->fields.id.fields.fakeValue;
      v238 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v279.fields.currentCryptoKey = *(_OWORD *)&v236->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v279.fields.fakeValue = v237;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v277 = v279;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v277, 0LL);
      if ( !v238 )
        goto LABEL_212;
      v239 = DataMasterBase_object__object__long___GetEntity(
               v238,
               Instance,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this->fields.resUsrSvtData = (struct UserServantEntity_o *)v239;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resUsrSvtData, (int32_t)v239, v240, v241);
      v242 = this->fields.svtResultInfoWindow;
      v243 = this->fields.resUsrSvtData;
      v244 = this->fields.baseUsrSvtCollictionLv;
      v247 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v245, v246);
      System_Action___ctor(v247, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v242 )
        goto LABEL_212;
      v231 = v242;
      v232 = v243;
      v233 = v244;
      v234 = v247;
      v235 = 0LL;
      goto LABEL_176;
    case 7:
    case 0x15:
      v95 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v95 + 309) & 1) == 0 )
        v95 = sub_1BB5FA4(v95);
      v96 = *(_QWORD *)(*(_QWORD *)(v95 + 192) + 16LL);
      if ( (*(_BYTE *)(v96 + 309) & 1) == 0 )
        v96 = sub_1BB5FA4(v96);
      Instance = **(_QWORD **)(v96 + 184);
      if ( !Instance )
        goto LABEL_212;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      v100 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v98,
                                                         v99);
      System_Collections_Generic_List_int____ctor(
        v100,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      v102 = 0LL;
      v103 = 1;
      while ( 2 )
      {
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( v103 <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        {
          v104 = this->fields.baseUsrSvtData;
          if ( !v104 )
            goto LABEL_212;
          v106 = *(_QWORD *)&v104->fields.svtId.fields.currentCryptoKey;
          v105 = *(_QWORD *)&v104->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v285.fields.currentCryptoKey = v106;
          *(_QWORD *)&v285.fields.fakeValue = v105;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v285, 0LL);
          if ( !MasterData_object )
            goto LABEL_212;
          Instance = (__int64)ServantSkillMaster__getEntityListFromIdNum(
                                (ServantSkillMaster_o *)MasterData_object,
                                Instance,
                                v103,
                                0LL);
          if ( !Instance )
            goto LABEL_212;
          v107 = *(_DWORD *)(Instance + 24);
          if ( v107 < 1 )
          {
LABEL_50:
            v110 = this->fields.baseUsrSvtData;
            if ( !v110 )
              goto LABEL_212;
            v112 = *(_QWORD *)&v110->fields.svtId.fields.currentCryptoKey;
            v111 = *(_QWORD *)&v110->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v286.fields.currentCryptoKey = v112;
            *(_QWORD *)&v286.fields.fakeValue = v111;
            v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v286, 0LL);
            Instance = (__int64)ServantSkillMaster__GetEntity(
                                  (ServantSkillMaster_o *)MasterData_object,
                                  v113,
                                  v103,
                                  1,
                                  0LL);
            if ( Instance )
            {
              v63 = *(unsigned int *)(Instance + 28);
              v109 = v102;
LABEL_55:
              if ( !v100 )
                goto LABEL_212;
              items = v100->fields._items;
              v115 = Method_System_Collections_Generic_List_int__Add__;
              ++v100->fields._version;
              if ( !items )
                goto LABEL_212;
              size = v100->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v100,
                  v63,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
              }
              else
              {
                v100->fields._size = size + 1;
                items->m_Items[size + 1] = v63;
              }
            }
            else
            {
              v109 = v102;
            }
            ++v103;
            v102 = v109;
            continue;
          }
          v108 = 0;
          while ( 1 )
          {
            if ( v107 == v108 )
LABEL_213:
              sub_1B6432C(Instance, v63);
            v109 = *(_QWORD *)(Instance + 8LL * v108 + 32);
            if ( !v109 )
              break;
            v63 = *(unsigned int *)(v109 + 28);
            if ( (_DWORD)v63 == this->fields.targetId )
              goto LABEL_55;
            if ( v107 == ++v108 )
              goto LABEL_50;
          }
LABEL_212:
          sub_1B64324(Instance);
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
        v117 = Instance;
        Instance = UserServantEntity__IsHeroine(this->fields.baseUsrSvtData, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_212;
          v118 = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          v119 = this->fields.baseUsrSvtData;
          if ( !v119 )
            goto LABEL_212;
          v120 = Instance;
          v122 = *(_QWORD *)&v119->fields.svtId.fields.currentCryptoKey;
          v121 = *(_QWORD *)&v119->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v287.fields.currentCryptoKey = v122;
          *(_QWORD *)&v287.fields.fakeValue = v121;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v287, 0LL);
          if ( !v118 )
            goto LABEL_212;
          Instance = UserServantCollectionMaster__TryGetEntity(
                       (UserServantCollectionMaster_o *)v118,
                       &entity,
                       v120,
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
              v124 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
              Instance = System_Linq_Enumerable__Any_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v124,
                           (const MethodInfo_2E46564 *)Method_System_Linq_Enumerable_Any_int___);
              if ( (Instance & 1) != 0 )
              {
                Instance = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v124, 0LL);
                v117 = Instance;
              }
            }
          }
        }
        v125 = this->fields.baseUsrSvtData;
        if ( !v125 )
          goto LABEL_212;
        v127 = *(_QWORD *)&v125->fields.svtId.fields.currentCryptoKey;
        v126 = *(_QWORD *)&v125->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v288.fields.currentCryptoKey = v127;
        *(_QWORD *)&v288.fields.fakeValue = v126;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v288, 0LL);
        if ( !v102 )
          goto LABEL_212;
        if ( !MasterData_object )
          goto LABEL_212;
        Instance = (__int64)ServantSkillMaster__getEntityListFromSkillId(
                              (ServantSkillMaster_o *)MasterData_object,
                              Instance,
                              *(_DWORD *)(v102 + 20),
                              this->fields.targetIdOld,
                              0LL);
        if ( !Instance )
          goto LABEL_212;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v279,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
        *(_OWORD *)&v280.fields._list = *(_OWORD *)&v279.fields.currentCryptoKey;
        v280.fields._current = (Il2CppObject *)v279.fields.fakeValue;
        while ( 1 )
        {
          v128 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v280,
                   (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__);
          if ( !v128 )
            break;
          current = v280.fields._current;
          if ( !v280.fields._current )
            sub_1B64324(v128);
          if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v280.fields._current, 0, 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            v131 = this->fields.baseUsrSvtData;
            if ( !v131 )
              sub_1B64324(UserId);
            v132 = UserId;
            v133 = v131->fields.lv;
            v135 = *(_QWORD *)&v131->fields.limitCount.fields.currentCryptoKey;
            v134 = *(_QWORD *)&v131->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v289.fields.currentCryptoKey = v135;
            *(_QWORD *)&v289.fields.fakeValue = v134;
            v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v289, 0LL);
            if ( ServantSkillEntity__isUse((ServantSkillEntity_o *)current, v132, v133, v136, v117, -1, -1, -1LL, 0LL) )
            {
              v137 = 1;
              goto LABEL_189;
            }
          }
        }
        v137 = 0;
LABEL_189:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v280,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
        v259 = v137 != 0;
      }
      else
      {
        v259 = 0;
      }
      skillResultInfoWindow = this->fields.skillResultInfoWindow;
      targetId = this->fields.targetId;
      targetLv = this->fields.targetLv;
      v88 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v63, v101);
      System_Action___ctor(v88, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      targetIdOld = this->fields.targetIdOld;
      targetLvOld = this->fields.targetLvOld;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v260);
      if ( !Instance )
        goto LABEL_212;
      if ( !v100 )
        goto LABEL_212;
      v93 = *(_DWORD *)(Instance + 16);
      v85 = System_Collections_Generic_List_int___ToArray(
              v100,
              (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v261);
      if ( !Instance || !skillResultInfoWindow )
        goto LABEL_212;
      isReleasea = v259;
      kind = 0;
      dispBattleName = *(System_String_o **)(Instance + 24);
LABEL_195:
      SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        skillResultInfoWindow,
        targetId,
        targetLv,
        v88,
        targetIdOld,
        targetLvOld,
        v93,
        v85,
        kind,
        isReleasea,
        0,
        dispBattleName,
        v276);
      break;
    case 9:
      v183 = this->fields.skillResultInfoWindow;
      v184 = this->fields.baseUsrSvtData;
      oldFriendShipRank = this->fields.oldFriendShipRank;
      v186 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v52);
      System_Action___ctor(v186, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v183 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v183, v184, oldFriendShipRank, v186, v187);
      return;
    case 0xB:
      v154 = this->fields.skillResultInfoWindow;
      v155 = this->fields.baseUsrSvtData;
      v156 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v52);
      System_Action___ctor(v156, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      if ( !v154 )
        goto LABEL_212;
      SkillUpResultWindowComponent__OpenPowerUpResultInfo(v154, v155, v156, v157);
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
      CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v51);
      this->fields.playVoiceList = CostumeSvtVoiceList;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.playVoiceList,
        (int32_t)CostumeSvtVoiceList,
        v159,
        v160);
      v138 = this->fields.playVoiceList;
      if ( v138 )
        goto LABEL_118;
      goto LABEL_186;
    case 0x10:
      if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_181;
      messageCallback = this->fields.messageCallback;
      if ( !messageCallback )
        goto LABEL_205;
      this->fields.messageCallback = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.messageCallback, 0, (int32_t)v52, v53);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      v163 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9045 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v162);
        byte_49F9045 = 1;
      }
      Instance = (__int64)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v163 )
        goto LABEL_212;
      v164 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v163,
               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 16LL),
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_212;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_212;
      v165 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.targetSvtId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v166 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v166 = BalanceConfig_TypeInfo;
      }
      CloseSecretTreasureDeviceQuestClear = v166->static_fields->CloseSecretTreasureDeviceQuestClear;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( CloseSecretTreasureDeviceQuestClear )
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10773/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
        if ( !v165 )
          goto LABEL_212;
        v168 = (System_String_o *)Instance;
        Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v165, -1, -1, 0LL);
        v170 = System_String__Format(v168, Name, 0LL);
      }
      else
      {
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10772/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
        if ( !v164 )
          goto LABEL_212;
        v265 = (System_String_o *)Instance;
        Instance = (__int64)QuestEntity__getQuestName((QuestEntity_o *)v164, 0LL);
        if ( !v165 )
          goto LABEL_212;
        v266 = (Il2CppObject *)Instance;
        v267 = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v165, -1, -1, 0LL);
        v170 = System_String__Format_61389768(v265, v266, v267, 0LL);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))messageCallback->fields.m_target)(
        messageCallback->fields.original_method_info,
        v170,
        *(_QWORD *)&messageCallback->fields.extra_arg);
LABEL_205:
      if ( !this->fields.callbackFunc )
        return;
      v254 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v270 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v270 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v270->static_fields->DEFAULT_FADE_TIME;
      v257 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v268, v269);
      v258 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__145_1__;
LABEL_209:
      v271 = v257;
      System_Action___ctor(v257, (Il2CppObject *)this, *v258, 0LL);
      if ( !v254 )
        goto LABEL_212;
      CommonUI__maskFadeout((CommonUI_o *)v254, 1, DEFAULT_FADE_TIME, v271, 0LL);
      return;
    case 0x11:
      if ( !this->fields.isSecretTreasureDeviceRankUpAnim )
        goto LABEL_205;
LABEL_181:
      v254 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v255 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v255 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v255->static_fields->DEFAULT_FADE_TIME;
      v257 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v252, v253);
      v258 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__145_0__;
      goto LABEL_209;
    case 0x14:
      commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
      v249 = this->fields.baseUsrSvtData;
      commandCardIndex = this->fields.commandCardIndex;
      commandCardExceedCount = this->fields.commandCardExceedCount;
      Instance = (__int64)CombineResultEffectComponent__GetTransformedServantInfo(this, 0, v52);
      if ( !Instance || !commandCardExceedResultWindow )
        goto LABEL_212;
      CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        commandCardExceedResultWindow,
        v249,
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
      FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_44502392(
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
      v173 = *(System_Int32_array **)(Instance + 16);
      v174 = this->fields.skillResultInfoWindow;
      v175 = this->fields.targetId;
      v176 = this->fields.targetLv;
      v177 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v171, v172);
      System_Action___ctor(v177, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
      v178 = this->fields.baseUsrSvtData;
      if ( !v178 )
        goto LABEL_212;
      v179 = this->fields.targetIdOld;
      v180 = this->fields.targetLvOld;
      v182 = *(_QWORD *)&v178->fields.svtId.fields.currentCryptoKey;
      v181 = *(_QWORD *)&v178->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v292.fields.currentCryptoKey = v182;
      *(_QWORD *)&v292.fields.fakeValue = v181;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v292, 0LL);
      if ( !v174 )
        goto LABEL_212;
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
        v276);
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

  if ( (byte_49FFC50 & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, method);
    byte_49FFC50 = 1;
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
    sub_1B6406C(p_player, 0, v6, v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0548;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0500;
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
  if ( (byte_49FFC68 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isDecide);
    byte_49FFC68 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FFC69 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v3);
    byte_49FFC69 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo,
                                                      v4,
                                                      v5);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.afterSkillList, (int32_t)v11, v12, v13);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_49FFC6B & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_49FFC6B = 1;
  }
  v8 = sub_1B64314(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        *(_DWORD *)(v8 + 20) = lv,
        (afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList) == 0LL)
    || (items = afterSkillList->fields._items,
        v13 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++afterSkillList->fields._version,
        !items) )
  {
    sub_1B64324(afterSkillList);
  }
  size = afterSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterSkillList,
      (Il2CppObject *)v8,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    afterSkillList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 4), v8, v10, v11);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_49FFC6A & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v7);
    byte_49FFC6A = 1;
  }
  v8 = sub_1B64314(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        *(_DWORD *)(v8 + 20) = lv,
        (beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList) == 0LL)
    || (items = beforeSkillList->fields._items,
        v13 = Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__,
        ++beforeSkillList->fields._version,
        !items) )
  {
    sub_1B64324(beforeSkillList);
  }
  size = beforeSkillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeSkillList,
      (Il2CppObject *)v8,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    beforeSkillList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 4), v8, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterSkillList; // x0

  if ( (byte_49FFC6D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_49FFC6D = 1;
  }
  afterSkillList = (System_Collections_Generic_List_object__o *)this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1B64324(0LL);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              afterSkillList,
                                                              index,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  v2 = this;
  if ( (byte_49FFC6E & 1) == 0 )
  {
    this = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_1B640C8(
                                                                       &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
                                                                       method);
    byte_49FFC6E = 1;
  }
  afterSkillList = v2->fields.afterSkillList;
  if ( !afterSkillList )
    sub_1B64324(this);
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeSkillList; // x0

  if ( (byte_49FFC6C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_49FFC6C = 1;
  }
  beforeSkillList = (System_Collections_Generic_List_object__o *)this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_1B64324(0LL);
  return (CombineResultEffectComponent_CostumeSkillInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                              beforeSkillList,
                                                              index,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19B05CC;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19B05AC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0564;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFC6F & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent___c_TypeInfo, v1);
    byte_49FFC6F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CombineResultEffectComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CombineResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct CombineResultEffectComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CombineResultEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return System_Int32__CompareTo_62180348((_DWORD)a + 24, b->fields.priority, 0LL);
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
  const MethodInfo *v12; // x1
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v13; // x8
  const MethodInfo *v14; // x1
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  struct CombineResultEffectComponent___c__DisplayClass145_0_o *v18; // x8
  struct CombineResultEffectComponent_o *v19; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  CombineResultEffectComponent_ClickDelegate_o *_9__4; // x22
  CommonUI_o *v22; // x20
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  struct CombineResultEffectComponent_ClickDelegate_o *callback; // x8

  v2 = this;
  if ( (byte_49FFC70 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)sub_1B640C8(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__4__,
                                                                      v5);
    byte_49FFC70 = 1;
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
  UnityEngine_Object__DestroyImmediate_69127924(effect, 0LL);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v11->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  this[4].monitor = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this[4].monitor, 0, v9, v10);
  v13 = v2->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v13->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  CombineResultEffectComponent__Close((CombineResultEffectComponent_o *)this, v12);
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_24;
  this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)v15->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  if ( this[5].klass )
  {
    this = (CombineResultEffectComponent___c__DisplayClass145_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          _9__4 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64314(
                                                                    CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                    v16,
                                                                    v17);
          CombineResultEffectComponent_ClickDelegate___ctor(
            _9__4,
            (Il2CppObject *)v2,
            Method_CombineResultEffectComponent___c__DisplayClass145_1__setSkillResultInfo_b__4__,
            v23);
          v2->fields.__9__4 = _9__4;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v24, v25);
        }
        if ( v22 )
        {
          CommonUI__OpenCombineLimit(v22, baseUsrSvtData, _9__4, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1B64324(this);
  }
  if ( this[9].monitor )
  {
    CombineResultEffectComponent__EndDisp((CombineResultEffectComponent_o *)this, v14);
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
    sub_1B64324(this);
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
  if ( (byte_49FFC71 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    this = (CombineResultEffectComponent___c__DisplayClass145_2_o *)sub_1B640C8(
                                                                      &Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__7__,
                                                                      v6);
    byte_49FFC71 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__7 = v3->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     decide,
                                                     method);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)v3,
      Method_CombineResultEffectComponent___c__DisplayClass145_2__setSkillResultInfo_b__7__,
      0LL);
    v3->fields.__9__7 = _9__7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__7, (int32_t)_9__7, v9, v10);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (CombineResultEffectComponent___c__DisplayClass145_2_o *)NetworkManager__getRequest_object_(
                                                                    _9__7,
                                                                    (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v11 = v3->fields.__4__this;
  if ( !v11 || !this )
LABEL_11:
    sub_1B64324(this);
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
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v2 = this;
  if ( (byte_49FFC72 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    this = (CombineResultEffectComponent___c__DisplayClass167_0_o *)sub_1B640C8(
                                                                      &ServantCharaGraphEXOpenManager_TypeInfo,
                                                                      v3);
    byte_49FFC72 = 1;
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
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  limitCount = v2->fields.limitCount;
  v10 = v8;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v10, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  this = (CombineResultEffectComponent___c__DisplayClass167_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_11:
    sub_1B64324(this);
  CombineResultEffectComponent__FadeoutProcess((CombineResultEffectComponent_o *)this, v11);
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
  __int64 v9; // x2
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FFC73 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDcd);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__1__, v6);
    byte_49FFC73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass173_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v14, v15);
  }
  if ( !v11 )
    sub_1B64324(Instance);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass173_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x2
  struct CombineResultEffectComponent_o *_4__this; // x8
  CommonUI_o *v7; // x20

  if ( (byte_49FFC74 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_49FFC74 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  Instance = (Il2CppObject *)_4__this->fields.limitUpResultCheck;
  if ( !Instance )
    goto LABEL_10;
  LimitUpResultCheckComponent__SetActiveInfoWindow((LimitUpResultCheckComponent_o *)Instance, 1, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_10:
    sub_1B64324(Instance);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}