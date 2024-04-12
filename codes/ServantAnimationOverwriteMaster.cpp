void __fastcall ServantAnimationOverwriteMaster___ctor(
        ServantAnimationOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B0F8E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
    byte_42B0F8E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    309,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
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

  if ( (byte_42B0F8B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
    byte_42B0F8B = 1;
  }
  PK = ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&idx);
  return (ServantAnimationOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
}


ServantAnimationOverwriteEntity_array *__fastcall ServantAnimationOverwriteMaster__GetList(
        ServantAnimationOverwriteMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w8
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20
  System_Collections_IEnumerable_o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_42B0F8F & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_DataEntityBase___);
    sub_B52984(&Method_System_Func_DataEntityBase__bool___ctor__);
    sub_B52984(&System_Func_DataEntityBase__bool__TypeInfo);
    sub_B52984(&Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__);
    sub_B52984(&ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
    byte_42B0F8F = 1;
  }
  v9 = sub_B52A54(ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
  ServantAnimationOverwriteMaster___c__DisplayClass5_0___ctor(
    (ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  if ( isEnemy )
    v18 = 2;
  else
    v18 = 1;
  *(_DWORD *)(v9 + 32) = v18;
  list = this->fields.list;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_DataEntityBase__bool___ctor__);
  v21 = (System_Collections_IEnumerable_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                              (System_Func_TSource__bool__o *)v20,
                                              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_DataEntityBase___);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_ServantAnimationOverwriteEntity_(
                                                               v21,
                                                               (const MethodInfo_1B52944 *)Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
  return (ServantAnimationOverwriteEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    v22,
                                                    (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
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

  if ( (byte_42B0F90 & 1) == 0 )
  {
    this = (ServantAnimationOverwriteMaster_o *)sub_B52984(&ServantAnimationOverwriteEntity_TypeInfo);
    byte_42B0F90 = 1;
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
    sub_B52A5C(this, baseEnt);
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

  if ( (byte_42B0F8C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
    byte_42B0F8C = 1;
  }
  PK = ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&svtLimitCount);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
}


ServantAnimationOverwriteMaster_o *__fastcall ServantAnimationOverwriteMaster__get_Master(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42B0F8D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0F8D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return (ServantAnimationOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
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
    sub_B52A5C(0LL, x);
  return ServantAnimationOverwriteMaster__IsSvtMatch(
           _4__this,
           x,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.applyTarget,
           0LL);
}