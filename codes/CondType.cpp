void CondType___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__object__o *v8; // x19
  struct CondType_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct CondType_StaticFields *v16; // x8

  if ( (byte_596F664 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    byte_596F664 = 1;
  }
  static_fields = CondType_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_DEVIDER = 0x6400000064LL;
  static_fields->TARGET_PARAM_NUM = 2;
  static_fields->uQuestMst = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->uQuestMst, 0, v1, v2, v3, v4, v5, v6);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v9 = CondType_TypeInfo->static_fields;
  v9->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->cachedServantEquipIdStrDic,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = CondType_TypeInfo->static_fields;
  *(_OWORD *)&v16->lastUserId = xmmword_E9CCE0;
  *(_QWORD *)&v16->favoriteServantIdOverride = -1;
}


void CondType___ctor(CondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType__CheckAbove(int32_t condValue, int32_t compValue, const MethodInfo *method)
{
  return condValue <= compValue;
}


bool CondType__CheckBelow(int32_t condValue, int32_t compValue, const MethodInfo *method)
{
  return condValue >= compValue;
}


bool CondType__CheckEqual(int32_t condValue, int32_t compValue, const MethodInfo *method)
{
  return condValue == compValue;
}


UserQuestEntity_o *CondType__CheckGroupMaterialQuest(
        UserQuestEntity_o *userQuestEntity,
        int32_t condQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x19
  QuestScriptMaterialNextMaster_o *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  QuestScriptMaterialNextMaster_o *v14; // x20
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x22
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  UserQuestEntity_o *v20; // x24
  UserQuestEntity_o *IncludedGroupQuest; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  CondType___c_c *v24; // x8
  UserQuestEntity_o *v25; // x23
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__32_1; // x25
  Il2CppObject *v28; // x26
  struct CondType___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x27
  int32_t questId; // w25
  int32_t questPhase; // w26
  QuestScriptMaterialNextMaster_c *updatedAt; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x22
  System_Func_object__bool__o *v44; // x20
  CondType___c_c *v46; // x0
  struct CondType___c_StaticFields *v47; // x8
  System_Func_object__bool__o *_9__32_2; // x24
  Il2CppObject *v49; // x25
  struct CondType___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  CondType___c_c *v57; // x0
  struct CondType___c_StaticFields *v58; // x8
  System_Func_object__bool__o *_9__32_4; // x21
  Il2CppObject *v60; // x25
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct CondType___c_StaticFields *v67; // x0
  MissionNaviTransitionBoardItem_o *p__9__32_4; // x0
  CondType___c_c *v69; // x0
  struct CondType___c_StaticFields *v70; // x8
  Il2CppObject *v71; // x25
  struct CondType___c_StaticFields *v72; // x0
  Il2CppObject *v73; // x0

  if ( (byte_596F59A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_UserQuestEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____91752872);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
    sub_2213A60(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_2213A60(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_CondType___c__CheckGroupMaterialQuest_b__32_1__);
    sub_2213A60(&Method_CondType___c__CheckGroupMaterialQuest_b__32_2__);
    sub_2213A60(&Method_CondType___c__CheckGroupMaterialQuest_b__32_3__);
    sub_2213A60(&Method_CondType___c__CheckGroupMaterialQuest_b__32_4__);
    sub_2213A60(&Method_CondType___c__DisplayClass32_0__CheckGroupMaterialQuest_b__0__);
    sub_2213A60(&CondType___c__DisplayClass32_0_TypeInfo);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F59A = 1;
  }
  v7 = sub_2213CCC(CondType___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_60;
  *(_DWORD *)(v7 + 16) = condQuestId;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v9, v10);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(0);
  if ( userQuestEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
    Master_object = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( Master_object )
    {
      v14 = Master_object;
      IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(Master_object, *(_DWORD *)(v7 + 16), 0);
      SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                       v14,
                                       IncludedGroups,
                                       0,
                                       0);
      v17 = QuestScriptMaterialNextMaster__GetIncludedGroups(v14, *(_DWORD *)(v7 + 16), 0);
      v20 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                   (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
      if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v18, v19);
      IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v17, 0);
      v24 = CondType___c_TypeInfo;
      v25 = IncludedGroupQuest;
      if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v22, v23);
        v24 = CondType___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__32_1 = (System_Func_object__bool__o *)static_fields->__9__32_1;
      if ( !_9__32_1 )
      {
        if ( !*(&v24->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v24, v22, v23);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__32_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__32_1, v28, Method_CondType___c__CheckGroupMaterialQuest_b__32_1__, 0);
        v29 = CondType___c_TypeInfo->static_fields;
        v29->__9__32_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v29->__9__32_1,
          (int32_t)_9__32_1,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      if ( !System_Linq_Enumerable__All_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
              (System_Func_TSource__bool__o *)_9__32_1,
              (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_UserQuestEntity___) )
      {
        if ( isCheckResetFlag )
        {
          if ( !v20 )
            return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v14, *(_DWORD *)(v7 + 16), v20, v25, 0);
          if ( !UserQuestEntity__IsResetStatus(v20, 0) )
          {
            if ( v20->fields.clearNum <= 0 )
              goto LABEL_50;
            return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v14, *(_DWORD *)(v7 + 16), v20, v25, 0);
          }
          v46 = CondType___c_TypeInfo;
          if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v9, v36);
            v46 = CondType___c_TypeInfo;
          }
          v47 = v46->static_fields;
          _9__32_2 = (System_Func_object__bool__o *)v47->__9__32_2;
          if ( !_9__32_2 )
          {
            if ( !*(&v46->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v46, v9, v36);
              v47 = CondType___c_TypeInfo->static_fields;
            }
            v49 = (Il2CppObject *)v47->__9;
            _9__32_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserQuestEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__32_2, v49, Method_CondType___c__CheckGroupMaterialQuest_b__32_2__, 0);
            v50 = CondType___c_TypeInfo->static_fields;
            v50->__9__32_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_2;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v50->__9__32_2,
              (int32_t)_9__32_2,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56);
          }
          v20 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                       (System_Func_TSource__bool__o *)_9__32_2,
                                       (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____91752872);
        }
        if ( !v20 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v14, *(_DWORD *)(v7 + 16), v20, v25, 0);
LABEL_40:
        if ( v20->fields.clearNum <= 0 )
        {
          if ( !isCheckResetFlag )
          {
            v57 = CondType___c_TypeInfo;
            if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v9, v36);
              v57 = CondType___c_TypeInfo;
            }
            v58 = v57->static_fields;
            _9__32_4 = (System_Func_object__bool__o *)v58->__9__32_4;
            if ( _9__32_4 )
              goto LABEL_57;
            if ( !*(&v57->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v57, v9, v36);
              v58 = CondType___c_TypeInfo->static_fields;
            }
            v60 = (Il2CppObject *)v58->__9;
            _9__32_4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserQuestEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__32_4, v60, Method_CondType___c__CheckGroupMaterialQuest_b__32_4__, 0);
            v67 = CondType___c_TypeInfo->static_fields;
            v67->__9__32_4 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_4;
            p__9__32_4 = (MissionNaviTransitionBoardItem_o *)&v67->__9__32_4;
LABEL_56:
            sub_2213A04(p__9__32_4, (int32_t)_9__32_4, v61, v62, v63, v64, v65, v66);
LABEL_57:
            v73 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                    (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                    (System_Func_TSource__bool__o *)_9__32_4,
                    (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____91752872);
            if ( v73 )
              v20 = (UserQuestEntity_o *)v73;
            return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v14, *(_DWORD *)(v7 + 16), v20, v25, 0);
          }
LABEL_50:
          v69 = CondType___c_TypeInfo;
          if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v9, v36);
            v69 = CondType___c_TypeInfo;
          }
          v70 = v69->static_fields;
          _9__32_4 = (System_Func_object__bool__o *)v70->__9__32_3;
          if ( _9__32_4 )
            goto LABEL_57;
          if ( !*(&v69->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v69, v9, v36);
            v70 = CondType___c_TypeInfo->static_fields;
          }
          v71 = (Il2CppObject *)v70->__9;
          _9__32_4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__32_4, v71, Method_CondType___c__CheckGroupMaterialQuest_b__32_3__, 0);
          v72 = CondType___c_TypeInfo->static_fields;
          v72->__9__32_3 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_4;
          p__9__32_4 = (MissionNaviTransitionBoardItem_o *)&v72->__9__32_3;
          goto LABEL_56;
        }
        return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v14, *(_DWORD *)(v7 + 16), v20, v25, 0);
      }
      if ( !v20 )
        return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v14, *(_DWORD *)(v7 + 16), v20, v25, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v36);
      v39 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v20->fields.questId;
      questPhase = v20->fields.questPhase;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37, v38);
      Master_object = (QuestScriptMaterialNextMaster_o *)NetworkManager__getTime(0);
      if ( v39 )
      {
        Master_object = (QuestScriptMaterialNextMaster_o *)UserQuestMaster__CreateQuestClearDummyData(
                                                             (UserQuestMaster_o *)v39,
                                                             questId,
                                                             questPhase,
                                                             (int64_t)Master_object,
                                                             0);
        if ( Master_object )
        {
          updatedAt = (QuestScriptMaterialNextMaster_c *)v20->fields.updatedAt;
          v20 = (UserQuestEntity_o *)Master_object;
          Master_object[1].klass = updatedAt;
          goto LABEL_40;
        }
      }
    }
LABEL_60:
    sub_2213CDC(Master_object, v9);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0;
  v44 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass32_0__CheckGroupMaterialQuest_b__0__,
    0);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                v43,
                                (System_Func_TSource__bool__o *)v44,
                                (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____91752872);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__CompareQuestClearTime(int32_t questId, int64_t time, int32_t checkType, const MethodInfo *method)
{
  const MethodInfo *v7; // x0
  int64_t v8; // x22
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v10; // x1
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  UserQuestEntity_o *v15; // x22
  bool IsQuestClear_47284152; // w8

  if ( (byte_596F653 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F653 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, time, *(_QWORD *)&checkType);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v7 = (const MethodInfo *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, time, *(_QWORD *)&checkType);
    v7 = (const MethodInfo *)NetworkManager_TypeInfo;
  }
  v8 = *((_QWORD *)v7[2].virtualMethodPointer + 8);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, time, *(_QWORD *)&checkType);
  UserQuestMaster = CondType__GetUserQuestMaster(v7);
  if ( !UserQuestMaster )
    sub_2213CDC(0, v10);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v8, questId, 0);
  if ( EntityFromId )
  {
    v15 = EntityFromId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12, v13);
    IsQuestClear_47284152 = CondType__IsQuestClear_47284152(questId, -1, 0, v14);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_47284152 )
    {
      if ( checkType == 2 )
      {
        LOBYTE(EntityFromId) = v15->fields.updatedAt <= time;
      }
      else if ( checkType == 1 )
      {
        LOBYTE(EntityFromId) = v15->fields.updatedAt >= time;
      }
      else if ( checkType )
      {
        LOBYTE(EntityFromId) = 0;
      }
      else
      {
        LOBYTE(EntityFromId) = v15->fields.updatedAt == time;
      }
    }
  }
  return (char)EntityFromId;
}


int32_t CondType__CountAllServantCollection(
        System_Func_UserServantCollectionEntity__int__o *countFunc,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  UserServantCollectionEntity_array *Master_object; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  UserServantCollectionEntity_array *v8; // x20
  int32_t v9; // w21
  unsigned int v10; // w9
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x22
  int32_t findSum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F661 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F661 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)findSum = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = UserServantCollectionMaster__getCollectionList(
                    (UserServantCollectionMaster_o *)Master_object,
                    &findSum[1],
                    findSum,
                    0,
                    0,
                    0);
  if ( !Master_object )
    goto LABEL_19;
  max_length = Master_object->max_length;
  v8 = Master_object;
  if ( max_length )
  {
    findSum[0] = 0;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
          sub_2213CE4(Master_object);
        v11 = &v8->obj.klass + (int)v10;
        v12 = v11[4];
        if ( !v12 )
          break;
        Master_object = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(
                                                               (UserServantCollectionEntity_o *)v11[4],
                                                               0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !countFunc )
            break;
          Master_object = (UserServantCollectionEntity_array *)((__int64 (__fastcall *)(intptr_t, Il2CppClass *, intptr_t))countFunc->fields.invoke_impl)(
                                                                 countFunc->fields.method_code,
                                                                 v12,
                                                                 countFunc->fields.method);
          v9 += (int)Master_object;
        }
        LODWORD(max_length) = v8->max_length;
        v10 = ++findSum[0];
        if ( findSum[0] >= (int)max_length )
          return v9;
      }
LABEL_19:
      sub_2213CDC(Master_object, v6);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType__CountAllServantTargetSkillLvNum(int32_t skillLv, int32_t targetNum, const MethodInfo *method)
{
  int v5; // w8
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v9; // x21
  int32_t v10; // w22
  unsigned __int64 v11; // x24
  unsigned __int64 MasterName_k__BackingField_low; // x8
  UserServantCollectionMaster_c **v13; // x8
  UserServantCollectionEntity_o *v14; // x23
  int v15; // w8
  int v16; // w10
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F633 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F633 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)findSum = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetNum, method);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object
    || (Master_object = (UserServantCollectionMaster_o *)UserServantCollectionMaster__getCollectionList(
                                                           Master_object,
                                                           &findSum[1],
                                                           findSum,
                                                           0,
                                                           0,
                                                           0)) == 0 )
  {
LABEL_27:
    sub_2213CDC(Master_object, v7);
  }
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  v9 = Master_object;
  if ( MasterName_k__BackingField && (int)MasterName_k__BackingField >= 1 )
  {
    v10 = 0;
    v11 = 0;
    MasterName_k__BackingField_low = (unsigned int)Master_object->fields._MasterName_k__BackingField;
    while ( 1 )
    {
      if ( v11 >= MasterName_k__BackingField_low )
        goto LABEL_26;
      v13 = &v9->klass + v11;
      v14 = (UserServantCollectionEntity_o *)v13[4];
      if ( !v14 )
        goto LABEL_27;
      Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                         (UserServantCollectionEntity_o *)v13[4],
                                                         0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(v14, 0);
        if ( !Master_object )
          goto LABEL_27;
        v15 = (int)Master_object->fields._MasterName_k__BackingField;
        if ( v15 >= 1 )
          break;
      }
LABEL_22:
      MasterName_k__BackingField_low = LODWORD(v9->fields._MasterName_k__BackingField);
      if ( (int)++v11 >= (int)MasterName_k__BackingField_low )
        return v10;
    }
    v16 = 0;
    while ( v15 != v16 )
    {
      if ( *(&Master_object->fields.revision + v16) >= skillLv )
        ++v10;
      if ( targetNum && v10 >= targetNum )
        return v10;
      if ( (v15 & ~(v15 >> 31)) == ++v16 )
        goto LABEL_22;
    }
LABEL_26:
    sub_2213CE4(Master_object);
  }
  return 0;
}


int32_t CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_c *v7; // x0
  int v8; // w8
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x19
  System_Func_object__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  CondType___c_c *v15; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__199_1; // x20
  Il2CppObject *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct CondType___c_StaticFields *v25; // x0
  MissionNaviTransitionBoardItem_o *p__9__199_1; // x0
  CondType___c_c *v27; // x0
  struct CondType___c_StaticFields *v28; // x8
  Il2CppObject *v29; // x21
  struct CondType___c_StaticFields *v30; // x0

  if ( (byte_596F639 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    sub_2213A60(&System_Func_UserClassBoardSquareEntity__int__TypeInfo);
    sub_2213A60(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    sub_2213A60(&Method_CondType___c__CountClassBoardSquareReleased_b__199_1__);
    sub_2213A60(&Method_CondType___c__CountClassBoardSquareReleased_b__199_2__);
    sub_2213A60(&Method_CondType___c__DisplayClass199_0__CountClassBoardSquareReleased_b__0__);
    sub_2213A60(&CondType___c__DisplayClass199_0_TypeInfo);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F639 = 1;
  }
  v3 = sub_2213CCC(CondType___c__DisplayClass199_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_22;
  v7 = DataManager_TypeInfo;
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v3 + 16) = targetId;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
LABEL_22:
    sub_2213CDC(Master_object, v5);
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  if ( *(_DWORD *)(v3 + 16) )
  {
    v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v11,
      (Il2CppObject *)v3,
      Method_CondType___c__DisplayClass199_0__CountClassBoardSquareReleased_b__0__,
      0);
    v12 = System_Linq_Enumerable__Where_object_(
            monitor,
            (System_Func_TSource__bool__o *)v11,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v15 = CondType___c_TypeInfo;
    monitor = v12;
    if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v13, v14);
      v15 = CondType___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__199_1 = (System_Func_object__int__o *)static_fields->__9__199_1;
    if ( !_9__199_1 )
    {
      if ( !*(&v15->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v15, v13, v14);
        static_fields = CondType___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__199_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__199_1, v18, Method_CondType___c__CountClassBoardSquareReleased_b__199_1__, 0);
      v25 = CondType___c_TypeInfo->static_fields;
      v25->__9__199_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__199_1;
      p__9__199_1 = (MissionNaviTransitionBoardItem_o *)&v25->__9__199_1;
LABEL_20:
      sub_2213A04(p__9__199_1, (int32_t)_9__199_1, v19, v20, v21, v22, v23, v24);
    }
  }
  else
  {
    v27 = CondType___c_TypeInfo;
    if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v5, v9);
      v27 = CondType___c_TypeInfo;
    }
    v28 = v27->static_fields;
    _9__199_1 = (System_Func_object__int__o *)v28->__9__199_2;
    if ( !_9__199_1 )
    {
      if ( !*(&v27->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v27, v5, v9);
        v28 = CondType___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)v28->__9;
      _9__199_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__199_1, v29, Method_CondType___c__CountClassBoardSquareReleased_b__199_2__, 0);
      v30 = CondType___c_TypeInfo->static_fields;
      v30->__9__199_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__199_1;
      p__9__199_1 = (MissionNaviTransitionBoardItem_o *)&v30->__9__199_2;
      goto LABEL_20;
    }
  }
  return System_Linq_Enumerable__Sum_object_(
           monitor,
           (System_Func_TSource__int__o *)_9__199_1,
           (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
}


int32_t CondType__CountCommonClassServantCollection(
        int32_t classId,
        System_Func_UserServantCollectionEntity__int__o *countFunc,
        const MethodInfo *method)
{
  int v5; // w8
  UserServantCollectionEntity_array *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x2
  UserServantCollectionEntity_array *v11; // x21
  int32_t max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w9
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x24
  __int64 v18; // x2
  const char *namespaze; // x25
  void *data; // x26
  Il2CppObject *v22; // [xsp+0h] [xbp-70h] BYREF
  int32_t findSum; // [xsp+8h] [xbp-68h] BYREF
  int32_t getSum; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_596F636 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596F636 = 1;
  }
  entity = 0;
  getSum = 0;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  findSum = 0;
  v22 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, countFunc, method);
  Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         classId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
    Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !Master_object )
      goto LABEL_31;
    Master_object = UserServantCollectionMaster__getCollectionList(
                      (UserServantCollectionMaster_o *)Master_object,
                      &getSum,
                      &findSum,
                      0,
                      0,
                      0);
    if ( !Master_object )
      goto LABEL_31;
    v11 = Master_object;
    if ( Master_object->max_length )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v10);
      Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
      max_length = v11->max_length;
      findSum = 0;
      if ( max_length >= 1 )
      {
        v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          if ( v15 >= (unsigned int)max_length )
            sub_2213CE4(Master_object);
          v16 = &v11->obj.klass + v15;
          v17 = v16[4];
          if ( !v17 )
            break;
          Master_object = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(
                                                                 (UserServantCollectionEntity_o *)v16[4],
                                                                 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            namespaze = v17->_1.namespaze;
            data = v17->_1.byval_arg.data;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v18);
            *(_QWORD *)&v26.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v26.fields.fakeValue = data;
            Master_object = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                   v26,
                                                                   0);
            if ( !v13 )
              break;
            Master_object = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   v13,
                                                                   &v22,
                                                                   (int32_t)Master_object,
                                                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              if ( !v22 )
                break;
              if ( LODWORD(v22[5].klass) == classId )
              {
                if ( !countFunc )
                  break;
                Master_object = (UserServantCollectionEntity_array *)((__int64 (__fastcall *)(intptr_t, Il2CppClass *, intptr_t))countFunc->fields.invoke_impl)(
                                                                       countFunc->fields.method_code,
                                                                       v17,
                                                                       countFunc->fields.method);
                v14 += (int)Master_object;
              }
            }
          }
          max_length = v11->max_length;
          v15 = ++findSum;
          if ( findSum >= max_length )
            return v14;
        }
LABEL_31:
        sub_2213CDC(Master_object, v7);
      }
    }
  }
  return 0;
}


int32_t CondType__CountEquipRarityLevelNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  CondType_c *v4; // x0
  int v5; // w8
  int64_t lastUserId; // x23
  NetworkManager_c *v7; // x0
  CondType_c *v8; // x0
  Il2CppObject *cachedServantEquipIdStrDic; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_c *v12; // x0
  __int64 v13; // x2
  UserServantCollectionMaster_o *v14; // x20
  System_Collections_Generic_List_object__o *ServantEquipCollectionList; // x23
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v17; // x21
  int v18; // w29
  int v19; // w19
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *current; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x23
  Il2CppClass *v30; // x24
  void *v31; // x25
  __int64 v32; // x0
  ServantLimitEntity_o *v33; // x24
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // [xsp+0h] [xbp-B0h]
  int32_t v39; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_596F621 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F621 = 1;
  }
  v4 = CondType_TypeInfo;
  memset(&v42, 0, sizeof(v42));
  v5 = *(&CondType_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
    v4 = CondType_TypeInfo;
  }
  lastUserId = v4->static_fields->lastUserId;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v7 = NetworkManager_TypeInfo;
  }
  if ( lastUserId != v7->static_fields->userIdNumber )
  {
    v8 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
      v8 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (Il2CppObject *)v8->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_57:
      sub_2213CDC(cachedServantEquipIdStrDic, method);
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)cachedServantEquipIdStrDic,
      (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v12 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
      v12 = NetworkManager_TypeInfo;
    }
    CondType_TypeInfo->static_fields->lastUserId = v12->static_fields->userIdNumber;
  }
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v14 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v13);
  if ( !v14 )
    goto LABEL_57;
  ServantEquipCollectionList = (System_Collections_Generic_List_object__o *)UserServantCollectionMaster__getServantEquipCollectionList(
                                                                              v14,
                                                                              CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic,
                                                                              0);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)cachedServantEquipIdStrDic,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)cachedServantEquipIdStrDic,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_57;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)cachedServantEquipIdStrDic;
  v18 = targetId / 100;
  v19 = targetId % 100;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    ServantEquipCollectionList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v39 = 0;
  v42 = v40;
  v40.fields._list = 0;
  *(_QWORD *)&v40.fields._index = &v42;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_2213CDC(v20, v21);
    if ( LODWORD(v42.fields._current[2].monitor) == 2 )
    {
      monitor = v42.fields._current[1].monitor;
      klass = v42.fields._current[2].klass;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
      *(_QWORD *)&v43.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v43.fields.fakeValue = klass;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v43, 0);
      if ( !MasterData_object )
        sub_2213CDC(v26, (unsigned int)v26);
      v29 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              v26,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v29 )
      {
        v30 = v29[1].klass;
        v31 = v29[1].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
        *(_QWORD *)&v44.fields.currentCryptoKey = v30;
        *(_QWORD *)&v44.fields.fakeValue = v31;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
        if ( !v17 )
          sub_2213CDC(v32, (unsigned int)v32);
        v33 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v17, v32, 0, 0);
        if ( v33
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v29, 0)
          && v33->fields.rarity == v19
          && SHIDWORD(current[2].monitor) >= v18 )
        {
          if ( !v38 )
            sub_2213CDC(0, v34);
          v35 = DataMasterBase_object__object__int___TryGetEntity(
                  v38,
                  &entity,
                  (int32_t)v29[8].monitor,
                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v35 )
            goto LABEL_51;
          if ( !entity )
            sub_2213CDC(v35, v36);
          if ( HIDWORD(entity[1].klass) != 3
            || ServantEntity__get_IsSvtEquipRarityLevelNumMission((ServantEntity_o *)v29, 0) )
          {
LABEL_51:
            ++v39;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v39;
}


int32_t CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F63E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F63E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__CountGrandServantSet(int32_t targetId, int32_t targetNum, const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_c *v9; // x0
  int v10; // w8
  __int64 v11; // x2
  EventMissionConditionMaster_o *v12; // x20
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x20
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_ICollection_o *v16; // x20
  System_Func_object__bool__o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_UserServantEntity__o *UserServantEntities; // x20
  System_Func_object__bool__o *v21; // x21
  int32_t result; // w0

  if ( (byte_596F656 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_UserServantEntity____91751128);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventMissionConditionEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventMissionConditionEntity___);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_EventMissionConditionEntity__bool__TypeInfo);
    sub_2213A60(&Method_CondType___c__DisplayClass230_0__CountGrandServantSet_b__0__);
    sub_2213A60(&Method_CondType___c__DisplayClass230_0__CountGrandServantSet_b__1__);
    sub_2213A60(&Method_CondType___c__DisplayClass230_0__CountGrandServantSet_b__2__);
    sub_2213A60(&CondType___c__DisplayClass230_0_TypeInfo);
    byte_596F656 = 1;
  }
  v5 = sub_2213CCC(CondType___c__DisplayClass230_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  v9 = DataManager_TypeInfo;
  v10 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v5 + 16) = targetId;
  *(_DWORD *)(v5 + 20) = targetNum;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v9, v7, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v12 = (EventMissionConditionMaster_o *)Master_object;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v11);
  if ( !v12 )
    goto LABEL_18;
  EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                    v12,
                                    CondType_TypeInfo->static_fields->EventId,
                                    258,
                                    0);
  v14 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventMissionConditionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass230_0__CountGrandServantSet_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventMissionConditionEntity___);
  v16 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v15,
                                              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
  if ( BasicHelper__IsNullOrEmpty(v16, 0) )
    return 0;
  v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventMissionConditionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass230_0__CountGrandServantSet_b__1__,
    0);
  if ( !System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventMissionConditionEntity___) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
LABEL_18:
    sub_2213CDC(Master_object, v7);
  UserServantEntities = UserServantGrandMaster__GetUserServantEntities((UserServantGrandMaster_o *)Master_object, 0);
  v21 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass230_0__CountGrandServantSet_b__2__,
    0);
  result = System_Linq_Enumerable__Count_object__59223900(
             (System_Collections_Generic_IEnumerable_TSource__o *)UserServantEntities,
             (System_Func_TSource__bool__o *)v21,
             (const MethodInfo_387AF5C *)Method_System_Linq_Enumerable_Count_UserServantEntity____91751128);
  if ( result >= *(_DWORD *)(v5 + 20) )
    return *(_DWORD *)(v5 + 20);
  return result;
}


int32_t CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  __int64 v2; // x2
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // x8
  UserEventRandomMissionMaster_o *v7; // x20
  int32_t v8; // w21
  unsigned __int64 v9; // x22

  if ( (byte_596F62B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F62B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_16;
  max_length = missionIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = Master_object;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_2213CE4(Master_object);
      if ( !v7 )
        break;
      Master_object = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                          v7,
                                                          missionIds->m_Items[v9],
                                                          0);
      if ( Master_object )
        v8 += *(&Master_object->fields.revision + 1);
      LODWORD(max_length) = missionIds->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        return v8;
    }
LABEL_16:
    sub_2213CDC(Master_object, v5);
  }
  return 0;
}


int32_t CondType__CountServantAtkReachNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Func_object__int__o *v6; // x19
  const MethodInfo *v7; // x1
  __int64 v8; // x2

  if ( (byte_596F660 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_2213A60(&Method_CondType___c__DisplayClass243_0__CountServantAtkReachNum_g__CountFunc_0__);
    sub_2213A60(&CondType___c__DisplayClass243_0_TypeInfo);
    byte_596F660 = 1;
  }
  v3 = sub_2213CCC(CondType___c__DisplayClass243_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_DWORD *)(v3 + 16) = targetId;
  v6 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v6,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass243_0__CountServantAtkReachNum_g__CountFunc_0__,
    0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
  return CondType__CountAllServantCollection((System_Func_UserServantCollectionEntity__int__o *)v6, v7);
}


int32_t CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596F61B & 1) == 0 )
  {
    sub_2213A60(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_163_0__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_596F61B = 1;
  }
  v3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_163_0__, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4, v5);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v5);
}


int32_t CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596F61E & 1) == 0 )
  {
    sub_2213A60(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_166_0__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_596F61E = 1;
  }
  v3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_166_0__, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4, v5);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v5);
}


int32_t CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596F619 & 1) == 0 )
  {
    sub_2213A60(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_161_0__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_596F619 = 1;
  }
  v3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_161_0__, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4, v5);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v5);
}


int32_t CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596F635 & 1) == 0 )
  {
    sub_2213A60(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_194_0__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_596F635 = 1;
  }
  v3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_194_0__, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4, v5);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v5);
}


int32_t CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  System_Func_UserServantCollectionEntity__int__c *v7; // x0
  System_Func_object__int__o *v8; // x19
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_596F61A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_2213A60(&Method_CondType___c__DisplayClass162_0__CountServantFriendShipClassNum_g__CountFunc_0__);
    sub_2213A60(&CondType___c__DisplayClass162_0_TypeInfo);
    byte_596F61A = 1;
  }
  v3 = sub_2213CCC(CondType___c__DisplayClass162_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  v6 = targetId / 100;
  v7 = System_Func_UserServantCollectionEntity__int__TypeInfo;
  *(_DWORD *)(v3 + 16) = targetId % 100;
  v8 = (System_Func_object__int__o *)sub_2213CCC(v7);
  System_Func_object__int____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass162_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
  return CondType__CountCommonClassServantCollection(v6, (System_Func_UserServantCollectionEntity__int__o *)v8, v10);
}


int32_t CondType__CountServantHpReachNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Func_object__int__o *v6; // x19
  const MethodInfo *v7; // x1
  __int64 v8; // x2

  if ( (byte_596F65F & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_2213A60(&Method_CondType___c__DisplayClass242_0__CountServantHpReachNum_g__CountFunc_0__);
    sub_2213A60(&CondType___c__DisplayClass242_0_TypeInfo);
    byte_596F65F = 1;
  }
  v3 = sub_2213CCC(CondType___c__DisplayClass242_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_DWORD *)(v3 + 16) = targetId;
  v6 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v6,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass242_0__CountServantHpReachNum_g__CountFunc_0__,
    0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
  return CondType__CountAllServantCollection((System_Func_UserServantCollectionEntity__int__o *)v6, v7);
}


int32_t CondType__CountServantLevelClassNum(int32_t classId, int32_t level, const MethodInfo *method)
{
  UserServantCollectionEntity_array *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_array *v7; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x23
  __int64 v10; // x26
  int32_t v11; // w22
  UserServantCollectionEntity_o *v12; // x24
  __int64 v13; // x2
  __int64 v14; // x24
  __int64 v15; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_596F61D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F61D = 1;
  }
  *(_QWORD *)findSum = 0;
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         classId,
         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0;
    Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = UserServantCollectionMaster__getCollectionList(
                 (UserServantCollectionMaster_o *)Instance,
                 &findSum[1],
                 findSum,
                 0,
                 0,
                 0);
    if ( !Instance )
      goto LABEL_27;
    v7 = Instance;
    if ( Instance->max_length )
    {
      Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      max_length = v7->max_length;
      if ( max_length >= 1 )
      {
        v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= max_length )
            sub_2213CE4(Instance);
          v12 = v7->m_Items[v10];
          if ( !v12 )
            break;
          Instance = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(v7->m_Items[v10], 0);
          if ( ((unsigned __int8)Instance & 1) != 0 && v12->fields.maxLv >= level )
          {
            v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
            v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v13);
            *(_QWORD *)&v18.fields.currentCryptoKey = v15;
            *(_QWORD *)&v18.fields.fakeValue = v14;
            Instance = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                              v18,
                                                              0);
            if ( !v9 )
              break;
            Instance = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                              v9,
                                                              (int32_t)Instance,
                                                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->m_Items[6]) == classId )
              ++v11;
          }
          max_length = v7->max_length;
          if ( (int)++v10 >= max_length )
            return v11;
        }
LABEL_27:
        sub_2213CDC(Instance, v6);
      }
    }
  }
  return 0;
}


int32_t CondType__CountServantLevelIdNum(int32_t sarvantId, int32_t level, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  DataManager_o *v9; // x20

  if ( (byte_596F61F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F61F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                      (UserServantCollectionMaster_o *)MasterData_object,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      sarvantId,
                                      0)) == 0 )
  {
LABEL_15:
    sub_2213CDC(Instance, v6);
  }
  v9 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0)
      && SHIDWORD(v9->fields.datalist) >= level;
}


