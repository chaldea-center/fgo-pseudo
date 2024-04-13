void __fastcall ServantAnimationOverwriteMaster___ctor(
        ServantAnimationOverwriteMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9874 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9874 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    309,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
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

  if ( (byte_42E9871 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__,
      svtId,
      svtLimitCount,
      *(_QWORD *)&idx);
    byte_42E9871 = 1;
  }
  PK = ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&idx);
  return (ServantAnimationOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantAnimationOverwriteEntity_array *__fastcall ServantAnimationOverwriteMaster__GetList(
        ServantAnimationOverwriteMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isEnemy,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x23
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int v36; // w8
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x20
  System_Collections_IEnumerable_o *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_42E9875 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___, svtId, limitCount, isEnemy);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_DataEntityBase___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_DataEntityBase__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__, v21, v22, v23);
    sub_B5D5C4(&ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo, v24, v25, v26);
    byte_42E9875 = 1;
  }
  v27 = sub_B5D694(ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
  ServantAnimationOverwriteMaster___c__DisplayClass5_0___ctor(
    (ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *)v27,
    0LL);
  if ( !v27 )
    sub_B5D69C(v28, v29);
  *(_QWORD *)(v27 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)(v27 + 24) = svtId;
  *(_DWORD *)(v27 + 28) = limitCount;
  if ( isEnemy )
    v36 = 2;
  else
    v36 = 1;
  *(_DWORD *)(v27 + 32) = v36;
  list = this->fields.list;
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_DataEntityBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v27,
    Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_DataEntityBase__bool___ctor__);
  v39 = (System_Collections_IEnumerable_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                              (System_Func_TSource__bool__o *)v38,
                                              (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_DataEntityBase___);
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_ServantAnimationOverwriteEntity_(
                                                               v39,
                                                               (const MethodInfo_1C9AD2C *)Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
  return (ServantAnimationOverwriteEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                    v40,
                                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42E9876 & 1) == 0 )
  {
    this = (ServantAnimationOverwriteMaster_o *)sub_B5D5C4(
                                                  &ServantAnimationOverwriteEntity_TypeInfo,
                                                  (_DWORD)baseEnt,
                                                  svtId,
                                                  *(_QWORD *)&limit);
    byte_42E9876 = 1;
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
    sub_B5D69C(this, baseEnt);
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

  if ( (byte_42E9872 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&svtLimitCount);
    byte_42E9872 = 1;
  }
  PK = ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&svtLimitCount);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
}


ServantAnimationOverwriteMaster_o *__fastcall ServantAnimationOverwriteMaster__get_Master(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E9873 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E9873 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (ServantAnimationOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
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
    sub_B5D69C(0LL, x);
  return ServantAnimationOverwriteMaster__IsSvtMatch(
           _4__this,
           x,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.applyTarget,
           0LL);
}