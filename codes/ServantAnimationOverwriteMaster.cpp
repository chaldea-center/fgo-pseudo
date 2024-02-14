void __fastcall ServantAnimationOverwriteMaster___ctor(
        ServantAnimationOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4215848 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__,
      method);
    byte_4215848 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    308,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantAnimationOverwriteEntity_o *__fastcall ServantAnimationOverwriteMaster__GetEntity(
        ServantAnimationOverwriteMaster_o *this,
        int32_t svtId,
        int32_t svtLimitCount,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4215845 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4215845 = 1;
  }
  PK = ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&idx);
  return (ServantAnimationOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_266A024 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantAnimationOverwriteEntity_array *__fastcall ServantAnimationOverwriteMaster__GetList(
        ServantAnimationOverwriteMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  int v25; // w8
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x20
  System_Collections_IEnumerable_o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4215849 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_DataEntityBase___, v10);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_DataEntityBase__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__, v13);
    sub_B0D8A4(&ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo, v14);
    byte_4215849 = 1;
  }
  v15 = sub_B0D974(
          ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount);
  ServantAnimationOverwriteMaster___c__DisplayClass5_0___ctor(
    (ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *)v15,
    0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  *(_QWORD *)(v15 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v15 + 24) = svtId;
  *(_DWORD *)(v15 + 28) = limitCount;
  if ( isEnemy )
    v25 = 2;
  else
    v25 = 1;
  *(_DWORD *)(v15 + 32) = v25;
  list = this->fields.list;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_DataEntityBase__bool__TypeInfo,
                                                                             v23,
                                                                             v24);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_DataEntityBase__bool___ctor__);
  v28 = (System_Collections_IEnumerable_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                              (System_Func_TSource__bool__o *)v27,
                                              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_DataEntityBase___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_ServantAnimationOverwriteEntity_(
                                                               v28,
                                                               (const MethodInfo_171B5E8 *)Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
  return (ServantAnimationOverwriteEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    v29,
                                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
}


bool __fastcall ServantAnimationOverwriteMaster__IsSvtMatch(
        ServantAnimationOverwriteMaster_o *this,
        DataEntityBase_o *baseEnt,
        int32_t svtId,
        int32_t limit,
        int32_t target,
        const MethodInfo *method)
{
  __int64 v10; // x10
  ServantAnimationOverwriteEntity_c *v11; // x9
  DataEntityBase_o *v12; // x8
  int klass_high; // w9

  if ( (byte_421584A & 1) == 0 )
  {
    this = (ServantAnimationOverwriteMaster_o *)sub_B0D8A4(&ServantAnimationOverwriteEntity_TypeInfo, baseEnt);
    byte_421584A = 1;
  }
  if ( !baseEnt )
    return 0;
  v10 = *(&ServantAnimationOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&baseEnt->klass->_2.bitflags2 + 1) < (unsigned int)v10 )
    return 0;
  v11 = (ServantAnimationOverwriteEntity_c *)baseEnt->klass->_2.typeHierarchy[v10 - 1];
  v12 = v11 == ServantAnimationOverwriteEntity_TypeInfo ? baseEnt : 0LL;
  if ( v11 != ServantAnimationOverwriteEntity_TypeInfo )
    return 0;
  if ( !v12 )
    sub_B0D97C(this);
  if ( LODWORD(v12[1].klass) == svtId && ((klass_high = HIDWORD(v12[1].klass), klass_high == limit) || klass_high == -1) )
    return LODWORD(v12[2].klass) == target || LODWORD(v12[2].klass) == 3;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAnimationOverwriteMaster__TryGetEntity(
        ServantAnimationOverwriteMaster_o *this,
        ServantAnimationOverwriteEntity_o **entity,
        int32_t svtId,
        int32_t svtLimitCount,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4215846 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_4215846 = 1;
  }
  PK = ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&svtLimitCount);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
}


ServantAnimationOverwriteMaster_o *__fastcall ServantAnimationOverwriteMaster__get_Master(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_4215847 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4215847 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (ServantAnimationOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
}


void __fastcall ServantAnimationOverwriteMaster___c__DisplayClass5_0___ctor(
        ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantAnimationOverwriteMaster___c__DisplayClass5_0___GetList_b__0(
        ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *this,
        DataEntityBase_o *x,
        const MethodInfo *method)
{
  ServantAnimationOverwriteMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  return ServantAnimationOverwriteMaster__IsSvtMatch(
           _4__this,
           x,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.applyTarget,
           0LL);
}