int32_t CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int v5; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  __int64 v9; // x26
  int32_t v10; // w23
  UserServantCollectionEntity_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x24
  __int64 v14; // x25
  int v16; // [xsp+4h] [xbp-6Ch]
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_596F618 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F618 = 1;
  }
  *(_QWORD *)findSum = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  v5 = targetId / 100;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         targetId / 100,
         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_27;
    max_length = CollectionList->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0;
        v10 = 0;
        v16 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= (unsigned int)max_length )
            sub_2213CE4(Instance);
          v11 = CollectionList->m_Items[v9];
          if ( !v11 )
            break;
          Instance = (Il2CppObject *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v9], 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
            v14 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v12);
            *(_QWORD *)&v18.fields.currentCryptoKey = v13;
            *(_QWORD *)&v18.fields.fakeValue = v14;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
            if ( !v8 )
              break;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v8,
                         (int32_t)Instance,
                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance[5].klass) == v5 && v11->fields.maxLimitCount >= v16 )
              ++v10;
          }
          LODWORD(max_length) = CollectionList->max_length;
          if ( (int)++v9 >= (int)max_length )
            return v10;
        }
LABEL_27:
        sub_2213CDC(Instance, v4);
      }
    }
  }
  return 0;
}


int32_t CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  System_Func_UserServantCollectionEntity__int__c *v7; // x0
  System_Func_object__int__o *v8; // x19
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_596F634 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_2213A60(&Method_CondType___c__DisplayClass193_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__);
    sub_2213A60(&CondType___c__DisplayClass193_0_TypeInfo);
    byte_596F634 = 1;
  }
  v3 = sub_2213CCC(CondType___c__DisplayClass193_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  v6 = targetId / 100;
  v7 = System_Func_UserServantCollectionEntity__int__TypeInfo;
  *(_DWORD *)(v3 + 16) = targetId % 100;
  v8 = (System_Func_object__int__o *)sub_2213CCC(v7);
  System_Func_object__int____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass193_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
  return CondType__CountCommonClassServantCollection(v6, (System_Func_UserServantCollectionEntity__int__o *)v8, v10);
}


int32_t CondType__CountTargetParamMatchFunction(
        System_Int32_array *targetParam,
        CondType_CountDelegate_o *func,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  CondType_c *max_length; // x8
  int32_t v7; // w21
  int v8; // w24
  __int64 v9; // x2
  int v10; // w22
  int32_t TARGET_PARAM_NUM; // w9

  v4 = targetParam;
  if ( (byte_596F61C & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_2213A60(&CondType_TypeInfo);
    byte_596F61C = 1;
  }
  if ( !v4 )
    goto LABEL_21;
  max_length = (CondType_c *)v4->max_length;
  if ( max_length )
  {
    targetParam = (System_Int32_array *)CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, func, method);
      targetParam = (System_Int32_array *)CondType_TypeInfo;
      max_length = (CondType_c *)v4->max_length;
    }
    if ( (int)max_length % *(_DWORD *)(*(_QWORD *)&targetParam->m_Items[38] + 8LL) != 1 && (int)max_length >= 1 )
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)max_length || v8 + 1 >= (unsigned int)max_length )
          sub_2213CE4(targetParam);
        if ( !func )
          break;
        targetParam = (System_Int32_array *)((__int64 (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))func->fields.invoke_impl)(
                                              func->fields.method_code,
                                              (unsigned int)v4->m_Items[v8],
                                              (unsigned int)v4->m_Items[v8 + 1],
                                              func->fields.method);
        max_length = CondType_TypeInfo;
        v10 = (int)targetParam;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, func, v9);
          max_length = CondType_TypeInfo;
        }
        v7 += v10;
        TARGET_PARAM_NUM = max_length->static_fields->TARGET_PARAM_NUM;
        LODWORD(max_length) = v4->max_length;
        v8 += TARGET_PARAM_NUM;
        if ( v8 >= (int)max_length )
          return v7;
      }
LABEL_21:
      sub_2213CDC(targetParam, func);
    }
  }
  return 0;
}


int32_t CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  UserEventBoardGameTokenEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w9
  int v6; // w10
  int32_t v7; // w8
  UserEventBoardGameTokenEntity_o *v8; // x12

  if ( (byte_596F612 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F612 = 1;
  }
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (UserEventBoardGameTokenEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_50043036((UserEventBoardGameTokenMaster_o *)Instance, 0);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    max_length = Instance->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        if ( max_length == v6 )
          sub_2213CE4(Instance);
        v8 = Instance->m_Items[v6];
        if ( !v8 )
          break;
        ++v6;
        if ( v8->fields.tokenId == tokenId )
          ++v7;
        if ( (max_length & ~(max_length >> 31)) == v6 )
          return v7;
      }
LABEL_19:
      sub_2213CDC(Instance, v4);
    }
    return 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_19;
    return Instance->max_length;
  }
}


// local variable allocation has failed, the output may be wrong!
bool CondType__GetCompareCheckType(int32_t checkType, int32_t condValue, int32_t compValue, const MethodInfo *method)
{
  if ( (byte_596F587 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F587 = 1;
  }
  if ( checkType == 2 )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, *(_QWORD *)&compValue);
    return condValue >= compValue;
  }
  else if ( checkType == 1 )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, *(_QWORD *)&compValue);
    return condValue <= compValue;
  }
  else if ( checkType )
  {
    return 0;
  }
  else
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, *(_QWORD *)&compValue);
    return condValue == compValue;
  }
}


int64_t CondType__GetEventTotalPoint(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20

  if ( (byte_596F600 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F600 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_2213CDC(Instance, v4);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventId,
           -1,
           0);
}


int32_t CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F642 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F642 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F63C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F63C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F640 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F640 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *v8; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596F591 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_596F591 = 1;
  }
  entity = 0;
  v8 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                targetId,
                                (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    if ( LODWORD(entity[3].klass) == 35 )
    {
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0);
LABEL_23:
      sub_2213CDC(Instance, v4);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_23;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &v8,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v8 )
    goto LABEL_23;
  return v8->fields.num;
}


int32_t CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  System_Int32_array *Instance; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  EventMissionMaster_o *v8; // x19
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v11; // x19
  unsigned __int64 v12; // x23
  int32_t v13; // w21

  if ( (byte_596F5C8 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C8 = 1;
  }
  if ( condId )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v8 = (EventMissionMaster_o *)Instance;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
    if ( !v8
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v8, CondType_TypeInfo->static_fields->EventId, 0)) == 0 )
    {
LABEL_22:
      sub_2213CDC(Instance, v6);
    }
    max_length = Instance->max_length;
    v11 = Instance;
    if ( (int)max_length < 1 )
    {
      return 0;
    }
    else
    {
      v4 = 0;
      v12 = 0;
      do
      {
        if ( v12 >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        v13 = v11->m_Items[v12];
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v9);
        Instance = (System_Int32_array *)CondType__IsMissionClear(v13, v6);
        LODWORD(max_length) = v11->max_length;
        ++v12;
        v4 += (unsigned __int8)Instance & 1;
      }
      while ( (__int64)v12 < (int)max_length );
    }
  }
  return v4;
}


int32_t CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  System_Int32_array *Instance; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  EventMissionMaster_o *v8; // x19
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v11; // x19
  unsigned __int64 v12; // x23
  int32_t v13; // w21

  if ( (byte_596F5C9 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C9 = 1;
  }
  if ( condId )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v8 = (EventMissionMaster_o *)Instance;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
    if ( !v8
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v8, CondType_TypeInfo->static_fields->EventId, 0)) == 0 )
    {
LABEL_22:
      sub_2213CDC(Instance, v6);
    }
    max_length = Instance->max_length;
    v11 = Instance;
    if ( (int)max_length < 1 )
    {
      return 0;
    }
    else
    {
      v4 = 0;
      v12 = 0;
      do
      {
        if ( v12 >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        v13 = v11->m_Items[v12];
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v9);
        Instance = (System_Int32_array *)CondType__IsMissionAchive(v13, v6);
        LODWORD(max_length) = v11->max_length;
        ++v12;
        v4 += (unsigned __int8)Instance & 1;
      }
      while ( (__int64)v12 < (int)max_length );
    }
  }
  return v4;
}


int32_t CondType__GetNegativeSideCond(int32_t cond, const MethodInfo *method)
{
  unsigned int v2; // w8

  if ( cond <= 8 )
  {
    if ( cond == 1 )
    {
      return 36;
    }
    else if ( cond == 8 )
    {
      return 38;
    }
  }
  else
  {
    v2 = cond - 26;
    if ( (unsigned int)(cond - 26) < 0x16 && ((0x30DE41u >> v2) & 1) != 0 )
      return dword_EDA000[v2];
  }
  return cond;
}


int32_t CondType__GetNotQuestGoupClearCount(
        int32_t questId,
        int32_t groupId,
        System_Int32_array **sameGroupQuestIds,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x24
  UserQuestMaster_o *v12; // x21
  System_Int32_array *QuestIdListByGroupId; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x25
  il2cpp_array_size_t max_length; // x8
  int32_t v24; // w22
  unsigned __int64 v25; // x26
  int32_t v26; // w24

  if ( (byte_596F5D1 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5D1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_object)
    || (v12 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)MasterData_object,
                                 groupId,
                                 2,
                                 0),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)sameGroupQuestIds,
          (int32_t)QuestIdListByGroupId,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (v22 = *sameGroupQuestIds) == 0) )
  {
LABEL_30:
    sub_2213CDC(Instance, v10);
  }
  max_length = v22->max_length;
  if ( (int)max_length >= 1 )
  {
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v26 = v22->m_Items[v25];
      if ( v26 != questId )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10, v20);
        Instance = (DataManager_o *)CondType__IsQuestClear_47284152(v26, -1, isCheckResetFlag, v21);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ++v24;
        }
        else
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v20);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v20);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v12 )
            goto LABEL_30;
          Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                        v12,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        v26,
                                        0);
          if ( Instance )
          {
            Instance = (DataManager_o *)UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0);
            if ( (int)Instance > 0 )
              ++v24;
          }
        }
      }
      LODWORD(max_length) = v22->max_length;
      if ( (__int64)++v25 >= (int)max_length )
        return v24;
    }
  }
  return 0;
}


int32_t CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F5D5 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5D5 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  return NetworkManager__getTime(0) >= condVal;
}


int32_t CondType__GetNumMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5C6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C6 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_18;
  Instance = (DataManager_o *)UserEventMissionCondDetailMaster__TryGetEntity(
                                (UserEventMissionCondDetailMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                condId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_18:
    sub_2213CDC(Instance, v6);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t CondType__GetOpenTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_596F5D4 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5D4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1, v2);
  return NetworkManager__getTime(0);
}


// local variable allocation has failed, the output may be wrong!
int64_t CondType__GetProgressNum(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        int32_t eventId,
        const MethodInfo *method)
{
  __n128 inited; // q0
  int32_t v6; // w21
  CondType_c *v10; // x0
  int64_t v12; // x8
  int64_t result; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x4
  CondType_c *v18; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  v6 = eventId;
  if ( (byte_596F598 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F598 = 1;
  }
  v10 = CondType_TypeInfo;
  sameGroupQuestIds = 0;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
  {
    inited = j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
    v10 = CondType_TypeInfo;
  }
  v10->static_fields->EventId = v6;
  if ( condType > 95 )
  {
    if ( (unsigned int)condType <= 0xBF )
    {
      if ( condType == 127 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetBoardGameTokenGetNum(targetId, *(const MethodInfo **)&targetId);
      }
      v12 = 0;
      if ( (unsigned __int8)condType <= 0xB5u )
      {
        if ( (unsigned __int8)condType > 0xADu )
        {
          if ( (unsigned __int8)condType > 0xB3u )
          {
            if ( (unsigned __int8)condType == 180 )
            {
              if ( !*(&v10->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
              return CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
            }
            else
            {
              if ( (unsigned __int8)condType != 181 )
                return v12;
              if ( !*(&v10->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
              return CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
            }
          }
          else if ( (unsigned __int8)condType == 174 )
          {
            if ( !*(&v10->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
            return CondType__CountAllServantTargetSkillLvNum(targetId, condValue, (const MethodInfo *)condValue);
          }
          else
          {
            if ( (unsigned __int8)condType != 178 )
              return v12;
            if ( !*(&v10->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
            return CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
          }
        }
        else if ( (unsigned __int8)condType > 0x8Cu )
        {
          if ( (unsigned __int8)condType == 141 )
          {
            if ( !*(&v10->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
            return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
          }
          else
          {
            if ( (unsigned __int8)condType != 142 )
              return v12;
            if ( !*(&v10->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
            return CondType__LatestMainScenarioWarClear((const MethodInfo *)v10);
          }
        }
        else
        {
          if ( (unsigned __int8)condType != 136 )
          {
            if ( (unsigned __int8)condType == 139 )
            {
              if ( !*(&v10->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
              return CondType__TimeLimitRaidDead(v6, targetId, (const MethodInfo *)condValue);
            }
            return v12;
          }
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
        }
      }
      if ( (unsigned __int8)condType > 0xBBu )
      {
        if ( (unsigned __int8)condType > 0xBDu )
        {
          if ( (unsigned __int8)condType == 190 )
          {
            if ( !*(&v10->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
            return CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&targetId);
          }
          else
          {
            if ( !*(&v10->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
            return CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&targetId);
          }
        }
        else if ( (unsigned __int8)condType == 188 )
        {
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&targetId);
        }
        else
        {
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__CountExchangeServantMaxLimit(targetId, *(const MethodInfo **)&targetId);
        }
      }
      if ( (unsigned __int8)condType > 0xB7u )
      {
        if ( (unsigned __int8)condType == 184 )
        {
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
        }
        else
        {
          if ( (unsigned __int8)condType != 187 )
            return v12;
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
        }
      }
      if ( (unsigned __int8)condType == 182 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      }
      if ( (unsigned __int8)condType == 183 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      }
    }
    else
    {
      if ( (unsigned int)condType <= 0x102 )
      {
        if ( condType == 219 )
        {
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
        }
        if ( condType == 258 )
        {
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__CountGrandServantSet(targetId, condValue, (const MethodInfo *)condValue);
        }
      }
      else
      {
        if ( condType == 289 )
        {
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__CountServantHpReachNum(targetId, *(const MethodInfo **)&targetId);
        }
        if ( condType == 290 )
        {
          if ( !*(&v10->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          return CondType__CountServantAtkReachNum(targetId, *(const MethodInfo **)&targetId);
        }
      }
      return 0;
    }
    return v12;
  }
  if ( condType <= 67 )
  {
    v12 = 1;
    switch ( condType )
    {
      case 0:
        return v12;
      case 1:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetQuestClearCount(targetId, *(const MethodInfo **)&targetId);
      case 2:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&targetId);
      case 6:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetSvtLv(targetId, condValue, (const MethodInfo *)condValue);
      case 7:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetSvtLimitCnt(targetId, condValue, (const MethodInfo *)condValue);
      case 8:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return (unsigned int)CondType__GetSvtGetNum(targetId, *(const MethodInfo **)&targetId);
      case 9:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetSvtFriendShip(targetId, condValue, (const MethodInfo *)condValue);
      case 12:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        result = CondType__GetOpenTime((const MethodInfo *)v10);
        break;
      case 22:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetNumMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      case 23:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetMIssionClearNum(targetId, *(const MethodInfo **)&targetId);
      case 24:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetMissionAchiveNum(targetId, *(const MethodInfo **)&targetId);
      case 25:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      case 26:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetNotQuestGoupClearCount(0, targetId, &sameGroupQuestIds, 0, method);
      case 28:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__checkCondTypeRaidAlive(targetId, condValue, 0, *(const MethodInfo **)&eventId);
      case 29:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        result = CondType__GetRaidDamage(targetId, condValue, (const MethodInfo *)condValue);
        break;
      case 30:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetQuestChallengeNum(targetId, condValue, (const MethodInfo *)condValue);
      case 32:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetQuestGroupClearCount(0, targetId, 0, *(const MethodInfo **)&eventId);
      case 33:
        if ( !*(&v10->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
          v6 = CondType_TypeInfo->static_fields->EventId;
        }
        result = CondType__GetSuperBossDamage(targetId, condValue, v6, *(const MethodInfo **)&eventId);
        break;
      case 34:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        result = CondType__GetSuperBossDamageAll(targetId, condValue, (const MethodInfo *)condValue);
        break;
      case 35:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__IsPurchaseShop(targetId, 1, (const MethodInfo *)condValue);
      case 40:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
      case 46:
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          inited = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId, condValue);
        sub_2417958(0, *(long double *)&inited);
        v18 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15, v16);
        return CondType__GetQuestClearPhaseCount((int64_t)v18, targetId, -1, 0, v17);
      case 67:
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
      default:
        return 0;
    }
  }
  else
  {
    v12 = 0;
    if ( condType > 92 )
    {
      if ( condType == 93 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetServantHavingLimitMaxCount(targetId, *(const MethodInfo **)&targetId);
      }
      if ( condType == 95 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
        return CondType__GetSvtEquipFriendShip((const MethodInfo *)v10);
      }
      return v12;
    }
    if ( condType == 71 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
      return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
    }
    if ( condType != 85 )
      return v12;
    if ( !*(&v10->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&targetId, condValue);
    return CondType__GetEventTotalPoint(v6, *(const MethodInfo **)&targetId);
  }
  return result;
}


int64_t CondType__GetProgressNumByTargetIds(int32_t condType, System_Int32_array *targetIds, const MethodInfo *method)
{
  int64_t result; // x0
  CondType___c_c *v6; // x0
  struct CondType___c_StaticFields *v7; // x8
  System_Func_int__int__int__o *_9__30_1; // x20
  Il2CppObject *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct CondType___c_StaticFields *v16; // x0
  MissionNaviTransitionBoardItem_o *p__9__30_1; // x0
  CondType_CountDelegate_o *v18; // x0
  const MethodInfo *v19; // x3
  intptr_t *v20; // x8
  CondType___c_c *v21; // x0
  struct CondType___c_StaticFields *v22; // x8
  Il2CppObject *v23; // x21
  struct CondType___c_StaticFields *v24; // x0
  CondType_CountDelegate_o *v25; // x20
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  CondType___c_c *v28; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  Il2CppObject *v30; // x21
  struct CondType___c_StaticFields *v31; // x0

  if ( (byte_596F599 & 1) == 0 )
  {
    sub_2213A60(&Method_CondType_CountServantLevelClassNum__);
    sub_2213A60(&Method_CondType_CountServantLevelIdNum__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&CondType_CountDelegate_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Aggregate_int__int___);
    sub_2213A60(&System_Func_int__int__int__TypeInfo);
    sub_2213A60(&Method_CondType___c__GetProgressNumByTargetIds_b__30_0__);
    sub_2213A60(&Method_CondType___c__GetProgressNumByTargetIds_b__30_1__);
    sub_2213A60(&Method_CondType___c__GetProgressNumByTargetIds_b__30_2__);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F599 = 1;
  }
  if ( condType > 149 )
  {
    result = 0;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v28 = CondType___c_TypeInfo;
        if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, targetIds, method);
          v28 = CondType___c_TypeInfo;
        }
        static_fields = v28->static_fields;
        _9__30_1 = static_fields->__9__30_1;
        if ( _9__30_1 )
          goto LABEL_39;
        if ( !*(&v28->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v28, targetIds, method);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)static_fields->__9;
        _9__30_1 = (System_Func_int__int__int__o *)sub_2213CCC(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__30_1, v30, Method_CondType___c__GetProgressNumByTargetIds_b__30_1__, 0);
        v31 = CondType___c_TypeInfo->static_fields;
        v31->__9__30_1 = _9__30_1;
        p__9__30_1 = (MissionNaviTransitionBoardItem_o *)&v31->__9__30_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v21 = CondType___c_TypeInfo;
        if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, targetIds, method);
          v21 = CondType___c_TypeInfo;
        }
        v22 = v21->static_fields;
        _9__30_1 = v22->__9__30_2;
        if ( _9__30_1 )
          goto LABEL_39;
        if ( !*(&v21->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v21, targetIds, method);
          v22 = CondType___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)v22->__9;
        _9__30_1 = (System_Func_int__int__int__o *)sub_2213CCC(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__30_1, v23, Method_CondType___c__GetProgressNumByTargetIds_b__30_2__, 0);
        v24 = CondType___c_TypeInfo->static_fields;
        v24->__9__30_2 = _9__30_1;
        p__9__30_1 = (MissionNaviTransitionBoardItem_o *)&v24->__9__30_2;
      }
    }
    else
    {
      if ( condType == 158 )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, targetIds, method);
        LODWORD(result) = CondType__CountRandomMissionClearNum(targetIds, (const MethodInfo *)targetIds);
        return (int)result;
      }
      if ( condType != 188 )
        return result;
      v6 = CondType___c_TypeInfo;
      if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, targetIds, method);
        v6 = CondType___c_TypeInfo;
      }
      v7 = v6->static_fields;
      _9__30_1 = v7->__9__30_0;
      if ( _9__30_1 )
        goto LABEL_39;
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, targetIds, method);
        v7 = CondType___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)v7->__9;
      _9__30_1 = (System_Func_int__int__int__o *)sub_2213CCC(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(_9__30_1, v9, Method_CondType___c__GetProgressNumByTargetIds_b__30_0__, 0);
      v16 = CondType___c_TypeInfo->static_fields;
      v16->__9__30_0 = _9__30_1;
      p__9__30_1 = (MissionNaviTransitionBoardItem_o *)&v16->__9__30_0;
    }
    sub_2213A04(p__9__30_1, (int32_t)_9__30_1, v10, v11, v12, v13, v14, v15);
LABEL_39:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__30_1,
                        (const MethodInfo_3862CC8 *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v18 = (CondType_CountDelegate_o *)sub_2213CCC(CondType_CountDelegate_TypeInfo);
    v20 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0;
    v18 = (CondType_CountDelegate_o *)sub_2213CCC(CondType_CountDelegate_TypeInfo);
    v20 = &Method_CondType_CountServantLevelIdNum__;
  }
  v25 = v18;
  CondType_CountDelegate___ctor(v18, 0, *v20, v19);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v26, v27);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v25, v27);
  return (int)result;
}


int32_t CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5C0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C0 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserShopMaster__TryGetEntity(
                                (UserShopMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_15:
    sub_2213CDC(Instance, v4);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType__GetQuestChallengeNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserQuestMaster_o *UserQuestMaster; // x22
  DataManager_o *Instance; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w25
  __int64 v12; // x2
  QuestGroupMaster_o *v13; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v15; // x21
  unsigned __int64 v16; // x26
  int32_t v17; // w22
  __int64 v18; // x2
  Il2CppObject *MasterData_object; // x23
  int32_t v21; // [xsp+Ch] [xbp-64h]

  if ( (byte_596F5D7 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5D7 = 1;
  }
  v21 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v13 = (QuestGroupMaster_o *)Instance;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v12);
      if ( v13 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v13,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v15 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          challengeNum = 0;
          v16 = 0;
          while ( 1 )
          {
            if ( v16 >= (unsigned int)m_CancellationTokenSource )
              sub_2213CE4(Instance);
            v17 = *((_DWORD *)&v15->fields._DispLog + v16);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v18);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v18);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                          (UserQuestMaster_o *)MasterData_object,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          v17,
                                          0);
            if ( Instance )
              challengeNum += LODWORD(Instance->fields.masterDataBytes);
            LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
            if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_2213CDC(Instance, v6);
  }
  v5 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condVal, method);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    goto LABEL_39;
  EntityFromId = UserQuestMaster__getEntityFromId(
                   UserQuestMaster,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   condId,
                   0);
  if ( EntityFromId )
  {
    challengeNum = EntityFromId->fields.challengeNum;
    goto LABEL_36;
  }
LABEL_35:
  challengeNum = 0;
LABEL_36:
  if ( challengeNum >= v21 )
    return v21;
  else
    return challengeNum;
}


int32_t CondType__GetQuestClearCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t v5; // w20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  QuestGroupMaster_o *v9; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v11; // x19
  unsigned __int64 v12; // x26
  int32_t v13; // w22
  __int64 v14; // x2
  Il2CppObject *MasterData_object; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596F5C7 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C7 = 1;
  }
  entity = 0;
  if ( !targetId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v9 = (QuestGroupMaster_o *)Instance;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
      if ( v9 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v9,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v11 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            return 0;
          v5 = 0;
          v12 = 0;
          while ( 1 )
          {
            if ( v12 >= (unsigned int)m_CancellationTokenSource )
              sub_2213CE4(Instance);
            v13 = *((_DWORD *)&v11->fields._DispLog + v12);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v14);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v14);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)UserQuestMaster__TryGetEntity(
                                          (UserQuestMaster_o *)MasterData_object,
                                          &entity,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          v13,
                                          0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v16, v17);
              Instance = (DataManager_o *)CondType__IsQuestClear_47284152(v13, -1, 0, v18);
              v5 += (unsigned __int8)Instance & 1;
            }
            LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
            if ( (__int64)++v12 >= (int)m_CancellationTokenSource )
              return v5;
          }
        }
      }
    }
    sub_2213CDC(Instance, v7);
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  return CondType__IsQuestClear_47284152(targetId, -1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType__GetQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserQuestMaster_o *UserQuestMaster; // x22
  DataManager_o *Instance; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w22
  __int64 v12; // x2
  QuestGroupMaster_o *v13; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v15; // x21
  unsigned __int64 v16; // x26
  int32_t v17; // w23
  __int64 v18; // x2
  Il2CppObject *MasterData_object; // x24
  int32_t v21; // [xsp+Ch] [xbp-64h]

  if ( (byte_596F5CF & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5CF = 1;
  }
  v21 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v13 = (QuestGroupMaster_o *)Instance;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v12);
      if ( v13 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v13,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v15 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          ClearNum = 0;
          v16 = 0;
          while ( 1 )
          {
            if ( v16 >= (unsigned int)m_CancellationTokenSource )
              sub_2213CE4(Instance);
            v17 = *((_DWORD *)&v15->fields._DispLog + v16);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v18);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v18);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                          (UserQuestMaster_o *)MasterData_object,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          v17,
                                          0);
            if ( Instance )
            {
              Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
              ClearNum += (int)Instance;
            }
            LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
            if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_2213CDC(Instance, v6);
  }
  v5 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condVal, method);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    goto LABEL_39;
  EntityFromId = UserQuestMaster__getEntityFromId(
                   UserQuestMaster,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   condId,
                   0);
  if ( EntityFromId )
  {
    ClearNum = UserQuestEntity__getClearNum(EntityFromId, 0);
    goto LABEL_36;
  }
LABEL_35:
  ClearNum = 0;
LABEL_36:
  if ( ClearNum >= v21 )
    return v21;
  else
    return ClearNum;
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType__GetQuestClearPhaseCount(
        int64_t userId,
        int32_t targetId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CondType_c *v8; // x0
  int v9; // w8
  __int64 v10; // x1
  __int64 v11; // x2
  UserQuestMaster_o *UserQuestMaster; // x22
  _QWORD *p_image; // x0
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5A0 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5A0 = 1;
  }
  v8 = CondType_TypeInfo;
  v9 = *(&CondType_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&beforeClearQuestId);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !UserQuestMaster )
    goto LABEL_21;
  if ( !UserQuestMaster__TryGetEntity(UserQuestMaster, &entity, *(_QWORD *)(p_image[23] + 64LL), targetId, 0) )
    return 0;
  if ( isCheckResetFlag )
  {
    p_image = &entity->klass;
    if ( !entity )
      goto LABEL_21;
    if ( UserQuestEntity__IsResetStatus(entity, 0) )
      return 0;
  }
  p_image = &entity->klass;
  if ( !entity )
LABEL_21:
    sub_2213CDC(p_image, v10);
  result = UserQuestEntity__getQuestPhase(entity, 0);
  if ( beforeClearQuestId >= 1 )
    result -= targetId == beforeClearQuestId;
  return result;
}


int32_t CondType__GetQuestGroupClearCount(
        int32_t questId,
        int32_t groupId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *CacheByTypeGroup; // x0
  int32_t v11; // w21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  int32_t v16; // w22
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v20; // x22
  unsigned __int64 v21; // x24
  int32_t v22; // w23
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596F5D3 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596F5D3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( BYTE1(Instance->m_Items[10]) )
  {
    if ( MasterData_object )
    {
      CacheByTypeGroup = (System_Collections_Generic_List_object__o *)QuestGroupMaster__GetCacheByTypeGroup(
                                                                        (QuestGroupMaster_o *)MasterData_object,
                                                                        groupId,
                                                                        2,
                                                                        0);
      if ( CacheByTypeGroup )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v24,
          CacheByTypeGroup,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
        v11 = 0;
        while ( 1 )
        {
          v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v24,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
          if ( !v12 )
            break;
          if ( !v24.fields._current )
            sub_2213CDC(v12, v13);
          v16 = *(_DWORD *)((char *)&v24.fields._current->klass + (unsigned __int64)&word_10);
          if ( v16 != questId )
          {
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13, v14);
            v11 += CondType__IsQuestClear_47284152(v16, -1, isCheckResetFlag, v15);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v24,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
        return v11;
      }
      return 0;
    }
LABEL_31:
    sub_2213CDC(Instance, v8);
  }
  if ( !MasterData_object )
    goto LABEL_31;
  Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)MasterData_object, groupId, 2, 0);
  if ( !Instance )
    goto LABEL_31;
  max_length = Instance->max_length;
  v20 = Instance;
  if ( (int)max_length < 1 )
    return 0;
  v11 = 0;
  v21 = 0;
  do
  {
    if ( v21 >= (unsigned int)max_length )
      sub_2213CE4(Instance);
    v22 = v20->m_Items[v21];
    if ( v22 != questId )
    {
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v17);
      Instance = (System_Int32_array *)CondType__IsQuestClear_47284152(v22, -1, isCheckResetFlag, v18);
      v11 += (unsigned __int8)Instance & 1;
    }
    LODWORD(max_length) = v20->max_length;
    ++v21;
  }
  while ( (__int64)v21 < (int)max_length );
  return v11;
}


int64_t CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  int64_t v9; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_596F5D6 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5D6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v9 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
  if ( !MasterData_object )
LABEL_19:
    sub_2213CDC(Instance, v6);
  Entity = UserEventRaidMaster__GetEntity(
             (UserEventRaidMaster_o *)MasterData_object,
             v9,
             CondType_TypeInfo->static_fields->EventId,
             condId,
             0);
  if ( Entity )
    damage = Entity->fields.damage;
  else
    damage = 0;
  if ( damage >= condVal )
    return condVal;
  else
    return damage;
}


int32_t CondType__GetRaidGroupDeadCount(int32_t targetId, int64_t condValue, const MethodInfo *method)
{
  int32_t v3; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x20
  int max_length; // w8
  TotalEventRaidMaster_o *v9; // x21
  unsigned int v10; // w23
  int32_t v11; // w22
  EventRaidEntity_o *v12; // x24
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_596F590 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F590 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_20;
  max_length = EventRaidEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v9 = (TotalEventRaidMaster_o *)Instance;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_2213CE4(Instance);
      v12 = EventRaidEntityArray->m_Items[v10];
      if ( !v12 || !v9 )
        break;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v9, &entity, targetId, v12->fields.day, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.totalDamage >= v12->fields.maxHp )
          ++v11;
      }
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v10 >= max_length )
        return v11;
    }
LABEL_20:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


int32_t CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_596F62A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F62A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0);
  if ( MissionEntity )
    LODWORD(MissionEntity) = MissionEntity->fields.clearNum;
  return (int)MissionEntity;
}


int32_t CondType__GetServantHavingCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F5AF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0);
}


int32_t CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F5FF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0);
}


int32_t CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  __int64 v9; // x22
  int32_t v10; // w20
  ShopGroupEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596F5F6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5F6 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( TargetEntityList )
  {
    v6 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v6->max_length;
      if ( max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0;
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            sub_2213CE4(Instance);
          v11 = v6->m_Items[v9];
          if ( !v11 || !v8 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v8,
                                       &entity,
                                       v11->fields.shopId,
                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = entity;
            if ( !entity )
              break;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)entity, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = entity;
              if ( !entity )
                break;
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut((ShopEntity_o *)entity, 0);
              v10 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v6->max_length;
          if ( (int)++v9 >= max_length )
            return v10;
        }
LABEL_22:
        sub_2213CDC(Instance, v4);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t CondType__GetSuperBossDamage(int32_t condId, int64_t condVal, int32_t eventId, const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_596F5D8 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F5D8 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal, *(_QWORD *)&eventId);
  result = CondType__GetSuperBossDamageValue(eventId, condId, *(const MethodInfo **)&eventId);
  if ( result >= condVal )
    return condVal;
  return result;
}


int64_t CondType__GetSuperBossDamageAll(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  int64_t v9; // x22
  int64_t result; // x0
  __int64 v11; // x2
  UserSuperBossMaster_o *v12; // x20

  if ( (byte_596F5DA & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !condId )
  {
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      v12 = (UserSuperBossMaster_o *)Instance;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v11);
      if ( v12 )
      {
        result = UserSuperBossMaster__getTotalDamagePoint(v12, CondType_TypeInfo->static_fields->EventId, 0);
        goto LABEL_21;
      }
    }
LABEL_24:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v9 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
  if ( !MasterData_object )
    goto LABEL_24;
  result = (int64_t)UserSuperBossMaster__GetEntity(
                      (UserSuperBossMaster_o *)MasterData_object,
                      v9,
                      CondType_TypeInfo->static_fields->EventId,
                      condId,
                      0);
  if ( result )
    result = *(_QWORD *)(result + 32);
LABEL_21:
  if ( result >= condVal )
    return condVal;
  return result;
}


int64_t CondType__GetSuperBossDamageValue(int32_t eventId, int32_t bossId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5D9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5D9 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_15:
    sub_2213CDC(Instance, v6);
  UserSuperBossMaster__TryGetEntity(
    (UserSuperBossMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    eventId,
    bossId,
    0);
  if ( entity )
    return entity->fields.damage;
  else
    return 0;
}


int32_t CondType__GetSvtEquipFriendShip(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_596F602 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F602 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v2);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0);
}


int32_t CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_596F5CD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5CD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_17:
    sub_2213CDC(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       condId,
                       0);
  if ( EntityDefinitely )
  {
    v12 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v13 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    *(_QWORD *)&v15.fields.currentCryptoKey = v12;
    *(_QWORD *)&v15.fields.fakeValue = v13;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F5CA & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F5CA = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  return CondType__IsServantGet(condId, method);
}


int32_t CondType__GetSvtLimitCnt(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_596F5CB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5CB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_2213CDC(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       condId,
                       0);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.maxLimitCount >= condVal )
      LODWORD(EntityDefinitely) = condVal;
    else
      LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount;
  }
  return (int)EntityDefinitely;
}


int32_t CondType__GetSvtLv(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_596F5CC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5CC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_2213CDC(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       condId,
                       0);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.maxLv >= condVal )
      LODWORD(EntityDefinitely) = condVal;
    else
      LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  }
  return (int)EntityDefinitely;
}


UserQuestMaster_o *CondType__GetUserQuestMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CondType_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  CondType_c *v14; // x8
  Il2CppObject *v15; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_596F588 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F588 = 1;
  }
  v3 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v1, v2);
    v3 = CondType_TypeInfo;
  }
  if ( !v3->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v5);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v14 = CondType_TypeInfo;
    v15 = MasterData_object;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
      v14 = CondType_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->uQuestMst, (int32_t)v15, v8, v9, v10, v11, v12, v13);
    v3 = CondType_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = CondType_TypeInfo;
  }
  return v3->static_fields->uQuestMst;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsAboveEventTradeTotalNum(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  UserEventTradeMaster_o *Master_object; // x0

  if ( (byte_596F64E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F64E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condNum, method);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( Master_object )
  {
    Master_object = (UserEventTradeMaster_o *)UserEventTradeMaster__GetEntity(Master_object, eventId, 0);
    if ( Master_object )
      LODWORD(Master_object) = UserEventTradeEntity__GetTotalTradeCount((UserEventTradeEntity_o *)Master_object, 0);
  }
  return (int)Master_object >= condNum;
}


bool CondType__IsAchieveLimitedMission(int32_t missionId, int32_t condNum, int32_t checkType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionEntity__o *LimitedMissionList; // x0

  if ( (byte_596F64F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F64F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  LimitedMissionList = EventMissionMaster__GetLimitedMissionList((EventMissionMaster_o *)Instance, missionId, 0);
  if ( !LimitedMissionList )
    return (char)LimitedMissionList;
  if ( LimitedMissionList->fields._size < 1 )
  {
    LOBYTE(LimitedMissionList) = 0;
    return (char)LimitedMissionList;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0 )
  {
LABEL_16:
    sub_2213CDC(Instance, v8);
  }
  LODWORD(LimitedMissionList) = UserEventMissionMaster__getAchiveMissionNum(
                                  (UserEventMissionMaster_o *)Instance,
                                  missionId,
                                  0);
  if ( checkType == 2 )
  {
    LOBYTE(LimitedMissionList) = (int)LimitedMissionList <= condNum;
  }
  else if ( checkType == 1 )
  {
    LOBYTE(LimitedMissionList) = (int)LimitedMissionList >= condNum;
  }
  else
  {
    LOBYTE(LimitedMissionList) = (_DWORD)LimitedMissionList == condNum;
  }
  return (char)LimitedMissionList;
}


bool CondType__IsAfterQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_596F652 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F652 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, time, method);
  return CondType__CompareQuestClearTime(questId, time, 1, v3);
}


bool CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F60A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F60A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0) >= count;
}


bool CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F5F9 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5F9 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  return NetworkManager__getTime(0) >= time;
}


bool CondType__IsAuthTDAccelerate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1

  if ( (byte_596F648 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_596F648 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    sub_2213CDC(0, v6);
  return BattleSequenceManager__IsTimeAccelerateNow((BattleSequenceManager_o *)v5, 0);
}


bool CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v13; // x21
  unsigned __int64 v14; // x25
  int32_t v15; // w26
  int32_t v16; // w22
  int32_t v17; // w24
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_596F615 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F615 = 1;
  }
  if ( val < 1 )
  {
    LOBYTE(MasterData_object) = 1;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                  (QuestGroupMaster_o *)Instance,
                                  groupId,
                                  15,
                                  0);
    if ( !Instance )
      goto LABEL_29;
    v9 = Instance;
    if ( Instance->fields.m_CancellationTokenSource )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      m_CancellationTokenSource = v9->fields.m_CancellationTokenSource;
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        v13 = (UserQuestMaster_o *)MasterData_object;
        v14 = 0;
        v15 = 0;
        if ( isWin )
          v16 = 128;
        else
          v16 = 256;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)m_CancellationTokenSource )
            sub_2213CE4(MasterData_object);
          v17 = *((_DWORD *)&v9->fields._DispLog + v14);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v11);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v11);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v13 )
            break;
          EntityFromId = UserQuestMaster__getEntityFromId(
                           v13,
                           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                           v17,
                           0);
          if ( EntityFromId )
            v15 += UserQuestEntity__HasStatus(EntityFromId, v16, 0);
          MasterData_object = (Il2CppObject *)(v15 >= val);
          if ( v15 < val )
          {
            LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
            if ( (__int64)++v14 < (int)m_CancellationTokenSource )
              continue;
          }
          return (char)MasterData_object;
        }
LABEL_29:
        sub_2213CDC(Instance, v8);
      }
    }
    LOBYTE(MasterData_object) = 0;
  }
  return (char)MasterData_object;
}


bool CondType__IsBattleLineReusltConsecutiveCount(
        int32_t groupId,
        int32_t val,
        bool isWin,
        bool isBelow,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x21
  UserQuestMaster_o *MasterData_object; // x0
  __int64 v13; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v15; // x22
  unsigned __int64 v16; // x26
  int32_t v17; // w27
  int32_t v18; // w23
  int32_t v19; // w25

  if ( (byte_596F614 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F614 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 14, 0);
  if ( !Instance )
    goto LABEL_34;
  v11 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_37B9790 *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_34:
    sub_2213CDC(Instance, v10);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = MasterData_object;
    v16 = 0;
    v17 = 0;
    if ( isWin )
      v18 = 128;
    else
      v18 = 256;
    do
    {
      if ( v16 >= (unsigned int)m_CancellationTokenSource )
        sub_2213CE4(MasterData_object);
      v19 = *((_DWORD *)&v11->fields._DispLog + v16);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v13);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v13);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v15 )
        goto LABEL_34;
      MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                 v15,
                                                 *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                                 v19,
                                                 0);
      if ( MasterData_object )
      {
        MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                   (UserQuestEntity_o *)MasterData_object,
                                                   v18,
                                                   0);
        if ( ((unsigned __int8)MasterData_object & 1) != 0 )
          ++v17;
        else
          v17 = 0;
      }
      else
      {
        v17 = 0;
      }
      if ( isBelow )
      {
        if ( v17 > val )
          return 0;
      }
      else if ( v17 >= val )
      {
        return 1;
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      ++v16;
    }
    while ( (__int64)v16 < (int)m_CancellationTokenSource );
  }
  return isBelow;
}


bool CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v13; // x21
  unsigned __int64 v14; // x25
  int32_t v15; // w26
  int32_t v16; // w22
  int32_t v17; // w24
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_596F613 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F613 = 1;
  }
  if ( val < 1 )
  {
    LOBYTE(MasterData_object) = 1;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                  (QuestGroupMaster_o *)Instance,
                                  groupId,
                                  14,
                                  0);
    if ( !Instance )
      goto LABEL_29;
    v9 = Instance;
    if ( Instance->fields.m_CancellationTokenSource )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      m_CancellationTokenSource = v9->fields.m_CancellationTokenSource;
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        v13 = (UserQuestMaster_o *)MasterData_object;
        v14 = 0;
        v15 = 0;
        if ( isWin )
          v16 = 128;
        else
          v16 = 256;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)m_CancellationTokenSource )
            sub_2213CE4(MasterData_object);
          v17 = *((_DWORD *)&v9->fields._DispLog + v14);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v11);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v11);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v13 )
            break;
          EntityFromId = UserQuestMaster__getEntityFromId(
                           v13,
                           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                           v17,
                           0);
          if ( EntityFromId )
            v15 += UserQuestEntity__HasStatus(EntityFromId, v16, 0);
          MasterData_object = (Il2CppObject *)(v15 >= val);
          if ( v15 < val )
          {
            LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
            if ( (__int64)++v14 < (int)m_CancellationTokenSource )
              continue;
          }
          return (char)MasterData_object;
        }
LABEL_29:
        sub_2213CDC(Instance, v8);
      }
    }
    LOBYTE(MasterData_object) = 0;
  }
  return (char)MasterData_object;
}


bool CondType__IsBeforeArrivalData(int64_t time, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F650 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F650 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  return NetworkManager__getTime(0) < time;
}


bool CondType__IsBeforeQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_596F651 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F651 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, time, method);
  return CondType__CompareQuestClearTime(questId, time, 2, v3);
}


bool CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_596F611 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F611 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, value, method);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


bool CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F610 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F610 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return UserEventBoardGameTokenMaster__IsHavingGroupToken(
           (UserEventBoardGameTokenMaster_o *)Instance,
           gameFlagVal,
           kindNum,
           0);
}


bool CondType__IsBoardGameTokenHaving(int32_t tokenId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F60F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F60F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)Instance, tokenId, 0);
}


bool CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F626 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F626 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_18;
  if ( !UserBoxGachaMaster__TryGetEntity(
          (UserBoxGachaMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          gachaId,
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_18:
    sub_2213CDC(Instance, v6);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool CondType__IsClassBoardSquareAllReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  ClassBoardSquareEntity_array *AllEntity; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  int32_t v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  CondType___c_c *v13; // x8
  int32_t v14; // w20
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__200_0; // x21
  Il2CppObject *v17; // x22
  struct CondType___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596F63A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_ClassBoardSquareEntity___);
    sub_2213A60(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_2213A60(&Method_CondType___c__IsClassBoardSquareAllReleased_b__200_0__);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F63A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  AllEntity = ClassBoardSquareMaster__GetAllEntity((ClassBoardSquareMaster_o *)Master_object, targetId, 0);
  if ( AllEntity )
  {
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)AllEntity;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
    v10 = CondType__CountClassBoardSquareReleased(targetId, v7);
    v13 = CondType___c_TypeInfo;
    v14 = v10;
    if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v11, v12);
      v13 = CondType___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__200_0 = (System_Func_object__bool__o *)static_fields->__9__200_0;
    if ( !_9__200_0 )
    {
      if ( !*(&v13->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v13, v11, v12);
        static_fields = CondType___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__200_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__200_0, v17, Method_CondType___c__IsClassBoardSquareAllReleased_b__200_0__, 0);
      v18 = CondType___c_TypeInfo->static_fields;
      v18->__9__200_0 = (struct System_Func_ClassBoardSquareEntity__bool__o *)_9__200_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v18->__9__200_0,
        (int32_t)_9__200_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    LOBYTE(AllEntity) = v14 == System_Linq_Enumerable__Count_object__59223900(
                                 v9,
                                 (System_Func_TSource__bool__o *)_9__200_0,
                                 (const MethodInfo_387AF5C *)Method_System_Linq_Enumerable_Count_ClassBoardSquareEntity___);
  }
  return (char)AllEntity;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsClearLatestQuestPhase(int32_t questId, int64_t phase, bool isEqual, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v6; // w19
  int v8; // w8
  CondType_c *v9; // x0
  CondType_c *v11; // x0

  v6 = phase;
  if ( (byte_596F64D & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F64D = 1;
  }
  v8 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  if ( isEqual )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, phase, isEqual);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, phase, isEqual);
    v9 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, phase, isEqual);
    return CondType__GetQuestClearPhaseCount((int64_t)v9, questId, -1, 1, v4) == v6;
  }
  else
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, phase, isEqual);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, phase, isEqual);
    v11 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, phase, isEqual);
    return CondType__GetQuestClearPhaseCount((int64_t)v11, questId, -1, 1, v4) != v6;
  }
}


bool CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x20

  if ( (byte_596F607 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F607 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v4 = NetworkManager_TypeInfo;
  }
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  return CondType__IsCommandCodeGet_47350284(userIdNumber, commandCodeId, v2);
}


bool CondType__IsCommandCodeGet_47350284(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F608 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F608 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  UserCommandCodeCollectionMaster__TryGetEntity(
    (UserCommandCodeCollectionMaster_o *)Instance,
    &entity,
    userId,
    commandCodeId,
    0);
  return entity && entity->fields.status == 2;
}


bool CondType__IsCommonRelease(int32_t releaseId, bool isCollection, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F60C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F60C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0, isCollection, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantMaxLimit(int32_t eventId, int32_t targetCount, const MethodInfo *method)
{
  if ( (byte_596F63D & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F63D = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetCount, method);
  return CondType__CountExchangeServantMaxLimit(eventId, *(const MethodInfo **)&targetCount) >= targetCount;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantTargetFriendShipRank(
        int32_t eventId,
        int32_t targetFriendShipRank,
        const MethodInfo *method)
{
  if ( (byte_596F641 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F641 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetFriendShipRank, method);
  return CondType__GetExchangeServantHighestFriendShipRank(eventId, *(const MethodInfo **)&targetFriendShipRank) >= targetFriendShipRank;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantTargetLevel(int32_t eventId, int32_t targetLevel, const MethodInfo *method)
{
  if ( (byte_596F63B & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F63B = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetLevel, method);
  return CondType__GetExchangeServantHighestLevel(eventId, *(const MethodInfo **)&targetLevel) >= targetLevel;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantTargetSkillLevel(
        int32_t eventId,
        int32_t targetSkillLevel,
        const MethodInfo *method)
{
  if ( (byte_596F63F & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F63F = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetSkillLevel, method);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F638 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F638 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)UserHeelPortraitMaster__TryGetEntity(
                                    (UserHeelPortraitMaster_o *)Master_object,
                                    &entity,
                                    eventId,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      heelPortraitIds = entity->fields.heelPortraitIds;
      if ( heelPortraitIds )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_object )
          return HeelPortraitMaster__GetCompleteNum((HeelPortraitMaster_o *)Master_object, eventId, 0) <= SLODWORD(heelPortraitIds->max_length);
      }
    }
LABEL_15:
    sub_2213CDC(Master_object, v6);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteHighestWaveValue(int32_t questId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_Collections_ICollection_o *List; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  CondType___c_c *v12; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__228_0; // x23
  Il2CppObject *v15; // x24
  struct CondType___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t ReachedWave; // w0

  if ( (byte_596F654 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_QuestPhaseEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_QuestPhaseEntity__bool__TypeInfo);
    sub_2213A60(&Method_CondType___c__IsCompleteHighestWaveValue_b__228_0__);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F654 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&checkType);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  List = (System_Collections_ICollection_o *)QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, questId, 0);
  if ( BasicHelper__IsNullOrEmpty(List, 0) )
    return 0;
  v12 = CondType___c_TypeInfo;
  if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v10, v11);
    v12 = CondType___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__228_0 = (System_Func_object__bool__o *)static_fields->__9__228_0;
  if ( !_9__228_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
      static_fields = CondType___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__228_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__228_0, v15, Method_CondType___c__IsCompleteHighestWaveValue_b__228_0__, 0);
    v16 = CondType___c_TypeInfo->static_fields;
    v16->__9__228_0 = (struct System_Func_QuestPhaseEntity__bool__o *)_9__228_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__228_0, (int32_t)_9__228_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !BasicHelper__Any_object__58785420(
          (System_Object_array *)List,
          (System_Func_T__bool__o *)_9__228_0,
          (const MethodInfo_380FE8C *)Method_BasicHelper_Any_QuestPhaseEntity___) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23, v24);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !Master_object )
LABEL_26:
    sub_2213CDC(Master_object, v8);
  ReachedWave = ReachedWaveInfoMaster__GetReachedWave((ReachedWaveInfoMaster_o *)Master_object, questId, 0);
  if ( checkType == 1 )
    return ReachedWave >= num;
  return checkType == 2 && ReachedWave <= num;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteUserGameCommonValue(int32_t no, int32_t num, int32_t checkType, const MethodInfo *method)
{
  int v7; // w8
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v11; // x0
  int32_t value; // w8
  UserGameCommonEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F649 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserGameCommonMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F649 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&checkType);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGameCommonMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    v11 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_21;
  v11 = (NetworkManager_c *)UserGameCommonMaster__TryGetEntity(
                              (UserGameCommonMaster_o *)Master_object,
                              &entity,
                              v11->static_fields->userIdNumber,
                              no,
                              0);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    if ( entity )
    {
      value = entity->fields.value;
      goto LABEL_16;
    }
LABEL_21:
    sub_2213CDC(v11, v8);
  }
  value = 0;
LABEL_16:
  if ( checkType == 2 )
    return value <= num;
  if ( checkType == 1 )
    return value >= num;
  return value == num;
}


bool CondType__IsCompleteUserLevelValue(int32_t num, int32_t checkType, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int32_t lv; // w8

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( SelfUserGame )
    lv = SelfUserGame->fields.lv;
  else
    lv = 0;
  if ( checkType == 2 )
    return lv <= num;
  if ( checkType == 1 )
    return lv >= num;
  if ( checkType )
    return 0;
  return lv == num;
}


bool CondType__IsConst(int32_t condType, const MethodInfo *method)
{
  return condType == 0;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsContainWeekdays(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  int v5; // w8
  System_DateTime_o v6; // x0
  int64_t Time_48346468; // x0
  System_DateTime_o v8; // x1
  System_DateTime_o v9; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F62C & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F62C = 1;
  }
  v5 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  dateData = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condNum, method);
  v6.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Time_48346468 = NetworkManager__getTime_48346468(v6, 0);
  dateData = NetworkManager__getDateTime_48347260(Time_48346468 - 3600 * condNum, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v8.fields._dateData, v9.fields._dateData);
  return ((unsigned int)condId >> (System_DateTime__get_DayOfWeek((System_DateTime_o)&dateData, 0) + 1)) & 1;
}


bool CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5E4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E4 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          svtId,
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_2213CDC(Instance, v6);
  return UserServantCollectionEntity__IsCostumeGet(entity, costumeId, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCountJobLevelMax(int32_t checkType, int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v7; // w8
  UserEventJobMaster_o *Master_object; // x0
  __int64 v9; // x1
  UserEventJobEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F65E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventJobMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F65E = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&condValue);
  Master_object = (UserEventJobMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventJobMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !UserEventJobMaster__TryGetEntity(Master_object, &entity, targetId, 0) )
    return 0;
  if ( checkType )
  {
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        Master_object = (UserEventJobMaster_o *)entity;
        if ( entity )
          return UserEventJobEntity__GetMaxLevelJobCount(entity, targetId, 0) >= condValue;
LABEL_18:
        sub_2213CDC(Master_object, v9);
      }
      return 0;
    }
    Master_object = (UserEventJobMaster_o *)entity;
    if ( !entity )
      goto LABEL_18;
    return UserEventJobEntity__GetMaxLevelJobCount(entity, targetId, 0) <= condValue;
  }
  else
  {
    Master_object = (UserEventJobMaster_o *)entity;
    if ( !entity )
      goto LABEL_18;
    return UserEventJobEntity__GetMaxLevelJobCount(entity, targetId, 0) == condValue;
  }
}


bool CondType__IsDeadRaidDay(
        int32_t day,
        int32_t num,
        int32_t checkType,
        bool isRate,
        bool isIncludingEquals,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *EntityListFromDay; // x23
  __int64 v14; // x24
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  float v19; // s0
  int64_t v20; // x22
  CondType_c *v21; // x0
  float v22; // s1
  bool v23; // cc
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF
  int64_t maxHpSum; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_596F644 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F644 = 1;
  }
  maxHpSum = 0;
  memset(&v27, 0, sizeof(v27));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0
    || (EntityListFromDay = (System_Collections_Generic_List_object__o *)TotalEventRaidMaster__TryGetEntityListFromDay(
                                                                           (TotalEventRaidMaster_o *)Instance,
                                                                           day,
                                                                           &maxHpSum,
                                                                           0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_2213CDC(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    EntityListFromDay,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v14 = 0;
  v27 = v26;
  v26.fields._list = 0;
  *(_QWORD *)&v26.fields._index = &v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v15 )
      break;
    if ( !v27.fields._current )
      sub_2213CDC(v15, v16);
    v14 += (__int64)v27.fields._current[1].monitor;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
  if ( isRate )
  {
    v19 = 0.0;
    if ( v14 >= 1 )
    {
      v20 = maxHpSum;
      if ( maxHpSum >= 1 )
      {
        v21 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17, v18);
          v21 = CondType_TypeInfo;
        }
        v19 = (float)((float)v14 / (float)v20) * (float)v21->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
    }
    v22 = (float)num;
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v23 = v19 < v22;
        if ( isIncludingEquals )
          return !v23;
        return !v23;
      }
      return v19 == v22;
    }
    if ( isIncludingEquals )
      return v19 <= v22;
    else
      return v19 < v22;
  }
  else
  {
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v23 = v14 < num;
        if ( isIncludingEquals )
          return !v23;
        return !v23;
      }
      return v14 == num;
    }
    if ( isIncludingEquals )
      return v14 <= num;
    else
      return v14 < num;
  }
}


bool CondType__IsDeadRaidGroup(
        int32_t eventId,
        int32_t num,
        int32_t checkType,
        bool isRate,
        bool isIncludingEquals,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  __int64 v14; // x2
  int max_length; // w8
  TotalEventRaidMaster_o *v16; // x25
  int v17; // w28
  __int64 v18; // x27
  __int64 v19; // x26
  EventRaidEntity_o *v20; // x29
  float v21; // s0
  CondType_c *v22; // x0
  float v23; // s1
  bool v24; // cc
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596F645 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F645 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_46:
    sub_2213CDC(Instance, v12);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v19 = 0;
    v18 = 0;
    if ( isRate )
    {
LABEL_17:
      v21 = 0.0;
      if ( v19 >= 1 && v18 >= 1 )
      {
        v22 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12, v14);
          v22 = CondType_TypeInfo;
        }
        v21 = (float)((float)v19 / (float)v18) * (float)v22->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
      v23 = (float)num;
      if ( checkType != 2 )
      {
        if ( checkType == 1 )
        {
          v24 = v21 < v23;
          if ( isIncludingEquals )
            return !v24;
          return !v24;
        }
        return v21 == v23;
      }
      if ( isIncludingEquals )
        return v21 <= v23;
      else
        return v21 < v23;
    }
  }
  else
  {
    v16 = (TotalEventRaidMaster_o *)Instance;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v20 = EventRaidEntityArrayFromEventId->m_Items[v17];
      if ( !v20 || !v16 )
        goto LABEL_46;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v16, &entity, eventId, v20->fields.day, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_46;
        v18 += v20->fields.maxHp;
        v19 += entity->fields.totalDamage;
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      ++v17;
    }
    while ( v17 < max_length );
    if ( isRate )
      goto LABEL_17;
  }
  if ( checkType != 2 )
  {
    if ( checkType == 1 )
    {
      v24 = v19 < num;
      if ( isIncludingEquals )
        return !v24;
      return !v24;
    }
    return v19 == num;
  }
  if ( isIncludingEquals )
    return v19 <= num;
  else
    return v19 < num;
}


bool CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v8; // x19
  System_String_o *MovieFolder; // x0
  System_String_o *v10; // x19

  if ( (byte_596F604 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F604 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_12;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0);
  if ( Entity )
  {
    v8 = Entity;
    Instance = UserGameMaster__getSelfUserGame(0);
    if ( !Instance )
      goto LABEL_12;
    MovieFolder = QuestPhaseEntity__GetMovieFolder(v8, *((_DWORD *)Instance + 19), 0);
    if ( MovieFolder )
    {
      v10 = MovieFolder;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (void *)*((_QWORD *)Instance + 253);
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v10, 0);
      }
LABEL_12:
      sub_2213CDC(Instance, v6);
    }
  }
  return 0;
}


bool CondType__IsElapsedTimeAfterQuestClear(int32_t questId, int64_t elapsedTime, const MethodInfo *method)
{
  const MethodInfo *v5; // x0
  int64_t v6; // x21
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v8; // x1
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  UserQuestEntity_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  bool IsQuestClear_47284152; // w8
  int64_t updatedAt; // x20
  System_DateTime_o v18; // x0
  int64_t Time_48346468; // x20

  if ( (byte_596F64A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F64A = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, elapsedTime, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v5 = (const MethodInfo *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, elapsedTime, method);
    v5 = (const MethodInfo *)NetworkManager_TypeInfo;
  }
  v6 = *((_QWORD *)v5[2].virtualMethodPointer + 8);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, elapsedTime, method);
  UserQuestMaster = CondType__GetUserQuestMaster(v5);
  if ( !UserQuestMaster )
    sub_2213CDC(0, v8);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v6, questId, 0);
  if ( EntityFromId )
  {
    v13 = EntityFromId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10, v11);
    IsQuestClear_47284152 = CondType__IsQuestClear_47284152(questId, -1, 0, v12);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_47284152 )
    {
      updatedAt = v13->fields.updatedAt;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
      v18.fields._dateData = NetworkManager__getServerDateTime_48347596(updatedAt, 0).fields._dateData;
      Time_48346468 = NetworkManager__getTime_48346468(v18, 0);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0) - Time_48346468 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool CondType__IsElapsedTimeAfterSvtGet(int32_t svtId, int64_t elapsedTime, const MethodInfo *method)
{
  int v5; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F64B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F64B = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, elapsedTime, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         svtId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0);
    if ( entity )
      return (char *)Master_object - (char *)entity[1].monitor >= elapsedTime;
LABEL_12:
    sub_2213CDC(Master_object, v7);
  }
  return 0;
}


bool CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F605 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestDateRangeMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F605 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return QuestDateRangeMaster__IsPeriodFromOpenedToClosed((QuestDateRangeMaster_o *)Instance, questDateRangeId, Time, 0);
}


bool CondType__IsEquipGet(int32_t condEquipId, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  UserEquipEntity_o *userEquipEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F657 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F657 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  userEquipEntity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  return UserEquipMaster__TryGetEntityByEquipId((UserEquipMaster_o *)Master_object, &userEquipEntity, condEquipId, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsEquipRarityLevelNum(System_Int32_array *targetIds, int32_t targetNum, const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w23
  int32_t v8; // w21

  v4 = targetIds;
  if ( (byte_596F620 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_2213A60(&CondType_TypeInfo);
    byte_596F620 = 1;
  }
  if ( !v4 )
    sub_2213CDC(targetIds, *(_QWORD *)&targetNum);
  max_length = v4->max_length;
  if ( (int)max_length < 1 )
  {
    LOBYTE(targetIds) = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(targetIds);
      v8 = v4->m_Items[v6];
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetNum, method);
      v7 += CondType__CountEquipRarityLevelNum(v8, *(const MethodInfo **)&targetNum);
      targetIds = (System_Int32_array *)(v7 >= targetNum);
      if ( v7 >= targetNum )
        break;
      LODWORD(max_length) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
  return (char)targetIds;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsEquipWithTargetCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_596F5F8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F5F8 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&costumeId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  return UserServantMaster__IsEquipCostume((UserServantMaster_o *)Master_object, svtId, costumeId, 0);
}


bool CondType__IsEvent(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_596F5B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen((EventEntity_o *)Entity, 1, 0);
  return (char)Entity;
}


bool CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596F5E8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E8 = 1;
  }
  entity = 0;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !entity )
LABEL_14:
    sub_2213CDC(Instance, v4);
  return (__int64)entity[5].monitor <= (__int64)Instance && (__int64)Instance <= (__int64)entity[6].klass;
}


bool CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596F5E7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E7 = 1;
  }
  entity = 0;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_13;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !entity )
LABEL_13:
      sub_2213CDC(Instance, v4);
    if ( (__int64)Instance < (__int64)entity[6].klass )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsEventGroupPointRatioInTerm(int32_t eventTerm, int32_t rate, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_RACE_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_596F5E9 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E9 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&rate, method);
    v5 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v5->static_fields->EVENT_RACE_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  return EventRaceMaster__IsReachedPointRateInTerm(
           (EventRaceMaster_o *)Instance,
           eventTerm / EVENT_RACE_DEVIDER,
           eventTerm % EVENT_RACE_DEVIDER,
           rate,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsEventGroupRankInTerm(int32_t eventTerm, int32_t rank, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_596F5EA & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5EA = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&rank, method);
    v5 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v5->static_fields->EVENT_RACE_DEVIDER;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&rank, method);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v9);
  }
  return EventRaceMaster__GetGoaledTeamCount(
           (EventRaceMaster_o *)Instance,
           eventTerm / EVENT_RACE_DEVIDER,
           eventTerm % EVENT_RACE_DEVIDER,
           Time,
           0) >= rank;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsEventMissionGroupClear(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *EntityList; // x0
  int32_t i; // w21
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  int32_t v13; // w20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596F637 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    byte_596F637 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v15, 0, sizeof(v15));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condNum, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  EntityList = (System_Collections_Generic_List_object__o *)EventMissionGroupMaster__GetEntityList(
                                                              (EventMissionGroupMaster_o *)Master_object,
                                                              condId,
                                                              0);
  if ( EntityList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      EntityList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(v13, v11) )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v10 )
        break;
      if ( !v15.fields._current )
        sub_2213CDC(v10, v11);
      v13 = *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_14);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = i >= condNum;
  }
  return (char)EntityList;
}


bool CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_596F5E0 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E0 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal, method);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  return TotalEventPointMaster__GetPeriodTotalPoint(
           (TotalEventPointMaster_o *)Instance,
           evGroupId / EVENT_POINT_DEVIDER,
           evGroupId % EVENT_POINT_DEVIDER,
           0) >= condVal;
}


bool CondType__IsEventPoint(int32_t eventId, int64_t evPoint, const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(eventId, 0) >= evPoint;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsEventPointGroupWin(int32_t evGroupId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_596F5DF & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5DF = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condVal, method);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  return TotalEventPointMaster__IsGroupWin(
           (TotalEventPointMaster_o *)Instance,
           evGroupId / EVENT_POINT_DEVIDER,
           evGroupId % EVENT_POINT_DEVIDER,
           condVal,
           0);
}


bool CondType__IsEventRaceGoalScriptPlayed(int32_t eventId, int32_t termId, int32_t groupId, const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v11; // x23
  unsigned int Index_int; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  unsigned int v16; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5EF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindIndex_int___);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CondType___c__DisplayClass117_0__IsEventRaceGoalScriptPlayed_b__0__);
    sub_2213A60(&CondType___c__DisplayClass117_0_TypeInfo);
    byte_596F5EF = 1;
  }
  goalTime = 0;
  v7 = sub_2213CCC(CondType___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = groupId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v9);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0);
  v11 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass117_0__IsEventRaceGoalScriptPlayed_b__0__,
    0);
  Index_int = System_Array__FindIndex_int_(
                RankDatas,
                (System_Predicate_T__o *)v11,
                (const MethodInfo_39A9D14 *)Method_System_Array_FindIndex_int___);
  if ( Index_int > 0x7FFFFFFE )
  {
    return 0;
  }
  else
  {
    v16 = Index_int;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13, v14);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v16 + 1, v15);
  }
}


bool CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5ED & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5ED = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_12;
    klass_high = HIDWORD(entity[1].klass);
  }
  else
  {
    klass_high = 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0 )
  {
LABEL_12:
    sub_2213CDC(Instance, v6);
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId((UserEventRaceMaster_o *)Instance, eventId, klass_high, 0) == groupId;
}


bool CondType__IsEventRaceRankedScriptPlayed(int32_t eventId, int32_t termId, int32_t rank, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  EventScriptEntity_o *RaceResultEntity; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t flagId; // w20

  if ( (byte_596F5F0 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  RaceResultEntity = EventScriptMaster__getRaceResultEntity(
                       (EventScriptMaster_o *)Instance,
                       1,
                       eventId,
                       termId,
                       rank,
                       0);
  if ( RaceResultEntity )
  {
    flagId = RaceResultEntity->fields.flagId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10, v11);
    LOBYTE(RaceResultEntity) = CondType__IsEventScriptFlagChecked(eventId, flagId, v11);
  }
  return (char)RaceResultEntity;
}


bool CondType__IsEventScriptFlagChecked(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5EE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5EE = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_17;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          eventId,
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_17:
    sub_2213CDC(Instance, v6);
  return UserEventEntity__getScriptFlag(entity, flagId, 0);
}


bool CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  void *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  int32_t v9; // w21
  _BOOL4 v10; // w0
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = flagId;
  if ( (byte_596F5FD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5FD = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_18;
  Instance = UserEventMaster__GetEntityDefinitely(
               (UserEventMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               eventId,
               0);
  if ( !Instance )
    goto LABEL_18;
  v9 = *((_DWORD *)Instance + 8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v9, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    LOBYTE(v10) = 0;
    return v10;
  }
  if ( !entity )
LABEL_18:
    sub_2213CDC(Instance, v6);
  return ((unsigned int)entity->fields.status >> v3) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x21
  EventTutorialMaster_o *IsNullOrEmpty; // x0
  __int64 v10; // x2
  bool v11; // w19
  EventTutorialMaster_o *v12; // x21
  System_Collections_ICollection_o *TutorialEntityList; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  bool v16; // w19
  Il2CppObject *current; // x20
  bool IsShownOnceDailyTutorial; // w0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+18h] [xbp-58h] BYREF
  UserEventEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_596F62F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F62F = 1;
  }
  entity = 0;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v20, 0, sizeof(v20));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&bitNum, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  IsNullOrEmpty = (EventTutorialMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    IsNullOrEmpty = (EventTutorialMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_30;
  if ( UserEventMaster__TryGetEntity(
         (UserEventMaster_o *)Master_object,
         &entity,
         *((_QWORD *)IsNullOrEmpty[2].monitor + 8),
         eventId,
         0) )
  {
    IsNullOrEmpty = (EventTutorialMaster_o *)entity;
    if ( entity )
      return UserEventEntity__getTutorialFlag(entity, bitNum, 0);
LABEL_30:
    sub_2213CDC(IsNullOrEmpty, v6);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v10);
  IsNullOrEmpty = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  v12 = IsNullOrEmpty;
  TutorialEntityList = (System_Collections_ICollection_o *)EventTutorialMaster__GetTutorialEntityList(
                                                             IsNullOrEmpty,
                                                             eventId,
                                                             bitNum,
                                                             0);
  IsNullOrEmpty = (EventTutorialMaster_o *)BasicHelper__IsNullOrEmpty(TutorialEntityList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  if ( !TutorialEntityList )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)TutorialEntityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    v16 = v14;
    if ( !v14 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_2213CDC(v14, v15);
    if ( EventTutorialEntity__HasFlag((EventTutorialEntity_o *)v20.fields._current, 4, 0) )
    {
      IsShownOnceDailyTutorial = EventTutorialMaster__IsShownOnceDailyTutorial(v12, (EventTutorialEntity_o *)current, 0);
      goto LABEL_27;
    }
  }
  IsShownOnceDailyTutorial = 0;
LABEL_27:
  v11 = v16 && IsShownOnceDailyTutorial;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
  return v11;
}


bool CondType__IsEventTypeStartTimeToEndDate(int32_t eventType, int32_t overWriteTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_ObjectModel_Collection_T__o *datalist; // x22
  DataManager_o *v9; // x20
  __int64 Enumerator; // x0
  __int64 v11; // x1
  __int64 v12; // x11
  __int64 v13; // x24
  unsigned __int64 v14; // x27
  __int64 v15; // x22
  int32_t v16; // w23
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  char v23; // w21
  __int64 v24; // x24
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x2
  __int64 v30; // x24
  int64_t v31; // x25
  System_DateTime_o v32; // x1
  System_DateTime_o v33; // x2
  int32_t Year; // w25
  int32_t Month; // w26
  int32_t Day; // w0
  __int64 v37; // x2
  uint64_t v38; // x24
  __int64 v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  int minute; // [xsp+4h] [xbp-8Ch]
  System_DateTime_o dateTime; // [xsp+18h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-70h] BYREF
  __int64 v48; // [xsp+28h] [xbp-68h]

  if ( (byte_596F625 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F625 = 1;
  }
  dateData = 0;
  v48 = 0;
  dateTime.fields._dateData = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_48;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Instance = (DataManager_o *)NetworkManager__getServerTime(0);
  if ( !datalist )
LABEL_48:
    sub_2213CDC(Instance, v6);
  v9 = Instance;
  Enumerator = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                          datalist,
                          (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  v48 = Enumerator;
  if ( !Enumerator )
LABEL_35:
    sub_2213CDC(Enumerator, v11);
  v12 = 1759218605LL * overWriteTime;
  v13 = Enumerator;
  v14 = (unsigned __int64)v12 >> 63;
  v15 = v12 >> 44;
  v16 = overWriteTime % 100;
  minute = overWriteTime / 100 % 100;
  while ( 1 )
  {
    v17 = *(_QWORD *)v13;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_14;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_14:
      v20 = sub_224BC3C(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v13, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( (v21 & 1) == 0 )
      break;
    v24 = v48;
    if ( !v48 )
      sub_2213CDC(v21, v22);
    v25 = *(_QWORD *)v48;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_22;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_22:
      v28 = sub_224BC3C(v48, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    Enumerator = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
    v30 = Enumerator;
    if ( Enumerator && *(_DWORD *)(Enumerator + 24) == eventType )
    {
      v31 = *(_QWORD *)(Enumerator + 96);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v29);
      dateData = NetworkManager__getDateTime_48347260(v31, 0).fields._dateData;
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v32.fields._dateData, v33.fields._dateData);
      Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
      Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
      Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
      System_DateTime___ctor_77014300((System_DateTime_o)&dateTime, Year, Month, Day, v15 + v14, minute, v16, 0);
      if ( *(_QWORD *)(v30 + 88) <= (__int64)v9 )
      {
        v38 = dateTime.fields._dateData;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v37);
        Enumerator = NetworkManager__getTime_48346468((System_DateTime_o)v38, 0);
        if ( (__int64)v9 <= Enumerator )
          goto LABEL_37;
      }
    }
    v13 = v48;
    if ( !v48 )
      goto LABEL_35;
  }
  v23 = 0;
LABEL_37:
  v39 = v48;
  if ( v48 )
  {
    v40 = *(_QWORD *)v48;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_42;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_42:
      v43 = sub_224BC3C(v48, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
  }
  return v23 & 1;
}


bool CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x19
  void *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_c *v7; // x0
  int v8; // w8
  System_Collections_Generic_List_T__o *ExchangeSvtCampaign; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Func_object__bool__o *v12; // x21
  Il2CppObject *v13; // x20

  if ( (byte_596F643 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventCampaignEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_CondType___c__DisplayClass209_0__IsExchangeSvtBuff_b__0__);
    sub_2213A60(&CondType___c__DisplayClass209_0_TypeInfo);
    byte_596F643 = 1;
  }
  v3 = sub_2213CCC(CondType___c__DisplayClass209_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  v7 = DataManager_TypeInfo;
  v8 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v3 + 16) = targetId;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  ExchangeSvtCampaign = (System_Collections_Generic_List_T__o *)EventCampaignMaster__GetExchangeSvtCampaign(
                                                                  (EventCampaignMaster_o *)Master_object,
                                                                  0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExchangeSvtCampaign, 0) )
  {
    v12 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v12,
      (Il2CppObject *)v3,
      Method_CondType___c__DisplayClass209_0__IsExchangeSvtBuff_b__0__,
      0);
    if ( BasicHelper__Any_object_(
           ExchangeSvtCampaign,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventCampaignEntity___) )
    {
      goto LABEL_23;
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_20;
  if ( !v13 )
    goto LABEL_20;
  Master_object = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)v13, 0, *((_QWORD *)Master_object + 17), 0);
  if ( !Master_object )
    goto LABEL_20;
  if ( System_Collections_Generic_HashSet_int___Contains(
         (System_Collections_Generic_HashSet_int__o *)Master_object,
         *(_DWORD *)(v3 + 16),
         (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
LABEL_23:
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    if ( Master_object )
      return UserExchangeSvtMaster__GetExchangeSvtId((UserExchangeSvtMaster_o *)Master_object, *(_DWORD *)(v3 + 16), 0) != 0;
LABEL_20:
    sub_2213CDC(Master_object, v5);
  }
  return 0;
}


bool CondType__IsFavoriteServant(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserGameEntity_o *v8; // x22
  CondType_c *v9; // x0
  int favoriteServantIdOverride; // w20
  int32_t v11; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  CondType_c *v14; // x8
  int32_t v15; // w21
  int32_t favoriteServantLimit; // w0
  Il2CppObject *Master_object; // x24
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x23
  int64_t favoriteUserSvtId; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t FigureImageLimitCount; // w22
  bool v25; // zf
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596F663 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F663 = 1;
  }
  entity = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( SelfUserGame )
  {
    v8 = SelfUserGame;
    v9 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
      v9 = CondType_TypeInfo;
    }
    favoriteServantIdOverride = v9->static_fields->favoriteServantIdOverride;
    if ( favoriteServantIdOverride <= 0 )
    {
      favoriteServantIdOverride = UserGameEntity__GetFavoriteServantId(v8, 0);
    }
    else if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v6, v7);
      favoriteServantIdOverride = CondType_TypeInfo->static_fields->favoriteServantIdOverride;
    }
    if ( condValue <= 0 )
    {
      v25 = favoriteServantIdOverride == targetId;
LABEL_31:
      LOBYTE(SelfUserGame) = v25;
      return (char)SelfUserGame;
    }
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v6, v7);
    v11 = ImageLimitCount__ConvertDispLimitCountForClient(condValue, 0);
    v14 = CondType_TypeInfo;
    v15 = v11;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12, v13);
      v14 = CondType_TypeInfo;
    }
    favoriteServantLimit = v14->static_fields->favoriteServantLimit;
    if ( (favoriteServantLimit & 0x80000000) == 0 )
      goto LABEL_28;
    if ( v8->fields.favoriteUserSvtId < 1 )
      goto LABEL_34;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    v18 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( Master_object )
    {
      v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)v18;
      favoriteUserSvtId = v8->fields.favoriteUserSvtId;
      v18 = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              favoriteUserSvtId,
                              (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)v18 & 1) == 0 )
      {
        if ( !v20 )
          goto LABEL_36;
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                v20,
                &entity,
                favoriteUserSvtId,
                (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
          goto LABEL_34;
      }
      v18 = entity;
      if ( entity )
      {
        FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)entity, 0, 0, 0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
        v18 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( v18 )
        {
          favoriteServantLimit = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   (ServantLimitImageMaster_o *)v18,
                                   favoriteServantIdOverride,
                                   FigureImageLimitCount,
                                   0);
LABEL_28:
          if ( favoriteServantIdOverride == targetId )
          {
            v25 = v15 == favoriteServantLimit;
            goto LABEL_31;
          }
LABEL_34:
          LOBYTE(SelfUserGame) = 0;
          return (char)SelfUserGame;
        }
      }
    }
LABEL_36:
    sub_2213CDC(v18, v19);
  }
  return (char)SelfUserGame;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsGetServantByCheckTime(int32_t svtId, int64_t checkTime, int32_t checkType, const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F659 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__);
    byte_596F659 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, checkTime, *(_QWORD *)&checkType);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    svtId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( checkType != 1 )
  {
    if ( checkType == 2 )
    {
      if ( entity )
        return (__int64)entity[1].monitor <= checkTime;
LABEL_15:
      sub_2213CDC(Master_object, v9);
    }
    return 0;
  }
  if ( !entity )
    goto LABEL_15;
  return (__int64)entity[1].monitor >= checkTime;
}


bool CondType__IsImagePartsGroup(int32_t targetId, int64_t condValue, const MethodInfo *method)
{
  int32_t v3; // w19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2

  v3 = condValue;
  if ( (byte_596F65A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserBgImagePartsGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F65A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, condValue, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( UserImagePartsGroupMaster__ContainsImagePartsGroupIdx(
         (UserImagePartsGroupMaster_o *)Master_object,
         targetId,
         v3,
         0) )
  {
    return 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserBgImagePartsGroupMaster___);
  if ( !Master_object )
LABEL_12:
    sub_2213CDC(Master_object, v6);
  return UserBgImagePartsGroupMaster__ContainsImagePartsGroupIdx(
           (UserBgImagePartsGroupMaster_o *)Master_object,
           targetId,
           v3,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_596F592 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F592 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, method);
  return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&condValue) >= condValue;
}


bool CondType__IsLimitCountCondType(int32_t condType, const MethodInfo *method)
{
  return (unsigned int)(condType - 103) < 3 || (unsigned int)(condType - 150) < 3;
}


bool CondType__IsLimitedPeriodVoiceChangeTypeOn(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int32_t Value_48903564; // w0

  if ( (byte_596F62D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_8613/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_596F62D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  Value_48903564 = ConstantMaster__GetValue_48903564(
                     (ConstantMaster_o *)Master_object,
                     (System_String_o *)StringLiteral_8613/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0);
  return Value_48903564 && Value_48903564 == targetId;
}


bool CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5C5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C5 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                (UserEventMissionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                condId,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 5;
LABEL_15:
    sub_2213CDC(Instance, v4);
  }
  return 0;
}


bool CondType__IsMissionClear(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5C3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C3 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_22;
  if ( UserEventMissionMaster__TryGetEntity(
         (UserEventMissionMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         condId,
         0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  condId,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)EventMissionEntity__IsDaily((EventMissionEntity_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_19;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_22;
    Instance = (DataManager_o *)UserEventMissionEntity__IsTodayMissionData(entity, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
LABEL_19:
      if ( entity )
        return (entity->fields.missionProgressType & 0xFFFFFFFE) == 4;
LABEL_22:
      sub_2213CDC(Instance, v4);
    }
  }
  return 0;
}


bool CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C4 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                (UserEventMissionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                condId,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 4;
LABEL_15:
    sub_2213CDC(Instance, v4);
  }
  return 0;
}


bool CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_596F5C2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5C2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_14:
    sub_2213CDC(Instance, v6);
  Entity = UserEventMissionCondDetailMaster__GetEntity(
             (UserEventMissionCondDetailMaster_o *)MasterData_object,
             *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
             condId,
             0);
  if ( Entity )
    LOBYTE(Entity) = Entity->fields.progressNum >= condVal;
  return (char)Entity;
}


bool CondType__IsMultiTargetParamCond(int32_t condType, const MethodInfo *method)
{
  return ((unsigned int)(condType - 148) < 0x2C) & (0xD0000000403uLL >> ((unsigned __int8)condType + 108));
}


bool CondType__IsNotCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F609 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F609 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v6);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 11, commandCodeId, 0);
  }
}


bool CondType__IsNotEquipGet(int32_t condEquipId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_596F658 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F658 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  if ( CondType__IsEquipGet(condEquipId, method) )
  {
    return 0;
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v8);
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Master_object, 5, condEquipId, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsNotEventRaceQuestOrNotAllGroupGoal(int32_t questGroupId, int32_t eventTerm, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t v6; // w1
  bool v7; // w20
  __int64 v8; // x1
  __int64 v9; // x2
  CondType_c *v10; // x0
  int32_t EVENT_RACE_DEVIDER; // w20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5EB & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5EB = 1;
  }
  sameGroupQuestIds = 0;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&eventTerm, method);
  v6 = questGroupId;
  v7 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, v6, 1, &sameGroupQuestIds, 0, v3) )
  {
    v10 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v9);
      v10 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v10->static_fields->EVENT_RACE_DEVIDER;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v13);
    }
    return !EventRaceMaster__IsEveryTeamGoaled(
              (EventRaceMaster_o *)Instance,
              eventTerm / EVENT_RACE_DEVIDER,
              eventTerm % EVENT_RACE_DEVIDER,
              0);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
        int32_t questGroupId,
        int32_t eventTerm,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t v6; // w1
  bool v7; // w20
  __int64 v8; // x1
  __int64 v9; // x2
  CondType_c *v10; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int32_t Value; // w20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *MasterData_object; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5EC & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_11426/*"RACE_TARGET_GOAL_RANK"*/);
    byte_596F5EC = 1;
  }
  sameGroupQuestIds = 0;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&eventTerm, method);
  v6 = questGroupId;
  v7 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, v6, 1, &sameGroupQuestIds, 0, v3) )
  {
    v10 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v9);
      v10 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v10->static_fields->EVENT_RACE_DEVIDER;
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11426/*"RACE_TARGET_GOAL_RANK"*/, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !MasterData_object )
LABEL_14:
      sub_2213CDC(Instance, v14);
    return EventRaceMaster__GetGoaledTeamCount(
             (EventRaceMaster_o *)MasterData_object,
             eventTerm / EVENT_RACE_DEVIDER,
             eventTerm % EVENT_RACE_DEVIDER,
             (int64_t)Instance,
             0) < Value;
  }
  return v7;
}


bool CondType__IsNotEventShopPurchase(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x19
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  __int64 v8; // x8

  if ( (byte_596F5DB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0);
  if ( !Instance )
    goto LABEL_20;
  v5 = Instance;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v6);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v6);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !LODWORD(v5->fields.m_CancellationTokenSource) )
        sub_2213CE4(Instance);
      v8 = *(_QWORD *)&v5->fields._DispLog;
      if ( v8 )
      {
        if ( MasterData_object )
        {
          Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                        (UserShopMaster_o *)MasterData_object,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v8 + 20),
                                        0);
          if ( Instance )
            return SHIDWORD(Instance->fields.m_CancellationTokenSource) > 0;
        }
      }
    }
LABEL_20:
    sub_2213CDC(Instance, v4);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsNotQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        System_Int32_array **sameGroupQuestIds,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int v8; // w23

  v8 = condVal;
  if ( (byte_596F5D0 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F5D0 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&groupId, *(_QWORD *)&condVal);
  if ( v8 <= 1 )
    v8 = 1;
  return CondType__GetNotQuestGoupClearCount(
           questId,
           groupId,
           sameGroupQuestIds,
           isCheckResetFlag,
           (const MethodInfo *)isCheckResetFlag) < v8;
}


bool CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F5DC & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5DC = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v6);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsNotShopGroupLimit(int32_t shopGroupId, int32_t limitNum, const MethodInfo *method)
{
  int v5; // w8
  ShopGroupMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_ICollection_o *TargetEntityList; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12; // x2
  void *monitor; // x24
  UserShopMaster_o *v14; // x21
  __int64 v15; // x26
  int32_t v16; // w25
  __int64 v17; // x8
  int32_t v18; // w23
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596F5FC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5FC = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&limitNum, method);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_30;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           Master_object,
                                                           shopGroupId,
                                                           0);
  if ( BasicHelper__IsNullOrEmpty(TargetEntityList, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !TargetEntityList )
LABEL_30:
    sub_2213CDC(Master_object, v7);
  monitor = TargetEntityList[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v14 = (UserShopMaster_o *)Master_object;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= LODWORD(TargetEntityList[1].monitor) )
        sub_2213CE4(Master_object);
      v17 = *((_QWORD *)&TargetEntityList[2].klass + v15);
      if ( !v17 )
        goto LABEL_30;
      v18 = *(_DWORD *)(v17 + 16);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v12);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Master_object = (ShopGroupMaster_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v12);
        Master_object = (ShopGroupMaster_o *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_30;
      Master_object = (ShopGroupMaster_o *)UserShopMaster__TryGetEntity(
                                             v14,
                                             &entity,
                                             (int64_t)Master_object[2].fields.list[1].monitor,
                                             v18,
                                             0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_30;
        v16 += entity->fields.num;
      }
      if ( (_DWORD)monitor == (_DWORD)++v15 )
        return v16 < limitNum;
    }
  }
  v16 = 0;
  return v16 < limitNum;
}


bool CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // x8
  bool v7; // w23
  UserShopMaster_o *v8; // x20
  unsigned __int64 v9; // x24
  int32_t v10; // w22

  if ( (byte_596F5DD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5DD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  max_length = values->max_length;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = (UserShopMaster_o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v10 = values->m_Items[v9];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v8 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v8,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v10,
                                    0);
      if ( !Instance )
        break;
      if ( HIDWORD(Instance->fields.m_CancellationTokenSource) )
      {
        LODWORD(max_length) = values->max_length;
        v7 = (__int64)++v9 < (int)max_length;
        if ( (__int64)v9 < (int)max_length )
          continue;
      }
      return v7;
    }
LABEL_19:
    sub_2213CDC(Instance, v4);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpen(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        bool isCollection,
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
  long double v6; // q0
  BattleVoicePlayCondArgs_o *BattleData_k__BackingField; // x21
  char IsNotQuestGroupClear; // w0
  int32_t v14; // w0
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w0
  int32_t v18; // w1
  bool v19; // w2
  bool IsPurchaseShop; // w0
  int32_t v21; // w1
  int32_t v22; // w2
  bool v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  const MethodInfo *v26; // x5
  int64_t v27; // x21
  int64_t EventPointNoGroup; // x0
  int32_t ChallengeCountsFromId; // w0
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x21
  long double v35; // q0
  int64_t m_CancellationTokenSource_high; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *MasterData_object; // x21
  long double v40; // q0
  int32_t v41; // w0
  int32_t v42; // w1
  bool v43; // w2
  CondType_c *v44; // x0
  int32_t v45; // w0
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w0
  int32_t v49; // w1
  bool v50; // w2
  int32_t v51; // w0
  int32_t v52; // w1
  int32_t v53; // w2
  CondType_c *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  UserQuestMaster_o *UserQuestMaster; // x21
  long double v58; // q0
  int32_t v59; // w1
  int32_t v60; // w2
  bool v61; // w3
  int32_t v62; // w0
  int32_t v63; // w1
  int32_t v64; // w2
  int32_t v65; // w0
  int32_t v66; // w1
  int32_t v67; // w2
  __int64 v68; // x1
  __int64 v69; // x2
  Il2CppObject *v70; // x21
  long double v71; // q0
  __int64 lookup_low; // x8
  __int64 v73; // x1
  __int64 v74; // x2
  Il2CppObject *v75; // x21
  long double v76; // q0
  bool v77; // cc
  int32_t v78; // w0
  int32_t v79; // w1
  int32_t v80; // w2
  __int64 v81; // x1
  __int64 v82; // x2
  const MethodInfo *v83; // x5
  int64_t v84; // x21
  int32_t v85; // w0
  int32_t v86; // w1
  bool v87; // w2
  int32_t v88; // w0
  int64_t v89; // x1
  bool v90; // w2
  BattleVoicePlayCondArgs_o *v91; // x0
  int32_t v92; // w1
  int32_t v93; // w2
  bool v94; // w3
  BattleVoicePlayCondArgs_o *v95; // x0
  int32_t v96; // w1
  bool v97; // w2
  bool v98; // w3
  BattleVoicePlayCondArgs_o *v99; // x0
  int32_t v100; // w1
  UserGameEntity_o *v101; // x0
  int32_t v102; // w8
  __int64 v103; // x1
  __int64 v104; // x2
  Il2CppObject *v105; // x21
  long double v106; // q0
  int64_t Point; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  Il2CppObject *Master_object; // x21
  long double v111; // q0
  CondType_c *v112; // x0
  bool v113; // w3
  int32_t v114; // w0
  bool v115; // w4
  int32_t v116; // w0
  BattleVoicePlayCondArgs_o *v117; // x0
  int32_t v118; // w1
  int32_t v119; // w0
  int64_t v120; // x1
  int32_t v121; // w2
  int32_t v122; // w0
  int32_t v123; // w1
  bool v124; // w2
  CondType_c *v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  UserQuestMaster_o *v128; // x21
  long double v129; // q0
  int32_t v130; // w0
  int32_t v131; // w0
  int32_t v132; // w0
  int32_t v133; // w1
  int32_t v134; // w2
  CondType_c *v135; // x0
  int v136; // w8
  int32_t v137; // w0
  int32_t v138; // w1
  bool v139; // w1
  int32_t v140; // w0
  int32_t v141; // w1
  bool v142; // w2
  __int64 v143; // x1
  __int64 v144; // x2
  const MethodInfo *v145; // x5
  int64_t v146; // x21
  UserGameEntity_o *v147; // x0
  int32_t v148; // w8
  __int64 v149; // x1
  __int64 v150; // x2
  Il2CppObject *v151; // x21
  long double v152; // q0
  bool v153; // zf
  bool v154; // w3
  bool v155; // w4
  bool v156; // w0
  __int64 v157; // x1
  __int64 v158; // x2
  Il2CppObject *v159; // x21
  long double v160; // q0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t lv; // w8
  __int64 v163; // x1
  __int64 v164; // x2
  Il2CppObject *v165; // x21
  long double v166; // q0
  bool v167; // cc
  __int64 v168; // x1
  __int64 v169; // x2
  Il2CppObject *v170; // x21
  long double v171; // q0
  CondType_c *v172; // x0
  __int64 v173; // x1
  __int64 v174; // x2
  UserQuestMaster_o *v175; // x21
  long double v176; // q0
  int32_t ClearCountsFromId; // w0
  CondType_c *v178; // x0
  __int64 v179; // x1
  __int64 v180; // x2
  UserQuestMaster_o *v181; // x21
  long double v182; // q0
  CondType_c *v183; // x0
  __int64 v184; // x1
  __int64 v185; // x2
  UserQuestMaster_o *v186; // x21
  long double v187; // q0
  int64_t v188; // [xsp+0h] [xbp-50h] BYREF
  int64_t endedAt; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF

  BattleData_k__BackingField = battleCondArgs;
  if ( (byte_596F589 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F589 = 1;
  }
  IsNotQuestGroupClear = 0;
  sameGroupQuestIds = 0;
  v188 = 0;
  endedAt = 0;
  switch ( condType )
  {
    case 0:
      IsNotQuestGroupClear = 1;
      return IsNotQuestGroupClear & 1;
    case 1:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId, condValue);
      v27 = sub_2417958(0, v6);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v24, v25);
      return CondType__IsQuestClear(v27, targetId, condValue, 1, isCollection, v26);
    case 2:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
    case 6:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsServantLevel_47281356(targetId, condValue, (const MethodInfo *)condValue);
    case 7:
    case 104:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v14 = targetId;
      v15 = condValue;
      v16 = 1;
      return CondType__IsServantLimit_47281560(v14, v15, v16, (const MethodInfo *)isCollection);
    case 8:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
    case 9:
    case 98:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v17 = targetId;
      v18 = condValue;
      v19 = 1;
      return CondType__IsServantFriendship(v17, v18, v19, (const MethodInfo *)isCollection);
    case 10:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
    case 11:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEvent(targetId, *(const MethodInfo **)&targetId);
    case 12:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsArrivalDate(condValue, *(const MethodInfo **)&targetId);
    case 14:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsPurchaseQpShop(targetId, *(const MethodInfo **)&targetId);
    case 15:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsPurchaseStoneShop(targetId, *(const MethodInfo **)&targetId);
    case 16:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
    case 17:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
    case 20:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventEnd(targetId, *(const MethodInfo **)&targetId);
    case 22:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
    case 23:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
    case 24:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
    case 25:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
    case 26:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsNotQuestGroupClear = CondType__IsNotQuestGroupClear(0, targetId, condValue, &sameGroupQuestIds, 1, method);
      return IsNotQuestGroupClear & 1;
    case 27:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v122 = targetId;
      v123 = condValue;
      v124 = 1;
      return CondType__checkCondTypeRaidAlive(v122, v123, v124, (const MethodInfo *)isCollection);
    case 28:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v122 = targetId;
      v123 = condValue;
      v124 = 0;
      return CondType__checkCondTypeRaidAlive(v122, v123, v124, (const MethodInfo *)isCollection);
    case 30:
      v54 = CondType_TypeInfo;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v54);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v58 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v55, v56);
      Instance = (DataManager_o *)sub_2417958(0, v58);
      if ( !UserQuestMaster )
        goto LABEL_867;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(UserQuestMaster, (int64_t)Instance, targetId, 0);
      goto LABEL_727;
    case 32:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v21 = targetId;
      v22 = condValue;
      v23 = 1;
      return CondType__IsQuestGroupClear(0, v21, v22, v23, (const MethodInfo *)battleCondArgs);
    case 35:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v137 = targetId;
      v138 = 1;
      return CondType__IsPurchaseShop(v137, v138, (const MethodInfo *)condValue);
    case 36:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v140 = targetId;
      v141 = condValue;
      v142 = 1;
      goto LABEL_771;
    case 37:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 38:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
    case 39:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_856;
    case 40:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
    case 41:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_856;
    case 42:
      v172 = CondType_TypeInfo;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v175 = CondType__GetUserQuestMaster((const MethodInfo *)v172);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v176 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v173, v174);
      Instance = (DataManager_o *)sub_2417958(0, v176);
      if ( !v175 )
        goto LABEL_867;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(v175, (int64_t)Instance, targetId, 0);
      goto LABEL_831;
    case 43:
      v178 = CondType_TypeInfo;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v181 = CondType__GetUserQuestMaster((const MethodInfo *)v178);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v182 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v179, v180);
      Instance = (DataManager_o *)sub_2417958(0, v182);
      if ( !v181 )
        goto LABEL_867;
      v130 = UserQuestMaster__getChallengeCountsFromId(v181, (int64_t)Instance, targetId, 0);
      goto LABEL_824;
    case 44:
      v183 = CondType_TypeInfo;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v186 = CondType__GetUserQuestMaster((const MethodInfo *)v183);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v187 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v184, v185);
      Instance = (DataManager_o *)sub_2417958(0, v187);
      if ( !v186 )
        goto LABEL_867;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(v186, (int64_t)Instance, targetId, 0);
LABEL_831:
      v153 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_850;
    case 45:
      v125 = CondType_TypeInfo;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v128 = CondType__GetUserQuestMaster((const MethodInfo *)v125);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v129 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v126, v127);
      Instance = (DataManager_o *)sub_2417958(0, v129);
      if ( !v128 )
        goto LABEL_867;
      v130 = UserQuestMaster__getClearCountsFromId(v128, (int64_t)Instance, targetId, 0);
LABEL_824:
      v167 = v130 <= (int)condValue;
      goto LABEL_860;
    case 46:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId, condValue);
      v84 = sub_2417958(0, v6);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v81, v82);
      return CondType__IsQuestPhaseClear(v84, targetId, condValue, -1, 0, v83);
    case 47:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId, condValue);
      v146 = sub_2417958(0, v6);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v143, v144);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v146, targetId, condValue, -1, 0, v145);
      goto LABEL_856;
    case 48:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventPointGroupWin(targetId, condValue, (const MethodInfo *)condValue);
    case 49:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
    case 50:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsQuestAvailable(targetId, 0, (const MethodInfo *)condValue);
    case 51:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsQuestGroupAvailable(targetId, condValue, (const MethodInfo *)condValue);
    case 52:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 53:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 54:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
    case 55:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
    case 56:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsServantGetBeforeEventEnd(targetId, condValue, (const MethodInfo *)condValue);
    case 57:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsQuestClear_47284152(targetId, condValue, 0, (const MethodInfo *)isCollection);
    case 58:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v21 = targetId;
      v22 = condValue;
      v23 = 0;
      return CondType__IsQuestGroupClear(0, v21, v22, v23, (const MethodInfo *)battleCondArgs);
    case 59:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventGroupPointRatioInTerm(targetId, condValue, (const MethodInfo *)condValue);
    case 60:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventGroupRankInTerm(targetId, condValue, (const MethodInfo *)condValue);
    case 61:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsNotEventRaceQuestOrNotAllGroupGoal(targetId, condValue, (const MethodInfo *)condValue);
    case 62:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventRaceGroupTotalWin(targetId, condValue, (const MethodInfo *)condValue);
    case 63:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
    case 64:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
    case 66:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsSvtRecoverd(targetId, condValue, (const MethodInfo *)condValue);
    case 67:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsShopReleased(targetId, *(const MethodInfo **)&targetId);
    case 68:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(targetId, 0);
      goto LABEL_211;
    case 69:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsVoicePlayCount(targetId, condValue, (const MethodInfo *)condValue);
    case 70:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEquipWithTargetCostume(targetId, condValue, (const MethodInfo *)condValue);
    case 71:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__checkCondTypeRaidGroupAlive(targetId, condValue, 0, (const MethodInfo *)isCollection);
    case 72:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_856;
    case 73:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_856;
    case 74:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v140 = targetId;
      v141 = condValue;
      v142 = 0;
LABEL_771:
      IsPurchaseShop = CondType__IsQuestClear_47284152(v140, v141, v142, (const MethodInfo *)isCollection);
      goto LABEL_856;
    case 75:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v59 = targetId;
      v60 = condValue;
      v61 = 0;
      goto LABEL_781;
    case 76:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_856;
    case 77:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_856;
    case 78:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 79:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 80:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsNotEventRaceQuestOrNotTargetRankGoal(targetId, condValue, (const MethodInfo *)condValue);
    case 81:
      if ( BattleData_k__BackingField )
        return BattleVoicePlayCondArgs__IsOpenPlayerGenderType(BattleData_k__BackingField, targetId, 0);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsPlayerGenderType(targetId, *(const MethodInfo **)&targetId);
    case 82:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsShopGroupLimit(targetId, condValue, (const MethodInfo *)condValue);
    case 83:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v40 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37, v38);
      Instance = (DataManager_o *)sub_2417958(0, v40);
      if ( !MasterData_object )
        goto LABEL_867;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            (UserEventPointMaster_o *)MasterData_object,
                            (int64_t)Instance,
                            targetId / 100,
                            targetId,
                            0);
      goto LABEL_211;
    case 84:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      v170 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v171 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v168, v169);
      Instance = (DataManager_o *)sub_2417958(0, v171);
      if ( !v170 )
        goto LABEL_867;
      Point = UserEventPointMaster__GetPoint(
                (UserEventPointMaster_o *)v170,
                (int64_t)Instance,
                targetId / 100,
                targetId,
                0);
      goto LABEL_764;
    case 85:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      v75 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v76 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v73, v74);
      Instance = (DataManager_o *)sub_2417958(0, v76);
      if ( !v75 )
        goto LABEL_867;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(
                            (UserEventPointMaster_o *)v75,
                            (int64_t)Instance,
                            targetId,
                            -1,
                            0);
LABEL_211:
      v77 = EventPointNoGroup < condValue;
      goto LABEL_728;
    case 86:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      v105 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v106 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v103, v104);
      Instance = (DataManager_o *)sub_2417958(0, v106);
      if ( !v105 )
        goto LABEL_867;
      Point = UserEventPointMaster__GetEventPointTotal(
                (UserEventPointMaster_o *)v105,
                (int64_t)Instance,
                targetId,
                -1,
                0);
LABEL_764:
      v167 = Point <= condValue;
      goto LABEL_860;
    case 87:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      v34 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v35 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32, v33);
      Instance = (DataManager_o *)sub_2417958(0, v35);
      if ( !v34 )
        goto LABEL_867;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v34,
                                    (int64_t)Instance,
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_867;
      m_CancellationTokenSource_high = SHIDWORD(Instance->fields.m_CancellationTokenSource);
      goto LABEL_458;
    case 88:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      v165 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v166 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v163, v164);
      Instance = (DataManager_o *)sub_2417958(0, v166);
      if ( !v165 )
        goto LABEL_867;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v165,
                                    (int64_t)Instance,
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_867;
      v167 = SHIDWORD(Instance->fields.m_CancellationTokenSource) <= condValue;
      goto LABEL_860;
    case 89:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      v151 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v152 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v149, v150);
      Instance = (DataManager_o *)sub_2417958(0, v152);
      if ( !v151 )
        goto LABEL_867;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v151,
                                    (int64_t)Instance,
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_867;
      lookup_low = *(int *)&Instance->fields._DispLog;
      goto LABEL_551;
    case 90:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
    case 91:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 93:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
    case 95:
      v44 = CondType_TypeInfo;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v44);
    case 96:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 97:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
    case 99:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v17 = targetId;
      v18 = condValue;
      v19 = 0;
      return CondType__IsServantFriendship(v17, v18, v19, (const MethodInfo *)isCollection);
    case 100:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
    case 101:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
    case 102:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 103:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v14 = targetId;
      v15 = condValue;
      v16 = 0;
      return CondType__IsServantLimit_47281560(v14, v15, v16, (const MethodInfo *)isCollection);
    case 105:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v14 = targetId;
      v15 = condValue;
      v16 = 2;
      return CondType__IsServantLimit_47281560(v14, v15, v16, (const MethodInfo *)isCollection);
    case 106:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsPlayedNotMeetsScript(targetId, *(const MethodInfo **)&targetId);
    case 107:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsCommandCodeGet(targetId, *(const MethodInfo **)&targetId);
    case 108:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsNotCommandCodeGet(targetId, *(const MethodInfo **)&targetId);
    case 109:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsAllUserBoxGachaCount(targetId, condValue, (const MethodInfo *)condValue);
    case 110:
    case 111:
    case 112:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsTotalTdLvCond(condType, targetId, condValue, (const MethodInfo *)isCollection);
    case 113:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsCommonRelease(targetId, isCollection, (const MethodInfo *)condValue);
    case 116:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      v70 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v71 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v68, v69);
      Instance = (DataManager_o *)sub_2417958(0, v71);
      if ( !v70 )
        goto LABEL_867;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v70,
                                    (int64_t)Instance,
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_867;
      lookup_low = SHIDWORD(Instance->fields.m_CancellationTokenSource);
      goto LABEL_551;
    case 117:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsBoardGameTokenHaving(targetId, *(const MethodInfo **)&targetId);
    case 118:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsBoardGameTokenGroupHaving(targetId, condValue, (const MethodInfo *)condValue);
    case 119:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
    case 120:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 121:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
    case 122:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 123:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_867;
      v159 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v160 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v157, v158);
      Instance = (DataManager_o *)sub_2417958(0, v160);
      if ( !v159 )
        goto LABEL_867;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v159,
                                    (int64_t)Instance,
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_867;
      IsNotQuestGroupClear = SHIDWORD(Instance->fields.m_CancellationTokenSource) != condValue;
      return IsNotQuestGroupClear & 1;
    case 127:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsBoardGameTokenGetNum(targetId, condValue, (const MethodInfo *)condValue);
    case 128:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v85 = targetId;
      v86 = condValue;
      v87 = 1;
      return CondType__IsBattleLineReusltCount(v85, v86, v87, (const MethodInfo *)isCollection);
    case 129:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v85 = targetId;
      v86 = condValue;
      v87 = 0;
      return CondType__IsBattleLineReusltCount(v85, v86, v87, (const MethodInfo *)isCollection);
    case 130:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v41 = targetId;
      v42 = condValue;
      v43 = 1;
      goto LABEL_788;
    case 131:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v41 = targetId;
      v42 = condValue;
      v43 = 0;
LABEL_788:
      v98 = 0;
      return CondType__IsBattleLineReusltConsecutiveCount(v41, v42, v43, v98, (const MethodInfo *)battleCondArgs);
    case 132:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v41 = targetId;
      v42 = condValue;
      v43 = 1;
      goto LABEL_286;
    case 133:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v41 = targetId;
      v42 = condValue;
      v43 = 0;
LABEL_286:
      v98 = 1;
      return CondType__IsBattleLineReusltConsecutiveCount(v41, v42, v43, v98, (const MethodInfo *)battleCondArgs);
    case 134:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v48 = targetId;
      v49 = condValue;
      v50 = 1;
      return CondType__IsBattleGroupReusltCount(v48, v49, v50, (const MethodInfo *)isCollection);
    case 135:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v48 = targetId;
      v49 = condValue;
      v50 = 0;
      return CondType__IsBattleGroupReusltCount(v48, v49, v50, (const MethodInfo *)isCollection);
    case 136:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 137:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__checkRaidTimeLimitOver(targetId, condValue, (const MethodInfo *)condValue);
    case 138:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__TimeLimitRaidDead(targetId, condValue, (const MethodInfo *)condValue);
    case 140:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__RaidBattleProgressAbove(targetId, (float)condValue, *(const MethodInfo **)&targetId);
    case 141:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 143:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__UserEventMapValueContains(targetId, condValue, (const MethodInfo *)condValue);
    case 144:
      v112 = CondType_TypeInfo;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsResetBirthDay((const MethodInfo *)v112);
    case 145:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
    case 146:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 147:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsPurchaseValidShop(targetId, *(const MethodInfo **)&targetId);
    case 153:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventTypeStartTimeToEndDate(targetId, condValue, (const MethodInfo *)condValue);
    case 154:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
    case 155:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 156:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsLimitedPeriodVoiceChangeTypeOn(targetId, *(const MethodInfo **)&targetId);
    case 157:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsStartRandomMission(targetId, *(const MethodInfo **)&targetId);
    case 158:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__GetRandomMissionClearNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 162:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId, condValue);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_867;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0);
      goto LABEL_727;
    case 166:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsContainWeekdays(targetId, condValue, (const MethodInfo *)condValue);
    case 167:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId, condValue);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
        goto LABEL_867;
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0);
LABEL_727:
      v77 = ChallengeCountsFromId < (int)condValue;
      goto LABEL_728;
    case 168:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
    case 169:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 170:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
    case 171:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 172:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
    case 173:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 174:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_727;
    case 175:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsSuperBossDamageAbove(targetId, condValue, (const MethodInfo *)condValue);
    case 176:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsSuperBossDamageBellow(targetId, condValue, (const MethodInfo *)condValue);
    case 177:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventMissionGroupClear(targetId, condValue, (const MethodInfo *)condValue);
    case 178:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 179:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_856;
    case 180:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 181:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 182:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 183:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 184:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 185:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
    case 186:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_856;
    case 187:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_727;
    case 188:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsCompleteExchangeServantTargetLevel(targetId, condValue, (const MethodInfo *)condValue);
    case 189:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsCompleteExchangeServantMaxLimit(targetId, condValue, (const MethodInfo *)condValue);
    case 190:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsCompleteExchangeServantTargetSkillLevel(targetId, condValue, (const MethodInfo *)condValue);
    case 191:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsCompleteExchangeServantTargetFriendShipRank(targetId, condValue, (const MethodInfo *)condValue);
    case 192:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsExchangeSvtBuff(targetId, *(const MethodInfo **)&targetId);
    case 193:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v45 = targetId;
      v46 = condValue;
      v47 = 1;
      goto LABEL_703;
    case 194:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v45 = targetId;
      v46 = condValue;
      v47 = 2;
LABEL_703:
      v154 = 0;
      goto LABEL_704;
    case 195:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v51 = targetId;
      v52 = condValue;
      v53 = 1;
      goto LABEL_709;
    case 196:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v51 = targetId;
      v52 = condValue;
      v53 = 2;
LABEL_709:
      v113 = 0;
      goto LABEL_710;
    case 197:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v45 = targetId;
      v46 = condValue;
      v47 = 1;
      goto LABEL_657;
    case 198:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v45 = targetId;
      v46 = condValue;
      v47 = 2;
LABEL_657:
      v154 = 1;
LABEL_704:
      v155 = 1;
      return CondType__IsDeadRaidDay(v45, v46, v47, v154, v155, method);
    case 199:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v45 = targetId;
      v46 = condValue;
      v47 = 2;
      goto LABEL_555;
    case 200:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v45 = targetId;
      v46 = condValue;
      v47 = 1;
LABEL_555:
      v154 = 1;
      v155 = 0;
      return CondType__IsDeadRaidDay(v45, v46, v47, v154, v155, method);
    case 201:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v51 = targetId;
      v52 = condValue;
      v53 = 1;
      goto LABEL_355;
    case 202:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v51 = targetId;
      v52 = condValue;
      v53 = 2;
LABEL_355:
      v113 = 1;
LABEL_710:
      v115 = 1;
      return CondType__IsDeadRaidGroup(v51, v52, v53, v113, v115, method);
    case 203:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v51 = targetId;
      v52 = condValue;
      v53 = 2;
      goto LABEL_365;
    case 204:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v51 = targetId;
      v52 = condValue;
      v53 = 1;
LABEL_365:
      v113 = 1;
      v115 = 0;
      return CondType__IsDeadRaidGroup(v51, v52, v53, v113, v115, method);
    case 205:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v59 = targetId;
      v60 = condValue;
      v61 = 1;
LABEL_781:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v59, v60, v61, (const MethodInfo *)battleCondArgs);
      goto LABEL_856;
    case 206:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v65 = targetId;
      v66 = condValue;
      v67 = 1;
      return CondType__IsOpenRaidGroupNum(v65, v66, v67, (const MethodInfo *)isCollection);
    case 207:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v65 = targetId;
      v66 = condValue;
      v67 = 2;
      return CondType__IsOpenRaidGroupNum(v65, v66, v67, (const MethodInfo *)isCollection);
    case 208:
      v135 = CondType_TypeInfo;
      v136 = *(&CondType_TypeInfo->_2.cctor_finished + 1);
      if ( (_DWORD)condValue )
      {
        if ( !v136 )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
        return CondType__IsAuthTDAccelerate((const MethodInfo *)v135);
      }
      if ( !v136 )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsAuthTDAccelerate((const MethodInfo *)v135);
LABEL_856:
      IsNotQuestGroupClear = !IsPurchaseShop;
      return IsNotQuestGroupClear & 1;
    case 209:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v91 = BattleData_k__BackingField;
      v92 = targetId;
      v93 = condValue;
      v94 = 0;
      return BattleVoicePlayCondArgs__IsPlayQuestPhase(v91, v92, v93, v94, 0);
    case 210:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v91 = BattleData_k__BackingField;
      v92 = targetId;
      v93 = condValue;
      v94 = 1;
      return BattleVoicePlayCondArgs__IsPlayQuestPhase(v91, v92, v93, v94, 0);
    case 211:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEventBetweenStartToEnd(targetId, *(const MethodInfo **)&targetId);
    case 212:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v62 = targetId;
      v63 = condValue;
      v64 = 1;
      return CondType__IsCompleteUserGameCommonValue(v62, v63, v64, (const MethodInfo *)isCollection);
    case 213:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v62 = targetId;
      v63 = condValue;
      v64 = 2;
      return CondType__IsCompleteUserGameCommonValue(v62, v63, v64, (const MethodInfo *)isCollection);
    case 214:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v62 = targetId;
      v63 = condValue;
      v64 = 0;
      return CondType__IsCompleteUserGameCommonValue(v62, v63, v64, (const MethodInfo *)isCollection);
    case 215:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsElapsedTimeAfterQuestClear(targetId, condValue, (const MethodInfo *)condValue);
    case 216:
      if ( BattleData_k__BackingField )
        BattleData_k__BackingField = (BattleVoicePlayCondArgs_o *)BattleData_k__BackingField->fields._BattleData_k__BackingField;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsStartingMember(
               targetId,
               condValue,
               (BattleData_o *)BattleData_k__BackingField,
               (const MethodInfo *)isCollection);
    case 217:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v88 = targetId;
      v89 = condValue;
      v90 = 1;
      return CondType__IsClearLatestQuestPhase(v88, v89, v90, (const MethodInfo *)isCollection);
    case 218:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v88 = targetId;
      v89 = condValue;
      v90 = 0;
      return CondType__IsClearLatestQuestPhase(v88, v89, v90, (const MethodInfo *)isCollection);
    case 219:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v137 = targetId;
      v138 = condValue;
      return CondType__IsPurchaseShop(v137, v138, (const MethodInfo *)condValue);
    case 220:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsAboveEventTradeTotalNum(targetId, condValue, (const MethodInfo *)condValue);
    case 221:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v132 = targetId;
      v133 = condValue;
      v134 = 2;
      return CondType__IsAchieveLimitedMission(v132, v133, v134, (const MethodInfo *)isCollection);
    case 222:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v132 = targetId;
      v133 = condValue;
      v134 = 1;
      return CondType__IsAchieveLimitedMission(v132, v133, v134, (const MethodInfo *)isCollection);
    case 223:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 225:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v117 = BattleData_k__BackingField;
      v118 = 1;
      return BattleVoicePlayCondArgs__IsOpenBattlePoint(v117, v118, targetId, condValue, 0);
    case 226:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v117 = BattleData_k__BackingField;
      v118 = 2;
      return BattleVoicePlayCondArgs__IsOpenBattlePoint(v117, v118, targetId, condValue, 0);
    case 228:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsBeforeArrivalData(condValue, *(const MethodInfo **)&targetId);
    case 229:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_867;
      IsNotQuestGroupClear = SHIDWORD(Instance[1].fields.m_CancellationTokenSource) < (int)condValue;
      return IsNotQuestGroupClear & 1;
    case 230:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_867;
      v77 = SHIDWORD(Instance[1].fields.m_CancellationTokenSource) < (int)condValue;
      goto LABEL_728;
    case 231:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      return BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
               BattleData_k__BackingField,
               targetId,
               0);
    case 232:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      return BattleVoicePlayCondArgs__CheckMainTargetIndividuality(BattleData_k__BackingField, targetId, 0);
    case 233:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsBeforeQuestClearTime(targetId, condValue, (const MethodInfo *)condValue);
    case 234:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsAfterQuestClearTime(targetId, condValue, (const MethodInfo *)condValue);
    case 235:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
                         BattleData_k__BackingField,
                         targetId,
                         0);
      goto LABEL_856;
    case 236:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(BattleData_k__BackingField, targetId, 0);
      goto LABEL_856;
    case 237:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 238:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId, condValue);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v111 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v108, v109);
      Instance = (DataManager_o *)sub_2417958(0, v111);
      if ( !Master_object
        || (Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                          (UserEventMaster_o *)Master_object,
                                          (int64_t)Instance,
                                          targetId,
                                          0)) == 0 )
      {
LABEL_867:
        sub_2213CDC(Instance, v31);
      }
      lookup_low = SLODWORD(Instance->fields.lookup);
LABEL_551:
      v153 = lookup_low == condValue;
      goto LABEL_850;
    case 241:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsImagePartsGroup(targetId, condValue, (const MethodInfo *)condValue);
    case 242:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( SelfUserGame )
        lv = SelfUserGame->fields.lv;
      else
        lv = 0;
      v77 = lv < targetId;
      goto LABEL_728;
    case 243:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v147 = UserGameMaster__getSelfUserGame(0);
      if ( v147 )
        v148 = v147->fields.lv;
      else
        v148 = 0;
      v167 = v148 <= targetId;
LABEL_860:
      IsNotQuestGroupClear = v167;
      return IsNotQuestGroupClear & 1;
    case 244:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v101 = UserGameMaster__getSelfUserGame(0);
      if ( v101 )
        v102 = v101->fields.lv;
      else
        v102 = 0;
      v153 = v102 == targetId;
LABEL_850:
      IsNotQuestGroupClear = v153;
      return IsNotQuestGroupClear & 1;
    case 245:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v78 = targetId;
      v79 = condValue;
      v80 = 1;
      return CondType__IsCompleteHighestWaveValue(v78, v79, v80, (const MethodInfo *)isCollection);
    case 246:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v78 = targetId;
      v79 = condValue;
      v80 = 2;
      return CondType__IsCompleteHighestWaveValue(v78, v79, v80, (const MethodInfo *)isCollection);
    case 247:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsNotQuestGroupClear = CondType__IsValidPrivilege(
                               targetId,
                               condValue,
                               &endedAt,
                               &v188,
                               (const MethodInfo *)battleCondArgs);
      return IsNotQuestGroupClear & 1;
    case 248:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsValidPrivilege(
                         targetId,
                         condValue,
                         &v188,
                         &endedAt,
                         (const MethodInfo *)battleCondArgs);
      goto LABEL_856;
    case 249:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      return BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(BattleData_k__BackingField, targetId, 0);
    case 250:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      IsPurchaseShop = BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(
                         BattleData_k__BackingField,
                         targetId,
                         0);
      goto LABEL_856;
    case 251:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      return BattleVoicePlayCondArgs__IsSelectTreasureDvcCard(BattleData_k__BackingField, targetId, 0);
    case 252:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v95 = BattleData_k__BackingField;
      v96 = condValue;
      v97 = 1;
      return BattleVoicePlayCondArgs__IsOpenBattleSvtFriendShip(v95, v96, v97, 0);
    case 253:
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v95 = BattleData_k__BackingField;
      v96 = condValue;
      v97 = 0;
      return BattleVoicePlayCondArgs__IsOpenBattleSvtFriendShip(v95, v96, v97, 0);
    case 254:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsElapsedTimeAfterSvtGet(targetId, condValue, (const MethodInfo *)condValue);
    case 255:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsElapsedTimeAfterQuestClear(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 256:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsElapsedTimeAfterSvtGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 258:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v131 = CondType__CountGrandServantSet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_457;
    case 259:
      return OpeningMovieMaster__IsPlayedOpeningMovie(targetId, 1, 0);
    case 260:
      IsPurchaseShop = OpeningMovieMaster__IsPlayedOpeningMovie(targetId, 1, 0);
      goto LABEL_856;
    case 263:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsNotShopGroupLimit(targetId, condValue, (const MethodInfo *)condValue);
    case 264:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsEquipGet(targetId, *(const MethodInfo **)&targetId);
    case 265:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsNotEquipGet(targetId, *(const MethodInfo **)&targetId);
    case 266:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v119 = targetId;
      v120 = condValue;
      v121 = 2;
      return CondType__IsGetServantByCheckTime(v119, v120, v121, (const MethodInfo *)isCollection);
    case 267:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v119 = targetId;
      v120 = condValue;
      v121 = 1;
      return CondType__IsGetServantByCheckTime(v119, v120, v121, (const MethodInfo *)isCollection);
    case 268:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsQuestAvailable(targetId, 1, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 269:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsImagePartsGroup(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 270:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsUseEventPassiveSkillGivenItem(targetId, condValue, (const MethodInfo *)condValue);
    case 271:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsPurchaseShop = CondType__IsUseEventPassiveSkillGivenItem(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_856;
    case 272:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( BattleData_k__BackingField )
        v156 = BattleVoicePlayCondArgs__CheckServantIndividuality(BattleData_k__BackingField, targetId, 0);
      else
        v156 = 0;
      IsNotQuestGroupClear = BattleData_k__BackingField != 0 && v156;
      return IsNotQuestGroupClear & 1;
    case 273:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckServantIndividuality(BattleData_k__BackingField, targetId, 0);
      goto LABEL_856;
    case 274:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v99 = BattleData_k__BackingField;
      v100 = 1;
      return BattleVoicePlayCondArgs__IsOpenBattleValue(v99, v100, targetId, condValue, 0);
    case 275:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v99 = BattleData_k__BackingField;
      v100 = 2;
      return BattleVoicePlayCondArgs__IsOpenBattleValue(v99, v100, targetId, condValue, 0);
    case 276:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v99 = BattleData_k__BackingField;
      v100 = 5;
      return BattleVoicePlayCondArgs__IsOpenBattleValue(v99, v100, targetId, condValue, 0);
    case 277:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v99 = BattleData_k__BackingField;
      v100 = 6;
      return BattleVoicePlayCondArgs__IsOpenBattleValue(v99, v100, targetId, condValue, 0);
    case 278:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !BattleData_k__BackingField )
        goto LABEL_666;
      v117 = BattleData_k__BackingField;
      v118 = 5;
      return BattleVoicePlayCondArgs__IsOpenBattlePoint(v117, v118, targetId, condValue, 0);
    case 279:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( BattleData_k__BackingField )
      {
        v117 = BattleData_k__BackingField;
        v118 = 6;
        return BattleVoicePlayCondArgs__IsOpenBattlePoint(v117, v118, targetId, condValue, 0);
      }
      else
      {
LABEL_666:
        IsNotQuestGroupClear = 0;
        return IsNotQuestGroupClear & 1;
      }
    case 280:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v114 = 1;
      goto LABEL_508;
    case 281:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v114 = 2;
      goto LABEL_508;
    case 282:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v114 = 0;
LABEL_508:
      v139 = 0;
      return CondType__IsOpenBattleEntryTotalCount(
               v114,
               v139,
               condValue,
               BattleData_k__BackingField,
               (const MethodInfo *)battleCondArgs);
    case 283:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v114 = 1;
      goto LABEL_512;
    case 284:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v114 = 2;
      goto LABEL_512;
    case 285:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v114 = 0;
LABEL_512:
      v139 = 1;
      return CondType__IsOpenBattleEntryTotalCount(
               v114,
               v139,
               condValue,
               BattleData_k__BackingField,
               (const MethodInfo *)battleCondArgs);
    case 286:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v116 = 1;
      return CondType__IsCountJobLevelMax(v116, targetId, condValue, (const MethodInfo *)isCollection);
    case 287:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v116 = 2;
      return CondType__IsCountJobLevelMax(v116, targetId, condValue, (const MethodInfo *)isCollection);
    case 288:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v116 = 0;
      return CondType__IsCountJobLevelMax(v116, targetId, condValue, (const MethodInfo *)isCollection);
    case 289:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v131 = CondType__CountServantHpReachNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_457;
    case 290:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      v131 = CondType__CountServantAtkReachNum(targetId, *(const MethodInfo **)&targetId);
LABEL_457:
      m_CancellationTokenSource_high = v131;
LABEL_458:
      v77 = m_CancellationTokenSource_high < condValue;
LABEL_728:
      IsNotQuestGroupClear = !v77;
      return IsNotQuestGroupClear & 1;
    case 291:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      return CondType__IsFavoriteServant(targetId, condValue, (const MethodInfo *)condValue);
    default:
      return IsNotQuestGroupClear & 1;
  }
}


bool CondType__IsOpenBattleEntryTotalCount(
        int32_t checkType,
        bool isEnemy,
        int32_t condNum,
        BattleVoicePlayCondArgs_o *condArgs,
        const MethodInfo *method)
{
  int32_t BattleEntryEnemyTotalCount; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  int32_t v14; // w21

  if ( (byte_596F65C & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F65C = 1;
  }
  if ( !condArgs )
    return 0;
  if ( isEnemy )
    BattleEntryEnemyTotalCount = BattleVoicePlayCondArgs__GetBattleEntryEnemyTotalCount(condArgs, 0);
  else
    BattleEntryEnemyTotalCount = BattleVoicePlayCondArgs__GetBattleEntryPlayerTotalCount(condArgs, 0);
  v14 = BattleEntryEnemyTotalCount;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10, v11);
  return CondType__GetCompareCheckType(checkType, condNum, v14, v12);
}


bool CondType__IsOpenBattlePoint(
        int32_t valueCondType,
        int32_t battlePointId,
        int32_t condNum,
        BattleVoicePlayCondArgs_o *condArgs,
        const MethodInfo *method)
{
  return condArgs && BattleVoicePlayCondArgs__IsOpenBattlePoint(condArgs, valueCondType, battlePointId, condNum, 0);
}


bool CondType__IsOpenBattleValue(
        int32_t valueCondType,
        int32_t battleValueId,
        int32_t condNum,
        BattleVoicePlayCondArgs_o *condArgs,
        const MethodInfo *method)
{
  return condArgs && BattleVoicePlayCondArgs__IsOpenBattleValue(condArgs, valueCondType, battleValueId, condNum, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpenExcludeBeforeClearQuest(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  bool IsQuestClear_47284152; // w0
  NetworkManager_c *v13; // x0
  int64_t userIdNumber; // x23
  NetworkManager_c *v15; // x0
  int64_t v16; // x23

  if ( (byte_596F58A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F58A = 1;
  }
  if ( condType <= 36 )
  {
    if ( condType != 1 )
    {
      if ( condType != 36 )
      {
LABEL_13:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
        return CondType__IsOpen(condType, targetId, condValue, 0, 0, method);
      }
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsQuestClear_47284152 = CondType__IsQuestClear_47284152(
                                targetId,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                *(const MethodInfo **)&beforeClearQuestId);
      return !IsQuestClear_47284152;
    }
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
    return CondType__IsQuestClear_47284152(
             targetId,
             beforeClearQuestId,
             isCheckResetFlag,
             *(const MethodInfo **)&beforeClearQuestId);
  }
  else
  {
    if ( condType != 46 )
    {
      if ( condType != 47 )
      {
        if ( condType == 113 )
          return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
                   targetId,
                   beforeClearQuestId,
                   isCheckResetFlag,
                   0);
        goto LABEL_13;
      }
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId, condValue);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v13 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId, condValue);
        v13 = NetworkManager_TypeInfo;
      }
      userIdNumber = v13->static_fields->userIdNumber;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
      IsQuestClear_47284152 = CondType__IsQuestPhaseClear(
                                userIdNumber,
                                targetId,
                                condValue,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                method);
      return !IsQuestClear_47284152;
    }
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId, condValue);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v15 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId, condValue);
      v15 = NetworkManager_TypeInfo;
    }
    v16 = v15->static_fields->userIdNumber;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
    return CondType__IsQuestPhaseClear(v16, targetId, condValue, beforeClearQuestId, isCheckResetFlag, method);
  }
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpenForUsrSvt(int32_t condType, int32_t condValue, int64_t userSvtId, const MethodInfo *method)
{
  bool v7; // w0
  int64_t v8; // x0
  int32_t v9; // w1
  int32_t v10; // w2
  bool result; // w0
  int64_t v12; // x0
  int32_t v13; // w1
  int32_t v14; // w2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject v18; // q1
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x5
  int64_t v22; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-50h]

  if ( (byte_596F595 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F595 = 1;
  }
  if ( condType <= 38 )
  {
    v7 = 1;
    switch ( condType )
    {
      case 0:
        return v7;
      case 1:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
          || (Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           userSvtId,
                           (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
        {
          sub_2213CDC(Instance, v16);
        }
        v18 = Instance[4];
        *(Il2CppObject *)&v24.fields.currentCryptoKey = Instance[3];
        *(Il2CppObject *)&v24.fields.fakeValue = v18;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17);
        v23 = v24;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
        return CondType__IsQuestClear(v22, condValue, -1, 0, 0, v21);
      case 6:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        result = CondType__IsServantLevel(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 7:
        goto LABEL_20;
      case 8:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        result = CondType__IsServantGet_47328584(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 9:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        result = CondType__IsServantFriendship_47328740(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 10:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        result = CondType__IsServantGroup_47329280(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 11:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
        break;
      case 14:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        result = CondType__IsPurchaseQpShop(condValue, *(const MethodInfo **)&condValue);
        break;
      case 15:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        result = CondType__IsPurchaseStoneShop(condValue, *(const MethodInfo **)&condValue);
        break;
      case 38:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        result = CondType__IsNotServantGet(condValue, *(const MethodInfo **)&condValue);
        break;
      default:
        return 0;
    }
  }
  else
  {
    v7 = 0;
    if ( condType <= 149 )
    {
      switch ( condType )
      {
        case 'g':
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
          v8 = userSvtId;
          v9 = condValue;
          v10 = 0;
          return CondType__IsServantLimit(v8, v9, v10, method);
        case 'h':
LABEL_20:
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
          v8 = userSvtId;
          v9 = condValue;
          v10 = 1;
          return CondType__IsServantLimit(v8, v9, v10, method);
        case 'i':
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
          v8 = userSvtId;
          v9 = condValue;
          v10 = 2;
          return CondType__IsServantLimit(v8, v9, v10, method);
      }
      return v7;
    }
    switch ( condType )
    {
      case 150:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        v12 = userSvtId;
        v13 = condValue;
        v14 = 0;
        break;
      case 151:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        v12 = userSvtId;
        v13 = condValue;
        v14 = 1;
        break;
      case 152:
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
        v12 = userSvtId;
        v13 = condValue;
        v14 = 2;
        break;
      default:
        return v7;
    }
    return CondType__IsServantLimitImage(v12, v13, v14, method);
  }
  return result;
}


bool CondType__IsOpenRaidGroupNum(int32_t eventId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  EventRaidMaster_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  Il2CppObject *Master_object; // x24
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x25
  int max_length; // w8
  int64_t v18; // x26
  unsigned int v19; // w20
  int32_t v20; // w19
  Il2CppClass **v21; // x8
  Il2CppClass *v22; // x27
  __int64 v23; // x8
  __int64 v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x27
  CondType___c_c *v26; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__213_0; // x28
  Il2CppObject *v29; // x29
  struct CondType___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v38; // [xsp+0h] [xbp-70h]
  int32_t v39; // [xsp+4h] [xbp-6Ch]
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596F646 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_QuestReleaseEntity___);
    sub_2213A60(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CondType___c__IsOpenRaidGroupNum_b__213_0__);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F646 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_40;
  v39 = checkType;
  v9 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
  Instance = NetworkManager__getTime(0);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_40:
    sub_2213CDC(Instance, v8);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v18 = Instance;
    v19 = 0;
    v20 = 0;
    v38 = num;
    while ( 1 )
    {
      if ( v19 >= max_length )
LABEL_41:
        sub_2213CE4(Instance);
      v21 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v19;
      v22 = v21[4];
      if ( !v22 )
        goto LABEL_40;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v21[4], v18, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_object )
          goto LABEL_40;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     (TotalEventRaidMaster_o *)Master_object,
                     &entity,
                     eventId,
                     HIDWORD(v22->_1.name),
                     0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v9, eventId, HIDWORD(v22->_1.name), 0);
          if ( !Instance )
            goto LABEL_40;
          v23 = *(_QWORD *)(Instance + 24);
          if ( !v23 )
            goto LABEL_30;
          if ( !(_DWORD)v23 )
            goto LABEL_41;
          if ( !v16 )
            goto LABEL_40;
          Instance = (int64_t)QuestReleaseMaster__getListByQuestID(
                                (QuestReleaseMaster_o *)v16,
                                *(_DWORD *)(Instance + 32),
                                0);
          if ( !Instance )
            goto LABEL_40;
          v25 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
          if ( !*(_QWORD *)(Instance + 24) )
            goto LABEL_30;
          v26 = CondType___c_TypeInfo;
          if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v8, v24);
            v26 = CondType___c_TypeInfo;
          }
          static_fields = v26->static_fields;
          _9__213_0 = (System_Func_object__bool__o *)static_fields->__9__213_0;
          if ( !_9__213_0 )
          {
            if ( !*(&v26->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v26, v8, v24);
              static_fields = CondType___c_TypeInfo->static_fields;
            }
            v29 = (Il2CppObject *)static_fields->__9;
            _9__213_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestReleaseEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__213_0, v29, Method_CondType___c__IsOpenRaidGroupNum_b__213_0__, 0);
            v30 = CondType___c_TypeInfo->static_fields;
            v30->__9__213_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__213_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v30->__9__213_0,
              (int32_t)_9__213_0,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
            num = v38;
          }
          Instance = System_Linq_Enumerable__All_object_(
                       v25,
                       (System_Func_TSource__bool__o *)_9__213_0,
                       (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_QuestReleaseEntity___);
          if ( (Instance & 1) != 0 )
LABEL_30:
            ++v20;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_34;
    }
  }
  v20 = 0;
LABEL_34:
  if ( v39 == 2 )
    return v20 <= num;
  if ( v39 == 1 )
    return v20 >= num;
  return v20 == num;
}


bool CondType__IsOpenWithSumOfProgressCount(
        int32_t condType,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v7; // x20
  int64_t IsOpen; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x5
  il2cpp_array_size_t max_length; // x9
  int32_t v13; // w19
  int64_t v14; // x2
  int32_t v15; // w0
  int32_t v16; // w1
  bool result; // w0
  System_Func_int__int__o *v18; // x0
  intptr_t *v19; // x8
  CondType_c *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UserQuestMaster_o *UserQuestMaster; // x21
  long double v24; // q0
  int32_t ClearCountsFromIds; // w0
  CondType_CountDelegate_o *v26; // x0
  const MethodInfo *v27; // x3
  intptr_t *v28; // x8
  unsigned __int64 v29; // x24
  int32_t v30; // w23
  __int64 v31; // x26
  int32_t v32; // w22
  bool v33; // cc
  CondType_CountDelegate_o *v34; // x21
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  unsigned __int64 v37; // x22
  int32_t v38; // w23
  __int64 v39; // x25
  int32_t NegativeSideCond; // w0
  const MethodInfo *v41; // x5
  bool v42; // w0
  int32_t v43; // w19
  System_Func_int__bool__o *v44; // x0
  intptr_t *v45; // x8
  System_Func_int__int__o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  int32_t v50; // w20
  System_Func_TSource__bool__o *v51; // x21
  CondType_c *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  UserQuestMaster_o *v55; // x21
  long double v56; // q0
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  UserQuestMaster_o *v61; // x21
  long double v62; // q0
  CondType_c *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  UserQuestMaster_o *v66; // x21
  long double v67; // q0
  int32_t v68; // w0
  CondType_c *v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  UserQuestMaster_o *v72; // x21
  long double v73; // q0
  CondType_c *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  UserQuestMaster_o *v77; // x21
  long double v78; // q0

  if ( (byte_596F593 & 1) == 0 )
  {
    sub_2213A60(&Method_CondType_CountExchangeServantMaxLimit__);
    sub_2213A60(&Method_CondType_CountServantClassTotalFriendShipUp__);
    sub_2213A60(&Method_CondType_CountServantClassTotalLevelUp__);
    sub_2213A60(&Method_CondType_CountServantClassTotalLimitUp__);
    sub_2213A60(&Method_CondType_CountServantClassTotalSkillLevelUp__);
    sub_2213A60(&Method_CondType_CountServantFriendShipClassNum__);
    sub_2213A60(&Method_CondType_CountServantLevelClassNum__);
    sub_2213A60(&Method_CondType_CountServantLevelIdNum__);
    sub_2213A60(&Method_CondType_CountServantTargetSkillLvClassNum__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&CondType_CountDelegate_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int____91750072);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__0__);
    sub_2213A60(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__1__);
    sub_2213A60(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__2__);
    sub_2213A60(&CondType___c__DisplayClass23_0_TypeInfo);
    byte_596F593 = 1;
  }
  v7 = sub_2213CCC(CondType___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_131:
    sub_2213CDC(IsOpen, v9);
  *(_DWORD *)(v7 + 16) = targetNum;
  if ( !targetIds )
    return 0;
  max_length = targetIds->max_length;
  if ( !max_length )
    return 0;
  if ( (unsigned int)targetIds->max_length == 1 )
  {
    v13 = targetIds->m_Items[0];
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
    v14 = targetNum;
    v15 = condType;
    v16 = v13;
    return CondType__IsOpen(v15, v16, v14, 0, 0, v11);
  }
  if ( condType <= 136 )
  {
    if ( condType <= 1 )
    {
      if ( !condType )
        return 1;
      if ( condType != 1 )
        goto LABEL_80;
LABEL_33:
      if ( (int)max_length < 1 )
      {
        v30 = 0;
      }
      else
      {
        v29 = 0;
        v30 = 0;
        v31 = (unsigned int)targetIds->max_length;
        do
        {
          if ( v29 >= LODWORD(targetIds->max_length) )
            goto LABEL_130;
          v32 = targetIds->m_Items[v29];
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
          IsOpen = CondType__IsOpen(condType, v32, 0, 0, 0, v11);
          ++v29;
          v30 += IsOpen & 1;
        }
        while ( v31 != v29 );
        targetNum = *(_DWORD *)(v7 + 16);
      }
      v33 = v30 < targetNum;
      return !v33;
    }
    switch ( condType )
    {
      case 8:
      case 10:
      case 11:
      case 14:
      case 15:
      case 23:
      case 24:
      case 32:
      case 35:
      case 40:
      case 50:
        goto LABEL_33;
      case 9:
      case 12:
      case 13:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 27:
      case 28:
      case 29:
      case 31:
      case 33:
      case 34:
      case 39:
      case 46:
      case 47:
      case 48:
      case 49:
        goto LABEL_80;
      case 25:
        v20 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v20);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v24 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21, v22);
        IsOpen = sub_2417958(0, v24);
        if ( !UserQuestMaster )
          goto LABEL_131;
        ClearCountsFromIds = UserQuestMaster__getClearCountsFromIds(UserQuestMaster, IsOpen, targetIds, 0);
        goto LABEL_52;
      case 26:
      case 36:
      case 37:
      case 38:
      case 41:
        goto LABEL_65;
      case 30:
        v69 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        v72 = CondType__GetUserQuestMaster((const MethodInfo *)v69);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v73 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v70, v71);
        IsOpen = sub_2417958(0, v73);
        if ( !v72 )
          goto LABEL_131;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v72, IsOpen, targetIds, 0);
        goto LABEL_52;
      case 42:
        v52 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        v55 = CondType__GetUserQuestMaster((const MethodInfo *)v52);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v56 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v53, v54);
        IsOpen = sub_2417958(0, v56);
        if ( !v55 )
          goto LABEL_131;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v55, IsOpen, targetIds, 0);
        return ChallengeCountsFromIds == *(_DWORD *)(v7 + 16);
      case 43:
        v74 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        v77 = CondType__GetUserQuestMaster((const MethodInfo *)v74);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v78 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v75, v76);
        IsOpen = sub_2417958(0, v78);
        if ( !v77 )
          goto LABEL_131;
        v68 = UserQuestMaster__getChallengeCountsFromIds(v77, IsOpen, targetIds, 0);
        return v68 <= *(_DWORD *)(v7 + 16);
      case 44:
        v58 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        v61 = CondType__GetUserQuestMaster((const MethodInfo *)v58);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v62 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59, v60);
        IsOpen = sub_2417958(0, v62);
        if ( !v61 )
          goto LABEL_131;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(v61, IsOpen, targetIds, 0);
        return ChallengeCountsFromIds == *(_DWORD *)(v7 + 16);
      case 45:
        v63 = CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        v66 = CondType__GetUserQuestMaster((const MethodInfo *)v63);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v67 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v64, v65);
        IsOpen = sub_2417958(0, v67);
        if ( !v66 )
          goto LABEL_131;
        v68 = UserQuestMaster__getClearCountsFromIds(v66, IsOpen, targetIds, 0);
        return v68 <= *(_DWORD *)(v7 + 16);
      default:
        if ( condType == 92 )
          return 0;
        if ( condType != 136 )
          goto LABEL_80;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        result = CondType__IsServantLimitClassNum(targetIds, targetNum, v10);
        break;
    }
  }
  else if ( (unsigned int)condType <= 0x95 )
  {
    if ( (unsigned __int8)condType != 141 )
    {
      if ( (unsigned __int8)condType == 148 )
      {
        v26 = (CondType_CountDelegate_o *)sub_2213CCC(CondType_CountDelegate_TypeInfo);
        v28 = &Method_CondType_CountServantLevelClassNum__;
      }
      else
      {
        if ( (unsigned __int8)condType != 149 )
          goto LABEL_80;
        v26 = (CondType_CountDelegate_o *)sub_2213CCC(CondType_CountDelegate_TypeInfo);
        v28 = &Method_CondType_CountServantLevelIdNum__;
      }
      v34 = v26;
      CondType_CountDelegate___ctor(v26, 0, *v28, v27);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v35, v36);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v34, v36);
LABEL_52:
      v33 = ClearCountsFromIds < *(_DWORD *)(v7 + 16);
      return !v33;
    }
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
    return CondType__IsEquipRarityLevelNum(targetIds, targetNum, v10);
  }
  else
  {
    if ( condType <= 183 )
    {
      if ( condType > 180 )
      {
        if ( condType == 181 )
        {
          v18 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
        }
        else
        {
          v18 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
          if ( condType == 182 )
            v19 = &Method_CondType_CountServantClassTotalLimitUp__;
          else
            v19 = &Method_CondType_CountServantClassTotalLevelUp__;
        }
        goto LABEL_93;
      }
      if ( condType != 158 )
      {
        if ( condType == 178 )
        {
          v18 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_93;
        }
        if ( condType == 180 )
        {
          v18 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantTargetSkillLvClassNum__;
LABEL_93:
          v46 = v18;
          System_Func_int__int____ctor(v18, 0, *v19, 0);
          v50 = *(_DWORD *)(v7 + 16);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v47, v48);
          return CondType__IsTargetIdsCommonCount(v46, targetIds, v50, v49);
        }
        goto LABEL_80;
      }
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
      ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v9);
      goto LABEL_52;
    }
    if ( condType <= 189 )
    {
      if ( condType == 184 )
      {
        v18 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
        v19 = &Method_CondType_CountServantClassTotalFriendShipUp__;
        goto LABEL_93;
      }
      if ( condType != 188 )
      {
        if ( condType == 189 )
        {
          v18 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountExchangeServantMaxLimit__;
          goto LABEL_93;
        }
LABEL_80:
        if ( !(unsigned int)targetIds->max_length )
LABEL_130:
          sub_2213CE4(IsOpen);
        v43 = targetIds->m_Items[0];
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        v15 = condType;
        v16 = v43;
        v14 = 0;
        return CondType__IsOpen(v15, v16, v14, 0, 0, v11);
      }
      v44 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      v45 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__0__;
LABEL_97:
      v51 = (System_Func_TSource__bool__o *)v44;
      System_Func_int__bool____ctor(v44, (Il2CppObject *)v7, *v45, 0);
      return System_Linq_Enumerable__Any_int__59144800(
               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
               v51,
               (const MethodInfo_3867A60 *)Method_System_Linq_Enumerable_Any_int____91750072);
    }
    if ( condType == 190 )
    {
      v44 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      v45 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__1__;
      goto LABEL_97;
    }
    if ( condType == 191 )
    {
      v44 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      v45 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__2__;
      goto LABEL_97;
    }
    if ( condType != 268 )
      goto LABEL_80;
LABEL_65:
    if ( (int)max_length < 1 )
    {
      v38 = 0;
    }
    else
    {
      v37 = 0;
      v38 = 0;
      v39 = (unsigned int)targetIds->max_length;
      do
      {
        IsOpen = (int64_t)CondType_TypeInfo;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9, v10);
        if ( v37 >= LODWORD(targetIds->max_length) )
          goto LABEL_130;
        NegativeSideCond = CondType__GetNegativeSideCond(condType, v9);
        v42 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[v37++], 0, 0, 0, v41);
        v38 += v42;
      }
      while ( v39 != v37 );
      targetNum = *(_DWORD *)(v7 + 16);
    }
    return v38 < targetNum;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpen_47325536(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_596F594 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F594 = 1;
  }
  if ( condType <= 35 )
  {
    if ( !condType )
      return 1;
    if ( condType != 35 )
      return 0;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condValues, *(_QWORD *)&condNum);
    return CondType__IsShopPurchase(condValues, condNum, *(const MethodInfo **)&condNum);
  }
  else
  {
    if ( condType != 65 )
    {
      if ( condType == 37 )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condValues, *(_QWORD *)&condNum);
        return CondType__IsNotShopPurchase(condValues, (const MethodInfo *)condValues);
      }
      return 0;
    }
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condValues, *(_QWORD *)&condNum);
    return CondType__IsQuestNotClearAndCond(condValues, (const MethodInfo *)condValues);
  }
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpen_47329936(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_596F596 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F596 = 1;
  }
  result = 1;
  switch ( condType )
  {
    case 0:
      return result;
    case 1:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsQuestClear(userId, condValue, -1, 0, 0, v5);
      break;
    case 6:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsServantLevel_47330560(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsServantLimit_47330720(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsServantGet_47328584(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsServantFriendship_47330960(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsServantGroup_47329280(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsPurchaseQpShop_47331264(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsPurchaseStoneShop_47331432(userId, condValue, (const MethodInfo *)userId);
      break;
    case 38:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, userId);
      result = CondType__IsNotServantGet(condValue, *(const MethodInfo **)&condValue);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


bool CondType__IsOpenedSaveDeleteButton(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  BalanceConfig_c *v4; // x0
  int *SaveDataDeleteButtonOpenCondition; // x8
  int64_t v6; // x21
  int32_t v7; // w19
  int32_t v8; // w20

  if ( (byte_596F65D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    byte_596F65D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  SaveDataDeleteButtonOpenCondition = (int *)v4->static_fields->SaveDataDeleteButtonOpenCondition;
  if ( !SaveDataDeleteButtonOpenCondition )
    goto LABEL_15;
  if ( SaveDataDeleteButtonOpenCondition[6] < 3 )
    return 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1, v2);
    SaveDataDeleteButtonOpenCondition = (int *)BalanceConfig_TypeInfo->static_fields->SaveDataDeleteButtonOpenCondition;
    if ( !SaveDataDeleteButtonOpenCondition )
LABEL_15:
      sub_2213CDC(v4, v1);
  }
  if ( (unsigned int)SaveDataDeleteButtonOpenCondition[6] <= 2 )
    sub_2213CE4(v4);
  v6 = SaveDataDeleteButtonOpenCondition[10];
  v7 = SaveDataDeleteButtonOpenCondition[8];
  v8 = SaveDataDeleteButtonOpenCondition[9];
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v1, v2);
  return CondType__IsOpen(v7, v8, v6, 0, 0, v3);
}


bool CondType__IsPlayedNotMeetsScript(int32_t notMeetsScriptId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = notMeetsScriptId;
  if ( (byte_596F606 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23436/*"notMeets"*/);
    byte_596F606 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_75651716((System_String_o *)StringLiteral_23436/*"notMeets"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0) == 1;
}


bool CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v7; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5FA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F5FA = 1;
  }
  entity = 0;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_2213CDC(SelfUserGame, v4);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    if ( !byte_596DB51 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB51 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
      v7 = TerminalPramsManager_TypeInfo;
    }
    p_genderType = &v7->static_fields->_PlayerGenderType_k__BackingField;
  }
  return *p_genderType == genderType;
}


bool CondType__IsPurchaseQpShop(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F5BA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0);
}


bool CondType__IsPurchaseQpShop_47331264(int64_t userId, int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F5BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return ShopEntity__IsCondType_49868772((ShopEntity_o *)Instance, userId, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w19

  v3 = condValue;
  if ( (byte_596F5BF & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F5BF = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, method);
  if ( v3 <= 1 )
    v3 = 1;
  return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&condValue) >= v3;
}


bool CondType__IsPurchaseStoneShop(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F5BD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0);
}


bool CondType__IsPurchaseStoneShop_47331432(int64_t userId, int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F5BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return ShopEntity__IsCondType_49868772((ShopEntity_o *)Instance, userId, 0);
}


bool CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  il2cpp_array_size_t max_length; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x23
  ShopGroupEntity_o *v10; // x8
  ShopEntity_o *v11; // x21

  if ( (byte_596F5F5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_21;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( TargetEntityList )
  {
    v6 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v6->max_length;
      if ( (int)max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= LODWORD(v6->max_length) )
            sub_2213CE4(Instance);
          v10 = v6->m_Items[v9];
          if ( !v10 || !v8 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v8,
                       v10->fields.shopId,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v11 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0) && !ShopEntity__IsSoldOut(v11, 0) )
              goto LABEL_19;
            Instance = (Il2CppObject *)ShopEntity__IsClosed(v11, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( (_DWORD)max_length == (_DWORD)++v9 )
            goto LABEL_18;
        }
LABEL_21:
        sub_2213CDC(Instance, v4);
      }
LABEL_18:
      LOBYTE(TargetEntityList) = 1;
    }
    else
    {
LABEL_19:
      LOBYTE(TargetEntityList) = 0;
    }
  }
  return (char)TargetEntityList;
}


bool CondType__IsQuestAvailable(int32_t questId, bool isSkipQuestTreeCheckOnUpdate, const MethodInfo *method)
{
  _BOOL4 v3; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v10; // x0
  BalanceConfig_c *v11; // x8
  int32_t WarId_k__BackingField; // w22
  TerminalPramsManager_c *v13; // x0
  _BOOL4 v14; // w8
  MapControl_QuestInfo_o *QuestInfo; // x0

  v3 = isSkipQuestTreeCheckOnUpdate;
  if ( (byte_596F5E1 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F5E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 22, 0) )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 72, 0) )
  {
LABEL_9:
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
      return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, questId, 0, 0);
LABEL_37:
    sub_2213CDC(Instance, v6);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v11 = BalanceConfig_TypeInfo;
  WarId_k__BackingField = v10->static_fields->_WarId_k__BackingField;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v8);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( WarId_k__BackingField == v11->static_fields->OrdealCallWarId )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    if ( !byte_596D193 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D193 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = !v13->static_fields->_IsPhaseClear_k__BackingField;
    if ( v13->static_fields->_IsPhaseClear_k__BackingField )
      goto LABEL_33;
  }
  else
  {
    v14 = 1;
  }
  if ( v3 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    if ( !LOBYTE(Instance[6].klass) )
      goto LABEL_9;
    goto LABEL_34;
  }
LABEL_33:
  if ( !v14 || v3 )
    goto LABEL_9;
LABEL_34:
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( !QuestInfo )
    goto LABEL_9;
  return QuestInfo->fields.dispType == 1;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestClear(
        int64_t userId,
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        bool isCollection,
        const MethodInfo *method)
{
  CondType_c *v11; // x0
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UserQuestEntity_o *EntityFromId; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  int32_t ClearNum; // w0

  if ( (byte_596F59B & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F59B = 1;
  }
  v11 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condQuestId, *(_QWORD *)&beforeClearQuestId);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
  if ( !UserQuestMaster )
    goto LABEL_27;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, userId, condQuestId, 0);
  if ( !isCollection )
    goto LABEL_14;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_27:
    sub_2213CDC(UserQuestMaster, v13);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0) )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17, v18);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, isCheckResetFlag, v19);
  }
LABEL_14:
  if ( !EntityFromId || isCheckResetFlag && UserQuestEntity__IsResetStatus(EntityFromId, 0) )
    return 0;
  ClearNum = UserQuestEntity__getClearNum(EntityFromId, 0);
  return (beforeClearQuestId < 1 || beforeClearQuestId != condQuestId) && ClearNum > 0;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestClearBeforeEventStart(int32_t questId, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  bool IsQuestClear_47284152; // w8
  bool result; // w0
  CondType_c *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *Entity; // x0
  __int64 v15; // x2
  int64_t klass; // x20

  if ( (byte_596F62E & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F62E = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&eventId, method);
  IsQuestClear_47284152 = CondType__IsQuestClear_47284152(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_47284152 )
  {
    v10 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v10);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Entity = (EventMaster_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      Entity = (EventMaster_o *)NetworkManager_TypeInfo;
    }
    if ( !UserQuestMaster )
      goto LABEL_21;
    Entity = (EventMaster_o *)UserQuestMaster__GetEntity(
                                UserQuestMaster,
                                (int64_t)Entity[2].fields.list[1].monitor,
                                questId,
                                0);
    if ( !Entity )
      goto LABEL_21;
    klass = (int64_t)Entity[1].klass;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v15);
    Entity = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Entity )
LABEL_21:
      sub_2213CDC(Entity, v11);
    return klass < EventMaster__GetEventStartedAt(Entity, eventId, 0);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserQuestMaster_o *UserQuestMaster; // x21
  NetworkManager_c *v9; // x0
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_596F5CE & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5CE = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condVal, method);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    sub_2213CDC(v9, v6);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v9->static_fields->userIdNumber, condId, 0);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0) >= condVal;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestClear_47284152(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_596F59C & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F59C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
    v8 = NetworkManager_TypeInfo;
  }
  userIdNumber = v8->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
  return CondType__IsQuestClear(userIdNumber, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, v4);
}


bool CondType__IsQuestEnable(int32_t openQuestid, int32_t closeQuestid, const MethodInfo *method)
{
  UserQuestEntity_o *EntityFromId; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  NetworkManager_c *v10; // x0
  int64_t userIdNumber; // x21
  CondType_c *v12; // x0
  CondType_c *v13; // x0
  UserQuestEntity_o *v14; // x0

  if ( (byte_596F5A2 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5A2 = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    v10 = NetworkManager_TypeInfo;
  }
  userIdNumber = v10->static_fields->userIdNumber;
  if ( openQuestid >= 1 )
  {
    v12 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v9);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v12);
    if ( !Instance )
      goto LABEL_27;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, userIdNumber, openQuestid, 0);
    if ( !EntityFromId )
      return (char)EntityFromId;
    if ( UserQuestEntity__getClearNum(EntityFromId, 0) < 1 )
      goto LABEL_26;
  }
  if ( closeQuestid < 1 )
  {
LABEL_5:
    LOBYTE(EntityFromId) = 1;
    return (char)EntityFromId;
  }
  v13 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v9);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v13);
  if ( !Instance )
LABEL_27:
    sub_2213CDC(Instance, v7);
  v14 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, userIdNumber, closeQuestid, 0);
  if ( !v14 || UserQuestEntity__getClearNum(v14, 0) <= 0 )
    goto LABEL_5;
LABEL_26:
  LOBYTE(EntityFromId) = 0;
  return (char)EntityFromId;
}


bool CondType__IsQuestGroupAvailable(int32_t groupId, int32_t questCount, const MethodInfo *method)
{
  int32_t v5; // w21
  System_Int32_array *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v10; // x19
  bool v11; // w24
  int v12; // w22
  unsigned __int64 v13; // x23
  int32_t v14; // w20

  if ( (byte_596F5E2 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E2 = 1;
  }
  if ( questCount <= 1 )
    v5 = 1;
  else
    v5 = questCount;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  max_length = Instance->max_length;
  v10 = Instance;
  v11 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      v14 = v10->m_Items[v13];
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
      Instance = (System_Int32_array *)CondType__IsQuestAvailable(v14, 0, v8);
      if ( ((unsigned __int8)Instance & 1) != 0 && ++v12 >= v5 )
        break;
      LODWORD(max_length) = v10->max_length;
      v11 = (__int64)++v13 < (int)max_length;
    }
    while ( (__int64)v13 < (int)max_length );
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int v6; // w21

  v6 = condVal;
  if ( (byte_596F5D2 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F5D2 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&groupId, *(_QWORD *)&condVal);
  if ( v6 <= 1 )
    v6 = 1;
  return CondType__GetQuestGroupClearCount(questId, groupId, isCheckResetFlag, (const MethodInfo *)isCheckResetFlag) >= v6;
}


bool CondType__IsQuestNotClearAndCond(System_Int32_array *condQuestId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *v3; // x19
  il2cpp_array_size_t max_length; // x8
  bool v5; // w20
  unsigned __int64 v6; // x23
  __int64 v7; // x25
  CondType_c *v8; // x0
  __int64 v9; // x2
  UserQuestMaster_o *UserQuestMaster; // x22
  UserQuestEntity_o *EntityFromId; // x0

  v3 = condQuestId;
  if ( (byte_596F5F2 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    condQuestId = (System_Int32_array *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5F2 = 1;
  }
  if ( !v3 )
LABEL_23:
    sub_2213CDC(condQuestId, method);
  max_length = v3->max_length;
  if ( !max_length )
    return 0;
  v5 = 1;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = (unsigned int)v3->max_length;
    do
    {
      v8 = CondType_TypeInfo;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v9);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v9);
        condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      }
      if ( v6 >= LODWORD(v3->max_length) )
        sub_2213CE4(condQuestId);
      if ( !UserQuestMaster )
        goto LABEL_23;
      EntityFromId = UserQuestMaster__getEntityFromId(
                       UserQuestMaster,
                       *(_QWORD *)(*(_QWORD *)&condQuestId->m_Items[38] + 64LL),
                       v3->m_Items[v6],
                       0);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0) > 0 )
        return 0;
      ++v6;
    }
    while ( v7 != v6 );
    return 1;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestPhaseClear(
        int64_t userId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CondType_c *v11; // x0
  int v12; // w8

  if ( (byte_596F59E & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F59E = 1;
  }
  v11 = CondType_TypeInfo;
  v12 = *(&CondType_TypeInfo->_2.cctor_finished + 1);
  if ( condQuestPhase <= 0 )
  {
    if ( !v12 )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condQuestId, *(_QWORD *)&condQuestPhase);
    return CondType__IsQuestClear(userId, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, method);
  }
  else
  {
    if ( !v12 )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condQuestId, *(_QWORD *)&condQuestPhase);
    return CondType__GetQuestClearPhaseCount(
             (int64_t)v11,
             condQuestId,
             beforeClearQuestId,
             isCheckResetFlag,
             (const MethodInfo *)isCheckResetFlag) >= condQuestPhase;
  }
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestPhaseClear_47347536(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  NetworkManager_c *v10; // x0
  int64_t userIdNumber; // x23

  if ( (byte_596F59F & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F59F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condQuestPhase, *(_QWORD *)&beforeClearQuestId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condQuestPhase, *(_QWORD *)&beforeClearQuestId);
    v10 = NetworkManager_TypeInfo;
  }
  userIdNumber = v10->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condQuestPhase, *(_QWORD *)&beforeClearQuestId);
  return CondType__IsQuestPhaseClear(
           userIdNumber,
           condQuestId,
           condQuestPhase,
           beforeClearQuestId,
           isCheckResetFlag,
           v5);
}


bool CondType__IsQuestResettable(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  CondType_c *v7; // x0
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x8
  signed __int64 v11; // x22
  _DWORD *monitor; // x8
  unsigned __int64 v13; // x9
  bool v14; // w19
  int32_t v15; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5E3 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestResetMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E3 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v7 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v5, v6);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v7);
    v10 = entity;
    if ( entity )
    {
      v11 = 0;
      do
      {
        monitor = v10[1].monitor;
        if ( !monitor )
          break;
        v13 = (unsigned int)monitor[6];
        v14 = v11 < (int)v13;
        if ( v11 >= (int)v13 )
          return v14;
        if ( v11 >= v13 )
          sub_2213CE4(Instance);
        v15 = monitor[v11 + 8];
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4, v8);
        Instance = (DataManager_o *)CondType__IsQuestClear_47284152(v15, -1, 1, v9);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v14;
        v10 = entity;
        ++v11;
      }
      while ( entity );
    }
LABEL_17:
    sub_2213CDC(Instance, v4);
  }
  return 0;
}


bool CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *MasterData_object; // x21
  __int64 v10; // x2
  __int64 v11; // x2
  struct System_Int32_array *costumeIds; // x8
  int max_length; // w8
  int v14; // w20
  __int64 v15; // x22
  struct System_Int32_array *v16; // x8
  int v17; // w23
  int v18; // w8
  int32_t baseSvtId; // [xsp+Ch] [xbp-44h] BYREF
  ServantCostumeEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  UserServantCollectionEntity_o *v23; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596F5F1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5F1 = 1;
  }
  entity = 0;
  v23 = 0;
  baseSvtId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_37;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Instance, &entity, svtId, costumeId, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_37;
    if ( ServantCostumeEntity__TryGetBaseSvtId(entity, &baseSvtId, 0) )
      svtId = baseSvtId;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v10);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v10);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_37:
    sub_2213CDC(Instance, v6);
  Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                &v23,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_37;
    costumeIds = v23->fields.costumeIds;
    if ( !costumeIds )
      goto LABEL_37;
    max_length = costumeIds->max_length;
    v14 = max_length - 1;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( v23 )
      {
        v16 = v23->fields.costumeIds;
        if ( !v16 )
          break;
        if ( (unsigned int)v15 >= LODWORD(v16->max_length) )
          sub_2213CE4(Instance);
        v17 = v16->m_Items[v15];
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v11);
        if ( v17 >= 0 )
          v18 = v17;
        else
          v18 = -v17;
        Instance = (DataManager_o *)(v18 == costumeId);
        if ( v18 != costumeId && v14 != (_DWORD)v15++ )
          continue;
        return (char)Instance;
      }
      goto LABEL_37;
    }
  }
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsReleaseRaidUiQuestClear(int32_t type, int32_t targetId, int32_t value, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_CommonReleaseEntity__o *CacheById; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  CondType___c_c *v13; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__214_1; // x20
  Il2CppObject *v16; // x21
  struct CondType___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  CondType___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  struct CondType___c_StaticFields *v29; // x9
  System_Func_object__int__o *_9__214_2; // x20
  Il2CppObject *v31; // x21
  struct CondType___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct CondType___c_StaticFields *v39; // x9
  System_Func_object__bool__o *_9__214_3; // x21
  Il2CppObject *v41; // x22
  struct CondType___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  CondType___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x19
  struct CondType___c_StaticFields *v54; // x9
  System_Func_bool__bool__o *_9__214_4; // x20
  Il2CppObject *v56; // x21
  struct CondType___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_596F647 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_bool____91749992);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_CommonReleaseEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__CommonReleaseEntity___int__bool___);
    sub_2213A60(&System_Func_IGrouping_int__CommonReleaseEntity___bool__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__CommonReleaseEntity___int__TypeInfo);
    sub_2213A60(&System_Func_bool__bool__TypeInfo);
    sub_2213A60(&System_Func_CommonReleaseEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_1__);
    sub_2213A60(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_2__);
    sub_2213A60(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_3__);
    sub_2213A60(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_4__);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F647 = 1;
  }
  if ( type == 113 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !Instance )
      goto LABEL_38;
    CacheById = CommonReleaseMaster__GetCacheById((CommonReleaseMaster_o *)Instance, targetId, 0);
    if ( !CacheById )
      return 0;
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)CacheById;
    if ( !CacheById->fields._size )
      return 0;
    v13 = CondType___c_TypeInfo;
    if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v10, v11);
      v13 = CondType___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__214_1 = (System_Func_object__int__o *)static_fields->__9__214_1;
    if ( !_9__214_1 )
    {
      if ( !*(&v13->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v13, v10, v11);
        static_fields = CondType___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__214_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_CommonReleaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__214_1, v16, Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_1__, 0);
      v17 = CondType___c_TypeInfo->static_fields;
      v17->__9__214_1 = (struct System_Func_CommonReleaseEntity__int__o *)_9__214_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v17->__9__214_1,
        (int32_t)_9__214_1,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = System_Linq_Enumerable__GroupBy_object__int_(
            v12,
            (System_Func_TSource__TKey__o *)_9__214_1,
            (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_CommonReleaseEntity__int___);
    v27 = CondType___c_TypeInfo;
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
    if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v25, v26);
      v27 = CondType___c_TypeInfo;
    }
    v29 = v27->static_fields;
    _9__214_2 = (System_Func_object__int__o *)v29->__9__214_2;
    if ( !_9__214_2 )
    {
      if ( !*(&v27->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v27, v25, v26);
        v29 = CondType___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)v29->__9;
      _9__214_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IGrouping_int__CommonReleaseEntity___int__TypeInfo);
      System_Func_object__int____ctor(_9__214_2, v31, Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_2__, 0);
      v32 = CondType___c_TypeInfo->static_fields;
      v32->__9__214_2 = (struct System_Func_IGrouping_int__CommonReleaseEntity___int__o *)_9__214_2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v32->__9__214_2,
        (int32_t)_9__214_2,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v27 = CondType___c_TypeInfo;
    }
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, v25, v26);
      v27 = CondType___c_TypeInfo;
    }
    v39 = v27->static_fields;
    _9__214_3 = (System_Func_object__bool__o *)v39->__9__214_3;
    if ( !_9__214_3 )
    {
      if ( !*(&v27->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v27, v25, v26);
        v39 = CondType___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)v39->__9;
      _9__214_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_IGrouping_int__CommonReleaseEntity___bool__TypeInfo);
      System_Func_object__bool____ctor(_9__214_3, v41, Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_3__, 0);
      v42 = CondType___c_TypeInfo->static_fields;
      v42->__9__214_3 = (struct System_Func_IGrouping_int__CommonReleaseEntity___bool__o *)_9__214_3;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v42->__9__214_3,
        (int32_t)_9__214_3,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    Instance = (DataManager_o *)System_Linq_Enumerable__ToDictionary_object__int__bool_(
                                  v28,
                                  (System_Func_TSource__TKey__o *)_9__214_2,
                                  (System_Func_TSource__TElement__o *)_9__214_3,
                                  (const MethodInfo_389C424 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__CommonReleaseEntity___int__bool___);
    if ( !Instance )
LABEL_38:
      sub_2213CDC(Instance, v8);
    Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
               (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
               (const MethodInfo_3F89144 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    v52 = CondType___c_TypeInfo;
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
    if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v50, v51);
      v52 = CondType___c_TypeInfo;
    }
    v54 = v52->static_fields;
    _9__214_4 = v54->__9__214_4;
    if ( !_9__214_4 )
    {
      if ( !*(&v52->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v52, v50, v51);
        v54 = CondType___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)v54->__9;
      _9__214_4 = (System_Func_bool__bool__o *)sub_2213CCC(System_Func_bool__bool__TypeInfo);
      System_Func_bool__bool____ctor(_9__214_4, v56, Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_4__, 0);
      v57 = CondType___c_TypeInfo->static_fields;
      v57->__9__214_4 = _9__214_4;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v57->__9__214_4,
        (int32_t)_9__214_4,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    return System_Linq_Enumerable__Any_bool__59143260(
             v53,
             (System_Func_TSource__bool__o *)_9__214_4,
             (const MethodInfo_386745C *)Method_System_Linq_Enumerable_Any_bool____91749992);
  }
  else
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&value);
    return CondType___IsReleaseRaidUiQuestClear_g__IsQuestClearCond_214_0(type, targetId, value, method);
  }
}


bool CondType__IsResetBirthDay(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1
  UserGameEntity_o *v3; // x19

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v2);
  v3 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0) && v3->fields.birthDay > 0;
}


bool CondType__IsRouteSelect(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  Il2CppClass *v8; // x0
  __int64 v9; // x2
  const MethodInfo *v10; // x5
  System_Collections_Generic_IList_int__o *v11; // x21

  if ( (byte_596F627 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_596F627 = 1;
  }
  v5 = sub_2213B20(int___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_10;
  v7 = v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  v8 = int___TypeInfo;
  *(_DWORD *)(v7 + 32) = questId;
  v5 = sub_2213B20(v8, 1);
  if ( !v5 )
LABEL_10:
    sub_2213CDC(v5, v6);
  v11 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
LABEL_11:
    sub_2213CE4(v5);
  *(_DWORD *)(v5 + 32) = routeId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v9);
  return CondType__IsRouteSelect_47351928((System_Collections_Generic_IList_int__o *)v7, v11, 1, 0, 0, v10);
}


bool CondType__IsRouteSelect_47351928(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        System_Collections_Generic_HashSet_int__o *addCheckedRoute,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_HashSet_int__o *v14; // x0
  System_Collections_Generic_HashSet_int__o *v15; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 i; // x25
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  System_Collections_Generic_IList_int__c *v36; // x8
  int32_t v37; // w25
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x26
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  int32_t v56; // w26
  NetworkManager_c *v57; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v59; // x1
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  int32_t v68; // w21
  int32_t v70; // [xsp+Ch] [xbp-94h]
  __int64 v71; // [xsp+30h] [xbp-70h]
  __int64 v72; // [xsp+38h] [xbp-68h]

  if ( (byte_596F628 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor___91630040);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F628 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_91;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  v15 = v14;
  if ( addCheckedRoute )
  {
    System_Collections_Generic_HashSet_int____ctor_69943008(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)addCheckedRoute,
      (const MethodInfo_42B3EE0 *)Method_System_Collections_Generic_HashSet_int___ctor___91630040);
    if ( !questIds )
      goto LABEL_91;
  }
  else
  {
    System_Collections_Generic_HashSet_int____ctor(
      v14,
      (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !questIds )
      goto LABEL_91;
  }
  klass = questIds->klass;
  v70 = count;
  v17 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_12;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_12:
    v19 = sub_224BC3C(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v19)(
          questIds,
          *(_QWORD *)(v19 + 8));
  v72 = v20;
  if ( !v20 )
    sub_2213CDC(v20, v21);
  for ( i = v20; ; i = v72 )
  {
    v23 = *(_QWORD *)i;
    v24 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_20;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_20:
      v26 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(i, *(_QWORD *)(v26 + 8));
    if ( (v27 & 1) == 0 )
      break;
    if ( !v72 )
      sub_2213CDC(v27, v12);
    v30 = *(_QWORD *)v72;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v32 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_28;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_224BC3C(v72, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v72, *(_QWORD *)(v33 + 8));
    if ( !routeIds )
      sub_2213CDC(v34, v35);
    v36 = routeIds->klass;
    v37 = v34;
    v38 = *(unsigned __int16 *)&routeIds->klass->_2.rank;
    if ( *(_WORD *)&routeIds->klass->_2.rank )
    {
      v39 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v39 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_35;
      }
      v40 = (__int64)&v36->vtable[*v39];
    }
    else
    {
LABEL_35:
      v40 = sub_224BC3C(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v40)(
            routeIds,
            *(_QWORD *)(v40 + 8));
    v43 = v41;
    v71 = v41;
    if ( !v41 )
      sub_2213CDC(0, v42);
    while ( 1 )
    {
      v44 = *(_QWORD *)v43;
      v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_42;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_42:
        v47 = sub_224BC3C(v43, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
      if ( (v48 & 1) == 0 )
        break;
      if ( !v71 )
        sub_2213CDC(v48, v49);
      v50 = *(_QWORD *)v71;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v52 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_50;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_50:
        v53 = sub_224BC3C(v71, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v71, *(_QWORD *)(v53 + 8));
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v54, v55);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v57 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v54, v55);
        v57 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_2213CDC(v57, v54);
      haveRouteId = UserQuestRouteMaster__haveRouteId(
                      (UserQuestRouteMaster_o *)MasterData_object,
                      v57->static_fields->userIdNumber,
                      v37,
                      v56,
                      0);
      if ( haveRouteId )
      {
        if ( !v15 )
          sub_2213CDC(haveRouteId, v59);
        System_Collections_Generic_HashSet_int___Add(
          v15,
          v56,
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v43 = v71;
    }
    if ( v71 )
    {
      v60 = *(_QWORD *)v71;
      v61 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
      {
        v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
        {
          --v61;
          v62 += 4;
          if ( !v61 )
            goto LABEL_69;
        }
        v63 = v60 + 16LL * *v62 + 312;
      }
      else
      {
LABEL_69:
        v63 = sub_224BC3C(v71, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v63)(v71, *(_QWORD *)(v63 + 8));
    }
  }
  if ( v72 )
  {
    v64 = *(_QWORD *)v72;
    v65 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
      {
        --v65;
        v66 += 4;
        if ( !v65 )
          goto LABEL_84;
      }
      v67 = v64 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_84:
      v67 = sub_224BC3C(v72, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v67)(v72, *(_QWORD *)(v67 + 8));
  }
  Instance = 0;
  if ( !v15 )
LABEL_91:
    sub_2213CDC(Instance, v12);
  v68 = v15->fields._count;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12, v28);
  return CondType__GetCompareCheckType(checkType, v70, v68, v29);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsServantFriendship(int32_t svtId, int32_t condFriendshipRank, bool isAbove, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_596F5B1 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5B1 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condFriendshipRank, isAbove);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condFriendshipRank, isAbove);
    v8 = NetworkManager_TypeInfo;
  }
  userIdNumber = v8->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condFriendshipRank, isAbove);
  return CondType__IsServantFriendship_47330960(userIdNumber, svtId, condFriendshipRank, isAbove, v4);
}


bool CondType__IsServantFriendship_47328740(int64_t userSvtId, int32_t condFriendshipRank, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject v8; // q1
  __int64 v9; // x2
  int64_t v10; // x20
  Il2CppClass *klass; // x21
  void *monitor; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x4
  int32_t v16; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_596F5B3 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5B3 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_22;
  v8 = entity[4];
  *(Il2CppObject *)&v20.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v20.fields.fakeValue = v8;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
  v19 = v20;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v19, 0);
  if ( !entity )
LABEL_22:
    sub_2213CDC(Instance, v6);
  v10 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v9);
  *(_QWORD *)&v22.fields.currentCryptoKey = klass;
  *(_QWORD *)&v22.fields.fakeValue = monitor;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13, v14);
  return CondType__IsServantFriendship_47330960(v10, v16, condFriendshipRank, 1, v15);
}


bool CondType__IsServantFriendship_47330960(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x21
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_596F5B2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v10);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0);
  if ( isAbove )
  {
    if ( EntityDefinitely )
    {
      v14 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
      v15 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
      *(_QWORD *)&v19.fields.currentCryptoKey = v14;
      *(_QWORD *)&v19.fields.fakeValue = v15;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0) >= condFriendshipRank;
    }
  }
  else if ( EntityDefinitely )
  {
    v16 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v17 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    *(_QWORD *)&v20.fields.currentCryptoKey = v16;
    *(_QWORD *)&v20.fields.fakeValue = v17;
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x20

  if ( (byte_596F5AC & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5AC = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v4 = NetworkManager_TypeInfo;
  }
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  return CondType__IsServantGet_47328584(userIdNumber, condSvtId, v2);
}


bool CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v10; // [xsp+8h] [xbp-48h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596F5E5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E5 = 1;
  }
  entity = 0;
  v10 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_21;
  Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    if ( entity->fields.status )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    &v10,
                                    eventId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v10 )
      {
        if ( entity )
          return entity->fields.createdAt < (__int64)v10[6].klass;
LABEL_21:
        sub_2213CDC(Instance, v6);
      }
    }
  }
  return 0;
}


bool CondType__IsServantGet_47328584(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_596F5AD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       condSvtId,
                       0);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.status == 2;
  return (char)EntityDefinitely;
}


bool CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x20

  if ( (byte_596F5B5 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5B5 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v4 = NetworkManager_TypeInfo;
  }
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  return CondType__IsServantGroup_47329280(userIdNumber, condGroup, v2);
}


bool CondType__IsServantGroup_47329280(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  int v8; // w8
  void *v9; // x21
  bool v10; // w22
  int v11; // w23
  __int64 v12; // x8

  if ( (byte_596F5B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0);
  if ( !Instance )
    goto LABEL_16;
  v8 = *((_DWORD *)Instance + 6);
  v9 = Instance;
  v10 = v8 > 0;
  if ( v8 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v8 )
        sub_2213CE4(Instance);
      v12 = *((_QWORD *)v9 + v11 + 4);
      if ( !v12 || !MasterData_object )
        break;
      Instance = UserServantCollectionMaster__GetEntityDefinitely(
                   (UserServantCollectionMaster_o *)MasterData_object,
                   userId,
                   *(_DWORD *)(v12 + 20),
                   0);
      if ( !Instance || *((_DWORD *)Instance + 10) != 2 )
      {
        v8 = *((_DWORD *)v9 + 6);
        v10 = ++v11 < v8;
        if ( v11 < v8 )
          continue;
      }
      return v10;
    }
LABEL_16:
    sub_2213CDC(Instance, v6);
  }
  return v10;
}


bool CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596F5AE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0);
}


bool CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F5FE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return UserServantMaster__IsServantHavingLimitMax((UserServantMaster_o *)Instance, svtId, condNum, 0);
}


bool CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F5A3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5A3 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return SLODWORD(entity[25].klass) >= condLv;
LABEL_12:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsServantLevel_47281356(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v6; // x0
  int64_t userIdNumber; // x21

  if ( (byte_596F5A4 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5A4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condLv, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condLv, method);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condLv, method);
  return CondType__IsServantLevel_47330560(userIdNumber, svtId, condLv, v3);
}


bool CondType__IsServantLevel_47330560(int64_t userId, int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_596F5A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLv >= condLv;
  return (char)EntityDefinitely;
}


bool CondType__IsServantLimit(int64_t userSvtId, int32_t condLimitCount, int32_t checkType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int32_t v12; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_596F5A7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5A7 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0 )
  {
LABEL_22:
    sub_2213CDC(Instance, v8);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v12 = 0;
    goto LABEL_14;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_22;
  klass = entity[6].klass;
  monitor = entity[6].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
  *(_QWORD *)&v15.fields.currentCryptoKey = klass;
  *(_QWORD *)&v15.fields.fakeValue = monitor;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
LABEL_14:
  if ( checkType == 2 )
    return v12 <= condLimitCount;
  if ( checkType == 1 )
    return v12 >= condLimitCount;
  if ( checkType )
    return 0;
  return v12 == condLimitCount;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsServantLimitClassNum(System_Int32_array *targetIds, int32_t targetNum, const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w23
  int32_t v8; // w21

  v4 = targetIds;
  if ( (byte_596F617 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_2213A60(&CondType_TypeInfo);
    byte_596F617 = 1;
  }
  if ( !v4 )
    sub_2213CDC(targetIds, *(_QWORD *)&targetNum);
  max_length = v4->max_length;
  if ( (int)max_length < 1 )
  {
    LOBYTE(targetIds) = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(targetIds);
      v8 = v4->m_Items[v6];
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetNum, method);
      v7 += CondType__CountServantLimitClassNum(v8, *(const MethodInfo **)&targetNum);
      targetIds = (System_Int32_array *)(v7 >= targetNum);
      if ( v7 >= targetNum )
        break;
      LODWORD(max_length) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
  return (char)targetIds;
}


bool CondType__IsServantLimitImage(
        int64_t userSvtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t CombineVoiceLimitCount; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5A8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5A8 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount((UserServantEntity_o *)entity, 0, 0);
      goto LABEL_12;
    }
LABEL_20:
    sub_2213CDC(Instance, v8);
  }
  CombineVoiceLimitCount = 0;
LABEL_12:
  if ( checkType == 2 )
    return CombineVoiceLimitCount <= condLimitCount;
  if ( checkType == 1 )
    return CombineVoiceLimitCount >= condLimitCount;
  if ( checkType )
    return 0;
  return CombineVoiceLimitCount == condLimitCount;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsServantLimit_47281560(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_596F5A9 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F5A9 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condLimitCount, *(_QWORD *)&checkType);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condLimitCount, *(_QWORD *)&checkType);
    v8 = NetworkManager_TypeInfo;
  }
  userIdNumber = v8->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condLimitCount, *(_QWORD *)&checkType);
  return CondType__IsServantLimit_47330720(userIdNumber, svtId, condLimitCount, checkType, v4);
}


bool CondType__IsServantLimit_47330720(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_596F5AA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v10);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0);
  if ( checkType == 2 )
  {
    if ( EntityDefinitely )
      LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount <= condLimitCount;
  }
  else if ( checkType == 1 )
  {
    if ( EntityDefinitely )
      LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount >= condLimitCount;
  }
  else if ( checkType )
  {
    LOBYTE(EntityDefinitely) = 0;
  }
  else if ( EntityDefinitely )
  {
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount == condLimitCount;
  }
  return (char)EntityDefinitely;
}


bool CondType__IsShopGroupLimit(int32_t condValue, int32_t limitNum, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v8; // x20
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x24
  UserShopMaster_o *v11; // x21
  __int64 v12; // x25
  int32_t v13; // w26
  ShopGroupEntity_o *v14; // x8
  int32_t shopId; // w23
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596F5FB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5FB = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_26;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0);
  if ( !TargetEntityList )
    return 1;
  v8 = TargetEntityList;
  if ( !TargetEntityList->max_length )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  max_length = v8->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = (UserShopMaster_o *)Instance;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= LODWORD(v8->max_length) )
        sub_2213CE4(Instance);
      v14 = v8->m_Items[v12];
      if ( !v14 )
        break;
      shopId = v14->fields.shopId;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v9);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v9);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v11 )
        break;
      Instance = (DataManager_o *)UserShopMaster__TryGetEntity(
                                    v11,
                                    &entity,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    shopId,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v13 += entity->fields.num;
        if ( v13 >= limitNum )
          return 1;
      }
      if ( (_DWORD)max_length == (_DWORD)++v12 )
        return 0;
    }
LABEL_26:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


bool CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserShopMaster_o *v8; // x21
  unsigned __int64 v9; // x24
  int v10; // w23
  __int64 max_length; // x25

  if ( (byte_596F5DE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5DE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_25;
  if ( (int)values->max_length >= 1 )
  {
    v8 = (UserShopMaster_o *)Instance;
    v9 = 0;
    v10 = 0;
    max_length = (unsigned int)values->max_length;
    while ( 1 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( v9 >= LODWORD(values->max_length) )
        sub_2213CE4(Instance);
      if ( !v8 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v8,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    values->m_Items[v9],
                                    0);
      if ( !Instance )
        break;
      ++v9;
      v10 += HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( max_length == v9 )
        return num > 0 && v10 == num;
    }
LABEL_25:
    sub_2213CDC(Instance, v6);
  }
  v10 = 0;
  return num > 0 && v10 == num;
}


bool CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  il2cpp_array_size_t max_length; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x23
  ShopGroupEntity_o *v10; // x8
  ShopEntity_o *v11; // x21

  if ( (byte_596F5F4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_20;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( !TargetEntityList )
    return (char)TargetEntityList;
  v6 = TargetEntityList;
  if ( !TargetEntityList->max_length )
  {
LABEL_17:
    LOBYTE(TargetEntityList) = 0;
    return (char)TargetEntityList;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_2213CDC(Instance, v4);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  max_length = v6->max_length;
  if ( (int)max_length < 1 )
    goto LABEL_17;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= LODWORD(v6->max_length) )
      sub_2213CE4(Instance);
    v10 = v6->m_Items[v9];
    if ( !v10 || !v8 )
      goto LABEL_20;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v8,
                 v10->fields.shopId,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v11 = (ShopEntity_o *)Instance;
      Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v11, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( (_DWORD)max_length == (_DWORD)++v9 )
      goto LABEL_17;
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_596F629 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F629 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0);
  return (char)MissionEntity;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsStartingMember(
        int32_t targetSvtId,
        int32_t targetLimitCount,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *player_datalist; // x21
  int *p_size; // x23
  int32_t size; // w24
  BalanceConfig_c *v13; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v15; // w24
  int32_t v16; // w22
  int v17; // w27
  __int64 v18; // x2
  Il2CppClass *klass; // x20
  void *monitor; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Master_object; // x21
  UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  __int64 v25; // x2
  UserServantEntity_array *v26; // x21
  BalanceConfig_c *v27; // x0
  bool v28; // w22
  unsigned __int64 v30; // x26
  UserServantEntity_o **m_Items; // x29
  __int64 DeckMainMemberMax; // x8
  UserServantEntity_o *v33; // x8
  __int64 v34; // x23
  __int64 v35; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_596F64C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F64C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetLimitCount, battleData);
  Item = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0, 0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( battleData )
    {
      player_datalist = (System_Collections_Generic_List_object__o *)battleData->fields.player_datalist;
      if ( player_datalist )
      {
        p_size = &player_datalist->fields._size;
        size = player_datalist->fields._size;
        v13 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v9);
          v13 = BalanceConfig_TypeInfo;
        }
        static_fields = v13->static_fields;
        if ( size >= static_fields->DeckMainMemberMax )
        {
          if ( !*(&v13->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v13, v8, v9);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          p_size = &static_fields->DeckMainMemberMax;
        }
        v15 = *p_size;
        if ( *p_size >= 1 )
        {
          v16 = 0;
          v17 = targetLimitCount - (targetLimitCount < 11);
          while ( 1 )
          {
            if ( System_Collections_Generic_List_object___get_Item(
                   player_datalist,
                   v16,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       player_datalist,
                       v16,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
              if ( !Item )
                goto LABEL_56;
              klass = Item[4].klass;
              monitor = Item[4].monitor;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v18);
              *(_QWORD *)&v36.fields.currentCryptoKey = klass;
              *(_QWORD *)&v36.fields.fakeValue = monitor;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0) == targetSvtId )
              {
                if ( v17 < 0 )
                  return 1;
                Item = System_Collections_Generic_List_object___get_Item(
                         player_datalist,
                         v16,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
                if ( !Item )
                  goto LABEL_56;
                if ( BattleServantData__getDispLimitCount((BattleServantData_o *)Item, 0, 0) == v17 )
                  return 1;
              }
            }
            if ( v15 == ++v16 )
              return 0;
          }
        }
      }
      return 0;
    }
LABEL_56:
    sub_2213CDC(Item, v8);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v21, v22);
  Item = (Il2CppObject *)TutorialFlag__Get_47388504(126, 0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !Master_object )
      goto LABEL_56;
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            (UserDeckMaster_o *)Master_object,
                                            0);
  }
  else
  {
    if ( !Master_object )
      goto LABEL_56;
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            (UserDeckMaster_o *)Master_object,
                                            0);
  }
  v26 = UserServantListFromDeckReaveHeroine;
  if ( !UserServantListFromDeckReaveHeroine )
    return 0;
  v27 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v25);
    v27 = BalanceConfig_TypeInfo;
  }
  if ( v27->static_fields->DeckMainMemberMax > SLODWORD(v26->max_length) )
    return 0;
  v30 = 0;
  m_Items = v26->m_Items;
  while ( 1 )
  {
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, v8, v25);
      v27 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v27->static_fields->DeckMainMemberMax;
    v28 = (__int64)v30 < DeckMainMemberMax;
    if ( (__int64)v30 >= DeckMainMemberMax )
      return v28;
    if ( v30 >= LODWORD(v26->max_length) )
      goto LABEL_57;
    v33 = m_Items[v30];
    if ( v33 )
    {
      v34 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v25);
      *(_QWORD *)&v37.fields.currentCryptoKey = v34;
      *(_QWORD *)&v37.fields.fakeValue = v35;
      v27 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v37, 0);
      if ( (_DWORD)v27 == targetSvtId )
      {
        if ( !targetLimitCount )
          return v28;
        if ( v30 >= LODWORD(v26->max_length) )
LABEL_57:
          sub_2213CE4(v27);
        Item = (Il2CppObject *)m_Items[v30];
        if ( !Item )
          goto LABEL_56;
        if ( UserServantEntity__getDispLimitCount((UserServantEntity_o *)Item, 0, 0) == targetLimitCount - 1 )
          return v28;
      }
    }
    v27 = BalanceConfig_TypeInfo;
    ++v30;
  }
}


bool CondType__IsSuperBossDamageAbove(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int32_t v6; // w21
  int32_t v7; // w20

  if ( (byte_596F631 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F631 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal, method);
  result = 0;
  if ( (unsigned int)(condId - 100) <= 0xFFFFFF38 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal, method);
      return CondType__GetSuperBossDamageValue(v6, v7, method) >= condVal;
    }
  }
  return result;
}


bool CondType__IsSuperBossDamageBellow(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int32_t v6; // w21
  int32_t v7; // w20

  if ( (byte_596F632 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F632 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal, method);
  result = 0;
  if ( (unsigned int)(condId - 100) <= 0xFFFFFF38 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal, method);
      return CondType__GetSuperBossDamageValue(v6, v7, method) <= condVal;
    }
  }
  return result;
}


bool CondType__IsSuperBossValueEqual(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int32_t v6; // w20
  int32_t v7; // w21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *MasterData_object; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F630 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F630 = 1;
  }
  entity = 0;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal, method);
  result = 0;
  if ( (unsigned int)(condId - 100) <= 0xFFFFFF38 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_20;
      Instance = (DataManager_o *)UserSuperBossMaster__TryGetEntity(
                                    (UserSuperBossMaster_o *)MasterData_object,
                                    &entity,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v6,
                                    v7,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_20:
        sub_2213CDC(Instance, v9);
      }
      return 0;
    }
  }
  return result;
}


bool CondType__IsSvtEquipFriendShipHaving(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_596F601 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F601 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v2);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0) > 0;
}


bool CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_596F603 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F603 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v2);
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip((UserServantStorageMaster_o *)Instance, 0) > 0;
}


bool CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserEventServantFatigueMaster_o *v7; // x21
  int64_t RecoverySvtIdList; // x0
  int64_t v9; // x22
  unsigned __int64 v10; // x26
  int32_t v11; // w27
  __int64 v12; // x28
  int64_t v13; // x23
  __int64 v14; // x2
  Il2CppClass *klass; // x23
  void *monitor; // x24
  int32_t v17; // w0
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t v20; // x23
  bool isRecover; // [xsp+4h] [xbp-6Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_596F5F3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5F3 = 1;
  }
  recoverAt = 0;
  isRecover = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0 )
  {
LABEL_25:
    sub_2213CDC(Instance, v6);
  }
  v7 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0);
  if ( RecoverySvtIdList )
  {
    v9 = RecoverySvtIdList;
    if ( (int)*(_QWORD *)(RecoverySvtIdList + 24) < 1 )
    {
LABEL_22:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v10 = 0;
    v11 = 0;
    v12 = (unsigned int)*(_QWORD *)(RecoverySvtIdList + 24);
    while ( 1 )
    {
      if ( v10 >= *(unsigned int *)(v9 + 24) )
        sub_2213CE4(RecoverySvtIdList);
      v13 = *(_QWORD *)(v9 + 32 + 8 * v10);
      if ( v13 < 1 )
        goto LABEL_21;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_25;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v13,
                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_25;
      klass = Instance[5].klass;
      monitor = Instance[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v14);
      *(_QWORD *)&v24.fields.currentCryptoKey = klass;
      *(_QWORD *)&v24.fields.fakeValue = monitor;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v24, 0);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v7, &recoverAt, &isRecover, eventId, v17, 0);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v20 = recoverAt;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v19);
        RecoverySvtIdList = NetworkManager__getTime(0);
        if ( v20 - RecoverySvtIdList > 0 )
          goto LABEL_21;
        ++v11;
      }
      if ( v11 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_21:
      if ( v12 == ++v10 )
        goto LABEL_22;
    }
  }
  return RecoverySvtIdList;
}


bool CondType__IsTargetIdsCommonCount(
        System_Func_int__int__o *countFunc,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  System_Func_int__int__o *v7; // x21
  unsigned __int64 v8; // x22
  int32_t v9; // w23

  if ( !targetIds )
    goto LABEL_11;
  max_length = targetIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = countFunc;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_2213CE4(countFunc);
      if ( !v7 )
        break;
      v9 += ((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t, const MethodInfo *))v7->fields.invoke_impl)(
              v7->fields.method_code,
              (unsigned int)targetIds->m_Items[v8],
              v7->fields.method,
              method);
      countFunc = (System_Func_int__int__o *)(v9 >= targetNum);
      if ( v9 < targetNum )
      {
        LODWORD(max_length) = targetIds->max_length;
        if ( (__int64)++v8 < (int)max_length )
          continue;
      }
      return (char)countFunc;
    }
LABEL_11:
    sub_2213CDC(countFunc, targetIds);
  }
  LOBYTE(countFunc) = 0;
  return (char)countFunc;
}


bool CondType__IsTotalTdLvCond(int32_t condType, int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t ServantHavingTdLvCount; // w0
  int v10; // w8

  if ( (byte_596F60B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F60B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
  }
  ServantHavingTdLvCount = UserServantMaster__GetServantHavingTdLvCount((UserServantMaster_o *)Instance, svtId, 0);
  v10 = limitCount - ServantHavingTdLvCount;
  switch ( condType )
  {
    case 'p':
      return v10 >= 0;
    case 'o':
      return v10 < 1;
    case 'n':
      return limitCount == ServantHavingTdLvCount;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsUseEventPassiveSkillGivenItem(int32_t eventId, int32_t itemId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_596F65B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596F65B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&itemId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  return UserEventItemLinkSvtMaster__ExistsEventItem((UserEventItemLinkSvtMaster_o *)Master_object, eventId, itemId, 0);
}


bool CondType__IsUserEventStatus(int32_t eventId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UserEventEntity_o *v12; // x20
  Il2CppType *v13; // x21
  System_Type_o *TypeFromHandle; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x22
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F60D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&EventStatus_Type_var);
    sub_2213A60(&EventStatus_Type_TypeInfo);
    byte_596F60D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_2213CDC(Instance, v6);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       eventId,
                       0);
  if ( EntityDefinitely )
  {
    v12 = EntityDefinitely;
    v13 = EventStatus_Type_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v10, v11);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v13, 0);
    v19 = flag;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v19);
    if ( !*(_DWORD *)(qword_5984398 + 228) )
      j_il2cpp_runtime_class_init_0(qword_5984398, v15, v16);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v17, 0)
                            && UserEventEntity__getEventFlag(v12, flag, 0);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool CondType__IsUserQuestStatus(int32_t questId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UserQuestEntity_o *v12; // x20
  Il2CppType *v13; // x21
  System_Type_o *TypeFromHandle; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x22
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F60E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserQuestEntity_StatusKind_var);
    sub_2213A60(&UserQuestEntity_StatusKind_TypeInfo);
    byte_596F60E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_2213CDC(Instance, v6);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   (UserQuestMaster_o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   questId,
                   0);
  if ( EntityFromId )
  {
    v12 = EntityFromId;
    v13 = UserQuestEntity_StatusKind_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v10, v11);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v13, 0);
    v19 = flag;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v19);
    if ( !*(_DWORD *)(qword_5984398 + 228) )
      j_il2cpp_runtime_class_init_0(qword_5984398, v15, v16);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v17, 0)
                        && UserQuestEntity__HasStatus_50129912(v12, flag, 0);
  }
  return (unsigned __int8)EntityFromId & 1;
}


bool CondType__IsUserShopStatus(int32_t shopId, int32_t flagKind, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UserShopEntity_o *v12; // x20
  Il2CppType *v13; // x21
  System_Type_o *TypeFromHandle; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x22
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F624 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&UserShopFlag_FlagKind_var);
    sub_2213A60(&UserShopFlag_FlagKind_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F624 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_2213CDC(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       shopId,
                       0);
  if ( EntityDefinitely )
  {
    v12 = EntityDefinitely;
    v13 = UserShopFlag_FlagKind_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v10, v11);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v13, 0);
    v19 = flagKind;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v19);
    if ( !*(_DWORD *)(qword_5984398 + 228) )
      j_il2cpp_runtime_class_init_0(qword_5984398, v15, v16);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v17, 0)
                            && UserShopEntity__CheckFlagKind(v12, flagKind, 0);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsValidPrivilege(
        int32_t privilegeId,
        int32_t privilegeNum,
        int64_t *startedAt,
        int64_t *endedAt,
        const MethodInfo *method)
{
  DataManager_c *v9; // x0
  int v10; // w8
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Master_object; // x23
  _QWORD *p_image; // x0
  UserPrivilegeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596F655 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F655 = 1;
  }
  v9 = DataManager_TypeInfo;
  entity = 0;
  v10 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *startedAt = 0;
  *endedAt = 0;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v9, *(_QWORD *)&privilegeNum, startedAt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object )
    goto LABEL_19;
  if ( !UserPrivilegeMaster__TryGetEntity(
          (UserPrivilegeMaster_o *)Master_object,
          &entity,
          *(_QWORD *)(p_image[23] + 64LL),
          privilegeId,
          0) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
    goto LABEL_19;
  if ( !UserPrivilegeEntity__IsEnabledNum(entity, privilegeNum, 0) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
LABEL_19:
    sub_2213CDC(p_image, v11);
  return UserPrivilegeEntity__IsValidPeriod(entity, startedAt, endedAt, 0, 0);
}


bool CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 naturalAligment; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t slot; // w21
  int32_t idx; // w22
  int32_t v17; // w0
  int32_t v19; // w0
  int32_t v20; // w1
  const MethodInfo *v21; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_596F5F7 & 1) == 0 )
  {
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596F5F7 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0 )
LABEL_16:
    sub_2213CDC(Instance, v6);
  naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
  {
    sub_221405C(Instance, EventRewardRootComponent_TypeInfo, v7, v8);
    return CondType__IsEquipWithTargetCostume(v19, v20, v21);
  }
  NowEventVoicePlayEntity = EventRewardRootComponent__get_NowEventVoicePlayEntity(
                              (EventRewardRootComponent_o *)Instance,
                              0);
  if ( !NowEventVoicePlayEntity )
    return 1;
  v13 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.fakeValue;
  slot = NowEventVoicePlayEntity->fields.slot;
  idx = NowEventVoicePlayEntity->fields.idx;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v17, 0);
  if ( !byte_596A852 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A852 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


bool CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F5E6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F5E6 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          svtId,
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_2213CDC(Instance, v6);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0);
}


bool CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *ClearWarIdList; // x0
  __int64 v5; // x1
  int max_length; // w8
  int v7; // w9

  if ( (byte_596F616 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_596F616 = 1;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, method, v2);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0);
  if ( !ClearWarIdList )
    sub_2213CDC(0, v5);
  max_length = ClearWarIdList->max_length;
  if ( max_length < 1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    do
    {
      if ( max_length == v7 )
        sub_2213CE4(ClearWarIdList);
      if ( ClearWarIdList->m_Items[v7] == condWarId )
        break;
      ++v7;
    }
    while ( (max_length & ~(max_length >> 31)) != v7 );
  }
  return v7 < max_length;
}


int32_t CondType__LatestMainScenarioWarClear(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  void *EntityList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *v6; // x19
  CondType___c_c *v7; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__172_0; // x20
  Il2CppObject *v10; // x21
  struct CondType___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  CondType___c_c *v20; // x0
  struct CondType___c_StaticFields *v21; // x8
  System_Predicate_object__o *_9__172_1; // x20
  Il2CppObject *v23; // x21
  struct CondType___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  const MethodInfo *v33; // x3
  int32_t v34; // w19

  if ( (byte_596F622 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_WarEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarEntity__get_Count__);
    sub_2213A60(&System_Predicate_WarEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CondType___c__LatestMainScenarioWarClear_b__172_0__);
    sub_2213A60(&Method_CondType___c__LatestMainScenarioWarClear_b__172_1__);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F622 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v2);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0);
  if ( EntityList )
  {
    v6 = (System_Collections_Generic_List_object__o *)EntityList;
    if ( *((_DWORD *)EntityList + 6) )
    {
      v7 = CondType___c_TypeInfo;
      if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v4, v5);
        v7 = CondType___c_TypeInfo;
      }
      static_fields = v7->static_fields;
      _9__172_0 = (System_Comparison_T__o *)static_fields->__9__172_0;
      if ( !_9__172_0 )
      {
        if ( !*(&v7->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v7, v4, v5);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v10 = (Il2CppObject *)static_fields->__9;
        _9__172_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_WarEntity__TypeInfo);
        System_Comparison_object____ctor(_9__172_0, v10, Method_CondType___c__LatestMainScenarioWarClear_b__172_0__, 0);
        v11 = CondType___c_TypeInfo->static_fields;
        v11->__9__172_0 = (struct System_Comparison_WarEntity__o *)_9__172_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v11->__9__172_0,
          (int32_t)_9__172_0,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      System_Collections_Generic_List_object___Sort_71849708(
        v6,
        _9__172_0,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_WarEntity__Sort__);
      v20 = CondType___c_TypeInfo;
      if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v18, v19);
        v20 = CondType___c_TypeInfo;
      }
      v21 = v20->static_fields;
      _9__172_1 = (System_Predicate_object__o *)v21->__9__172_1;
      if ( !_9__172_1 )
      {
        if ( !*(&v20->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v20, v18, v19);
          v21 = CondType___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)v21->__9;
        _9__172_1 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_WarEntity__TypeInfo);
        System_Predicate_object____ctor(_9__172_1, v23, Method_CondType___c__LatestMainScenarioWarClear_b__172_1__, 0);
        v24 = CondType___c_TypeInfo->static_fields;
        v24->__9__172_1 = (struct System_Predicate_WarEntity__o *)_9__172_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v24->__9__172_1,
          (int32_t)_9__172_1,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      EntityList = System_Collections_Generic_List_object___Find(
                     v6,
                     (System_Predicate_T__o *)_9__172_1,
                     (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_WarEntity__Find__);
      if ( EntityList )
      {
        v34 = *((_DWORD *)EntityList + 25);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v31, v32);
        LODWORD(EntityList) = CondType__IsQuestClear_47284152(v34, -1, 0, v33);
      }
    }
    else
    {
      LODWORD(EntityList) = 0;
    }
  }
  return (int)EntityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CondType__OpenConditionText(
        int32_t condType,
        int32_t condValue,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x19
  LocalizationManager_c *v11; // x0

  if ( (byte_596F597 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3868/*"COND_TYPE_NONE"*/);
    byte_596F597 = 1;
  }
  if ( condType > 8 )
  {
    if ( condType <= 10 )
    {
      if ( condType == 9 )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
        return CondType__OpenConditionTextServantFriendship(condValue, textType, (const MethodInfo *)textType);
      }
      else
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
        return CondType__OpenConditionTextServantGroup(condValue, textType, (const MethodInfo *)textType);
      }
    }
    else
    {
      switch ( condType )
      {
        case 11:
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
          return CondType__OpenConditionTextEvent(condValue, textType, (const MethodInfo *)textType);
        case 14:
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
          return CondType__OpenConditionTextPurchaseQpShop(condValue, textType, (const MethodInfo *)textType);
        case 15:
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
          return CondType__OpenConditionTextPurchaseStoneShop(condValue, textType, (const MethodInfo *)textType);
        default:
LABEL_44:
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&condValue, textType);
          if ( !byte_596B976 )
          {
            sub_2213A60(&LocalizationManager_TypeInfo);
            byte_596B976 = 1;
          }
          v11 = LocalizationManager_TypeInfo;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&condValue, textType);
            v11 = LocalizationManager_TypeInfo;
          }
          return v11->static_fields->unknownNameText;
      }
    }
  }
  else
  {
    if ( condType > 5 )
    {
      if ( condType == 6 )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
        return CondType__OpenConditionTextServantLevel(condValue, textType, (const MethodInfo *)textType);
      }
      else if ( condType == 7 )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
        return CondType__OpenConditionTextServantLimit(condValue, textType, (const MethodInfo *)textType);
      }
      else
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
        return CondType__OpenConditionTextServantGet(condValue, textType, (const MethodInfo *)textType);
      }
    }
    if ( condType )
    {
      if ( condType == 1 )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue, textType);
        return CondType__OpenConditionTextQuestClear(condValue, textType, (const MethodInfo *)textType);
      }
      goto LABEL_44;
    }
    v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_3868/*"COND_TYPE_NONE"*/, textType, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    return LocalizationManager__Get(v10, 0);
  }
}


System_String_o *CondType__OpenConditionTextEvent(int32_t condId, System_String_o *textType, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x19
  System_String_o *v11; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_596F5B9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3867/*"COND_TYPE_EVENT"*/);
    byte_596F5B9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_3867/*"COND_TYPE_EVENT"*/, textType, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  Instance = (DataManager_o *)LocalizationManager__Get(v10, 0);
  if ( !Entity )
LABEL_9:
    sub_2213CDC(Instance, v6);
  v11 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName((EventEntity_o *)Entity, 0);
  return System_String__Format(v11, EventName, 0);
}


System_String_o *CondType__OpenConditionTextPurchaseQpShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x19

  if ( (byte_596F5BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3869/*"COND_TYPE_PURCHASE_QP_SHOP"*/);
    byte_596F5BC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_3869/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  Instance = (DataManager_o *)LocalizationManager__Get(v10, 0);
  if ( !Entity )
LABEL_9:
    sub_2213CDC(Instance, v6);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0);
}


System_String_o *CondType__OpenConditionTextPurchaseStoneShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x19

  if ( (byte_596F5C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3870/*"COND_TYPE_PURCHASE_STONE_SHOP"*/);
    byte_596F5C1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_3870/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  Instance = (DataManager_o *)LocalizationManager__Get(v10, 0);
  if ( !Entity )
LABEL_9:
    sub_2213CDC(Instance, v6);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0);
}


System_String_o *CondType__OpenConditionTextQuestClear(
        int32_t condQuestId,
        System_String_o *textType,
        const MethodInfo *method)
{
  int v5; // w8
  System_String_o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x19
  LocalizationManager_c *v14; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F59D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3871/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_596F59D = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, textType, method);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         condQuestId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_3871/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
    Master_object = LocalizationManager__Get(v12, 0);
    if ( entity )
      return System_String__Format(Master_object, (Il2CppObject *)entity[1].monitor, 0);
LABEL_18:
    sub_2213CDC(Master_object, v7);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v14 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    v14 = LocalizationManager_TypeInfo;
  }
  return v14->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CondType__OpenConditionTextQuestPhaseClear(
        int32_t condQuestId,
        int32_t condQuestPhase,
        System_String_o *textType,
        bool getWarName,
        const MethodInfo *method)
{
  WarMaster_o *Master_object; // x0
  __int64 v10; // x1
  WarEntity_o *QuestId; // x0
  WarEntity_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *v22; // x19
  System_String_o *v23; // x19
  Il2CppObject *monitor; // x20
  Il2CppObject *v25; // x0
  LocalizationManager_c *v26; // x0
  Il2CppObject *v27; // [xsp+0h] [xbp-40h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  v28 = condQuestPhase;
  if ( (byte_596F5A1 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3872/*"COND_TYPE_QUEST_PHASE_CLEAR"*/);
    sub_2213A60(&StringLiteral_3871/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_596F5A1 = 1;
  }
  v27 = 0;
  if ( getWarName )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condQuestPhase, textType);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_object )
      goto LABEL_31;
    QuestId = WarMaster__getByLastQuestId(Master_object, condQuestId, 0);
    if ( QuestId )
    {
      v12 = QuestId;
      v15 = System_String__Concat_75651716((System_String_o *)StringLiteral_3871/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
      v16 = LocalizationManager__Get(v15, 0);
      return System_String__Format(v16, (Il2CppObject *)v12->fields.name, 0);
    }
  }
  if ( condQuestPhase <= 0 )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condQuestPhase, textType);
    return CondType__OpenConditionTextQuestClear(condQuestId, textType, (const MethodInfo *)textType);
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condQuestPhase, textType);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_31;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v27,
           condQuestId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v22 = System_String__Concat_75651716((System_String_o *)StringLiteral_3872/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
      Master_object = (WarMaster_o *)LocalizationManager__Get(v22, 0);
      if ( v27 )
      {
        v23 = (System_String_o *)Master_object;
        monitor = (Il2CppObject *)v27[1].monitor;
        v25 = (Il2CppObject *)System_Int32__ToString((int32_t)&v28, 0);
        return System_String__Format_75697880(v23, monitor, v25, 0);
      }
LABEL_31:
      sub_2213CDC(Master_object, v10);
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v26 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
      v26 = LocalizationManager_TypeInfo;
    }
    return v26->static_fields->unknownNameText;
  }
}


System_String_o *CondType__OpenConditionTextServantFriendship(
        int32_t condFriendshipRank,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x20
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F5B4 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3873/*"COND_TYPE_SERVANT_FRIENDSHIP"*/);
    byte_596F5B4 = 1;
  }
  v7 = System_String__Concat_75651716((System_String_o *)StringLiteral_3873/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get(v7, 0);
  v11 = condFriendshipRank;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
  return System_String__Format(v8, v9, 0);
}


System_String_o *CondType__OpenConditionTextServantGet(
        int32_t condSvtId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x19
  System_String_o *v11; // x19
  Il2CppObject *Name; // x1

  if ( (byte_596F5B0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3874/*"COND_TYPE_SERVANT_GET"*/);
    byte_596F5B0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condSvtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_3874/*"COND_TYPE_SERVANT_GET"*/, textType, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  Instance = (DataManager_o *)LocalizationManager__Get(v10, 0);
  if ( !Entity )
LABEL_9:
    sub_2213CDC(Instance, v6);
  v11 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0, 0, 0);
  return System_String__Format(v11, Name, 0);
}


System_String_o *CondType__OpenConditionTextServantGroup(
        int32_t condGroup,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x20
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F5B7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3875/*"COND_TYPE_SERVANT_GROUP"*/);
    byte_596F5B7 = 1;
  }
  v7 = System_String__Concat_75651716((System_String_o *)StringLiteral_3875/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get(v7, 0);
  v11 = condGroup;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
  return System_String__Format(v8, v9, 0);
}


System_String_o *CondType__OpenConditionTextServantLevel(
        int32_t condLv,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x20
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F5A6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3876/*"COND_TYPE_SERVANT_LEVEL"*/);
    byte_596F5A6 = 1;
  }
  v7 = System_String__Concat_75651716((System_String_o *)StringLiteral_3876/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get(v7, 0);
  v11 = condLv;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
  return System_String__Format(v8, v9, 0);
}


System_String_o *CondType__OpenConditionTextServantLimit(
        int32_t condLimitCount,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x20
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F5AB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3877/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/);
    byte_596F5AB = 1;
  }
  v7 = System_String__Concat_75651716((System_String_o *)StringLiteral_3877/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get(v7, 0);
  v11 = condLimitCount;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
  return System_String__Format(v8, v9, 0);
}


System_IDisposable_o *CondType__PushFavoriteServantIdOverride(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  CondType_FavoriteServantIdOverrideScope_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_596F662 & 1) == 0 )
  {
    sub_2213A60(&CondType_FavoriteServantIdOverrideScope_TypeInfo);
    byte_596F662 = 1;
  }
  v5 = (CondType_FavoriteServantIdOverrideScope_o *)sub_2213CCC(CondType_FavoriteServantIdOverrideScope_TypeInfo);
  CondType_FavoriteServantIdOverrideScope___ctor(v5, servantId, limitCount, v6);
  return (System_IDisposable_o *)v5;
}


bool CondType__RaidBattleProgressAbove(int32_t questId, float rate, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  int32_t klass; // w19
  __int64 v9; // x1
  __int64 v10; // x2
  SpotPathEntity_o *v11; // x19
  int32_t monitor_high; // w20
  int32_t v13; // w21

  if ( (byte_596F58D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_2213A60(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&EventSpotMoveManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F58D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  klass = (int32_t)Entity[3].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0 )
  {
LABEL_13:
    sub_2213CDC(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             klass,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v11 = (SpotPathEntity_o *)Entity;
    monitor_high = HIDWORD(Entity[1].monitor);
    v13 = (int32_t)Entity[2].klass;
    if ( !*(&EventSpotMoveManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo, v9, v10);
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(monitor_high, v13, v11, 0) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


bool CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v9; // [xsp+8h] [xbp-38h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596F58C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F58C = 1;
  }
  entity = 0;
  v9 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                                 (TotalEventRaidMaster_o *)Instance,
                                 &v9,
                                 eventId,
                                 targetId,
                                 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_15;
      defeatedAt = v9->fields.defeatedAt;
      if ( defeatedAt )
      {
        if ( entity )
          return defeatedAt <= entity->fields.timeLimitAt;
LABEL_15:
        sub_2213CDC(Instance, v6);
      }
    }
  }
  return 0;
}


bool CondType__TryCheckSelfIndividuality(
        bool *result,
        int32_t individuality,
        BattleVoicePlayCondArgs_o *condArgs,
        const MethodInfo *method)
{
  *result = 0;
  if ( condArgs )
    *result = BattleVoicePlayCondArgs__CheckServantIndividuality(condArgs, individuality, 0);
  return condArgs != 0;
}


bool CondType__TrySuperBossPrimaryKey(int32_t condId, int32_t *eventId, int32_t *bossId, const MethodInfo *method)
{
  bool v4; // zf

  *eventId = condId / 100;
  *bossId = condId % 100;
  if ( *eventId )
    v4 = condId % 100 == 0;
  else
    v4 = 1;
  return !v4;
}


bool CondType__UserEventMapValueContains(int32_t mapId, int64_t target, const MethodInfo *method)
{
  MapEntity_array *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  MapEntity_o *v8; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v10; // x21

  if ( (byte_596F623 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_long___);
    sub_2213A60(&Method_DataManager_GetMasterData_MapMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F623 = 1;
  }
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = MapMaster__GetEntityListByMapId((MapMaster_o *)Instance, mapId, 0);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  if ( !max_length )
  {
    LOBYTE(Entity) = 0;
    return (char)Entity;
  }
  if ( !(_DWORD)max_length )
    sub_2213CE4(Instance);
  v8 = Instance->m_Items[0];
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v8 || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v8->fields.warId,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0 )
  {
LABEL_18:
    sub_2213CDC(Instance, v6);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_50062080(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v10 + 24),
                                    mapId,
                                    0);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_3A2E664 *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t CondType___CountServantClassTotalFriendShipUp_g__CountFunc_163_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_2213CDC(0, method);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0);
}


int32_t CondType___CountServantClassTotalLevelUp_g__CountFunc_166_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8

  if ( !collection )
    sub_2213CDC(0, method);
  maxLv = collection->fields.maxLv;
  if ( maxLv <= 0 )
    return 0;
  else
    return maxLv - 1;
}


int32_t CondType___CountServantClassTotalLimitUp_g__CountFunc_161_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_2213CDC(0, method);
  return collection->fields.maxLimitCount;
}


int32_t CondType___CountServantClassTotalSkillLevelUp_g__CountFunc_194_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  __int64 v2; // x10
  UserServantCollectionEntity_o *v3; // x8
  __int64 v4; // x9
  __int64 v5; // x0
  int32_t *p_fakeValue; // x8
  int v7; // t1

  if ( !collection
    || (collection = (UserServantCollectionEntity_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0)) == 0 )
  {
    sub_2213CDC(collection, method);
  }
  v2 = *(_QWORD *)&collection->fields.svtId.fields.currentCryptoKey;
  v3 = collection;
  if ( (int)v2 < 1 )
  {
    LODWORD(v5) = 0;
  }
  else
  {
    v4 = (unsigned int)v2 & ~((int)v2 >> 31);
    v5 = 0;
    v2 = (unsigned int)v2;
    p_fakeValue = &v3->fields.svtId.fields.fakeValue;
    do
    {
      if ( !v2 )
        sub_2213CE4(v5);
      v7 = *p_fakeValue++;
      --v4;
      --v2;
      v5 = (unsigned int)(v5 + v7 - 1);
    }
    while ( v4 );
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool CondType___IsReleaseRaidUiQuestClear_g__IsQuestClearCond_214_0(
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_596F665 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F665 = 1;
  }
  switch ( type )
  {
    case 46:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&value);
      return CondType__IsQuestPhaseClear_47347536(targetId, value, -1, 0, v4);
    case 32:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&value);
      return CondType__IsQuestGroupClear(0, targetId, value, 0, v4);
    case 1:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&value);
      return CondType__IsQuestClear_47284152(targetId, -1, 0, method);
    default:
      return 1;
  }
}


bool CondType__checkCondTypeRaidAlive(int32_t targetId, int32_t condValue, bool alive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  char v9; // w8
  TotalEventRaidEntity_o *v11; // [xsp+0h] [xbp-40h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F58E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F58E = 1;
  }
  v11 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0) )
  {
LABEL_12:
    v9 = 0;
    return v9 & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0 )
  {
LABEL_14:
    sub_2213CDC(Instance, v8);
  }
  Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                               (TotalEventRaidMaster_o *)Instance,
                               &v11,
                               targetId,
                               condValue,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v11 )
    goto LABEL_14;
  v9 = (entity->fields.maxHp <= v11->fields.totalDamage) ^ alive;
  return v9 & 1;
}


bool CondType__checkCondTypeRaidGroupAlive(int32_t targetId, int32_t condValue, bool alive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x21
  int max_length; // w8
  bool v11; // w23
  TotalEventRaidMaster_o *v12; // x22
  __int64 v13; // x24
  EventRaidEntity_o *v14; // x26
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596F58F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F58F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_17;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, condValue, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_17;
  max_length = EventRaidEntityArray->max_length;
  v11 = max_length > 0;
  if ( max_length >= 1 )
  {
    v12 = (TotalEventRaidMaster_o *)Instance;
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        sub_2213CE4(Instance);
      v14 = EventRaidEntityArray->m_Items[v13];
      if ( !v14 || !v12 )
        break;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v12, &entity, targetId, v14->fields.day, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return ((v11 ^ alive) & 1) == 0;
      if ( !entity )
        break;
      if ( v14->fields.maxHp <= entity->fields.totalDamage )
      {
        max_length = EventRaidEntityArray->max_length;
        v11 = (int)++v13 < max_length;
        if ( (int)v13 < max_length )
          continue;
      }
      return ((v11 ^ alive) & 1) == 0;
    }
LABEL_17:
    sub_2213CDC(Instance, v8);
  }
  return ((v11 ^ alive) & 1) == 0;
}


bool CondType__checkRaidTimeLimitOver(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x2
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F58B & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F58B = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0) )
    return 1;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !entity )
LABEL_16:
    sub_2213CDC(Instance, v6);
  if ( (__int64)Instance <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v9);
    return !CondType__TimeLimitRaidDead(targetId, condValue, v9);
  }
}


void CondType_CountDelegate___ctor(
        CondType_CountDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200C3C0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200C360;
}


System_IAsyncResult_o *CondType_CountDelegate__BeginInvoke(
        CondType_CountDelegate_o *this,
        int32_t id,
        int32_t level,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+28h] [xbp-28h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v11 = level;
  v12 = id;
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(qword_5984348, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


int32_t CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_2213A18(result, 0, method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return *(_DWORD *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


int32_t CondType_CountDelegate__Invoke(
        CondType_CountDelegate_o *this,
        int32_t id,
        int32_t level,
        const MethodInfo *method)
{
  return ((int32_t (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           id,
           level,
           this->fields.method);
}


void CondType_FavoriteServantIdOverrideScope___ctor(
        CondType_FavoriteServantIdOverrideScope_o *this,
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  CondType_c *v9; // x0
  struct CondType_StaticFields *static_fields; // x8

  if ( (byte_596F666 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F666 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = CondType_TypeInfo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
    v9 = CondType_TypeInfo;
  }
  static_fields = v9->static_fields;
  *(_QWORD *)&this->fields.previousServantId = *(_QWORD *)&static_fields->favoriteServantIdOverride;
  static_fields->favoriteServantIdOverride = servantId;
  static_fields->favoriteServantLimit = limitCount;
}


void CondType_FavoriteServantIdOverrideScope__Dispose(
        CondType_FavoriteServantIdOverrideScope_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t previousServantId; // w20
  CondType_c *v5; // x0
  struct CondType_StaticFields *static_fields; // x8
  int32_t previousServantLimit; // w9

  if ( (byte_596F667 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F667 = 1;
  }
  if ( !this->fields.isDisposed )
  {
    previousServantId = this->fields.previousServantId;
    v5 = CondType_TypeInfo;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
      v5 = CondType_TypeInfo;
    }
    static_fields = v5->static_fields;
    previousServantLimit = this->fields.previousServantLimit;
    this->fields.isDisposed = 1;
    static_fields->favoriteServantIdOverride = previousServantId;
    static_fields->favoriteServantLimit = previousServantLimit;
  }
}


void CondType___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F668 & 1) == 0 )
  {
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F668 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CondType___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CondType___c_TypeInfo->static_fields->__9 = (struct CondType___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CondType___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CondType___c___ctor(CondType___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_1(
        CondType___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return UserQuestEntity__IsResetStatus(x, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_2(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return !UserQuestEntity__IsResetStatus(entity, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_3(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.clearNum >= 1 && !UserQuestEntity__IsResetStatus(entity, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_4(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.clearNum > 0;
}


int32_t CondType___c___CountClassBoardSquareReleased_b__199_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_596F66C & 1) == 0 )
  {
    this = (CondType___c_o *)sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    byte_596F66C = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t CondType___c___CountClassBoardSquareReleased_b__199_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_596F66D & 1) == 0 )
  {
    this = (CondType___c_o *)sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    byte_596F66D = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType___c___GetProgressNumByTargetIds_b__30_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_596F669 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F669 = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&current, *(_QWORD *)&targetId);
  result = CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&current);
  if ( current > result )
    return current;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType___c___GetProgressNumByTargetIds_b__30_1(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_596F66A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F66A = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&current, *(_QWORD *)&targetId);
  result = CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&current);
  if ( current > result )
    return current;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType___c___GetProgressNumByTargetIds_b__30_2(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_596F66B & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F66B = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&current, *(_QWORD *)&targetId);
  result = CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&current);
  if ( current > result )
    return current;
  return result;
}


bool CondType___c___IsClassBoardSquareAllReleased_b__200_0(
        CondType___c_o *this,
        ClassBoardSquareEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_2213CDC(this, 0);
  return !ClassBoardSquareEntity__get_HasLockId(ent, 0) && !ClassBoardSquareEntity__get_IsBlank(ent, 0);
}


bool CondType___c___IsCompleteHighestWaveValue_b__228_0(
        CondType___c_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return QuestPhaseEntity__IsInterruptionQuest(x, 0);
}


bool CondType___c___IsOpenRaidGroupNum_b__213_0(
        CondType___c_o *this,
        QuestReleaseEntity_o *questReleaseEntity,
        const MethodInfo *method)
{
  int32_t type; // w19
  int32_t targetId; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  int32_t ValueInt; // w21

  if ( (byte_596F66E & 1) == 0 )
  {
    this = (CondType___c_o *)sub_2213A60(&CondType_TypeInfo);
    byte_596F66E = 1;
  }
  if ( !questReleaseEntity )
    sub_2213CDC(this, questReleaseEntity);
  type = questReleaseEntity->fields.type;
  targetId = questReleaseEntity->fields.targetId;
  ValueInt = QuestReleaseEntity__getValueInt(questReleaseEntity, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
  return CondType__IsReleaseRaidUiQuestClear(type, targetId, ValueInt, v8);
}


int32_t CondType___c___IsReleaseRaidUiQuestClear_b__214_1(
        CondType___c_o *this,
        CommonReleaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.condGroup;
}


int32_t CondType___c___IsReleaseRaidUiQuestClear_b__214_2(
        CondType___c_o *this,
        System_Linq_IGrouping_int__CommonReleaseEntity__o *g,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__CommonReleaseEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_596F66F & 1) == 0 )
  {
    this = (CondType___c_o *)sub_2213A60(&System_Linq_IGrouping_int__CommonReleaseEntity__TypeInfo);
    byte_596F66F = 1;
  }
  if ( !g )
    sub_2213CDC(this, g);
  klass = g->klass;
  v5 = *(unsigned __int16 *)&g->klass->_2.rank;
  if ( *(_WORD *)&g->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__CommonReleaseEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__CommonReleaseEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_224BC3C(g, System_Linq_IGrouping_int__CommonReleaseEntity__TypeInfo, 0);
  }
  return (*(int32_t (__fastcall **)(System_Linq_IGrouping_int__CommonReleaseEntity__o *, _QWORD))v7)(
           g,
           *(_QWORD *)(v7 + 8));
}


bool CondType___c___IsReleaseRaidUiQuestClear_b__214_3(
        CondType___c_o *this,
        System_Linq_IGrouping_int__CommonReleaseEntity__o *g,
        const MethodInfo *method)
{
  CondType___c_c *v4; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__214_5; // x20
  Il2CppObject *v7; // x21
  struct CondType___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596F670 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_All_CommonReleaseEntity___);
    sub_2213A60(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_2213A60(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_5__);
    sub_2213A60(&CondType___c_TypeInfo);
    byte_596F670 = 1;
  }
  v4 = CondType___c_TypeInfo;
  if ( !*(&CondType___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, g, method);
    v4 = CondType___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__214_5 = (System_Func_object__bool__o *)static_fields->__9__214_5;
  if ( !_9__214_5 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, g, method);
      static_fields = CondType___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__214_5 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__214_5, v7, Method_CondType___c__IsReleaseRaidUiQuestClear_b__214_5__, 0);
    v8 = CondType___c_TypeInfo->static_fields;
    v8->__9__214_5 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__214_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__214_5, (int32_t)_9__214_5, v9, v10, v11, v12, v13, v14);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (System_Func_TSource__bool__o *)_9__214_5,
           (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_CommonReleaseEntity___);
}


bool CondType___c___IsReleaseRaidUiQuestClear_b__214_4(CondType___c_o *this, bool val, const MethodInfo *method)
{
  return val;
}


bool CondType___c___IsReleaseRaidUiQuestClear_b__214_5(
        CondType___c_o *this,
        CommonReleaseEntity_o *e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condType; // w20
  int32_t condId; // w21
  int32_t condNum; // w19

  if ( (byte_596F671 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_2213A60(&CondType_TypeInfo);
    byte_596F671 = 1;
  }
  if ( !e )
    sub_2213CDC(this, e);
  condType = e->fields.condType;
  condId = e->fields.condId;
  condNum = e->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, e, method);
  return CondType___IsReleaseRaidUiQuestClear_g__IsQuestClearCond_214_0(condType, condId, condNum, v3);
}


int32_t CondType___c___LatestMainScenarioWarClear_b__172_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.id - a->fields.id;
}


bool CondType___c___LatestMainScenarioWarClear_b__172_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_2213CDC(this, 0);
  return ent->fields.lastQuestId >= 1 && WarEntity__HasFlag(ent, 128, 0);
}


void CondType___c__DisplayClass117_0___ctor(CondType___c__DisplayClass117_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass117_0___IsEventRaceGoalScriptPlayed_b__0(
        CondType___c__DisplayClass117_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.groupId == x;
}


void CondType___c__DisplayClass162_0___ctor(CondType___c__DisplayClass162_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CondType___c__DisplayClass162_0___CountServantFriendShipClassNum_g__CountFunc_0(
        CondType___c__DisplayClass162_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_2213CDC(this, 0);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0) >= this->fields.friendShipRank;
}


void CondType___c__DisplayClass193_0___ctor(CondType___c__DisplayClass193_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CondType___c__DisplayClass193_0___CountServantTargetSkillLvClassNum_g__CountFunc_0(
        CondType___c__DisplayClass193_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  CondType___c__DisplayClass193_0_o *v3; // x19
  __int64 v4; // x10
  CondType___c__DisplayClass193_0_o *v5; // x8
  __int64 v6; // x9
  __int64 v7; // x0
  void **p_monitor; // x8
  int32_t v9; // t1

  if ( !collection
    || (v3 = this,
        (this = (CondType___c__DisplayClass193_0_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0)) == 0) )
  {
    sub_2213CDC(this, collection);
  }
  v4 = *((_QWORD *)this + 3);
  v5 = this;
  if ( (int)v4 < 1 )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    v6 = (unsigned int)v4 & ~((int)v4 >> 31);
    v7 = 0;
    v4 = (unsigned int)v4;
    p_monitor = &v5[1].monitor;
    do
    {
      if ( !v4 )
        sub_2213CE4(v7);
      v9 = *(_DWORD *)p_monitor;
      p_monitor = (void **)((char *)p_monitor + 4);
      --v6;
      --v4;
      if ( v9 < v3->fields.skillLv )
        v7 = (unsigned int)v7;
      else
        v7 = (unsigned int)(v7 + 1);
    }
    while ( v6 );
  }
  return v7;
}


void CondType___c__DisplayClass199_0___ctor(CondType___c__DisplayClass199_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass199_0___CountClassBoardSquareReleased_b__0(
        CondType___c__DisplayClass199_0_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.classBoardBaseId == this->fields.targetId;
}


void CondType___c__DisplayClass209_0___ctor(CondType___c__DisplayClass209_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass209_0___IsExchangeSvtBuff_b__0(
        CondType___c__DisplayClass209_0_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return this->fields.targetId == entity->fields.eventId;
}


void CondType___c__DisplayClass230_0___ctor(CondType___c__DisplayClass230_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass230_0___CountGrandServantSet_b__0(
        CondType___c__DisplayClass230_0_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  CondType___c__DisplayClass230_0_o *v4; // x20

  v4 = this;
  if ( (byte_596F672 & 1) == 0 )
  {
    this = (CondType___c__DisplayClass230_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_596F672 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.targetIds,
           v4->fields.targetId,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool CondType___c__DisplayClass230_0___CountGrandServantSet_b__1(
        CondType___c__DisplayClass230_0_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.targetNum == this->fields.targetNum;
}


bool CondType___c__DisplayClass230_0___CountGrandServantSet_b__2(
        CondType___c__DisplayClass230_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.targetId )
    return 1;
  if ( !x )
    sub_2213CDC(this, 0);
  return UserServantEntity__getSvtClassId(x, 0, 1, 0) == this->fields.targetId;
}


void CondType___c__DisplayClass23_0___ctor(CondType___c__DisplayClass23_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType___c__DisplayClass23_0___IsOpenWithSumOfProgressCount_b__0(
        CondType___c__DisplayClass23_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_596F673 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F673 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, method);
  return CondType__IsCompleteExchangeServantTargetLevel(targetId, targetNum, method);
}


// local variable allocation has failed, the output may be wrong!
bool CondType___c__DisplayClass23_0___IsOpenWithSumOfProgressCount_b__1(
        CondType___c__DisplayClass23_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_596F674 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F674 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, method);
  return CondType__IsCompleteExchangeServantTargetSkillLevel(targetId, targetNum, method);
}


// local variable allocation has failed, the output may be wrong!
bool CondType___c__DisplayClass23_0___IsOpenWithSumOfProgressCount_b__2(
        CondType___c__DisplayClass23_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_596F675 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596F675 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId, method);
  return CondType__IsCompleteExchangeServantTargetFriendShipRank(targetId, targetNum, method);
}


void CondType___c__DisplayClass242_0___ctor(CondType___c__DisplayClass242_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CondType___c__DisplayClass242_0___CountServantHpReachNum_g__CountFunc_0(
        CondType___c__DisplayClass242_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_2213CDC(this, 0);
  return collection->fields.maxAdjustHp >= this->fields.targetId;
}


void CondType___c__DisplayClass243_0___ctor(CondType___c__DisplayClass243_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CondType___c__DisplayClass243_0___CountServantAtkReachNum_g__CountFunc_0(
        CondType___c__DisplayClass243_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_2213CDC(this, 0);
  return collection->fields.maxAdjustAtk >= this->fields.targetId;
}


void CondType___c__DisplayClass32_0___ctor(CondType___c__DisplayClass32_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass32_0___CheckGroupMaterialQuest_b__0(
        CondType___c__DisplayClass32_0_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.questId == this->fields.condQuestId;
}